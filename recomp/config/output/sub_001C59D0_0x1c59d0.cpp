#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C59D0
// Address: 0x1c59d0 - 0x1c5c60
void sub_001C59D0_0x1c59d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c59d0u;

label_1c59d0:
    // 0x1c59d0: 0x8c82000c
    ctx->pc = 0x1c59d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c59d4: 0x90850009
    ctx->pc = 0x1c59d4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x1c59d8: 0x1000000b
    ctx->pc = 0x1C59D8u;
    {
        const bool branch_taken_0x1c59d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C59DCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c59d8) {
            ctx->pc = 0x1C5A08u;
            goto label_1c5a08;
        }
    }
    ctx->pc = 0x1C59E0u;
label_1c59e0:
    // 0x1c59e0: 0x9043000f
    ctx->pc = 0x1c59e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15)));
    // 0x1c59e4: 0x30630020
    ctx->pc = 0x1c59e4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 32));
    // 0x1c59e8: 0x14600003
    ctx->pc = 0x1C59E8u;
    {
        const bool branch_taken_0x1c59e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c59e8) {
            ctx->pc = 0x1C59F8u;
            goto label_1c59f8;
        }
    }
    ctx->pc = 0x1C59F0u;
    // 0x1c59f0: 0x10000009
    ctx->pc = 0x1C59F0u;
    {
        const bool branch_taken_0x1c59f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c59f0) {
            ctx->pc = 0x1C5A18u;
            goto label_1c5a18;
        }
    }
    ctx->pc = 0x1C59F8u;
label_1c59f8:
    // 0x1c59f8: 0x9083000a
    ctx->pc = 0x1c59f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1c59fc: 0x24c60001
    ctx->pc = 0x1c59fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1c5a00: 0x431021
    ctx->pc = 0x1c5a00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c5a04: 0x24420008
    ctx->pc = 0x1c5a04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
label_1c5a08:
    // 0x1c5a08: 0xc5182a
    ctx->pc = 0x1c5a08u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
    // 0x1c5a0c: 0x1460fff4
    ctx->pc = 0x1C5A0Cu;
    {
        const bool branch_taken_0x1c5a0c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c5a0c) {
            ctx->pc = 0x1C59E0u;
            goto label_1c59e0;
        }
    }
    ctx->pc = 0x1C5A14u;
    // 0x1c5a14: 0x102d
    ctx->pc = 0x1c5a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5a18:
    // 0x1c5a18: 0x3e00008
    ctx->pc = 0x1C5A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C59D0u: goto label_1c59d0;
            case 0x1C59E0u: goto label_1c59e0;
            case 0x1C59F8u: goto label_1c59f8;
            case 0x1C5A08u: goto label_1c5a08;
            case 0x1C5A18u: goto label_1c5a18;
            case 0x1C5A50u: goto label_1c5a50;
            case 0x1C5A54u: goto label_1c5a54;
            case 0x1C5A6Cu: goto label_1c5a6c;
            case 0x1C5A74u: goto label_1c5a74;
            case 0x1C5A88u: goto label_1c5a88;
            case 0x1C5AA0u: goto label_1c5aa0;
            case 0x1C5AB0u: goto label_1c5ab0;
            case 0x1C5B30u: goto label_1c5b30;
            case 0x1C5B48u: goto label_1c5b48;
            case 0x1C5B88u: goto label_1c5b88;
            case 0x1C5BD8u: goto label_1c5bd8;
            case 0x1C5BDCu: goto label_1c5bdc;
            case 0x1C5BF0u: goto label_1c5bf0;
            case 0x1C5C08u: goto label_1c5c08;
            case 0x1C5C48u: goto label_1c5c48;
            case 0x1C5C4Cu: goto label_1c5c4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C5A20u;
    // 0x1c5a20: 0x27bdfeb0
    ctx->pc = 0x1c5a20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1c5a24: 0x30c200ff
    ctx->pc = 0x1c5a24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 255));
    // 0x1c5a28: 0xffbf0040
    ctx->pc = 0x1c5a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c5a2c: 0x30420080
    ctx->pc = 0x1c5a2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x1c5a30: 0x7fb30030
    ctx->pc = 0x1c5a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c5a34: 0x7fb20020
    ctx->pc = 0x1c5a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c5a38: 0x7fb10010
    ctx->pc = 0x1c5a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c5a3c: 0xa0902d
    ctx->pc = 0x1c5a3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a40: 0x10400003
    ctx->pc = 0x1C5A40u;
    {
        const bool branch_taken_0x1c5a40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5A44u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        if (branch_taken_0x1c5a40) {
            ctx->pc = 0x1C5A50u;
            goto label_1c5a50;
        }
    }
    ctx->pc = 0x1C5A48u;
    // 0x1c5a48: 0x10000002
    ctx->pc = 0x1C5A48u;
    {
        const bool branch_taken_0x1c5a48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5A4Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 24));
        if (branch_taken_0x1c5a48) {
            ctx->pc = 0x1C5A54u;
            goto label_1c5a54;
        }
    }
    ctx->pc = 0x1C5A50u;
