#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F5B50
// Address: 0x1f5b50 - 0x1f5f70
void sub_001F5B50_0x1f5b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f5b50u;

    // 0x1f5b50: 0x27bdffe0
    ctx->pc = 0x1f5b50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f5b54: 0x3c010036
    ctx->pc = 0x1f5b54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5b58: 0xffbf0010
    ctx->pc = 0x1f5b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f5b5c: 0x7fb00000
    ctx->pc = 0x1f5b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f5b60: 0x8c22eaf0
    ctx->pc = 0x1f5b60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294961904)));
    // 0x1f5b64: 0x10400028
    ctx->pc = 0x1F5B64u;
    {
        const bool branch_taken_0x1f5b64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5B68u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f5b64) {
            ctx->pc = 0x1F5C08u;
            goto label_1f5c08;
        }
    }
    ctx->pc = 0x1F5B6Cu;
    // 0x1f5b6c: 0x2405000e
    ctx->pc = 0x1f5b6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1f5b70: 0x24060001
    ctx->pc = 0x1f5b70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5b74: 0xc07d284
    ctx->pc = 0x1F5B74u;
    SET_GPR_U32(ctx, 31, 0x1F5B7Cu);
    ctx->pc = 0x1F5B78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4A10_0x1f4a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5B7Cu; }
    }
    if (ctx->pc != 0x1F5B7Cu) { return; }
    ctx->pc = 0x1F5B7Cu;
    // 0x1f5b7c: 0x3c010036
    ctx->pc = 0x1f5b7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5b80: 0x9025ec10
    ctx->pc = 0x1f5b80u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294962192)));
    // 0x1f5b84: 0xc07d2e4
    ctx->pc = 0x1F5B84u;
    SET_GPR_U32(ctx, 31, 0x1F5B8Cu);
    ctx->pc = 0x1F5B88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4B90_0x1f4b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5B8Cu; }
    }
    if (ctx->pc != 0x1F5B8Cu) { return; }
    ctx->pc = 0x1F5B8Cu;
    // 0x1f5b8c: 0x3c010036
    ctx->pc = 0x1f5b8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5b90: 0x8c25ec14
    ctx->pc = 0x1f5b90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294962196)));
    // 0x1f5b94: 0xc07d308
    ctx->pc = 0x1F5B94u;
    SET_GPR_U32(ctx, 31, 0x1F5B9Cu);
    ctx->pc = 0x1F5B98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4C20_0x1f4c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5B9Cu; }
    }
    if (ctx->pc != 0x1F5B9Cu) { return; }
    ctx->pc = 0x1F5B9Cu;
    // 0x1f5b9c: 0x200202d
    ctx->pc = 0x1f5b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ba0: 0xc07d2e4
    ctx->pc = 0x1F5BA0u;
    SET_GPR_U32(ctx, 31, 0x1F5BA8u);
    ctx->pc = 0x1F5BA4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 754));
    ctx->pc = 0x1F4B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4B90_0x1f4b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5BA8u; }
    }
    if (ctx->pc != 0x1F5BA8u) { return; }
    ctx->pc = 0x1F5BA8u;
    // 0x1f5ba8: 0x9603002c
    ctx->pc = 0x1f5ba8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1f5bac: 0x8e02001c
    ctx->pc = 0x1f5bacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f5bb0: 0x32200
    ctx->pc = 0x1f5bb0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1f5bb4: 0x31a03
    ctx->pc = 0x1f5bb4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1f5bb8: 0x3084ff00
    ctx->pc = 0x1f5bb8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65280));
    // 0x1f5bbc: 0x306300ff
    ctx->pc = 0x1f5bbcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x1f5bc0: 0x831825
    ctx->pc = 0x1f5bc0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f5bc4: 0xa4430000
    ctx->pc = 0x1f5bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f5bc8: 0x8e02002c
    ctx->pc = 0x1f5bc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1f5bcc: 0x8e040010
    ctx->pc = 0x1f5bccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f5bd0: 0x8e05001c
    ctx->pc = 0x1f5bd0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f5bd4: 0x24420008
    ctx->pc = 0x1f5bd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f5bd8: 0x2343c
    ctx->pc = 0x1f5bd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f5bdc: 0xc075aa4
    ctx->pc = 0x1F5BDCu;
    SET_GPR_U32(ctx, 31, 0x1F5BE4u);
    ctx->pc = 0x1F5BE0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->pc = 0x1D6A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6A90_0x1d6a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5BE4u; }
    }
    if (ctx->pc != 0x1F5BE4u) { return; }
    ctx->pc = 0x1F5BE4u;
    // 0x1f5be4: 0xc07d16c
    ctx->pc = 0x1F5BE4u;
    SET_GPR_U32(ctx, 31, 0x1F5BECu);
    ctx->pc = 0x1F5BE8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F45B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F45B0_0x1f45b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5BECu; }
    }
    if (ctx->pc != 0x1F5BECu) { return; }
    ctx->pc = 0x1F5BECu;
    // 0x1f5bec: 0x2841ffff
    ctx->pc = 0x1f5becu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 4294967295));
    // 0x1f5bf0: 0x10200003
    ctx->pc = 0x1F5BF0u;
    {
        const bool branch_taken_0x1f5bf0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f5bf0) {
            ctx->pc = 0x1F5C00u;
            goto label_1f5c00;
        }
    }
    ctx->pc = 0x1F5BF8u;
    // 0x1f5bf8: 0x10000005
    ctx->pc = 0x1F5BF8u;
    {
        const bool branch_taken_0x1f5bf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5BFCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1f5bf8) {
            ctx->pc = 0x1F5C10u;
            goto label_1f5c10;
        }
    }
    ctx->pc = 0x1F5C00u;
