#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CC140
// Address: 0x1cc140 - 0x1cc1f0
void sub_001CC140_0x1cc140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cc140u;

    // 0x1cc140: 0x27bdffc0
    ctx->pc = 0x1cc140u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cc144: 0x3c050034
    ctx->pc = 0x1cc144u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1cc148: 0xffbf0030
    ctx->pc = 0x1cc148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cc14c: 0x24a5b630
    ctx->pc = 0x1cc14cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948400));
    // 0x1cc150: 0x7fb20020
    ctx->pc = 0x1cc150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cc154: 0x80902d
    ctx->pc = 0x1cc154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc158: 0x7fb10010
    ctx->pc = 0x1cc158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cc15c: 0x202d
    ctx->pc = 0x1cc15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc160: 0xc07302c
    ctx->pc = 0x1CC160u;
    SET_GPR_U32(ctx, 31, 0x1CC168u);
    ctx->pc = 0x1CC164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1CC0B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC0B0_0x1cc0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC168u; }
    }
    if (ctx->pc != 0x1CC168u) { return; }
    ctx->pc = 0x1CC168u;
    // 0x1cc168: 0x40882d
    ctx->pc = 0x1cc168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc16c: 0x6200018
    ctx->pc = 0x1CC16Cu;
    {
        const bool branch_taken_0x1cc16c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1CC170u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x1cc16c) {
            ctx->pc = 0x1CC1D0u;
            goto label_1cc1d0;
        }
    }
    ctx->pc = 0x1CC174u;
    // 0x1cc174: 0xc071f24
    ctx->pc = 0x1CC174u;
    SET_GPR_U32(ctx, 31, 0x1CC17Cu);
    ctx->pc = 0x1CC178u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948400));
    ctx->pc = 0x1C7C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7C90_0x1c7c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC17Cu; }
    }
    if (ctx->pc != 0x1CC17Cu) { return; }
    ctx->pc = 0x1CC17Cu;
    // 0x1cc17c: 0x10400014
    ctx->pc = 0x1CC17Cu;
    {
        const bool branch_taken_0x1cc17c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cc17c) {
            ctx->pc = 0x1CC1D0u;
            goto label_1cc1d0;
        }
    }
    ctx->pc = 0x1CC184u;
    // 0x1cc184: 0x1000000d
    ctx->pc = 0x1CC184u;
    {
        const bool branch_taken_0x1cc184 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CC188u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cc184) {
            ctx->pc = 0x1CC1BCu;
            goto label_1cc1bc;
        }
    }
    ctx->pc = 0x1CC18Cu;
label_1cc18c:
    // 0x1cc18c: 0x3c040034
    ctx->pc = 0x1cc18cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1cc190: 0xc071f30
    ctx->pc = 0x1CC190u;
    SET_GPR_U32(ctx, 31, 0x1CC198u);
    ctx->pc = 0x1CC194u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948400));
    ctx->pc = 0x1C7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7CC0_0x1c7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC198u; }
    }
    if (ctx->pc != 0x1CC198u) { return; }
    ctx->pc = 0x1CC198u;
    // 0x1cc198: 0x40282d
    ctx->pc = 0x1cc198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc19c: 0x240202d
    ctx->pc = 0x1cc19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc1a0: 0xc041eac
    ctx->pc = 0x1CC1A0u;
    SET_GPR_U32(ctx, 31, 0x1CC1A8u);
    ctx->pc = 0x1CC1A4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC1A8u; }
    }
    if (ctx->pc != 0x1CC1A8u) { return; }
    ctx->pc = 0x1CC1A8u;
    // 0x1cc1a8: 0x3c040034
    ctx->pc = 0x1cc1a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1cc1ac: 0x200282d
    ctx->pc = 0x1cc1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc1b0: 0xc071f60
    ctx->pc = 0x1CC1B0u;
    SET_GPR_U32(ctx, 31, 0x1CC1B8u);
    ctx->pc = 0x1CC1B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948400));
    ctx->pc = 0x1C7D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7D80_0x1c7d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC1B8u; }
    }
    if (ctx->pc != 0x1CC1B8u) { return; }
    ctx->pc = 0x1CC1B8u;
    // 0x1cc1b8: 0x2308821
    ctx->pc = 0x1cc1b8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_1cc1bc:
    // 0x1cc1bc: 0x3c040034
    ctx->pc = 0x1cc1bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1cc1c0: 0xc071f24
    ctx->pc = 0x1CC1C0u;
    SET_GPR_U32(ctx, 31, 0x1CC1C8u);
    ctx->pc = 0x1CC1C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948400));
    ctx->pc = 0x1C7C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7C90_0x1c7c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC1C8u; }
    }
    if (ctx->pc != 0x1CC1C8u) { return; }
    ctx->pc = 0x1CC1C8u;
    // 0x1cc1c8: 0x1440fff0
    ctx->pc = 0x1CC1C8u;
    {
        const bool branch_taken_0x1cc1c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CC1CCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cc1c8) {
            ctx->pc = 0x1CC18Cu;
            goto label_1cc18c;
        }
    }
    ctx->pc = 0x1CC1D0u;
label_1cc1d0:
    // 0x1cc1d0: 0x220102d
    ctx->pc = 0x1cc1d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc1d4: 0xdfbf0030
    ctx->pc = 0x1cc1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc1d8: 0x7bb20020
    ctx->pc = 0x1cc1d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc1dc: 0x7bb10010
    ctx->pc = 0x1cc1dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc1e0: 0x7bb00000
    ctx->pc = 0x1cc1e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc1e4: 0x3e00008
    ctx->pc = 0x1CC1E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC1E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC18Cu: goto label_1cc18c;
            case 0x1CC1BCu: goto label_1cc1bc;
            case 0x1CC1D0u: goto label_1cc1d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CC1ECu;
    // 0x1cc1ec: 0x0
    ctx->pc = 0x1cc1ecu;
    // NOP
}