label_1c5a50:
    // 0x1c5a50: 0x24900008
    ctx->pc = 0x1c5a50u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 8));
label_1c5a54:
    // 0x1c5a54: 0xc071664
    ctx->pc = 0x1C5A54u;
    SET_GPR_U32(ctx, 31, 0x1C5A5Cu);
    ctx->pc = 0x1C5A58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C5990u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5990_0x1c5990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A5Cu; }
    }
    if (ctx->pc != 0x1C5A5Cu) { return; }
    ctx->pc = 0x1C5A5Cu;
    // 0x1c5a5c: 0x14400003
    ctx->pc = 0x1C5A5Cu;
    {
        const bool branch_taken_0x1c5a5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C5A60u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a5c) {
            ctx->pc = 0x1C5A6Cu;
            goto label_1c5a6c;
        }
    }
    ctx->pc = 0x1C5A64u;
    // 0x1c5a64: 0x10000048
    ctx->pc = 0x1C5A64u;
    {
        const bool branch_taken_0x1c5a64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5A68u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a64) {
            ctx->pc = 0x1C5B88u;
            goto label_1c5b88;
        }
    }
    ctx->pc = 0x1C5A6Cu;
label_1c5a6c:
    // 0x1c5a6c: 0xc071674
    ctx->pc = 0x1C5A6Cu;
    SET_GPR_U32(ctx, 31, 0x1C5A74u);
    ctx->pc = 0x1C59D0u;
    goto label_1c59d0;
    ctx->pc = 0x1C5A74u;
label_1c5a74:
    // 0x1c5a74: 0x40882d
    ctx->pc = 0x1c5a74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a78: 0x16200003
    ctx->pc = 0x1C5A78u;
    {
        const bool branch_taken_0x1c5a78 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c5a78) {
            ctx->pc = 0x1C5A88u;
            goto label_1c5a88;
        }
    }
    ctx->pc = 0x1C5A80u;
    // 0x1c5a80: 0x10000041
    ctx->pc = 0x1C5A80u;
    {
        const bool branch_taken_0x1c5a80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5A84u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a80) {
            ctx->pc = 0x1C5B88u;
            goto label_1c5b88;
        }
    }
    ctx->pc = 0x1C5A88u;
label_1c5a88:
    // 0x1c5a88: 0x92020008
    ctx->pc = 0x1c5a88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c5a8c: 0x14400004
    ctx->pc = 0x1C5A8Cu;
    {
        const bool branch_taken_0x1c5a8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c5a8c) {
            ctx->pc = 0x1C5AA0u;
            goto label_1c5aa0;
        }
    }
    ctx->pc = 0x1C5A94u;
    // 0x1c5a94: 0xae200000
    ctx->pc = 0x1c5a94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1c5a98: 0x10000005
    ctx->pc = 0x1C5A98u;
    {
        const bool branch_taken_0x1c5a98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5A9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        if (branch_taken_0x1c5a98) {
            ctx->pc = 0x1C5AB0u;
            goto label_1c5ab0;
        }
    }
    ctx->pc = 0x1C5AA0u;
