#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D8B40
// Address: 0x1d8b40 - 0x1d8b90
void sub_001D8B40_0x1d8b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d8b40u;

    // 0x1d8b40: 0x27bdffe0
    ctx->pc = 0x1d8b40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8b44: 0xffbf0010
    ctx->pc = 0x1d8b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8b48: 0xc075e38
    ctx->pc = 0x1D8B48u;
    SET_GPR_U32(ctx, 31, 0x1D8B50u);
    ctx->pc = 0x1D8B4Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B50u; }
    }
    if (ctx->pc != 0x1D8B50u) { return; }
    ctx->pc = 0x1D8B50u;
    // 0x1d8b50: 0x3c050034
    ctx->pc = 0x1d8b50u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d8b54: 0x24060020
    ctx->pc = 0x1d8b54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d8b58: 0x3c070034
    ctx->pc = 0x1d8b58u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d8b5c: 0x24040027
    ctx->pc = 0x1d8b5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 39));
    // 0x1d8b60: 0x24a57280
    ctx->pc = 0x1d8b60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d8b64: 0x24e76280
    ctx->pc = 0x1d8b64u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d8b68: 0xc075e40
    ctx->pc = 0x1D8B68u;
    SET_GPR_U32(ctx, 31, 0x1D8B70u);
    ctx->pc = 0x1D8B6Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B70u; }
    }
    if (ctx->pc != 0x1D8B70u) { return; }
    ctx->pc = 0x1D8B70u;
    // 0x1d8b70: 0x3c010034
    ctx->pc = 0x1d8b70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d8b74: 0xc075e3c
    ctx->pc = 0x1D8B74u;
    SET_GPR_U32(ctx, 31, 0x1D8B7Cu);
    ctx->pc = 0x1D8B78u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B7Cu; }
    }
    if (ctx->pc != 0x1D8B7Cu) { return; }
    ctx->pc = 0x1D8B7Cu;
    // 0x1d8b7c: 0x200102d
    ctx->pc = 0x1d8b7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8b80: 0xdfbf0010
    ctx->pc = 0x1d8b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8b84: 0x7bb00000
    ctx->pc = 0x1d8b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8b88: 0x3e00008
    ctx->pc = 0x1D8B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8B8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8B90u;
}
