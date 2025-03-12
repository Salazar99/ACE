// ***** This file is automatically generated from SeqIndexComparison.java.jpp

package daikon.inv.unary.sequence;

import daikon.*;
import daikon.Quantify.QuantFlags;
import daikon.inv.*;
import daikon.inv.binary.twoSequence.*;
import daikon.suppress.*;
import java.util.Arrays;
import java.util.Iterator;
import java.util.logging.Logger;
import org.checkerframework.checker.interning.qual.Interned;
import org.checkerframework.checker.lock.qual.GuardSatisfied;
import org.checkerframework.checker.nullness.qual.NonNull;
import org.checkerframework.checker.nullness.qual.Nullable;
import org.checkerframework.dataflow.qual.Pure;
import org.checkerframework.dataflow.qual.SideEffectFree;
import org.plumelib.util.Intern;
import typequals.prototype.qual.NonPrototype;
import typequals.prototype.qual.Prototype;

/**
 * Represents an invariant over sequences of double values between the index of an element of the
 * sequence and the element itself. Prints as {@code x[i] <= i}.
 */
public class SeqIndexFloatLessEqual extends SingleFloatSequence {
  static final long serialVersionUID = 20040203L;

  /** Debug tracer. */
  public static final Logger debug =
    Logger.getLogger("daikon.inv.unary.sequence.SeqIndexFloatLessEqual");

  // Variables starting with dkconfig_ should only be set via the
  // daikon.config.Configuration interface.
  /** Boolean. True iff SeqIndexFloatLessEqual invariants should be considered. */
  public static boolean dkconfig_enabled = false;

  private @Prototype SeqIndexFloatLessEqual() {
    super();
  }

  protected SeqIndexFloatLessEqual(PptSlice slice) {
    super(slice);
    assert slice != null;
    assert var().rep_type == ProglangType.DOUBLE_ARRAY;
  }

  private static @Prototype SeqIndexFloatLessEqual proto = new @Prototype SeqIndexFloatLessEqual();

  /** Returns the prototype invariant for SeqIndexFloatLessEqual */
  public static @Prototype SeqIndexFloatLessEqual get_proto() {
    return proto;
  }

  @Override
  public boolean enabled() {
    return dkconfig_enabled && !dkconfig_SeqIndexDisableAll;
  }

  @Override
  public boolean instantiate_ok(VarInfo[] vis) {

    if (!valid_types(vis)) {
      return false;
    }

    // Don't compare indices to object addresses.
    ProglangType elt_type = vis[0].file_rep_type.elementType();
    if (!elt_type.baseIsFloat()) {
      return false;
    }

    // Make sure that the indices are comparable to the elements
    VarInfo seqvar = vis[0];
    assert seqvar.comparability != null;
    VarComparability elt_compar = seqvar.comparability.elementType();
    VarComparability index_compar = seqvar.comparability.indexType(0);
    if (!VarComparability.comparable(elt_compar, index_compar)) {
      return false;
    }

    return true;
  }

  @Override
  public SeqIndexFloatLessEqual instantiate_dyn(@Prototype SeqIndexFloatLessEqual this, PptSlice slice) {
    return new SeqIndexFloatLessEqual(slice);
  }

  /** NI suppressions, initialized in get_ni_suppressions() */
  private static @Nullable NISuppressionSet suppressions = null;

  /** returns the ni-suppressions for SeqIndexFloatLessEqual */
  @Pure
  @Override
  public NISuppressionSet get_ni_suppressions() {
    if (suppressions == null) {

      NISuppressee suppressee = new NISuppressee(SeqIndexFloatLessEqual.class, 1);

      // suppressor definitions (used in suppressions below)

      NISuppressor v1_eq_v2 = new NISuppressor(0, SeqIndexFloatEqual.class);

      NISuppressor v1_lt_v2 = new NISuppressor(0, SeqIndexFloatLessThan.class);

      suppressions = new NISuppressionSet(
          new NISuppression[]{

              // (v1[i] == i) ==> v1[i] <= i
              new NISuppression(v1_eq_v2, suppressee),
              // (v1[i] < i) ==> v1[i] <= i
              new NISuppression(v1_lt_v2, suppressee),

        });
    }
    return suppressions;
  }

  protected Invariant resurrect_done_swapped() {

      return new SeqIndexFloatGreaterEqual(ppt);
  }

  public String getComparator() {
    return "<=";
  }

  @SideEffectFree
  @Override
  public String format_using(@GuardSatisfied SeqIndexFloatLessEqual this, OutputFormat format) {
    if (format.isJavaFamily()) {
      return format_java_family(format);
    }

    // TODO: Eliminate the unnecessary format_xxx() below if the
    // format_java_family() can handle all the Java family output.

    if (format == OutputFormat.DAIKON) {
      return format_daikon();
    }
    if (format == OutputFormat.ESCJAVA) {
      return format_esc();
    }
    if (format == OutputFormat.CSHARPCONTRACT) {
      return format_csharp_contract();
    }
    if (format == OutputFormat.SIMPLIFY) {
      return format_simplify();
    }

    return format_unimplemented(format);
  }