label_1f5c00:
    // 0x1f5c00: 0x2402000b
    ctx->pc = 0x1f5c00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x1f5c04: 0xa2020001
    ctx->pc = 0x1f5c04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1f5c08:
    // 0x1f5c08: 0x102d
    ctx->pc = 0x1f5c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5c0c: 0xdfbf0010
    ctx->pc = 0x1f5c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5c10:
    // 0x1f5c10: 0x7bb00000
    ctx->pc = 0x1f5c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5c14: 0x3e00008
    ctx->pc = 0x1F5C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5C18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F5C00u: goto label_1f5c00;
            case 0x1F5C08u: goto label_1f5c08;
            case 0x1F5C10u: goto label_1f5c10;
            case 0x1F5C88u: goto label_1f5c88;
            case 0x1F5CD0u: goto label_1f5cd0;
            case 0x1F5D44u: goto label_1f5d44;
            case 0x1F5D50u: goto label_1f5d50;
            case 0x1F5DA8u: goto label_1f5da8;
            case 0x1F5DB4u: goto label_1f5db4;
            case 0x1F5DB8u: goto label_1f5db8;
            case 0x1F5E10u: goto label_1f5e10;
            case 0x1F5E7Cu: goto label_1f5e7c;
            case 0x1F5EACu: goto label_1f5eac;
            case 0x1F5EDCu: goto label_1f5edc;
            case 0x1F5F5Cu: goto label_1f5f5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F5C1Cu;
    // 0x1f5c1c: 0x0
    ctx->pc = 0x1f5c1cu;
    // NOP
    // 0x1f5c20: 0x27bdffd0
    ctx->pc = 0x1f5c20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f5c24: 0x3c010036
    ctx->pc = 0x1f5c24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5c28: 0xffbf0020
    ctx->pc = 0x1f5c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f5c2c: 0x7fb10010
    ctx->pc = 0x1f5c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f5c30: 0x7fb00000
    ctx->pc = 0x1f5c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f5c34: 0x8c22eaf0
    ctx->pc = 0x1f5c34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294961904)));
    // 0x1f5c38: 0x10400075
    ctx->pc = 0x1F5C38u;
    {
        const bool branch_taken_0x1f5c38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5C3Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f5c38) {
            ctx->pc = 0x1F5E10u;
            goto label_1f5e10;
        }
    }
    ctx->pc = 0x1F5C40u;
    // 0x1f5c40: 0xc07d20c
    ctx->pc = 0x1F5C40u;
    SET_GPR_U32(ctx, 31, 0x1F5C48u);
    ctx->pc = 0x1F4830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4830_0x1f4830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C48u; }
    }
    if (ctx->pc != 0x1F5C48u) { return; }
    ctx->pc = 0x1F5C48u;
    // 0x1f5c48: 0x3050ffff
    ctx->pc = 0x1f5c48u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1f5c4c: 0x3c010036
    ctx->pc = 0x1f5c4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5c50: 0x9022ec10
    ctx->pc = 0x1f5c50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294962192)));
    // 0x1f5c54: 0x1202000c
    ctx->pc = 0x1F5C54u;
    {
        const bool branch_taken_0x1f5c54 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x1F5C58u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f5c54) {
            ctx->pc = 0x1F5C88u;
            goto label_1f5c88;
        }
    }
    ctx->pc = 0x1F5C5Cu;
    // 0x1f5c5c: 0x2403ffff
    ctx->pc = 0x1f5c5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f5c60: 0x24020007
    ctx->pc = 0x1f5c60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f5c64: 0xae23008c
    ctx->pc = 0x1f5c64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
    // 0x1f5c68: 0xa2220000
    ctx->pc = 0x1f5c68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5c6c: 0xa2200001
    ctx->pc = 0x1f5c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5c70: 0xa2200002
    ctx->pc = 0x1f5c70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5c74: 0xa2200003
    ctx->pc = 0x1f5c74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5c78: 0xa6200004
    ctx->pc = 0x1f5c78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5c7c: 0xa6200006
    ctx->pc = 0x1f5c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5c80: 0xa6200008
    ctx->pc = 0x1f5c80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5c84: 0xa620000a
    ctx->pc = 0x1f5c84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 0));
