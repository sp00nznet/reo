#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011DB30
// Address: 0x11db30 - 0x11dc48
void sub_0011DB30_0x11db30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11db30u;

    // 0x11db30: 0x27bdff80
    ctx->pc = 0x11db30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11db34: 0x3c020021
    ctx->pc = 0x11db34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x11db38: 0xffb30040
    ctx->pc = 0x11db38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11db3c: 0x3c030021
    ctx->pc = 0x11db3cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x11db40: 0x8c53a180
    ctx->pc = 0x11db40u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 4294943104)));
    // 0x11db44: 0x2467ac38
    ctx->pc = 0x11db44u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 4294945848));
    // 0x11db48: 0xffb50060
    ctx->pc = 0x11db48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11db4c: 0xffb40050
    ctx->pc = 0x11db4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11db50: 0x26620040
    ctx->pc = 0x11db50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 64));
    // 0x11db54: 0xffb20030
    ctx->pc = 0x11db54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11db58: 0x40a82d
    ctx->pc = 0x11db58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db5c: 0xffb10020
    ctx->pc = 0x11db5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11db60: 0xa0902d
    ctx->pc = 0x11db60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db64: 0xffb00010
    ctx->pc = 0x11db64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11db68: 0xc0a02d
    ctx->pc = 0x11db68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db6c: 0xffbf0070
    ctx->pc = 0x11db6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11db70: 0x80802d
    ctx->pc = 0x11db70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db74: 0x8c64ac38
    ctx->pc = 0x11db74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4294945848)));
    // 0x11db78: 0x8ce50004
    ctx->pc = 0x11db78u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x11db7c: 0xc0476c8
    ctx->pc = 0x11DB7Cu;
    SET_GPR_U32(ctx, 31, 0x11DB84u);
    ctx->pc = 0x11DB80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x11DB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DB20_0x11db20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DB84u; }
    }
    if (ctx->pc != 0x11DB84u) { return; }
    ctx->pc = 0x11DB84u;
    // 0x11db84: 0x2a430010
    ctx->pc = 0x11db84u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), 16));
    // 0x11db88: 0x2402000f
    ctx->pc = 0x11db88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x11db8c: 0x260202d
    ctx->pc = 0x11db8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db90: 0x43900a
    ctx->pc = 0x11db90u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 2));
    // 0x11db94: 0x3a0282d
    ctx->pc = 0x11db94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db98: 0xc0476b8
    ctx->pc = 0x11DB98u;
    SET_GPR_U32(ctx, 31, 0x11DBA0u);
    ctx->pc = 0x11DB9Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x11DAE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DAE0_0x11dae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DBA0u; }
    }
    if (ctx->pc != 0x11DBA0u) { return; }
    ctx->pc = 0x11DBA0u;
    // 0x11dba0: 0x26730004
    ctx->pc = 0x11dba0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
    // 0x11dba4: 0xc042c56
    ctx->pc = 0x11DBA4u;
    SET_GPR_U32(ctx, 31, 0x11DBACu);
    ctx->pc = 0x11DBA8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DBACu; }
    }
    if (ctx->pc != 0x11DBACu) { return; }
    ctx->pc = 0x11DBACu;
    // 0x11dbac: 0x24510001
    ctx->pc = 0x11dbacu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 1));
    // 0x11dbb0: 0x8fa40000
    ctx->pc = 0x11dbb0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dbb4: 0x200282d
    ctx->pc = 0x11dbb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dbb8: 0xc0476b8
    ctx->pc = 0x11DBB8u;
    SET_GPR_U32(ctx, 31, 0x11DBC0u);
    ctx->pc = 0x11DBBCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11DAE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DAE0_0x11dae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DBC0u; }
    }
    if (ctx->pc != 0x11DBC0u) { return; }
    ctx->pc = 0x11DBC0u;
    // 0x11dbc0: 0x8fa30000
    ctx->pc = 0x11dbc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dbc4: 0x711821
    ctx->pc = 0x11dbc4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x11dbc8: 0x1a400015
    ctx->pc = 0x11DBC8u;
    {
        const bool branch_taken_0x11dbc8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x11DBCCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x11dbc8) {
            ctx->pc = 0x11DC20u;
            goto label_11dc20;
        }
    }
    ctx->pc = 0x11DBD0u;
    // 0x11dbd0: 0x280802d
    ctx->pc = 0x11dbd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dbd4: 0x0
    ctx->pc = 0x11dbd4u;
    // NOP
label_11dbd8:
    // 0x11dbd8: 0x260202d
    ctx->pc = 0x11dbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dbdc: 0x3a0282d
    ctx->pc = 0x11dbdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dbe0: 0x24060004
    ctx->pc = 0x11dbe0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11dbe4: 0xc0476b8
    ctx->pc = 0x11DBE4u;
    SET_GPR_U32(ctx, 31, 0x11DBECu);
    ctx->pc = 0x11DBE8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
    ctx->pc = 0x11DAE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DAE0_0x11dae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DBECu; }
    }
    if (ctx->pc != 0x11DBECu) { return; }
    ctx->pc = 0x11DBECu;
    // 0x11dbec: 0x2652ffff
    ctx->pc = 0x11dbecu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x11dbf0: 0xc042c56
    ctx->pc = 0x11DBF0u;
    SET_GPR_U32(ctx, 31, 0x11DBF8u);
    ctx->pc = 0x11DBF4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DBF8u; }
    }
    if (ctx->pc != 0x11DBF8u) { return; }
    ctx->pc = 0x11DBF8u;
    // 0x11dbf8: 0x24510001
    ctx->pc = 0x11dbf8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 1));
    // 0x11dbfc: 0x8e050000
    ctx->pc = 0x11dbfcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11dc00: 0x8fa40000
    ctx->pc = 0x11dc00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dc04: 0x220302d
    ctx->pc = 0x11dc04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dc08: 0xc0476b8
    ctx->pc = 0x11DC08u;
    SET_GPR_U32(ctx, 31, 0x11DC10u);
    ctx->pc = 0x11DC0Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    ctx->pc = 0x11DAE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DAE0_0x11dae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DC10u; }
    }
    if (ctx->pc != 0x11DC10u) { return; }
    ctx->pc = 0x11DC10u;
    // 0x11dc10: 0x8fa30000
    ctx->pc = 0x11dc10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dc14: 0x711821
    ctx->pc = 0x11dc14u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x11dc18: 0x1640ffef
    ctx->pc = 0x11DC18u;
    {
        const bool branch_taken_0x11dc18 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x11DC1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x11dc18) {
            ctx->pc = 0x11DBD8u;
            goto label_11dbd8;
        }
    }
    ctx->pc = 0x11DC20u;
label_11dc20:
    // 0x11dc20: 0x2a0102d
    ctx->pc = 0x11dc20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dc24: 0xdfbf0070
    ctx->pc = 0x11dc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11dc28: 0xdfb50060
    ctx->pc = 0x11dc28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11dc2c: 0xdfb40050
    ctx->pc = 0x11dc2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11dc30: 0xdfb30040
    ctx->pc = 0x11dc30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11dc34: 0xdfb20030
    ctx->pc = 0x11dc34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11dc38: 0xdfb10020
    ctx->pc = 0x11dc38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11dc3c: 0xdfb00010
    ctx->pc = 0x11dc3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dc40: 0x3e00008
    ctx->pc = 0x11DC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DC44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DBD8u: goto label_11dbd8;
            case 0x11DC20u: goto label_11dc20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11DC48u;
}