label_1c5aa0:
    // 0x1c5aa0: 0x8e020004
    ctx->pc = 0x1c5aa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c5aa4: 0xae220000
    ctx->pc = 0x1c5aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1c5aa8: 0x8e020004
    ctx->pc = 0x1c5aa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c5aac: 0xac510004
    ctx->pc = 0x1c5aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
label_1c5ab0:
    // 0x1c5ab0: 0xae110004
    ctx->pc = 0x1c5ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x1c5ab4: 0x240202d
    ctx->pc = 0x1c5ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ab8: 0xc0722c8
    ctx->pc = 0x1C5AB8u;
    SET_GPR_U32(ctx, 31, 0x1C5AC0u);
    ctx->pc = 0x1C5ABCu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1C8B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8B20_0x1c8b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5AC0u; }
    }
    if (ctx->pc != 0x1C5AC0u) { return; }
    ctx->pc = 0x1C5AC0u;
    // 0x1c5ac0: 0xa7a20050
    ctx->pc = 0x1c5ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c5ac4: 0xc0722a4
    ctx->pc = 0x1C5AC4u;
    SET_GPR_U32(ctx, 31, 0x1C5ACCu);
    ctx->pc = 0x1C5AC8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C8A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8A90_0x1c8a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5ACCu; }
    }
    if (ctx->pc != 0x1C5ACCu) { return; }
    ctx->pc = 0x1C5ACCu;
    // 0x1c5acc: 0xa3a20052
    ctx->pc = 0x1c5accu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 82), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c5ad0: 0x240202d
    ctx->pc = 0x1c5ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ad4: 0xc0722a4
    ctx->pc = 0x1C5AD4u;
    SET_GPR_U32(ctx, 31, 0x1C5ADCu);
    ctx->pc = 0x1C5AD8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 83));
    ctx->pc = 0x1C8A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8A90_0x1c8a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5ADCu; }
    }
    if (ctx->pc != 0x1C5ADCu) { return; }
    ctx->pc = 0x1C5ADCu;
    // 0x1c5adc: 0xa2620000
    ctx->pc = 0x1c5adcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c5ae0: 0xc0722b0
    ctx->pc = 0x1C5AE0u;
    SET_GPR_U32(ctx, 31, 0x1C5AE8u);
    ctx->pc = 0x1C5AE4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C8AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8AC0_0x1c8ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5AE8u; }
    }
    if (ctx->pc != 0x1C5AE8u) { return; }
    ctx->pc = 0x1C5AE8u;
    // 0x1c5ae8: 0xafa20054
    ctx->pc = 0x1c5ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x1c5aec: 0xc0722c8
    ctx->pc = 0x1C5AECu;
    SET_GPR_U32(ctx, 31, 0x1C5AF4u);
    ctx->pc = 0x1C5AF0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C8B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8B20_0x1c8b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5AF4u; }
    }
    if (ctx->pc != 0x1C5AF4u) { return; }
    ctx->pc = 0x1C5AF4u;
    // 0x1c5af4: 0xa7a20058
    ctx->pc = 0x1c5af4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 88), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c5af8: 0xc0722a4
    ctx->pc = 0x1C5AF8u;
    SET_GPR_U32(ctx, 31, 0x1C5B00u);
    ctx->pc = 0x1C5AFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C8A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8A90_0x1c8a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5B00u; }
    }
    if (ctx->pc != 0x1C5B00u) { return; }
    ctx->pc = 0x1C5B00u;
    // 0x1c5b00: 0x304200ff
    ctx->pc = 0x1c5b00u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1c5b04: 0x240202d
    ctx->pc = 0x1c5b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b08: 0x3442007f
    ctx->pc = 0x1c5b08u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 127));
    // 0x1c5b0c: 0xc0722a4
    ctx->pc = 0x1C5B0Cu;
    SET_GPR_U32(ctx, 31, 0x1C5B14u);
    ctx->pc = 0x1C5B10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 90), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1C8A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8A90_0x1c8a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5B14u; }
    }
    if (ctx->pc != 0x1C5B14u) { return; }
    ctx->pc = 0x1C5B14u;
    // 0x1c5b14: 0xa3a2005b
    ctx->pc = 0x1c5b14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 91), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c5b18: 0x92620000
    ctx->pc = 0x1c5b18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c5b1c: 0x4410004
    ctx->pc = 0x1C5B1Cu;
    {
        const bool branch_taken_0x1c5b1c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C5B20u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 3));
        if (branch_taken_0x1c5b1c) {
            ctx->pc = 0x1C5B30u;
            goto label_1c5b30;
        }
    }
    ctx->pc = 0x1C5B24u;
    // 0x1c5b24: 0x10800002
    ctx->pc = 0x1C5B24u;
    {
        const bool branch_taken_0x1c5b24 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c5b24) {
            ctx->pc = 0x1C5B30u;
            goto label_1c5b30;
        }
    }
    ctx->pc = 0x1C5B2Cu;
    // 0x1c5b2c: 0x2484fffc
    ctx->pc = 0x1c5b2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
