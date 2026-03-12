#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00379C60
// Address: 0x379c60 - 0x379cf0
void sub_00379C60_0x379c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x379c60u;

    // 0x379c60: 0x27bdffc0
    ctx->pc = 0x379c60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x379c64: 0x3c010032
    ctx->pc = 0x379c64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x379c68: 0xffbf0030
    ctx->pc = 0x379c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x379c6c: 0x24030002
    ctx->pc = 0x379c6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x379c70: 0x7fb20020
    ctx->pc = 0x379c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x379c74: 0x7fb10010
    ctx->pc = 0x379c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x379c78: 0x80902d
    ctx->pc = 0x379c78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379c7c: 0x7fb00000
    ctx->pc = 0x379c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x379c80: 0xa0882d
    ctx->pc = 0x379c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379c84: 0x90244405
    ctx->pc = 0x379c84u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17413)));
    // 0x379c88: 0x14830013
    ctx->pc = 0x379C88u;
    {
        const bool branch_taken_0x379c88 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x379C8Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x379c88) {
            ctx->pc = 0x379CD8u;
            goto label_379cd8;
        }
    }
    ctx->pc = 0x379C90u;
    // 0x379c90: 0x3c010057
    ctx->pc = 0x379c90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379c94: 0x8c22bac8
    ctx->pc = 0x379c94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949576)));
    // 0x379c98: 0x16220005
    ctx->pc = 0x379C98u;
    {
        const bool branch_taken_0x379c98 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x379c98) {
            ctx->pc = 0x379CB0u;
            goto label_379cb0;
        }
    }
    ctx->pc = 0x379CA0u;
    // 0x379ca0: 0x3c010057
    ctx->pc = 0x379ca0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379ca4: 0x8c22bad0
    ctx->pc = 0x379ca4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949584)));
    // 0x379ca8: 0x12020007
    ctx->pc = 0x379CA8u;
    {
        const bool branch_taken_0x379ca8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x379CACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x379ca8) {
            ctx->pc = 0x379CC8u;
            goto label_379cc8;
        }
    }
    ctx->pc = 0x379CB0u;
label_379cb0:
    // 0x379cb0: 0x3c010057
    ctx->pc = 0x379cb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379cb4: 0xac31bac8
    ctx->pc = 0x379cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949576), GPR_U32(ctx, 17));
    // 0x379cb8: 0x3c010057
    ctx->pc = 0x379cb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379cbc: 0xc0de64c
    ctx->pc = 0x379CBCu;
    SET_GPR_U32(ctx, 31, 0x379CC4u);
    ctx->pc = 0x379CC0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949584), GPR_U32(ctx, 16));
    ctx->pc = 0x379930u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00379930_0x379930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379CC4u; }
    }
    if (ctx->pc != 0x379CC4u) { return; }
    ctx->pc = 0x379CC4u;
    // 0x379cc4: 0x240202d
    ctx->pc = 0x379cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_379cc8:
    // 0x379cc8: 0x220282d
    ctx->pc = 0x379cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379ccc: 0x200302d
    ctx->pc = 0x379cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379cd0: 0xc0de6bc
    ctx->pc = 0x379CD0u;
    SET_GPR_U32(ctx, 31, 0x379CD8u);
    ctx->pc = 0x379CD4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x379AF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00379AF0_0x379af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379CD8u; }
    }
    if (ctx->pc != 0x379CD8u) { return; }
    ctx->pc = 0x379CD8u;
label_379cd8:
    // 0x379cd8: 0xdfbf0030
    ctx->pc = 0x379cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x379cdc: 0x7bb20020
    ctx->pc = 0x379cdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379ce0: 0x7bb10010
    ctx->pc = 0x379ce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379ce4: 0x7bb00000
    ctx->pc = 0x379ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379ce8: 0x3e00008
    ctx->pc = 0x379CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379CECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x379CB0u: goto label_379cb0;
            case 0x379CC8u: goto label_379cc8;
            case 0x379CD8u: goto label_379cd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x379CF0u;
}
