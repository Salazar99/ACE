"""Step 5: semantic validation and minimization.

Three separate questions, never conflated:

1. is a clause consistent with the episodes it was mined from  -> evaluate() on the region;
2. does it generalise to executions the miner never saw        -> evaluate() on held-out runs;
3. does it capture a documented reference behavior             -> classify()/match().

Implication is decided by bounded comparison over the observed traces, which is empirical
evidence and not proof: every report carries method="trace-bounded". Swapping in an SMT or
model-checker backend means replacing implies() and leaving the rest untouched.
"""
from __future__ import annotations

from dataclasses import dataclass

from . import formula

TRACE_BOUNDED = "trace-bounded"


def evaluate(corpus, clause: str) -> dict:
    """Support, violations and violation rate of a clause.

    Positions where the antecedent does not match are vacuous: they are counted as neither
    satisfied nor violated, so a clause that never fires reports support 0 rather than a
    perfect score.
    """
    parsed = formula.parse(clause)
    support = violations = 0
    for run in corpus.runs:
        for t in range(len(run)):
            if not parsed.support(run, t):
                continue
            support += 1
            if not parsed.holds(run, t):
                violations += 1
    return {"clause": clause, "support": support, "violations": violations,
            "violation_rate": (violations / support) if support else None,
            "vacuous": support == 0, "method": TRACE_BOUNDED}


def evaluate_under(corpus, clause: str, guards=()) -> dict:
    """Support and violations of a clause at the samples where every guard holds.

    This is what a contract means: `(A, G)` claims G only where A does, so a guarantee is
    checked at the samples inside A's domain and nothing is claimed outside it. The temporal
    evaluation still sees the whole run - only the positions where the obligation is COUNTED
    are restricted - so a response window may legitimately reach across a sample that A
    excludes.
    """
    parsed = formula.parse(clause)
    conditions = [formula.parse(g) for g in guards]
    support = violations = excluded = 0
    for run in corpus.runs:
        for t in range(len(run)):
            if not all(c.holds(run, t) for c in conditions):
                excluded += 1
                continue
            if not parsed.support(run, t):
                continue
            support += 1
            if not parsed.holds(run, t):
                violations += 1
    return {"clause": clause, "guards": list(guards), "support": support,
            "violations": violations, "excluded": excluded,
            "violation_rate": (violations / support) if support else None,
            "vacuous": support == 0, "method": TRACE_BOUNDED}


def holds_everywhere(corpus, clause: str) -> bool:
    result = evaluate(corpus, clause)
    return result["support"] > 0 and result["violations"] == 0


def is_vacuous(corpus, clause: str) -> bool:
    return evaluate(corpus, clause)["support"] == 0


def implies(corpus, left: str, right: str) -> bool:
    """`left` is at least as strong as `right`, bounded by the observed traces.

    For clauses with no antecedent this is implication over the observed positions: every
    position that satisfies left satisfies right.

    Two implications need more care. Once a clause survives the region check it holds at
    EVERY position - satisfied where its antecedent fires, vacuous everywhere else - so
    comparing two of them by satisfaction alone makes every pair mutually equivalent. That
    is not a technicality: it is how a bounded-response clause about a start signal once got
    credited with recovering a reference contract about a multiplier's product. Left is at
    least as strong as right when it

      * fires at least wherever right fires  (support(right) subset of support(left)),
      * responds at least as tightly         (same cycle < next cycle < bounded window), and
      * carries at least as strong a consequent, as a predicate over the corpus.

    A clause with an antecedent and one without are reported incomparable: neither refines
    the other in a way this comparison can witness.
    """
    l, r = formula.parse(left), formula.parse(right)
    if l.is_implication() != r.is_implication():
        return False

    if not l.is_implication():
        lm, rm = _cached(corpus, left), _cached(corpus, right)
        if not any(lm) or any(a & ~b for a, b in zip(lm, rm)):
            return False
        if _unfalsifiable(corpus, lm) and _unfalsifiable(corpus, rm):
            return _covers_predicate(left, right)
        return True

    ls = _cached(corpus, left, "support")
    rs = _cached(corpus, right, "support")
    if not any(ls) or not any(rs):
        return False
    if any(b & ~a for a, b in zip(ls, rs)):
        return False                                    # right fires where left does not
    if not _delays(left) <= _delays(right):
        return False                       # incomparable timing, or right is the tighter one
    left_c, right_c = _consequent(left), _consequent(right)
    if left_c == right_c:
        return True
    # `G(A1 |-> C1)` implies `G(A2 |-> C2)` when A2 implies A1 and C1 implies C2. The
    # consequents are compared as PREDICATES, over the whole corpus - not only where the
    # right-hand clause fires. Restricting the comparison to those samples looks harmless
    # and is not: inside a region both consequents are often constant, so
    # `valid_o == 0 |-> valid_o <= op_a_i` came out as a refinement of a 40-cycle response
    # property about the divider's result. It refines nothing; it is true because the
    # antecedent never fires when the result is small.
    lc, rc = _cached(corpus, left_c), _cached(corpus, right_c)
    if not any(lc) or any(a & ~b for a, b in zip(lc, rc)):
        return False
    if _unfalsifiable(corpus, lc) and _unfalsifiable(corpus, rc):
        return _covers_predicate(left_c, right_c)
    return True


