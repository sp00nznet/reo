#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015DAA8
// Address: 0x15daa8 - 0x15dc28
void sub_0015DAA8_0x15daa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15daa8u;

    // 0x15daa8: 0x27bdff80
    ctx->pc = 0x15daa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15daac: 0xffb10038
    ctx->pc = 0x15daacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x15dab0: 0xc0882d
    ctx->pc = 0x15dab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dab4: 0xffb20040
    ctx->pc = 0x15dab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x15dab8: 0xa0902d
    ctx->pc = 0x15dab8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dabc: 0xffb30048
    ctx->pc = 0x15dabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x15dac0: 0xffb40050
    ctx->pc = 0x15dac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x15dac4: 0xffb50058
    ctx->pc = 0x15dac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x15dac8: 0xffb60060
    ctx->pc = 0x15dac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x15dacc: 0x80b02d
    ctx->pc = 0x15daccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dad0: 0xffbe0070
    ctx->pc = 0x15dad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x15dad4: 0xffb00030
    ctx->pc = 0x15dad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x15dad8: 0xffb70068
    ctx->pc = 0x15dad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x15dadc: 0xffbf0078
    ctx->pc = 0x15dadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x15dae0: 0x8e44001c
    ctx->pc = 0x15dae0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x15dae4: 0x8ed00040
    ctx->pc = 0x15dae4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x15dae8: 0xc057744
    ctx->pc = 0x15DAE8u;
    SET_GPR_U32(ctx, 31, 0x15DAF0u);
    ctx->pc = 0x15DAECu;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 18), 32)));
    ctx->pc = 0x15DD10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DD10_0x15dd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DAF0u; }
    }
    if (ctx->pc != 0x15DAF0u) { return; }
    ctx->pc = 0x15DAF0u;
    // 0x15daf0: 0xafa20004
    ctx->pc = 0x15daf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x15daf4: 0x8e420000
    ctx->pc = 0x15daf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15daf8: 0x8e440010
    ctx->pc = 0x15daf8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x15dafc: 0xafa20008
    ctx->pc = 0x15dafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x15db00: 0x8e450004
    ctx->pc = 0x15db00u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x15db04: 0xafa5000c
    ctx->pc = 0x15db04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x15db08: 0x8e460008
    ctx->pc = 0x15db08u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x15db0c: 0xafa60010
    ctx->pc = 0x15db0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x15db10: 0x8e47000c
    ctx->pc = 0x15db10u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x15db14: 0xc057754
    ctx->pc = 0x15DB14u;
    SET_GPR_U32(ctx, 31, 0x15DB1Cu);
    ctx->pc = 0x15DB18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    ctx->pc = 0x15DD50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DD50_0x15dd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB1Cu; }
    }
    if (ctx->pc != 0x15DB1Cu) { return; }
    ctx->pc = 0x15DB1Cu;
    // 0x15db1c: 0xafa20018
    ctx->pc = 0x15db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x15db20: 0x3a0282d
    ctx->pc = 0x15db20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db24: 0x200202d
    ctx->pc = 0x15db24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db28: 0x8e420024
    ctx->pc = 0x15db28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x15db2c: 0x8e530018
    ctx->pc = 0x15db2cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x15db30: 0x8e540034
    ctx->pc = 0x15db30u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x15db34: 0x8e550030
    ctx->pc = 0x15db34u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x15db38: 0x8e5e002c
    ctx->pc = 0x15db38u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x15db3c: 0xafa2001c
    ctx->pc = 0x15db3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x15db40: 0x8e460028
    ctx->pc = 0x15db40u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x15db44: 0xc05db8a
    ctx->pc = 0x15DB44u;
    SET_GPR_U32(ctx, 31, 0x15DB4Cu);
    ctx->pc = 0x15DB48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    ctx->pc = 0x176E28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176E28_0x176e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB4Cu; }
    }
    if (ctx->pc != 0x15DB4Cu) { return; }
    ctx->pc = 0x15DB4Cu;
    // 0x15db4c: 0x10400005
    ctx->pc = 0x15DB4Cu;
    {
        const bool branch_taken_0x15db4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15DB50u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x15db4c) {
            ctx->pc = 0x15DB64u;
            goto label_15db64;
        }
    }
    ctx->pc = 0x15DB54u;
    // 0x15db54: 0x3c040024
    ctx->pc = 0x15db54u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15db58: 0xc058dd4
    ctx->pc = 0x15DB58u;
    SET_GPR_U32(ctx, 31, 0x15DB60u);
    ctx->pc = 0x15DB5Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962304));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB60u; }
    }
    if (ctx->pc != 0x15DB60u) { return; }
    ctx->pc = 0x15DB60u;
    // 0x15db60: 0x8fa50000
    ctx->pc = 0x15db60u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15db64:
    // 0x15db64: 0x260302d
    ctx->pc = 0x15db64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db68: 0xc057730
    ctx->pc = 0x15DB68u;
    SET_GPR_U32(ctx, 31, 0x15DB70u);
    ctx->pc = 0x15DB6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15DCC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DCC0_0x15dcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB70u; }
    }
    if (ctx->pc != 0x15DB70u) { return; }
    ctx->pc = 0x15DB70u;
    // 0x15db70: 0x2a0202d
    ctx->pc = 0x15db70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db74: 0x8fa50000
    ctx->pc = 0x15db74u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15db78: 0x260302d
    ctx->pc = 0x15db78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db7c: 0xc057730
    ctx->pc = 0x15DB7Cu;
    SET_GPR_U32(ctx, 31, 0x15DB84u);
    ctx->pc = 0x15DB80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15DCC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DCC0_0x15dcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DB84u; }
    }
    if (ctx->pc != 0x15DB84u) { return; }
    ctx->pc = 0x15DB84u;
    // 0x15db84: 0xae370000
    ctx->pc = 0x15db84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 23));
    // 0x15db88: 0x2c0202d
    ctx->pc = 0x15db88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db8c: 0x240282d
    ctx->pc = 0x15db8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db90: 0x8fa70004
    ctx->pc = 0x15db90u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15db94: 0x8fa30000
    ctx->pc = 0x15db94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15db98: 0xae270004
    ctx->pc = 0x15db98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 7));
    // 0x15db9c: 0x8fa60008
    ctx->pc = 0x15db9cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15dba0: 0xae260008
    ctx->pc = 0x15dba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
    // 0x15dba4: 0x220302d
    ctx->pc = 0x15dba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dba8: 0x8fa7000c
    ctx->pc = 0x15dba8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x15dbac: 0xae27000c
    ctx->pc = 0x15dbacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 7));
    // 0x15dbb0: 0x8fa70010
    ctx->pc = 0x15dbb0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15dbb4: 0xae270010
    ctx->pc = 0x15dbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 7));
    // 0x15dbb8: 0x8fa70014
    ctx->pc = 0x15dbb8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x15dbbc: 0xae270014
    ctx->pc = 0x15dbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 7));
    // 0x15dbc0: 0x8fa70018
    ctx->pc = 0x15dbc0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15dbc4: 0xae23001c
    ctx->pc = 0x15dbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x15dbc8: 0xae300020
    ctx->pc = 0x15dbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 16));
    // 0x15dbcc: 0xae340024
    ctx->pc = 0x15dbccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 20));
    // 0x15dbd0: 0xae330028
    ctx->pc = 0x15dbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 19));
    // 0x15dbd4: 0xae3e002c
    ctx->pc = 0x15dbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 30));
    // 0x15dbd8: 0xae350034
    ctx->pc = 0x15dbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 21));
    // 0x15dbdc: 0xae270018
    ctx->pc = 0x15dbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 7));
    // 0x15dbe0: 0xae220030
    ctx->pc = 0x15dbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x15dbe4: 0x8fa2001c
    ctx->pc = 0x15dbe4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x15dbe8: 0xae220038
    ctx->pc = 0x15dbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x15dbec: 0x8fa70020
    ctx->pc = 0x15dbecu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15dbf0: 0xc05770a
    ctx->pc = 0x15DBF0u;
    SET_GPR_U32(ctx, 31, 0x15DBF8u);
    ctx->pc = 0x15DBF4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 7));
    ctx->pc = 0x15DC28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DC28_0x15dc28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DBF8u; }
    }
    if (ctx->pc != 0x15DBF8u) { return; }
    ctx->pc = 0x15DBF8u;
    // 0x15dbf8: 0xdfb00030
    ctx->pc = 0x15dbf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15dbfc: 0xdfb10038
    ctx->pc = 0x15dbfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15dc00: 0xdfb20040
    ctx->pc = 0x15dc00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15dc04: 0xdfb30048
    ctx->pc = 0x15dc04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15dc08: 0xdfb40050
    ctx->pc = 0x15dc08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15dc0c: 0xdfb50058
    ctx->pc = 0x15dc0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15dc10: 0xdfb60060
    ctx->pc = 0x15dc10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15dc14: 0xdfb70068
    ctx->pc = 0x15dc14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x15dc18: 0xdfbe0070
    ctx->pc = 0x15dc18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15dc1c: 0xdfbf0078
    ctx->pc = 0x15dc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x15dc20: 0x3e00008
    ctx->pc = 0x15DC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DC24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15DB64u: goto label_15db64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15DC28u;
}
