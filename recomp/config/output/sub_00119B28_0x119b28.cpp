#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00119B28
// Address: 0x119b28 - 0x119cd0
void sub_00119B28_0x119b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119b28u;

    // 0x119b28: 0x27bdff30
    ctx->pc = 0x119b28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x119b2c: 0xffb600a0
    ctx->pc = 0x119b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x119b30: 0xffb10050
    ctx->pc = 0x119b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x119b34: 0xa0b02d
    ctx->pc = 0x119b34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b38: 0x80882d
    ctx->pc = 0x119b38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b3c: 0xffb700b0
    ctx->pc = 0x119b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x119b40: 0xffb20060
    ctx->pc = 0x119b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x119b44: 0x2c0202d
    ctx->pc = 0x119b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b48: 0xffbf00c0
    ctx->pc = 0x119b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x119b4c: 0x3c170026
    ctx->pc = 0x119b4cu;
    SET_GPR_U32(ctx, 23, ((uint32_t)38 << 16));
    // 0x119b50: 0xffb50090
    ctx->pc = 0x119b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x119b54: 0x26f2ca40
    ctx->pc = 0x119b54u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 23), 4294953536));
    // 0x119b58: 0xffb40080
    ctx->pc = 0x119b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x119b5c: 0xffb30070
    ctx->pc = 0x119b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x119b60: 0xc04619c
    ctx->pc = 0x119B60u;
    SET_GPR_U32(ctx, 31, 0x119B68u);
    ctx->pc = 0x119B64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->pc = 0x118670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118670_0x118670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119B68u; }
    }
    if (ctx->pc != 0x119B68u) { return; }
    ctx->pc = 0x119B68u;
    // 0x119b68: 0x3c020021
    ctx->pc = 0x119b68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x119b6c: 0x8c439ddc
    ctx->pc = 0x119b6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294942172)));
    // 0x119b70: 0x54600004
    ctx->pc = 0x119B70u;
    {
        const bool branch_taken_0x119b70 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x119b70) {
            ctx->pc = 0x119B74u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x119B84u;
            goto label_119b84;
        }
    }
    ctx->pc = 0x119B78u;
    // 0x119b78: 0xc0461e8
    ctx->pc = 0x119B78u;
    SET_GPR_U32(ctx, 31, 0x119B80u);
    ctx->pc = 0x1187A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001187A0_0x1187a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119B80u; }
    }
    if (ctx->pc != 0x119B80u) { return; }
    ctx->pc = 0x119B80u;
    // 0x119b80: 0x92220000
    ctx->pc = 0x119b80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_119b84:
    // 0x119b84: 0x802d
    ctx->pc = 0x119b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b88: 0x21e00
    ctx->pc = 0x119b88u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 24));
    // 0x119b8c: 0x10600011
    ctx->pc = 0x119B8Cu;
    {
        const bool branch_taken_0x119b8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x119B90u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x119b8c) {
            ctx->pc = 0x119BD4u;
            goto label_119bd4;
        }
    }
    ctx->pc = 0x119B94u;
    // 0x119b94: 0x27b30030
    ctx->pc = 0x119b94u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 48));
    // 0x119b98: 0x3c150026
    ctx->pc = 0x119b98u;
    SET_GPR_U32(ctx, 21, ((uint32_t)38 << 16));
    // 0x119b9c: 0x3c140026
    ctx->pc = 0x119b9cu;
    SET_GPR_U32(ctx, 20, ((uint32_t)38 << 16));
    // 0x119ba0: 0x26100001
    ctx->pc = 0x119ba0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x119ba4: 0x0
    ctx->pc = 0x119ba4u;
    // NOP