label_1c5b30:
    // 0x1c5b30: 0x10800005
    ctx->pc = 0x1C5B30u;
    {
        const bool branch_taken_0x1c5b30 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c5b30) {
            ctx->pc = 0x1C5B48u;
            goto label_1c5b48;
        }
    }
    ctx->pc = 0x1C5B38u;
    // 0x1c5b38: 0x92630000
    ctx->pc = 0x1c5b38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c5b3c: 0x24020004
    ctx->pc = 0x1c5b3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c5b40: 0x441023
    ctx->pc = 0x1c5b40u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c5b44: 0x621021
    ctx->pc = 0x1c5b44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c5b48:
    // 0x1c5b48: 0x2446fff4
    ctx->pc = 0x1c5b48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x1c5b4c: 0x240202d
    ctx->pc = 0x1c5b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b50: 0xc072274
    ctx->pc = 0x1C5B50u;
    SET_GPR_U32(ctx, 31, 0x1C5B58u);
    ctx->pc = 0x1C5B54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 92));
    ctx->pc = 0x1C89D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C89D0_0x1c89d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5B58u; }
    }
    if (ctx->pc != 0x1C5B58u) { return; }
    ctx->pc = 0x1C5B58u;
    // 0x1c5b58: 0x9206000a
    ctx->pc = 0x1c5b58u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1c5b5c: 0x26240008
    ctx->pc = 0x1c5b5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 8));
    // 0x1c5b60: 0xc041eac
    ctx->pc = 0x1C5B60u;
    SET_GPR_U32(ctx, 31, 0x1C5B68u);
    ctx->pc = 0x1C5B64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 84));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5B68u; }
    }
    if (ctx->pc != 0x1C5B68u) { return; }
    ctx->pc = 0x1C5B68u;
    // 0x1c5b68: 0x9223000f
    ctx->pc = 0x1c5b68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
    // 0x1c5b6c: 0x24020001
    ctx->pc = 0x1c5b6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5b70: 0x34630020
    ctx->pc = 0x1c5b70u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32));
    // 0x1c5b74: 0xa223000f
    ctx->pc = 0x1c5b74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c5b78: 0x92030008
    ctx->pc = 0x1c5b78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c5b7c: 0x24630001
    ctx->pc = 0x1c5b7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c5b80: 0xa2030008
    ctx->pc = 0x1c5b80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c5b84: 0xa202000b
    ctx->pc = 0x1c5b84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 2));