  public String format_daikon(@GuardSatisfied SeqIndexFloatLessEqual this) {

    // If this is an array/container and not a subsequence
    if (var().isDerivedSubSequenceOf() == null) {
      return var().apply_subscript("i") + " <= i";
    } else {
      return var().name() + " <= (index)";
    }
  }

  // Bad code here: if the first index is changed from i this breaks
  public String format_esc(@GuardSatisfied SeqIndexFloatLessEqual this) {
    String[] form = VarInfo.esc_quantify(var());
    return form[0] + "(" + form[1] + " <= i)" + form[2];
  }

  public String format_csharp_contract(@GuardSatisfied SeqIndexFloatLessEqual this) {
    String[] split = var().csharp_array_split();
    return "Contract.ForAll(0, " + split[0] + ".Count(), i => " + split[0] + "[i]" + split[1] + " <= i)";
  }

  public String format_java_family(@GuardSatisfied SeqIndexFloatLessEqual this, OutputFormat format) {
    return "daikon.Quant.eltsLteIndex("
      + var().name_using(format) + ")";
  }

  public String format_simplify(@GuardSatisfied SeqIndexFloatLessEqual this) {
    String[] form = VarInfo.simplify_quantify(QuantFlags.include_index(),
                                               var());
    return form[0] + "(<= " + form[1] + " " + form[2] + ")"
      + form[3];
  }

  @Override
  public InvariantStatus check_modified(double @Interned [] a, int count) {
    for (int i = 0; i < a.length; i++) {
      if (!Global.fuzzy.lte(a[i], i)) {
        return InvariantStatus.FALSIFIED;
      }
    }
    return InvariantStatus.NO_CHANGE;
  }

  @Override
  public InvariantStatus add_modified(double @Interned [] a, int count) {

    if (logDetail()) {
      log("Entered add_modified: ppt.num_values()==%s, sample==%s",
           ppt.num_values(), Arrays.toString(a));
    }
    InvariantStatus stat = check_modified(a, count);
    if (logDetail()) {
      log("Exiting add_modified status = %s", stat);
    }

    return stat;
  }

  @Override
  @SuppressWarnings("UnnecessaryParentheses")  // generated code, parentheses are sometimes needed
  protected double computeConfidence() {

    // Make sure there have been some elements in the sequence
    ValueSet.ValueSetFloatArray vs = (ValueSet.ValueSetFloatArray) ppt.var_infos[0].get_value_set();
    if (vs.elem_cnt() == 0) {
      return Invariant.CONFIDENCE_UNJUSTIFIED;
    }

    int num_values = ppt.num_values();
    if (num_values == 0) {
      return Invariant.CONFIDENCE_UNJUSTIFIED;
    }

      return 1 - Math.pow(.5, num_values);
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
  public static @Nullable SeqIndexFloatLessEqual find(PptSlice ppt) {
    assert ppt.arity() == 1;
    for (Invariant inv : ppt.invs) {
      if (inv instanceof SeqIndexFloatLessEqual) {
        return (SeqIndexFloatLessEqual) inv;
      }
    }
    return null;
  }

  /**
   * Checks to see if this is obvious over the specified variables Implements the following checks:
   *
   * <pre>
   *    (A[] subsequence B[]) ^ (B[i] op i) &rArr; A[i] op i
   * </pre>
   *
   * JHP: Its not obvious (to me) that this is true except when the subsequence starts at index
   * 0. If B[] = {0, 1, 2, 3, 4} and A[] = {2, 3, 4}, A[] is a subsequence of B[] and B[i] == i, but
   * A[i] = i is not true.
   */
  @Pure
  @Override
  public @Nullable DiscardInfo isObviousDynamically(VarInfo[] vis) {

    DiscardInfo super_result = super.isObviousDynamically(vis);
    if (super_result != null) {
      return super_result;
    }

    VarInfo seqvar = vis[0];

    // For each other sequence variable, if it is a supersequence of this
    // one and it has the same invariant, then this one is obvious.
    // We have to check for the same equality set here, because
    // isObviousDynamically is called for each member of the equality set.
    // We don't want other members of our own equality set to make this obvious
    PptTopLevel pptt = ppt.parent;
    for (int i = 0; i < pptt.var_infos.length; i++) {
      VarInfo vi = pptt.var_infos[i];
      if (vi.equalitySet == seqvar.equalitySet) {
        continue;
      }
      if (SubSequenceFloat.isObviousSubSequenceDynamically(this, seqvar, vi)) {
        PptSlice1 other_slice = pptt.findSlice(vi);
        if (other_slice != null) {
          SeqIndexFloatLessEqual other_sine = SeqIndexFloatLessEqual.find(other_slice);
          if ((other_sine != null) && other_sine.enoughSamples()) {
            return new DiscardInfo(this, DiscardCode.obvious,
                        "The invariant " + format() + " over var "
                       + seqvar.name() + " also holds over "
                       +" the supersequence " + vi.name());
          }
        }
      }
    }

    return null;
  }
}
