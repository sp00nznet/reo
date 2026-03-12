#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00379AF0
// Address: 0x379af0 - 0x379c60
void sub_00379AF0_0x379af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x379af0u;

    // 0x379af0: 0x27bdffb0
    ctx->pc = 0x379af0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x379af4: 0x3c010032
    ctx->pc = 0x379af4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x379af8: 0xffbf0040
    ctx->pc = 0x379af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x379afc: 0x24030002
    ctx->pc = 0x379afcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x379b00: 0x7fb30030
    ctx->pc = 0x379b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x379b04: 0x7fb20020
    ctx->pc = 0x379b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x379b08: 0x80982d
    ctx->pc = 0x379b08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379b0c: 0x7fb10010
    ctx->pc = 0x379b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x379b10: 0xa0902d
    ctx->pc = 0x379b10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379b14: 0x7fb00000
    ctx->pc = 0x379b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x379b18: 0xc0882d
    ctx->pc = 0x379b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379b1c: 0x90244405
    ctx->pc = 0x379b1cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17413)));
    // 0x379b20: 0x14830047
    ctx->pc = 0x379B20u;
    {
        const bool branch_taken_0x379b20 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x379B24u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x379b20) {
            ctx->pc = 0x379C40u;
            goto label_379c40;
        }
    }
    ctx->pc = 0x379B28u;
    // 0x379b28: 0x3c010057
    ctx->pc = 0x379b28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379b2c: 0x8c24bae8
    ctx->pc = 0x379b2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x379b30: 0x3c010032
    ctx->pc = 0x379b30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x379b34: 0x8c840018
    ctx->pc = 0x379b34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x379b38: 0x94234416
    ctx->pc = 0x379b38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17430)));
    // 0x379b3c: 0x10830004
    ctx->pc = 0x379B3Cu;
    {
        const bool branch_taken_0x379b3c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x379B40u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x379b3c) {
            ctx->pc = 0x379B50u;
            goto label_379b50;
        }
    }
    ctx->pc = 0x379B44u;
    // 0x379b44: 0xc0de64c
    ctx->pc = 0x379B44u;
    SET_GPR_U32(ctx, 31, 0x379B4Cu);
    ctx->pc = 0x379930u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00379930_0x379930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379B4Cu; }
    }
    if (ctx->pc != 0x379B4Cu) { return; }
    ctx->pc = 0x379B4Cu;
    // 0x379b4c: 0x24030001
    ctx->pc = 0x379b4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_379b50:
    // 0x379b50: 0x1203003b
    ctx->pc = 0x379B50u;
    {
        const bool branch_taken_0x379b50 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x379b50) {
            ctx->pc = 0x379C40u;
            goto label_379c40;
        }
    }
    ctx->pc = 0x379B58u;
    // 0x379b58: 0xc063594
    ctx->pc = 0x379B58u;
    SET_GPR_U32(ctx, 31, 0x379B60u);
    ctx->pc = 0x18D650u;
    {
        auto targetFn = runtime->lookupFunction(0x18D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379B60u; }
        if (ctx->pc != 0x379B60u) { return; }
    }
    ctx->pc = 0x379B60u;
    // 0x379b60: 0x12600025
    ctx->pc = 0x379B60u;
    {
        const bool branch_taken_0x379b60 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x379b60) {
            ctx->pc = 0x379BF8u;
            goto label_379bf8;
        }
    }
    ctx->pc = 0x379B68u;
    // 0x379b68: 0x3c010057
    ctx->pc = 0x379b68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379b6c: 0x240201e0
    ctx->pc = 0x379b6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 480));
    // 0x379b70: 0x8c23bad0
    ctx->pc = 0x379b70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294949584)));
    // 0x379b74: 0x14620002
    ctx->pc = 0x379B74u;
    {
        const bool branch_taken_0x379b74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x379B78u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x379b74) {
            ctx->pc = 0x379B80u;
            goto label_379b80;
        }
    }
    ctx->pc = 0x379B7Cu;
    // 0x379b7c: 0x26730400
    ctx->pc = 0x379b7cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1024));
