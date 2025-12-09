// top_pkg_minimal.sv
// Minimal, self-contained replacement for OpenTitan's top_pkg.sv
// Provides TL_* parameters that tlul_pkg.sv and friends expect.
//
// NOTE: Adjust parameters as needed to match your design.
// Typical OpenTitan default: TL_DW = 32, TL_AW = 32.

package top_pkg;

  // ------------------------------
  // Core TileLink-UL configuration
  // ------------------------------
  // Address width (bits)
  localparam int TL_AW  = 32;

  // Data width (bits). Must be 32 or 64 for most OT IP.
  localparam int TL_DW  = 32;

  // Data byte width (bytes) = TL_DW / 8. Must be power of two.
  localparam int TL_DBW = (TL_DW >> 3);

  // Source ID width (host-generated). Chosen to allow a few outstanding txns.
  localparam int TL_AIW = 8;

  // Sink ID width (device-generated). 1 is typical for simple fabrics.
  localparam int TL_DIW = 1;

  // User signal widths (project-specific sideband).
  // These are used by tlul_pkg.sv via top_pkg::TL_AUW/TL_DUW.
  // Pick any non-negative integers. Defaults align with common OT tops.
  localparam int TL_AUW = 21; // a_user width
  localparam int TL_DUW = 14; // d_user width

  // TL size width (log2 of max transfer size in bytes, encoded as log2(bytes))
  // In OpenTitan, this is computed from TL_DBW.
  localparam int TL_SZW = $clog2($clog2(TL_DBW) + 1);

  // ------------------------------
  // (Optional) Convenience helpers
  // ------------------------------
  // Compute number of address bits for a memory depth.
  // Some IPs use prim_util_pkg::vbits(), but we keep this stub independent.
  function automatic int vbits(input int unsigned depth);
    vbits = (depth <= 1) ? 1 : $clog2(depth);
  endfunction

endpackage : top_pkg
