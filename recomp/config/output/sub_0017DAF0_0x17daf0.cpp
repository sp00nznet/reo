#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017DAF0
// Address: 0x17daf0 - 0x17deb0
void sub_0017DAF0_0x17daf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17daf0u;

    // 0x17daf0: 0x27bdfff0
    ctx->pc = 0x17daf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17daf4: 0xffbf0000
    ctx->pc = 0x17daf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17daf8: 0xdfbf0000
    ctx->pc = 0x17daf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dafc: 0x805f6c2
    ctx->pc = 0x17DAFCu;
    ctx->pc = 0x17DB00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17DB08u;
    goto label_17db08;
    ctx->pc = 0x17DB04u;
    // 0x17db04: 0x0
    ctx->pc = 0x17db04u;
    // NOP
label_17db08:
    // 0x17db08: 0x3c028000
    ctx->pc = 0x17db08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x17db0c: 0x3c037fff
    ctx->pc = 0x17db0cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x17db10: 0xa22026
    ctx->pc = 0x17db10u;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17db14: 0xc21026
    ctx->pc = 0x17db14u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x17db18: 0x3463ffff
    ctx->pc = 0x17db18u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x17db1c: 0x24080008
    ctx->pc = 0x17db1cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x17db20: 0x62300a
    ctx->pc = 0x17db20u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
    // 0x17db24: 0x24e20020
    ctx->pc = 0x17db24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 32));
    // 0x17db28: 0x64280a
    ctx->pc = 0x17db28u;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
    // 0x17db2c: 0x0
    ctx->pc = 0x17db2cu;
    // NOP
label_17db30:
    // 0x17db30: 0x2508ffff
    ctx->pc = 0x17db30u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x17db34: 0xac400000
    ctx->pc = 0x17db34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17db38: 0x0
    ctx->pc = 0x17db38u;
    // NOP
    // 0x17db3c: 0x0
    ctx->pc = 0x17db3cu;
    // NOP
    // 0x17db40: 0x0
    ctx->pc = 0x17db40u;
    // NOP
    // 0x17db44: 0x501fffa
    ctx->pc = 0x17DB44u;
    {
        const bool branch_taken_0x17db44 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x17DB48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
        if (branch_taken_0x17db44) {
            ctx->pc = 0x17DB30u;
            goto label_17db30;
        }
    }
    ctx->pc = 0x17DB4Cu;
    // 0x17db4c: 0x24e20024
    ctx->pc = 0x17db4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 36));
    // 0x17db50: 0x24080007
    ctx->pc = 0x17db50u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 7));
    // 0x17db54: 0x0
    ctx->pc = 0x17db54u;
    // NOP
label_17db58:
    // 0x17db58: 0x2508ffff
    ctx->pc = 0x17db58u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x17db5c: 0xac450000
    ctx->pc = 0x17db5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x17db60: 0x0
    ctx->pc = 0x17db60u;
    // NOP
    // 0x17db64: 0x0
    ctx->pc = 0x17db64u;
    // NOP
    // 0x17db68: 0x0
    ctx->pc = 0x17db68u;
    // NOP
    // 0x17db6c: 0x501fffa
    ctx->pc = 0x17DB6Cu;
    {
        const bool branch_taken_0x17db6c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x17DB70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x17db6c) {
            ctx->pc = 0x17DB58u;
            goto label_17db58;
        }
    }
    ctx->pc = 0x17DB74u;
    // 0x17db74: 0x14a6000c
    ctx->pc = 0x17DB74u;
    {
        const bool branch_taken_0x17db74 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 6));
        ctx->pc = 0x17DB78u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 17));
        if (branch_taken_0x17db74) {
            ctx->pc = 0x17DBA8u;
            goto label_17dba8;
        }
    }
    ctx->pc = 0x17DB7Cu;
    // 0x17db7c: 0x24e30044
    ctx->pc = 0x17db7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 68));
