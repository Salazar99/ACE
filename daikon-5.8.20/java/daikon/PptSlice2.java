// ***** This file is automatically generated from PptSlice.java.jpp

package daikon;

import static daikon.tools.nullness.NullnessUtil.castNonNullDeep;

import daikon.inv.*;

import daikon.inv.binary.*;
import daikon.inv.binary.twoScalar.*;
import daikon.inv.binary.twoSequence.*;
import daikon.inv.binary.twoString.*;
import daikon.inv.binary.sequenceScalar.*;

import daikon.suppress.*;
import java.util.*;
import java.util.logging.Level;
import java.util.logging.Logger;
import org.checkerframework.checker.initialization.qual.UnknownInitialization;
import org.checkerframework.checker.interning.qual.Interned;
import org.checkerframework.checker.lock.qual.GuardSatisfied;
import org.checkerframework.checker.nullness.qual.MonotonicNonNull;
import org.checkerframework.checker.nullness.qual.NonNull;
import org.plumelib.util.ArraysPlume;
import org.plumelib.util.Intern;
import typequals.prototype.qual.Prototype;
import typequals.prototype.qual.NonPrototype;

/** Contains all of the invariants over a particular set of 2 variables. */
public final class PptSlice2 extends PptSlice {
  static final long serialVersionUID = 20040921L;

  /** Debug tracer. */
  public static final Logger debugSpecific = Logger.getLogger("daikon.PptSlice2");

  public static final Logger debugMerge = Logger.getLogger("daikon.PptSlice.merge");

  /** Create a new PptSlice2. The var_infos must be in varinfo_index order. */
  public PptSlice2(PptTopLevel parent, VarInfo[] var_infos) {

    super(parent, var_infos);
    assert var_infos.length == 2;

    if (debug.isLoggable(Level.FINE) || debugSpecific.isLoggable(Level.FINE)) {
      debug.info("Created PptSlice2 " + this.name());
    }
    if (Debug.logOn()) {
      Debug.log(getClass(), this, "Created");
    }
  }

  PptSlice2(PptTopLevel parent, VarInfo var_info1, VarInfo var_info2) {
    this(parent, new VarInfo[] {var_info1, var_info2});
  }

  @Override
  public final int arity(
      @UnknownInitialization(PptSlice.class) PptSlice2 this) {
    return 2;
  }
  /**
   * Creates all of the invariants that are appropriate for this slice. No invariants are
   * created unless the variables in the slice are compatible. If the variables are compatible,
   * invariants that match the type of the slices variables are created.
   */
  @Override
  public void instantiate_invariants() {
    instantiate_invariants(Daikon.proto_invs);
  }

  /**
   * Creates all of the invariants that are appropriate for this slice based on the list of
   * invariants passed in. No invariants are created unless the variables in the slice are
   * compatible. If the variables are compatible, invariants that match the type of the slices
   * variables are created.
   */
  public void instantiate_invariants(List<@Prototype Invariant> proto_invs) {

    if (Debug.logOn()) {
      log("instantiate invariants");
    }

    // Do nothing if the variables aren't compatible

      boolean compatible = true;
      VarInfo v1 = var_infos[0];
      VarInfo v2 = var_infos[1];
      if (v1.rep_type.isArray() == v2.rep_type.isArray()) {
        compatible = v1.compatible(v2);
      } else if (v1.rep_type.isArray()) {
        compatible = v1.eltsCompatible(v2);
      } else {
        compatible = v2.eltsCompatible(v1);
      }
      if (!compatible) {
        Debug.log(this.getClass(), this, "not created - incompatible");
        return;
      }

    // Instantiate each invariant that is valid over those types
    for (@Prototype Invariant proto : proto_invs) {

      // Skip invariant if the types are not appropriate
      if (!proto.valid_types(var_infos) || !proto.instantiate_ok(var_infos)) {
        // Debug.log (proto.getClass(), this, "not created-types not valid");
        continue;
      }

      // Skip invariant if it is suppressed.  Note that this will work
      // even though we haven't instantiated all of the invariants for this
      // slice yet because it will check constant values.
      NISuppressionSet ss = proto.get_ni_suppressions();
      if (NIS.dkconfig_enabled && (ss != null) && !ss.is_instantiate_ok(this)) {
        if (Debug.logOn()) { // avoid stringify if not logging
          Debug.log(proto.getClass(), this, "not created - suppressed " + ss);
        }
        continue;
      }

      // Instantiate the invariant and add it to the list.  Null should
      // never be returned because we check instantiate_ok() above and
      // only enabled invariants are in this list.
      @SuppressWarnings("nullness") // application invariant, see comment above
      @NonNull Invariant inv = proto.instantiate(this);
      addInvariant(inv);
      if (Debug.logOn()) {
        inv.log("Created invariant %s ss = %s", inv.format(), ss);
      }
    }
  }