label_1f5c88:
    // 0x1f5c88: 0xc07d224
    ctx->pc = 0x1F5C88u;
    SET_GPR_U32(ctx, 31, 0x1F5C90u);
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C90u; }
    }
    if (ctx->pc != 0x1F5C90u) { return; }
    ctx->pc = 0x1F5C90u;
    // 0x1f5c90: 0x3c010036
    ctx->pc = 0x1f5c90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5c94: 0x8c23ec14
    ctx->pc = 0x1f5c94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294962196)));
    // 0x1f5c98: 0x1043000d
    ctx->pc = 0x1F5C98u;
    {
        const bool branch_taken_0x1f5c98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1F5C9Cu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 65535));
        if (branch_taken_0x1f5c98) {
            ctx->pc = 0x1F5CD0u;
            goto label_1f5cd0;
        }
    }
    ctx->pc = 0x1F5CA0u;
    // 0x1f5ca0: 0x2404ffff
    ctx->pc = 0x1f5ca0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f5ca4: 0x24030007
    ctx->pc = 0x1f5ca4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f5ca8: 0xae24008c
    ctx->pc = 0x1f5ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 4));
    // 0x1f5cac: 0xa2230000
    ctx->pc = 0x1f5cacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f5cb0: 0xa2200001
    ctx->pc = 0x1f5cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5cb4: 0xa2200002
    ctx->pc = 0x1f5cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5cb8: 0xa2200003
    ctx->pc = 0x1f5cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5cbc: 0xa6200004
    ctx->pc = 0x1f5cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5cc0: 0xa6200006
    ctx->pc = 0x1f5cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5cc4: 0xa6200008
    ctx->pc = 0x1f5cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5cc8: 0xa620000a
    ctx->pc = 0x1f5cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5ccc: 0x3203ffff
    ctx->pc = 0x1f5cccu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 65535));
