#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013C590
// Address: 0x13c590 - 0x13c7c0
void sub_0013C590_0x13c590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13c590u;

    // 0x13c590: 0x27bdfeb0
    ctx->pc = 0x13c590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x13c594: 0x3c020022
    ctx->pc = 0x13c594u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13c598: 0xffb70138
    ctx->pc = 0x13c598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x13c59c: 0xb82d
    ctx->pc = 0x13c59cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c5a0: 0xffb00100
    ctx->pc = 0x13c5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x13c5a4: 0x2443de90
    ctx->pc = 0x13c5a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294958736));
    // 0x13c5a8: 0xffb10108
    ctx->pc = 0x13c5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x13c5ac: 0xffb20110
    ctx->pc = 0x13c5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x13c5b0: 0xffb30118
    ctx->pc = 0x13c5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x13c5b4: 0xffb40120
    ctx->pc = 0x13c5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x13c5b8: 0xffb50128
    ctx->pc = 0x13c5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x13c5bc: 0xffb60130
    ctx->pc = 0x13c5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x13c5c0: 0xffbe0140
    ctx->pc = 0x13c5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x13c5c4: 0xffbf0148
    ctx->pc = 0x13c5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x13c5c8: 0x8c730000
    ctx->pc = 0x13c5c8u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c5cc: 0x1260003d
    ctx->pc = 0x13C5CCu;
    {
        const bool branch_taken_0x13c5cc = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x13C5D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13c5cc) {
            ctx->pc = 0x13C6C4u;
            goto label_13c6c4;
        }
    }
    ctx->pc = 0x13C5D4u;
    // 0x13c5d4: 0x8c740004
    ctx->pc = 0x13c5d4u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x13c5d8: 0x1280002f
    ctx->pc = 0x13C5D8u;
    {
        const bool branch_taken_0x13c5d8 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x13C5DCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13c5d8) {
            ctx->pc = 0x13C698u;
            goto label_13c698;
        }
    }
    ctx->pc = 0x13C5E0u;
    // 0x13c5e0: 0x60b02d
    ctx->pc = 0x13c5e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c5e4: 0x3c1e0022
    ctx->pc = 0x13c5e4u;
    SET_GPR_U32(ctx, 30, ((uint32_t)34 << 16));
    // 0x13c5e8: 0x24150002
    ctx->pc = 0x13c5e8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 2));
    // 0x13c5ec: 0x260882d
    ctx->pc = 0x13c5ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13c5f0:
    // 0x13c5f0: 0x8ec2000c
    ctx->pc = 0x13c5f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x13c5f4: 0x3a0282d
    ctx->pc = 0x13c5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c5f8: 0x8ed00008
    ctx->pc = 0x13c5f8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x13c5fc: 0x521818
    ctx->pc = 0x13c5fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x13c600: 0x1080c0
    ctx->pc = 0x13c600u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 3));
    // 0x13c604: 0x721021
    ctx->pc = 0x13c604u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x13c608: 0x26520001
    ctx->pc = 0x13c608u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x13c60c: 0x2028021
    ctx->pc = 0x13c60cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13c610: 0x2708021
    ctx->pc = 0x13c610u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x13c614: 0xc04efa0
    ctx->pc = 0x13C614u;
    SET_GPR_U32(ctx, 31, 0x13C61Cu);
    ctx->pc = 0x13C618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13BE80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013BE80_0x13be80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C61Cu; }
    }
    if (ctx->pc != 0x13C61Cu) { return; }
    ctx->pc = 0x13C61Cu;
    // 0x13c61c: 0x82020000
    ctx->pc = 0x13c61cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13c620: 0x10400017
    ctx->pc = 0x13C620u;
    {
        const bool branch_taken_0x13c620 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13C624u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26880));
        if (branch_taken_0x13c620) {
            ctx->pc = 0x13C680u;
            goto label_13c680;
        }
    }
    ctx->pc = 0x13C628u;
    // 0x13c628: 0xc04e082
    ctx->pc = 0x13C628u;
    SET_GPR_U32(ctx, 31, 0x13C630u);
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C630u; }
    }
    if (ctx->pc != 0x13C630u) { return; }
    ctx->pc = 0x13C630u;
    // 0x13c630: 0xc04e160
    ctx->pc = 0x13C630u;
    SET_GPR_U32(ctx, 31, 0x13C638u);
    ctx->pc = 0x13C634u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x138580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138580_0x138580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C638u; }
    }
    if (ctx->pc != 0x13C638u) { return; }
    ctx->pc = 0x13C638u;
    // 0x13c638: 0x24046901
    ctx->pc = 0x13c638u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26881));
    // 0x13c63c: 0xc04e082
    ctx->pc = 0x13C63Cu;
    SET_GPR_U32(ctx, 31, 0x13C644u);
    ctx->pc = 0x13C640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C644u; }
    }
    if (ctx->pc != 0x13C644u) { return; }
    ctx->pc = 0x13C644u;
    // 0x13c644: 0x6010008
    ctx->pc = 0x13C644u;
    {
        const bool branch_taken_0x13c644 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x13C648u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4294958756)));
        if (branch_taken_0x13c644) {
            ctx->pc = 0x13C668u;
            goto label_13c668;
        }
    }
    ctx->pc = 0x13C64Cu;
    // 0x13c64c: 0x1055000c
    ctx->pc = 0x13C64Cu;
    {
        const bool branch_taken_0x13c64c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 21));
        ctx->pc = 0x13C650u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        if (branch_taken_0x13c64c) {
            ctx->pc = 0x13C680u;
            goto label_13c680;
        }
    }
    ctx->pc = 0x13C654u;
    // 0x13c654: 0x3a0282d
    ctx->pc = 0x13c654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c658: 0xc045a12
    ctx->pc = 0x13C658u;
    SET_GPR_U32(ctx, 31, 0x13C660u);
    ctx->pc = 0x13C65Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294955496));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C660u; }
    }
    if (ctx->pc != 0x13C660u) { return; }
    ctx->pc = 0x13C660u;
    // 0x13c660: 0x10000008
    ctx->pc = 0x13C660u;
    {
        const bool branch_taken_0x13c660 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13C664u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        if (branch_taken_0x13c660) {
            ctx->pc = 0x13C684u;
            goto label_13c684;
        }
    }
    ctx->pc = 0x13C668u;