def _unfalsifiable(corpus, masks) -> bool:
    """True when a predicate holds at every sample of the corpus."""
    return all(mask == (1 << len(run)) - 1 for mask, run in zip(masks, corpus.runs))


def _covers_predicate(left: str, right: str) -> bool:
    """Whether `left` is `right` plus possibly more conjuncts, up to spacing and order.

    Needed because two predicates that both hold at every sample are indistinguishable by
    containment: the corpus contains no valuation that separates `ain >= 0` from
    `ain <= 65535 && bin <= 65535`, so mask containment reports them mutually implied and a
    range invariant would be credited with recovering any environment bound. Where the
    traces cannot rank two unfalsifiable predicates, only their syntax can: a conjunction
    that contains all of the other's conjuncts is at least as strong, and equal conjunct
    sets make them equivalent. This is what lets the mined invariant side, which is a
    conjunction, match a reference assumption written as one.
    """
    def conjuncts(text):
        depth, part, out = 0, "", []
        for i, ch in enumerate(text):
            depth += (ch == "(") - (ch == ")")
            if depth == 0 and text[i:i + 2] == "&&":
                out.append(part)
                part = ""
                continue
            if depth == 0 and text[i - 1:i + 1] == "&&":
                continue
            part += ch
        out.append(part)
        return {" ".join(p.strip().strip("()").split()) for p in out if p.strip()}

    return conjuncts(right) <= conjuncts(left)


def _cached(corpus, text: str, kind: str = "holds") -> list:
    """Masks for a clause, memoised on the corpus object: a pairwise sweep asks for the same
    ones k times."""
    cache = corpus.__dict__.setdefault("_mask_cache", {})
    key = (kind, text)
    if key not in cache:
        cache[key] = (support_masks(corpus, text) if kind == "support"
                      else hold_masks(corpus, text))
    return cache[key]


def classify(corpus, mined: str, reference: str) -> str:
    """RQ2-style category of a (mined, reference) pair, on the observed traces."""
    forward = implies(corpus, mined, reference)
    backward = implies(corpus, reference, mined)
    if forward and backward:
        return "equivalent"
    if forward:
        return "mined-stronger"
    if backward:
        return "mined-weaker"
    return "incomparable"


def minimize(corpus, clauses) -> dict:
    """Group clauses that are equivalent on the traces and keep one canonical member.
    Refinements between the kept clauses are recorded, not silently double-counted."""
    classes = []
    for clause in clauses:
        for group in classes:
            if classify(corpus, clause, group["canonical"]) == "equivalent":
                group["members"].append(clause)
                if len(clause) < len(group["canonical"]):
                    group["canonical"] = clause
                break
        else:
            classes.append({"canonical": clause, "members": [clause]})
    kept = [group["canonical"] for group in classes]
    refinements = [{"stronger": a, "weaker": b} for a in kept for b in kept
                   if a != b and implies(corpus, a, b)]
    return {"kept": kept, "classes": classes, "refinements": refinements,
            "removed": [c for c in clauses if c not in kept], "method": TRACE_BOUNDED}


