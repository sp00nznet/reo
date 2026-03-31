#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B0AA0
// Address: 0x1b0aa0 - 0x1b0db0
void sub_001B0AA0_0x1b0aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b0aa0u;

label_1b0aa0:
    // 0x1b0aa0: 0x90840003
    ctx->pc = 0x1b0aa0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1b0aa4: 0x3c03002c
    ctx->pc = 0x1b0aa4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1b0aa8: 0x24638e90
    ctx->pc = 0x1b0aa8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294938256));
    // 0x1b0aac: 0x641821
    ctx->pc = 0x1b0aacu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b0ab0: 0x3e00008
    ctx->pc = 0x1B0AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0AB4u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0AA0u: goto label_1b0aa0;
            case 0x1B0ADCu: goto label_1b0adc;
            case 0x1B0B38u: goto label_1b0b38;
            case 0x1B0B3Cu: goto label_1b0b3c;
            case 0x1B0B44u: goto label_1b0b44;
            case 0x1B0BC0u: goto label_1b0bc0;
            case 0x1B0BE8u: goto label_1b0be8;
            case 0x1B0BF4u: goto label_1b0bf4;
            case 0x1B0BF8u: goto label_1b0bf8;
            case 0x1B0C94u: goto label_1b0c94;
            case 0x1B0CA4u: goto label_1b0ca4;
            case 0x1B0CB0u: goto label_1b0cb0;
            case 0x1B0D94u: goto label_1b0d94;
            case 0x1B0D98u: goto label_1b0d98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0AB8u;
    // 0x1b0ab8: 0x0
    ctx->pc = 0x1b0ab8u;
    // NOP
    // 0x1b0abc: 0x0
    ctx->pc = 0x1b0abcu;
    // NOP
    // 0x1b0ac0: 0x27bdffd0
    ctx->pc = 0x1b0ac0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b0ac4: 0xffbf0020
    ctx->pc = 0x1b0ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b0ac8: 0x7fb10010
    ctx->pc = 0x1b0ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b0acc: 0x7fb00000
    ctx->pc = 0x1b0accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b0ad0: 0x882d
    ctx->pc = 0x1b0ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ad4: 0x1000001b
    ctx->pc = 0x1B0AD4u;
    {
        const bool branch_taken_0x1b0ad4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B0AD8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b0ad4) {
            ctx->pc = 0x1B0B44u;
            goto label_1b0b44;
        }
    }
    ctx->pc = 0x1B0ADCu;
label_1b0adc:
    // 0x1b0adc: 0xc068750
    ctx->pc = 0x1B0ADCu;
    SET_GPR_U32(ctx, 31, 0x1B0AE4u);
    ctx->pc = 0x1B0AE0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    ctx->pc = 0x1A1D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1D40_0x1a1d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0AE4u; }
    }
    if (ctx->pc != 0x1B0AE4u) { return; }
    ctx->pc = 0x1B0AE4u;
    // 0x1b0ae4: 0x24030001
    ctx->pc = 0x1b0ae4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0ae8: 0x14430014
    ctx->pc = 0x1B0AE8u;
    {
        const bool branch_taken_0x1b0ae8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1B0AECu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1b0ae8) {
            ctx->pc = 0x1B0B3Cu;
            goto label_1b0b3c;
        }
    }
    ctx->pc = 0x1B0AF0u;
    // 0x1b0af0: 0x102e3c
    ctx->pc = 0x1b0af0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 24));
    // 0x1b0af4: 0x3c03004a
    ctx->pc = 0x1b0af4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)74 << 16));
    // 0x1b0af8: 0x52e3f
    ctx->pc = 0x1b0af8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1b0afc: 0x24635c30
    ctx->pc = 0x1b0afcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 23600));
    // 0x1b0b00: 0x52100
    ctx->pc = 0x1b0b00u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1b0b04: 0x852823
    ctx->pc = 0x1b0b04u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b0b08: 0x520c0
    ctx->pc = 0x1b0b08u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1b0b0c: 0xa42021
    ctx->pc = 0x1b0b0cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b0b10: 0x42140
    ctx->pc = 0x1b0b10u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x1b0b14: 0x642021
    ctx->pc = 0x1b0b14u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b0b18: 0x80830000
    ctx->pc = 0x1b0b18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b0b1c: 0x10600006
    ctx->pc = 0x1B0B1Cu;
    {
        const bool branch_taken_0x1b0b1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b0b1c) {
            ctx->pc = 0x1B0B38u;
            goto label_1b0b38;
        }
    }
    ctx->pc = 0x1B0B24u;
    // 0x1b0b24: 0x26020001
    ctx->pc = 0x1b0b24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b0b28: 0x220282d
    ctx->pc = 0x1b0b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b2c: 0x2863c
    ctx->pc = 0x1b0b2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1b0b30: 0xc06c2a8
    ctx->pc = 0x1B0B30u;
    SET_GPR_U32(ctx, 31, 0x1B0B38u);
    ctx->pc = 0x1B0B34u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    ctx->pc = 0x1B0AA0u;
    goto label_1b0aa0;
    ctx->pc = 0x1B0B38u;
