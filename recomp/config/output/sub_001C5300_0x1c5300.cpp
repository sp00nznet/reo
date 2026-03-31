#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C5300
// Address: 0x1c5300 - 0x1c5340
void sub_001C5300_0x1c5300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c5300u;

    // 0x1c5300: 0x27bdffe0
    ctx->pc = 0x1c5300u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5304: 0x282d
    ctx->pc = 0x1c5304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5308: 0xffbf0010
    ctx->pc = 0x1c5308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c530c: 0x3c060001
    ctx->pc = 0x1c530cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)1 << 16));
    // 0x1c5310: 0x7fb00000
    ctx->pc = 0x1c5310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5314: 0xc041f1a
    ctx->pc = 0x1C5314u;
    SET_GPR_U32(ctx, 31, 0x1C531Cu);
    ctx->pc = 0x1C5318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C531Cu; }
    }
    if (ctx->pc != 0x1C531Cu) { return; }
    ctx->pc = 0x1C531Cu;
    // 0x1c531c: 0x3c050032
    ctx->pc = 0x1c531cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x1c5320: 0x200202d
    ctx->pc = 0x1c5320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5324: 0x24a5fb60
    ctx->pc = 0x1c5324u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294966112));
    // 0x1c5328: 0xc041eac
    ctx->pc = 0x1C5328u;
    SET_GPR_U32(ctx, 31, 0x1C5330u);
    ctx->pc = 0x1C532Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16948));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5330u; }
    }
    if (ctx->pc != 0x1C5330u) { return; }
    ctx->pc = 0x1C5330u;
    // 0x1c5330: 0xdfbf0010
    ctx->pc = 0x1c5330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5334: 0x7bb00000
    ctx->pc = 0x1c5334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5338: 0x3e00008
    ctx->pc = 0x1C5338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C533Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5340u;
}
