// ***** This file is automatically generated from SeqComparison.java.jpp

package daikon.inv.binary.twoSequence;

import daikon.*;
import daikon.Quantify.QuantFlags;
import daikon.derive.binary.*;
import daikon.inv.*;
import daikon.suppress.*;
import java.util.*;
import java.util.logging.Logger;
import org.checkerframework.checker.interning.qual.Interned;
import org.checkerframework.checker.lock.qual.GuardSatisfied;
import org.checkerframework.checker.nullness.qual.Nullable;
import org.checkerframework.dataflow.qual.Pure;
import org.checkerframework.dataflow.qual.SideEffectFree;
import org.plumelib.util.ArraysPlume;
import org.plumelib.util.Intern;
import typequals.prototype.qual.NonPrototype;
import typequals.prototype.qual.Prototype;

/**
 * Represents invariants between two sequences of double values. If order matters for each
 * variable (which it does by default), then the sequences are compared lexically. Prints as
 * {@code x[] <= y[] lexically}.
 *

 * <p>If the auxiliary information (e.g., order matters) doesn't match between two variables, then
 * this invariant cannot apply to those variables.
 */
public class SeqSeqFloatLessEqual extends TwoSequenceFloat

{
  static final long serialVersionUID = 20030822L;

  // Variables starting with dkconfig_ should only be set via the
  // daikon.config.Configuration interface.
  /** Boolean. True iff SeqSeqFloatLessEqual invariants should be considered. */
  public static boolean dkconfig_enabled = Invariant.invariantEnabledDefault;

  /** Debugging logger. */
  static final Logger debug = Logger.getLogger("daikon.inv.binary.twoSequence.SeqSeqFloatLessEqual");

  static Comparator<double[]> comparator = Global.fuzzy.new DoubleArrayComparatorLexical();

  boolean orderMatters;

  protected SeqSeqFloatLessEqual(PptSlice ppt, boolean orderMatters) {
    super(ppt);
    this.orderMatters = orderMatters;
  }

  protected @Prototype SeqSeqFloatLessEqual(boolean orderMatters) {
    super();
    this.orderMatters = orderMatters;
  }

  protected SeqSeqFloatLessEqual(SeqSeqFloatGreaterEqual seq_swap) {
    super(seq_swap.ppt);
    orderMatters = seq_swap.orderMatters;
  }

  private static @Prototype SeqSeqFloatLessEqual proto = new @Prototype SeqSeqFloatLessEqual(true);

  /** Returns the prototype invariant for SeqSeqFloatLessEqual */
  public static @Prototype SeqSeqFloatLessEqual get_proto() {
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

      VarInfo var1 = vis[0];
      VarInfo var2 = vis[1];
      ProglangType type1 = var1.type;
      ProglangType type2 = var2.type;

      // This intentonally checks dimensions(), not pseudoDimensions.
      boolean only_eq =
        !((type1.dimensions() == 1)
          && type1.baseIsFloat()
          && (type2.dimensions() == 1)
          && type2.baseIsFloat());
      if (only_eq) {
        return false;
      }

      // non equality comparisons don't make sense if the arrays aren't ordered
      if (!var1.aux.hasOrder() || !var2.aux.hasOrder()) {
        return false;
      }

    return true;
  }

  @Override
  protected SeqSeqFloatLessEqual instantiate_dyn(@Prototype SeqSeqFloatLessEqual this, PptSlice slice) {
    boolean has_order = slice.var_infos[0].aux.hasOrder() && slice.var_infos[1].aux.hasOrder();
    return new SeqSeqFloatLessEqual(slice, has_order);
  }

  @Override
  protected Invariant resurrect_done_swapped() {

    return new SeqSeqFloatGreaterEqual(this);
  }

  @Override
  public String repr(@GuardSatisfied SeqSeqFloatLessEqual this) {
    return "SeqSeqFloatLessEqual" + varNames() + ": ,orderMatters=" + orderMatters
      + ",enoughSamples=" + enoughSamples()
      ;
  }

