#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018CEF0
// Address: 0x18cef0 - 0x18cfb0
void sub_0018CEF0_0x18cef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18cef0u;

    // 0x18cef0: 0x27bdffb0
    ctx->pc = 0x18cef0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18cef4: 0x3c01002a
    ctx->pc = 0x18cef4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x18cef8: 0xffbf0040
    ctx->pc = 0x18cef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18cefc: 0x7fb30030
    ctx->pc = 0x18cefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18cf00: 0x7fb20020
    ctx->pc = 0x18cf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18cf04: 0x80982d
    ctx->pc = 0x18cf04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf08: 0x7fb10010
    ctx->pc = 0x18cf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18cf0c: 0xa0902d
    ctx->pc = 0x18cf0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf10: 0x7fb00000
    ctx->pc = 0x18cf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18cf14: 0x8c23fdb4
    ctx->pc = 0x18cf14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966708)));
    // 0x18cf18: 0x8ca20004
    ctx->pc = 0x18cf18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18cf1c: 0x38080
    ctx->pc = 0x18cf1cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 3), 2));
    // 0x18cf20: 0x2052021
    ctx->pc = 0x18cf20u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x18cf24: 0x2442ffff
    ctx->pc = 0x18cf24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18cf28: 0x8c830014
    ctx->pc = 0x18cf28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x18cf2c: 0x43082b
    ctx->pc = 0x18cf2cu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18cf30: 0x14200016
    ctx->pc = 0x18CF30u;
    {
        const bool branch_taken_0x18cf30 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x18CF34u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 4), 20));
        if (branch_taken_0x18cf30) {
            ctx->pc = 0x18CF8Cu;
            goto label_18cf8c;
        }
    }
    ctx->pc = 0x18CF38u;
    // 0x18cf38: 0xc063728
    ctx->pc = 0x18CF38u;
    SET_GPR_U32(ctx, 31, 0x18CF40u);
    ctx->pc = 0x18CF3Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->pc = 0x18DCA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCA0_0x18dca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CF40u; }
    }
    if (ctx->pc != 0x18CF40u) { return; }
    ctx->pc = 0x18CF40u;
    // 0x18cf40: 0x8e230000
    ctx->pc = 0x18cf40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cf44: 0x2122821
    ctx->pc = 0x18cf44u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x18cf48: 0x24630001
    ctx->pc = 0x18cf48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x18cf4c: 0xae230000
    ctx->pc = 0x18cf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x18cf50: 0x8ca3001c
    ctx->pc = 0x18cf50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x18cf54: 0x24640001
    ctx->pc = 0x18cf54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 1));
    // 0x18cf58: 0x31880
    ctx->pc = 0x18cf58u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x18cf5c: 0xaca4001c
    ctx->pc = 0x18cf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x18cf60: 0x431021
    ctx->pc = 0x18cf60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18cf64: 0xac530000
    ctx->pc = 0x18cf64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x18cf68: 0x8ca3001c
    ctx->pc = 0x18cf68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x18cf6c: 0x8e420004
    ctx->pc = 0x18cf6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18cf70: 0x14620002
    ctx->pc = 0x18CF70u;
    {
        const bool branch_taken_0x18cf70 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x18CF74u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 28));
        if (branch_taken_0x18cf70) {
            ctx->pc = 0x18CF7Cu;
            goto label_18cf7c;
        }
    }
    ctx->pc = 0x18CF78u;
    // 0x18cf78: 0xacc00000
    ctx->pc = 0x18cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_18cf7c:
    // 0x18cf7c: 0xae400034
    ctx->pc = 0x18cf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x18cf80: 0x102d
    ctx->pc = 0x18cf80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf84: 0x10000002
    ctx->pc = 0x18CF84u;
    {
        const bool branch_taken_0x18cf84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18CF88u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
        if (branch_taken_0x18cf84) {
            ctx->pc = 0x18CF90u;
            goto label_18cf90;
        }
    }
    ctx->pc = 0x18CF8Cu;
label_18cf8c:
    // 0x18cf8c: 0x2402ffff
    ctx->pc = 0x18cf8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_18cf90:
    // 0x18cf90: 0xdfbf0040
    ctx->pc = 0x18cf90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18cf94: 0x7bb30030
    ctx->pc = 0x18cf94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18cf98: 0x7bb20020
    ctx->pc = 0x18cf98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cf9c: 0x7bb10010
    ctx->pc = 0x18cf9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cfa0: 0x7bb00000
    ctx->pc = 0x18cfa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cfa4: 0x3e00008
    ctx->pc = 0x18CFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CFA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18CF7Cu: goto label_18cf7c;
            case 0x18CF8Cu: goto label_18cf8c;
            case 0x18CF90u: goto label_18cf90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18CFACu;
    // 0x18cfac: 0x0
    ctx->pc = 0x18cfacu;
    // NOP
}
