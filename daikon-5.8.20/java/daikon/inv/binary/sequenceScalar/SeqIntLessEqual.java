// ***** This file is automatically generated from SeqIntComparison.java.jpp

package daikon.inv.binary.sequenceScalar;

import daikon.*;
import daikon.derive.unary.*;
import daikon.inv.*;
import daikon.inv.binary.twoSequence.*;
import daikon.inv.unary.sequence.*;
import daikon.suppress.*;
import java.util.*;
import java.util.logging.Logger;
import org.checkerframework.checker.interning.qual.Interned;
import org.checkerframework.checker.lock.qual.GuardSatisfied;
import org.checkerframework.checker.nullness.qual.Nullable;
import org.checkerframework.dataflow.qual.Pure;
import org.checkerframework.dataflow.qual.SideEffectFree;
import org.plumelib.util.Intern;
import typequals.prototype.qual.NonPrototype;
import typequals.prototype.qual.Prototype;

/**
 * Represents an invariant between a long scalar and a a sequence of long values. Prints
 * as {@code x[] elements <= y} where {@code x} is a long sequence and
 * {@code y} is a long scalar.
 */
public final class SeqIntLessEqual extends SequenceScalar {
  static final long serialVersionUID = 20030822L;

  // Variables starting with dkconfig_ should only be set via the
  // daikon.config.Configuration interface.
  /** Boolean. True iff SeqIntLessEqual invariants should be considered. */
  public static boolean dkconfig_enabled = Invariant.invariantEnabledDefault;

  public static final Logger debug =
    Logger.getLogger("daikon.inv.binary.sequenceScalar.SeqIntLessEqual");

  static boolean debugSeqIntComparison = false;

  SeqIntLessEqual(PptSlice ppt) {
    super(ppt);
  }

  @Prototype SeqIntLessEqual() {
    super();
  }

  private static @Prototype SeqIntLessEqual proto = new @Prototype SeqIntLessEqual();

  /** Returns the prototype invariant for SeqIntLessEqual. */
  public static @Prototype SeqIntLessEqual get_proto() {
    return proto;
  }

  @Override
  public boolean enabled() {
    return dkconfig_enabled;
  }

  @Override
  public boolean instantiate_ok(VarInfo[] vis) {

    if (!valid_types(vis)) {
      return false;
    }

    VarInfo seqvar;
    VarInfo sclvar;
    if (vis[0].rep_type == ProglangType.INT_ARRAY) {
      seqvar = vis[0];
      sclvar = vis[1];
    } else {
      seqvar = vis[1];
      sclvar = vis[0];
    }

    assert sclvar.rep_type == ProglangType.INT;
    assert seqvar.rep_type == ProglangType.INT_ARRAY;

      if (!seqvar.type.elementIsIntegral()) {
        return false;
      }

    return true;
  }

  @Override
  protected SeqIntLessEqual instantiate_dyn(@Prototype SeqIntLessEqual this, PptSlice slice) {
    return new SeqIntLessEqual(slice);
  }

  /**
   * Checks to see if the comparison is obvious statically. Makes the following checks:
   *
   * <pre>
   *    max(A[]) op A[]
   *    min(A[]) op A[]
   * </pre>
   *
   * JHP: Note that these are not strict implications, these are merely uninteresting comparisons
   * (except when op is GreaterEqual for max and LessEqual for min).
   */
  @Pure
  @Override
  public @Nullable DiscardInfo isObviousStatically(VarInfo[] vis) {

    SequenceMin seqmin = null;
    SequenceMax seqmax = null;
    VarInfo sclseq = null;
    VarInfo sclvar = sclvar(vis);
    if (sclvar.derived instanceof SequenceMin) {
      seqmin = (SequenceMin) sclvar.derived;
      sclseq = seqmin.base;
    } else if (sclvar.derived instanceof SequenceMax) {
      seqmax = (SequenceMax) sclvar.derived;
      sclseq = seqmax.base;
    }
    if (seqvar(vis) == sclseq) {
      return new DiscardInfo(this, DiscardCode.obvious, sclvar(vis).name() + " is min/max ");
    }
    return null;
  }