label_17db80:
    // 0x17db80: 0x25080001
    ctx->pc = 0x17db80u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x17db84: 0xac650000
    ctx->pc = 0x17db84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x17db88: 0x290200e0
    ctx->pc = 0x17db88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), 224));
    // 0x17db8c: 0x0
    ctx->pc = 0x17db8cu;
    // NOP
    // 0x17db90: 0x0
    ctx->pc = 0x17db90u;
    // NOP
    // 0x17db94: 0x1440fffa
    ctx->pc = 0x17DB94u;
    {
        const bool branch_taken_0x17db94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17DB98u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x17db94) {
            ctx->pc = 0x17DB80u;
            goto label_17db80;
        }
    }
    ctx->pc = 0x17DB9Cu;
    // 0x17db9c: 0x10000013
    ctx->pc = 0x17DB9Cu;
    {
        const bool branch_taken_0x17db9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17DBA0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 896));
        if (branch_taken_0x17db9c) {
            ctx->pc = 0x17DBECu;
            goto label_17dbec;
        }
    }
    ctx->pc = 0x17DBA4u;
    // 0x17dba4: 0x0
    ctx->pc = 0x17dba4u;
    // NOP
label_17dba8:
    // 0x17dba8: 0xc55023
    ctx->pc = 0x17dba8u;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17dbac: 0x240b00cf
    ctx->pc = 0x17dbacu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 207));
    // 0x17dbb0: 0x24e90044
    ctx->pc = 0x17dbb0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 7), 68));
    // 0x17dbb4: 0x0
    ctx->pc = 0x17dbb4u;
    // NOP
label_17dbb8:
    // 0x17dbb8: 0x14b001b
    ctx->pc = 0x17dbb8u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 10) / divisor; ctx->hi = GPR_U32(ctx, 11) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,10); } }
    // 0x17dbbc: 0x2503ffef
    ctx->pc = 0x17dbbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 8), 4294967279));
    // 0x17dbc0: 0x25080001
    ctx->pc = 0x17dbc0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x17dbc4: 0x51600001
    ctx->pc = 0x17DBC4u;
    {
        const bool branch_taken_0x17dbc4 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 0));
        if (branch_taken_0x17dbc4) {
            ctx->pc = 0x17DBC8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x17DBCCu;
            goto label_17dbcc;
        }
    }
    ctx->pc = 0x17DBCCu;
label_17dbcc:
    // 0x17dbcc: 0x290400e0
    ctx->pc = 0x17dbccu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 8), 224));
    // 0x17dbd0: 0x1012
    ctx->pc = 0x17dbd0u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x17dbd4: 0x436018
    ctx->pc = 0x17dbd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)(uint32_t)result); }
    // 0x17dbd8: 0x1851021
    ctx->pc = 0x17dbd8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x17dbdc: 0xad220000
    ctx->pc = 0x17dbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x17dbe0: 0x1480fff5
    ctx->pc = 0x17DBE0u;
    {
        const bool branch_taken_0x17dbe0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x17DBE4u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
        if (branch_taken_0x17dbe0) {
            ctx->pc = 0x17DBB8u;
            goto label_17dbb8;
        }
    }
    ctx->pc = 0x17DBE8u;
    // 0x17dbe8: 0x24e20380
    ctx->pc = 0x17dbe8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 896));
label_17dbec:
    // 0x17dbec: 0x2408000f
    ctx->pc = 0x17dbecu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 15));
label_17dbf0:
    // 0x17dbf0: 0x2508ffff
    ctx->pc = 0x17dbf0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x17dbf4: 0xac460000
    ctx->pc = 0x17dbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x17dbf8: 0x0
    ctx->pc = 0x17dbf8u;
    // NOP
    // 0x17dbfc: 0x0
    ctx->pc = 0x17dbfcu;
    // NOP
    // 0x17dc00: 0x0
    ctx->pc = 0x17dc00u;
    // NOP
    // 0x17dc04: 0x501fffa
    ctx->pc = 0x17DC04u;
    {
        const bool branch_taken_0x17dc04 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x17DC08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x17dc04) {
            ctx->pc = 0x17DBF0u;
            goto label_17dbf0;
        }
    }
    ctx->pc = 0x17DC0Cu;
    // 0x17dc0c: 0x3c027fff
    ctx->pc = 0x17dc0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x17dc10: 0x24e703c0
    ctx->pc = 0x17dc10u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 960));
    // 0x17dc14: 0x3442ffff
    ctx->pc = 0x17dc14u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x17dc18: 0x2408000f
    ctx->pc = 0x17dc18u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 15));
    // 0x17dc1c: 0x0
    ctx->pc = 0x17dc1cu;
    // NOP