  // These accessors are for abstract methods declared in Ppt
  /** Returns the number of (non-missing) samples observed at this slice. */
  @Override
  public int num_samples(@UnknownInitialization @GuardSatisfied PptSlice2 this) {
    if (parent == null || var_infos == null) { // handle not-yet-initialized slices
      return 0;
    }
    // return an approximation

      int num_slice_samples = parent.num_samples(var_infos[0], var_infos[1]);

    return num_slice_samples;
  }

  /**
   * Returns an upper bound on the number of distinct values observed at this slice. This is not the
   * number of samples observed.
   */
  @Override
  public int num_values() {
    // return an approximation

      int num_values = parent.num_values(var_infos[0], var_infos[1]);

    return num_values;
  }

  /**
   * This procedure accepts a sample (a ValueTuple), extracts the values from it, casts them to the
   * proper types, and passes them along to the invariants proper. (The invariants accept typed
   * values rather than a ValueTuple that encapsulates objects of any type whatever.)
   */
  @Override
  public List<Invariant> add(ValueTuple full_vt, int count) {

    assert invs.size() > 0;
    for (Invariant inv : invs) {
      assert inv != null;
    }

      VarInfo vi1 = var_infos[0];
      VarInfo vi2 = var_infos[1];

    // If any var has encountered out of array bounds values,
    // stop all invariants in this slice.  The presumption here is that
    // an index out of bounds implies that the derived variable (eg a[i])
    // doesn't really make any sense (essentially that i is not a valid
    // index for a).  Invariants on the derived variable are thus not
    // relevant
    for (int i = 0; i < var_infos.length; i++) {
      if (var_infos[i].missingOutOfBounds()) {
        List<Invariant> result = new ArrayList<>();
        for (Invariant inv : invs) {
          if (PrintInvariants.print_discarded_invariants) {
            DiscReasonMap.put(
                  inv,
                  DiscardCode.bad_sample,
                  var_infos[i].name() + " array index was out of bounds");
          }
          inv.falsify();
          result.add(inv);
          if (Invariant.logOn()) {
            inv.log("destroyed because %s array index out of bounds", var_infos[i].name());
          }
        }
        if (VarInfo.debugMissing.isLoggable(Level.FINE)) {
          VarInfo.debugMissing.fine(
              "Removing slice "
                  + this
                  + " because var "
                  + var_infos[i].name()
                  + " array index out of bounds");
        }
        return result;
      }
    }

    int mod1 = full_vt.getModified(vi1);
    if (mod1 == ValueTuple.MISSING_FLOW || mod1 == ValueTuple.MISSING_NONSENSICAL) {
      return emptyInvList;
    }

    if (mod1 == ValueTuple.STATIC_CONSTANT) {
      assert vi1.is_static_constant;
      mod1 = ((num_samples() == 0) ? ValueTuple.MODIFIED : ValueTuple.UNMODIFIED);
    }

      int mod2 = full_vt.getModified(vi2);
      if (mod2 == ValueTuple.MISSING_FLOW || mod2 == ValueTuple.MISSING_NONSENSICAL) {
        return emptyInvList;
      }
      if (mod2 == ValueTuple.STATIC_CONSTANT) {
        assert vi2.is_static_constant;
        mod2 = ((num_samples() == 0)
                ? ValueTuple.MODIFIED : ValueTuple.UNMODIFIED);
      }

    Object val1 = full_vt.getValue(vi1);
    assert Intern.isInterned(val1) : "obj " + val1 + " class " + val1.getClass();

      Object val2 = full_vt.getValue(vi2);
      assert Intern.isInterned(val2);

    // Supply the new values to all the invariant objects.
    assert (mod1 == vi1.getModified(full_vt))
                  || ((vi1.getModified(full_vt) == ValueTuple.STATIC_CONSTANT)
            && ((mod1 == ValueTuple.UNMODIFIED) || (mod1 == ValueTuple.MODIFIED)));

      List<Invariant> weakened_invs = add_val_bu(val1, val2, mod1, mod2, count);

    return weakened_invs;
  }