label_1c5b88:
    // 0x1c5b88: 0xdfbf0040
    ctx->pc = 0x1c5b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c5b8c: 0x7bb30030
    ctx->pc = 0x1c5b8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c5b90: 0x7bb20020
    ctx->pc = 0x1c5b90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5b94: 0x7bb10010
    ctx->pc = 0x1c5b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5b98: 0x7bb00000
    ctx->pc = 0x1c5b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5b9c: 0x3e00008
    ctx->pc = 0x1C5B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5BA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C59D0u: goto label_1c59d0;
            case 0x1C59E0u: goto label_1c59e0;
            case 0x1C59F8u: goto label_1c59f8;
            case 0x1C5A08u: goto label_1c5a08;
            case 0x1C5A18u: goto label_1c5a18;
            case 0x1C5A50u: goto label_1c5a50;
            case 0x1C5A54u: goto label_1c5a54;
            case 0x1C5A6Cu: goto label_1c5a6c;
            case 0x1C5A74u: goto label_1c5a74;
            case 0x1C5A88u: goto label_1c5a88;
            case 0x1C5AA0u: goto label_1c5aa0;
            case 0x1C5AB0u: goto label_1c5ab0;
            case 0x1C5B30u: goto label_1c5b30;
            case 0x1C5B48u: goto label_1c5b48;
            case 0x1C5B88u: goto label_1c5b88;
            case 0x1C5BD8u: goto label_1c5bd8;
            case 0x1C5BDCu: goto label_1c5bdc;
            case 0x1C5BF0u: goto label_1c5bf0;
            case 0x1C5C08u: goto label_1c5c08;
            case 0x1C5C48u: goto label_1c5c48;
            case 0x1C5C4Cu: goto label_1c5c4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C5BA4u;
    // 0x1c5ba4: 0x0
    ctx->pc = 0x1c5ba4u;
    // NOP
    // 0x1c5ba8: 0x0
    ctx->pc = 0x1c5ba8u;
    // NOP
    // 0x1c5bac: 0x0
    ctx->pc = 0x1c5bacu;
    // NOP
    // 0x1c5bb0: 0x27bdffd0
    ctx->pc = 0x1c5bb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c5bb4: 0x30a200ff
    ctx->pc = 0x1c5bb4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 255));
    // 0x1c5bb8: 0xffbf0020
    ctx->pc = 0x1c5bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c5bbc: 0x30420080
    ctx->pc = 0x1c5bbcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x1c5bc0: 0x7fb10010
    ctx->pc = 0x1c5bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c5bc4: 0x7fb00000
    ctx->pc = 0x1c5bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5bc8: 0x10400003
    ctx->pc = 0x1C5BC8u;
    {
        const bool branch_taken_0x1c5bc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5BCCu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c5bc8) {
            ctx->pc = 0x1C5BD8u;
            goto label_1c5bd8;
        }
    }
    ctx->pc = 0x1C5BD0u;
    // 0x1c5bd0: 0x10000002
    ctx->pc = 0x1C5BD0u;
    {
        const bool branch_taken_0x1c5bd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5BD4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 24));
        if (branch_taken_0x1c5bd0) {
            ctx->pc = 0x1C5BDCu;
            goto label_1c5bdc;
        }
    }
    ctx->pc = 0x1C5BD8u;
label_1c5bd8:
    // 0x1c5bd8: 0x24900008
    ctx->pc = 0x1c5bd8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 8));
label_1c5bdc:
    // 0x1c5bdc: 0x92020008
    ctx->pc = 0x1c5bdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c5be0: 0x14400003
    ctx->pc = 0x1C5BE0u;
    {
        const bool branch_taken_0x1c5be0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C5BE4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c5be0) {
            ctx->pc = 0x1C5BF0u;
            goto label_1c5bf0;
        }
    }
    ctx->pc = 0x1C5BE8u;
    // 0x1c5be8: 0x10000018
    ctx->pc = 0x1C5BE8u;
    {
        const bool branch_taken_0x1c5be8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5BECu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1c5be8) {
            ctx->pc = 0x1C5C4Cu;
            goto label_1c5c4c;
        }
    }
    ctx->pc = 0x1C5BF0u;
