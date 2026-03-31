#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00138F78
// Address: 0x138f78 - 0x139110
void sub_00138F78_0x138f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x138f78u;

    // 0x138f78: 0x27bdffd0
    ctx->pc = 0x138f78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x138f7c: 0x80402d
    ctx->pc = 0x138f7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f80: 0xffb20010
    ctx->pc = 0x138f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x138f84: 0xa0902d
    ctx->pc = 0x138f84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f88: 0x3242003f
    ctx->pc = 0x138f88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 63));
    // 0x138f8c: 0xffb10008
    ctx->pc = 0x138f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x138f90: 0xffb30018
    ctx->pc = 0x138f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x138f94: 0xc0982d
    ctx->pc = 0x138f94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f98: 0xffb00000
    ctx->pc = 0x138f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x138f9c: 0xe0882d
    ctx->pc = 0x138f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138fa0: 0x10400005
    ctx->pc = 0x138FA0u;
    {
        const bool branch_taken_0x138fa0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x138FA4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        if (branch_taken_0x138fa0) {
            ctx->pc = 0x138FB8u;
            goto label_138fb8;
        }
    }
    ctx->pc = 0x138FA8u;
    // 0x138fa8: 0x3c040024
    ctx->pc = 0x138fa8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x138fac: 0x10000026
    ctx->pc = 0x138FACu;
    {
        const bool branch_taken_0x138fac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x138FB0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953320));
        if (branch_taken_0x138fac) {
            ctx->pc = 0x139048u;
            goto label_139048;
        }
    }
    ctx->pc = 0x138FB4u;
    // 0x138fb4: 0x0
    ctx->pc = 0x138fb4u;
    // NOP
label_138fb8:
    // 0x138fb8: 0x3262001f
    ctx->pc = 0x138fb8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 31));
    // 0x138fbc: 0x10400004
    ctx->pc = 0x138FBCu;
    {
        const bool branch_taken_0x138fbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x138FC0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 63));
        if (branch_taken_0x138fbc) {
            ctx->pc = 0x138FD0u;
            goto label_138fd0;
        }
    }
    ctx->pc = 0x138FC4u;
    // 0x138fc4: 0x3c040024
    ctx->pc = 0x138fc4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x138fc8: 0x1000001f
    ctx->pc = 0x138FC8u;
    {
        const bool branch_taken_0x138fc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x138FCCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953352));
        if (branch_taken_0x138fc8) {
            ctx->pc = 0x139048u;
            goto label_139048;
        }
    }
    ctx->pc = 0x138FD0u;
label_138fd0:
    // 0x138fd0: 0x10400005
    ctx->pc = 0x138FD0u;
    {
        const bool branch_taken_0x138fd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x138FD4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 8), 8));
        if (branch_taken_0x138fd0) {
            ctx->pc = 0x138FE8u;
            goto label_138fe8;
        }
    }
    ctx->pc = 0x138FD8u;
    // 0x138fd8: 0x3c040024
    ctx->pc = 0x138fd8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x138fdc: 0x220282d
    ctx->pc = 0x138fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138fe0: 0x10000006
    ctx->pc = 0x138FE0u;
    {
        const bool branch_taken_0x138fe0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x138FE4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953384));
        if (branch_taken_0x138fe0) {
            ctx->pc = 0x138FFCu;
            goto label_138ffc;
        }
    }
    ctx->pc = 0x138FE8u;
label_138fe8:
    // 0x138fe8: 0x14400009
    ctx->pc = 0x138FE8u;
    {
        const bool branch_taken_0x138fe8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x138FECu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 4));
        if (branch_taken_0x138fe8) {
            ctx->pc = 0x139010u;
            goto label_139010;
        }
    }
    ctx->pc = 0x138FF0u;
    // 0x138ff0: 0x3c040024
    ctx->pc = 0x138ff0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x138ff4: 0x100282d
    ctx->pc = 0x138ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ff8: 0x2484c9c0
    ctx->pc = 0x138ff8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953408));
label_138ffc:
    // 0x138ffc: 0xc045a12
    ctx->pc = 0x138FFCu;
    SET_GPR_U32(ctx, 31, 0x139004u);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139004u; }
    }
    if (ctx->pc != 0x139004u) { return; }
    ctx->pc = 0x139004u;
    // 0x139004: 0x1000003b
    ctx->pc = 0x139004u;
    {
        const bool branch_taken_0x139004 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x139008u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x139004) {
            ctx->pc = 0x1390F4u;
            goto label_1390f4;
        }
    }
    ctx->pc = 0x13900Cu;
    // 0x13900c: 0x0
    ctx->pc = 0x13900cu;
    // NOP
label_139010:
    // 0x139010: 0x681821
    ctx->pc = 0x139010u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x139014: 0x31880
    ctx->pc = 0x139014u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x139018: 0x3c100022
    ctx->pc = 0x139018u;
    SET_GPR_U32(ctx, 16, ((uint32_t)34 << 16));
    // 0x13901c: 0x2610c430
    ctx->pc = 0x13901cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294951984));
    // 0x139020: 0x2038021
    ctx->pc = 0x139020u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x139024: 0x82080000
    ctx->pc = 0x139024u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x139028: 0x15000032
    ctx->pc = 0x139028u;
    {
        const bool branch_taken_0x139028 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x13902Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x139028) {
            ctx->pc = 0x1390F4u;
            goto label_1390f4;
        }
    }
    ctx->pc = 0x139030u;
    // 0x139030: 0xc04e37a
    ctx->pc = 0x139030u;
    SET_GPR_U32(ctx, 31, 0x139038u);
    ctx->pc = 0x138DE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138DE8_0x138de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139038u; }
    }
    if (ctx->pc != 0x139038u) { return; }
    ctx->pc = 0x139038u;
    // 0x139038: 0x14400007
    ctx->pc = 0x139038u;
    {
        const bool branch_taken_0x139038 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13903Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x139038) {
            ctx->pc = 0x139058u;
            goto label_139058;
        }
    }
    ctx->pc = 0x139040u;
    // 0x139040: 0x3c040024
    ctx->pc = 0x139040u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x139044: 0x2484c9d8
    ctx->pc = 0x139044u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953432));
