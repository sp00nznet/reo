#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C3950
// Address: 0x1c3950 - 0x1c3c40
void sub_001C3950_0x1c3950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c3950u;

    // 0x1c3950: 0x27bdffe0
    ctx->pc = 0x1c3950u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c3954: 0x24020063
    ctx->pc = 0x1c3954u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
    // 0x1c3958: 0xffbf0010
    ctx->pc = 0x1c3958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c395c: 0x7fb00000
    ctx->pc = 0x1c395cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c3960: 0x80830002
    ctx->pc = 0x1c3960u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c3964: 0x106200a1
    ctx->pc = 0x1C3964u;
    {
        const bool branch_taken_0x1c3964 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C3968u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c3964) {
            ctx->pc = 0x1C3BECu;
            goto label_1c3bec;
        }
    }
    ctx->pc = 0x1C396Cu;
    // 0x1c396c: 0x24020002
    ctx->pc = 0x1c396cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3970: 0x10620052
    ctx->pc = 0x1C3970u;
    {
        const bool branch_taken_0x1c3970 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C3974u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c3970) {
            ctx->pc = 0x1C3ABCu;
            goto label_1c3abc;
        }
    }
    ctx->pc = 0x1C3978u;
    // 0x1c3978: 0x1066000e
    ctx->pc = 0x1C3978u;
    {
        const bool branch_taken_0x1c3978 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 6));
        if (branch_taken_0x1c3978) {
            ctx->pc = 0x1C39B4u;
            goto label_1c39b4;
        }
    }
    ctx->pc = 0x1C3980u;
    // 0x1c3980: 0x10600003
    ctx->pc = 0x1C3980u;
    {
        const bool branch_taken_0x1c3980 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c3980) {
            ctx->pc = 0x1C3990u;
            goto label_1c3990;
        }
    }
    ctx->pc = 0x1C3988u;
    // 0x1c3988: 0x100000a1
    ctx->pc = 0x1C3988u;
    {
        const bool branch_taken_0x1c3988 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C398Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c3988) {
            ctx->pc = 0x1C3C10u;
            goto label_1c3c10;
        }
    }
    ctx->pc = 0x1C3990u;