label_17dc20:
    // 0x17dc20: 0x2508ffff
    ctx->pc = 0x17dc20u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x17dc24: 0xace20000
    ctx->pc = 0x17dc24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x17dc28: 0x0
    ctx->pc = 0x17dc28u;
    // NOP
    // 0x17dc2c: 0x0
    ctx->pc = 0x17dc2cu;
    // NOP
    // 0x17dc30: 0x0
    ctx->pc = 0x17dc30u;
    // NOP
    // 0x17dc34: 0x501fffa
    ctx->pc = 0x17DC34u;
    {
        const bool branch_taken_0x17dc34 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x17DC38u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x17dc34) {
            ctx->pc = 0x17DC20u;
            goto label_17dc20;
        }
    }
    ctx->pc = 0x17DC3Cu;
    // 0x17dc3c: 0x3e00008
    ctx->pc = 0x17DC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DB08u: goto label_17db08;
            case 0x17DB30u: goto label_17db30;
            case 0x17DB58u: goto label_17db58;
            case 0x17DB80u: goto label_17db80;
            case 0x17DBA8u: goto label_17dba8;
            case 0x17DBB8u: goto label_17dbb8;
            case 0x17DBCCu: goto label_17dbcc;
            case 0x17DBECu: goto label_17dbec;
            case 0x17DBF0u: goto label_17dbf0;
            case 0x17DC20u: goto label_17dc20;
            case 0x17DC58u: goto label_17dc58;
            case 0x17DC90u: goto label_17dc90;
            case 0x17DCCCu: goto label_17dccc;
            case 0x17DCE0u: goto label_17dce0;
            case 0x17DD20u: goto label_17dd20;
            case 0x17DD48u: goto label_17dd48;
            case 0x17DD70u: goto label_17dd70;
            case 0x17DD98u: goto label_17dd98;
            case 0x17DDA8u: goto label_17dda8;
            case 0x17DDBCu: goto label_17ddbc;
            case 0x17DDDCu: goto label_17dddc;
            case 0x17DDE0u: goto label_17dde0;
            case 0x17DE10u: goto label_17de10;
            case 0x17DE30u: goto label_17de30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17DC44u;
    // 0x17dc44: 0x0
    ctx->pc = 0x17dc44u;
    // NOP
    // 0x17dc48: 0x24ec0400
    ctx->pc = 0x17dc48u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 7), 1024));
    // 0x17dc4c: 0x24ed0800
    ctx->pc = 0x17dc4cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 7), 2048));
    // 0x17dc50: 0x2408000f
    ctx->pc = 0x17dc50u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 15));
    // 0x17dc54: 0x24e2080f
    ctx->pc = 0x17dc54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 2063));
label_17dc58:
    // 0x17dc58: 0x2508ffff
    ctx->pc = 0x17dc58u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x17dc5c: 0xa0400000
    ctx->pc = 0x17dc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17dc60: 0x0
    ctx->pc = 0x17dc60u;
    // NOP
    // 0x17dc64: 0x0
    ctx->pc = 0x17dc64u;
    // NOP
    // 0x17dc68: 0x0
    ctx->pc = 0x17dc68u;
    // NOP
    // 0x17dc6c: 0x501fffa
    ctx->pc = 0x17DC6Cu;
    {
        const bool branch_taken_0x17dc6c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x17DC70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x17dc6c) {
            ctx->pc = 0x17DC58u;
            goto label_17dc58;
        }
    }
    ctx->pc = 0x17DC74u;
    // 0x17dc74: 0x3c013f94
    ctx->pc = 0x17dc74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16276 << 16));
    // 0x17dc78: 0x3421fdf3
    ctx->pc = 0x17dc78u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65011));
    // 0x17dc7c: 0x44811000
    ctx->pc = 0x17dc7cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x17dc80: 0x24080010
    ctx->pc = 0x17dc80u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    // 0x17dc84: 0x3c014f00
    ctx->pc = 0x17dc84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)20224 << 16));
    // 0x17dc88: 0x44810800
    ctx->pc = 0x17dc88u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x17dc8c: 0x3c098000
    ctx->pc = 0x17dc8cu;
    SET_GPR_U32(ctx, 9, ((uint32_t)32768 << 16));