label_1f5cd0:
    // 0x1f5cd0: 0x3c050036
    ctx->pc = 0x1f5cd0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)54 << 16));
    // 0x1f5cd4: 0x2404000a
    ctx->pc = 0x1f5cd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f5cd8: 0x33080
    ctx->pc = 0x1f5cd8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f5cdc: 0x24a5ebe4
    ctx->pc = 0x1f5cdcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294962148));
    // 0x1f5ce0: 0xa2240001
    ctx->pc = 0x1f5ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f5ce4: 0xa63821
    ctx->pc = 0x1f5ce4u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1f5ce8: 0x244802f2
    ctx->pc = 0x1f5ce8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 754));
    // 0x1f5cec: 0x8ce60000
    ctx->pc = 0x1f5cecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f5cf0: 0x106282b
    ctx->pc = 0x1f5cf0u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1f5cf4: 0x14a00016
    ctx->pc = 0x1F5CF4u;
    {
        const bool branch_taken_0x1f5cf4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F5CF8u;
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)754);
        if (branch_taken_0x1f5cf4) {
            ctx->pc = 0x1F5D50u;
            goto label_1f5d50;
        }
    }
    ctx->pc = 0x1F5CFCu;
    // 0x1f5cfc: 0x3c010036
    ctx->pc = 0x1f5cfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5d00: 0xc22023
    ctx->pc = 0x1f5d00u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1f5d04: 0xac20ec14
    ctx->pc = 0x1f5d04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962196), GPR_U32(ctx, 0));
    // 0x1f5d08: 0x3c010036
    ctx->pc = 0x1f5d08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5d0c: 0x9026ec10
    ctx->pc = 0x1f5d0cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294962192)));
    // 0x1f5d10: 0x3c010036
    ctx->pc = 0x1f5d10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5d14: 0x24c60001
    ctx->pc = 0x1f5d14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f5d18: 0x9425ebe0
    ctx->pc = 0x1f5d18u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294962144)));
    // 0x1f5d1c: 0x3c010036
    ctx->pc = 0x1f5d1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5d20: 0xa026ec10
    ctx->pc = 0x1f5d20u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294962192), (uint8_t)GPR_U32(ctx, 6));
    // 0x1f5d24: 0x3c010036
    ctx->pc = 0x1f5d24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5d28: 0x9026ec10
    ctx->pc = 0x1f5d28u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294962192)));
    // 0x1f5d2c: 0xc5082a
    ctx->pc = 0x1f5d2cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
    // 0x1f5d30: 0x10200004
    ctx->pc = 0x1F5D30u;
    {
        const bool branch_taken_0x1f5d30 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5D34u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
        if (branch_taken_0x1f5d30) {
            ctx->pc = 0x1F5D44u;
            goto label_1f5d44;
        }
    }
    ctx->pc = 0x1F5D38u;
    // 0x1f5d38: 0x28c50003
    ctx->pc = 0x1f5d38u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 6), 3));
    // 0x1f5d3c: 0x14a0001e
    ctx->pc = 0x1F5D3Cu;
    {
        const bool branch_taken_0x1f5d3c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f5d3c) {
            ctx->pc = 0x1F5DB8u;
            goto label_1f5db8;
        }
    }
    ctx->pc = 0x1F5D44u;
label_1f5d44:
    // 0x1f5d44: 0x24050012
    ctx->pc = 0x1f5d44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f5d48: 0x1000001b
    ctx->pc = 0x1F5D48u;
    {
        const bool branch_taken_0x1f5d48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5D4Cu;
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 5));
        if (branch_taken_0x1f5d48) {
            ctx->pc = 0x1F5DB8u;
            goto label_1f5db8;
        }
    }
    ctx->pc = 0x1F5D50u;
label_1f5d50:
    // 0x1f5d50: 0x2d052000
    ctx->pc = 0x1f5d50u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 8), 8192));
    // 0x1f5d54: 0x14a00017
    ctx->pc = 0x1F5D54u;
    {
        const bool branch_taken_0x1f5d54 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F5D58u;
        SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
        if (branch_taken_0x1f5d54) {
            ctx->pc = 0x1F5DB4u;
            goto label_1f5db4;
        }
    }
    ctx->pc = 0x1F5D5Cu;
    // 0x1f5d5c: 0x3c010036
    ctx->pc = 0x1f5d5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5d60: 0x24042000
    ctx->pc = 0x1f5d60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1f5d64: 0xac20ec14
    ctx->pc = 0x1f5d64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962196), GPR_U32(ctx, 0));
    // 0x1f5d68: 0x822023
    ctx->pc = 0x1f5d68u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f5d6c: 0x3c010036
    ctx->pc = 0x1f5d6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5d70: 0x9026ec10
    ctx->pc = 0x1f5d70u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294962192)));
    // 0x1f5d74: 0x3c010036
    ctx->pc = 0x1f5d74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5d78: 0x24c60001
    ctx->pc = 0x1f5d78u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f5d7c: 0x9425ebe0
    ctx->pc = 0x1f5d7cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294962144)));
    // 0x1f5d80: 0x3c010036
    ctx->pc = 0x1f5d80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5d84: 0xa026ec10
    ctx->pc = 0x1f5d84u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294962192), (uint8_t)GPR_U32(ctx, 6));
    // 0x1f5d88: 0x3c010036
    ctx->pc = 0x1f5d88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5d8c: 0x9026ec10
    ctx->pc = 0x1f5d8cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294962192)));
    // 0x1f5d90: 0xc5082a
    ctx->pc = 0x1f5d90u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
    // 0x1f5d94: 0x10200004
    ctx->pc = 0x1F5D94u;
    {
        const bool branch_taken_0x1f5d94 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5D98u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
        if (branch_taken_0x1f5d94) {
            ctx->pc = 0x1F5DA8u;
            goto label_1f5da8;
        }
    }
    ctx->pc = 0x1F5D9Cu;
    // 0x1f5d9c: 0x28c50003
    ctx->pc = 0x1f5d9cu;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 6), 3));
    // 0x1f5da0: 0x14a00005
    ctx->pc = 0x1F5DA0u;
    {
        const bool branch_taken_0x1f5da0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f5da0) {
            ctx->pc = 0x1F5DB8u;
            goto label_1f5db8;
        }
    }
    ctx->pc = 0x1F5DA8u;
