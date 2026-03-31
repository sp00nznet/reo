#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016DBF8
// Address: 0x16dbf8 - 0x16dd98
void sub_0016DBF8_0x16dbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16dbf8u;

    // 0x16dbf8: 0x27bdffc0
    ctx->pc = 0x16dbf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16dbfc: 0x102d
    ctx->pc = 0x16dbfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc00: 0xffb00030
    ctx->pc = 0x16dc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16dc04: 0x80802d
    ctx->pc = 0x16dc04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc08: 0xffbf0038
    ctx->pc = 0x16dc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16dc0c: 0xa0202d
    ctx->pc = 0x16dc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc10: 0x8e030d04
    ctx->pc = 0x16dc10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 3332)));
    // 0x16dc14: 0x10600018
    ctx->pc = 0x16DC14u;
    {
        const bool branch_taken_0x16dc14 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16DC18u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16dc14) {
            ctx->pc = 0x16DC78u;
            goto label_16dc78;
        }
    }
    ctx->pc = 0x16DC1Cu;
    // 0x16dc1c: 0xc05b87c
    ctx->pc = 0x16DC1Cu;
    SET_GPR_U32(ctx, 31, 0x16DC24u);
    ctx->pc = 0x16E1F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E1F0_0x16e1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC24u; }
    }
    if (ctx->pc != 0x16DC24u) { return; }
    ctx->pc = 0x16DC24u;
    // 0x16dc24: 0x3a0202d
    ctx->pc = 0x16dc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc28: 0x27a50020
    ctx->pc = 0x16dc28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x16dc2c: 0xc05da70
    ctx->pc = 0x16DC2Cu;
    SET_GPR_U32(ctx, 31, 0x16DC34u);
    ctx->pc = 0x16DC30u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 36));
    ctx->pc = 0x1769C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001769C0_0x1769c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC34u; }
    }
    if (ctx->pc != 0x16DC34u) { return; }
    ctx->pc = 0x16DC34u;
    // 0x16dc34: 0x26040d08
    ctx->pc = 0x16dc34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 3336));
    // 0x16dc38: 0x27a50028
    ctx->pc = 0x16dc38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 40));
    // 0x16dc3c: 0xc05da70
    ctx->pc = 0x16DC3Cu;
    SET_GPR_U32(ctx, 31, 0x16DC44u);
    ctx->pc = 0x16DC40u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 36));
    ctx->pc = 0x1769C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001769C0_0x1769c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC44u; }
    }
    if (ctx->pc != 0x16DC44u) { return; }
    ctx->pc = 0x16DC44u;
    // 0x16dc44: 0x200202d
    ctx->pc = 0x16dc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc48: 0xc05d58a
    ctx->pc = 0x16DC48u;
    SET_GPR_U32(ctx, 31, 0x16DC50u);
    ctx->pc = 0x16DC4Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 53));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC50u; }
    }
    if (ctx->pc != 0x16DC50u) { return; }
    ctx->pc = 0x16DC50u;
    // 0x16dc50: 0x8fa60020
    ctx->pc = 0x16dc50u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16dc54: 0x8fa50028
    ctx->pc = 0x16dc54u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16dc58: 0x8fa30024
    ctx->pc = 0x16dc58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x16dc5c: 0xa6202a
    ctx->pc = 0x16dc5cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x16dc60: 0x431818
    ctx->pc = 0x16dc60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x16dc64: 0x10800004
    ctx->pc = 0x16DC64u;
    {
        const bool branch_taken_0x16dc64 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x16DC68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16dc64) {
            ctx->pc = 0x16DC78u;
            goto label_16dc78;
        }
    }
    ctx->pc = 0x16DC6Cu;
    // 0x16dc6c: 0xa31021
    ctx->pc = 0x16dc6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16dc70: 0xc2102a
    ctx->pc = 0x16dc70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x16dc74: 0x2c420001
    ctx->pc = 0x16dc74u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_16dc78:
    // 0x16dc78: 0xdfb00030
    ctx->pc = 0x16dc78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16dc7c: 0xdfbf0038
    ctx->pc = 0x16dc7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16dc80: 0x3e00008
    ctx->pc = 0x16DC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DC84u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16DC78u: goto label_16dc78;
            case 0x16DCD8u: goto label_16dcd8;
            case 0x16DCDCu: goto label_16dcdc;
            case 0x16DD08u: goto label_16dd08;
            case 0x16DD20u: goto label_16dd20;
            case 0x16DD40u: goto label_16dd40;
            case 0x16DD88u: goto label_16dd88;
            case 0x16DD8Cu: goto label_16dd8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16DC88u;
    // 0x16dc88: 0x27bdffd0
    ctx->pc = 0x16dc88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16dc8c: 0xe0182d
    ctx->pc = 0x16dc8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc90: 0xffb00020
    ctx->pc = 0x16dc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x16dc94: 0xa0802d
    ctx->pc = 0x16dc94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc98: 0xffbf0028
    ctx->pc = 0x16dc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x16dc9c: 0x24880d08
    ctx->pc = 0x16dc9cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 3336));
    // 0x16dca0: 0x24820d04
    ctx->pc = 0x16dca0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 3332));
    // 0x16dca4: 0x8e070014
    ctx->pc = 0x16dca4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16dca8: 0x8e09001c
    ctx->pc = 0x16dca8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16dcac: 0x1060000a
    ctx->pc = 0x16DCACu;
    {
        const bool branch_taken_0x16dcac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16DCB0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        if (branch_taken_0x16dcac) {
            ctx->pc = 0x16DCD8u;
            goto label_16dcd8;
        }
    }
    ctx->pc = 0x16DCB4u;
    // 0x16dcb4: 0x4c20009
    ctx->pc = 0x16DCB4u;
    {
        const bool branch_taken_0x16dcb4 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x16dcb4) {
            ctx->pc = 0x16DCB8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->pc = 0x16DCDCu;
            goto label_16dcdc;
        }
    }
    ctx->pc = 0x16DCBCu;
    // 0x16dcbc: 0xc0202d
    ctx->pc = 0x16dcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dcc0: 0x120302d
    ctx->pc = 0x16dcc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dcc4: 0xc05b766
    ctx->pc = 0x16DCC4u;
    SET_GPR_U32(ctx, 31, 0x16DCCCu);
    ctx->pc = 0x16DCC8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DD98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DD98_0x16dd98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DCCCu; }
    }
    if (ctx->pc != 0x16DCCCu) { return; }
    ctx->pc = 0x16DCCCu;
    // 0x16dccc: 0x10000014
    ctx->pc = 0x16DCCCu;
    {
        const bool branch_taken_0x16dccc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16DCD0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x16dccc) {
            ctx->pc = 0x16DD20u;
            goto label_16dd20;
        }
    }
    ctx->pc = 0x16DCD4u;
    // 0x16dcd4: 0x0
    ctx->pc = 0x16dcd4u;
    // NOP