def hold_masks(corpus, clause: str) -> list:
    """Per-run bitmask of the positions where a clause holds.

    One pass over the corpus per clause, so a pairwise sweep over k clauses costs k
    evaluations and k^2 integer operations instead of k^2 evaluations. `implies` on its own
    is cheap because it stops at the first counterexample; an all-pairs subsumption sweep is
    not, and with bounded-response clauses (`##[1:20]`, twenty consequent positions per
    sample) it was the flow's hot spot.
    """
    parsed = formula.parse(clause)
    masks = []
    for run in corpus.runs:
        mask = 0
        for t in range(len(run)):
            if parsed.holds(run, t):
                mask |= 1 << t
        masks.append(mask)
    return masks


def support_masks(corpus, clause: str) -> list:
    """Per-run bitmask of the positions where a clause says something (its support)."""
    parsed = formula.parse(clause)
    masks = []
    for run in corpus.runs:
        mask = 0
        for t in range(len(run)):
            if parsed.support(run, t):
                mask |= 1 << t
        masks.append(mask)
    return masks


def _strip_parens(text: str) -> str:
    """Remove redundant outer parentheses.

    `G(a |-> (##[1:40] b))` and `G(a |-> ##[1:40] b)` are the same clause, but the delay of
    the first hides behind a bracket: without this, every reference contract written in the
    first style was read as a same-cycle implication over a formula-valued consequent, and
    compared against something it never meant.
    """
    text = text.strip()
    while text.startswith("(") and text.endswith(")") and formula._balanced(text[1:-1]):
        text = text[1:-1].strip()
    return text


def _delays(clause: str) -> frozenset:
    """The offsets at which a clause's consequent may discharge the obligation.

    `|->` is {0}, `|=>` is {1}, `|-> ##[1:H]` is {1..H}. Containment is what makes two
    instances comparable, and it is sound in one direction only: a consequent required at a
    FIXED offset implies the same consequent required SOMEWHERE in a window containing that
    offset, never the other way round, and two different fixed offsets are incomparable
    (`a |-> b` says nothing about the next sample).
    """
    import re
    body = re.sub(r"^\s*G\s*\((.*)\)\s*$", r"\1", clause.strip(), flags=re.DOTALL)
    parts = re.split(r"\|->|\|=>|(?<![|>=])->", body, maxsplit=1)
    base = 1 if "|=>" in body else 0
    if len(parts) != 2:
        return frozenset({base})
    consequent = _strip_parens(parts[1])
    window = re.match(r"^##\[(\d+):(\d+)\]", consequent)
    if window:
        return frozenset(range(base + int(window.group(1)), base + int(window.group(2)) + 1))
    fixed = re.match(r"^##(\d+)", consequent)
    return frozenset({base + int(fixed.group(1))}) if fixed else frozenset({base})


def _consequent(clause: str) -> str:
    import re
    body = re.sub(r"^\s*G\s*\((.*)\)\s*$", r"\1", clause.strip(), flags=re.DOTALL)
    parts = re.split(r"\|->|\|=>|(?<![|>=])->", body, maxsplit=1)
    if len(parts) != 2:
        return clause
    return _strip_parens(re.sub(r"^##(\[\d+:\d+\]|\d+)", "",
                                _strip_parens(parts[1])).strip())