  @SideEffectFree
  @Override
  public String format_using(@GuardSatisfied SeqSeqFloatLessEqual this, OutputFormat format) {
    // System.out.println("Calling SeqSeqFloatLessEqual.format for: " + repr());

    if (format == OutputFormat.SIMPLIFY) {
      return format_simplify();
    }

    if (format == OutputFormat.DAIKON) {
      String name1 = var1().name_using(format);
      String name2 = var2().name_using(format);

      String lexically = (var1().aux.hasOrder() ? " (lexically)" : "");
      return name1 + " <= " + name2 + lexically;
    }

    if (format == OutputFormat.CSHARPCONTRACT) {

      if (var1().aux.hasOrder()) {
        String name1 = var1().csharp_collection_string();
        String name2 = var2().csharp_collection_string();
        String dbc = "LlexLTE".substring(1);
        return name1 + "." + dbc + "(" + name2 + ")";
      } else {
        return "\"SeqComparison.java.jpp: sequence comparison does not apply to unordered collections unimplemented\" != null)"; // interned
      }

    }

    if (format.isJavaFamily()) {
      String name1 = var1().name_using(format);
      String name2 = var2().name_using(format);

      return "daikon.Quant."
        + (var1().aux.hasOrder() ? "lexLTE" : "setEqual" )
        + "("
        + name1
        + ", "
        + name2
        + ")";

    }

    return format_unimplemented(format);
  }

  public String format_simplify(@GuardSatisfied SeqSeqFloatLessEqual this) {
    if (Invariant.dkconfig_simplify_define_predicates) {
      return format_simplify_defined();
    } else {
      return format_simplify_explicit();
    }
  }

  private String format_simplify_defined(@GuardSatisfied SeqSeqFloatLessEqual this) {
    String[] var1_name = var1().simplifyNameAndBounds();
    String[] var2_name = var2().simplifyNameAndBounds();
    if (var1_name == null || var2_name == null) {
      return String.format("%s.format_simplify_defined(%s): var1_name=%s, var2_name=%s, for %s",
                           getClass().getSimpleName(), this,
                           Arrays.toString(var1_name), Arrays.toString(var2_name), format());
    }
    return "(|lexical-<=| "
      + var1_name[0] + " " + var1_name[1] + " " + var1_name[2] + " "
      + var2_name[0] + " " + var2_name[1] + " " + var2_name[2] + ")";
  }

  private String format_simplify_explicit(@GuardSatisfied SeqSeqFloatLessEqual this) {

      String classname = this.getClass().toString().substring(6);
      return "warning: method " + classname
        + ".format_simplify_explicit() needs to be implemented: " + format();

  }

  @Override
  public InvariantStatus check_modified(
      double @Interned [] v1, double @Interned [] v2, int count) {
    /// This does not do the right thing; I really want to avoid comparisons
    /// if one is missing, but not if one is zero-length.
    // // Don't make comparisons with empty arrays.
    // if ((v1.length == 0) || (v2.length == 0)) {
    //   return;
    // }

    int comparison = 0;
    if (orderMatters) {
      // Standard element wise comparison
       comparison = comparator.compare(v1, v2);
    } else {
      // Do a double subset comparison
      comparison = Global.fuzzy.isElemMatch(v1, v2) ? 0 : -1;
    }

    if (!(comparison <= 0) ) {
      return InvariantStatus.FALSIFIED;
    }
    return InvariantStatus.NO_CHANGE;
  }

  @Override
  public InvariantStatus add_modified(double @Interned [] v1, double @Interned [] v2, int count) {
    if (logDetail()) {
      log("add_modified (%s, %s)", Arrays.toString(v1), Arrays.toString(v2));
    }
        return check_modified(v1, v2, count);
  }

  @Override
  protected double computeConfidence() {

    return 1 - Math.pow(.5, ppt.num_values());
  }

  @Pure
  @Override
  public boolean isSameFormula(Invariant o) {
    return true;
  }

  @Pure
  @Override
  public boolean isExclusiveFormula(Invariant o) {
    return false;
  }

  /**
   * Since this invariant can be a postProcessed equality, we have to handle isObvious especially to
   * avoid circular isObvious relations.
   */
  @Pure
  @Override
  public @Nullable DiscardInfo isObviousStatically_SomeInEquality() {
    if (var1().equalitySet == var2().equalitySet) {
      return isObviousStatically(this.ppt.var_infos);
    } else {
      return super.isObviousStatically_SomeInEquality();
    }
  }

