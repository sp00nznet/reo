#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00379CF0
// Address: 0x379cf0 - 0x379d80
void sub_00379CF0_0x379cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x379cf0u;

    // 0x379cf0: 0x27bdffc0
    ctx->pc = 0x379cf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x379cf4: 0x3c010032
    ctx->pc = 0x379cf4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x379cf8: 0xffbf0030
    ctx->pc = 0x379cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x379cfc: 0x24030002
    ctx->pc = 0x379cfcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x379d00: 0x7fb20020
    ctx->pc = 0x379d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x379d04: 0x7fb10010
    ctx->pc = 0x379d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x379d08: 0x80902d
    ctx->pc = 0x379d08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379d0c: 0x7fb00000
    ctx->pc = 0x379d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x379d10: 0xa0882d
    ctx->pc = 0x379d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379d14: 0x90244405
    ctx->pc = 0x379d14u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17413)));
    // 0x379d18: 0x14830013
    ctx->pc = 0x379D18u;
    {
        const bool branch_taken_0x379d18 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x379D1Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x379d18) {
            ctx->pc = 0x379D68u;
            goto label_379d68;
        }
    }
    ctx->pc = 0x379D20u;
    // 0x379d20: 0x3c010057
    ctx->pc = 0x379d20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379d24: 0x8c22bac8
    ctx->pc = 0x379d24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949576)));
    // 0x379d28: 0x16220005
    ctx->pc = 0x379D28u;
    {
        const bool branch_taken_0x379d28 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x379d28) {
            ctx->pc = 0x379D40u;
            goto label_379d40;
        }
    }
    ctx->pc = 0x379D30u;
    // 0x379d30: 0x3c010057
    ctx->pc = 0x379d30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379d34: 0x8c22bad0
    ctx->pc = 0x379d34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949584)));
    // 0x379d38: 0x12020007
    ctx->pc = 0x379D38u;
    {
        const bool branch_taken_0x379d38 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x379D3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x379d38) {
            ctx->pc = 0x379D58u;
            goto label_379d58;
        }
    }
    ctx->pc = 0x379D40u;
label_379d40:
    // 0x379d40: 0x3c010057
    ctx->pc = 0x379d40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379d44: 0xac31bac8
    ctx->pc = 0x379d44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949576), GPR_U32(ctx, 17));
    // 0x379d48: 0x3c010057
    ctx->pc = 0x379d48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379d4c: 0xc0de64c
    ctx->pc = 0x379D4Cu;
    SET_GPR_U32(ctx, 31, 0x379D54u);
    ctx->pc = 0x379D50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949584), GPR_U32(ctx, 16));
    ctx->pc = 0x379930u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00379930_0x379930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379D54u; }
    }
    if (ctx->pc != 0x379D54u) { return; }
    ctx->pc = 0x379D54u;
    // 0x379d54: 0x240202d
    ctx->pc = 0x379d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_379d58:
    // 0x379d58: 0x220282d
    ctx->pc = 0x379d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379d5c: 0x200302d
    ctx->pc = 0x379d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379d60: 0xc0de6bc
    ctx->pc = 0x379D60u;
    SET_GPR_U32(ctx, 31, 0x379D68u);
    ctx->pc = 0x379D64u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x379AF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00379AF0_0x379af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379D68u; }
    }
    if (ctx->pc != 0x379D68u) { return; }
    ctx->pc = 0x379D68u;
label_379d68:
    // 0x379d68: 0xdfbf0030
    ctx->pc = 0x379d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x379d6c: 0x7bb20020
    ctx->pc = 0x379d6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379d70: 0x7bb10010
    ctx->pc = 0x379d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379d74: 0x7bb00000
    ctx->pc = 0x379d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379d78: 0x3e00008
    ctx->pc = 0x379D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379D7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x379D40u: goto label_379d40;
            case 0x379D58u: goto label_379d58;
            case 0x379D68u: goto label_379d68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x379D80u;
}
