#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B22C0
// Address: 0x1b22c0 - 0x1b2340
void sub_001B22C0_0x1b22c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b22c0u;

    // 0x1b22c0: 0x27bdfff0
    ctx->pc = 0x1b22c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b22c4: 0x3c050032
    ctx->pc = 0x1b22c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x1b22c8: 0xffbf0000
    ctx->pc = 0x1b22c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b22cc: 0x240400a0
    ctx->pc = 0x1b22ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 160));
    // 0x1b22d0: 0xc0696f4
    ctx->pc = 0x1B22D0u;
    SET_GPR_U32(ctx, 31, 0x1B22D8u);
    ctx->pc = 0x1B22D4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294936800));
    ctx->pc = 0x1A5BD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5BD0_0x1a5bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B22D8u; }
    }
    if (ctx->pc != 0x1B22D8u) { return; }
    ctx->pc = 0x1B22D8u;
    // 0x1b22d8: 0x24040001
    ctx->pc = 0x1b22d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b22dc: 0x3c010031
    ctx->pc = 0x1b22dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1b22e0: 0x3c030031
    ctx->pc = 0x1b22e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x1b22e4: 0xa02468d0
    ctx->pc = 0x1b22e4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 26832), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b22e8: 0x246368c0
    ctx->pc = 0x1b22e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 26816));
    // 0x1b22ec: 0x3c010031
    ctx->pc = 0x1b22ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1b22f0: 0x240700ff
    ctx->pc = 0x1b22f0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b22f4: 0xac2366b0
    ctx->pc = 0x1b22f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26288), GPR_U32(ctx, 3));
    // 0x1b22f8: 0x302d
    ctx->pc = 0x1b22f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b22fc:
    // 0x1b22fc: 0x3c010031
    ctx->pc = 0x1b22fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1b2300: 0x24c60001
    ctx->pc = 0x1b2300u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b2304: 0x8c2566b0
    ctx->pc = 0x1b2304u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 26288)));
    // 0x1b2308: 0x28c30100
    ctx->pc = 0x1b2308u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 256));
    // 0x1b230c: 0x24a4fffe
    ctx->pc = 0x1b230cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x1b2310: 0x3c010031
    ctx->pc = 0x1b2310u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1b2314: 0xac2466b0
    ctx->pc = 0x1b2314u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26288), GPR_U32(ctx, 4));
    // 0x1b2318: 0xa4a7fffe
    ctx->pc = 0x1b2318u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294967294), (uint16_t)GPR_U32(ctx, 7));
    // 0x1b231c: 0x1460fff7
    ctx->pc = 0x1B231Cu;
    {
        const bool branch_taken_0x1b231c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B2320u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
        if (branch_taken_0x1b231c) {
            ctx->pc = 0x1B22FCu;
            goto label_1b22fc;
        }
    }
    ctx->pc = 0x1B2324u;
    // 0x1b2324: 0x24030100
    ctx->pc = 0x1b2324u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b2328: 0x3c010031
    ctx->pc = 0x1b2328u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1b232c: 0xa42368c8
    ctx->pc = 0x1b232cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 26824), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b2330: 0xdfbf0000
    ctx->pc = 0x1b2330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2334: 0x3e00008
    ctx->pc = 0x1B2334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2338u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B22FCu: goto label_1b22fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B233Cu;
    // 0x1b233c: 0x0
    ctx->pc = 0x1b233cu;
    // NOP
}
