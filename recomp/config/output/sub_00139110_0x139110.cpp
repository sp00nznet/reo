#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00139110
// Address: 0x139110 - 0x139178
void sub_00139110_0x139110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x139110u;

    // 0x139110: 0x27bdffe0
    ctx->pc = 0x139110u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x139114: 0x24030001
    ctx->pc = 0x139114u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x139118: 0xffb00000
    ctx->pc = 0x139118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13911c: 0x80802d
    ctx->pc = 0x13911cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139120: 0xffb10008
    ctx->pc = 0x139120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x139124: 0xffbf0010
    ctx->pc = 0x139124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x139128: 0xa2000002
    ctx->pc = 0x139128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13912c: 0x82020001
    ctx->pc = 0x13912cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x139130: 0x14430006
    ctx->pc = 0x139130u;
    {
        const bool branch_taken_0x139130 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x139134u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x139130) {
            ctx->pc = 0x13914Cu;
            goto label_13914c;
        }
    }
    ctx->pc = 0x139138u;
label_139138:
    // 0x139138: 0xc04e55a
    ctx->pc = 0x139138u;
    SET_GPR_U32(ctx, 31, 0x139140u);
    ctx->pc = 0x139568u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139568_0x139568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139140u; }
    }
    if (ctx->pc != 0x139140u) { return; }
    ctx->pc = 0x139140u;
    // 0x139140: 0x82020001
    ctx->pc = 0x139140u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x139144: 0x1051fffc
    ctx->pc = 0x139144u;
    {
        const bool branch_taken_0x139144 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        if (branch_taken_0x139144) {
            ctx->pc = 0x139138u;
            goto label_139138;
        }
    }
    ctx->pc = 0x13914Cu;
label_13914c:
    // 0x13914c: 0xc04e396
    ctx->pc = 0x13914Cu;
    SET_GPR_U32(ctx, 31, 0x139154u);
    ctx->pc = 0x139150u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x138E58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138E58_0x138e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139154u; }
    }
    if (ctx->pc != 0x139154u) { return; }
    ctx->pc = 0x139154u;
    // 0x139154: 0x200202d
    ctx->pc = 0x139154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139158: 0xdfb10008
    ctx->pc = 0x139158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13915c: 0x282d
    ctx->pc = 0x13915cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139160: 0xdfb00000
    ctx->pc = 0x139160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139164: 0x24060044
    ctx->pc = 0x139164u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 68));
    // 0x139168: 0xdfbf0010
    ctx->pc = 0x139168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13916c: 0x8041f1a
    ctx->pc = 0x13916Cu;
    ctx->pc = 0x139170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x139174u;
    // 0x139174: 0x0
    ctx->pc = 0x139174u;
    // NOP
}
