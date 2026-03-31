#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001282A0
// Address: 0x1282a0 - 0x128328
void sub_001282A0_0x1282a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1282a0u;

    // 0x1282a0: 0x27bdffe0
    ctx->pc = 0x1282a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1282a4: 0xffb00000
    ctx->pc = 0x1282a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1282a8: 0xc0802d
    ctx->pc = 0x1282a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282ac: 0xffb10008
    ctx->pc = 0x1282acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1282b0: 0xe0882d
    ctx->pc = 0x1282b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282b4: 0xffb20010
    ctx->pc = 0x1282b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1282b8: 0xa0902d
    ctx->pc = 0x1282b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282bc: 0x220302d
    ctx->pc = 0x1282bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282c0: 0xffbf0018
    ctx->pc = 0x1282c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1282c4: 0xc04a066
    ctx->pc = 0x1282C4u;
    SET_GPR_U32(ctx, 31, 0x1282CCu);
    ctx->pc = 0x1282C8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128198u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128198_0x128198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1282CCu; }
    }
    if (ctx->pc != 0x1282CCu) { return; }
    ctx->pc = 0x1282CCu;
    // 0x1282cc: 0xc042c56
    ctx->pc = 0x1282CCu;
    SET_GPR_U32(ctx, 31, 0x1282D4u);
    ctx->pc = 0x1282D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1282D4u; }
    }
    if (ctx->pc != 0x1282D4u) { return; }
    ctx->pc = 0x1282D4u;
    // 0x1282d4: 0x3c050024
    ctx->pc = 0x1282d4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x1282d8: 0x2228823
    ctx->pc = 0x1282d8u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1282dc: 0x24a59c28
    ctx->pc = 0x1282dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941736));
    // 0x1282e0: 0x2626ffff
    ctx->pc = 0x1282e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1282e4: 0xc042ca4
    ctx->pc = 0x1282E4u;
    SET_GPR_U32(ctx, 31, 0x1282ECu);
    ctx->pc = 0x1282E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B290u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B290_0x10b290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1282ECu; }
    }
    if (ctx->pc != 0x1282ECu) { return; }
    ctx->pc = 0x1282ECu;
    // 0x1282ec: 0xc042c56
    ctx->pc = 0x1282ECu;
    SET_GPR_U32(ctx, 31, 0x1282F4u);
    ctx->pc = 0x1282F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1282F4u; }
    }
    if (ctx->pc != 0x1282F4u) { return; }
    ctx->pc = 0x1282F4u;
    // 0x1282f4: 0x200202d
    ctx->pc = 0x1282f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282f8: 0xc042c56
    ctx->pc = 0x1282F8u;
    SET_GPR_U32(ctx, 31, 0x128300u);
    ctx->pc = 0x1282FCu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128300u; }
    }
    if (ctx->pc != 0x128300u) { return; }
    ctx->pc = 0x128300u;
    // 0x128300: 0xdfb10008
    ctx->pc = 0x128300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x128304: 0x240202d
    ctx->pc = 0x128304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128308: 0x200282d
    ctx->pc = 0x128308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12830c: 0xdfb00000
    ctx->pc = 0x12830cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128310: 0x24060004
    ctx->pc = 0x128310u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x128314: 0xdfb20010
    ctx->pc = 0x128314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128318: 0xdfbf0018
    ctx->pc = 0x128318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12831c: 0xc23023
    ctx->pc = 0x12831cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x128320: 0x804a066
    ctx->pc = 0x128320u;
    ctx->pc = 0x128324u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x128198u;
    sub_00128198_0x128198(rdram, ctx, runtime); return;
    ctx->pc = 0x128328u;
}
