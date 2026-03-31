#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AF1E0
// Address: 0x1af1e0 - 0x1af280
void sub_001AF1E0_0x1af1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1af1e0u;

    // 0x1af1e0: 0x3c010032
    ctx->pc = 0x1af1e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1af1e4: 0x3c020023
    ctx->pc = 0x1af1e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1af1e8: 0xa0244400
    ctx->pc = 0x1af1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17408), (uint8_t)GPR_U32(ctx, 4));
    // 0x1af1ec: 0x244242f0
    ctx->pc = 0x1af1ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17136));
    // 0x1af1f0: 0x42080
    ctx->pc = 0x1af1f0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1af1f4: 0x3c010032
    ctx->pc = 0x1af1f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1af1f8: 0x442021
    ctx->pc = 0x1af1f8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1af1fc: 0x51880
    ctx->pc = 0x1af1fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1af200: 0x3c020023
    ctx->pc = 0x1af200u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1af204: 0xa0254401
    ctx->pc = 0x1af204u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17409), (uint8_t)GPR_U32(ctx, 5));
    // 0x1af208: 0x24424320
    ctx->pc = 0x1af208u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17184));
    // 0x1af20c: 0x431021
    ctx->pc = 0x1af20cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1af210: 0x8c830000
    ctx->pc = 0x1af210u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1af214: 0x8c420000
    ctx->pc = 0x1af214u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af218: 0x2404005e
    ctx->pc = 0x1af218u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
    // 0x1af21c: 0x806bde0
    ctx->pc = 0x1AF21Cu;
    ctx->pc = 0x1AF220u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1AF780u;
    sub_001AF780_0x1af780(rdram, ctx, runtime); return;
    ctx->pc = 0x1AF224u;
    // 0x1af224: 0x0
    ctx->pc = 0x1af224u;
    // NOP
    // 0x1af228: 0x0
    ctx->pc = 0x1af228u;
    // NOP
    // 0x1af22c: 0x0
    ctx->pc = 0x1af22cu;
    // NOP
    // 0x1af230: 0x27bdfff0
    ctx->pc = 0x1af230u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af234: 0x3c010032
    ctx->pc = 0x1af234u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1af238: 0xffbf0000
    ctx->pc = 0x1af238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af23c: 0x90234402
    ctx->pc = 0x1af23cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17410)));
    // 0x1af240: 0x1064000a
    ctx->pc = 0x1AF240u;
    {
        const bool branch_taken_0x1af240 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x1af240) {
            ctx->pc = 0x1AF26Cu;
            goto label_1af26c;
        }
    }
    ctx->pc = 0x1AF248u;
    // 0x1af248: 0x3c020023
    ctx->pc = 0x1af248u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1af24c: 0x3c010032
    ctx->pc = 0x1af24cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1af250: 0x41880
    ctx->pc = 0x1af250u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1af254: 0x24424348
    ctx->pc = 0x1af254u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17224));
    // 0x1af258: 0xa0244402
    ctx->pc = 0x1af258u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17410), (uint8_t)GPR_U32(ctx, 4));
    // 0x1af25c: 0x431021
    ctx->pc = 0x1af25cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1af260: 0x8c450000
    ctx->pc = 0x1af260u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af264: 0xc06bde0
    ctx->pc = 0x1AF264u;
    SET_GPR_U32(ctx, 31, 0x1AF26Cu);
    ctx->pc = 0x1AF268u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 99));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF26Cu; }
    }
    if (ctx->pc != 0x1AF26Cu) { return; }
    ctx->pc = 0x1AF26Cu;
label_1af26c:
    // 0x1af26c: 0xdfbf0000
    ctx->pc = 0x1af26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af270: 0x3e00008
    ctx->pc = 0x1AF270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF274u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF26Cu: goto label_1af26c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF278u;
    // 0x1af278: 0x0
    ctx->pc = 0x1af278u;
    // NOP
    // 0x1af27c: 0x0
    ctx->pc = 0x1af27cu;
    // NOP
}