label_1b0b38:
    // 0x1b0b38: 0x26230001
    ctx->pc = 0x1b0b38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
label_1b0b3c:
    // 0x1b0b3c: 0x38e3c
    ctx->pc = 0x1b0b3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1b0b40: 0x118e3f
    ctx->pc = 0x1b0b40u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
label_1b0b44:
    // 0x1b0b44: 0x3c010032
    ctx->pc = 0x1b0b44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b0b48: 0x11263c
    ctx->pc = 0x1b0b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 24));
    // 0x1b0b4c: 0x802341f0
    ctx->pc = 0x1b0b4cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16880)));
    // 0x1b0b50: 0x4263f
    ctx->pc = 0x1b0b50u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1b0b54: 0x83182a
    ctx->pc = 0x1b0b54u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1b0b58: 0x1460ffe0
    ctx->pc = 0x1B0B58u;
    {
        const bool branch_taken_0x1b0b58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B0B5Cu;
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 24));
        if (branch_taken_0x1b0b58) {
            ctx->pc = 0x1B0ADCu;
            goto label_1b0adc;
        }
    }
    ctx->pc = 0x1B0B60u;
    // 0x1b0b60: 0xdfbf0020
    ctx->pc = 0x1b0b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0b64: 0x7bb10010
    ctx->pc = 0x1b0b64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0b68: 0x7bb00000
    ctx->pc = 0x1b0b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0b6c: 0x3e00008
    ctx->pc = 0x1B0B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0B70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0AA0u: goto label_1b0aa0;
            case 0x1B0ADCu: goto label_1b0adc;
            case 0x1B0B38u: goto label_1b0b38;
            case 0x1B0B3Cu: goto label_1b0b3c;
            case 0x1B0B44u: goto label_1b0b44;
            case 0x1B0BC0u: goto label_1b0bc0;
            case 0x1B0BE8u: goto label_1b0be8;
            case 0x1B0BF4u: goto label_1b0bf4;
            case 0x1B0BF8u: goto label_1b0bf8;
            case 0x1B0C94u: goto label_1b0c94;
            case 0x1B0CA4u: goto label_1b0ca4;
            case 0x1B0CB0u: goto label_1b0cb0;
            case 0x1B0D94u: goto label_1b0d94;
            case 0x1B0D98u: goto label_1b0d98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0B74u;
    // 0x1b0b74: 0x0
    ctx->pc = 0x1b0b74u;
    // NOP
    // 0x1b0b78: 0x0
    ctx->pc = 0x1b0b78u;
    // NOP
    // 0x1b0b7c: 0x0
    ctx->pc = 0x1b0b7cu;
    // NOP
    // 0x1b0b80: 0x27bdffd0
    ctx->pc = 0x1b0b80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b0b84: 0xffbf0020
    ctx->pc = 0x1b0b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b0b88: 0x7fb10010
    ctx->pc = 0x1b0b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b0b8c: 0x7fb00000
    ctx->pc = 0x1b0b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b0b90: 0x882d
    ctx->pc = 0x1b0b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b94: 0xc06c0c0
    ctx->pc = 0x1B0B94u;
    SET_GPR_U32(ctx, 31, 0x1B0B9Cu);
    ctx->pc = 0x1B0B98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0300_0x1b0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0B9Cu; }
    }
    if (ctx->pc != 0x1B0B9Cu) { return; }
    ctx->pc = 0x1B0B9Cu;
    // 0x1b0b9c: 0x24030001
    ctx->pc = 0x1b0b9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0ba0: 0x14430007
    ctx->pc = 0x1B0BA0u;
    {
        const bool branch_taken_0x1b0ba0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1B0BA4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
        if (branch_taken_0x1b0ba0) {
            ctx->pc = 0x1B0BC0u;
            goto label_1b0bc0;
        }
    }
    ctx->pc = 0x1B0BA8u;
    // 0x1b0ba8: 0x92040003
    ctx->pc = 0x1b0ba8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1b0bac: 0x9023aded
    ctx->pc = 0x1b0bacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946285)));
    // 0x1b0bb0: 0x10830011
    ctx->pc = 0x1B0BB0u;
    {
        const bool branch_taken_0x1b0bb0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1B0BB4u;
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
        if (branch_taken_0x1b0bb0) {
            ctx->pc = 0x1B0BF8u;
            goto label_1b0bf8;
        }
    }
    ctx->pc = 0x1B0BB8u;
    // 0x1b0bb8: 0x10000077
    ctx->pc = 0x1B0BB8u;
    {
        const bool branch_taken_0x1b0bb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B0BBCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1b0bb8) {
            ctx->pc = 0x1B0D98u;
            goto label_1b0d98;
        }
    }
    ctx->pc = 0x1B0BC0u;
