#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D9130
// Address: 0x1d9130 - 0x1d91a0
void sub_001D9130_0x1d9130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d9130u;

    // 0x1d9130: 0x27bdffe0
    ctx->pc = 0x1d9130u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9134: 0xffbf0010
    ctx->pc = 0x1d9134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d9138: 0x7fb00000
    ctx->pc = 0x1d9138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d913c: 0xc075e38
    ctx->pc = 0x1D913Cu;
    SET_GPR_U32(ctx, 31, 0x1D9144u);
    ctx->pc = 0x1D9140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9144u; }
    }
    if (ctx->pc != 0x1D9144u) { return; }
    ctx->pc = 0x1D9144u;
    // 0x1d9144: 0x200282d
    ctx->pc = 0x1d9144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9148: 0x24060200
    ctx->pc = 0x1d9148u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 512));
    // 0x1d914c: 0x3c100034
    ctx->pc = 0x1d914cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x1d9150: 0x2610729c
    ctx->pc = 0x1d9150u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 29340));
    // 0x1d9154: 0xc042d7e
    ctx->pc = 0x1D9154u;
    SET_GPR_U32(ctx, 31, 0x1D915Cu);
    ctx->pc = 0x1D9158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B5F8_0x10b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D915Cu; }
    }
    if (ctx->pc != 0x1D915Cu) { return; }
    ctx->pc = 0x1D915Cu;
    // 0x1d915c: 0x3c050034
    ctx->pc = 0x1d915cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d9160: 0x3c070034
    ctx->pc = 0x1d9160u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d9164: 0x2404003a
    ctx->pc = 0x1d9164u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 58));
    // 0x1d9168: 0x24a57280
    ctx->pc = 0x1d9168u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d916c: 0x24060220
    ctx->pc = 0x1d916cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 544));
    // 0x1d9170: 0x24e76280
    ctx->pc = 0x1d9170u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d9174: 0x24080020
    ctx->pc = 0x1d9174u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d9178: 0xc075e40
    ctx->pc = 0x1D9178u;
    SET_GPR_U32(ctx, 31, 0x1D9180u);
    ctx->pc = 0x1D917Cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 511), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9180u; }
    }
    if (ctx->pc != 0x1D9180u) { return; }
    ctx->pc = 0x1D9180u;
    // 0x1d9180: 0x3c010034
    ctx->pc = 0x1d9180u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d9184: 0xc075e3c
    ctx->pc = 0x1D9184u;
    SET_GPR_U32(ctx, 31, 0x1D918Cu);
    ctx->pc = 0x1D9188u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D918Cu; }
    }
    if (ctx->pc != 0x1D918Cu) { return; }
    ctx->pc = 0x1D918Cu;
    // 0x1d918c: 0x200102d
    ctx->pc = 0x1d918cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9190: 0xdfbf0010
    ctx->pc = 0x1d9190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9194: 0x7bb00000
    ctx->pc = 0x1d9194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9198: 0x3e00008
    ctx->pc = 0x1D9198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D919Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D91A0u;
}
