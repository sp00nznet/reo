#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010F990
// Address: 0x10f990 - 0x10faa0
void sub_0010F990_0x10f990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10f990u;

    // 0x10f990: 0x27bdfff0
    ctx->pc = 0x10f990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10f994: 0xffb00000
    ctx->pc = 0x10f994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10f998: 0x80802d
    ctx->pc = 0x10f998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f99c: 0xffbf0008
    ctx->pc = 0x10f99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10f9a0: 0x8e030054
    ctx->pc = 0x10f9a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x10f9a4: 0x54600006
    ctx->pc = 0x10F9A4u;
    {
        const bool branch_taken_0x10f9a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x10f9a4) {
            ctx->pc = 0x10F9A8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->pc = 0x10F9C0u;
            goto label_10f9c0;
        }
    }
    ctx->pc = 0x10F9ACu;
    // 0x10f9ac: 0x3c020021
    ctx->pc = 0x10f9acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x10f9b0: 0x8c4397f0
    ctx->pc = 0x10f9b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294940656)));
    // 0x10f9b4: 0xae030054
    ctx->pc = 0x10f9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x10f9b8: 0x8c620038
    ctx->pc = 0x10f9b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x10f9bc: 0x0
    ctx->pc = 0x10f9bcu;
    // NOP
label_10f9c0:
    // 0x10f9c0: 0x54400004
    ctx->pc = 0x10F9C0u;
    {
        const bool branch_taken_0x10f9c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10f9c0) {
            ctx->pc = 0x10F9C4u;
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x10F9D4u;
            goto label_10f9d4;
        }
    }
    ctx->pc = 0x10F9C8u;
    // 0x10f9c8: 0xc041544
    ctx->pc = 0x10F9C8u;
    SET_GPR_U32(ctx, 31, 0x10F9D0u);
    ctx->pc = 0x10F9CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x105510u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00105510_0x105510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F9D0u; }
    }
    if (ctx->pc != 0x10F9D0u) { return; }
    ctx->pc = 0x10F9D0u;
    // 0x10f9d0: 0x9604000c
    ctx->pc = 0x10f9d0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_10f9d4:
    // 0x10f9d4: 0x30820008
    ctx->pc = 0x10f9d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 8));
    // 0x10f9d8: 0x54400019
    ctx->pc = 0x10F9D8u;
    {
        const bool branch_taken_0x10f9d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10f9d8) {
            ctx->pc = 0x10F9DCu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x10FA40u;
            goto label_10fa40;
        }
    }
    ctx->pc = 0x10F9E0u;
    // 0x10f9e0: 0x30830010
    ctx->pc = 0x10f9e0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 16));
    // 0x10f9e4: 0x10600029
    ctx->pc = 0x10F9E4u;
    {
        const bool branch_taken_0x10f9e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x10F9E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x10f9e4) {
            ctx->pc = 0x10FA8Cu;
            goto label_10fa8c;
        }
    }
    ctx->pc = 0x10F9ECu;
    // 0x10f9ec: 0x30820004
    ctx->pc = 0x10f9ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 4));
    // 0x10f9f0: 0x50400011
    ctx->pc = 0x10F9F0u;
    {
        const bool branch_taken_0x10f9f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10f9f0) {
            ctx->pc = 0x10F9F4u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x10FA38u;
            goto label_10fa38;
        }
    }
    ctx->pc = 0x10F9F8u;
    // 0x10f9f8: 0x8e050030
    ctx->pc = 0x10f9f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x10f9fc: 0x10a00007
    ctx->pc = 0x10F9FCu;
    {
        const bool branch_taken_0x10f9fc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x10FA00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 64));
        if (branch_taken_0x10f9fc) {
            ctx->pc = 0x10FA1Cu;
            goto label_10fa1c;
        }
    }
    ctx->pc = 0x10FA04u;
    // 0x10fa04: 0x50a20005
    ctx->pc = 0x10FA04u;
    {
        const bool branch_taken_0x10fa04 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x10fa04) {
            ctx->pc = 0x10FA08u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->pc = 0x10FA1Cu;
            goto label_10fa1c;
        }
    }
    ctx->pc = 0x10FA0Cu;
    // 0x10fa0c: 0xc041636
    ctx->pc = 0x10FA0Cu;
    SET_GPR_U32(ctx, 31, 0x10FA14u);
    ctx->pc = 0x10FA10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x1058D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001058D8_0x1058d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FA14u; }
    }
    if (ctx->pc != 0x10FA14u) { return; }
    ctx->pc = 0x10FA14u;
    // 0x10fa14: 0x9604000c
    ctx->pc = 0x10fa14u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10fa18: 0xae000030
    ctx->pc = 0x10fa18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_10fa1c:
    // 0x10fa1c: 0x2402ffdb
    ctx->pc = 0x10fa1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967259));
    // 0x10fa20: 0x8e050010
    ctx->pc = 0x10fa20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10fa24: 0x821024
    ctx->pc = 0x10fa24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10fa28: 0xae000004
    ctx->pc = 0x10fa28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x10fa2c: 0xa602000c
    ctx->pc = 0x10fa2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x10fa30: 0x40202d
    ctx->pc = 0x10fa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa34: 0xae050000
    ctx->pc = 0x10fa34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_10fa38:
    // 0x10fa38: 0x34820008
    ctx->pc = 0x10fa38u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), 8));
    // 0x10fa3c: 0xa602000c
    ctx->pc = 0x10fa3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_10fa40:
    // 0x10fa40: 0x54a00004
    ctx->pc = 0x10FA40u;
    {
        const bool branch_taken_0x10fa40 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x10fa40) {
            ctx->pc = 0x10FA44u;
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x10FA54u;
            goto label_10fa54;
        }
    }
    ctx->pc = 0x10FA48u;
    // 0x10fa48: 0xc041ad6
    ctx->pc = 0x10FA48u;
    SET_GPR_U32(ctx, 31, 0x10FA50u);
    ctx->pc = 0x10FA4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x106B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00106B58_0x106b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FA50u; }
    }
    if (ctx->pc != 0x10FA50u) { return; }
    ctx->pc = 0x10FA50u;
    // 0x10fa50: 0x9603000c
    ctx->pc = 0x10fa50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_10fa54:
    // 0x10fa54: 0x30620001
    ctx->pc = 0x10fa54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x10fa58: 0x10400007
    ctx->pc = 0x10FA58u;
    {
        const bool branch_taken_0x10fa58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10FA5Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x10fa58) {
            ctx->pc = 0x10FA78u;
            goto label_10fa78;
        }
    }
    ctx->pc = 0x10FA60u;
    // 0x10fa60: 0x8e020014
    ctx->pc = 0x10fa60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x10fa64: 0xae000008
    ctx->pc = 0x10fa64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x10fa68: 0x21023
    ctx->pc = 0x10fa68u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x10fa6c: 0x10000006
    ctx->pc = 0x10FA6Cu;
    {
        const bool branch_taken_0x10fa6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10FA70u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x10fa6c) {
            ctx->pc = 0x10FA88u;
            goto label_10fa88;
        }
    }
    ctx->pc = 0x10FA74u;
    // 0x10fa74: 0x0
    ctx->pc = 0x10fa74u;
    // NOP
