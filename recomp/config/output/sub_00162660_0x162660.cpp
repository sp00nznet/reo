#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00162660
// Address: 0x162660 - 0x1627f0
void sub_00162660_0x162660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x162660u;

label_162660:
    // 0x162660: 0x27bdffe0
    ctx->pc = 0x162660u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x162664: 0xffb00000
    ctx->pc = 0x162664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x162668: 0xa0802d
    ctx->pc = 0x162668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16266c: 0xffb10008
    ctx->pc = 0x16266cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x162670: 0xffbf0010
    ctx->pc = 0x162670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x162674: 0xc057ff0
    ctx->pc = 0x162674u;
    SET_GPR_U32(ctx, 31, 0x16267Cu);
    ctx->pc = 0x162678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16267Cu; }
    }
    if (ctx->pc != 0x16267Cu) { return; }
    ctx->pc = 0x16267Cu;
    // 0x16267c: 0x3c040024
    ctx->pc = 0x16267cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x162680: 0x200282d
    ctx->pc = 0x162680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162684: 0x14400006
    ctx->pc = 0x162684u;
    {
        const bool branch_taken_0x162684 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x162688u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 464));
        if (branch_taken_0x162684) {
            ctx->pc = 0x1626A0u;
            goto label_1626a0;
        }
    }
    ctx->pc = 0x16268Cu;
    // 0x16268c: 0xdfb00000
    ctx->pc = 0x16268cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162690: 0xdfb10008
    ctx->pc = 0x162690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x162694: 0xdfbf0010
    ctx->pc = 0x162694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162698: 0x8058dd4
    ctx->pc = 0x162698u;
    ctx->pc = 0x16269Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x1626A0u;
label_1626a0:
    // 0x1626a0: 0x8e24004c
    ctx->pc = 0x1626a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1626a4: 0xdfb00000
    ctx->pc = 0x1626a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1626a8: 0xdfb10008
    ctx->pc = 0x1626a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1626ac: 0xdfbf0010
    ctx->pc = 0x1626acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1626b0: 0x804f51a
    ctx->pc = 0x1626B0u;
    ctx->pc = 0x1626B4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x13D468u;
    sub_0013D468_0x13d468(rdram, ctx, runtime); return;
    ctx->pc = 0x1626B8u;
    // 0x1626b8: 0x27bdffe0
    ctx->pc = 0x1626b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1626bc: 0xffb00000
    ctx->pc = 0x1626bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1626c0: 0x80802d
    ctx->pc = 0x1626c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1626c4: 0xffb10008
    ctx->pc = 0x1626c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1626c8: 0xffbf0010
    ctx->pc = 0x1626c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1626cc: 0xc057ff0
    ctx->pc = 0x1626CCu;
    SET_GPR_U32(ctx, 31, 0x1626D4u);
    ctx->pc = 0x1626D0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1626D4u; }
    }
    if (ctx->pc != 0x1626D4u) { return; }
    ctx->pc = 0x1626D4u;
    // 0x1626d4: 0x3c040024
    ctx->pc = 0x1626d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1626d8: 0x14400007
    ctx->pc = 0x1626D8u;
    {
        const bool branch_taken_0x1626d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1626DCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 512));
        if (branch_taken_0x1626d8) {
            ctx->pc = 0x1626F8u;
            goto label_1626f8;
        }
    }
    ctx->pc = 0x1626E0u;
    // 0x1626e0: 0xdfb00000
    ctx->pc = 0x1626e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1626e4: 0xdfb10008
    ctx->pc = 0x1626e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1626e8: 0xdfbf0010
    ctx->pc = 0x1626e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1626ec: 0x8058dd4
    ctx->pc = 0x1626ECu;
    ctx->pc = 0x1626F0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x1626F4u;
    // 0x1626f4: 0x0
    ctx->pc = 0x1626f4u;
    // NOP
label_1626f8:
    // 0x1626f8: 0x16200007
    ctx->pc = 0x1626F8u;
    {
        const bool branch_taken_0x1626f8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1626FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1626f8) {
            ctx->pc = 0x162718u;
            goto label_162718;
        }
    }
    ctx->pc = 0x162700u;
    // 0x162700: 0x3c040024
    ctx->pc = 0x162700u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x162704: 0xdfb00000
    ctx->pc = 0x162704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162708: 0xdfb10008
    ctx->pc = 0x162708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16270c: 0x24840230
    ctx->pc = 0x16270cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 560));
    // 0x162710: 0x8058dd4
    ctx->pc = 0x162710u;
    ctx->pc = 0x162714u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x162718u;