  /**
   * Since this invariant can be a postProcessed equality, we have to handle isObvious especially to
   * avoid circular isObvious relations.
   */
  @Pure
  @Override
  public @Nullable DiscardInfo isObviousDynamically_SomeInEquality() {
    if (logOn()) {
      log("Considering dynamically_someInEquality");
    }
    if (var1().equalitySet == var2().equalitySet) {
      return isObviousDynamically(this.ppt.var_infos);
    } else {
      return super.isObviousDynamically_SomeInEquality();
    }
  }

  @Pure
  @Override
  public @Nullable DiscardInfo isObviousStatically(VarInfo[] vis) {

      VarInfo var1 = vis[0];
      VarInfo var2 = vis[1];
      DiscardInfo di;
      di = SubSequenceFloat.isObviousSubSequence(this, var1, var2);
      if (di == null) {
        di = SubSequenceFloat.isObviousSubSequence(this, var2, var1);
      }
      if (di != null) {
        return di;
      }

    return super.isObviousStatically(vis);
  }

  @Pure
  @Override
  public @Nullable DiscardInfo isObviousDynamically(VarInfo[] vis) {
    DiscardInfo super_result = super.isObviousDynamically(vis);
    if (super_result != null) {
      return super_result;
    }
    assert ppt != null;

      Debug debug = new Debug(getClass(), ppt, vis);

      if (logOn()) {
        debug.log("Checking IsObviousDynamically");
      }

      // Check to see if the same Pairwise invariant exists
      DiscardInfo di = new DiscardInfo(this, DiscardCode.obvious, "");
      if (ppt.parent.check_implied(di, vis[0], vis[1], PairwiseFloatLessEqual.get_proto())) {
        di.add_implied_vis(vis);
        return di;
      }

      // If either variable is a subsequence and the original arrays
      // are related elementwise this isn't interesting
      VarInfo v1 = vis[0];
      VarInfo v2 = vis[1];
      VarInfo arr1 = v1;
      VarInfo arr2 = v2;
      if (v1.derived instanceof SequenceFloatSubsequence) {
        arr1 = ((SequenceFloatSubsequence) v1.derived).seqvar();
      }
      if (v2.derived instanceof SequenceFloatSubsequence) {
        arr2 = ((SequenceFloatSubsequence) v2.derived).seqvar();
      }
      if (!isEqual() && ((arr1 != v1) || (arr2 != v2))) {
        VarInfo[] avis = new VarInfo [] {arr1, arr2};
        PptSlice slice = this.ppt.parent.findSlice_unordered(avis);
        if (slice != null) {
          PairwiseFloatEqual picEQ = PairwiseFloatEqual.find(slice);
          if (picEQ != null) {
            return new DiscardInfo(this, DiscardCode.obvious, "Implied by " + picEQ.format());
          }
          PairwiseFloatLessThan picLT = PairwiseFloatLessThan.find(slice);
          if (picLT != null) {
            return new DiscardInfo(this, DiscardCode.obvious, "Implied by " + picLT.format());
          }
          PairwiseFloatGreaterThan picGT = PairwiseFloatGreaterThan.find(slice);
          if (picGT != null) {
            return new DiscardInfo(this, DiscardCode.obvious, "Implied by " + picGT.format());
          }
          PairwiseFloatLessEqual picLE = PairwiseFloatLessEqual.find(slice);
          if (picLE != null) {
            return new DiscardInfo(this, DiscardCode.obvious, "Implied by " + picLE.format());
          }
          PairwiseFloatGreaterEqual picGE = PairwiseFloatGreaterEqual.find(slice);
          if (picGE != null) {
            return new DiscardInfo(this, DiscardCode.obvious, "Implied by " + picGE.format());
          }
        }
      }

      // Similarly, if either variable is a subsequence and the original
      // arrays are related lexically this isn't interesting
      if ((arr1 != v1) || (arr2 != v2)) {
        if (arr1 == arr2) {
          debug.log("Obvious Dynamic- subsequence from same array");
          return new DiscardInfo(this, DiscardCode.obvious, "Supersequences are related lexically");
        }
        VarInfo[] avis = {arr1, arr2};
        debug.log("looking for " + avis[0].name() + " " + avis[1].name());
        PptSlice slice = this.ppt.parent.findSlice_unordered(avis);
        debug.log("Found ppt " + slice);
        if (slice != null) {
          for (Invariant inv : slice.invs) {
            debug.log("-- invariant " + inv.format());
          }
          Invariant inv;
          inv = SeqSeqFloatEqual.find(slice);
          if (inv != null) {
            if (logOn()) {
              debug.log("Obvious Dynamic from " + inv.format() + "(" + inv.getClass() + ")");
            }
            return new DiscardInfo(this, DiscardCode.obvious, "Implied by " + inv.format());
          }
          inv = SeqSeqFloatLessThan.find(slice);
          if (inv != null) {
            if (logOn()) {
              debug.log("Obvious Dynamic from " + inv.format() + "(" + inv.getClass() + ")");
            }
            return new DiscardInfo(this, DiscardCode.obvious, "Implied by " + inv.format());
          }
          inv = SeqSeqFloatGreaterThan.find(slice);
          if (inv != null) {
            if (logOn()) {
              debug.log("Obvious Dynamic from " + inv.format() + "(" + inv.getClass() + ")");
            }
            return new DiscardInfo(this, DiscardCode.obvious, "Implied by " + inv.format());
          }
          inv = SeqSeqFloatLessEqual.find(slice);
          if (inv != null) {
            if (logOn()) {
              debug.log("Obvious Dynamic from " + inv.format() + "(" + inv.getClass() + ")");
            }
            return new DiscardInfo(this, DiscardCode.obvious, "Implied by " + inv.format());
          }
          inv = SeqSeqFloatGreaterEqual.find(slice);
          if (inv != null) {
            if (logOn()) {
              debug.log("Obvious Dynamic from " + inv.format() + "(" + inv.getClass() + ")");
            }
            return new DiscardInfo(this, DiscardCode.obvious, "Implied by " + inv.format());
          }
        }
      }

      // Check to see if these variables are obviously related
      if (v1.isDerived() || v2.isDerived()) {
        if (SubSequenceFloat.isObviousSubSequenceDynamically(this, v1, v2)
          || SubSequenceFloat.isObviousSubSequenceDynamically(this, v2, v1)) {
          if (logOn()) {
            debug.log("Obvious SubSequence Dynamically");
          }
          assert ppt != null;
          return new DiscardInfo(
              this,
              DiscardCode.obvious,
              "Both vars are derived and one is a subsequence of the other");
        }
      }

    return null;
  }

