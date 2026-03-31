#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B2A70
// Address: 0x1b2a70 - 0x1b2b90
void sub_001B2A70_0x1b2a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b2a70u;

    // 0x1b2a70: 0x27bdffc0
    ctx->pc = 0x1b2a70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b2a74: 0x3c010032
    ctx->pc = 0x1b2a74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b2a78: 0xffbf0030
    ctx->pc = 0x1b2a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b2a7c: 0x7fb20020
    ctx->pc = 0x1b2a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b2a80: 0x7fb10010
    ctx->pc = 0x1b2a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b2a84: 0x80902d
    ctx->pc = 0x1b2a84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a88: 0x7fb00000
    ctx->pc = 0x1b2a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b2a8c: 0x902243d3
    ctx->pc = 0x1b2a8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17363)));
    // 0x1b2a90: 0x14400004
    ctx->pc = 0x1B2A90u;
    {
        const bool branch_taken_0x1b2a90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B2A94u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a90) {
            ctx->pc = 0x1B2AA4u;
            goto label_1b2aa4;
        }
    }
    ctx->pc = 0x1B2A98u;
    // 0x1b2a98: 0x3c040025
    ctx->pc = 0x1b2a98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
    // 0x1b2a9c: 0xc06ce0c
    ctx->pc = 0x1B2A9Cu;
    SET_GPR_U32(ctx, 31, 0x1B2AA4u);
    ctx->pc = 0x1B2AA0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966992));
    ctx->pc = 0x1B3830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3830_0x1b3830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2AA4u; }
    }
    if (ctx->pc != 0x1B2AA4u) { return; }
    ctx->pc = 0x1B2AA4u;
label_1b2aa4:
    // 0x1b2aa4: 0x240202d
    ctx->pc = 0x1b2aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2aa8: 0xc06ca78
    ctx->pc = 0x1B2AA8u;
    SET_GPR_U32(ctx, 31, 0x1B2AB0u);
    ctx->pc = 0x1B2AACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B29E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B29E0_0x1b29e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2AB0u; }
    }
    if (ctx->pc != 0x1B2AB0u) { return; }
    ctx->pc = 0x1B2AB0u;
    // 0x1b2ab0: 0x10400003
    ctx->pc = 0x1B2AB0u;
    {
        const bool branch_taken_0x1b2ab0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B2AB4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
        if (branch_taken_0x1b2ab0) {
            ctx->pc = 0x1B2AC0u;
            goto label_1b2ac0;
        }
    }
    ctx->pc = 0x1B2AB8u;
    // 0x1b2ab8: 0x1000002d
    ctx->pc = 0x1B2AB8u;
    {
        const bool branch_taken_0x1b2ab8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B2ABCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1b2ab8) {
            ctx->pc = 0x1B2B70u;
            goto label_1b2b70;
        }
    }
    ctx->pc = 0x1B2AC0u;
label_1b2ac0:
    // 0x1b2ac0: 0x3c10002c
    ctx->pc = 0x1b2ac0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)44 << 16));
    // 0x1b2ac4: 0x84238eac
    ctx->pc = 0x1b2ac4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938284)));
    // 0x1b2ac8: 0x24020064
    ctx->pc = 0x1b2ac8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
    // 0x1b2acc: 0x14620004
    ctx->pc = 0x1B2ACCu;
    {
        const bool branch_taken_0x1b2acc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1B2AD0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294938272));
        if (branch_taken_0x1b2acc) {
            ctx->pc = 0x1B2AE0u;
            goto label_1b2ae0;
        }
    }
    ctx->pc = 0x1B2AD4u;
    // 0x1b2ad4: 0x3c040025
    ctx->pc = 0x1b2ad4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
    // 0x1b2ad8: 0xc06ce0c
    ctx->pc = 0x1B2AD8u;
    SET_GPR_U32(ctx, 31, 0x1B2AE0u);
    ctx->pc = 0x1B2ADCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967024));
    ctx->pc = 0x1B3830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3830_0x1b3830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2AE0u; }
    }
    if (ctx->pc != 0x1B2AE0u) { return; }
    ctx->pc = 0x1B2AE0u;
