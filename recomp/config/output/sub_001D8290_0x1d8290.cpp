#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D8290
// Address: 0x1d8290 - 0x1d82f0
void sub_001D8290_0x1d8290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d8290u;

    // 0x1d8290: 0x27bdffe0
    ctx->pc = 0x1d8290u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8294: 0xffbf0010
    ctx->pc = 0x1d8294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8298: 0x7fb00000
    ctx->pc = 0x1d8298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d829c: 0xc075e38
    ctx->pc = 0x1D829Cu;
    SET_GPR_U32(ctx, 31, 0x1D82A4u);
    ctx->pc = 0x1D82A0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D82A4u; }
    }
    if (ctx->pc != 0x1D82A4u) { return; }
    ctx->pc = 0x1D82A4u;
    // 0x1d82a4: 0x3c050034
    ctx->pc = 0x1d82a4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d82a8: 0x3c070034
    ctx->pc = 0x1d82a8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d82ac: 0x3c010034
    ctx->pc = 0x1d82acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d82b0: 0x24040017
    ctx->pc = 0x1d82b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 23));
    // 0x1d82b4: 0x24a57280
    ctx->pc = 0x1d82b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d82b8: 0x24060022
    ctx->pc = 0x1d82b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 34));
    // 0x1d82bc: 0x24e76280
    ctx->pc = 0x1d82bcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d82c0: 0x24080020
    ctx->pc = 0x1d82c0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d82c4: 0xc075e40
    ctx->pc = 0x1D82C4u;
    SET_GPR_U32(ctx, 31, 0x1D82CCu);
    ctx->pc = 0x1D82C8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 29340), (uint16_t)GPR_U32(ctx, 16));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D82CCu; }
    }
    if (ctx->pc != 0x1D82CCu) { return; }
    ctx->pc = 0x1D82CCu;
    // 0x1d82cc: 0x3c010034
    ctx->pc = 0x1d82ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d82d0: 0xc075e3c
    ctx->pc = 0x1D82D0u;
    SET_GPR_U32(ctx, 31, 0x1D82D8u);
    ctx->pc = 0x1D82D4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D82D8u; }
    }
    if (ctx->pc != 0x1D82D8u) { return; }
    ctx->pc = 0x1D82D8u;
    // 0x1d82d8: 0x200102d
    ctx->pc = 0x1d82d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d82dc: 0xdfbf0010
    ctx->pc = 0x1d82dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d82e0: 0x7bb00000
    ctx->pc = 0x1d82e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d82e4: 0x3e00008
    ctx->pc = 0x1D82E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D82E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D82ECu;
    // 0x1d82ec: 0x0
    ctx->pc = 0x1d82ecu;
    // NOP
}