label_139048:
    // 0x139048: 0xc045a12
    ctx->pc = 0x139048u;
    SET_GPR_U32(ctx, 31, 0x139050u);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139050u; }
    }
    if (ctx->pc != 0x139050u) { return; }
    ctx->pc = 0x139050u;
    // 0x139050: 0x10000028
    ctx->pc = 0x139050u;
    {
        const bool branch_taken_0x139050 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x139054u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x139050) {
            ctx->pc = 0x1390F4u;
            goto label_1390f4;
        }
    }
    ctx->pc = 0x139058u;
label_139058:
    // 0x139058: 0x2623ffc0
    ctx->pc = 0x139058u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 4294967232));
    // 0x13905c: 0x3c042000
    ctx->pc = 0x13905cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)8192 << 16));
    // 0x139060: 0x2431021
    ctx->pc = 0x139060u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x139064: 0x60302d
    ctx->pc = 0x139064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139068: 0x441025
    ctx->pc = 0x139068u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13906c: 0x240202d
    ctx->pc = 0x13906cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139070: 0x282d
    ctx->pc = 0x139070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139074: 0xae030010
    ctx->pc = 0x139074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x139078: 0xae11001c
    ctx->pc = 0x139078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x13907c: 0xae130018
    ctx->pc = 0x13907cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x139080: 0xae020014
    ctx->pc = 0x139080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x139084: 0xae000008
    ctx->pc = 0x139084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x139088: 0xae12000c
    ctx->pc = 0x139088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x13908c: 0xc041f1a
    ctx->pc = 0x13908Cu;
    SET_GPR_U32(ctx, 31, 0x139094u);
    ctx->pc = 0x139090u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139094u; }
    }
    if (ctx->pc != 0x139094u) { return; }
    ctx->pc = 0x139094u;
    // 0x139094: 0x8e05000c
    ctx->pc = 0x139094u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x139098: 0x8e020010
    ctx->pc = 0x139098u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13909c: 0xa0202d
    ctx->pc = 0x13909cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1390a0: 0xa22821
    ctx->pc = 0x1390a0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1390a4: 0xc0453c6
    ctx->pc = 0x1390A4u;
    SET_GPR_U32(ctx, 31, 0x1390ACu);
    ctx->pc = 0x1390A8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 63));
    ctx->pc = 0x114F18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114F18_0x114f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1390ACu; }
    }
    if (ctx->pc != 0x1390ACu) { return; }
    ctx->pc = 0x1390ACu;
    // 0x1390ac: 0x8e05000c
    ctx->pc = 0x1390acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1390b0: 0x8e020010
    ctx->pc = 0x1390b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1390b4: 0xa0202d
    ctx->pc = 0x1390b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1390b8: 0xa22821
    ctx->pc = 0x1390b8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1390bc: 0xc045416
    ctx->pc = 0x1390BCu;
    SET_GPR_U32(ctx, 31, 0x1390C4u);
    ctx->pc = 0x1390C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 63));
    ctx->pc = 0x115058u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00115058_0x115058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1390C4u; }
    }
    if (ctx->pc != 0x1390C4u) { return; }
    ctx->pc = 0x1390C4u;
    // 0x1390c4: 0x3c020014
    ctx->pc = 0x1390c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20 << 16));
    // 0x1390c8: 0x3c030014
    ctx->pc = 0x1390c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)20 << 16));
    // 0x1390cc: 0x24040001
    ctx->pc = 0x1390ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1390d0: 0x24638ec0
    ctx->pc = 0x1390d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294938304));
    // 0x1390d4: 0x24428ea8
    ctx->pc = 0x1390d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294938280));
    // 0x1390d8: 0xae030028
    ctx->pc = 0x1390d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1390dc: 0xa2040000
    ctx->pc = 0x1390dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1390e0: 0xae000024
    ctx->pc = 0x1390e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1390e4: 0xae00002c
    ctx->pc = 0x1390e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1390e8: 0xa2040002
    ctx->pc = 0x1390e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1390ec: 0xae020020
    ctx->pc = 0x1390ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1390f0: 0x200102d
    ctx->pc = 0x1390f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1390f4:
    // 0x1390f4: 0xdfb00000
    ctx->pc = 0x1390f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1390f8: 0xdfb10008
    ctx->pc = 0x1390f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1390fc: 0xdfb20010
    ctx->pc = 0x1390fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139100: 0xdfb30018
    ctx->pc = 0x139100u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x139104: 0xdfbf0020
    ctx->pc = 0x139104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139108: 0x3e00008
    ctx->pc = 0x139108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13910Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138FB8u: goto label_138fb8;
            case 0x138FD0u: goto label_138fd0;
            case 0x138FE8u: goto label_138fe8;
            case 0x138FFCu: goto label_138ffc;
            case 0x139010u: goto label_139010;
            case 0x139048u: goto label_139048;
            case 0x139058u: goto label_139058;
            case 0x1390F4u: goto label_1390f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x139110u;
}
