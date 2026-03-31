#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00118CF8
// Address: 0x118cf8 - 0x118e78
void sub_00118CF8_0x118cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x118cf8u;

    // 0x118cf8: 0x27bdff60
    ctx->pc = 0x118cf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x118cfc: 0xffb40080
    ctx->pc = 0x118cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x118d00: 0xffb20060
    ctx->pc = 0x118d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x118d04: 0x3c140026
    ctx->pc = 0x118d04u;
    SET_GPR_U32(ctx, 20, ((uint32_t)38 << 16));
    // 0x118d08: 0xffb00040
    ctx->pc = 0x118d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x118d0c: 0x2692ca40
    ctx->pc = 0x118d0cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 20), 4294953536));
    // 0x118d10: 0xffbf0090
    ctx->pc = 0x118d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x118d14: 0xffb30070
    ctx->pc = 0x118d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x118d18: 0xc04607e
    ctx->pc = 0x118D18u;
    SET_GPR_U32(ctx, 31, 0x118D20u);
    ctx->pc = 0x118D1Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->pc = 0x1181F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001181F8_0x1181f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D20u; }
    }
    if (ctx->pc != 0x118D20u) { return; }
    ctx->pc = 0x118D20u;
    // 0x118d20: 0x40802d
    ctx->pc = 0x118d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d24: 0xc04619c
    ctx->pc = 0x118D24u;
    SET_GPR_U32(ctx, 31, 0x118D2Cu);
    ctx->pc = 0x118D28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x118670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118670_0x118670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D2Cu; }
    }
    if (ctx->pc != 0x118D2Cu) { return; }
    ctx->pc = 0x118D2Cu;
    // 0x118d2c: 0x3c030021
    ctx->pc = 0x118d2cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x118d30: 0x8c629ddc
    ctx->pc = 0x118d30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294942172)));
    // 0x118d34: 0x14400005
    ctx->pc = 0x118D34u;
    {
        const bool branch_taken_0x118d34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x118d34) {
            ctx->pc = 0x118D4Cu;
            goto label_118d4c;
        }
    }
    ctx->pc = 0x118D3Cu;
    // 0x118d3c: 0xc0461a8
    ctx->pc = 0x118D3Cu;
    SET_GPR_U32(ctx, 31, 0x118D44u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D44u; }
    }
    if (ctx->pc != 0x118D44u) { return; }
    ctx->pc = 0x118D44u;
    // 0x118d44: 0x10000043
    ctx->pc = 0x118D44u;
    {
        const bool branch_taken_0x118d44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x118D48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x118d44) {
            ctx->pc = 0x118E54u;
            goto label_118e54;
        }
    }
    ctx->pc = 0x118D4Cu;
label_118d4c:
    // 0x118d4c: 0x12000004
    ctx->pc = 0x118D4Cu;
    {
        const bool branch_taken_0x118d4c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x118d4c) {
            ctx->pc = 0x118D60u;
            goto label_118d60;
        }
    }
    ctx->pc = 0x118D54u;
    // 0x118d54: 0x8e020004
    ctx->pc = 0x118d54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x118d58: 0x54400005
    ctx->pc = 0x118D58u;
    {
        const bool branch_taken_0x118d58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x118d58) {
            ctx->pc = 0x118D5Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x118D70u;
            goto label_118d70;
        }
    }
    ctx->pc = 0x118D60u;
label_118d60:
    // 0x118d60: 0xc0461a8
    ctx->pc = 0x118D60u;
    SET_GPR_U32(ctx, 31, 0x118D68u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118D68u; }
    }
    if (ctx->pc != 0x118D68u) { return; }
    ctx->pc = 0x118D68u;
    // 0x118d68: 0x1000003a
    ctx->pc = 0x118D68u;
    {
        const bool branch_taken_0x118d68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x118D6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967287));
        if (branch_taken_0x118d68) {
            ctx->pc = 0x118E54u;
            goto label_118e54;
        }
    }
    ctx->pc = 0x118D70u;