label_1c3990:
    // 0x1c3990: 0x24630001
    ctx->pc = 0x1c3990u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c3994: 0x24020008
    ctx->pc = 0x1c3994u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c3998: 0xa2030002
    ctx->pc = 0x1c3998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c399c: 0xae02002c
    ctx->pc = 0x1c399cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1c39a0: 0x8e0500e8
    ctx->pc = 0x1c39a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1c39a4: 0xc0701c4
    ctx->pc = 0x1C39A4u;
    SET_GPR_U32(ctx, 31, 0x1C39ACu);
    ctx->pc = 0x1C39A8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1C0710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0710_0x1c0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C39ACu; }
    }
    if (ctx->pc != 0x1C39ACu) { return; }
    ctx->pc = 0x1C39ACu;
    // 0x1c39ac: 0x2402003c
    ctx->pc = 0x1c39acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c39b0: 0xae020010
    ctx->pc = 0x1c39b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1c39b4:
    // 0x1c39b4: 0xc070498
    ctx->pc = 0x1C39B4u;
    SET_GPR_U32(ctx, 31, 0x1C39BCu);
    ctx->pc = 0x1C1260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1260_0x1c1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C39BCu; }
    }
    if (ctx->pc != 0x1C39BCu) { return; }
    ctx->pc = 0x1C39BCu;
    // 0x1c39bc: 0x2403ffff
    ctx->pc = 0x1c39bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c39c0: 0x10430092
    ctx->pc = 0x1C39C0u;
    {
        const bool branch_taken_0x1c39c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c39c0) {
            ctx->pc = 0x1C3C0Cu;
            goto label_1c3c0c;
        }
    }
    ctx->pc = 0x1C39C8u;
    // 0x1c39c8: 0x1040001f
    ctx->pc = 0x1C39C8u;
    {
        const bool branch_taken_0x1c39c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C39CCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967045));
        if (branch_taken_0x1c39c8) {
            ctx->pc = 0x1C3A48u;
            goto label_1c3a48;
        }
    }
    ctx->pc = 0x1C39D0u;
    // 0x1c39d0: 0x10430016
    ctx->pc = 0x1C39D0u;
    {
        const bool branch_taken_0x1c39d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c39d0) {
            ctx->pc = 0x1C3A2Cu;
            goto label_1c3a2c;
        }
    }
    ctx->pc = 0x1C39D8u;
    // 0x1c39d8: 0x2403ff00
    ctx->pc = 0x1c39d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1c39dc: 0x1043000c
    ctx->pc = 0x1C39DCu;
    {
        const bool branch_taken_0x1c39dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C39E0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967042));
        if (branch_taken_0x1c39dc) {
            ctx->pc = 0x1C3A10u;
            goto label_1c3a10;
        }
    }
    ctx->pc = 0x1C39E4u;
    // 0x1c39e4: 0x10430006
    ctx->pc = 0x1C39E4u;
    {
        const bool branch_taken_0x1c39e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c39e4) {
            ctx->pc = 0x1C3A00u;
            goto label_1c3a00;
        }
    }
    ctx->pc = 0x1C39ECu;
    // 0x1c39ec: 0x2403ff03
    ctx->pc = 0x1c39ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967043));
    // 0x1c39f0: 0x10430004
    ctx->pc = 0x1C39F0u;
    {
        const bool branch_taken_0x1c39f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C39F4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x1c39f0) {
            ctx->pc = 0x1C3A04u;
            goto label_1c3a04;
        }
    }
    ctx->pc = 0x1C39F8u;
    // 0x1c39f8: 0x1000001e
    ctx->pc = 0x1C39F8u;
    {
        const bool branch_taken_0x1c39f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C39FCu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
        if (branch_taken_0x1c39f8) {
            ctx->pc = 0x1C3A74u;
            goto label_1c3a74;
        }
    }
    ctx->pc = 0x1C3A00u;
label_1c3a00:
    // 0x1c3a00: 0x24030007
    ctx->pc = 0x1c3a00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
label_1c3a04:
    // 0x1c3a04: 0x102d
    ctx->pc = 0x1c3a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a08: 0x10000086
    ctx->pc = 0x1C3A08u;
    {
        const bool branch_taken_0x1c3a08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3A0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        if (branch_taken_0x1c3a08) {
            ctx->pc = 0x1C3C24u;
            goto label_1c3c24;
        }
    }
    ctx->pc = 0x1C3A10u;
label_1c3a10:
    // 0x1c3a10: 0x24020009
    ctx->pc = 0x1c3a10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c3a14: 0x24030063
    ctx->pc = 0x1c3a14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 99));
    // 0x1c3a18: 0xae02002c
    ctx->pc = 0x1c3a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1c3a1c: 0x24020001
    ctx->pc = 0x1c3a1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3a20: 0xa2030002
    ctx->pc = 0x1c3a20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c3a24: 0x10000079
    ctx->pc = 0x1C3A24u;
    {
        const bool branch_taken_0x1c3a24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3A28u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        if (branch_taken_0x1c3a24) {
            ctx->pc = 0x1C3C0Cu;
            goto label_1c3c0c;
        }
    }
    ctx->pc = 0x1C3A2Cu;
label_1c3a2c:
    // 0x1c3a2c: 0x24020009
    ctx->pc = 0x1c3a2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c3a30: 0x24030063
    ctx->pc = 0x1c3a30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 99));
    // 0x1c3a34: 0xae02002c
    ctx->pc = 0x1c3a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1c3a38: 0x24020001
    ctx->pc = 0x1c3a38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3a3c: 0xa2030002
    ctx->pc = 0x1c3a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c3a40: 0x10000072
    ctx->pc = 0x1C3A40u;
    {
        const bool branch_taken_0x1c3a40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3A44u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        if (branch_taken_0x1c3a40) {
            ctx->pc = 0x1C3C0Cu;
            goto label_1c3c0c;
        }
    }
    ctx->pc = 0x1C3A48u;
