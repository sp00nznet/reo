#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00139568
// Address: 0x139568 - 0x1395f8
void sub_00139568_0x139568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x139568u;

    // 0x139568: 0x27bdffe0
    ctx->pc = 0x139568u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13956c: 0xffb00000
    ctx->pc = 0x13956cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x139570: 0xffb10008
    ctx->pc = 0x139570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x139574: 0x24110007
    ctx->pc = 0x139574u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 7));
    // 0x139578: 0xffb20010
    ctx->pc = 0x139578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13957c: 0xffbf0018
    ctx->pc = 0x13957cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x139580: 0xc04fc96
    ctx->pc = 0x139580u;
    SET_GPR_U32(ctx, 31, 0x139588u);
    ctx->pc = 0x139584u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x13F258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F258_0x13f258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139588u; }
    }
    if (ctx->pc != 0x139588u) { return; }
    ctx->pc = 0x139588u;
    // 0x139588: 0x3c020022
    ctx->pc = 0x139588u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13958c: 0x2450c430
    ctx->pc = 0x13958cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294951984));
label_139590:
    // 0x139590: 0x82020000
    ctx->pc = 0x139590u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x139594: 0x54520004
    ctx->pc = 0x139594u;
    {
        const bool branch_taken_0x139594 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x139594) {
            ctx->pc = 0x139598u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x1395A8u;
            goto label_1395a8;
        }
    }
    ctx->pc = 0x13959Cu;
    // 0x13959c: 0xc04e466
    ctx->pc = 0x13959Cu;
    SET_GPR_U32(ctx, 31, 0x1395A4u);
    ctx->pc = 0x1395A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x139198u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139198_0x139198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1395A4u; }
    }
    if (ctx->pc != 0x1395A4u) { return; }
    ctx->pc = 0x1395A4u;
    // 0x1395a4: 0x2631ffff
    ctx->pc = 0x1395a4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_1395a8:
    // 0x1395a8: 0x621fff9
    ctx->pc = 0x1395A8u;
    {
        const bool branch_taken_0x1395a8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1395ACu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 68));
        if (branch_taken_0x1395a8) {
            ctx->pc = 0x139590u;
            goto label_139590;
        }
    }
    ctx->pc = 0x1395B0u;
    // 0x1395b0: 0xdfb00000
    ctx->pc = 0x1395b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1395b4: 0xdfb10008
    ctx->pc = 0x1395b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1395b8: 0xdfb20010
    ctx->pc = 0x1395b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1395bc: 0xdfbf0018
    ctx->pc = 0x1395bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1395c0: 0x804fc9c
    ctx->pc = 0x1395C0u;
    ctx->pc = 0x1395C4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x13F270u;
    sub_0013F270_0x13f270(rdram, ctx, runtime); return;
    ctx->pc = 0x1395C8u;
    // 0x1395c8: 0x27bdfff0
    ctx->pc = 0x1395c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1395cc: 0x3c020022
    ctx->pc = 0x1395ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1395d0: 0xffbf0000
    ctx->pc = 0x1395d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1395d4: 0x2442cbe0
    ctx->pc = 0x1395d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953952));
    // 0x1395d8: 0x202d
    ctx->pc = 0x1395d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1395dc: 0xc04eb84
    ctx->pc = 0x1395DCu;
    SET_GPR_U32(ctx, 31, 0x1395E4u);
    ctx->pc = 0x1395E0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x13AE10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AE10_0x13ae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1395E4u; }
    }
    if (ctx->pc != 0x1395E4u) { return; }
    ctx->pc = 0x1395E4u;
    // 0x1395e4: 0xdfbf0000
    ctx->pc = 0x1395e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1395e8: 0x3c020022
    ctx->pc = 0x1395e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1395ec: 0x2442cbf8
    ctx->pc = 0x1395ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953976));
    // 0x1395f0: 0x3e00008
    ctx->pc = 0x1395F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1395F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x139590u: goto label_139590;
            case 0x1395A8u: goto label_1395a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1395F8u;
}