label_16dcd8:
    // 0x16dcd8: 0x8c420000
    ctx->pc = 0x16dcd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16dcdc:
    // 0x16dcdc: 0x1440000a
    ctx->pc = 0x16DCDCu;
    {
        const bool branch_taken_0x16dcdc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16dcdc) {
            ctx->pc = 0x16DD08u;
            goto label_16dd08;
        }
    }
    ctx->pc = 0x16DCE4u;
    // 0x16dce4: 0x8c822ab0
    ctx->pc = 0x16dce4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 10928)));
    // 0x16dce8: 0x54400028
    ctx->pc = 0x16DCE8u;
    {
        const bool branch_taken_0x16dce8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16dce8) {
            ctx->pc = 0x16DCECu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->pc = 0x16DD8Cu;
            goto label_16dd8c;
        }
    }
    ctx->pc = 0x16DCF0u;
    // 0x16dcf0: 0xae00002c
    ctx->pc = 0x16dcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x16dcf4: 0xae00001c
    ctx->pc = 0x16dcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x16dcf8: 0xae000020
    ctx->pc = 0x16dcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x16dcfc: 0xae000024
    ctx->pc = 0x16dcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x16dd00: 0x10000021
    ctx->pc = 0x16DD00u;
    {
        const bool branch_taken_0x16dd00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16DD04u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        if (branch_taken_0x16dd00) {
            ctx->pc = 0x16DD88u;
            goto label_16dd88;
        }
    }
    ctx->pc = 0x16DD08u;
