#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011CAD8
// Address: 0x11cad8 - 0x11cc58
void sub_0011CAD8_0x11cad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11cad8u;

    // 0x11cad8: 0x27bdffc0
    ctx->pc = 0x11cad8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11cadc: 0xffb10020
    ctx->pc = 0x11cadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11cae0: 0xffb00010
    ctx->pc = 0x11cae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11cae4: 0x80882d
    ctx->pc = 0x11cae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cae8: 0xa0802d
    ctx->pc = 0x11cae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11caec: 0xffbf0030
    ctx->pc = 0x11caecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11caf0: 0x202d
    ctx->pc = 0x11caf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11caf4: 0xc047df4
    ctx->pc = 0x11CAF4u;
    SET_GPR_U32(ctx, 31, 0x11CAFCu);
    ctx->pc = 0x11CAF8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11F7D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F7D0_0x11f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CAFCu; }
    }
    if (ctx->pc != 0x11CAFCu) { return; }
    ctx->pc = 0x11CAFCu;
    // 0x11cafc: 0x24040001
    ctx->pc = 0x11cafcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cb00: 0xc047df4
    ctx->pc = 0x11CB00u;
    SET_GPR_U32(ctx, 31, 0x11CB08u);
    ctx->pc = 0x11CB04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11F7D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F7D0_0x11f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CB08u; }
    }
    if (ctx->pc != 0x11CB08u) { return; }
    ctx->pc = 0x11CB08u;
    // 0x11cb08: 0xc04523c
    ctx->pc = 0x11CB08u;
    SET_GPR_U32(ctx, 31, 0x11CB10u);
    ctx->pc = 0x1148F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001148F0_0x1148f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CB10u; }
    }
    if (ctx->pc != 0x11CB10u) { return; }
    ctx->pc = 0x11CB10u;
    // 0x11cb10: 0x3c048000
    ctx->pc = 0x11cb10u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x11cb14: 0xc04528c
    ctx->pc = 0x11CB14u;
    SET_GPR_U32(ctx, 31, 0x11CB1Cu);
    ctx->pc = 0x114A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A30_0x114a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CB1Cu; }
    }
    if (ctx->pc != 0x11CB1Cu) { return; }
    ctx->pc = 0x11CB1Cu;
    // 0x11cb1c: 0x3c0a0026
    ctx->pc = 0x11cb1cu;
    SET_GPR_U32(ctx, 10, ((uint32_t)38 << 16));
    // 0x11cb20: 0x40582d
    ctx->pc = 0x11cb20u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cb24: 0x2543e640
    ctx->pc = 0x11cb24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 10), 4294960704));
    // 0x11cb28: 0xac700014
    ctx->pc = 0x11cb28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
    // 0x11cb2c: 0x82220000
    ctx->pc = 0x11cb2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11cb30: 0x1040000b
    ctx->pc = 0x11CB30u;
    {
        const bool branch_taken_0x11cb30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CB34u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11cb30) {
            ctx->pc = 0x11CB60u;
            goto label_11cb60;
        }
    }
    ctx->pc = 0x11CB38u;
    // 0x11cb38: 0x220102d
    ctx->pc = 0x11cb38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cb3c: 0x90440000
    ctx->pc = 0x11cb3cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_11cb40:
    // 0x11cb40: 0x2543e640
    ctx->pc = 0x11cb40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 10), 4294960704));
    // 0x11cb44: 0x691821
    ctx->pc = 0x11cb44u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11cb48: 0x25290001
    ctx->pc = 0x11cb48u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x11cb4c: 0xa0640018
    ctx->pc = 0x11cb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x11cb50: 0x2291021
    ctx->pc = 0x11cb50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x11cb54: 0x80430000
    ctx->pc = 0x11cb54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11cb58: 0x5460fff9
    ctx->pc = 0x11CB58u;
    {
        const bool branch_taken_0x11cb58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x11cb58) {
            ctx->pc = 0x11CB5Cu;
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->pc = 0x11CB40u;
            goto label_11cb40;
        }
    }
    ctx->pc = 0x11CB60u;
