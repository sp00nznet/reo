#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00118A70
// Address: 0x118a70 - 0x118cf8
void sub_00118A70_0x118a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x118a70u;

    // 0x118a70: 0x27bdfeb0
    ctx->pc = 0x118a70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x118a74: 0xffb00040
    ctx->pc = 0x118a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x118a78: 0xffb700b0
    ctx->pc = 0x118a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x118a7c: 0x80802d
    ctx->pc = 0x118a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a80: 0xffbe00c0
    ctx->pc = 0x118a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x118a84: 0xa0b82d
    ctx->pc = 0x118a84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a88: 0xffb10050
    ctx->pc = 0x118a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x118a8c: 0x202d
    ctx->pc = 0x118a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a90: 0xffbf00d0
    ctx->pc = 0x118a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x118a94: 0x3c1e0026
    ctx->pc = 0x118a94u;
    SET_GPR_U32(ctx, 30, ((uint32_t)38 << 16));
    // 0x118a98: 0xffb600a0
    ctx->pc = 0x118a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x118a9c: 0x27d1ca40
    ctx->pc = 0x118a9cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 30), 4294953536));
    // 0x118aa0: 0xffb50090
    ctx->pc = 0x118aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x118aa4: 0xffb40080
    ctx->pc = 0x118aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x118aa8: 0xffb30070
    ctx->pc = 0x118aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x118aac: 0xffb20060
    ctx->pc = 0x118aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x118ab0: 0xffa60120
    ctx->pc = 0x118ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 6));
    // 0x118ab4: 0xffa70128
    ctx->pc = 0x118ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 7));
    // 0x118ab8: 0xffa80130
    ctx->pc = 0x118ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 8));
    // 0x118abc: 0xffa90138
    ctx->pc = 0x118abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 9));
    // 0x118ac0: 0xffaa0140
    ctx->pc = 0x118ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 10));
    // 0x118ac4: 0xc04619c
    ctx->pc = 0x118AC4u;
    SET_GPR_U32(ctx, 31, 0x118ACCu);
    ctx->pc = 0x118AC8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 11));
    ctx->pc = 0x118670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118670_0x118670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118ACCu; }
    }
    if (ctx->pc != 0x118ACCu) { return; }
    ctx->pc = 0x118ACCu;
    // 0x118acc: 0x3c030021
    ctx->pc = 0x118accu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x118ad0: 0x8c629ddc
    ctx->pc = 0x118ad0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294942172)));
    // 0x118ad4: 0x14400003
    ctx->pc = 0x118AD4u;
    {
        const bool branch_taken_0x118ad4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x118ad4) {
            ctx->pc = 0x118AE4u;
            goto label_118ae4;
        }
    }
    ctx->pc = 0x118ADCu;
    // 0x118adc: 0xc0461e8
    ctx->pc = 0x118ADCu;
    SET_GPR_U32(ctx, 31, 0x118AE4u);
    ctx->pc = 0x1187A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001187A0_0x1187a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118AE4u; }
    }
    if (ctx->pc != 0x118AE4u) { return; }
    ctx->pc = 0x118AE4u;
label_118ae4:
    // 0x118ae4: 0xc04626a
    ctx->pc = 0x118AE4u;
    SET_GPR_U32(ctx, 31, 0x118AECu);
    ctx->pc = 0x1189A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001189A8_0x1189a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118AECu; }
    }
    if (ctx->pc != 0x118AECu) { return; }
    ctx->pc = 0x118AECu;
    // 0x118aec: 0x10400006
    ctx->pc = 0x118AECu;
    {
        const bool branch_taken_0x118aec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x118aec) {
            ctx->pc = 0x118B08u;
            goto label_118b08;
        }
    }
    ctx->pc = 0x118AF4u;
    // 0x118af4: 0xc0461a8
    ctx->pc = 0x118AF4u;
    SET_GPR_U32(ctx, 31, 0x118AFCu);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118AFCu; }
    }
    if (ctx->pc != 0x118AFCu) { return; }
    ctx->pc = 0x118AFCu;
    // 0x118afc: 0x3c02fffe
    ctx->pc = 0x118afcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x118b00: 0x10000070
    ctx->pc = 0x118B00u;
    {
        const bool branch_taken_0x118b00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x118B04u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65532));
        if (branch_taken_0x118b00) {
            ctx->pc = 0x118CC4u;
            goto label_118cc4;
        }
    }
    ctx->pc = 0x118B08u;
