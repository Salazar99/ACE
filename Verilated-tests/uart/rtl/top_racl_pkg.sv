package top_racl_pkg;

  // ---------------- RACL config (keep your existing params) ----------------
  // (Shown here for context; leave yours as-is if already present.)

  // Desired role width; auto-limit to available a_user.rsvd bits.
  localparam int RACL_ROLE_W_DESIRED = 4;
  localparam int RACL_ROLE_W =
      (RACL_ROLE_W_DESIRED <= tlul_pkg::RsvdWidth) ? RACL_ROLE_W_DESIRED
                                                   : tlul_pkg::RsvdWidth;
  localparam int RACL_NUM_ROLES = (1 << RACL_ROLE_W);

  localparam int RACL_NUM_POLICIES = 1;

  // Bit locations inside TL-UL a_user.rsvd
  localparam int RACL_ROLE_LSB = 0;
  // Keep CTN UID small and optional; we’ll truncate safely.
  localparam int CTN_UID_W     = 1;
  localparam int CTN_UID_LSB   = RACL_ROLE_LSB + RACL_ROLE_W;

  // ---------------- Basic types (keep yours if already defined) -----------
  typedef logic [RACL_ROLE_W-1:0]     racl_role_t;
  typedef logic [RACL_NUM_ROLES-1:0]  racl_perm_t;

  typedef struct packed {
    racl_perm_t read_perm;
    racl_perm_t write_perm;
  } racl_policy_t;

  typedef racl_policy_t racl_policy_vec   [1];
  typedef racl_policy_t racl_policy_vec_t [1];

  localparam int RACL_POLICY_SEL_W =
      (RACL_NUM_POLICIES <= 1) ? 1 : $clog2(RACL_NUM_POLICIES);
  typedef logic [RACL_POLICY_SEL_W-1:0] racl_policy_sel_t;

  // Provide the role vector typedef some RTL expects
  localparam int RACL_ROLE_VEC_LEN = 16;
  typedef racl_role_t racl_role_vec_t [RACL_ROLE_VEC_LEN];
  

  // ---------------- Error log shape (add 'valid') --------------------------
  typedef struct packed {
    logic                      valid;            // <— added
    logic [top_pkg::TL_AW-1:0] request_address;
    racl_role_t                racl_role;
    logic                      overflow;
    logic [CTN_UID_W-1:0]      ctn_uid;
    logic                      read_access;      // 1 = read, 0 = write
  } racl_error_log;
  typedef racl_error_log racl_error_log_t;

  // ---------------- Safe extractors from a_user.rsvd -----------------------
  // Use right-shifts + truncation so we never select out-of-range bits,
  // regardless of tlul_pkg::RsvdWidth (computed from TL_AUW etc.).  [1](https://opentitan.org/book/hw/ip/tlul/index.html)

  function automatic racl_role_t tlul_extract_racl_role_bits
    (input logic [tlul_pkg::RsvdWidth-1:0] rsvd);
    racl_role_t role;
    if (RACL_ROLE_LSB >= tlul_pkg::RsvdWidth) begin
      role = '0;
    end else begin
      logic [tlul_pkg::RsvdWidth-1:0] shifted;
      shifted = rsvd >> RACL_ROLE_LSB;
      role    = shifted[RACL_ROLE_W-1:0];  // safe truncation
    end
    return role;
  endfunction

  function automatic logic [CTN_UID_W-1:0] tlul_extract_ctn_uid_bits
    (input logic [tlul_pkg::RsvdWidth-1:0] rsvd);
    logic [CTN_UID_W-1:0] uid;
    if (CTN_UID_LSB >= tlul_pkg::RsvdWidth) begin
      uid = '0;
    end else begin
      logic [tlul_pkg::RsvdWidth-1:0] shifted;
      shifted = rsvd >> CTN_UID_LSB;
      uid     = shifted[CTN_UID_W-1:0];     // safe truncation
    end
    return uid;
  endfunction

endpackage : top_racl_pkg