label_11cb60:
    // 0x11cb60: 0x2546e640
    ctx->pc = 0x11cb60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 10), 4294960704));
    // 0x11cb64: 0x3c038000
    ctx->pc = 0x11cb64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x11cb68: 0xacc00004
    ctx->pc = 0x11cb68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x11cb6c: 0x2404ffff
    ctx->pc = 0x11cb6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11cb70: 0x4203c
    ctx->pc = 0x11cb70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11cb74: 0x348400ff
    ctx->pc = 0x11cb74u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 255));
    // 0x11cb78: 0x34630003
    ctx->pc = 0x11cb78u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 3));
    // 0x11cb7c: 0x24050068
    ctx->pc = 0x11cb7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 104));
    // 0x11cb80: 0xdd42e640
    ctx->pc = 0x11cb80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 4294960704)));
    // 0x11cb84: 0x24070068
    ctx->pc = 0x11cb84u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 104));
    // 0x11cb88: 0xacc90010
    ctx->pc = 0x11cb88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 9));
    // 0x11cb8c: 0x24080044
    ctx->pc = 0x11cb8cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 68));
    // 0x11cb90: 0xacc30008
    ctx->pc = 0x11cb90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x11cb94: 0x441024
    ctx->pc = 0x11cb94u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11cb98: 0xfd42e640
    ctx->pc = 0x11cb98u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 4294960704), GPR_U64(ctx, 2));
    // 0x11cb9c: 0xc0202d
    ctx->pc = 0x11cb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cba0: 0xa145e640
    ctx->pc = 0x11cba0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4294960704), (uint8_t)GPR_U32(ctx, 5));
    // 0x11cba4: 0x24050068
    ctx->pc = 0x11cba4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 104));
    // 0x11cba8: 0xafab0004
    ctx->pc = 0x11cba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
    // 0x11cbac: 0xafa70008
    ctx->pc = 0x11cbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x11cbb0: 0xafa8000c
    ctx->pc = 0x11cbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x11cbb4: 0xc045bf4
    ctx->pc = 0x11CBB4u;
    SET_GPR_U32(ctx, 31, 0x11CBBCu);
    ctx->pc = 0x11CBB8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x116FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116FD0_0x116fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CBBCu; }
    }
    if (ctx->pc != 0x11CBBCu) { return; }
    ctx->pc = 0x11CBBCu;
    // 0x11cbbc: 0x24040004
    ctx->pc = 0x11cbbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11cbc0: 0xc045288
    ctx->pc = 0x11CBC0u;
    SET_GPR_U32(ctx, 31, 0x11CBC8u);
    ctx->pc = 0x11CBC4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4 << 16));
    ctx->pc = 0x114A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A20_0x114a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CBC8u; }
    }
    if (ctx->pc != 0x11CBC8u) { return; }
    ctx->pc = 0x11CBC8u;
    // 0x11cbc8: 0x3a0202d
    ctx->pc = 0x11cbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cbcc: 0xc045278
    ctx->pc = 0x11CBCCu;
    SET_GPR_U32(ctx, 31, 0x11CBD4u);
    ctx->pc = 0x11CBD0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1149E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001149E0_0x1149e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CBD4u; }
    }
    if (ctx->pc != 0x11CBD4u) { return; }
    ctx->pc = 0x11CBD4u;
    // 0x11cbd4: 0x1040000f
    ctx->pc = 0x11CBD4u;
    {
        const bool branch_taken_0x11cbd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CBD8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x11cbd4) {
            ctx->pc = 0x11CC14u;
            goto label_11cc14;
        }
    }
    ctx->pc = 0x11CBDCu;
    // 0x11cbdc: 0xc045288
    ctx->pc = 0x11CBDCu;
    SET_GPR_U32(ctx, 31, 0x11CBE4u);
    ctx->pc = 0x11CBE0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)1 << 16));
    ctx->pc = 0x114A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A20_0x114a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CBE4u; }
    }
    if (ctx->pc != 0x11CBE4u) { return; }
    ctx->pc = 0x11CBE4u;
    // 0x11cbe4: 0x24040004
    ctx->pc = 0x11cbe4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11cbe8: 0xc045288
    ctx->pc = 0x11CBE8u;
    SET_GPR_U32(ctx, 31, 0x11CBF0u);
    ctx->pc = 0x11CBECu;
    SET_GPR_U32(ctx, 5, ((uint32_t)2 << 16));
    ctx->pc = 0x114A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A20_0x114a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CBF0u; }
    }
    if (ctx->pc != 0x11CBF0u) { return; }
    ctx->pc = 0x11CBF0u;
    // 0x11cbf0: 0x3c048000
    ctx->pc = 0x11cbf0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x11cbf4: 0x282d
    ctx->pc = 0x11cbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cbf8: 0xc045288
    ctx->pc = 0x11CBF8u;
    SET_GPR_U32(ctx, 31, 0x11CC00u);
    ctx->pc = 0x11CBFCu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 2));
    ctx->pc = 0x114A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A20_0x114a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CC00u; }
    }
    if (ctx->pc != 0x11CC00u) { return; }
    ctx->pc = 0x11CC00u;
    // 0x11cc00: 0x3c048000
    ctx->pc = 0x11cc00u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x11cc04: 0xc045288
    ctx->pc = 0x11CC04u;
    SET_GPR_U32(ctx, 31, 0x11CC0Cu);
    ctx->pc = 0x11CC08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A20_0x114a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CC0Cu; }
    }
    if (ctx->pc != 0x11CC0Cu) { return; }
    ctx->pc = 0x11CC0Cu;
    // 0x11cc0c: 0x10000002
    ctx->pc = 0x11CC0Cu;
    {
        const bool branch_taken_0x11cc0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CC10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x11cc0c) {
            ctx->pc = 0x11CC18u;
            goto label_11cc18;
        }
    }
    ctx->pc = 0x11CC14u;