label_118b08:
    // 0x118b08: 0xc04605c
    ctx->pc = 0x118B08u;
    SET_GPR_U32(ctx, 31, 0x118B10u);
    ctx->pc = 0x118170u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118170_0x118170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118B10u; }
    }
    if (ctx->pc != 0x118B10u) { return; }
    ctx->pc = 0x118B10u;
    // 0x118b10: 0x40982d
    ctx->pc = 0x118b10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118b14: 0x56600005
    ctx->pc = 0x118B14u;
    {
        const bool branch_taken_0x118b14 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x118b14) {
            ctx->pc = 0x118B18u;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x118B2Cu;
            goto label_118b2c;
        }
    }
    ctx->pc = 0x118B1Cu;
    // 0x118b1c: 0xc0461a8
    ctx->pc = 0x118B1Cu;
    SET_GPR_U32(ctx, 31, 0x118B24u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118B24u; }
    }
    if (ctx->pc != 0x118B24u) { return; }
    ctx->pc = 0x118B24u;
    // 0x118b24: 0x10000067
    ctx->pc = 0x118B24u;
    {
        const bool branch_taken_0x118b24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x118B28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967277));
        if (branch_taken_0x118b24) {
            ctx->pc = 0x118CC4u;
            goto label_118cc4;
        }
    }
    ctx->pc = 0x118B2Cu;
label_118b2c:
    // 0x118b2c: 0x282d
    ctx->pc = 0x118b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118b30: 0x8fa70120
    ctx->pc = 0x118b30u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x118b34: 0x31600
    ctx->pc = 0x118b34u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
    // 0x118b38: 0x10400012
    ctx->pc = 0x118B38u;
    {
        const bool branch_taken_0x118b38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x118B3Cu;
        WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x118b38) {
            ctx->pc = 0x118B84u;
            goto label_118b84;
        }
    }
    ctx->pc = 0x118B40u;
    // 0x118b40: 0x3c060026
    ctx->pc = 0x118b40u;
    SET_GPR_U32(ctx, 6, ((uint32_t)38 << 16));
    // 0x118b44: 0x27b20030
    ctx->pc = 0x118b44u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 48));
    // 0x118b48: 0x3c160026
    ctx->pc = 0x118b48u;
    SET_GPR_U32(ctx, 22, ((uint32_t)38 << 16));
    // 0x118b4c: 0x3c140026
    ctx->pc = 0x118b4cu;
    SET_GPR_U32(ctx, 20, ((uint32_t)38 << 16));
    // 0x118b50: 0x24a50001
    ctx->pc = 0x118b50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x118b54: 0x0
    ctx->pc = 0x118b54u;
    // NOP
label_118b58:
    // 0x118b58: 0x28a20400
    ctx->pc = 0x118b58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 1024));
    // 0x118b5c: 0x1040000d
    ctx->pc = 0x118B5Cu;
    {
        const bool branch_taken_0x118b5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x118B60u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        if (branch_taken_0x118b5c) {
            ctx->pc = 0x118B94u;
            goto label_118b94;
        }
    }
    ctx->pc = 0x118B64u;
    // 0x118b64: 0x2252021
    ctx->pc = 0x118b64u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x118b68: 0x90430000
    ctx->pc = 0x118b68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118b6c: 0xa0830014
    ctx->pc = 0x118b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x118b70: 0x31e00
    ctx->pc = 0x118b70u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x118b74: 0x5460fff8
    ctx->pc = 0x118B74u;
    {
        const bool branch_taken_0x118b74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x118b74) {
            ctx->pc = 0x118B78u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x118B58u;
            goto label_118b58;
        }
    }
    ctx->pc = 0x118B7Cu;
    // 0x118b7c: 0x10000006
    ctx->pc = 0x118B7Cu;
    {
        const bool branch_taken_0x118b7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x118B80u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
        if (branch_taken_0x118b7c) {
            ctx->pc = 0x118B98u;
            goto label_118b98;
        }
    }
    ctx->pc = 0x118B84u;