label_1b0bc0:
    // 0x1b0bc0: 0xc06c0b4
    ctx->pc = 0x1B0BC0u;
    SET_GPR_U32(ctx, 31, 0x1B0BC8u);
    ctx->pc = 0x1B02D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B02D0_0x1b02d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BC8u; }
    }
    if (ctx->pc != 0x1B0BC8u) { return; }
    ctx->pc = 0x1B0BC8u;
    // 0x1b0bc8: 0x14400007
    ctx->pc = 0x1B0BC8u;
    {
        const bool branch_taken_0x1b0bc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b0bc8) {
            ctx->pc = 0x1B0BE8u;
            goto label_1b0be8;
        }
    }
    ctx->pc = 0x1B0BD0u;
    // 0x1b0bd0: 0x92040003
    ctx->pc = 0x1b0bd0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1b0bd4: 0x3c03002c
    ctx->pc = 0x1b0bd4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1b0bd8: 0x24638e90
    ctx->pc = 0x1b0bd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294938256));
    // 0x1b0bdc: 0x641821
    ctx->pc = 0x1b0bdcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b0be0: 0x10000004
    ctx->pc = 0x1B0BE0u;
    {
        const bool branch_taken_0x1b0be0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B0BE4u;
        SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x1b0be0) {
            ctx->pc = 0x1B0BF4u;
            goto label_1b0bf4;
        }
    }
    ctx->pc = 0x1B0BE8u;
label_1b0be8:
    // 0x1b0be8: 0x92030ff0
    ctx->pc = 0x1b0be8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4080)));
    // 0x1b0bec: 0x14600069
    ctx->pc = 0x1B0BECu;
    {
        const bool branch_taken_0x1b0bec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b0bec) {
            ctx->pc = 0x1B0D94u;
            goto label_1b0d94;
        }
    }
    ctx->pc = 0x1B0BF4u;
label_1b0bf4:
    // 0x1b0bf4: 0x111e3c
    ctx->pc = 0x1b0bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
