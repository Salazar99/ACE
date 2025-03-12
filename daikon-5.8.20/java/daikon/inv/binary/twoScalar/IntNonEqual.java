// ***** This file is automatically generated from IntComparisons.java.jpp

package daikon.inv.binary.twoScalar;

import daikon.*;
import daikon.derive.binary.*;
import daikon.derive.unary.*;
import daikon.inv.*;
import daikon.inv.binary.twoScalar.*;
import daikon.inv.binary.twoSequence.*;
import daikon.inv.unary.scalar.*;
import daikon.inv.unary.sequence.*;
import daikon.inv.unary.string.*;
import daikon.suppress.*;
import java.util.*;
import java.util.logging.Level;
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
 * Represents an invariant of != between two long scalars. Prints as {@code x != y}.
 */
public final class IntNonEqual extends TwoScalar {

  static final long serialVersionUID = 20030822L;

  // Variables starting with dkconfig_ should only be set via the
  // daikon.config.Configuration interface.
  /** Boolean. True iff IntNonEqual invariants should be considered. */
  public static boolean dkconfig_enabled = Invariant.invariantEnabledDefault;

  public static final Logger debug = Logger.getLogger("daikon.inv.binary.twoScalar.IntNonEqual");

  /** Boolean. True iff IntNonEqual invariants should be considered. */
  public static boolean dkconfig_integral_only = true;

  IntNonEqual(PptSlice ppt) {
    super(ppt);
  }

  @Prototype IntNonEqual() {
    super();
  }

  private static @Prototype IntNonEqual proto = new @Prototype IntNonEqual();

  /** Returns the prototype invariant for IntNonEqual. */
  public static @Prototype IntNonEqual get_proto() {
    return proto;
  }

  @Override
  public boolean enabled() {
    return dkconfig_enabled;
  }

  /** Returns whether or not the specified var types are valid for IntNonEqual. */
  @Override
  public boolean instantiate_ok(VarInfo[] vis) {

    if (!valid_types(vis)) {
      return false;
    }

        if (dkconfig_integral_only) {
          return (vis[0].file_rep_type.isIntegral()
                  && vis[1].file_rep_type.isIntegral());
        }
        return true;
  }

  @Override
  protected IntNonEqual instantiate_dyn(@Prototype IntNonEqual this, PptSlice slice) {

    // System.out.printf("Instantiating non-equal on %s and %s%n",
    //                     slice.var_infos[0], slice.var_infos[1]);

    return new IntNonEqual(slice);
  }

  @Override
  protected Invariant resurrect_done_swapped() {

      // we don't care if things swap; we have symmetry
      return this;
  }

  @Pure
  @Override
  public boolean is_symmetric() {
    return true;
  }

  // JHP: this should be removed in favor of checks in PptTopLevel
  // such as is_equal, is_lessequal, etc.
  // Look up a previously instantiated IntNonEqual relationship.
  // Should this implementation be made more efficient?
  public static @Nullable IntNonEqual find(PptSlice ppt) {
    assert ppt.arity() == 2;
    for (Invariant inv : ppt.invs) {
      if (inv instanceof IntNonEqual) {
        return (IntNonEqual) inv;
      }
    }

    // If the invariant is suppressed, create it
    if ((suppressions != null) && suppressions.suppressed(ppt)) {
      IntNonEqual inv = proto.instantiate_dyn(ppt);
      // System.out.printf("%s is suppressed in ppt %s%n", inv.format(), ppt.name());
      return inv;
    }

    return null;
  }

  @Override
  public String repr(@GuardSatisfied IntNonEqual this) {
    return "IntNonEqual" + varNames();
  }

  @SideEffectFree
  @Override
  public String format_using(@GuardSatisfied IntNonEqual this, OutputFormat format) {

    String var1name = var1().name_using(format);
    String var2name = var2().name_using(format);

    if ((format == OutputFormat.DAIKON) || (format == OutputFormat.ESCJAVA)) {
      String comparator = "!=";
      return var1name + " " + comparator + " " + var2name;
    }

    if (format == OutputFormat.CSHARPCONTRACT) {

        String comparator = "!=";
        return var1name + " " + comparator + " " + var2name;
    }

    if (format.isJavaFamily()) {

        if ((var1name.indexOf("daikon.Quant.collectObject") != -1)
            || (var2name.indexOf("daikon.Quant.collectObject") != -1)) {
          return "(warning: it is meaningless to compare hashcodes for values obtained through daikon.Quant.collect... methods:"
            + var1name + " != " + var2name + ")";
        }
        return var1name + " != " + var2name;
    }

    if (format == OutputFormat.SIMPLIFY) {

        String comparator = "NEQ";

      return "("
          + comparator
          + " "
          + var1().simplifyFixup(var1name)
          + " "
          + var2().simplifyFixup(var2name)
          + ")";
    }

    return format_unimplemented(format);
  }