label_118b84:
    // 0x118b84: 0x3c060026
    ctx->pc = 0x118b84u;
    SET_GPR_U32(ctx, 6, ((uint32_t)38 << 16));
    // 0x118b88: 0x27b20030
    ctx->pc = 0x118b88u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 48));
    // 0x118b8c: 0x3c160026
    ctx->pc = 0x118b8cu;
    SET_GPR_U32(ctx, 22, ((uint32_t)38 << 16));
    // 0x118b90: 0x3c140026
    ctx->pc = 0x118b90u;
    SET_GPR_U32(ctx, 20, ((uint32_t)38 << 16));
label_118b94:
    // 0x118b94: 0x24020400
    ctx->pc = 0x118b94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
label_118b98:
    // 0x118b98: 0x50a20001
    ctx->pc = 0x118B98u;
    {
        const bool branch_taken_0x118b98 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x118b98) {
            ctx->pc = 0x118B9Cu;
            WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x118BA0u;
            goto label_118ba0;
        }
    }
    ctx->pc = 0x118BA0u;
label_118ba0:
    // 0x118ba0: 0x24c2df40
    ctx->pc = 0x118ba0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294958912));
    // 0x118ba4: 0x3c037fff
    ctx->pc = 0x118ba4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x118ba8: 0x2621023
    ctx->pc = 0x118ba8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x118bac: 0x3463ffff
    ctx->pc = 0x118bacu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x118bb0: 0x2a903
    ctx->pc = 0x118bb0u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 4));
    // 0x118bb4: 0x2e31824
    ctx->pc = 0x118bb4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x118bb8: 0xae23000c
    ctx->pc = 0x118bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x118bbc: 0x24020001
    ctx->pc = 0x118bbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x118bc0: 0xae270010
    ctx->pc = 0x118bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 7));
    // 0x118bc4: 0x27a40010
    ctx->pc = 0x118bc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x118bc8: 0xafa20014
    ctx->pc = 0x118bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x118bcc: 0x2694d680
    ctx->pc = 0x118bccu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294956672));
    // 0x118bd0: 0xae350414
    ctx->pc = 0x118bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 21));
    // 0x118bd4: 0xafa00018
    ctx->pc = 0x118bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x118bd8: 0xc045188
    ctx->pc = 0x118BD8u;
    SET_GPR_U32(ctx, 31, 0x118BE0u);
    ctx->pc = 0x118BDCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118BE0u; }
    }
    if (ctx->pc != 0x118BE0u) { return; }
    ctx->pc = 0x118BE0u;
    // 0x118be0: 0x40802d
    ctx->pc = 0x118be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118be4: 0xae320004
    ctx->pc = 0x118be4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x118be8: 0x24020004
    ctx->pc = 0x118be8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x118bec: 0xae300000
    ctx->pc = 0x118becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x118bf0: 0xae220008
    ctx->pc = 0x118bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x118bf4: 0x26c4e140
    ctx->pc = 0x118bf4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 4294959424));
    // 0x118bf8: 0x27c7ca40
    ctx->pc = 0x118bf8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 30), 4294953536));
    // 0x118bfc: 0x282d
    ctx->pc = 0x118bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c00: 0xafa00000
    ctx->pc = 0x118c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x118c04: 0x302d
    ctx->pc = 0x118c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c08: 0x24080418
    ctx->pc = 0x118c08u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1048));
    // 0x118c0c: 0x280482d
    ctx->pc = 0x118c0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c10: 0x240a0004
    ctx->pc = 0x118c10u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x118c14: 0xc045e7a
    ctx->pc = 0x118C14u;
    SET_GPR_U32(ctx, 31, 0x118C1Cu);
    ctx->pc = 0x118C18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118C1Cu; }
    }
    if (ctx->pc != 0x118C1Cu) { return; }
    ctx->pc = 0x118C1Cu;
    // 0x118c1c: 0x4410007
    ctx->pc = 0x118C1Cu;
    {
        const bool branch_taken_0x118c1c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x118C20u;
        SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
        if (branch_taken_0x118c1c) {
            ctx->pc = 0x118C3Cu;
            goto label_118c3c;
        }
    }
    ctx->pc = 0x118C24u;
    // 0x118c24: 0xc04518c
    ctx->pc = 0x118C24u;
    SET_GPR_U32(ctx, 31, 0x118C2Cu);
    ctx->pc = 0x118C28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118C2Cu; }
    }
    if (ctx->pc != 0x118C2Cu) { return; }
    ctx->pc = 0x118C2Cu;
    // 0x118c2c: 0xc0461a8
    ctx->pc = 0x118C2Cu;
    SET_GPR_U32(ctx, 31, 0x118C34u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118C34u; }
    }
    if (ctx->pc != 0x118C34u) { return; }
    ctx->pc = 0x118C34u;
    // 0x118c34: 0x10000023
    ctx->pc = 0x118C34u;
    {
        const bool branch_taken_0x118c34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x118C38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x118c34) {
            ctx->pc = 0x118CC4u;
            goto label_118cc4;
        }
    }
    ctx->pc = 0x118C3Cu;