  public List<Invariant> add_val_bu(@Interned Object val1, @Interned Object val2,
                                        int mod1, int mod2, int count) {

    assert (mod1 != ValueTuple.MISSING_FLOW
                       && mod1 != ValueTuple.MISSING_NONSENSICAL)
                       && (mod2 != ValueTuple.MISSING_FLOW
                       && mod2 != ValueTuple.MISSING_NONSENSICAL);

    List<Invariant> result = new ArrayList<>();
    boolean array1 = var_infos[0].rep_type.isArray();
    boolean array2 = var_infos[1].rep_type.isArray();
    if (array2 && ! array1) {
      for (Invariant invariant : invs) {
        BinaryInvariant inv = (BinaryInvariant) invariant;
        if (inv.is_false()) {
          continue;
        }
        InvariantStatus status = inv.add(val2, val1, mod1, count);
        if (status == InvariantStatus.FALSIFIED) {
          inv.falsify();
          result.add(inv);
        } else if (status == InvariantStatus.WEAKENED) {
          result.add(inv);
        }
        if (PrintInvariants.print_discarded_invariants && inv.is_false()) {
          DiscReasonMap.put(inv, DiscardCode.bad_sample,
                            "Falsified from sample: "
                            + var_infos[0].name()
                            + " = " + val1 + "," + var_infos[1].name()
                            + " = " + Debug.toString(val2));
        }
      }
    } else {
      for (Invariant invariant : invs) {
        BinaryInvariant inv = (BinaryInvariant) invariant;
        if (inv.is_false()) {
          continue;
        }
        InvariantStatus status = inv.add(val1, val2, mod1, count);
        if (status == InvariantStatus.FALSIFIED) {
          inv.falsify();
          result.add(inv);
        } else if (status == InvariantStatus.WEAKENED) {
          result.add(inv);
        }
        if (PrintInvariants.print_discarded_invariants && inv.is_false()) {
          if (array1
              && array2
              && !( (inv instanceof SeqSeqIntEqual)
                    || (inv instanceof SeqSeqFloatEqual)
                    || (inv instanceof SeqSeqStringEqual) )
              && ArraysPlume.length(val1) != ArraysPlume.length(val2)) {
            // No need to print out two potentially huge arrays if the
            // reason for discard was because of different array lengths
            DiscReasonMap.put(inv, DiscardCode.bad_sample,
                                "Samples seen with different array lengths");
          } else {
            DiscReasonMap.put(inv, DiscardCode.bad_sample,
                    "Falsified from sample: " + var_infos[0].name()
                    + " = " + Debug.toString(val1)
                    + "," + var_infos[1].name()
                    + " = " + Debug.toString(val2));
          }
        }
      }
    }
    return result;
  }