label_13c668:
    // 0x13c668: 0x10550005
    ctx->pc = 0x13C668u;
    {
        const bool branch_taken_0x13c668 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 21));
        ctx->pc = 0x13C66Cu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
        if (branch_taken_0x13c668) {
            ctx->pc = 0x13C680u;
            goto label_13c680;
        }
    }
    ctx->pc = 0x13C670u;
    // 0x13c670: 0x3c030024
    ctx->pc = 0x13c670u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x13c674: 0x3a0282d
    ctx->pc = 0x13c674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c678: 0xc045a12
    ctx->pc = 0x13C678u;
    SET_GPR_U32(ctx, 31, 0x13C680u);
    ctx->pc = 0x13C67Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294955536));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C680u; }
    }
    if (ctx->pc != 0x13C680u) { return; }
    ctx->pc = 0x13C680u;
label_13c680:
    // 0x13c680: 0x254102b
    ctx->pc = 0x13c680u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_13c684:
    // 0x13c684: 0x1440ffda
    ctx->pc = 0x13C684u;
    {
        const bool branch_taken_0x13c684 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13C688u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x13c684) {
            ctx->pc = 0x13C5F0u;
            goto label_13c5f0;
        }
    }
    ctx->pc = 0x13C68Cu;
    // 0x13c68c: 0x10000004
    ctx->pc = 0x13C68Cu;
    {
        const bool branch_taken_0x13c68c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13C690u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4294958756)));
        if (branch_taken_0x13c68c) {
            ctx->pc = 0x13C6A0u;
            goto label_13c6a0;
        }
    }
    ctx->pc = 0x13C694u;
    // 0x13c694: 0x0
    ctx->pc = 0x13c694u;
    // NOP
label_13c698:
    // 0x13c698: 0x3c1e0022
    ctx->pc = 0x13c698u;
    SET_GPR_U32(ctx, 30, ((uint32_t)34 << 16));
    // 0x13c69c: 0x8fc3dea4
    ctx->pc = 0x13c69cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4294958756)));