label_119ba8:
    // 0x119ba8: 0x2a020400
    ctx->pc = 0x119ba8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 1024));
    // 0x119bac: 0x1040000c
    ctx->pc = 0x119BACu;
    {
        const bool branch_taken_0x119bac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x119BB0u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        if (branch_taken_0x119bac) {
            ctx->pc = 0x119BE0u;
            goto label_119be0;
        }
    }
    ctx->pc = 0x119BB4u;
    // 0x119bb4: 0x2502021
    ctx->pc = 0x119bb4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x119bb8: 0x90430000
    ctx->pc = 0x119bb8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119bbc: 0xa083000c
    ctx->pc = 0x119bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x119bc0: 0x31e00
    ctx->pc = 0x119bc0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x119bc4: 0x5460fff8
    ctx->pc = 0x119BC4u;
    {
        const bool branch_taken_0x119bc4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x119bc4) {
            ctx->pc = 0x119BC8u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x119BA8u;
            goto label_119ba8;
        }
    }
    ctx->pc = 0x119BCCu;
    // 0x119bcc: 0x10000005
    ctx->pc = 0x119BCCu;
    {
        const bool branch_taken_0x119bcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x119BD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
        if (branch_taken_0x119bcc) {
            ctx->pc = 0x119BE4u;
            goto label_119be4;
        }
    }
    ctx->pc = 0x119BD4u;
label_119bd4:
    // 0x119bd4: 0x27b30030
    ctx->pc = 0x119bd4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 48));
    // 0x119bd8: 0x3c150026
    ctx->pc = 0x119bd8u;
    SET_GPR_U32(ctx, 21, ((uint32_t)38 << 16));
    // 0x119bdc: 0x3c140026
    ctx->pc = 0x119bdcu;
    SET_GPR_U32(ctx, 20, ((uint32_t)38 << 16));
label_119be0:
    // 0x119be0: 0x24020400
    ctx->pc = 0x119be0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
label_119be4:
    // 0x119be4: 0x16020003
    ctx->pc = 0x119BE4u;
    {
        const bool branch_taken_0x119be4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x119BE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x119be4) {
            ctx->pc = 0x119BF4u;
            goto label_119bf4;
        }
    }
    ctx->pc = 0x119BECu;
    // 0x119bec: 0xa240040b
    ctx->pc = 0x119becu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
    // 0x119bf0: 0x241003ff
    ctx->pc = 0x119bf0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1023));
label_119bf4:
    // 0x119bf4: 0xafa00018
    ctx->pc = 0x119bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x119bf8: 0xafa20014
    ctx->pc = 0x119bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x119bfc: 0x27a40010
    ctx->pc = 0x119bfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x119c00: 0xafa00024
    ctx->pc = 0x119c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x119c04: 0xc045188
    ctx->pc = 0x119C04u;
    SET_GPR_U32(ctx, 31, 0x119C0Cu);
    ctx->pc = 0x119C08u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294956672));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C0Cu; }
    }
    if (ctx->pc != 0x119C0Cu) { return; }
    ctx->pc = 0x119C0Cu;
    // 0x119c0c: 0x40882d
    ctx->pc = 0x119c0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c10: 0xae530004
    ctx->pc = 0x119c10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x119c14: 0x24020004
    ctx->pc = 0x119c14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x119c18: 0xae510000
    ctx->pc = 0x119c18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x119c1c: 0xae420008
    ctx->pc = 0x119c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x119c20: 0x26a4e140
    ctx->pc = 0x119c20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 4294959424));
    // 0x119c24: 0x2c0282d
    ctx->pc = 0x119c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c28: 0x26e7ca40
    ctx->pc = 0x119c28u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 23), 4294953536));
    // 0x119c2c: 0x2608000d
    ctx->pc = 0x119c2cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 13));
    // 0x119c30: 0x302d
    ctx->pc = 0x119c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c34: 0xafa00000
    ctx->pc = 0x119c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x119c38: 0x280482d
    ctx->pc = 0x119c38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c3c: 0x240a0004
    ctx->pc = 0x119c3cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x119c40: 0xc045e7a
    ctx->pc = 0x119C40u;
    SET_GPR_U32(ctx, 31, 0x119C48u);
    ctx->pc = 0x119C44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C48u; }
    }
    if (ctx->pc != 0x119C48u) { return; }
    ctx->pc = 0x119C48u;
    // 0x119c48: 0x4410007
    ctx->pc = 0x119C48u;
    {
        const bool branch_taken_0x119c48 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x119C4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
        if (branch_taken_0x119c48) {
            ctx->pc = 0x119C68u;
            goto label_119c68;
        }
    }
    ctx->pc = 0x119C50u;
    // 0x119c50: 0xc04518c
    ctx->pc = 0x119C50u;
    SET_GPR_U32(ctx, 31, 0x119C58u);
    ctx->pc = 0x119C54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C58u; }
    }
    if (ctx->pc != 0x119C58u) { return; }
    ctx->pc = 0x119C58u;
    // 0x119c58: 0xc0461a8
    ctx->pc = 0x119C58u;
    SET_GPR_U32(ctx, 31, 0x119C60u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C60u; }
    }
    if (ctx->pc != 0x119C60u) { return; }
    ctx->pc = 0x119C60u;
    // 0x119c60: 0x1000000f
    ctx->pc = 0x119C60u;
    {
        const bool branch_taken_0x119c60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x119C64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x119c60) {
            ctx->pc = 0x119CA0u;
            goto label_119ca0;
        }
    }
    ctx->pc = 0x119C68u;