label_10fa78:
    // 0x10fa78: 0x14400002
    ctx->pc = 0x10FA78u;
    {
        const bool branch_taken_0x10fa78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10FA7Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10fa78) {
            ctx->pc = 0x10FA84u;
            goto label_10fa84;
        }
    }
    ctx->pc = 0x10FA80u;
    // 0x10fa80: 0x8e030014
    ctx->pc = 0x10fa80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_10fa84:
    // 0x10fa84: 0xae030008
    ctx->pc = 0x10fa84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_10fa88:
    // 0x10fa88: 0x102d
    ctx->pc = 0x10fa88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fa8c:
    // 0x10fa8c: 0xdfb00000
    ctx->pc = 0x10fa8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fa90: 0xdfbf0008
    ctx->pc = 0x10fa90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10fa94: 0x3e00008
    ctx->pc = 0x10FA94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FA98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10F9C0u: goto label_10f9c0;
            case 0x10F9D4u: goto label_10f9d4;
            case 0x10FA1Cu: goto label_10fa1c;
            case 0x10FA38u: goto label_10fa38;
            case 0x10FA40u: goto label_10fa40;
            case 0x10FA54u: goto label_10fa54;
            case 0x10FA78u: goto label_10fa78;
            case 0x10FA84u: goto label_10fa84;
            case 0x10FA88u: goto label_10fa88;
            case 0x10FA8Cu: goto label_10fa8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10FA9Cu;
    // 0x10fa9c: 0x0
    ctx->pc = 0x10fa9cu;
    // NOP
}
