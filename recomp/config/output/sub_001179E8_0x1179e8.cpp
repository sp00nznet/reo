#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001179E8
// Address: 0x1179e8 - 0x117be0
void sub_001179E8_0x1179e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1179e8u;

    // 0x1179e8: 0x27bdff40
    ctx->pc = 0x1179e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1179ec: 0xffb10030
    ctx->pc = 0x1179ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1179f0: 0x80882d
    ctx->pc = 0x1179f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179f4: 0xffbe00a0
    ctx->pc = 0x1179f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1179f8: 0xffb70090
    ctx->pc = 0x1179f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x1179fc: 0x3c040026
    ctx->pc = 0x1179fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x117a00: 0xffb60080
    ctx->pc = 0x117a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x117a04: 0xc0f02d
    ctx->pc = 0x117a04u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a08: 0xffb50070
    ctx->pc = 0x117a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x117a0c: 0xa0b02d
    ctx->pc = 0x117a0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a10: 0xffb40060
    ctx->pc = 0x117a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x117a14: 0xe0a82d
    ctx->pc = 0x117a14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a18: 0xffb30050
    ctx->pc = 0x117a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x117a1c: 0x120a02d
    ctx->pc = 0x117a1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a20: 0xffb20040
    ctx->pc = 0x117a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x117a24: 0x140982d
    ctx->pc = 0x117a24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a28: 0xffb00020
    ctx->pc = 0x117a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x117a2c: 0x100902d
    ctx->pc = 0x117a2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a30: 0xffbf00b0
    ctx->pc = 0x117a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x117a34: 0x160b82d
    ctx->pc = 0x117a34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a38: 0xc045c92
    ctx->pc = 0x117A38u;
    SET_GPR_U32(ctx, 31, 0x117A40u);
    ctx->pc = 0x117A3Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953408));
    ctx->pc = 0x117248u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117248_0x117248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117A40u; }
    }
    if (ctx->pc != 0x117A40u) { return; }
    ctx->pc = 0x117A40u;
    // 0x117a40: 0x40802d
    ctx->pc = 0x117a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a44: 0x12000059
    ctx->pc = 0x117A44u;
    {
        const bool branch_taken_0x117a44 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x117A48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x117a44) {
            ctx->pc = 0x117BACu;
            goto label_117bac;
        }
    }
    ctx->pc = 0x117A4Cu;
    // 0x117a4c: 0x8fa200c0
    ctx->pc = 0x117a4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x117a50: 0x8e030018
    ctx->pc = 0x117a50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x117a54: 0xae220020
    ctx->pc = 0x117a54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x117a58: 0xae230004
    ctx->pc = 0x117a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x117a5c: 0xae300000
    ctx->pc = 0x117a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x117a60: 0xae37001c
    ctx->pc = 0x117a60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 23));
    // 0x117a64: 0x380102d
    ctx->pc = 0x117a64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a68: 0xae220018
    ctx->pc = 0x117a68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x117a6c: 0x33c30002
    ctx->pc = 0x117a6cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 30), 2));
    // 0x117a70: 0xae160020
    ctx->pc = 0x117a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 22));
    // 0x117a74: 0xae120024
    ctx->pc = 0x117a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
    // 0x117a78: 0xae140028
    ctx->pc = 0x117a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 20));
    // 0x117a7c: 0xae13002c
    ctx->pc = 0x117a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 19));
    // 0x117a80: 0xae100014
    ctx->pc = 0x117a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x117a84: 0x8e220024
    ctx->pc = 0x117a84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x117a88: 0xae11001c
    ctx->pc = 0x117a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x117a8c: 0x14600011
    ctx->pc = 0x117A8Cu;
    {
        const bool branch_taken_0x117a8c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x117A90u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        if (branch_taken_0x117a8c) {
            ctx->pc = 0x117AD4u;
            goto label_117ad4;
        }
    }
    ctx->pc = 0x117A94u;
    // 0x117a94: 0x16b40007
    ctx->pc = 0x117A94u;
    {
        const bool branch_taken_0x117a94 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 20));
        ctx->pc = 0x117A98u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 19)));
        if (branch_taken_0x117a94) {
            ctx->pc = 0x117AB4u;
            goto label_117ab4;
        }
    }
    ctx->pc = 0x117A9Cu;
    // 0x117a9c: 0x260282d
    ctx->pc = 0x117a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117aa0: 0x2a0202d
    ctx->pc = 0x117aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117aa4: 0xc045bf4
    ctx->pc = 0x117AA4u;
    SET_GPR_U32(ctx, 31, 0x117AACu);
    ctx->pc = 0x117AA8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 18));
    ctx->pc = 0x116FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116FD0_0x116fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AACu; }
    }
    if (ctx->pc != 0x117AACu) { return; }
    ctx->pc = 0x117AACu;
    // 0x117aac: 0x1000000a
    ctx->pc = 0x117AACu;
    {
        const bool branch_taken_0x117aac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x117AB0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 1));
        if (branch_taken_0x117aac) {
            ctx->pc = 0x117AD8u;
            goto label_117ad8;
        }
    }
    ctx->pc = 0x117AB4u;