label_17dc90:
    // 0x17dc90: 0x2502fff0
    ctx->pc = 0x17dc90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 4294967280));
    // 0x17dc94: 0x1a82021
    ctx->pc = 0x17dc94u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x17dc98: 0x44820000
    ctx->pc = 0x17dc98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x17dc9c: 0x46800020
    ctx->pc = 0x17dc9cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x17dca0: 0x25080001
    ctx->pc = 0x17dca0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x17dca4: 0x46020002
    ctx->pc = 0x17dca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x17dca8: 0x46000836
    ctx->pc = 0x17dca8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17dcac: 0x460000e4
    ctx->pc = 0x17dcacu;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[0]);
    // 0x17dcb0: 0x44021800
    ctx->pc = 0x17dcb0u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[3]);
    // 0x17dcb4: 0x45000005
    ctx->pc = 0x17DCB4u;
    {
        const bool branch_taken_0x17dcb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17DCB8u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), 236));
        if (branch_taken_0x17dcb4) {
            ctx->pc = 0x17DCCCu;
            goto label_17dccc;
        }
    }
    ctx->pc = 0x17DCBCu;
    // 0x17dcbc: 0x46010001
    ctx->pc = 0x17dcbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x17dcc0: 0x460000e4
    ctx->pc = 0x17dcc0u;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[0]);
    // 0x17dcc4: 0x44021800
    ctx->pc = 0x17dcc4u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[3]);
    // 0x17dcc8: 0x491025
    ctx->pc = 0x17dcc8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_17dccc:
    // 0x17dccc: 0x1460fff0
    ctx->pc = 0x17DCCCu;
    {
        const bool branch_taken_0x17dccc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17DCD0u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x17dccc) {
            ctx->pc = 0x17DC90u;
            goto label_17dc90;
        }
    }
    ctx->pc = 0x17DCD4u;
    // 0x17dcd4: 0x240800ec
    ctx->pc = 0x17dcd4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 236));
    // 0x17dcd8: 0x2404ffff
    ctx->pc = 0x17dcd8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17dcdc: 0x0
    ctx->pc = 0x17dcdcu;
    // NOP
label_17dce0:
    // 0x17dce0: 0x1a81821
    ctx->pc = 0x17dce0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x17dce4: 0x25080001
    ctx->pc = 0x17dce4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x17dce8: 0x29020100
    ctx->pc = 0x17dce8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), 256));
    // 0x17dcec: 0x0
    ctx->pc = 0x17dcecu;
    // NOP
    // 0x17dcf0: 0x0
    ctx->pc = 0x17dcf0u;
    // NOP
    // 0x17dcf4: 0x1440fffa
    ctx->pc = 0x17DCF4u;
    {
        const bool branch_taken_0x17dcf4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17DCF8u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        if (branch_taken_0x17dcf4) {
            ctx->pc = 0x17DCE0u;
            goto label_17dce0;
        }
    }
    ctx->pc = 0x17DCFCu;
    // 0x17dcfc: 0x3c028000
    ctx->pc = 0x17dcfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x17dd00: 0x3c037fff
    ctx->pc = 0x17dd00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x17dd04: 0xa22026
    ctx->pc = 0x17dd04u;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17dd08: 0xc21026
    ctx->pc = 0x17dd08u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x17dd0c: 0x3463ffff
    ctx->pc = 0x17dd0cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x17dd10: 0x24080008
    ctx->pc = 0x17dd10u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x17dd14: 0x62300a
    ctx->pc = 0x17dd14u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
    // 0x17dd18: 0x25820020
    ctx->pc = 0x17dd18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 12), 32));
    // 0x17dd1c: 0x64280a
    ctx->pc = 0x17dd1cu;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