label_118d70:
    // 0x118d70: 0x3c020026
    ctx->pc = 0x118d70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x118d74: 0x2442df40
    ctx->pc = 0x118d74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958912));
    // 0x118d78: 0x24040001
    ctx->pc = 0x118d78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x118d7c: 0xae43000c
    ctx->pc = 0x118d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x118d80: 0x2021023
    ctx->pc = 0x118d80u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x118d84: 0xafa40014
    ctx->pc = 0x118d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x118d88: 0x21103
    ctx->pc = 0x118d88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x118d8c: 0xae420010
    ctx->pc = 0x118d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x118d90: 0x27a40010
    ctx->pc = 0x118d90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x118d94: 0xafa00018
    ctx->pc = 0x118d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x118d98: 0xc045188
    ctx->pc = 0x118D98u;
    SET_GPR_U32(ctx, 31, 0x118DA0u);
    ctx->pc = 0x118D9Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118DA0u; }
    }
    if (ctx->pc != 0x118DA0u) { return; }
    ctx->pc = 0x118DA0u;
    // 0x118da0: 0x40882d
    ctx->pc = 0x118da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118da4: 0x27a30030
    ctx->pc = 0x118da4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 48));
    // 0x118da8: 0x3c020026
    ctx->pc = 0x118da8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x118dac: 0xae91ca40
    ctx->pc = 0x118dacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294953536), GPR_U32(ctx, 17));
    // 0x118db0: 0x2453d680
    ctx->pc = 0x118db0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x118db4: 0x3c040026
    ctx->pc = 0x118db4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x118db8: 0x24020004
    ctx->pc = 0x118db8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x118dbc: 0xae430004
    ctx->pc = 0x118dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x118dc0: 0xae420008
    ctx->pc = 0x118dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x118dc4: 0x2484e140
    ctx->pc = 0x118dc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959424));
    // 0x118dc8: 0x240382d
    ctx->pc = 0x118dc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118dcc: 0x24050001
    ctx->pc = 0x118dccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x118dd0: 0xafa00000
    ctx->pc = 0x118dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x118dd4: 0x302d
    ctx->pc = 0x118dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118dd8: 0x24080014
    ctx->pc = 0x118dd8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 20));
    // 0x118ddc: 0x260482d
    ctx->pc = 0x118ddcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118de0: 0x240a0004
    ctx->pc = 0x118de0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x118de4: 0xc045e7a
    ctx->pc = 0x118DE4u;
    SET_GPR_U32(ctx, 31, 0x118DECu);
    ctx->pc = 0x118DE8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118DECu; }
    }
    if (ctx->pc != 0x118DECu) { return; }
    ctx->pc = 0x118DECu;
    // 0x118dec: 0x4430007
    ctx->pc = 0x118DECu;
    {
        const bool branch_taken_0x118dec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x118dec) {
            ctx->pc = 0x118DF0u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->pc = 0x118E0Cu;
            goto label_118e0c;
        }
    }
    ctx->pc = 0x118DF4u;
    // 0x118df4: 0xc04518c
    ctx->pc = 0x118DF4u;
    SET_GPR_U32(ctx, 31, 0x118DFCu);
    ctx->pc = 0x118DF8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118DFCu; }
    }
    if (ctx->pc != 0x118DFCu) { return; }
    ctx->pc = 0x118DFCu;
    // 0x118dfc: 0xc0461a8
    ctx->pc = 0x118DFCu;
    SET_GPR_U32(ctx, 31, 0x118E04u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118E04u; }
    }
    if (ctx->pc != 0x118E04u) { return; }
    ctx->pc = 0x118E04u;
    // 0x118e04: 0x10000013
    ctx->pc = 0x118E04u;
    {
        const bool branch_taken_0x118e04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x118E08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x118e04) {
            ctx->pc = 0x118E54u;
            goto label_118e54;
        }
    }
    ctx->pc = 0x118E0Cu;
label_118e0c:
    // 0x118e0c: 0x3c022000
    ctx->pc = 0x118e0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x118e10: 0x2621025
    ctx->pc = 0x118e10u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x118e14: 0xc0461a8
    ctx->pc = 0x118E14u;
    SET_GPR_U32(ctx, 31, 0x118E1Cu);
    ctx->pc = 0x118E18u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118E1Cu; }
    }
    if (ctx->pc != 0x118E1Cu) { return; }
    ctx->pc = 0x118E1Cu;
    // 0x118e1c: 0x16000005
    ctx->pc = 0x118E1Cu;
    {
        const bool branch_taken_0x118e1c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x118e1c) {
            ctx->pc = 0x118E34u;
            goto label_118e34;
        }
    }
    ctx->pc = 0x118E24u;
    // 0x118e24: 0xc04518c
    ctx->pc = 0x118E24u;
    SET_GPR_U32(ctx, 31, 0x118E2Cu);
    ctx->pc = 0x118E28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118E2Cu; }
    }
    if (ctx->pc != 0x118E2Cu) { return; }
    ctx->pc = 0x118E2Cu;
    // 0x118e2c: 0x10000009
    ctx->pc = 0x118E2Cu;
    {
        const bool branch_taken_0x118e2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x118E30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x118e2c) {
            ctx->pc = 0x118E54u;
            goto label_118e54;
        }
    }
    ctx->pc = 0x118E34u;
label_118e34:
    // 0x118e34: 0xc045198
    ctx->pc = 0x118E34u;
    SET_GPR_U32(ctx, 31, 0x118E3Cu);
    ctx->pc = 0x118E38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118E3Cu; }
    }
    if (ctx->pc != 0x118E3Cu) { return; }
    ctx->pc = 0x118E3Cu;
    // 0x118e3c: 0xc04518c
    ctx->pc = 0x118E3Cu;
    SET_GPR_U32(ctx, 31, 0x118E44u);
    ctx->pc = 0x118E40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118E44u; }
    }
    if (ctx->pc != 0x118E44u) { return; }
    ctx->pc = 0x118E44u;
    // 0x118e44: 0x8fa20030
    ctx->pc = 0x118e44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118e48: 0x2403ffff
    ctx->pc = 0x118e48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118e4c: 0x62182a
    ctx->pc = 0x118e4cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x118e50: 0x3100b
    ctx->pc = 0x118e50u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
label_118e54:
    // 0x118e54: 0xdfbf0090
    ctx->pc = 0x118e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x118e58: 0xdfb40080
    ctx->pc = 0x118e58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x118e5c: 0xdfb30070
    ctx->pc = 0x118e5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x118e60: 0xdfb20060
    ctx->pc = 0x118e60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x118e64: 0xdfb10050
    ctx->pc = 0x118e64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118e68: 0xdfb00040
    ctx->pc = 0x118e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118e6c: 0x3e00008
    ctx->pc = 0x118E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118E70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118D4Cu: goto label_118d4c;
            case 0x118D60u: goto label_118d60;
            case 0x118D70u: goto label_118d70;
            case 0x118E0Cu: goto label_118e0c;
            case 0x118E34u: goto label_118e34;
            case 0x118E54u: goto label_118e54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x118E74u;
    // 0x118e74: 0x0
    ctx->pc = 0x118e74u;
    // NOP
}
