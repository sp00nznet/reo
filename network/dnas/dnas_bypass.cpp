#include "dnas_bypass.h"
#include <cstdio>

namespace reo {

static bool s_active = false;

void DnasBypass::apply() {
    // In the recompiled code, the DNAS check functions will be overridden
    // to return success immediately. This is done via the PS2Recomp
    // game override system — we register replacements for the DNAS
    // initialization and verification functions.
    //
    // obsrv.org's approach for PCSX2:
    //   - Patch the ELF to skip DNAS calls
    //   - Or run a local DNAS server with crafted responses
    //
    // Our approach (native recomp):
    //   - Simply replace the DNAS functions with stubs that return success
    //   - No network traffic to Sony's servers at all

    s_active = true;
    printf("[DNAS] Bypass applied — DNAS authentication disabled\n");
    printf("[DNAS] Sony shut down DNAS servers in 2016. Rest in peace.\n");
}

bool DnasBypass::is_active() {
    return s_active;
}

const char* DnasBypass::get_fake_id() {
    // Return a plausible-looking DNAS ID
    // The actual format is an opaque hex string
    return "REO00000000000000000000000000000";
}

} // namespace reo