label_1b0bf8:
    // 0x1b0bf8: 0x2404ffff
    ctx->pc = 0x1b0bf8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0bfc: 0x31e3f
    ctx->pc = 0x1b0bfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1b0c00: 0x10640064
    ctx->pc = 0x1B0C00u;
    {
        const bool branch_taken_0x1b0c00 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x1b0c00) {
            ctx->pc = 0x1B0D94u;
            goto label_1b0d94;
        }
    }
    ctx->pc = 0x1B0C08u;
    // 0x1b0c08: 0x8e0a0f88
    ctx->pc = 0x1b0c08u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 3976)));
    // 0x1b0c0c: 0x32040
    ctx->pc = 0x1b0c0cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b0c10: 0x833821
    ctx->pc = 0x1b0c10u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b0c14: 0x3c060032
    ctx->pc = 0x1b0c14u;
    SET_GPR_U32(ctx, 6, ((uint32_t)50 << 16));
    // 0x1b0c18: 0x3c090023
    ctx->pc = 0x1b0c18u;
    SET_GPR_U32(ctx, 9, ((uint32_t)35 << 16));
    // 0x1b0c1c: 0x3c080023
    ctx->pc = 0x1b0c1cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)35 << 16));
    // 0x1b0c20: 0x3c010032
    ctx->pc = 0x1b0c20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b0c24: 0x24c64248
    ctx->pc = 0x1b0c24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16968));
    // 0x1b0c28: 0x73900
    ctx->pc = 0x1b0c28u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 4));
    // 0x1b0c2c: 0x252943c0
    ctx->pc = 0x1b0c2cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 17344));
    // 0x1b0c30: 0xc73021
    ctx->pc = 0x1b0c30u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1b0c34: 0x250843c4
    ctx->pc = 0x1b0c34u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 17348));
    // 0x1b0c38: 0xae0a0f8c
    ctx->pc = 0x1b0c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3980), GPR_U32(ctx, 10));
    // 0x1b0c3c: 0x3c070023
    ctx->pc = 0x1b0c3cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)35 << 16));
    // 0x1b0c40: 0x8e0a0f84
    ctx->pc = 0x1b0c40u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 3972)));
    // 0x1b0c44: 0x24e743c8
    ctx->pc = 0x1b0c44u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 17352));
    // 0x1b0c48: 0x26050f78
    ctx->pc = 0x1b0c48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 3960));
    // 0x1b0c4c: 0xae0a0f88
    ctx->pc = 0x1b0c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3976), GPR_U32(ctx, 10));
    // 0x1b0c50: 0x8e0a0f80
    ctx->pc = 0x1b0c50u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 3968)));
    // 0x1b0c54: 0xae0a0f84
    ctx->pc = 0x1b0c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3972), GPR_U32(ctx, 10));
    // 0x1b0c58: 0x902b43ec
    ctx->pc = 0x1b0c58u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17388)));
    // 0x1b0c5c: 0x8ccc0000
    ctx->pc = 0x1b0c5cu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b0c60: 0xb5040
    ctx->pc = 0x1b0c60u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 11), 1));
    // 0x1b0c64: 0x14b5021
    ctx->pc = 0x1b0c64u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1b0c68: 0x31860100
    ctx->pc = 0x1b0c68u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 12), 256));
    // 0x1b0c6c: 0xa5080
    ctx->pc = 0x1b0c6cu;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 2));
    // 0x1b0c70: 0x12a4821
    ctx->pc = 0x1b0c70u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1b0c74: 0x10a4021
    ctx->pc = 0x1b0c74u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x1b0c78: 0xea3821
    ctx->pc = 0x1b0c78u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1b0c7c: 0x8d290000
    ctx->pc = 0x1b0c7cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1b0c80: 0x8d080000
    ctx->pc = 0x1b0c80u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1b0c84: 0x8ce70000
    ctx->pc = 0x1b0c84u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b0c88: 0x10c00002
    ctx->pc = 0x1B0C88u;
    {
        const bool branch_taken_0x1b0c88 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B0C8Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b0c88) {
            ctx->pc = 0x1B0C94u;
            goto label_1b0c94;
        }
    }
    ctx->pc = 0x1B0C90u;
    // 0x1b0c90: 0x892025
    ctx->pc = 0x1b0c90u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_1b0c94:
    // 0x1b0c94: 0x31860010
    ctx->pc = 0x1b0c94u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 12), 16));
    // 0x1b0c98: 0x10c00002
    ctx->pc = 0x1B0C98u;
    {
        const bool branch_taken_0x1b0c98 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B0C9Cu;
        SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 12), 32));
        if (branch_taken_0x1b0c98) {
            ctx->pc = 0x1B0CA4u;
            goto label_1b0ca4;
        }
    }
    ctx->pc = 0x1B0CA0u;
    // 0x1b0ca0: 0x882025
    ctx->pc = 0x1b0ca0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1b0ca4:
    // 0x1b0ca4: 0x10c00002
    ctx->pc = 0x1B0CA4u;
    {
        const bool branch_taken_0x1b0ca4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b0ca4) {
            ctx->pc = 0x1B0CB0u;
            goto label_1b0cb0;
        }
    }
    ctx->pc = 0x1B0CACu;
    // 0x1b0cac: 0x872025
    ctx->pc = 0x1b0cacu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1b0cb0:
    // 0x1b0cb0: 0x2407fecf
    ctx->pc = 0x1b0cb0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294966991));
    // 0x1b0cb4: 0x33040
    ctx->pc = 0x1b0cb4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b0cb8: 0x1873824
    ctx->pc = 0x1b0cb8u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x1b0cbc: 0xc31821
    ctx->pc = 0x1b0cbcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1b0cc0: 0xe42025
    ctx->pc = 0x1b0cc0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1b0cc4: 0x37100
    ctx->pc = 0x1b0cc4u;
    SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b0cc8: 0xaca40008
    ctx->pc = 0x1b0cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1b0ccc: 0x3c030032
    ctx->pc = 0x1b0cccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x1b0cd0: 0x8ca6000c
    ctx->pc = 0x1b0cd0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1b0cd4: 0x24634264
    ctx->pc = 0x1b0cd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16996));
    // 0x1b0cd8: 0x8ca40008
    ctx->pc = 0x1b0cd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b0cdc: 0x6e5821
    ctx->pc = 0x1b0cdcu;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x1b0ce0: 0x3c030032
    ctx->pc = 0x1b0ce0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x1b0ce4: 0x24634266
    ctx->pc = 0x1b0ce4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16998));
    // 0x1b0ce8: 0x6e5021
    ctx->pc = 0x1b0ce8u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x1b0cec: 0x3c030032
    ctx->pc = 0x1b0cecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x1b0cf0: 0xc06027
    ctx->pc = 0x1b0cf0u;
    SET_GPR_U32(ctx, 12, NOR32(GPR_U32(ctx, 6), GPR_U32(ctx, 0)));
    // 0x1b0cf4: 0x2463426c
    ctx->pc = 0x1b0cf4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 17004));
    // 0x1b0cf8: 0x8c2024
    ctx->pc = 0x1b0cf8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x1b0cfc: 0x6e4821
    ctx->pc = 0x1b0cfcu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x1b0d00: 0xaca40000
    ctx->pc = 0x1b0d00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1b0d04: 0x3c030032
    ctx->pc = 0x1b0d04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x1b0d08: 0x8cad0008
    ctx->pc = 0x1b0d08u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b0d0c: 0x2463426e
    ctx->pc = 0x1b0d0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 17006));
    // 0x1b0d10: 0x8cac000c
    ctx->pc = 0x1b0d10u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1b0d14: 0x6e4021
    ctx->pc = 0x1b0d14u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x1b0d18: 0x3c030032
    ctx->pc = 0x1b0d18u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x1b0d1c: 0x24634260
    ctx->pc = 0x1b0d1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16992));
    // 0x1b0d20: 0x6e3821
    ctx->pc = 0x1b0d20u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x1b0d24: 0x3c030032
    ctx->pc = 0x1b0d24u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x1b0d28: 0x1a06827
    ctx->pc = 0x1b0d28u;
    SET_GPR_U32(ctx, 13, NOR32(GPR_U32(ctx, 13), GPR_U32(ctx, 0)));
    // 0x1b0d2c: 0x24634268
    ctx->pc = 0x1b0d2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 17000));
    // 0x1b0d30: 0x18d6024
    ctx->pc = 0x1b0d30u;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x1b0d34: 0x6e3021
    ctx->pc = 0x1b0d34u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x1b0d38: 0xacac0004
    ctx->pc = 0x1b0d38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 12));
    // 0x1b0d3c: 0x3c030032
    ctx->pc = 0x1b0d3cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x1b0d40: 0x856b0000
    ctx->pc = 0x1b0d40u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1b0d44: 0x24634262
    ctx->pc = 0x1b0d44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16994));
    // 0x1b0d48: 0x6e2021
    ctx->pc = 0x1b0d48u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x1b0d4c: 0x3c030032
    ctx->pc = 0x1b0d4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x1b0d50: 0x2463426a
    ctx->pc = 0x1b0d50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 17002));
    // 0x1b0d54: 0x6e1821
    ctx->pc = 0x1b0d54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x1b0d58: 0xa4ab0024
    ctx->pc = 0x1b0d58u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 36), (uint16_t)GPR_U32(ctx, 11));
    // 0x1b0d5c: 0x854a0000
    ctx->pc = 0x1b0d5cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1b0d60: 0xa4aa0026
    ctx->pc = 0x1b0d60u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 38), (uint16_t)GPR_U32(ctx, 10));
    // 0x1b0d64: 0x85290000
    ctx->pc = 0x1b0d64u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1b0d68: 0xa4a9002c
    ctx->pc = 0x1b0d68u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 44), (uint16_t)GPR_U32(ctx, 9));
    // 0x1b0d6c: 0x85080000
    ctx->pc = 0x1b0d6cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1b0d70: 0xa4a8002e
    ctx->pc = 0x1b0d70u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 46), (uint16_t)GPR_U32(ctx, 8));
    // 0x1b0d74: 0x84e70000
    ctx->pc = 0x1b0d74u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b0d78: 0xa4a70020
    ctx->pc = 0x1b0d78u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32), (uint16_t)GPR_U32(ctx, 7));
    // 0x1b0d7c: 0x84c60000
    ctx->pc = 0x1b0d7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b0d80: 0xa4a60028
    ctx->pc = 0x1b0d80u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 40), (uint16_t)GPR_U32(ctx, 6));
    // 0x1b0d84: 0x84840000
    ctx->pc = 0x1b0d84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b0d88: 0xa4a40022
    ctx->pc = 0x1b0d88u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 34), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b0d8c: 0x84630000
    ctx->pc = 0x1b0d8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b0d90: 0xa4a3002a
    ctx->pc = 0x1b0d90u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 42), (uint16_t)GPR_U32(ctx, 3));