label_13c6a0:
    // 0x13c6a0: 0x24020002
    ctx->pc = 0x13c6a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x13c6a4: 0x10620004
    ctx->pc = 0x13C6A4u;
    {
        const bool branch_taken_0x13c6a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x13C6A8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13c6a4) {
            ctx->pc = 0x13C6B8u;
            goto label_13c6b8;
        }
    }
    ctx->pc = 0x13C6ACu;
    // 0x13c6ac: 0x3c040024
    ctx->pc = 0x13c6acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13c6b0: 0xc045a12
    ctx->pc = 0x13C6B0u;
    SET_GPR_U32(ctx, 31, 0x13C6B8u);
    ctx->pc = 0x13C6B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955568));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C6B8u; }
    }
    if (ctx->pc != 0x13C6B8u) { return; }
    ctx->pc = 0x13C6B8u;
label_13c6b8:
    // 0x13c6b8: 0xc04f1f0
    ctx->pc = 0x13C6B8u;
    SET_GPR_U32(ctx, 31, 0x13C6C0u);
    ctx->pc = 0x13C7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C7C0_0x13c7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C6C0u; }
    }
    if (ctx->pc != 0x13C6C0u) { return; }
    ctx->pc = 0x13C6C0u;
    // 0x13c6c0: 0x24020001
    ctx->pc = 0x13c6c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_13c6c4:
    // 0x13c6c4: 0xdfb00100
    ctx->pc = 0x13c6c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x13c6c8: 0xdfb10108
    ctx->pc = 0x13c6c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x13c6cc: 0xdfb20110
    ctx->pc = 0x13c6ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x13c6d0: 0xdfb30118
    ctx->pc = 0x13c6d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x13c6d4: 0xdfb40120
    ctx->pc = 0x13c6d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x13c6d8: 0xdfb50128
    ctx->pc = 0x13c6d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x13c6dc: 0xdfb60130
    ctx->pc = 0x13c6dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x13c6e0: 0xdfb70138
    ctx->pc = 0x13c6e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x13c6e4: 0xdfbe0140
    ctx->pc = 0x13c6e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x13c6e8: 0xdfbf0148
    ctx->pc = 0x13c6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x13c6ec: 0x3e00008
    ctx->pc = 0x13C6ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C6F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13C5F0u: goto label_13c5f0;
            case 0x13C668u: goto label_13c668;
            case 0x13C680u: goto label_13c680;
            case 0x13C684u: goto label_13c684;
            case 0x13C698u: goto label_13c698;
            case 0x13C6A0u: goto label_13c6a0;
            case 0x13C6B8u: goto label_13c6b8;
            case 0x13C6C4u: goto label_13c6c4;
            case 0x13C740u: goto label_13c740;
            case 0x13C788u: goto label_13c788;
            case 0x13C790u: goto label_13c790;
            case 0x13C798u: goto label_13c798;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13C6F4u;
    // 0x13c6f4: 0x0
    ctx->pc = 0x13c6f4u;
    // NOP
    // 0x13c6f8: 0x27bdffc0
    ctx->pc = 0x13c6f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13c6fc: 0xffb40020
    ctx->pc = 0x13c6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13c700: 0xe0a02d
    ctx->pc = 0x13c700u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c704: 0xffb00000
    ctx->pc = 0x13c704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13c708: 0x802d
    ctx->pc = 0x13c708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c70c: 0xffb20010
    ctx->pc = 0x13c70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13c710: 0xc0902d
    ctx->pc = 0x13c710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c714: 0xffb30018
    ctx->pc = 0x13c714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13c718: 0x80982d
    ctx->pc = 0x13c718u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c71c: 0xffb60030
    ctx->pc = 0x13c71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x13c720: 0xa0b02d
    ctx->pc = 0x13c720u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c724: 0xffb10008
    ctx->pc = 0x13c724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13c728: 0xffb50028
    ctx->pc = 0x13c728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x13c72c: 0x1a800018
    ctx->pc = 0x13C72Cu;
    {
        const bool branch_taken_0x13c72c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x13C730u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        if (branch_taken_0x13c72c) {
            ctx->pc = 0x13C790u;
            goto label_13c790;
        }
    }
    ctx->pc = 0x13C734u;
    // 0x13c734: 0x3c020022
    ctx->pc = 0x13c734u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13c738: 0x240882d
    ctx->pc = 0x13c738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c73c: 0x2455de90
    ctx->pc = 0x13c73cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294958736));
