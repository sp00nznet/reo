#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1930f0
// Address: 0x1930f0 - 0x193140
void entry_1930f0_0x193140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1930f0u;

    // 0x1930f0: 0x27bdffd0
    ctx->pc = 0x1930f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1930f4: 0xffbf0020
    ctx->pc = 0x1930f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1930f8: 0x7fb00010
    ctx->pc = 0x1930f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1930fc: 0xe7b40000
    ctx->pc = 0x1930fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x193100: 0xa0802d
    ctx->pc = 0x193100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193104: 0xc064b44
    ctx->pc = 0x193104u;
    SET_GPR_U32(ctx, 31, 0x19310Cu);
    ctx->pc = 0x193108u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x192D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D10_0x192d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19310Cu; }
    }
    if (ctx->pc != 0x19310Cu) { return; }
    ctx->pc = 0x19310Cu;
    // 0x19310c: 0x4600a306
    ctx->pc = 0x19310cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x193110: 0x40202d
    ctx->pc = 0x193110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193114: 0xc064c50
    ctx->pc = 0x193114u;
    SET_GPR_U32(ctx, 31, 0x19311Cu);
    ctx->pc = 0x193118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193140u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193140_0x193140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19311Cu; }
    }
    if (ctx->pc != 0x19311Cu) { return; }
    ctx->pc = 0x19311Cu;
    // 0x19311c: 0xdfbf0020
    ctx->pc = 0x19311cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193120: 0xc7b40000
    ctx->pc = 0x193120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x193124: 0x7bb00010
    ctx->pc = 0x193124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193128: 0x24020001
    ctx->pc = 0x193128u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19312c: 0x3e00008
    ctx->pc = 0x19312Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193130u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193134u;
    // 0x193134: 0x0
    ctx->pc = 0x193134u;
    // NOP
    // 0x193138: 0x0
    ctx->pc = 0x193138u;
    // NOP
    // 0x19313c: 0x0
    ctx->pc = 0x19313cu;
    // NOP
}