  @Override
  public void addInvariant(Invariant invariant) {
    assert invariant != null;
    // assert invariant.ppt == this;

    if (Debug.dkconfig_internal_check) {
      // Don't add a check here to ensure that the invairant is not suppressed
      // in some cases (see NIS.apply_samples), a suppressed invariant is
      // added and them later removed when the suppression is found
      // if (invariant.is_ni_suppressed()) {
        // System.out.printf("suppressed invariant %s is being added to ppt %s "
        //                    + "with %d samples%n", invariant.format(), this,
        //                    this.num_samples());
        // NISuppressionSet ss = invariant.get_ni_suppressions();
        // ss.suppressed (invariant.ppt);
        // System.out.printf("suppression = %s%n", ss);
        // throw new Error();
     // }
    }

    invs.add(invariant);
    Global.instantiated_invariants++;
    if (Invariant.logOn()) {
      invariant.log("Instantiated %s", invariant.format());
    }
  }

  /**
   * Copy invariants from this slice to a new slice over the variables argNewVarInfos. The new slice
   * should not already exist.
   */
  @Override
  protected PptSlice cloneAndPivot(VarInfo[] argNewVarInfos) {

    // Sort the VarInfos by var_index and build a matching permutation
    // from the current order to the new order
    VarInfo[] vis_sorted = argNewVarInfos.clone();
    Arrays.sort(vis_sorted, VarInfo.IndexComparator.getInstance());
    int[] permutation = PptTopLevel.build_permute(argNewVarInfos, vis_sorted);

    // Assert sorted
    for (int i = 0; i < 2 - 1; i++) {
      assert vis_sorted[i].varinfo_index <= vis_sorted[i + 1].varinfo_index;
    }

    assert ArraysPlume.fnIsPermutation(permutation);
    // Assert that the permutation represents the rearrangement
    for (int i = 0; i < 2; i++) {
      // the variable that used to be at position "i" is now found at
      // position permutation[i].
      VarInfo oldvi = argNewVarInfos[i];
      VarInfo newvi = vis_sorted[permutation[i]];
      assert oldvi == newvi;
    }

    // The new slice should not already exist.
    assert parent.findSlice(vis_sorted) == null;

    // Why not just clone?  Because then index order wouldn't be
    // preserved
    PptSlice2 result = new PptSlice2(this.parent, vis_sorted);

    // re-parent the invariants and copy them out.
    List<Invariant> newInvs = new ArrayList<>();
    for (Invariant inv : invs) {
      assert inv.ppt == this;
      Invariant newInv = inv.transfer(result, permutation);
      newInvs.add(newInv);
      assert newInv != inv;
      assert newInv.ppt == result;
      assert inv.ppt == this;
    }

    if (Debug.logOn()) {
      result.log(
          "Copied "
              + newInvs.size()
              + " invariants from "
              + this.name()
              + " with "
              + invs.size()
              + " invariants");
    }
    result.invs.addAll(newInvs);
    if (PptSliceEquality.debug.isLoggable(Level.FINE)) {
      PptSliceEquality.debug.fine("cloneAndPivot: newInvs " + invs);
    }
    return result;
  }