label_17dd20:
    // 0x17dd20: 0x2508ffff
    ctx->pc = 0x17dd20u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x17dd24: 0xac400000
    ctx->pc = 0x17dd24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17dd28: 0x0
    ctx->pc = 0x17dd28u;
    // NOP
    // 0x17dd2c: 0x0
    ctx->pc = 0x17dd2cu;
    // NOP
    // 0x17dd30: 0x0
    ctx->pc = 0x17dd30u;
    // NOP
    // 0x17dd34: 0x501fffa
    ctx->pc = 0x17DD34u;
    {
        const bool branch_taken_0x17dd34 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x17DD38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
        if (branch_taken_0x17dd34) {
            ctx->pc = 0x17DD20u;
            goto label_17dd20;
        }
    }
    ctx->pc = 0x17DD3Cu;
    // 0x17dd3c: 0x25820024
    ctx->pc = 0x17dd3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 12), 36));
    // 0x17dd40: 0x24080007
    ctx->pc = 0x17dd40u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 7));
    // 0x17dd44: 0x0
    ctx->pc = 0x17dd44u;
    // NOP
label_17dd48:
    // 0x17dd48: 0x2508ffff
    ctx->pc = 0x17dd48u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x17dd4c: 0xac450000
    ctx->pc = 0x17dd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x17dd50: 0x0
    ctx->pc = 0x17dd50u;
    // NOP
    // 0x17dd54: 0x0
    ctx->pc = 0x17dd54u;
    // NOP
    // 0x17dd58: 0x0
    ctx->pc = 0x17dd58u;
    // NOP
    // 0x17dd5c: 0x501fffa
    ctx->pc = 0x17DD5Cu;
    {
        const bool branch_taken_0x17dd5c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x17DD60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x17dd5c) {
            ctx->pc = 0x17DD48u;
            goto label_17dd48;
        }
    }
    ctx->pc = 0x17DD64u;
    // 0x17dd64: 0x14a6000c
    ctx->pc = 0x17DD64u;
    {
        const bool branch_taken_0x17dd64 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 6));
        ctx->pc = 0x17DD68u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 17));
        if (branch_taken_0x17dd64) {
            ctx->pc = 0x17DD98u;
            goto label_17dd98;
        }
    }
    ctx->pc = 0x17DD6Cu;
    // 0x17dd6c: 0x25830044
    ctx->pc = 0x17dd6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 12), 68));
label_17dd70:
    // 0x17dd70: 0x25080001
    ctx->pc = 0x17dd70u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x17dd74: 0xac650000
    ctx->pc = 0x17dd74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x17dd78: 0x290200e0
    ctx->pc = 0x17dd78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), 224));
    // 0x17dd7c: 0x0
    ctx->pc = 0x17dd7cu;
    // NOP
    // 0x17dd80: 0x0
    ctx->pc = 0x17dd80u;
    // NOP
    // 0x17dd84: 0x1440fffa
    ctx->pc = 0x17DD84u;
    {
        const bool branch_taken_0x17dd84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17DD88u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x17dd84) {
            ctx->pc = 0x17DD70u;
            goto label_17dd70;
        }
    }
    ctx->pc = 0x17DD8Cu;
    // 0x17dd8c: 0x10000013
    ctx->pc = 0x17DD8Cu;
    {
        const bool branch_taken_0x17dd8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17DD90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 12), 896));
        if (branch_taken_0x17dd8c) {
            ctx->pc = 0x17DDDCu;
            goto label_17dddc;
        }
    }
    ctx->pc = 0x17DD94u;
    // 0x17dd94: 0x0
    ctx->pc = 0x17dd94u;
    // NOP
label_17dd98:
    // 0x17dd98: 0xc55023
    ctx->pc = 0x17dd98u;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17dd9c: 0x240b00cf
    ctx->pc = 0x17dd9cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 207));
    // 0x17dda0: 0x25890044
    ctx->pc = 0x17dda0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 12), 68));
    // 0x17dda4: 0x0
    ctx->pc = 0x17dda4u;
    // NOP
label_17dda8:
    // 0x17dda8: 0x14b001b
    ctx->pc = 0x17dda8u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 10) / divisor; ctx->hi = GPR_U32(ctx, 11) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,10); } }
    // 0x17ddac: 0x2503ffef
    ctx->pc = 0x17ddacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 8), 4294967279));
    // 0x17ddb0: 0x25080001
    ctx->pc = 0x17ddb0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x17ddb4: 0x51600001
    ctx->pc = 0x17DDB4u;
    {
        const bool branch_taken_0x17ddb4 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 0));
        if (branch_taken_0x17ddb4) {
            ctx->pc = 0x17DDB8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x17DDBCu;
            goto label_17ddbc;
        }
    }
    ctx->pc = 0x17DDBCu;