  @Override
  public void repCheck() {
    super.repCheck();
    /*
      This code is no longer needed now that the can_be_x's are gone
    if (!(this.can_be_eq || this.can_be_lt || this.can_be_gt)
        && ppt.num_samples() != 0) {
      System.err.println(this.repr());
      System.err.println(this.ppt.num_samples());
      throw new Error();
    }
    */
  }

  @Pure
  public boolean isEqual() {

    return false;
  }

  // Look up a previously instantiated invariant.
  public static @Nullable SeqSeqFloatLessEqual find(PptSlice ppt) {
    assert ppt.arity() == 2;
    for (Invariant inv : ppt.invs) {
      if (inv instanceof SeqSeqFloatLessEqual) {
        return (SeqSeqFloatLessEqual) inv;
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

    /** Definition of this invariant (the suppressee) */
    private static NISuppressee suppressee = new NISuppressee(SeqSeqFloatLessEqual.class, 2);

    // Suppressor definitions (used in suppressions below)
    private static NISuppressor v1_pw_v2 = new NISuppressor(0, 1, PairwiseFloatLessEqual.class);

    private static NISuppressionSet suppressions =
      new NISuppressionSet(
          new NISuppression[] {
            // pairwise => lexical
            new NISuppression(v1_pw_v2, suppressee),
          });

  @Override
  public @Nullable @NonPrototype SeqSeqFloatLessEqual merge(
      @Prototype SeqSeqFloatLessEqual this, List<@NonPrototype Invariant> invs, PptSlice parent_ppt) {
    // Ignore the orderMatters field, because it is always the same (and is always true).
    return (SeqSeqFloatLessEqual) super.merge(invs, parent_ppt);
  }
}