label_1b0d94:
    // 0x1b0d94: 0xdfbf0020
    ctx->pc = 0x1b0d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b0d98:
    // 0x1b0d98: 0x7bb10010
    ctx->pc = 0x1b0d98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0d9c: 0x7bb00000
    ctx->pc = 0x1b0d9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0da0: 0x3e00008
    ctx->pc = 0x1B0DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0DA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0AA0u: goto label_1b0aa0;
            case 0x1B0ADCu: goto label_1b0adc;
            case 0x1B0B38u: goto label_1b0b38;
            case 0x1B0B3Cu: goto label_1b0b3c;
            case 0x1B0B44u: goto label_1b0b44;
            case 0x1B0BC0u: goto label_1b0bc0;
            case 0x1B0BE8u: goto label_1b0be8;
            case 0x1B0BF4u: goto label_1b0bf4;
            case 0x1B0BF8u: goto label_1b0bf8;
            case 0x1B0C94u: goto label_1b0c94;
            case 0x1B0CA4u: goto label_1b0ca4;
            case 0x1B0CB0u: goto label_1b0cb0;
            case 0x1B0D94u: goto label_1b0d94;
            case 0x1B0D98u: goto label_1b0d98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0DA8u;
    // 0x1b0da8: 0x0
    ctx->pc = 0x1b0da8u;
    // NOP
    // 0x1b0dac: 0x0
    ctx->pc = 0x1b0dacu;
    // NOP
}