label_1c3a48:
    // 0x1c3a48: 0x8e0500ec
    ctx->pc = 0x1c3a48u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x1c3a4c: 0xc070138
    ctx->pc = 0x1C3A4Cu;
    SET_GPR_U32(ctx, 31, 0x1C3A54u);
    ctx->pc = 0x1C3A50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1C04E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C04E0_0x1c04e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3A54u; }
    }
    if (ctx->pc != 0x1C3A54u) { return; }
    ctx->pc = 0x1C3A54u;
    // 0x1c3a54: 0x82030002
    ctx->pc = 0x1c3a54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1c3a58: 0x24020026
    ctx->pc = 0x1c3a58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 38));
    // 0x1c3a5c: 0x24630001
    ctx->pc = 0x1c3a5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c3a60: 0xa2030002
    ctx->pc = 0x1c3a60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c3a64: 0xc0704a4
    ctx->pc = 0x1C3A64u;
    SET_GPR_U32(ctx, 31, 0x1C3A6Cu);
    ctx->pc = 0x1C3A68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x1C1290u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1290_0x1c1290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3A6Cu; }
    }
    if (ctx->pc != 0x1C3A6Cu) { return; }
    ctx->pc = 0x1C3A6Cu;
    // 0x1c3a6c: 0x10000067
    ctx->pc = 0x1C3A6Cu;
    {
        const bool branch_taken_0x1c3a6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c3a6c) {
            ctx->pc = 0x1C3C0Cu;
            goto label_1c3c0c;
        }
    }
    ctx->pc = 0x1C3A74u;
label_1c3a74:
    // 0x1c3a74: 0xae030034
    ctx->pc = 0x1c3a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x1c3a78: 0x24020003
    ctx->pc = 0x1c3a78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3a7c: 0x8e030034
    ctx->pc = 0x1c3a7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c3a80: 0x1062000c
    ctx->pc = 0x1C3A80u;
    {
        const bool branch_taken_0x1c3a80 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C3A84u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a80) {
            ctx->pc = 0x1C3AB4u;
            goto label_1c3ab4;
        }
    }
    ctx->pc = 0x1C3A88u;
    // 0x1c3a88: 0x24020004
    ctx->pc = 0x1c3a88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3a8c: 0x10620008
    ctx->pc = 0x1C3A8Cu;
    {
        const bool branch_taken_0x1c3a8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C3A90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1c3a8c) {
            ctx->pc = 0x1C3AB0u;
            goto label_1c3ab0;
        }
    }
    ctx->pc = 0x1C3A94u;
    // 0x1c3a94: 0x10620006
    ctx->pc = 0x1C3A94u;
    {
        const bool branch_taken_0x1c3a94 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1c3a94) {
            ctx->pc = 0x1C3AB0u;
            goto label_1c3ab0;
        }
    }
    ctx->pc = 0x1C3A9Cu;
    // 0x1c3a9c: 0x24020001
    ctx->pc = 0x1c3a9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3aa0: 0x10620003
    ctx->pc = 0x1C3AA0u;
    {
        const bool branch_taken_0x1c3aa0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1c3aa0) {
            ctx->pc = 0x1C3AB0u;
            goto label_1c3ab0;
        }
    }
    ctx->pc = 0x1C3AA8u;
    // 0x1c3aa8: 0x10000058
    ctx->pc = 0x1C3AA8u;
    {
        const bool branch_taken_0x1c3aa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c3aa8) {
            ctx->pc = 0x1C3C0Cu;
            goto label_1c3c0c;
        }
    }
    ctx->pc = 0x1C3AB0u;