  @Override
  public InvariantStatus check_modified(long v1, long v2, int count) {
    if (!(v1 != v2)) {
      return InvariantStatus.FALSIFIED;
    }
    return InvariantStatus.NO_CHANGE;
  }

  @Override
  public InvariantStatus add_modified(long v1, long v2, int count) {
    if (logDetail() || debug.isLoggable(Level.FINE)) {
      log(
          debug,
          "add_modified (" + v1 + ", " + v2 + ",  ppt.num_values = " + ppt.num_values() + ")");
    }
    if ((logOn() || debug.isLoggable(Level.FINE))
        && check_modified(v1, v2, count) == InvariantStatus.FALSIFIED)
      log(debug, "destroy in add_modified (" + v1 + ", " + v2 + ",  " + count + ")");

    return check_modified(v1, v2, count);
  }

  // This is very tricky, because whether two variables are equal should
  // presumably be transitive, but it's not guaranteed to be so when using
  // this method and not dropping out all variables whose values are ever
  // missing.
  @Override
  protected double computeConfidence() {
    // Should perhaps check number of samples and be unjustified if too few
    // samples.

      // // The reason for this multiplication is that there might be only a
      // // very few possible values.  Example:  towers of hanoi has only 6
      // // possible (pegA, pegB) pairs.
      // return 1 - (Math.pow(.5, ppt.num_values())
      //             * Math.pow(.99, ppt.num_mod_samples()));
      return 1 - Math.pow(.5, ppt.num_samples());
  }

  @Pure
  @Override
  public boolean isExact() {

      return false;
  }

  // // Temporary, for debugging
  // public void destroy() {
  //   if (debug.isLoggable(Level.FINE)) {
  //     System.out.println("IntNonEqual.destroy(" + ppt.name() + ")");
  //     System.out.println(repr());
  //     (new Error()).printStackTrace();
  //   }
  //   super.destroy();
  // }

  @Override
  public InvariantStatus add(
      @Interned Object v1, @Interned Object v2, int mod_index, int count) {
    if (debug.isLoggable(Level.FINE)) {
      debug.fine(
          "IntNonEqual"
          + ppt.varNames()
          + ".add("
          + v1
          + ","
          + v2
          + ", mod_index="
          + mod_index
          + "), count="
          + count
          + ")");
    }
    return super.add(v1, v2, mod_index, count);
  }

  @Pure
  @Override
  public boolean isSameFormula(Invariant other) {
    return true;
  }

  @Pure
  @Override
  public boolean isExclusiveFormula(Invariant other) {

    // Also ought to check against LinearBinary, etc.

      if (other instanceof IntEqual) {
        return true;
      }

    return false;
  }

  @Override
  public @Nullable DiscardInfo isObviousStatically(VarInfo[] vis) {
    final VarInfo var1 = vis[0];
    final VarInfo var2 = vis[1];

    if (var1.aux.hasValue(VarInfoAux.MAXIMUM_VALUE)
        && var2.aux.hasValue(VarInfoAux.MINIMUM_VALUE)) {
      int maxA = var1.aux.getInt(VarInfoAux.MAXIMUM_VALUE),
          minB = var2.aux.getInt(VarInfoAux.MINIMUM_VALUE);

      if (maxA < minB) {
        return new DiscardInfo(
            this,
            DiscardCode.obvious,
            var1.name() + " DISCARD_OP " + var2.name() + " is already known");
      }
    }

    if (var1.aux.hasValue(VarInfoAux.MINIMUM_VALUE)
        && var2.aux.hasValue(VarInfoAux.MAXIMUM_VALUE)) {
      int maxB = var2.aux.getInt(VarInfoAux.MAXIMUM_VALUE),
          minA = var1.aux.getInt(VarInfoAux.MINIMUM_VALUE);

      if (minA > maxB) {
        return new DiscardInfo(
            this,
            DiscardCode.obvious,
            var1.name() + " DISCARD_OP " + var2.name() + " is already known");
      }
    }

    return super.isObviousStatically(vis);
  }