def reduce_subsumed(corpus, clauses) -> tuple:
    """Remove clauses that a stronger retained clause already covers.

    This is the "subsumed by a semantically stronger retained clause" rule: once `error == 0`
    is retained, `error <= done` says nothing, and once `done == 1 |-> yout == ain * bin` is
    retained, the same response with an extra conjunct in the antecedent adds nothing.
    Clauses are visited strongest first - by response tightness and support for an
    implication, by how few positions it holds at for a plain one - so a single pass suffices
    and a mutual pair keeps the one visited first (the shorter text).
    """
    unique = list(dict.fromkeys(clauses))

    def strength(clause):
        parsed = formula.parse(clause)
        if not parsed.is_implication():
            return (0, 0, sum(bin(m).count("1") for m in _cached(corpus, clause)),
                    len(clause), clause)
        support = sum(bin(m).count("1") for m in _cached(corpus, clause, "support"))
        return (1, len(_delays(clause)), -support, len(clause), clause)

    def comparable(a, b) -> bool:
        """Whether one clause may remove the other.

        Only within the same consequent. Across consequents, strength trades off against
        reach: `G(A' |-> C1 && C2)` implies `G(A' |-> C1)` and is therefore "stronger", but
        if A' is narrower than the A of a sibling clause with consequent C1, dropping that
        sibling loses the broader obligation and leaves nothing comparable to a contract
        written about C1 alone. Letting compound consequents subsume plain ones cost the
        square root every one of its six exactly-recovered guarantees.
        """
        pa, pb = formula.parse(a), formula.parse(b)
        if pa.is_implication() != pb.is_implication():
            return False
        return not pa.is_implication() or _consequent(a) == _consequent(b)

    kept, dropped = [], []
    for clause in sorted(unique, key=strength):
        stronger = next((k for k in kept
                         if comparable(k, clause) and implies(corpus, k, clause)), None)
        if stronger is None:
            kept.append(clause)
        else:
            dropped.append({"clause": clause, "why": f"subsumed by `{stronger}`"})
    keep = set(kept)
    return [c for c in unique if c in keep], dropped


def match(corpus, mined, references) -> dict:
    """Compare mined clauses against hand-encoded reference clauses by semantics, not text."""
    per_reference = {}
    for reference in references:
        categories = {m: classify(corpus, m, reference) for m in mined}
        pick = None
        for wanted in ("equivalent", "mined-stronger", "mined-weaker"):
            hits = [m for m, c in categories.items() if c == wanted]
            if hits:
                pick = {"category": wanted, "mined": hits[0]}
                break
        per_reference[reference] = pick or {"category": "missed", "mined": None}

    matched = {v["mined"] for v in per_reference.values() if v["mined"]}
    equivalent = sum(1 for v in per_reference.values() if v["category"] == "equivalent")
    acceptable = equivalent + sum(1 for v in per_reference.values()
                                  if v["category"] == "mined-stronger")
    n = len(references)
    return {"per_reference": per_reference,
            "unmatched_mined": [m for m in mined if m not in matched],
            "equivalent_recall": (equivalent / n) if n else None,
            "acceptable_recall": (acceptable / n) if n else None,
            "method": TRACE_BOUNDED}


@dataclass
class ValidationReport:
    held_out_units: int   # held-out episodes of the same region
    clauses: list
    minimization: dict
    reference_match: dict = None
    note: str = None

    def to_dict(self) -> dict:
        return {"held_out_units": self.held_out_units, "clauses": self.clauses,
                "minimization": {k: v for k, v in self.minimization.items()
                                 if k != "classes"},
                "reference_match": self.reference_match, "note": self.note,
                "method": TRACE_BOUNDED}


def validate(contract, holdout=None, references=()) -> ValidationReport:
    """Run the held-out check and the minimization over a contract's clauses."""
    clause_texts = [c.text for c in contract.assumptions + contract.guarantees]
    if holdout is None:
        return ValidationReport(0, [], {"kept": clause_texts, "classes": [],
                                        "refinements": [], "removed": [],
                                        "method": TRACE_BOUNDED},
                                None, "no held-out region: corpus not configured, or the "
                                      "event and triggers never occur in it")

    results = [evaluate(holdout, text) for text in clause_texts]
    generalising = [r["clause"] for r in results
                    if not r["vacuous"] and r["violations"] == 0]
    reduced = minimize(holdout, generalising)
    matches = match(holdout, reduced["kept"], list(references)) if references else None

    for clause in contract.assumptions + contract.guarantees:
        for r in results:
            if r["clause"] == clause.text:
                clause.held_out = {k: v for k, v in r.items() if k != "clause"}
                clause.kept = clause.text in reduced["kept"]
    return ValidationReport(len(holdout.runs), results, reduced, matches,
                            "held-out corpus decomposed with the same event and triggers")