label_1c3ab0:
    // 0x1c3ab0: 0x102d
    ctx->pc = 0x1c3ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3ab4:
    // 0x1c3ab4: 0x1000005c
    ctx->pc = 0x1C3AB4u;
    {
        const bool branch_taken_0x1c3ab4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3AB8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1c3ab4) {
            ctx->pc = 0x1C3C28u;
            goto label_1c3c28;
        }
    }
    ctx->pc = 0x1C3ABCu;
label_1c3abc:
    // 0x1c3abc: 0xc070498
    ctx->pc = 0x1C3ABCu;
    SET_GPR_U32(ctx, 31, 0x1C3AC4u);
    ctx->pc = 0x1C1260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1260_0x1c1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3AC4u; }
    }
    if (ctx->pc != 0x1C3AC4u) { return; }
    ctx->pc = 0x1C3AC4u;
    // 0x1c3ac4: 0x2403ffff
    ctx->pc = 0x1c3ac4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c3ac8: 0x10430044
    ctx->pc = 0x1C3AC8u;
    {
        const bool branch_taken_0x1c3ac8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c3ac8) {
            ctx->pc = 0x1C3BDCu;
            goto label_1c3bdc;
        }
    }
    ctx->pc = 0x1C3AD0u;
    // 0x1c3ad0: 0x2403ff00
    ctx->pc = 0x1c3ad0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1c3ad4: 0x10430021
    ctx->pc = 0x1C3AD4u;
    {
        const bool branch_taken_0x1c3ad4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c3ad4) {
            ctx->pc = 0x1C3B5Cu;
            goto label_1c3b5c;
        }
    }
    ctx->pc = 0x1C3ADCu;
    // 0x1c3adc: 0x10400003
    ctx->pc = 0x1C3ADCu;
    {
        const bool branch_taken_0x1c3adc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3AE0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c3adc) {
            ctx->pc = 0x1C3AECu;
            goto label_1c3aec;
        }
    }
    ctx->pc = 0x1C3AE4u;
    // 0x1c3ae4: 0x10000024
    ctx->pc = 0x1C3AE4u;
    {
        const bool branch_taken_0x1c3ae4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3AE8u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
        if (branch_taken_0x1c3ae4) {
            ctx->pc = 0x1C3B78u;
            goto label_1c3b78;
        }
    }
    ctx->pc = 0x1C3AECu;
label_1c3aec:
    // 0x1c3aec: 0xc071570
    ctx->pc = 0x1C3AECu;
    SET_GPR_U32(ctx, 31, 0x1C3AF4u);
    ctx->pc = 0x1C55C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3AF4u; }
    }
    if (ctx->pc != 0x1C3AF4u) { return; }
    ctx->pc = 0x1C3AF4u;
    // 0x1c3af4: 0x1440000f
    ctx->pc = 0x1C3AF4u;
    {
        const bool branch_taken_0x1c3af4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C3AF8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1c3af4) {
            ctx->pc = 0x1C3B34u;
            goto label_1c3b34;
        }
    }
    ctx->pc = 0x1C3AFCu;
    // 0x1c3afc: 0x2402001a
    ctx->pc = 0x1c3afcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c3b00: 0x3c010032
    ctx->pc = 0x1c3b00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c3b04: 0xae02002c
    ctx->pc = 0x1c3b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1c3b08: 0x9022448d
    ctx->pc = 0x1c3b08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17549)));
    // 0x1c3b0c: 0xc0dee54
    ctx->pc = 0x1C3B0Cu;
    SET_GPR_U32(ctx, 31, 0x1C3B14u);
    ctx->pc = 0x1C3B10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->pc = 0x37B950u;
    {
        auto targetFn = runtime->lookupFunction(0x37B950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B14u; }
        if (ctx->pc != 0x1C3B14u) { return; }
    }
    ctx->pc = 0x1C3B14u;
    // 0x1c3b14: 0x18400004
    ctx->pc = 0x1C3B14u;
    {
        const bool branch_taken_0x1c3b14 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C3B18u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1c3b14) {
            ctx->pc = 0x1C3B28u;
            goto label_1c3b28;
        }
    }
    ctx->pc = 0x1C3B1Cu;
    // 0x1c3b1c: 0x3c010032
    ctx->pc = 0x1c3b1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c3b20: 0x10000002
    ctx->pc = 0x1C3B20u;
    {
        const bool branch_taken_0x1c3b20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3B24u;
        WRITE16(ADD32(GPR_U32(ctx, 1), 17370), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1c3b20) {
            ctx->pc = 0x1C3B2Cu;
            goto label_1c3b2c;
        }
    }
    ctx->pc = 0x1C3B28u;