label_13c740:
    // 0x13c740: 0x8ea2000c
    ctx->pc = 0x13c740u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x13c744: 0x2c0202d
    ctx->pc = 0x13c744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c748: 0x8ea50008
    ctx->pc = 0x13c748u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x13c74c: 0x501818
    ctx->pc = 0x13c74cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x13c750: 0x528c0
    ctx->pc = 0x13c750u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x13c754: 0x701021
    ctx->pc = 0x13c754u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13c758: 0x26100001
    ctx->pc = 0x13c758u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x13c75c: 0xa22821
    ctx->pc = 0x13c75cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13c760: 0xc04f002
    ctx->pc = 0x13C760u;
    SET_GPR_U32(ctx, 31, 0x13C768u);
    ctx->pc = 0x13C764u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->pc = 0x13C008u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C008_0x13c008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C768u; }
    }
    if (ctx->pc != 0x13C768u) { return; }
    ctx->pc = 0x13C768u;
    // 0x13c768: 0x14400007
    ctx->pc = 0x13C768u;
    {
        const bool branch_taken_0x13c768 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13C76Cu;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 20)));
        if (branch_taken_0x13c768) {
            ctx->pc = 0x13C788u;
            goto label_13c788;
        }
    }
    ctx->pc = 0x13C770u;
    // 0x13c770: 0x8e220000
    ctx->pc = 0x13c770u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13c774: 0xae620000
    ctx->pc = 0x13c774u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x13c778: 0x8e230004
    ctx->pc = 0x13c778u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13c77c: 0x10000006
    ctx->pc = 0x13C77Cu;
    {
        const bool branch_taken_0x13c77c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13C780u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x13c77c) {
            ctx->pc = 0x13C798u;
            goto label_13c798;
        }
    }
    ctx->pc = 0x13C784u;
    // 0x13c784: 0x0
    ctx->pc = 0x13c784u;
    // NOP
label_13c788:
    // 0x13c788: 0x1460ffed
    ctx->pc = 0x13C788u;
    {
        const bool branch_taken_0x13c788 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x13C78Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x13c788) {
            ctx->pc = 0x13C740u;
            goto label_13c740;
        }
    }
    ctx->pc = 0x13C790u;
label_13c790:
    // 0x13c790: 0xae600004
    ctx->pc = 0x13c790u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x13c794: 0xae600000
    ctx->pc = 0x13c794u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_13c798:
    // 0x13c798: 0xdfb00000
    ctx->pc = 0x13c798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c79c: 0xdfb10008
    ctx->pc = 0x13c79cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13c7a0: 0xdfb20010
    ctx->pc = 0x13c7a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c7a4: 0xdfb30018
    ctx->pc = 0x13c7a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13c7a8: 0xdfb40020
    ctx->pc = 0x13c7a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c7ac: 0xdfb50028
    ctx->pc = 0x13c7acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13c7b0: 0xdfb60030
    ctx->pc = 0x13c7b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c7b4: 0xdfbf0038
    ctx->pc = 0x13c7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13c7b8: 0x3e00008
    ctx->pc = 0x13C7B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C7BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13C5F0u: goto label_13c5f0;
            case 0x13C668u: goto label_13c668;
            case 0x13C680u: goto label_13c680;
            case 0x13C684u: goto label_13c684;
            case 0x13C698u: goto label_13c698;
            case 0x13C6A0u: goto label_13c6a0;
            case 0x13C6B8u: goto label_13c6b8;
            case 0x13C6C4u: goto label_13c6c4;
            case 0x13C740u: goto label_13c740;
            case 0x13C788u: goto label_13c788;
            case 0x13C790u: goto label_13c790;
            case 0x13C798u: goto label_13c798;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13C7C0u;
}