label_119c68:
    // 0x119c68: 0x2821025
    ctx->pc = 0x119c68u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x119c6c: 0xc0461a8
    ctx->pc = 0x119C6Cu;
    SET_GPR_U32(ctx, 31, 0x119C74u);
    ctx->pc = 0x119C70u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C74u; }
    }
    if (ctx->pc != 0x119C74u) { return; }
    ctx->pc = 0x119C74u;
    // 0x119c74: 0x16000005
    ctx->pc = 0x119C74u;
    {
        const bool branch_taken_0x119c74 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x119c74) {
            ctx->pc = 0x119C8Cu;
            goto label_119c8c;
        }
    }
    ctx->pc = 0x119C7Cu;
    // 0x119c7c: 0xc04518c
    ctx->pc = 0x119C7Cu;
    SET_GPR_U32(ctx, 31, 0x119C84u);
    ctx->pc = 0x119C80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C84u; }
    }
    if (ctx->pc != 0x119C84u) { return; }
    ctx->pc = 0x119C84u;
    // 0x119c84: 0x10000006
    ctx->pc = 0x119C84u;
    {
        const bool branch_taken_0x119c84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x119C88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x119c84) {
            ctx->pc = 0x119CA0u;
            goto label_119ca0;
        }
    }
    ctx->pc = 0x119C8Cu;
label_119c8c:
    // 0x119c8c: 0xc045198
    ctx->pc = 0x119C8Cu;
    SET_GPR_U32(ctx, 31, 0x119C94u);
    ctx->pc = 0x119C90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C94u; }
    }
    if (ctx->pc != 0x119C94u) { return; }
    ctx->pc = 0x119C94u;
    // 0x119c94: 0xc04518c
    ctx->pc = 0x119C94u;
    SET_GPR_U32(ctx, 31, 0x119C9Cu);
    ctx->pc = 0x119C98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C9Cu; }
    }
    if (ctx->pc != 0x119C9Cu) { return; }
    ctx->pc = 0x119C9Cu;
    // 0x119c9c: 0x8fa20030
    ctx->pc = 0x119c9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_119ca0:
    // 0x119ca0: 0xdfbf00c0
    ctx->pc = 0x119ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x119ca4: 0xdfb700b0
    ctx->pc = 0x119ca4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x119ca8: 0xdfb600a0
    ctx->pc = 0x119ca8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x119cac: 0xdfb50090
    ctx->pc = 0x119cacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x119cb0: 0xdfb40080
    ctx->pc = 0x119cb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x119cb4: 0xdfb30070
    ctx->pc = 0x119cb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x119cb8: 0xdfb20060
    ctx->pc = 0x119cb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119cbc: 0xdfb10050
    ctx->pc = 0x119cbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119cc0: 0xdfb00040
    ctx->pc = 0x119cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119cc4: 0x3e00008
    ctx->pc = 0x119CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119CC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119B84u: goto label_119b84;
            case 0x119BA8u: goto label_119ba8;
            case 0x119BD4u: goto label_119bd4;
            case 0x119BE0u: goto label_119be0;
            case 0x119BE4u: goto label_119be4;
            case 0x119BF4u: goto label_119bf4;
            case 0x119C68u: goto label_119c68;
            case 0x119C8Cu: goto label_119c8c;
            case 0x119CA0u: goto label_119ca0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119CCCu;
    // 0x119ccc: 0x0
    ctx->pc = 0x119cccu;
    // NOP
}