label_1c3b28:
    // 0x1c3b28: 0xa42043da
    ctx->pc = 0x1c3b28u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 17370), (uint16_t)GPR_U32(ctx, 0));
label_1c3b2c:
    // 0x1c3b2c: 0x1000003d
    ctx->pc = 0x1C3B2Cu;
    {
        const bool branch_taken_0x1c3b2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3B30u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c3b2c) {
            ctx->pc = 0x1C3C24u;
            goto label_1c3c24;
        }
    }
    ctx->pc = 0x1C3B34u;
label_1c3b34:
    // 0x1c3b34: 0x24020034
    ctx->pc = 0x1c3b34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 52));
    // 0x1c3b38: 0xa0204476
    ctx->pc = 0x1c3b38u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17526), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c3b3c: 0xae02002c
    ctx->pc = 0x1c3b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1c3b40: 0x24020005
    ctx->pc = 0x1c3b40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c3b44: 0xae020034
    ctx->pc = 0x1c3b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1c3b48: 0x24020001
    ctx->pc = 0x1c3b48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3b4c: 0xae020034
    ctx->pc = 0x1c3b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1c3b50: 0x24020063
    ctx->pc = 0x1c3b50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
    // 0x1c3b54: 0x10000021
    ctx->pc = 0x1C3B54u;
    {
        const bool branch_taken_0x1c3b54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3B58u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1c3b54) {
            ctx->pc = 0x1C3BDCu;
            goto label_1c3bdc;
        }
    }
    ctx->pc = 0x1C3B5Cu;
label_1c3b5c:
    // 0x1c3b5c: 0x24020034
    ctx->pc = 0x1c3b5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 52));
    // 0x1c3b60: 0x24030001
    ctx->pc = 0x1c3b60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3b64: 0xae02002c
    ctx->pc = 0x1c3b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1c3b68: 0x24020063
    ctx->pc = 0x1c3b68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
    // 0x1c3b6c: 0xae030034
    ctx->pc = 0x1c3b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x1c3b70: 0x1000001a
    ctx->pc = 0x1C3B70u;
    {
        const bool branch_taken_0x1c3b70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3B74u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1c3b70) {
            ctx->pc = 0x1C3BDCu;
            goto label_1c3bdc;
        }
    }
    ctx->pc = 0x1C3B78u;