label_117ab4:
    // 0x117ab4: 0x1a400003
    ctx->pc = 0x117AB4u;
    {
        const bool branch_taken_0x117ab4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x117AB8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x117ab4) {
            ctx->pc = 0x117AC4u;
            goto label_117ac4;
        }
    }
    ctx->pc = 0x117ABCu;
    // 0x117abc: 0xc045bf4
    ctx->pc = 0x117ABCu;
    SET_GPR_U32(ctx, 31, 0x117AC4u);
    ctx->pc = 0x117AC0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116FD0_0x116fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AC4u; }
    }
    if (ctx->pc != 0x117AC4u) { return; }
    ctx->pc = 0x117AC4u;
label_117ac4:
    // 0x117ac4: 0x1a600003
    ctx->pc = 0x117AC4u;
    {
        const bool branch_taken_0x117ac4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x117AC8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x117ac4) {
            ctx->pc = 0x117AD4u;
            goto label_117ad4;
        }
    }
    ctx->pc = 0x117ACCu;
    // 0x117acc: 0xc045bf4
    ctx->pc = 0x117ACCu;
    SET_GPR_U32(ctx, 31, 0x117AD4u);
    ctx->pc = 0x117AD0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116FD0_0x116fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AD4u; }
    }
    if (ctx->pc != 0x117AD4u) { return; }
    ctx->pc = 0x117AD4u;
label_117ad4:
    // 0x117ad4: 0x33c20001
    ctx->pc = 0x117ad4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 1));
label_117ad8:
    // 0x117ad8: 0x50400014
    ctx->pc = 0x117AD8u;
    {
        const bool branch_taken_0x117ad8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x117ad8) {
            ctx->pc = 0x117ADCu;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x117B2Cu;
            goto label_117b2c;
        }
    }
    ctx->pc = 0x117AE0u;
    // 0x117ae0: 0x16e00003
    ctx->pc = 0x117AE0u;
    {
        const bool branch_taken_0x117ae0 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        ctx->pc = 0x117AE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x117ae0) {
            ctx->pc = 0x117AF0u;
            goto label_117af0;
        }
    }
    ctx->pc = 0x117AE8u;
    // 0x117ae8: 0x10000002
    ctx->pc = 0x117AE8u;
    {
        const bool branch_taken_0x117ae8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x117AECu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        if (branch_taken_0x117ae8) {
            ctx->pc = 0x117AF4u;
            goto label_117af4;
        }
    }
    ctx->pc = 0x117AF0u;
label_117af0:
    // 0x117af0: 0xae020030
    ctx->pc = 0x117af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_117af4:
    // 0x117af4: 0x2402ffff
    ctx->pc = 0x117af4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117af8: 0x3c048000
    ctx->pc = 0x117af8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x117afc: 0x8e280014
    ctx->pc = 0x117afcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x117b00: 0x2a0382d
    ctx->pc = 0x117b00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b04: 0xae220008
    ctx->pc = 0x117b04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x117b08: 0x240482d
    ctx->pc = 0x117b08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b0c: 0x3484000a
    ctx->pc = 0x117b0cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 10));
    // 0x117b10: 0x200282d
    ctx->pc = 0x117b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b14: 0xc045b82
    ctx->pc = 0x117B14u;
    SET_GPR_U32(ctx, 31, 0x117B1Cu);
    ctx->pc = 0x117B18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x116E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116E08_0x116e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B1Cu; }
    }
    if (ctx->pc != 0x117B1Cu) { return; }
    ctx->pc = 0x117B1Cu;
    // 0x117b1c: 0x14400023
    ctx->pc = 0x117B1Cu;
    {
        const bool branch_taken_0x117b1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x117B20u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x117b1c) {
            ctx->pc = 0x117BACu;
            goto label_117bac;
        }
    }
    ctx->pc = 0x117B24u;
    // 0x117b24: 0x10000018
    ctx->pc = 0x117B24u;
    {
        const bool branch_taken_0x117b24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x117b24) {
            ctx->pc = 0x117B88u;
            goto label_117b88;
        }
    }
    ctx->pc = 0x117B2Cu;
label_117b2c:
    // 0x117b2c: 0xafa00008
    ctx->pc = 0x117b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x117b30: 0xafb30004
    ctx->pc = 0x117b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
    // 0x117b34: 0xc045188
    ctx->pc = 0x117B34u;
    SET_GPR_U32(ctx, 31, 0x117B3Cu);
    ctx->pc = 0x117B38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B3Cu; }
    }
    if (ctx->pc != 0x117B3Cu) { return; }
    ctx->pc = 0x117B3Cu;
    // 0x117b3c: 0x4410005
    ctx->pc = 0x117B3Cu;
    {
        const bool branch_taken_0x117b3c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x117B40u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x117b3c) {
            ctx->pc = 0x117B54u;
            goto label_117b54;
        }
    }
    ctx->pc = 0x117B44u;
    // 0x117b44: 0xc045cbc
    ctx->pc = 0x117B44u;
    SET_GPR_U32(ctx, 31, 0x117B4Cu);
    ctx->pc = 0x117B48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1172F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001172F0_0x1172f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B4Cu; }
    }
    if (ctx->pc != 0x117B4Cu) { return; }
    ctx->pc = 0x117B4Cu;
    // 0x117b4c: 0x10000017
    ctx->pc = 0x117B4Cu;
    {
        const bool branch_taken_0x117b4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x117B50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x117b4c) {
            ctx->pc = 0x117BACu;
            goto label_117bac;
        }
    }
    ctx->pc = 0x117B54u;