label_16dd08:
    // 0x16dd08: 0x1060000d
    ctx->pc = 0x16DD08u;
    {
        const bool branch_taken_0x16dd08 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16DD0Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16dd08) {
            ctx->pc = 0x16DD40u;
            goto label_16dd40;
        }
    }
    ctx->pc = 0x16DD10u;
    // 0x16dd10: 0x120302d
    ctx->pc = 0x16dd10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dd14: 0xc05b7e0
    ctx->pc = 0x16DD14u;
    SET_GPR_U32(ctx, 31, 0x16DD1Cu);
    ctx->pc = 0x16DD18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DF80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DF80_0x16df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD1Cu; }
    }
    if (ctx->pc != 0x16DD1Cu) { return; }
    ctx->pc = 0x16DD1Cu;
    // 0x16dd1c: 0x8fa30008
    ctx->pc = 0x16dd1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_16dd20:
    // 0x16dd20: 0x8fa4000c
    ctx->pc = 0x16dd20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16dd24: 0x8fa50010
    ctx->pc = 0x16dd24u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16dd28: 0x8fa20014
    ctx->pc = 0x16dd28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x16dd2c: 0xae030020
    ctx->pc = 0x16dd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x16dd30: 0xae02002c
    ctx->pc = 0x16dd30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x16dd34: 0xae040024
    ctx->pc = 0x16dd34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x16dd38: 0x10000013
    ctx->pc = 0x16DD38u;
    {
        const bool branch_taken_0x16dd38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16DD3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
        if (branch_taken_0x16dd38) {
            ctx->pc = 0x16DD88u;
            goto label_16dd88;
        }
    }
    ctx->pc = 0x16DD40u;
label_16dd40:
    // 0x16dd40: 0x8d020008
    ctx->pc = 0x16dd40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x16dd44: 0xae020020
    ctx->pc = 0x16dd44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x16dd48: 0x8d03000c
    ctx->pc = 0x16dd48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x16dd4c: 0xae030024
    ctx->pc = 0x16dd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x16dd50: 0x8d020010
    ctx->pc = 0x16dd50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x16dd54: 0xae020028
    ctx->pc = 0x16dd54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x16dd58: 0x8d040014
    ctx->pc = 0x16dd58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x16dd5c: 0xae04002c
    ctx->pc = 0x16dd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x16dd60: 0x8d030018
    ctx->pc = 0x16dd60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x16dd64: 0x671823
    ctx->pc = 0x16dd64u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x16dd68: 0x24620337
    ctx->pc = 0x16dd68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 823));
    // 0x16dd6c: 0x24630736
    ctx->pc = 0x16dd6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1846));
    // 0x16dd70: 0x28440000
    ctx->pc = 0x16dd70u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 0));
    // 0x16dd74: 0x64100b
    ctx->pc = 0x16dd74u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x16dd78: 0x21283
    ctx->pc = 0x16dd78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x16dd7c: 0x21280
    ctx->pc = 0x16dd7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 10));
    // 0x16dd80: 0xe21021
    ctx->pc = 0x16dd80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16dd84: 0xae020014
    ctx->pc = 0x16dd84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_16dd88:
    // 0x16dd88: 0xdfb00020
    ctx->pc = 0x16dd88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16dd8c:
    // 0x16dd8c: 0xdfbf0028
    ctx->pc = 0x16dd8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16dd90: 0x3e00008
    ctx->pc = 0x16DD90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DD94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16DC78u: goto label_16dc78;
            case 0x16DCD8u: goto label_16dcd8;
            case 0x16DCDCu: goto label_16dcdc;
            case 0x16DD08u: goto label_16dd08;
            case 0x16DD20u: goto label_16dd20;
            case 0x16DD40u: goto label_16dd40;
            case 0x16DD88u: goto label_16dd88;
            case 0x16DD8Cu: goto label_16dd8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16DD98u;
}