  @SideEffectFree
  @Override
  public SeqIntLessEqual clone(@GuardSatisfied SeqIntLessEqual this) {
    SeqIntLessEqual result = (SeqIntLessEqual) super.clone();
    return result;
  }

  @Override
  public String repr(@GuardSatisfied SeqIntLessEqual this) {
    return "SeqIntLessEqual" + varNames() + ": ,falsified=" + falsified;
  }

  @SideEffectFree
  @Override
  public String format_using(@GuardSatisfied SeqIntLessEqual this, OutputFormat format) {

    if (format.isJavaFamily()) {
      return format_java_family(format);
    }

    if (format == OutputFormat.DAIKON) {
      return format_daikon();
    }
    if (format == OutputFormat.ESCJAVA) {
      return format_esc();
    }
    if (format == OutputFormat.SIMPLIFY) {
      return format_simplify();
    }
    if (format == OutputFormat.CSHARPCONTRACT) {
      return format_csharp_contract();
    }

    return format_unimplemented(format);
  }

  public String format_daikon(@GuardSatisfied SeqIntLessEqual this) {
    return seqvar().name() + " elements <= " + sclvar().name();
  }

  public String format_esc(@GuardSatisfied SeqIntLessEqual this) {
    String[] form = VarInfo.esc_quantify(seqvar(), sclvar());
    return form[0] + "(" + form[1] + " <= " + form[2] + ")" + form[3];
  }

  public String format_simplify(@GuardSatisfied SeqIntLessEqual this) {
    String[] form = VarInfo.simplify_quantify(seqvar(), sclvar());
    return form[0] + "(<= " + form[1] + " " + form[2] + ")" + form[3];
  }

  public String format_java_family(@GuardSatisfied SeqIntLessEqual this, OutputFormat format) {
    return "daikon.Quant.eltsLTE("
        + seqvar().name_using(format)
        + ", "
        + sclvar().name_using(format)
        + ")";
  }

  public String format_csharp_contract(@GuardSatisfied SeqIntLessEqual this) {
    String[] split = seqvar().csharp_array_split();
    return "Contract.ForAll("
        + split[0]
        + ", x => x"
        + split[1]
        + " <= "
        + sclvar().csharp_name()
        + ")";
  }

  @Override
  public InvariantStatus check_modified(long @Interned [] a, long x, int count) {
    /*if (logDetail() || debug.isLoggable(Level.FINE))
      log(debug,"(<= " + Arrays.toString(a)
      + " " + x);*/
    for (int i = 0; i < a.length; i++) {

        // assert seqvar().type.elementIsIntegral();

      if (!(a[i] <= x)) {
        return InvariantStatus.FALSIFIED;
      }
    }
    return InvariantStatus.NO_CHANGE;
  }

  @Override
  public InvariantStatus add_modified(long @Interned [] a, long x, int count) {
    return check_modified(a, x, count);
  }

  @Override
  protected double computeConfidence() {

    // If there are no samples over our variables, its unjustified
    if (ppt.num_samples() == 0) {
      return CONFIDENCE_UNJUSTIFIED;
    }

    // If the array never has any elements, its unjustified
    ValueSet.ValueSetScalarArray vs = (ValueSet.ValueSetScalarArray) seqvar().get_value_set();
    if (vs.elem_cnt() == 0) {
      return CONFIDENCE_UNJUSTIFIED;
    }

      // return 1 - Math.pow(.5, vs.elem_cnt());
      return 1 - Math.pow(.5, ppt.num_samples());
  }

  @Pure
  @Override
  public boolean isExact() {

      return false;
  }

  @Pure
  @Override
  public boolean isSameFormula(Invariant other) {
    return true;
  }

  @Pure
  @Override
  public boolean isExclusiveFormula(Invariant other) {
    return false;
  }

