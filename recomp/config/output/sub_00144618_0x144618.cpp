#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00144618
// Address: 0x144618 - 0x144748
void sub_00144618_0x144618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x144618u;

    // 0x144618: 0x27bdff90
    ctx->pc = 0x144618u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14461c: 0xffb00000
    ctx->pc = 0x14461cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x144620: 0xffb50050
    ctx->pc = 0x144620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x144624: 0x80802d
    ctx->pc = 0x144624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144628: 0xffb40040
    ctx->pc = 0x144628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x14462c: 0xc0a82d
    ctx->pc = 0x14462cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144630: 0xffb20020
    ctx->pc = 0x144630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x144634: 0xe0a02d
    ctx->pc = 0x144634u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144638: 0xffb10010
    ctx->pc = 0x144638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x14463c: 0xffbf0060
    ctx->pc = 0x14463cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x144640: 0x100882d
    ctx->pc = 0x144640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144644: 0xffb30030
    ctx->pc = 0x144644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x144648: 0xc0516d6
    ctx->pc = 0x144648u;
    SET_GPR_U32(ctx, 31, 0x144650u);
    ctx->pc = 0x14464Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    ctx->pc = 0x145B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00145B58_0x145b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144650u; }
    }
    if (ctx->pc != 0x144650u) { return; }
    ctx->pc = 0x144650u;
    // 0x144650: 0x200202d
    ctx->pc = 0x144650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144654: 0xc0515ee
    ctx->pc = 0x144654u;
    SET_GPR_U32(ctx, 31, 0x14465Cu);
    ctx->pc = 0x144658u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x1457B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001457B8_0x1457b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14465Cu; }
    }
    if (ctx->pc != 0x14465Cu) { return; }
    ctx->pc = 0x14465Cu;
    // 0x14465c: 0x40902d
    ctx->pc = 0x14465cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144660: 0x2642feff
    ctx->pc = 0x144660u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 4294967039));
    // 0x144664: 0x2c4200af
    ctx->pc = 0x144664u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 175));
    // 0x144668: 0x14400007
    ctx->pc = 0x144668u;
    {
        const bool branch_taken_0x144668 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14466Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x144668) {
            ctx->pc = 0x144688u;
            goto label_144688;
        }
    }
    ctx->pc = 0x144670u;
    // 0x144670: 0x3c050024
    ctx->pc = 0x144670u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x144674: 0x24a5de40
    ctx->pc = 0x144674u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958656));
    // 0x144678: 0xc05220e
    ctx->pc = 0x144678u;
    SET_GPR_U32(ctx, 31, 0x144680u);
    ctx->pc = 0x14467Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x148838u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00148838_0x148838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144680u; }
    }
    if (ctx->pc != 0x144680u) { return; }
    ctx->pc = 0x144680u;
    // 0x144680: 0x10000027
    ctx->pc = 0x144680u;
    {
        const bool branch_taken_0x144680 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144684u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x144680) {
            ctx->pc = 0x144720u;
            goto label_144720;
        }
    }
    ctx->pc = 0x144688u;