label_1f5da8:
    // 0x1f5da8: 0x24050012
    ctx->pc = 0x1f5da8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f5dac: 0x10000002
    ctx->pc = 0x1F5DACu;
    {
        const bool branch_taken_0x1f5dac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5DB0u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 5));
        if (branch_taken_0x1f5dac) {
            ctx->pc = 0x1F5DB8u;
            goto label_1f5db8;
        }
    }
    ctx->pc = 0x1F5DB4u;
label_1f5db4:
    // 0x1f5db4: 0xac28ec14
    ctx->pc = 0x1f5db4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962196), GPR_U32(ctx, 8));
label_1f5db8:
    // 0x1f5db8: 0x8ce50000
    ctx->pc = 0x1f5db8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f5dbc: 0x10a00014
    ctx->pc = 0x1F5DBCu;
    {
        const bool branch_taken_0x1f5dbc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5DC0u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 13));
        if (branch_taken_0x1f5dbc) {
            ctx->pc = 0x1F5E10u;
            goto label_1f5e10;
        }
    }
    ctx->pc = 0x1F5DC4u;
    // 0x1f5dc4: 0x3086ffff
    ctx->pc = 0x1f5dc4u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1f5dc8: 0x3c030035
    ctx->pc = 0x1f5dc8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x1f5dcc: 0x220202d
    ctx->pc = 0x1f5dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5dd0: 0x24637ad0
    ctx->pc = 0x1f5dd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 31440));
    // 0x1f5dd4: 0x651821
    ctx->pc = 0x1f5dd4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f5dd8: 0xc07d244
    ctx->pc = 0x1F5DD8u;
    SET_GPR_U32(ctx, 31, 0x1F5DE0u);
    ctx->pc = 0x1F5DDCu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1F4910u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4910_0x1f4910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5DE0u; }
    }
    if (ctx->pc != 0x1F5DE0u) { return; }
    ctx->pc = 0x1F5DE0u;
    // 0x1f5de0: 0x441000b
    ctx->pc = 0x1F5DE0u;
    {
        const bool branch_taken_0x1f5de0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F5DE4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1f5de0) {
            ctx->pc = 0x1F5E10u;
            goto label_1f5e10;
        }
    }
    ctx->pc = 0x1F5DE8u;
    // 0x1f5de8: 0x24020007
    ctx->pc = 0x1f5de8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f5dec: 0xae23008c
    ctx->pc = 0x1f5decu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
    // 0x1f5df0: 0xa2220000
    ctx->pc = 0x1f5df0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5df4: 0xa2200001
    ctx->pc = 0x1f5df4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5df8: 0xa2200002
    ctx->pc = 0x1f5df8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5dfc: 0xa2200003
    ctx->pc = 0x1f5dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5e00: 0xa6200004
    ctx->pc = 0x1f5e00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5e04: 0xa6200006
    ctx->pc = 0x1f5e04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5e08: 0xa6200008
    ctx->pc = 0x1f5e08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5e0c: 0xa620000a
    ctx->pc = 0x1f5e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 0));
