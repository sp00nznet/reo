#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7AB0
// Address: 0x1d7ab0 - 0x1d7b00
void sub_001D7AB0_0x1d7ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7ab0u;

    // 0x1d7ab0: 0x27bdffe0
    ctx->pc = 0x1d7ab0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7ab4: 0xffbf0010
    ctx->pc = 0x1d7ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7ab8: 0xc075e38
    ctx->pc = 0x1D7AB8u;
    SET_GPR_U32(ctx, 31, 0x1D7AC0u);
    ctx->pc = 0x1D7ABCu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7AC0u; }
    }
    if (ctx->pc != 0x1D7AC0u) { return; }
    ctx->pc = 0x1D7AC0u;
    // 0x1d7ac0: 0x3c050034
    ctx->pc = 0x1d7ac0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d7ac4: 0x24060020
    ctx->pc = 0x1d7ac4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d7ac8: 0x3c070034
    ctx->pc = 0x1d7ac8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d7acc: 0x24040002
    ctx->pc = 0x1d7accu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7ad0: 0x24a57280
    ctx->pc = 0x1d7ad0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d7ad4: 0x24e76280
    ctx->pc = 0x1d7ad4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d7ad8: 0xc075e40
    ctx->pc = 0x1D7AD8u;
    SET_GPR_U32(ctx, 31, 0x1D7AE0u);
    ctx->pc = 0x1D7ADCu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7AE0u; }
    }
    if (ctx->pc != 0x1D7AE0u) { return; }
    ctx->pc = 0x1D7AE0u;
    // 0x1d7ae0: 0x3c010034
    ctx->pc = 0x1d7ae0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7ae4: 0xc075e3c
    ctx->pc = 0x1D7AE4u;
    SET_GPR_U32(ctx, 31, 0x1D7AECu);
    ctx->pc = 0x1D7AE8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7AECu; }
    }
    if (ctx->pc != 0x1D7AECu) { return; }
    ctx->pc = 0x1D7AECu;
    // 0x1d7aec: 0x200102d
    ctx->pc = 0x1d7aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7af0: 0xdfbf0010
    ctx->pc = 0x1d7af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7af4: 0x7bb00000
    ctx->pc = 0x1d7af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7af8: 0x3e00008
    ctx->pc = 0x1D7AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7AFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7B00u;
}