label_144688:
    // 0x144688: 0xc051636
    ctx->pc = 0x144688u;
    SET_GPR_U32(ctx, 31, 0x144690u);
    ctx->pc = 0x14468Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x1458D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001458D8_0x1458d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144690u; }
    }
    if (ctx->pc != 0x144690u) { return; }
    ctx->pc = 0x144690u;
    // 0x144690: 0xc0516f6
    ctx->pc = 0x144690u;
    SET_GPR_U32(ctx, 31, 0x144698u);
    ctx->pc = 0x144694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145BD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00145BD8_0x145bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144698u; }
    }
    if (ctx->pc != 0x144698u) { return; }
    ctx->pc = 0x144698u;
    // 0x144698: 0x40982d
    ctx->pc = 0x144698u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14469c: 0xc0510fc
    ctx->pc = 0x14469Cu;
    SET_GPR_U32(ctx, 31, 0x1446A4u);
    ctx->pc = 0x1446A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1443F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001443F0_0x1443f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1446A4u; }
    }
    if (ctx->pc != 0x1446A4u) { return; }
    ctx->pc = 0x1446A4u;
    // 0x1446a4: 0x40302d
    ctx->pc = 0x1446a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1446a8: 0xae860000
    ctx->pc = 0x1446a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x1446ac: 0x8e020134
    ctx->pc = 0x1446acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x1446b0: 0x10400006
    ctx->pc = 0x1446B0u;
    {
        const bool branch_taken_0x1446b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1446B4u;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x1446b0) {
            ctx->pc = 0x1446CCu;
            goto label_1446cc;
        }
    }
    ctx->pc = 0x1446B8u;
    // 0x1446b8: 0x200202d
    ctx->pc = 0x1446b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1446bc: 0xc05221c
    ctx->pc = 0x1446BCu;
    SET_GPR_U32(ctx, 31, 0x1446C4u);
    ctx->pc = 0x1446C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958696));
    ctx->pc = 0x148870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00148870_0x148870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1446C4u; }
    }
    if (ctx->pc != 0x1446C4u) { return; }
    ctx->pc = 0x1446C4u;
    // 0x1446c4: 0x10000016
    ctx->pc = 0x1446C4u;
    {
        const bool branch_taken_0x1446c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1446C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1446c4) {
            ctx->pc = 0x144720u;
            goto label_144720;
        }
    }
    ctx->pc = 0x1446CCu;
label_1446cc:
    // 0x1446cc: 0x324200ff
    ctx->pc = 0x1446ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 255));
    // 0x1446d0: 0x1319c0
    ctx->pc = 0x1446d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 7));
    // 0x1446d4: 0x8e040144
    ctx->pc = 0x1446d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x1446d8: 0x621821
    ctx->pc = 0x1446d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1446dc: 0x2463ffff
    ctx->pc = 0x1446dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1446e0: 0x24050001
    ctx->pc = 0x1446e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1446e4: 0x641018
    ctx->pc = 0x1446e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1446e8: 0x461821
    ctx->pc = 0x1446e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1446ec: 0x2463ffff
    ctx->pc = 0x1446ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1446f0: 0x102d
    ctx->pc = 0x1446f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1446f4: 0xaea30000
    ctx->pc = 0x1446f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1446f8: 0xae850000
    ctx->pc = 0x1446f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x1446fc: 0xae0501c8
    ctx->pc = 0x1446fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 5));
    // 0x144700: 0xae200008
    ctx->pc = 0x144700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x144704: 0xae200014
    ctx->pc = 0x144704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x144708: 0xae200010
    ctx->pc = 0x144708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x14470c: 0xae200004
    ctx->pc = 0x14470cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x144710: 0xae200000
    ctx->pc = 0x144710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x144714: 0xae20001c
    ctx->pc = 0x144714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x144718: 0xae200018
    ctx->pc = 0x144718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x14471c: 0xae20000c
    ctx->pc = 0x14471cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_144720:
    // 0x144720: 0xdfbf0060
    ctx->pc = 0x144720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x144724: 0xdfb50050
    ctx->pc = 0x144724u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144728: 0xdfb40040
    ctx->pc = 0x144728u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14472c: 0xdfb30030
    ctx->pc = 0x14472cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144730: 0xdfb20020
    ctx->pc = 0x144730u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144734: 0xdfb10010
    ctx->pc = 0x144734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144738: 0xdfb00000
    ctx->pc = 0x144738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14473c: 0x3e00008
    ctx->pc = 0x14473Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144740u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144688u: goto label_144688;
            case 0x1446CCu: goto label_1446cc;
            case 0x144720u: goto label_144720;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144744u;
    // 0x144744: 0x0
    ctx->pc = 0x144744u;
    // NOP
}