label_1f5e10:
    // 0x1f5e10: 0xdfbf0020
    ctx->pc = 0x1f5e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5e14: 0x102d
    ctx->pc = 0x1f5e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5e18: 0x7bb10010
    ctx->pc = 0x1f5e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5e1c: 0x7bb00000
    ctx->pc = 0x1f5e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5e20: 0x3e00008
    ctx->pc = 0x1F5E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5E24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F5C00u: goto label_1f5c00;
            case 0x1F5C08u: goto label_1f5c08;
            case 0x1F5C10u: goto label_1f5c10;
            case 0x1F5C88u: goto label_1f5c88;
            case 0x1F5CD0u: goto label_1f5cd0;
            case 0x1F5D44u: goto label_1f5d44;
            case 0x1F5D50u: goto label_1f5d50;
            case 0x1F5DA8u: goto label_1f5da8;
            case 0x1F5DB4u: goto label_1f5db4;
            case 0x1F5DB8u: goto label_1f5db8;
            case 0x1F5E10u: goto label_1f5e10;
            case 0x1F5E7Cu: goto label_1f5e7c;
            case 0x1F5EACu: goto label_1f5eac;
            case 0x1F5EDCu: goto label_1f5edc;
            case 0x1F5F5Cu: goto label_1f5f5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F5E28u;
    // 0x1f5e28: 0x0
    ctx->pc = 0x1f5e28u;
    // NOP
    // 0x1f5e2c: 0x0
    ctx->pc = 0x1f5e2cu;
    // NOP
    // 0x1f5e30: 0x27bdffd0
    ctx->pc = 0x1f5e30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f5e34: 0x3c010036
    ctx->pc = 0x1f5e34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5e38: 0xffbf0010
    ctx->pc = 0x1f5e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f5e3c: 0x7fb00000
    ctx->pc = 0x1f5e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f5e40: 0x8c22eaf0
    ctx->pc = 0x1f5e40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294961904)));
    // 0x1f5e44: 0x10400045
    ctx->pc = 0x1F5E44u;
    {
        const bool branch_taken_0x1f5e44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5E48u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f5e44) {
            ctx->pc = 0x1F5F5Cu;
            goto label_1f5f5c;
        }
    }
    ctx->pc = 0x1F5E4Cu;
    // 0x1f5e4c: 0xc07d224
    ctx->pc = 0x1F5E4Cu;
    SET_GPR_U32(ctx, 31, 0x1F5E54u);
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E54u; }
    }
    if (ctx->pc != 0x1F5E54u) { return; }
    ctx->pc = 0x1F5E54u;
    // 0x1f5e54: 0xafa2002c
    ctx->pc = 0x1f5e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1f5e58: 0x8fa2002c
    ctx->pc = 0x1f5e58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1f5e5c: 0x10400007
    ctx->pc = 0x1F5E5Cu;
    {
        const bool branch_taken_0x1f5e5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5E60u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f5e5c) {
            ctx->pc = 0x1F5E7Cu;
            goto label_1f5e7c;
        }
    }
    ctx->pc = 0x1F5E64u;
    // 0x1f5e64: 0x3c040023
    ctx->pc = 0x1f5e64u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x1f5e68: 0x27a5002c
    ctx->pc = 0x1f5e68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 44));
    // 0x1f5e6c: 0x24845f50
    ctx->pc = 0x1f5e6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24400));
    // 0x1f5e70: 0xc041eac
    ctx->pc = 0x1F5E70u;
    SET_GPR_U32(ctx, 31, 0x1F5E78u);
    ctx->pc = 0x1F5E74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E78u; }
    }
    if (ctx->pc != 0x1F5E78u) { return; }
    ctx->pc = 0x1F5E78u;
    // 0x1f5e78: 0x200202d
    ctx->pc = 0x1f5e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f5e7c:
    // 0x1f5e7c: 0xc07d224
    ctx->pc = 0x1F5E7Cu;
    SET_GPR_U32(ctx, 31, 0x1F5E84u);
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E84u; }
    }
    if (ctx->pc != 0x1F5E84u) { return; }
    ctx->pc = 0x1F5E84u;
    // 0x1f5e84: 0xafa2002c
    ctx->pc = 0x1f5e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1f5e88: 0x8fa2002c
    ctx->pc = 0x1f5e88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1f5e8c: 0x10400007
    ctx->pc = 0x1F5E8Cu;
    {
        const bool branch_taken_0x1f5e8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5E90u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f5e8c) {
            ctx->pc = 0x1F5EACu;
            goto label_1f5eac;
        }
    }
    ctx->pc = 0x1F5E94u;
    // 0x1f5e94: 0x3c040023
    ctx->pc = 0x1f5e94u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x1f5e98: 0x27a5002c
    ctx->pc = 0x1f5e98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 44));
    // 0x1f5e9c: 0x24845f60
    ctx->pc = 0x1f5e9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24416));
    // 0x1f5ea0: 0xc041eac
    ctx->pc = 0x1F5EA0u;
    SET_GPR_U32(ctx, 31, 0x1F5EA8u);
    ctx->pc = 0x1F5EA4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5EA8u; }
    }
    if (ctx->pc != 0x1F5EA8u) { return; }
    ctx->pc = 0x1F5EA8u;
    // 0x1f5ea8: 0x200202d
    ctx->pc = 0x1f5ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f5eac:
    // 0x1f5eac: 0xc07d224
    ctx->pc = 0x1F5EACu;
    SET_GPR_U32(ctx, 31, 0x1F5EB4u);
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5EB4u; }
    }
    if (ctx->pc != 0x1F5EB4u) { return; }
    ctx->pc = 0x1F5EB4u;
    // 0x1f5eb4: 0xafa2002c
    ctx->pc = 0x1f5eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1f5eb8: 0x8fa2002c
    ctx->pc = 0x1f5eb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1f5ebc: 0x10400007
    ctx->pc = 0x1F5EBCu;
    {
        const bool branch_taken_0x1f5ebc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5EC0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f5ebc) {
            ctx->pc = 0x1F5EDCu;
            goto label_1f5edc;
        }
    }
    ctx->pc = 0x1F5EC4u;
    // 0x1f5ec4: 0x3c040033
    ctx->pc = 0x1f5ec4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1f5ec8: 0x27a5002c
    ctx->pc = 0x1f5ec8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 44));
    // 0x1f5ecc: 0x2484af20
    ctx->pc = 0x1f5eccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946592));
    // 0x1f5ed0: 0xc041eac
    ctx->pc = 0x1F5ED0u;
    SET_GPR_U32(ctx, 31, 0x1F5ED8u);
    ctx->pc = 0x1F5ED4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5ED8u; }
    }
    if (ctx->pc != 0x1F5ED8u) { return; }
    ctx->pc = 0x1F5ED8u;
    // 0x1f5ed8: 0x200202d
    ctx->pc = 0x1f5ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f5edc:
    // 0x1f5edc: 0xc07d224
    ctx->pc = 0x1F5EDCu;
    SET_GPR_U32(ctx, 31, 0x1F5EE4u);
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5EE4u; }
    }
    if (ctx->pc != 0x1F5EE4u) { return; }
    ctx->pc = 0x1F5EE4u;
    // 0x1f5ee4: 0xc07d224
    ctx->pc = 0x1F5EE4u;
    SET_GPR_U32(ctx, 31, 0x1F5EECu);
    ctx->pc = 0x1F5EE8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5EECu; }
    }
    if (ctx->pc != 0x1F5EECu) { return; }
    ctx->pc = 0x1F5EECu;
    // 0x1f5eec: 0xc07d224
    ctx->pc = 0x1F5EECu;
    SET_GPR_U32(ctx, 31, 0x1F5EF4u);
    ctx->pc = 0x1F5EF0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5EF4u; }
    }
    if (ctx->pc != 0x1F5EF4u) { return; }
    ctx->pc = 0x1F5EF4u;
    // 0x1f5ef4: 0xc07d224
    ctx->pc = 0x1F5EF4u;
    SET_GPR_U32(ctx, 31, 0x1F5EFCu);
    ctx->pc = 0x1F5EF8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5EFCu; }
    }
    if (ctx->pc != 0x1F5EFCu) { return; }
    ctx->pc = 0x1F5EFCu;
    // 0x1f5efc: 0xc07d224
    ctx->pc = 0x1F5EFCu;
    SET_GPR_U32(ctx, 31, 0x1F5F04u);
    ctx->pc = 0x1F5F00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F04u; }
    }
    if (ctx->pc != 0x1F5F04u) { return; }
    ctx->pc = 0x1F5F04u;
    // 0x1f5f04: 0xc07d224
    ctx->pc = 0x1F5F04u;
    SET_GPR_U32(ctx, 31, 0x1F5F0Cu);
    ctx->pc = 0x1F5F08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F0Cu; }
    }
    if (ctx->pc != 0x1F5F0Cu) { return; }
    ctx->pc = 0x1F5F0Cu;
    // 0x1f5f0c: 0xc07d224
    ctx->pc = 0x1F5F0Cu;
    SET_GPR_U32(ctx, 31, 0x1F5F14u);
    ctx->pc = 0x1F5F10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F14u; }
    }
    if (ctx->pc != 0x1F5F14u) { return; }
    ctx->pc = 0x1F5F14u;
    // 0x1f5f14: 0xc07d224
    ctx->pc = 0x1F5F14u;
    SET_GPR_U32(ctx, 31, 0x1F5F1Cu);
    ctx->pc = 0x1F5F18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F1Cu; }
    }
    if (ctx->pc != 0x1F5F1Cu) { return; }
    ctx->pc = 0x1F5F1Cu;
    // 0x1f5f1c: 0xc07d224
    ctx->pc = 0x1F5F1Cu;
    SET_GPR_U32(ctx, 31, 0x1F5F24u);
    ctx->pc = 0x1F5F20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F24u; }
    }
    if (ctx->pc != 0x1F5F24u) { return; }
    ctx->pc = 0x1F5F24u;
    // 0x1f5f24: 0xc07d224
    ctx->pc = 0x1F5F24u;
    SET_GPR_U32(ctx, 31, 0x1F5F2Cu);
    ctx->pc = 0x1F5F28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F2Cu; }
    }
    if (ctx->pc != 0x1F5F2Cu) { return; }
    ctx->pc = 0x1F5F2Cu;
    // 0x1f5f2c: 0xc07d224
    ctx->pc = 0x1F5F2Cu;
    SET_GPR_U32(ctx, 31, 0x1F5F34u);
    ctx->pc = 0x1F5F30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F34u; }
    }
    if (ctx->pc != 0x1F5F34u) { return; }
    ctx->pc = 0x1F5F34u;
    // 0x1f5f34: 0xc07d224
    ctx->pc = 0x1F5F34u;
    SET_GPR_U32(ctx, 31, 0x1F5F3Cu);
    ctx->pc = 0x1F5F38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F3Cu; }
    }
    if (ctx->pc != 0x1F5F3Cu) { return; }
    ctx->pc = 0x1F5F3Cu;
    // 0x1f5f3c: 0xc07d224
    ctx->pc = 0x1F5F3Cu;
    SET_GPR_U32(ctx, 31, 0x1F5F44u);
    ctx->pc = 0x1F5F40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F44u; }
    }
    if (ctx->pc != 0x1F5F44u) { return; }
    ctx->pc = 0x1F5F44u;
    // 0x1f5f44: 0xc07d224
    ctx->pc = 0x1F5F44u;
    SET_GPR_U32(ctx, 31, 0x1F5F4Cu);
    ctx->pc = 0x1F5F48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F4Cu; }
    }
    if (ctx->pc != 0x1F5F4Cu) { return; }
    ctx->pc = 0x1F5F4Cu;
    // 0x1f5f4c: 0xafa2002c
    ctx->pc = 0x1f5f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1f5f50: 0x3c01008a
    ctx->pc = 0x1f5f50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)138 << 16));
    // 0x1f5f54: 0x8fa2002c
    ctx->pc = 0x1f5f54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1f5f58: 0xac226508
    ctx->pc = 0x1f5f58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 25864), GPR_U32(ctx, 2));
label_1f5f5c:
    // 0x1f5f5c: 0xdfbf0010
    ctx->pc = 0x1f5f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5f60: 0x102d
    ctx->pc = 0x1f5f60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f64: 0x7bb00000
    ctx->pc = 0x1f5f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5f68: 0x3e00008
    ctx->pc = 0x1F5F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5F6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F5C00u: goto label_1f5c00;
            case 0x1F5C08u: goto label_1f5c08;
            case 0x1F5C10u: goto label_1f5c10;
            case 0x1F5C88u: goto label_1f5c88;
            case 0x1F5CD0u: goto label_1f5cd0;
            case 0x1F5D44u: goto label_1f5d44;
            case 0x1F5D50u: goto label_1f5d50;
            case 0x1F5DA8u: goto label_1f5da8;
            case 0x1F5DB4u: goto label_1f5db4;
            case 0x1F5DB8u: goto label_1f5db8;
            case 0x1F5E10u: goto label_1f5e10;
            case 0x1F5E7Cu: goto label_1f5e7c;
            case 0x1F5EACu: goto label_1f5eac;
            case 0x1F5EDCu: goto label_1f5edc;
            case 0x1F5F5Cu: goto label_1f5f5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F5F70u;
}
