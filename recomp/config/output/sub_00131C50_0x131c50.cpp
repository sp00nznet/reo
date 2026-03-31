#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00131C50
// Address: 0x131c50 - 0x131d18
void sub_00131C50_0x131c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x131c50u;

    // 0x131c50: 0x27bdffd0
    ctx->pc = 0x131c50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x131c54: 0xffb00000
    ctx->pc = 0x131c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131c58: 0x80802d
    ctx->pc = 0x131c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c5c: 0xffb10008
    ctx->pc = 0x131c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x131c60: 0x100882d
    ctx->pc = 0x131c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c64: 0xffb20010
    ctx->pc = 0x131c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x131c68: 0xe0902d
    ctx->pc = 0x131c68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c6c: 0xffb30018
    ctx->pc = 0x131c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x131c70: 0xc0982d
    ctx->pc = 0x131c70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c74: 0xffb40020
    ctx->pc = 0x131c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x131c78: 0xa0a02d
    ctx->pc = 0x131c78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c7c: 0xffbf0028
    ctx->pc = 0x131c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x131c80: 0x8605003e
    ctx->pc = 0x131c80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x131c84: 0x8606003c
    ctx->pc = 0x131c84u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x131c88: 0x8e040008
    ctx->pc = 0x131c88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x131c8c: 0x52ac0
    ctx->pc = 0x131c8cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 11));
    // 0x131c90: 0xc04c386
    ctx->pc = 0x131C90u;
    SET_GPR_U32(ctx, 31, 0x131C98u);
    ctx->pc = 0x131C94u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 11));
    ctx->pc = 0x130E18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130E18_0x130e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131C98u; }
    }
    if (ctx->pc != 0x131C98u) { return; }
    ctx->pc = 0x131C98u;
    // 0x131c98: 0x8e040008
    ctx->pc = 0x131c98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x131c9c: 0xc04c1ea
    ctx->pc = 0x131C9Cu;
    SET_GPR_U32(ctx, 31, 0x131CA4u);
    ctx->pc = 0x131CA0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 25));
    ctx->pc = 0x1307A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001307A8_0x1307a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131CA4u; }
    }
    if (ctx->pc != 0x131CA4u) { return; }
    ctx->pc = 0x131CA4u;
    // 0x131ca4: 0x8e040008
    ctx->pc = 0x131ca4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x131ca8: 0x302d
    ctx->pc = 0x131ca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131cac: 0xc04c1e6
    ctx->pc = 0x131CACu;
    SET_GPR_U32(ctx, 31, 0x131CB4u);
    ctx->pc = 0x131CB0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130798u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130798_0x130798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131CB4u; }
    }
    if (ctx->pc != 0x131CB4u) { return; }
    ctx->pc = 0x131CB4u;
    // 0x131cb4: 0x8e040008
    ctx->pc = 0x131cb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x131cb8: 0xc04c170
    ctx->pc = 0x131CB8u;
    SET_GPR_U32(ctx, 31, 0x131CC0u);
    ctx->pc = 0x131CBCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1305C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001305C0_0x1305c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131CC0u; }
    }
    if (ctx->pc != 0x131CC0u) { return; }
    ctx->pc = 0x131CC0u;
    // 0x131cc0: 0xc04c1b8
    ctx->pc = 0x131CC0u;
    SET_GPR_U32(ctx, 31, 0x131CC8u);
    ctx->pc = 0x131CC4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x1306E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001306E0_0x1306e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131CC8u; }
    }
    if (ctx->pc != 0x131CC8u) { return; }
    ctx->pc = 0x131CC8u;
    // 0x131cc8: 0xc04c148
    ctx->pc = 0x131CC8u;
    SET_GPR_U32(ctx, 31, 0x131CD0u);
    ctx->pc = 0x131CCCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x130520u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130520_0x130520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131CD0u; }
    }
    if (ctx->pc != 0x131CD0u) { return; }
    ctx->pc = 0x131CD0u;
    // 0x131cd0: 0x8e040008
    ctx->pc = 0x131cd0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x131cd4: 0x280282d
    ctx->pc = 0x131cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131cd8: 0x260302d
    ctx->pc = 0x131cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131cdc: 0x240382d
    ctx->pc = 0x131cdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131ce0: 0xc04c11e
    ctx->pc = 0x131CE0u;
    SET_GPR_U32(ctx, 31, 0x131CE8u);
    ctx->pc = 0x131CE4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130478u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130478_0x130478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131CE8u; }
    }
    if (ctx->pc != 0x131CE8u) { return; }
    ctx->pc = 0x131CE8u;
    // 0x131ce8: 0xc04c196
    ctx->pc = 0x131CE8u;
    SET_GPR_U32(ctx, 31, 0x131CF0u);
    ctx->pc = 0x131CECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x130658u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130658_0x130658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131CF0u; }
    }
    if (ctx->pc != 0x131CF0u) { return; }
    ctx->pc = 0x131CF0u;
    // 0x131cf0: 0x200202d
    ctx->pc = 0x131cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131cf4: 0x8c850010
    ctx->pc = 0x131cf4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x131cf8: 0xdfb00000
    ctx->pc = 0x131cf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131cfc: 0xdfb10008
    ctx->pc = 0x131cfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x131d00: 0xdfb20010
    ctx->pc = 0x131d00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131d04: 0xdfb30018
    ctx->pc = 0x131d04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x131d08: 0xdfb40020
    ctx->pc = 0x131d08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131d0c: 0xdfbf0028
    ctx->pc = 0x131d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131d10: 0x804c6d8
    ctx->pc = 0x131D10u;
    ctx->pc = 0x131D14u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x131B60u;
    sub_00131B60_0x131b60(rdram, ctx, runtime); return;
    ctx->pc = 0x131D18u;
}