label_1c3b78:
    // 0x1c3b78: 0x24020063
    ctx->pc = 0x1c3b78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
    // 0x1c3b7c: 0xa2020002
    ctx->pc = 0x1c3b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c3b80: 0xae030034
    ctx->pc = 0x1c3b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x1c3b84: 0x24020004
    ctx->pc = 0x1c3b84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3b88: 0x8e030034
    ctx->pc = 0x1c3b88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c3b8c: 0x10620012
    ctx->pc = 0x1C3B8Cu;
    {
        const bool branch_taken_0x1c3b8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C3B90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23));
        if (branch_taken_0x1c3b8c) {
            ctx->pc = 0x1C3BD8u;
            goto label_1c3bd8;
        }
    }
    ctx->pc = 0x1C3B94u;
    // 0x1c3b94: 0x24020003
    ctx->pc = 0x1c3b94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3b98: 0x1062000d
    ctx->pc = 0x1C3B98u;
    {
        const bool branch_taken_0x1c3b98 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C3B9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 52));
        if (branch_taken_0x1c3b98) {
            ctx->pc = 0x1C3BD0u;
            goto label_1c3bd0;
        }
    }
    ctx->pc = 0x1C3BA0u;
    // 0x1c3ba0: 0x24020002
    ctx->pc = 0x1c3ba0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3ba4: 0x10620008
    ctx->pc = 0x1C3BA4u;
    {
        const bool branch_taken_0x1c3ba4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C3BA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x1c3ba4) {
            ctx->pc = 0x1C3BC8u;
            goto label_1c3bc8;
        }
    }
    ctx->pc = 0x1C3BACu;
    // 0x1c3bac: 0x24020001
    ctx->pc = 0x1c3bacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3bb0: 0x10620003
    ctx->pc = 0x1C3BB0u;
    {
        const bool branch_taken_0x1c3bb0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C3BB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x1c3bb0) {
            ctx->pc = 0x1C3BC0u;
            goto label_1c3bc0;
        }
    }
    ctx->pc = 0x1C3BB8u;
    // 0x1c3bb8: 0x10000008
    ctx->pc = 0x1C3BB8u;
    {
        const bool branch_taken_0x1c3bb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c3bb8) {
            ctx->pc = 0x1C3BDCu;
            goto label_1c3bdc;
        }
    }
    ctx->pc = 0x1C3BC0u;
label_1c3bc0:
    // 0x1c3bc0: 0x10000006
    ctx->pc = 0x1C3BC0u;
    {
        const bool branch_taken_0x1c3bc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3BC4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x1c3bc0) {
            ctx->pc = 0x1C3BDCu;
            goto label_1c3bdc;
        }
    }
    ctx->pc = 0x1C3BC8u;
label_1c3bc8:
    // 0x1c3bc8: 0x10000004
    ctx->pc = 0x1C3BC8u;
    {
        const bool branch_taken_0x1c3bc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3BCCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x1c3bc8) {
            ctx->pc = 0x1C3BDCu;
            goto label_1c3bdc;
        }
    }
    ctx->pc = 0x1C3BD0u;
label_1c3bd0:
    // 0x1c3bd0: 0x10000002
    ctx->pc = 0x1C3BD0u;
    {
        const bool branch_taken_0x1c3bd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3BD4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x1c3bd0) {
            ctx->pc = 0x1C3BDCu;
            goto label_1c3bdc;
        }
    }
    ctx->pc = 0x1C3BD8u;
label_1c3bd8:
    // 0x1c3bd8: 0xae02002c
    ctx->pc = 0x1c3bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1c3bdc:
    // 0x1c3bdc: 0x3c010029
    ctx->pc = 0x1c3bdcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x1c3be0: 0x8c224170
    ctx->pc = 0x1c3be0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 16752)));
    // 0x1c3be4: 0x10000009
    ctx->pc = 0x1C3BE4u;
    {
        const bool branch_taken_0x1c3be4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3BE8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x1c3be4) {
            ctx->pc = 0x1C3C0Cu;
            goto label_1c3c0c;
        }
    }
    ctx->pc = 0x1C3BECu;
