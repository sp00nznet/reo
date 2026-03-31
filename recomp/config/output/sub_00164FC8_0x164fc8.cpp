#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00164FC8
// Address: 0x164fc8 - 0x1650a0
void sub_00164FC8_0x164fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x164fc8u;

    // 0x164fc8: 0x27bdfff0
    ctx->pc = 0x164fc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164fcc: 0xffbf0000
    ctx->pc = 0x164fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164fd0: 0x8c821b74
    ctx->pc = 0x164fd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 7028)));
    // 0x164fd4: 0xdfbf0000
    ctx->pc = 0x164fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164fd8: 0x8c440000
    ctx->pc = 0x164fd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164fdc: 0x804cca0
    ctx->pc = 0x164FDCu;
    ctx->pc = 0x164FE0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x133280u;
    entry_133280_0x133428(rdram, ctx, runtime); return;
    ctx->pc = 0x164FE4u;
    // 0x164fe4: 0x0
    ctx->pc = 0x164fe4u;
    // NOP
    // 0x164fe8: 0x27bdffc0
    ctx->pc = 0x164fe8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x164fec: 0xffb30028
    ctx->pc = 0x164fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x164ff0: 0xe0982d
    ctx->pc = 0x164ff0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164ff4: 0xffb00010
    ctx->pc = 0x164ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x164ff8: 0x80802d
    ctx->pc = 0x164ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164ffc: 0xffb10018
    ctx->pc = 0x164ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x165000: 0xa0882d
    ctx->pc = 0x165000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165004: 0xffb20020
    ctx->pc = 0x165004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x165008: 0xc0902d
    ctx->pc = 0x165008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16500c: 0xffb40030
    ctx->pc = 0x16500cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x165010: 0x2a420120
    ctx->pc = 0x165010u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 288));
    // 0x165014: 0xffbf0038
    ctx->pc = 0x165014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x165018: 0x3a0302d
    ctx->pc = 0x165018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16501c: 0xae600000
    ctx->pc = 0x16501cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x165020: 0x240282d
    ctx->pc = 0x165020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165024: 0x220202d
    ctx->pc = 0x165024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165028: 0x14400014
    ctx->pc = 0x165028u;
    {
        const bool branch_taken_0x165028 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16502Cu;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 16), 7028)));
        if (branch_taken_0x165028) {
            ctx->pc = 0x16507Cu;
            goto label_16507c;
        }
    }
    ctx->pc = 0x165030u;
    // 0x165030: 0xc04cc6a
    ctx->pc = 0x165030u;
    SET_GPR_U32(ctx, 31, 0x165038u);
    ctx->pc = 0x1331A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001331A8_0x1331a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165038u; }
    }
    if (ctx->pc != 0x165038u) { return; }
    ctx->pc = 0x165038u;
    // 0x165038: 0x1440000c
    ctx->pc = 0x165038u;
    {
        const bool branch_taken_0x165038 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16503Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x165038) {
            ctx->pc = 0x16506Cu;
            goto label_16506c;
        }
    }
    ctx->pc = 0x165040u;
    // 0x165040: 0xc05a660
    ctx->pc = 0x165040u;
    SET_GPR_U32(ctx, 31, 0x165048u);
    ctx->pc = 0x165044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169980u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169980_0x169980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165048u; }
    }
    if (ctx->pc != 0x165048u) { return; }
    ctx->pc = 0x165048u;
    // 0x165048: 0x182d
    ctx->pc = 0x165048u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16504c: 0x2842006c
    ctx->pc = 0x16504cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 108));
    // 0x165050: 0x200202d
    ctx->pc = 0x165050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165054: 0x240302d
    ctx->pc = 0x165054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165058: 0x10400004
    ctx->pc = 0x165058u;
    {
        const bool branch_taken_0x165058 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16505Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x165058) {
            ctx->pc = 0x16506Cu;
            goto label_16506c;
        }
    }
    ctx->pc = 0x165060u;
    // 0x165060: 0xc059428
    ctx->pc = 0x165060u;
    SET_GPR_U32(ctx, 31, 0x165068u);
    ctx->pc = 0x1650A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001650A0_0x1650a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165068u; }
    }
    if (ctx->pc != 0x165068u) { return; }
    ctx->pc = 0x165068u;
    // 0x165068: 0x511823
    ctx->pc = 0x165068u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_16506c:
    // 0x16506c: 0x3c020016
    ctx->pc = 0x16506cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)22 << 16));
    // 0x165070: 0xae630000
    ctx->pc = 0x165070u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x165074: 0x24424ce0
    ctx->pc = 0x165074u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19680));
    // 0x165078: 0xae82003c
    ctx->pc = 0x165078u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
label_16507c:
    // 0x16507c: 0xdfb00010
    ctx->pc = 0x16507cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165080: 0xdfb10018
    ctx->pc = 0x165080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x165084: 0xdfb20020
    ctx->pc = 0x165084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165088: 0xdfb30028
    ctx->pc = 0x165088u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16508c: 0xdfb40030
    ctx->pc = 0x16508cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165090: 0xdfbf0038
    ctx->pc = 0x165090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165094: 0x3e00008
    ctx->pc = 0x165094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165098u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16506Cu: goto label_16506c;
            case 0x16507Cu: goto label_16507c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16509Cu;
    // 0x16509c: 0x0
    ctx->pc = 0x16509cu;
    // NOP
}