label_118c3c:
    // 0x118c3c: 0x2821025
    ctx->pc = 0x118c3cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x118c40: 0xc0461a8
    ctx->pc = 0x118C40u;
    SET_GPR_U32(ctx, 31, 0x118C48u);
    ctx->pc = 0x118C44u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118C48u; }
    }
    if (ctx->pc != 0x118C48u) { return; }
    ctx->pc = 0x118C48u;
    // 0x118c48: 0x16200005
    ctx->pc = 0x118C48u;
    {
        const bool branch_taken_0x118c48 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x118c48) {
            ctx->pc = 0x118C60u;
            goto label_118c60;
        }
    }
    ctx->pc = 0x118C50u;
    // 0x118c50: 0xc04518c
    ctx->pc = 0x118C50u;
    SET_GPR_U32(ctx, 31, 0x118C58u);
    ctx->pc = 0x118C54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118C58u; }
    }
    if (ctx->pc != 0x118C58u) { return; }
    ctx->pc = 0x118C58u;
    // 0x118c58: 0x1000001a
    ctx->pc = 0x118C58u;
    {
        const bool branch_taken_0x118c58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x118C5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x118c58) {
            ctx->pc = 0x118CC4u;
            goto label_118cc4;
        }
    }
    ctx->pc = 0x118C60u;