  @Pure
  @Override
  public @Nullable DiscardInfo isObviousDynamically(VarInfo[] vis) {

    // JHP: We might consider adding a check over bounds.   If
    // x < c and y > c then we know that x < y.  Similarly for
    // x > c and y < c.  We could also substitute oneof for
    // one or both of the bound checks.

    DiscardInfo super_result = super.isObviousDynamically(vis);
    if (super_result != null) {
      return super_result;
    }

    VarInfo var1 = vis[0];
    VarInfo var2 = vis[1];

    @SuppressWarnings("UnusedVariable") // generated code, variable is sometimes used
    DiscardInfo di;

      // (A[] no dups) ^ (i != j) ==> a[i] != a[j]
      di = no_dups_implies(vis);
      if (di != null) {
        return di;
      }

    { // Sequence length tests
      SequenceLength sl1 = null;
      if (var1.isDerived() && (var1.derived instanceof SequenceLength)) {
        sl1 = (SequenceLength) var1.derived;
      }
      SequenceLength sl2 = null;
      if (var2.isDerived() && (var2.derived instanceof SequenceLength)) {
        sl2 = (SequenceLength) var2.derived;
      }

      // "size(a)-1 cmp size(b)-1" is never even instantiated;
      // use "size(a) cmp size(b)" instead.

      // This might never get invoked, as equality is printed out specially.
      VarInfo s1 = (sl1 == null) ? null : sl1.base;
      VarInfo s2 = (sl2 == null) ? null : sl2.base;
      if ((s1 != null) && (s2 != null) && (s1.equalitySet == s2.equalitySet)) {
        // lengths of equal arrays being compared
        String n1 = var1.name();
        String n2 = var2.name();
        return new DiscardInfo(
            this,
            DiscardCode.obvious,
            n1 + " and " + n2 + " are equal arrays, so equal size is implied");
      }

    }

    return null;
  } // isObviousDynamically

  /**
   * Suppress NonEqual invariants where both variables are subscripts from the same array and the
   * array has no duplicates:
   *
   * <pre>(A[] has no dups) ^ (i != j) &rArr; a[i] != a[j]</pre>
   */
  private @Nullable DiscardInfo no_dups_implies(VarInfo[] vis) {

    // Make sure v1 and v2 are SequenceScalarSubscript from the same array
    VarInfo v1 = vis[0];
    VarInfo v2 = vis[1];
    if (!v1.isDerived() || !(v1.derived instanceof SequenceScalarSubscript)) {
      return null;
    }
    if (!v2.isDerived() || !(v2.derived instanceof SequenceScalarSubscript)) {
      return null;
    }
    @NonNull SequenceScalarSubscript der1 = (SequenceScalarSubscript) v1.derived;
    @NonNull SequenceScalarSubscript der2 = (SequenceScalarSubscript) v2.derived;

    // The sequence vars must be equal (or the same)
    if (!ppt.parent.is_equal(der1.seqvar().canonicalRep(),
                              der2.seqvar().canonicalRep()))
      return null;

    // The subscripts must be non_equal
    DiscardInfo di1 = ppt.parent.check_implied_canonical(this, der1.sclvar(),
                                        der2.sclvar(), IntNonEqual.get_proto());
    if (di1 == null) {
      return null;
    }

    // The array must have no-dups
    DiscardInfo di2 = ppt.parent.check_implied_canonical(this, der1.seqvar(),
                                                          NoDuplicates.get_proto());
    if (di2 == null) {
      return null;
    }

    return new DiscardInfo(this, DiscardCode.obvious, di1.discardString()
                            + " and " + di2.discardString());
  }

  /** NI suppressions, initialized in get_ni_suppressions() */
  private static @Nullable NISuppressionSet suppressions = null;

  /** Returns the non-instantiating suppressions for this invariant. */
  @Pure
  @Override
  public NISuppressionSet get_ni_suppressions() {
    if (suppressions == null) {

        NISuppressee suppressee = new NISuppressee(IntNonEqual.class, 2);

      // suppressor definitions (used in suppressions below)

      NISuppressor v1_gt_v2 = new NISuppressor(0, 1, IntGreaterThan.class);

      NISuppressor v1_lt_v2 = new NISuppressor(0, 1, IntLessThan.class);

      suppressions =
          new NISuppressionSet(
              new NISuppression[] {

                  // v1 < v2 => v1 != v2
                  new NISuppression(v1_lt_v2, suppressee),
                  // v1 > v2 => v1 != v2
                  new NISuppression(v1_gt_v2, suppressee),

              });
    }
    return suppressions;
  }

}