  // Look up a previously instantiated invariant.
  public static @Nullable SeqIntLessEqual find(PptSlice ppt) {
    assert ppt.arity() == 2;
    for (Invariant inv : ppt.invs) {
      if (inv instanceof SeqIntLessEqual) {
        return (SeqIntLessEqual) inv;
      }
    }
    return null;
  }

  /**
   * Checks to see if this is obvious over the specified variables. Implements the following checks:
   *
   * <pre>
   *  (x op B[]) ^ (B[] subsequence A[]) &rArr; (x op A[])
   *  (A[] == [])                        &rArr; (x op A[])
   * </pre>
   */
  @Pure
  @Override
  public @Nullable DiscardInfo isObviousDynamically(VarInfo[] vis) {

    DiscardInfo super_result = super.isObviousDynamically(vis);
    if (super_result != null) {
      return super_result;
    }

    VarInfo seqvar = seqvar(vis);
    @SuppressWarnings("UnusedVariable")  // generated code, sometimes is necessary
    VarInfo sclvar = sclvar(vis);
    // Debug.log(getClass(), ppt, vis, "Considering  over" + seqvar.name()
    //           + " and " + sclvar.name());

    // Look for the same property over a supersequence of this one.  This
    // doesn't need to explicitly ignore oher members of the equality set
    // because those members won't have any invariants over them.
    PptTopLevel pptt = ppt.parent;
    for (Iterator<Invariant> inv_itor = pptt.invariants_iterator(); inv_itor.hasNext(); ) {
      Invariant inv = inv_itor.next();
      if (inv == this) {
        continue;
      }
      if (inv instanceof SeqIntLessEqual) {
        SeqIntLessEqual other = (SeqIntLessEqual) inv;
        // System.out.printf("considering %s seqvar=%s, other=%s%n", other.format(),
        // seqvar().name(), other.seqvar().name());
        if (pptt.is_subsequence(seqvar(), other.seqvar()) && (sclvar(vis) == other.sclvar())) {
          // System.out.println ("is subsequence");
          return new DiscardInfo(
              this,
              DiscardCode.obvious,
              seqvar().name()
                  + " is a subsequence of "
                  + other.seqvar().name()
                  + " and "
                  + other.format()
                  + " holds");
        }
      }
    }

    // JHP: handled in confidence test now
    // (A[] == []) ==> A[] op x
    if (false) {
      if (pptt.is_empty(seqvar)) {
        return new DiscardInfo(
            this, DiscardCode.obvious, "The sequence " + seqvar.name() + " is always empty");
      }
    }

    if (isExact()) {
      return null;
    }

    // JHP: this presumes that this invariant is true and should thus be
    // moved to uninteresting or removed.
    {
      PptSlice1 seqslice = pptt.findSlice(seqvar);
      if (seqslice != null) {
        EltOneOf eoo = EltOneOf.find(seqslice);
        if ((eoo != null) && eoo.enoughSamples() && (eoo.num_elts() == 1)) {
          return new DiscardInfo(this, DiscardCode.obvious, "Obvious implied by " + eoo.format());
        }
      }
    }

    return null;
  }

  /** Returns a list of non-instantiating suppressions for this invariant. */
  @Pure
  @Override
  public @Nullable NISuppressionSet get_ni_suppressions() {
    return suppressions;
  }

  /** definition of this invariant (the suppressee) */
  private static NISuppressee suppressee = new NISuppressee(SeqIntLessEqual.class, 2);

  // suppressor definitions (used in suppressions below)
  private static NISuppressor v1_eq_v2 = new NISuppressor(0, 1, SeqIntEqual.class);
  private static NISuppressor v1_lt_v2 = new NISuppressor(0, 1, SeqIntLessThan.class);

  /** NI Suppressions for each type of comparison. */
  private static NISuppressionSet suppressions =
    new NISuppressionSet(
        new NISuppression[] {

            // v1 == v2 => v1 <= v2
            new NISuppression(v1_eq_v2, suppressee),

            // v1 < v2 => v1 <= v2
            new NISuppression(v1_lt_v2, suppressee),
        });

}