label_1c3bec:
    // 0x1c3bec: 0x9602000a
    ctx->pc = 0x1c3becu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1c3bf0: 0x3042fff0
    ctx->pc = 0x1c3bf0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65520));
    // 0x1c3bf4: 0x10400005
    ctx->pc = 0x1C3BF4u;
    {
        const bool branch_taken_0x1c3bf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3BF8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1c3bf4) {
            ctx->pc = 0x1C3C0Cu;
            goto label_1c3c0c;
        }
    }
    ctx->pc = 0x1C3BFCu;
    // 0x1c3bfc: 0xc07165c
    ctx->pc = 0x1C3BFCu;
    SET_GPR_U32(ctx, 31, 0x1C3C04u);
    ctx->pc = 0x1C3C00u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17526), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1C5970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5970_0x1c5970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3C04u; }
    }
    if (ctx->pc != 0x1C3C04u) { return; }
    ctx->pc = 0x1C3C04u;
    // 0x1c3c04: 0x10000007
    ctx->pc = 0x1C3C04u;
    {
        const bool branch_taken_0x1c3c04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3C08u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c3c04) {
            ctx->pc = 0x1C3C24u;
            goto label_1c3c24;
        }
    }
    ctx->pc = 0x1C3C0Cu;
label_1c3c0c:
    // 0x1c3c0c: 0x200202d
    ctx->pc = 0x1c3c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3c10:
    // 0x1c3c10: 0xc0713c4
    ctx->pc = 0x1C3C10u;
    SET_GPR_U32(ctx, 31, 0x1C3C18u);
    ctx->pc = 0x1C4F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4F10_0x1c4f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3C18u; }
    }
    if (ctx->pc != 0x1C3C18u) { return; }
    ctx->pc = 0x1C3C18u;
    // 0x1c3c18: 0xc07146c
    ctx->pc = 0x1C3C18u;
    SET_GPR_U32(ctx, 31, 0x1C3C20u);
    ctx->pc = 0x1C3C1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C51B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C51B0_0x1c51b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3C20u; }
    }
    if (ctx->pc != 0x1C3C20u) { return; }
    ctx->pc = 0x1C3C20u;
    // 0x1c3c20: 0x24020001
    ctx->pc = 0x1c3c20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c3c24:
    // 0x1c3c24: 0xdfbf0010
    ctx->pc = 0x1c3c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3c28:
    // 0x1c3c28: 0x7bb00000
    ctx->pc = 0x1c3c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3c2c: 0x3e00008
    ctx->pc = 0x1C3C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3C30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C3990u: goto label_1c3990;
            case 0x1C39B4u: goto label_1c39b4;
            case 0x1C3A00u: goto label_1c3a00;
            case 0x1C3A04u: goto label_1c3a04;
            case 0x1C3A10u: goto label_1c3a10;
            case 0x1C3A2Cu: goto label_1c3a2c;
            case 0x1C3A48u: goto label_1c3a48;
            case 0x1C3A74u: goto label_1c3a74;
            case 0x1C3AB0u: goto label_1c3ab0;
            case 0x1C3AB4u: goto label_1c3ab4;
            case 0x1C3ABCu: goto label_1c3abc;
            case 0x1C3AECu: goto label_1c3aec;
            case 0x1C3B28u: goto label_1c3b28;
            case 0x1C3B2Cu: goto label_1c3b2c;
            case 0x1C3B34u: goto label_1c3b34;
            case 0x1C3B5Cu: goto label_1c3b5c;
            case 0x1C3B78u: goto label_1c3b78;
            case 0x1C3BC0u: goto label_1c3bc0;
            case 0x1C3BC8u: goto label_1c3bc8;
            case 0x1C3BD0u: goto label_1c3bd0;
            case 0x1C3BD8u: goto label_1c3bd8;
            case 0x1C3BDCu: goto label_1c3bdc;
            case 0x1C3BECu: goto label_1c3bec;
            case 0x1C3C0Cu: goto label_1c3c0c;
            case 0x1C3C10u: goto label_1c3c10;
            case 0x1C3C24u: goto label_1c3c24;
            case 0x1C3C28u: goto label_1c3c28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C3C34u;
    // 0x1c3c34: 0x0
    ctx->pc = 0x1c3c34u;
    // NOP
    // 0x1c3c38: 0x0
    ctx->pc = 0x1c3c38u;
    // NOP
    // 0x1c3c3c: 0x0
    ctx->pc = 0x1c3c3cu;
    // NOP
}