label_162718:
    // 0x162718: 0xc04f3de
    ctx->pc = 0x162718u;
    SET_GPR_U32(ctx, 31, 0x162720u);
    ctx->pc = 0x16271Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x13CF78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CF78_0x13cf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162720u; }
    }
    if (ctx->pc != 0x162720u) { return; }
    ctx->pc = 0x162720u;
    // 0x162720: 0x200202d
    ctx->pc = 0x162720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162724: 0xc058944
    ctx->pc = 0x162724u;
    SET_GPR_U32(ctx, 31, 0x16272Cu);
    ctx->pc = 0x162728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x162510u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00162510_0x162510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16272Cu; }
    }
    if (ctx->pc != 0x16272Cu) { return; }
    ctx->pc = 0x16272Cu;
    // 0x16272c: 0x200202d
    ctx->pc = 0x16272cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162730: 0xc058998
    ctx->pc = 0x162730u;
    SET_GPR_U32(ctx, 31, 0x162738u);
    ctx->pc = 0x162734u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x162660u;
    goto label_162660;
    ctx->pc = 0x162738u;
label_162738:
    // 0x162738: 0x200202d
    ctx->pc = 0x162738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16273c: 0xdfb10008
    ctx->pc = 0x16273cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x162740: 0xdfb00000
    ctx->pc = 0x162740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162744: 0xdfbf0010
    ctx->pc = 0x162744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162748: 0x8058974
    ctx->pc = 0x162748u;
    ctx->pc = 0x16274Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1625D0u;
    entry_1625d0_0x162660(rdram, ctx, runtime); return;
    ctx->pc = 0x162750u;
    // 0x162750: 0x27bdfff0
    ctx->pc = 0x162750u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162754: 0xffb00000
    ctx->pc = 0x162754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x162758: 0xffbf0008
    ctx->pc = 0x162758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16275c: 0xc057ff0
    ctx->pc = 0x16275Cu;
    SET_GPR_U32(ctx, 31, 0x162764u);
    ctx->pc = 0x162760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162764u; }
    }
    if (ctx->pc != 0x162764u) { return; }
    ctx->pc = 0x162764u;
    // 0x162764: 0x200202d
    ctx->pc = 0x162764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162768: 0x14400007
    ctx->pc = 0x162768u;
    {
        const bool branch_taken_0x162768 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16276Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x162768) {
            ctx->pc = 0x162788u;
            goto label_162788;
        }
    }
    ctx->pc = 0x162770u;
    // 0x162770: 0x3c040024
    ctx->pc = 0x162770u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x162774: 0xdfb00000
    ctx->pc = 0x162774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162778: 0xdfbf0008
    ctx->pc = 0x162778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16277c: 0x24840260
    ctx->pc = 0x16277cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 608));
    // 0x162780: 0x8058dd4
    ctx->pc = 0x162780u;
    ctx->pc = 0x162784u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x162788u;
label_162788:
    // 0x162788: 0xc058998
    ctx->pc = 0x162788u;
    SET_GPR_U32(ctx, 31, 0x162790u);
    ctx->pc = 0x162660u;
    goto label_162660;
    ctx->pc = 0x162790u;
label_162790:
    // 0x162790: 0x200202d
    ctx->pc = 0x162790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162794: 0xdfbf0008
    ctx->pc = 0x162794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x162798: 0xdfb00000
    ctx->pc = 0x162798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16279c: 0x80589ea
    ctx->pc = 0x16279Cu;
    ctx->pc = 0x1627A0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1627A8u;
    goto label_1627a8;
    ctx->pc = 0x1627A4u;
    // 0x1627a4: 0x0
    ctx->pc = 0x1627a4u;
    // NOP
label_1627a8:
    // 0x1627a8: 0x27bdfff0
    ctx->pc = 0x1627a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1627ac: 0xffb00000
    ctx->pc = 0x1627acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1627b0: 0xffbf0008
    ctx->pc = 0x1627b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1627b4: 0xc057ff0
    ctx->pc = 0x1627B4u;
    SET_GPR_U32(ctx, 31, 0x1627BCu);
    ctx->pc = 0x1627B8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1627BCu; }
    }
    if (ctx->pc != 0x1627BCu) { return; }
    ctx->pc = 0x1627BCu;
    // 0x1627bc: 0x200202d
    ctx->pc = 0x1627bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1627c0: 0x14400007
    ctx->pc = 0x1627C0u;
    {
        const bool branch_taken_0x1627c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1627C4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1627c0) {
            ctx->pc = 0x1627E0u;
            goto label_1627e0;
        }
    }
    ctx->pc = 0x1627C8u;
    // 0x1627c8: 0x3c040024
    ctx->pc = 0x1627c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1627cc: 0xdfb00000
    ctx->pc = 0x1627ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1627d0: 0xdfbf0008
    ctx->pc = 0x1627d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1627d4: 0x24840290
    ctx->pc = 0x1627d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 656));
    // 0x1627d8: 0x8058dd4
    ctx->pc = 0x1627D8u;
    ctx->pc = 0x1627DCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x1627E0u;
label_1627e0:
    // 0x1627e0: 0xdfb00000
    ctx->pc = 0x1627e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1627e4: 0xdfbf0008
    ctx->pc = 0x1627e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1627e8: 0x8058abe
    ctx->pc = 0x1627E8u;
    ctx->pc = 0x1627ECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x162AF8u;
    sub_00162AF8_0x162af8(rdram, ctx, runtime); return;
    ctx->pc = 0x1627F0u;
}
