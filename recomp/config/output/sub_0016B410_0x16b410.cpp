#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016B410
// Address: 0x16b410 - 0x16b470
void sub_0016B410_0x16b410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16b410u;

    // 0x16b410: 0x27bdfff0
    ctx->pc = 0x16b410u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b414: 0xffb00000
    ctx->pc = 0x16b414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b418: 0xffbf0008
    ctx->pc = 0x16b418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16b41c: 0xc05a98e
    ctx->pc = 0x16B41Cu;
    SET_GPR_U32(ctx, 31, 0x16B424u);
    ctx->pc = 0x16B420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16A638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A638_0x16a638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B424u; }
    }
    if (ctx->pc != 0x16B424u) { return; }
    ctx->pc = 0x16B424u;
    // 0x16b424: 0x8e060008
    ctx->pc = 0x16b424u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16b428: 0x200202d
    ctx->pc = 0x16b428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b42c: 0x261009a0
    ctx->pc = 0x16b42cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2464));
    // 0x16b430: 0x282d
    ctx->pc = 0x16b430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b434: 0x1cc00002
    ctx->pc = 0x16B434u;
    {
        const bool branch_taken_0x16b434 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x16B438u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 88)));
        if (branch_taken_0x16b434) {
            ctx->pc = 0x16B440u;
            goto label_16b440;
        }
    }
    ctx->pc = 0x16B43Cu;
    // 0x16b43c: 0x8c46000c
    ctx->pc = 0x16b43cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_16b440:
    // 0x16b440: 0x6102a
    ctx->pc = 0x16b440u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 6)));
    // 0x16b444: 0xe2300a
    ctx->pc = 0x16b444u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 7));
    // 0x16b448: 0xc7182a
    ctx->pc = 0x16b448u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 7)));
    // 0x16b44c: 0xc0802d
    ctx->pc = 0x16b44cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b450: 0xc059d52
    ctx->pc = 0x16B450u;
    SET_GPR_U32(ctx, 31, 0x16B458u);
    ctx->pc = 0x16B454u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 7));
    ctx->pc = 0x167548u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167548_0x167548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B458u; }
    }
    if (ctx->pc != 0x16B458u) { return; }
    ctx->pc = 0x16B458u;
    // 0x16b458: 0x50102a
    ctx->pc = 0x16b458u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x16b45c: 0xdfb00000
    ctx->pc = 0x16b45cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b460: 0xdfbf0008
    ctx->pc = 0x16b460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b464: 0x2c420001
    ctx->pc = 0x16b464u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x16b468: 0x3e00008
    ctx->pc = 0x16B468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B46Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B440u: goto label_16b440;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B470u;
}