label_17ddbc:
    // 0x17ddbc: 0x290400e0
    ctx->pc = 0x17ddbcu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 8), 224));
    // 0x17ddc0: 0x1012
    ctx->pc = 0x17ddc0u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x17ddc4: 0x437018
    ctx->pc = 0x17ddc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)(uint32_t)result); }
    // 0x17ddc8: 0x1c51021
    ctx->pc = 0x17ddc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x17ddcc: 0xad220000
    ctx->pc = 0x17ddccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x17ddd0: 0x1480fff5
    ctx->pc = 0x17DDD0u;
    {
        const bool branch_taken_0x17ddd0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x17DDD4u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
        if (branch_taken_0x17ddd0) {
            ctx->pc = 0x17DDA8u;
            goto label_17dda8;
        }
    }
    ctx->pc = 0x17DDD8u;
    // 0x17ddd8: 0x25820380
    ctx->pc = 0x17ddd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 12), 896));
label_17dddc:
    // 0x17dddc: 0x2408000f
    ctx->pc = 0x17dddcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 15));
label_17dde0:
    // 0x17dde0: 0x2508ffff
    ctx->pc = 0x17dde0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x17dde4: 0xac460000
    ctx->pc = 0x17dde4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x17dde8: 0x0
    ctx->pc = 0x17dde8u;
    // NOP
    // 0x17ddec: 0x0
    ctx->pc = 0x17ddecu;
    // NOP
    // 0x17ddf0: 0x0
    ctx->pc = 0x17ddf0u;
    // NOP
    // 0x17ddf4: 0x501fffa
    ctx->pc = 0x17DDF4u;
    {
        const bool branch_taken_0x17ddf4 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x17DDF8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x17ddf4) {
            ctx->pc = 0x17DDE0u;
            goto label_17dde0;
        }
    }
    ctx->pc = 0x17DDFCu;
    // 0x17ddfc: 0x3c037fff
    ctx->pc = 0x17ddfcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x17de00: 0x258203c0
    ctx->pc = 0x17de00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 12), 960));
    // 0x17de04: 0x3463ffff
    ctx->pc = 0x17de04u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x17de08: 0x2408000f
    ctx->pc = 0x17de08u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 15));
    // 0x17de0c: 0x0
    ctx->pc = 0x17de0cu;
    // NOP