label_1c5bf0:
    // 0x1c5bf0: 0x9202000b
    ctx->pc = 0x1c5bf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x1c5bf4: 0x10400004
    ctx->pc = 0x1C5BF4u;
    {
        const bool branch_taken_0x1c5bf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C5BF8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c5bf4) {
            ctx->pc = 0x1C5C08u;
            goto label_1c5c08;
        }
    }
    ctx->pc = 0x1C5BFCu;
    // 0x1c5bfc: 0xc071718
    ctx->pc = 0x1C5BFCu;
    SET_GPR_U32(ctx, 31, 0x1C5C04u);
    ctx->pc = 0x1C5C60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5C60_0x1c5c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5C04u; }
    }
    if (ctx->pc != 0x1C5C04u) { return; }
    ctx->pc = 0x1C5C04u;
    // 0x1c5c04: 0xa200000b
    ctx->pc = 0x1c5c04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 0));
label_1c5c08:
    // 0x1c5c08: 0x8e040000
    ctx->pc = 0x1c5c08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c5c0c: 0x8c820008
    ctx->pc = 0x1c5c0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c5c10: 0x222082b
    ctx->pc = 0x1c5c10u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1c5c14: 0x1420000c
    ctx->pc = 0x1C5C14u;
    {
        const bool branch_taken_0x1c5c14 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C5C18u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c5c14) {
            ctx->pc = 0x1C5C48u;
            goto label_1c5c48;
        }
    }
    ctx->pc = 0x1C5C1Cu;
    // 0x1c5c1c: 0x8c830004
    ctx->pc = 0x1c5c1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c5c20: 0x24820008
    ctx->pc = 0x1c5c20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 8));
    // 0x1c5c24: 0xae030000
    ctx->pc = 0x1c5c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1c5c28: 0xac800000
    ctx->pc = 0x1c5c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1c5c2c: 0xac800004
    ctx->pc = 0x1c5c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1c5c30: 0x9083000f
    ctx->pc = 0x1c5c30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x1c5c34: 0x306300df
    ctx->pc = 0x1c5c34u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 223));
    // 0x1c5c38: 0xa083000f
    ctx->pc = 0x1c5c38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c5c3c: 0x92030008
    ctx->pc = 0x1c5c3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c5c40: 0x2463ffff
    ctx->pc = 0x1c5c40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c5c44: 0xa2030008
    ctx->pc = 0x1c5c44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
label_1c5c48:
    // 0x1c5c48: 0xdfbf0020
    ctx->pc = 0x1c5c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c5c4c:
    // 0x1c5c4c: 0x7bb10010
    ctx->pc = 0x1c5c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5c50: 0x7bb00000
    ctx->pc = 0x1c5c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5c54: 0x3e00008
    ctx->pc = 0x1C5C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5C58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C59D0u: goto label_1c59d0;
            case 0x1C59E0u: goto label_1c59e0;
            case 0x1C59F8u: goto label_1c59f8;
            case 0x1C5A08u: goto label_1c5a08;
            case 0x1C5A18u: goto label_1c5a18;
            case 0x1C5A50u: goto label_1c5a50;
            case 0x1C5A54u: goto label_1c5a54;
            case 0x1C5A6Cu: goto label_1c5a6c;
            case 0x1C5A74u: goto label_1c5a74;
            case 0x1C5A88u: goto label_1c5a88;
            case 0x1C5AA0u: goto label_1c5aa0;
            case 0x1C5AB0u: goto label_1c5ab0;
            case 0x1C5B30u: goto label_1c5b30;
            case 0x1C5B48u: goto label_1c5b48;
            case 0x1C5B88u: goto label_1c5b88;
            case 0x1C5BD8u: goto label_1c5bd8;
            case 0x1C5BDCu: goto label_1c5bdc;
            case 0x1C5BF0u: goto label_1c5bf0;
            case 0x1C5C08u: goto label_1c5c08;
            case 0x1C5C48u: goto label_1c5c48;
            case 0x1C5C4Cu: goto label_1c5c4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C5C5Cu;
    // 0x1c5c5c: 0x0
    ctx->pc = 0x1c5c5cu;
    // NOP
}
