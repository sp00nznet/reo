#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C53B0
// Address: 0x1c53b0 - 0x1c5410
void sub_001C53B0_0x1c53b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c53b0u;

    // 0x1c53b0: 0x27bdffe0
    ctx->pc = 0x1c53b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c53b4: 0x3c010002
    ctx->pc = 0x1c53b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)2 << 16));
    // 0x1c53b8: 0xffbf0010
    ctx->pc = 0x1c53b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c53bc: 0x3c050036
    ctx->pc = 0x1c53bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)54 << 16));
    // 0x1c53c0: 0x7fb00000
    ctx->pc = 0x1c53c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c53c4: 0x3421fbc0
    ctx->pc = 0x1c53c4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64448));
    // 0x1c53c8: 0x80802d
    ctx->pc = 0x1c53c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c53cc: 0x24a5f080
    ctx->pc = 0x1c53ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294963328));
    // 0x1c53d0: 0x2012021
    ctx->pc = 0x1c53d0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1c53d4: 0xc041eac
    ctx->pc = 0x1C53D4u;
    SET_GPR_U32(ctx, 31, 0x1C53DCu);
    ctx->pc = 0x1C53D8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 32768));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C53DCu; }
    }
    if (ctx->pc != 0x1C53DCu) { return; }
    ctx->pc = 0x1C53DCu;
    // 0x1c53dc: 0x3c010003
    ctx->pc = 0x1c53dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)3 << 16));
    // 0x1c53e0: 0x3c050037
    ctx->pc = 0x1c53e0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)55 << 16));
    // 0x1c53e4: 0x34217bc0
    ctx->pc = 0x1c53e4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 31680));
    // 0x1c53e8: 0x24a5f080
    ctx->pc = 0x1c53e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294963328));
    // 0x1c53ec: 0x2012021
    ctx->pc = 0x1c53ecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1c53f0: 0xc041eac
    ctx->pc = 0x1C53F0u;
    SET_GPR_U32(ctx, 31, 0x1C53F8u);
    ctx->pc = 0x1C53F4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C53F8u; }
    }
    if (ctx->pc != 0x1C53F8u) { return; }
    ctx->pc = 0x1C53F8u;
    // 0x1c53f8: 0xdfbf0010
    ctx->pc = 0x1c53f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c53fc: 0x7bb00000
    ctx->pc = 0x1c53fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5400: 0x3e00008
    ctx->pc = 0x1C5400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5404u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5408u;
    // 0x1c5408: 0x0
    ctx->pc = 0x1c5408u;
    // NOP
    // 0x1c540c: 0x0
    ctx->pc = 0x1c540cu;
    // NOP
}