label_379b80:
    // 0x379b80: 0x240302d
    ctx->pc = 0x379b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379b84: 0xac33bae0
    ctx->pc = 0x379b84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949600), GPR_U32(ctx, 19));
    // 0x379b88: 0x220382d
    ctx->pc = 0x379b88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379b8c: 0x3c010057
    ctx->pc = 0x379b8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379b90: 0x8c22bae8
    ctx->pc = 0x379b90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x379b94: 0x8c440020
    ctx->pc = 0x379b94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x379b98: 0xc0de578
    ctx->pc = 0x379B98u;
    SET_GPR_U32(ctx, 31, 0x379BA0u);
    ctx->pc = 0x379B9Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3795E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003795E0_0x3795e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379BA0u; }
    }
    if (ctx->pc != 0x379BA0u) { return; }
    ctx->pc = 0x379BA0u;
    // 0x379ba0: 0x3c01002a
    ctx->pc = 0x379ba0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x379ba4: 0x30020001
    ctx->pc = 0x379ba4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 0), 1));
    // 0x379ba8: 0x8c26fd7c
    ctx->pc = 0x379ba8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294966652)));
    // 0x379bac: 0x21980
    ctx->pc = 0x379bacu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 6));
    // 0x379bb0: 0x2402ffbf
    ctx->pc = 0x379bb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x379bb4: 0x202d
    ctx->pc = 0x379bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379bb8: 0x90c50000
    ctx->pc = 0x379bb8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x379bbc: 0xa21024
    ctx->pc = 0x379bbcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x379bc0: 0x431025
    ctx->pc = 0x379bc0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x379bc4: 0xc045228
    ctx->pc = 0x379BC4u;
    SET_GPR_U32(ctx, 31, 0x379BCCu);
    ctx->pc = 0x379BC8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1148A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1148A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379BCCu; }
        if (ctx->pc != 0x379BCCu) { return; }
    }
    ctx->pc = 0x379BCCu;
    // 0x379bcc: 0xc063594
    ctx->pc = 0x379BCCu;
    SET_GPR_U32(ctx, 31, 0x379BD4u);
    ctx->pc = 0x18D650u;
    {
        auto targetFn = runtime->lookupFunction(0x18D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379BD4u; }
        if (ctx->pc != 0x379BD4u) { return; }
    }
    ctx->pc = 0x379BD4u;
    // 0x379bd4: 0x3c010057
    ctx->pc = 0x379bd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379bd8: 0x8c22bae8
    ctx->pc = 0x379bd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x379bdc: 0x3c01002a
    ctx->pc = 0x379bdcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x379be0: 0x8c24fd7c
    ctx->pc = 0x379be0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966652)));
    // 0x379be4: 0xc040ce4
    ctx->pc = 0x379BE4u;
    SET_GPR_U32(ctx, 31, 0x379BECu);
    ctx->pc = 0x379BE8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->pc = 0x103390u;
    {
        auto targetFn = runtime->lookupFunction(0x103390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379BECu; }
        if (ctx->pc != 0x379BECu) { return; }
    }
    ctx->pc = 0x379BECu;
    // 0x379bec: 0x202d
    ctx->pc = 0x379becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379bf0: 0xc044d22
    ctx->pc = 0x379BF0u;
    SET_GPR_U32(ctx, 31, 0x379BF8u);
    ctx->pc = 0x379BF4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x113488u;
    {
        auto targetFn = runtime->lookupFunction(0x113488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379BF8u; }
        if (ctx->pc != 0x379BF8u) { return; }
    }
    ctx->pc = 0x379BF8u;
label_379bf8:
    // 0x379bf8: 0x3c010057
    ctx->pc = 0x379bf8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379bfc: 0x8c23bae0
    ctx->pc = 0x379bfcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294949600)));
    // 0x379c00: 0x1060000f
    ctx->pc = 0x379C00u;
    {
        const bool branch_taken_0x379c00 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x379C04u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x379c00) {
            ctx->pc = 0x379C40u;
            goto label_379c40;
        }
    }
    ctx->pc = 0x379C08u;
    // 0x379c08: 0x8c23bae8
    ctx->pc = 0x379c08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x379c0c: 0x8c62001c
    ctx->pc = 0x379c0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x379c10: 0x10400003
    ctx->pc = 0x379C10u;
    {
        const bool branch_taken_0x379c10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x379c10) {
            ctx->pc = 0x379C20u;
            goto label_379c20;
        }
    }
    ctx->pc = 0x379C18u;
    // 0x379c18: 0x10000002
    ctx->pc = 0x379C18u;
    {
        const bool branch_taken_0x379c18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x379C1Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 16)));
        if (branch_taken_0x379c18) {
            ctx->pc = 0x379C24u;
            goto label_379c24;
        }
    }
    ctx->pc = 0x379C20u;
label_379c20:
    // 0x379c20: 0x8c640014
    ctx->pc = 0x379c20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_379c24:
    // 0x379c24: 0xc064f88
    ctx->pc = 0x379C24u;
    SET_GPR_U32(ctx, 31, 0x379C2Cu);
    ctx->pc = 0x193E20u;
    {
        auto targetFn = runtime->lookupFunction(0x193E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379C2Cu; }
        if (ctx->pc != 0x379C2Cu) { return; }
    }
    ctx->pc = 0x379C2Cu;
    // 0x379c2c: 0x3c010057
    ctx->pc = 0x379c2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379c30: 0x8c24bae8
    ctx->pc = 0x379c30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x379c34: 0x8c83001c
    ctx->pc = 0x379c34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x379c38: 0x38630001
    ctx->pc = 0x379c38u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 1));
    // 0x379c3c: 0xac83001c
    ctx->pc = 0x379c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_379c40:
    // 0x379c40: 0xdfbf0040
    ctx->pc = 0x379c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x379c44: 0x7bb30030
    ctx->pc = 0x379c44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x379c48: 0x7bb20020
    ctx->pc = 0x379c48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379c4c: 0x7bb10010
    ctx->pc = 0x379c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379c50: 0x7bb00000
    ctx->pc = 0x379c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379c54: 0x3e00008
    ctx->pc = 0x379C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379C58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x379B50u: goto label_379b50;
            case 0x379B80u: goto label_379b80;
            case 0x379BF8u: goto label_379bf8;
            case 0x379C20u: goto label_379c20;
            case 0x379C24u: goto label_379c24;
            case 0x379C40u: goto label_379c40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x379C5Cu;
    // 0x379c5c: 0x0
    ctx->pc = 0x379c5cu;
    // NOP
}
