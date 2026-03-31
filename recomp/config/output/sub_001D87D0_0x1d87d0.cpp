#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D87D0
// Address: 0x1d87d0 - 0x1d8820
void sub_001D87D0_0x1d87d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d87d0u;

    // 0x1d87d0: 0x27bdffe0
    ctx->pc = 0x1d87d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d87d4: 0xffbf0010
    ctx->pc = 0x1d87d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d87d8: 0xc075e38
    ctx->pc = 0x1D87D8u;
    SET_GPR_U32(ctx, 31, 0x1D87E0u);
    ctx->pc = 0x1D87DCu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D87E0u; }
    }
    if (ctx->pc != 0x1D87E0u) { return; }
    ctx->pc = 0x1D87E0u;
    // 0x1d87e0: 0x24040020
    ctx->pc = 0x1d87e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d87e4: 0x3c050034
    ctx->pc = 0x1d87e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d87e8: 0x3c070034
    ctx->pc = 0x1d87e8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d87ec: 0x24a57280
    ctx->pc = 0x1d87ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d87f0: 0x80302d
    ctx->pc = 0x1d87f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d87f4: 0x24e76280
    ctx->pc = 0x1d87f4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d87f8: 0xc075e40
    ctx->pc = 0x1D87F8u;
    SET_GPR_U32(ctx, 31, 0x1D8800u);
    ctx->pc = 0x1D87FCu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8800u; }
    }
    if (ctx->pc != 0x1D8800u) { return; }
    ctx->pc = 0x1D8800u;
    // 0x1d8800: 0x3c010034
    ctx->pc = 0x1d8800u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d8804: 0xc075e3c
    ctx->pc = 0x1D8804u;
    SET_GPR_U32(ctx, 31, 0x1D880Cu);
    ctx->pc = 0x1D8808u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D880Cu; }
    }
    if (ctx->pc != 0x1D880Cu) { return; }
    ctx->pc = 0x1D880Cu;
    // 0x1d880c: 0x200102d
    ctx->pc = 0x1d880cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8810: 0xdfbf0010
    ctx->pc = 0x1d8810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8814: 0x7bb00000
    ctx->pc = 0x1d8814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8818: 0x3e00008
    ctx->pc = 0x1D8818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D881Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8820u;
}