label_117b54:
    // 0x117b54: 0xae130030
    ctx->pc = 0x117b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
    // 0x117b58: 0x3c048000
    ctx->pc = 0x117b58u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x117b5c: 0x2a0382d
    ctx->pc = 0x117b5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b60: 0x240482d
    ctx->pc = 0x117b60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b64: 0x8e280014
    ctx->pc = 0x117b64u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x117b68: 0x3484000a
    ctx->pc = 0x117b68u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 10));
    // 0x117b6c: 0x200282d
    ctx->pc = 0x117b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b70: 0xc045b82
    ctx->pc = 0x117B70u;
    SET_GPR_U32(ctx, 31, 0x117B78u);
    ctx->pc = 0x117B74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x116E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116E08_0x116e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B78u; }
    }
    if (ctx->pc != 0x117B78u) { return; }
    ctx->pc = 0x117B78u;
    // 0x117b78: 0x14400007
    ctx->pc = 0x117B78u;
    {
        const bool branch_taken_0x117b78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x117b78) {
            ctx->pc = 0x117B98u;
            goto label_117b98;
        }
    }
    ctx->pc = 0x117B80u;
    // 0x117b80: 0xc04518c
    ctx->pc = 0x117B80u;
    SET_GPR_U32(ctx, 31, 0x117B88u);
    ctx->pc = 0x117B84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B88u; }
    }
    if (ctx->pc != 0x117B88u) { return; }
    ctx->pc = 0x117B88u;
label_117b88:
    // 0x117b88: 0xc045cbc
    ctx->pc = 0x117B88u;
    SET_GPR_U32(ctx, 31, 0x117B90u);
    ctx->pc = 0x117B8Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1172F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001172F0_0x1172f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B90u; }
    }
    if (ctx->pc != 0x117B90u) { return; }
    ctx->pc = 0x117B90u;
    // 0x117b90: 0x10000006
    ctx->pc = 0x117B90u;
    {
        const bool branch_taken_0x117b90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x117B94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x117b90) {
            ctx->pc = 0x117BACu;
            goto label_117bac;
        }
    }
    ctx->pc = 0x117B98u;
label_117b98:
    // 0x117b98: 0xc045198
    ctx->pc = 0x117B98u;
    SET_GPR_U32(ctx, 31, 0x117BA0u);
    ctx->pc = 0x117B9Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117BA0u; }
    }
    if (ctx->pc != 0x117BA0u) { return; }
    ctx->pc = 0x117BA0u;
    // 0x117ba0: 0xc04518c
    ctx->pc = 0x117BA0u;
    SET_GPR_U32(ctx, 31, 0x117BA8u);
    ctx->pc = 0x117BA4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117BA8u; }
    }
    if (ctx->pc != 0x117BA8u) { return; }
    ctx->pc = 0x117BA8u;
    // 0x117ba8: 0x102d
    ctx->pc = 0x117ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117bac:
    // 0x117bac: 0xdfbf00b0
    ctx->pc = 0x117bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x117bb0: 0xdfbe00a0
    ctx->pc = 0x117bb0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x117bb4: 0xdfb70090
    ctx->pc = 0x117bb4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x117bb8: 0xdfb60080
    ctx->pc = 0x117bb8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x117bbc: 0xdfb50070
    ctx->pc = 0x117bbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x117bc0: 0xdfb40060
    ctx->pc = 0x117bc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x117bc4: 0xdfb30050
    ctx->pc = 0x117bc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x117bc8: 0xdfb20040
    ctx->pc = 0x117bc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117bcc: 0xdfb10030
    ctx->pc = 0x117bccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117bd0: 0xdfb00020
    ctx->pc = 0x117bd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117bd4: 0x3e00008
    ctx->pc = 0x117BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117BD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117AB4u: goto label_117ab4;
            case 0x117AC4u: goto label_117ac4;
            case 0x117AD4u: goto label_117ad4;
            case 0x117AD8u: goto label_117ad8;
            case 0x117AF0u: goto label_117af0;
            case 0x117AF4u: goto label_117af4;
            case 0x117B2Cu: goto label_117b2c;
            case 0x117B54u: goto label_117b54;
            case 0x117B88u: goto label_117b88;
            case 0x117B98u: goto label_117b98;
            case 0x117BACu: goto label_117bac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117BDCu;
    // 0x117bdc: 0x0
    ctx->pc = 0x117bdcu;
    // NOP
}
