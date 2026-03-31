#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163598
// Address: 0x163598 - 0x1635e8
void sub_00163598_0x163598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163598u;

    // 0x163598: 0x27bdfff0
    ctx->pc = 0x163598u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16359c: 0x3c020027
    ctx->pc = 0x16359cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1635a0: 0xffbf0000
    ctx->pc = 0x1635a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1635a4: 0x24040002
    ctx->pc = 0x1635a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1635a8: 0x8c450744
    ctx->pc = 0x1635a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 1860)));
    // 0x1635ac: 0xdfbf0000
    ctx->pc = 0x1635acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1635b0: 0x80506f8
    ctx->pc = 0x1635B0u;
    ctx->pc = 0x1635B4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141BE0u;
    sub_00141BE0_0x141be0(rdram, ctx, runtime); return;
    ctx->pc = 0x1635B8u;
    // 0x1635b8: 0x80102d
    ctx->pc = 0x1635b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1635bc: 0x24040006
    ctx->pc = 0x1635bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1635c0: 0x27bdfff0
    ctx->pc = 0x1635c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1635c4: 0xa0302d
    ctx->pc = 0x1635c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1635c8: 0xffbf0000
    ctx->pc = 0x1635c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1635cc: 0xc0506c4
    ctx->pc = 0x1635CCu;
    SET_GPR_U32(ctx, 31, 0x1635D4u);
    ctx->pc = 0x1635D0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x141B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141B10_0x141b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1635D4u; }
    }
    if (ctx->pc != 0x1635D4u) { return; }
    ctx->pc = 0x1635D4u;
    // 0x1635d4: 0x3c030027
    ctx->pc = 0x1635d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1635d8: 0xdfbf0000
    ctx->pc = 0x1635d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1635dc: 0xac620748
    ctx->pc = 0x1635dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1864), GPR_U32(ctx, 2));
    // 0x1635e0: 0x3e00008
    ctx->pc = 0x1635E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1635E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1635E8u;
}