label_17de10:
    // 0x17de10: 0x2508ffff
    ctx->pc = 0x17de10u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x17de14: 0xac430000
    ctx->pc = 0x17de14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17de18: 0x0
    ctx->pc = 0x17de18u;
    // NOP
    // 0x17de1c: 0x0
    ctx->pc = 0x17de1cu;
    // NOP
    // 0x17de20: 0x0
    ctx->pc = 0x17de20u;
    // NOP
    // 0x17de24: 0x501fffa
    ctx->pc = 0x17DE24u;
    {
        const bool branch_taken_0x17de24 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x17DE28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x17de24) {
            ctx->pc = 0x17DE10u;
            goto label_17de10;
        }
    }
    ctx->pc = 0x17DE2Cu;
    // 0x17de2c: 0x402d
    ctx->pc = 0x17de2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17de30:
    // 0x17de30: 0x1a81821
    ctx->pc = 0x17de30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x17de34: 0x25080001
    ctx->pc = 0x17de34u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x17de38: 0x90620000
    ctx->pc = 0x17de38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17de3c: 0x29040100
    ctx->pc = 0x17de3cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 8), 256));
    // 0x17de40: 0x21080
    ctx->pc = 0x17de40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x17de44: 0x4c1021
    ctx->pc = 0x17de44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x17de48: 0x8c430000
    ctx->pc = 0x17de48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17de4c: 0xace30000
    ctx->pc = 0x17de4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x17de50: 0x1480fff7
    ctx->pc = 0x17DE50u;
    {
        const bool branch_taken_0x17de50 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x17DE54u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x17de50) {
            ctx->pc = 0x17DE30u;
            goto label_17de30;
        }
    }
    ctx->pc = 0x17DE58u;
    // 0x17de58: 0x3e00008
    ctx->pc = 0x17DE58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DB08u: goto label_17db08;
            case 0x17DB30u: goto label_17db30;
            case 0x17DB58u: goto label_17db58;
            case 0x17DB80u: goto label_17db80;
            case 0x17DBA8u: goto label_17dba8;
            case 0x17DBB8u: goto label_17dbb8;
            case 0x17DBCCu: goto label_17dbcc;
            case 0x17DBECu: goto label_17dbec;
            case 0x17DBF0u: goto label_17dbf0;
            case 0x17DC20u: goto label_17dc20;
            case 0x17DC58u: goto label_17dc58;
            case 0x17DC90u: goto label_17dc90;
            case 0x17DCCCu: goto label_17dccc;
            case 0x17DCE0u: goto label_17dce0;
            case 0x17DD20u: goto label_17dd20;
            case 0x17DD48u: goto label_17dd48;
            case 0x17DD70u: goto label_17dd70;
            case 0x17DD98u: goto label_17dd98;
            case 0x17DDA8u: goto label_17dda8;
            case 0x17DDBCu: goto label_17ddbc;
            case 0x17DDDCu: goto label_17dddc;
            case 0x17DDE0u: goto label_17dde0;
            case 0x17DE10u: goto label_17de10;
            case 0x17DE30u: goto label_17de30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17DE60u;
    // 0x17de60: 0x27bdffd0
    ctx->pc = 0x17de60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17de64: 0xffb10018
    ctx->pc = 0x17de64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17de68: 0xc0882d
    ctx->pc = 0x17de68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de6c: 0xffb00010
    ctx->pc = 0x17de6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17de70: 0x80802d
    ctx->pc = 0x17de70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de74: 0xffbf0020
    ctx->pc = 0x17de74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17de78: 0x3a0302d
    ctx->pc = 0x17de78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de7c: 0xa6200000
    ctx->pc = 0x17de7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x17de80: 0xc05f65a
    ctx->pc = 0x17DE80u;
    SET_GPR_U32(ctx, 31, 0x17DE88u);
    ctx->pc = 0x17DE84u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x17D968u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D968_0x17d968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE88u; }
    }
    if (ctx->pc != 0x17DE88u) { return; }
    ctx->pc = 0x17DE88u;
    // 0x17de88: 0x200202d
    ctx->pc = 0x17de88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de8c: 0x8fa50000
    ctx->pc = 0x17de8cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17de90: 0x220382d
    ctx->pc = 0x17de90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de94: 0xc05f7ac
    ctx->pc = 0x17DE94u;
    SET_GPR_U32(ctx, 31, 0x17DE9Cu);
    ctx->pc = 0x17DE98u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x17DEB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEB0_0x17deb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE9Cu; }
    }
    if (ctx->pc != 0x17DE9Cu) { return; }
    ctx->pc = 0x17DE9Cu;
    // 0x17de9c: 0xdfb00010
    ctx->pc = 0x17de9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dea0: 0xdfb10018
    ctx->pc = 0x17dea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17dea4: 0xdfbf0020
    ctx->pc = 0x17dea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17dea8: 0x3e00008
    ctx->pc = 0x17DEA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DEACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DB08u: goto label_17db08;
            case 0x17DB30u: goto label_17db30;
            case 0x17DB58u: goto label_17db58;
            case 0x17DB80u: goto label_17db80;
            case 0x17DBA8u: goto label_17dba8;
            case 0x17DBB8u: goto label_17dbb8;
            case 0x17DBCCu: goto label_17dbcc;
            case 0x17DBECu: goto label_17dbec;
            case 0x17DBF0u: goto label_17dbf0;
            case 0x17DC20u: goto label_17dc20;
            case 0x17DC58u: goto label_17dc58;
            case 0x17DC90u: goto label_17dc90;
            case 0x17DCCCu: goto label_17dccc;
            case 0x17DCE0u: goto label_17dce0;
            case 0x17DD20u: goto label_17dd20;
            case 0x17DD48u: goto label_17dd48;
            case 0x17DD70u: goto label_17dd70;
            case 0x17DD98u: goto label_17dd98;
            case 0x17DDA8u: goto label_17dda8;
            case 0x17DDBCu: goto label_17ddbc;
            case 0x17DDDCu: goto label_17dddc;
            case 0x17DDE0u: goto label_17dde0;
            case 0x17DE10u: goto label_17de10;
            case 0x17DE30u: goto label_17de30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17DEB0u;
}
