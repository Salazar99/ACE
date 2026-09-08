"""ACE: output-guided behavioral decomposition for A/G contract mining.

Implements the five steps of the DATE2027 implementation transition plan:

    Step 1  labeling.py     output-event labeling            (replaces fault injection)
    Step 2  triggers.py     trigger selection, smoothed recall
    Step 3  episodes.py     boundary-preserving extraction    (replaces zero-padding)
    Step 4  mining.py       contract mining and assembly
    Step 5  validation.py   held-out validation and minimization

Support modules: formula.py (finite-trace evaluation), traces.py (corpus I/O),
backends.py (HARM and friends). The flow is wired in __main__.py.
"""

__version__ = "0.1.0"