label_1b2ae0:
    // 0x1b2ae0: 0x86030008
    ctx->pc = 0x1b2ae0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b2ae4: 0x8602000a
    ctx->pc = 0x1b2ae4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1b2ae8: 0x621023
    ctx->pc = 0x1b2ae8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b2aec: 0x52082a
    ctx->pc = 0x1b2aecu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 18)));
    // 0x1b2af0: 0x10200003
    ctx->pc = 0x1B2AF0u;
    {
        const bool branch_taken_0x1b2af0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B2AF4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
        if (branch_taken_0x1b2af0) {
            ctx->pc = 0x1B2B00u;
            goto label_1b2b00;
        }
    }
    ctx->pc = 0x1B2AF8u;
    // 0x1b2af8: 0xc06ce0c
    ctx->pc = 0x1B2AF8u;
    SET_GPR_U32(ctx, 31, 0x1B2B00u);
    ctx->pc = 0x1B2AFCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967024));
    ctx->pc = 0x1B3830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3830_0x1b3830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B00u; }
    }
    if (ctx->pc != 0x1B2B00u) { return; }
    ctx->pc = 0x1B2B00u;
label_1b2b00:
    // 0x1b2b00: 0x8607000a
    ctx->pc = 0x1b2b00u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1b2b04: 0x322200ff
    ctx->pc = 0x1b2b04u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 255));
    // 0x1b2b08: 0x24440001
    ctx->pc = 0x1b2b08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b2b0c: 0x12343c
    ctx->pc = 0x1b2b0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1b2b10: 0x8608000c
    ctx->pc = 0x1b2b10u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b2b14: 0x6343f
    ctx->pc = 0x1b2b14u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1b2b18: 0x8e020010
    ctx->pc = 0x1b2b18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b2b1c: 0x718c0
    ctx->pc = 0x1b2b1cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 3));
    // 0x1b2b20: 0x671821
    ctx->pc = 0x1b2b20u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1b2b24: 0x32840
    ctx->pc = 0x1b2b24u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b2b28: 0xa72821
    ctx->pc = 0x1b2b28u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1b2b2c: 0x81880
    ctx->pc = 0x1b2b2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1b2b30: 0x703821
    ctx->pc = 0x1b2b30u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b2b34: 0x528c0
    ctx->pc = 0x1b2b34u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1b2b38: 0x451021
    ctx->pc = 0x1b2b38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b2b3c: 0x81840
    ctx->pc = 0x1b2b3cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 1));
    // 0x1b2b40: 0x702821
    ctx->pc = 0x1b2b40u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b2b44: 0xace2001c
    ctx->pc = 0x1b2b44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
    // 0x1b2b48: 0x1101821
    ctx->pc = 0x1b2b48u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1b2b4c: 0xa4b201ac
    ctx->pc = 0x1b2b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 428), (uint16_t)GPR_U32(ctx, 18));
    // 0x1b2b50: 0xa0640274
    ctx->pc = 0x1b2b50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 628), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b2b54: 0x8603000a
    ctx->pc = 0x1b2b54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1b2b58: 0x661821
    ctx->pc = 0x1b2b58u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b2b5c: 0xa603000a
    ctx->pc = 0x1b2b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b2b60: 0x8603000c
    ctx->pc = 0x1b2b60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b2b64: 0x24630001
    ctx->pc = 0x1b2b64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b2b68: 0xa603000c
    ctx->pc = 0x1b2b68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b2b6c: 0xdfbf0030
    ctx->pc = 0x1b2b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b2b70:
    // 0x1b2b70: 0x7bb20020
    ctx->pc = 0x1b2b70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2b74: 0x7bb10010
    ctx->pc = 0x1b2b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2b78: 0x7bb00000
    ctx->pc = 0x1b2b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2b7c: 0x3e00008
    ctx->pc = 0x1B2B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2B80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2AA4u: goto label_1b2aa4;
            case 0x1B2AC0u: goto label_1b2ac0;
            case 0x1B2AE0u: goto label_1b2ae0;
            case 0x1B2B00u: goto label_1b2b00;
            case 0x1B2B70u: goto label_1b2b70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B2B84u;
    // 0x1b2b84: 0x0
    ctx->pc = 0x1b2b84u;
    // NOP
    // 0x1b2b88: 0x0
    ctx->pc = 0x1b2b88u;
    // NOP
    // 0x1b2b8c: 0x0
    ctx->pc = 0x1b2b8cu;
    // NOP
}