  /**
   * Creates invariants at this ppt by merging invariants from each of its children. An invariant
   * must exist at each of the children in order for it to be created here (at the parent).
   * Additionally, some invariants have state information that must be merged. This is done by the
   * invariant itself.
   *
   * <p>The basic steps are:
   *
   * <ol>
   *   <li>Find all of the child invariants. These are the invariants in the matching slice of each
   *       child.
   *   <li>For each invariant class, build a list of all of the invariants of that class. Note that
   *       some invariant classes (eg, functionBinary) contain distinct invariants, each of which
   *       must be merged separately. See Invariant.Match for more information concerning what makes
   *       an invariant the 'same'
   *   <li>Each invariant that is found at each of the children is then merged to possibly create a
   *       parent invariant.
   * </ol>
   */
  public void merge_invariants() {

    if (debugMerge.isLoggable(Level.FINE)) {
      debugMerge.fine("entering merge_invariants for " + name());
    }

    // List of all invariants found over all of the children
    List<Invariant> all_invs = new ArrayList<>();

    // Keep count of the number of valid children processed.  An invariant
    // must be found at each valid child in order to exist at the parent.
    // A valid child is one that has received samples and has a corresponding
    // variable for each parent variable
    int valid_child_count = 0;

    // Loop through all of the children of our top level parent
    child_loop:
    for (PptRelation rel : parent.children) {
      PptTopLevel ppt = rel.child;

      // Skip any children that have not seen any samples
      if (ppt.num_samples() == 0) {
        if (debugMerge.isLoggable(Level.FINE)) {
          debugMerge.fine("-- slice ignored (no samples) " + ppt.name());
        }
        continue;
      }

      // Child variable info
      /*NNC:@MonotonicNonNull*/ VarInfo[] cvis = new VarInfo[var_infos.length];
      /*NNC:@MonotonicNonNull*/ VarInfo[] cvis_sorted = new VarInfo[var_infos.length];

      // Build the corresponding array of VarInfos for the child.  If any
      // of the vars don't exist in this child, skip the child (since we
      // won't have data for each variable).
      for (int j = 0; j < var_infos.length; j++) {
        VarInfo pv = var_infos[j];
        VarInfo cv = rel.childVar(pv);
        if (cv == null) {
          continue child_loop;
        }
        cvis[j] = cv.canonicalRep();
        cvis_sorted[j] = cv.canonicalRep();
      }

      cvis = castNonNullDeep(cvis); // https://tinyurl.com/cfissue/986
      cvis_sorted = castNonNullDeep(cvis_sorted); // https://tinyurl.com/cfissue/986

      // If any of the child variables have always been missing, this
      // particular slice in the child received no samples.  If dynamic
      // constants are enabled, the slice will have never been created.
      // These slices can be skipped unless they contain a missing out of
      // bound var.  Out of bounds variables destroy all invariants in
      // the slice (since the variable is deemed to be nonsensical)
      if (slice_missing(ppt, cvis)) {
        if (debugMerge.isLoggable(Level.FINE)) {
          debugMerge.fine(
              "-- slice ignored (missing) " + ppt.name() + " vars " + Arrays.toString(cvis_sorted));
        }
        continue;
      }

      // The child variables must be sorted by their index (in the child)
      Arrays.sort(cvis_sorted, VarInfo.IndexComparator.getInstance());

      // Keep track of the number of valid children
      valid_child_count++;

      // Find the corresponding slice.  If the slice does not exist or
      // has no invariants, there can be no invariants to merge (since
      // invariants must exist at each child to exist at the parent)
      PptSlice2 cslice = (PptSlice2) ppt.findSlice(cvis_sorted);
      if ((cslice == null) || (cslice.invs.size() == 0)) {
        if (Debug.logOn()) {
          this.log(
              "slice not found "
                  + ppt.name()
                  + " "
                  + Arrays.toString(cvis_sorted)
                  + " num_samples= "
                  + ppt.num_samples()
                  + " ppt.constants = "
                  + ppt.constants);
        }
        if (debugMerge.isLoggable(Level.FINE)) {
          debugMerge.fine(
              "-- slice not found " + ppt.name() + " vars " + Arrays.toString(cvis_sorted));
        }
        return;
      }

      // // Update sample count info
      // mod_samples += cslice.mod_samples;
      // unmod_samples += cslice.unmod_samples;

      // Build the permutation array from child to parent slice
      int[] permute = PptTopLevel.build_permute(cvis_sorted, cvis);

      // Debug print child vars and permute to parent
      if (debugMerge.isLoggable(Level.FINE)) {
        debugMerge.fine("-- Processing child " + ppt.name() + " (" + rel.getRelationType() + ")");
        debugMerge.fine("-- -- child vars = " + Arrays.toString(cvis_sorted));
        debugMerge.fine("-- -- parent vars = " + Arrays.toString(var_infos));
        debugMerge.fine("-- -- permute = " + Arrays.toString(permute));
      }

      // Add each invariant (permuted to match the parent varinfos)
      // to our list of invariants.
      for (Invariant orig_inv : cslice.invs) {
        Invariant inv = orig_inv.clone_and_permute(permute);
        all_invs.add(inv);
        if (Invariant.logOn()) {
          /*NNC:@MonotonicNonNull*/ VarInfo[] child_vars = new VarInfo[var_infos.length];
          for (int k = 0; k < var_infos.length; k++) {
            VarInfo pv = var_infos[k];
            @SuppressWarnings("nullness")
            @NonNull VarInfo cv = rel.childVar(pv);
            assert cv != null;
            child_vars[k] = cv.canonicalRep();
          }
          child_vars = castNonNullDeep(child_vars); // https://tinyurl.com/cfissue/986
          orig_inv.log("org inv");
          inv.log(
              "Created %s from %s using permute %s cvis_sorted = %s cvis = %s for ppt %s",
              inv,
              orig_inv,
              Arrays.toString(permute),
              Arrays.toString(cvis_sorted),
              Arrays.toString(child_vars),
              parent.name());
        }
      }
    }

    log("Found " + all_invs.size() + " invariants to merge");
    if (debugMerge.isLoggable(Level.FINE) && (valid_child_count == 0)) {
      debugMerge.fine("-- No valid children found");
    }

    // For each invariant found, find the list of invariants of the
    // same type (type corresponds basically but not exactly to the
    // invariants class) and add the invariant to that list.
    // Invariant.Match.equals() defines if two invariants are of the
    // same 'type' for the purpose of merging invariants.
    Map<Invariant.Match, List<Invariant>> inv_map =
        new LinkedHashMap<>();
    for (Invariant inv : all_invs) {
      Invariant.Match imatch = new Invariant.Match(inv);
      List<Invariant> invs = inv_map.get(imatch);
      if (Invariant.logOn()) {
        inv.log("Adding %s to %s invs list %s", inv.format(), name(), invs);
      }
      if (invs == null) {
        invs = new ArrayList<Invariant>();
        inv_map.put(imatch, invs);
      }
      invs.add(inv);
    }

    // Attempt to create a parent invariant for each invariant that
    // appeared at each valid child.  Note that some invariants will
    // not exist at the parent even if they exist at each child (eg,
    // LinearBinary)
    for (List<Invariant> child_invs : inv_map.values()) {
      if (child_invs.size() > valid_child_count) {
        // this shouldn't happen
        System.out.println(
           "Found "
               + child_invs.size()
               + " invariants at "
               + name()
               + " ("
               + valid_child_count
               + " children)");
        for (Invariant child_inv : child_invs) {
          System.out.printf(
              "-- Invariant = '%s' [%s] @%s%n",
              child_inv.repr(), child_inv.getClass(), child_inv.ppt);
        }
        assert child_invs.size() <= valid_child_count;
      }
      if (child_invs.size() == valid_child_count) {
        Invariant first = child_invs.get(0);
        if (Debug.logOn()) {
          first.log("Attempting merge of %s invariants into ppt %s", child_invs.size(), name());
        }
        Invariant parent_inv = first.merge(child_invs, this);
        if (parent_inv != null) {
          invs.add(parent_inv);
          if (Debug.logOn()) {
            parent_inv.log("Merge successful of %s into %s", parent_inv.format(), name());
          }
        }
      } else {
        if (Debug.logOn()) {
          Invariant inv = child_invs.get(0);
          inv.log(
              "Not merging invariant into %s, Found %s child invariants in %s children",
              name(), child_invs.size(), valid_child_count);
        }
      }
    }
  }

  /**
   * Returns whether or not the slice is missing due to having one or more of its variables always
   * missing. This returns true only for missing flow and/or missing nonsensical. Out of Bounds is
   * treated differently since it destroys all of its invariants.
   */
  private boolean slice_missing(PptTopLevel ppt, VarInfo[] vis) {

    if (ppt.constants != null) {

        if ((ppt.constants.is_missing(vis[0]) || ppt.constants.is_missing(vis[1]))
            && !vis[0].missingOutOfBounds()
            && !vis[1].missingOutOfBounds()) {
          return true;
        }

    }
    return false;
  }
}
