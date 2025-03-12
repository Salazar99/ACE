// ***** This file is automatically generated from SequenceScalar.java.jpp

package daikon.inv.binary.sequenceScalar;

import daikon.*;
import daikon.inv.*;
import daikon.inv.binary.BinaryInvariant;
import org.checkerframework.checker.interning.qual.Interned;
import org.checkerframework.checker.lock.qual.GuardSatisfied;
import org.checkerframework.dataflow.qual.Pure;
import org.plumelib.util.ArraysPlume;
import org.plumelib.util.Intern;
import typequals.prototype.qual.NonPrototype;
import typequals.prototype.qual.Prototype;

/**
 * Abstract base class for comparing long sequences to long variables. Note that the sequence
 * must always be passed in first. An example is {@code x is a member of a[]}.
 */
public abstract class SequenceScalar extends BinaryInvariant {

  static final long serialVersionUID = 20040113L;

  protected SequenceScalar(PptSlice ppt) {
    super(ppt);
  }

  protected @Prototype SequenceScalar() {
    super();
  }

  /**
   * Returns whether or not the specified types are valid. All subclasses accept a scalar in one
   * parameter and an array over the same scalar type in the other.
   */
  @Override
  public boolean valid_types(VarInfo[] vis) {

    if (vis.length != 2) {
      return false;
    }

    if (!vis[0].file_rep_type.baseIsScalar() || !vis[1].file_rep_type.baseIsScalar()) {
      return false;
    }

    return vis[0].file_rep_type.isArray() ^ vis[1].file_rep_type.isArray();
  }

  /**
   * Since the order is determined from the vars and the sequence is always first, no permute is
   * necesesary. Subclasses can override if necessary.
   */
  protected Invariant resurrect_done_swapped() {
    return this;
  }

  /**
   * Since the order is determined from the vars and the sequence is always first, this is
   * essentially symmetric. Subclasses can override if necessary.
   */
  @Pure
  @Override
  public boolean is_symmetric() {
    return true;
  }

  // Check if swap occurred and call one of the other two methods
  @Override
  protected Invariant resurrect_done(int[] permutation) {
    assert permutation.length == 2;
    // assert ArraysPlume.fnIsPermutation(permutation);
    if (permutation[0] == 1) {
      return resurrect_done_swapped();
    } else {
      return resurrect_done_unswapped();
    }
  }

   /** Subclasses can override in the rare cases they need to fix things even when not swapped. */
  protected Invariant resurrect_done_unswapped() {
    // do nothing
    return this;
  }

 protected final boolean seq_first(@GuardSatisfied SequenceScalar this) {
    return ppt.var_infos[0].rep_type == ProglangType.INT_ARRAY;
  }

  protected final int seq_index(@GuardSatisfied SequenceScalar this) {
    return seq_first() ? 0 : 1;
  }

  protected final int scl_index(@GuardSatisfied SequenceScalar this) {
    return seq_first() ? 1 : 0;
  }

  public VarInfo seqvar(@GuardSatisfied SequenceScalar this) {
    return ppt.var_infos[seq_index()];
  }

  public VarInfo sclvar(@GuardSatisfied SequenceScalar this) {
    return ppt.var_infos[scl_index()];
  }

  /**
   * Return the sequence variable in the tuple whose VarInfos are corresponds to this.ppt.var_infos.
   */
  public VarInfo seqvar(VarInfo[] vis) {
    return vis[seq_index()];
  }

  /**
   * Return the scalar variable in the tuple whose VarInfos are corresponds to this.ppt.var_infos.
   */
  public VarInfo sclvar(VarInfo[] vis) {
    return vis[scl_index()];
  }

  @Override
  public InvariantStatus check(
      @Interned Object val1, @Interned Object val2, int mod_index, int count) {
    assert !falsified;
    assert (mod_index >= 0) && (mod_index < 4);
    long[] v1 = (long[]) val1;
    long v2 = ((Long) val2).longValue();
    if (v1 == null) {
    } else if (mod_index == 0) {
      return check_unmodified(v1, v2, count);
    } else {
      return check_modified(v1, v2, count);
    }
    return InvariantStatus.NO_CHANGE;
  }

  @Override
  public InvariantStatus add(
      @Interned Object val1, @Interned Object val2, int mod_index, int count) {
    assert !falsified;
    assert (mod_index >= 0) && (mod_index < 4);
    long[] v1 = (long[]) val1;
    long v2 = ((Long) val2).longValue();
    if (v1 == null) {
    } else if (mod_index == 0) {
      return add_unmodified(v1, v2, count);
    } else {
      return add_modified(v1, v2, count);
    }
    return InvariantStatus.NO_CHANGE;
  }

  /**
   * Presents a sample to the invariant. Returns whether the sample is consistent with the
   * invariant. Does not change the state of the invariant.
   *
   * @param count how many identical samples were observed in a row. For example, three calls to
   *     check_modified with a count parameter of 1 is equivalent to one call to check_modified with
   *     a count parameter of 3.
   * @return whether or not the sample is consistent with the invariant
   */
  public abstract InvariantStatus check_modified(long @Interned [] v1, long v2, int count);

  public InvariantStatus check_unmodified(long @Interned [] v1, long v2, int count) {
    return InvariantStatus.NO_CHANGE;
  }

  /**
   * Similar to {@link #check_modified} except that it can change the state of the invariant if
   * necessary. If the invariant doesn't have any state, then the implementation should simply call
   * {@link #check_modified}. This method need not check for falsification; that is done by the
   * caller.
   */
  public abstract InvariantStatus add_modified(long @Interned [] v1, long v2, int count);

  /** By default, do nothing if the value hasn't been seen yet. Subclasses can override this. */
  public InvariantStatus add_unmodified(long @Interned [] v1, long v2, int count) {
    return InvariantStatus.NO_CHANGE;
  }
}