label_118c60:
    // 0x118c60: 0xc045198
    ctx->pc = 0x118C60u;
    SET_GPR_U32(ctx, 31, 0x118C68u);
    ctx->pc = 0x118C64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118C68u; }
    }
    if (ctx->pc != 0x118C68u) { return; }
    ctx->pc = 0x118C68u;
    // 0x118c68: 0xc04518c
    ctx->pc = 0x118C68u;
    SET_GPR_U32(ctx, 31, 0x118C70u);
    ctx->pc = 0x118C6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118C70u; }
    }
    if (ctx->pc != 0x118C70u) { return; }
    ctx->pc = 0x118C70u;
    // 0x118c70: 0x8fa30030
    ctx->pc = 0x118c70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118c74: 0x4610008
    ctx->pc = 0x118C74u;
    {
        const bool branch_taken_0x118c74 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x118C78u;
        SET_GPR_U32(ctx, 16, ((uint32_t)33 << 16));
        if (branch_taken_0x118c74) {
            ctx->pc = 0x118C98u;
            goto label_118c98;
        }
    }
    ctx->pc = 0x118C7Cu;
    // 0x118c7c: 0xc045198
    ctx->pc = 0x118C7Cu;
    SET_GPR_U32(ctx, 31, 0x118C84u);
    ctx->pc = 0x118C80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294942184)));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118C84u; }
    }
    if (ctx->pc != 0x118C84u) { return; }
    ctx->pc = 0x118C84u;
    // 0x118c84: 0xae600004
    ctx->pc = 0x118c84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x118c88: 0xc045190
    ctx->pc = 0x118C88u;
    SET_GPR_U32(ctx, 31, 0x118C90u);
    ctx->pc = 0x118C8Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294942184)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118C90u; }
    }
    if (ctx->pc != 0x118C90u) { return; }
    ctx->pc = 0x118C90u;
    // 0x118c90: 0x1000000c
    ctx->pc = 0x118C90u;
    {
        const bool branch_taken_0x118c90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x118C94u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x118c90) {
            ctx->pc = 0x118CC4u;
            goto label_118cc4;
        }
    }
    ctx->pc = 0x118C98u;
label_118c98:
    // 0x118c98: 0x2a0882d
    ctx->pc = 0x118c98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c9c: 0xc045198
    ctx->pc = 0x118C9Cu;
    SET_GPR_U32(ctx, 31, 0x118CA4u);
    ctx->pc = 0x118CA0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294942184)));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118CA4u; }
    }
    if (ctx->pc != 0x118CA4u) { return; }
    ctx->pc = 0x118CA4u;
    // 0x118ca4: 0x8e630004
    ctx->pc = 0x118ca4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x118ca8: 0x8fa20030
    ctx->pc = 0x118ca8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118cac: 0x8e049de8
    ctx->pc = 0x118cacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294942184)));
    // 0x118cb0: 0x771825
    ctx->pc = 0x118cb0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x118cb4: 0xae630004
    ctx->pc = 0x118cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x118cb8: 0xc045190
    ctx->pc = 0x118CB8u;
    SET_GPR_U32(ctx, 31, 0x118CC0u);
    ctx->pc = 0x118CBCu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118CC0u; }
    }
    if (ctx->pc != 0x118CC0u) { return; }
    ctx->pc = 0x118CC0u;
    // 0x118cc0: 0x220102d
    ctx->pc = 0x118cc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_118cc4:
    // 0x118cc4: 0xdfbf00d0
    ctx->pc = 0x118cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x118cc8: 0xdfbe00c0
    ctx->pc = 0x118cc8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x118ccc: 0xdfb700b0
    ctx->pc = 0x118cccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x118cd0: 0xdfb600a0
    ctx->pc = 0x118cd0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x118cd4: 0xdfb50090
    ctx->pc = 0x118cd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x118cd8: 0xdfb40080
    ctx->pc = 0x118cd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x118cdc: 0xdfb30070
    ctx->pc = 0x118cdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x118ce0: 0xdfb20060
    ctx->pc = 0x118ce0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x118ce4: 0xdfb10050
    ctx->pc = 0x118ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118ce8: 0xdfb00040
    ctx->pc = 0x118ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118cec: 0x3e00008
    ctx->pc = 0x118CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118CF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118AE4u: goto label_118ae4;
            case 0x118B08u: goto label_118b08;
            case 0x118B2Cu: goto label_118b2c;
            case 0x118B58u: goto label_118b58;
            case 0x118B84u: goto label_118b84;
            case 0x118B94u: goto label_118b94;
            case 0x118B98u: goto label_118b98;
            case 0x118BA0u: goto label_118ba0;
            case 0x118C3Cu: goto label_118c3c;
            case 0x118C60u: goto label_118c60;
            case 0x118C98u: goto label_118c98;
            case 0x118CC4u: goto label_118cc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x118CF4u;
    // 0x118cf4: 0x0
    ctx->pc = 0x118cf4u;
    // NOP
}