label_11cc14:
    // 0x11cc14: 0x102d
    ctx->pc = 0x11cc14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11cc18:
    // 0x11cc18: 0xdfbf0030
    ctx->pc = 0x11cc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11cc1c: 0xdfb10020
    ctx->pc = 0x11cc1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11cc20: 0xdfb00010
    ctx->pc = 0x11cc20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cc24: 0x3e00008
    ctx->pc = 0x11CC24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CC28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CB40u: goto label_11cb40;
            case 0x11CB60u: goto label_11cb60;
            case 0x11CC14u: goto label_11cc14;
            case 0x11CC18u: goto label_11cc18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CC2Cu;
    // 0x11cc2c: 0x0
    ctx->pc = 0x11cc2cu;
    // NOP
    // 0x11cc30: 0x27bdfff0
    ctx->pc = 0x11cc30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11cc34: 0xffbf0000
    ctx->pc = 0x11cc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11cc38: 0xc04528c
    ctx->pc = 0x11CC38u;
    SET_GPR_U32(ctx, 31, 0x11CC40u);
    ctx->pc = 0x11CC3Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x114A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A30_0x114a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CC40u; }
    }
    if (ctx->pc != 0x11CC40u) { return; }
    ctx->pc = 0x11CC40u;
    // 0x11cc40: 0x3c030001
    ctx->pc = 0x11cc40u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x11cc44: 0xdfbf0000
    ctx->pc = 0x11cc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cc48: 0x431024
    ctx->pc = 0x11cc48u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11cc4c: 0x2102b
    ctx->pc = 0x11cc4cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11cc50: 0x3e00008
    ctx->pc = 0x11CC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CC54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CB40u: goto label_11cb40;
            case 0x11CB60u: goto label_11cb60;
            case 0x11CC14u: goto label_11cc14;
            case 0x11CC18u: goto label_11cc18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CC58u;
}
