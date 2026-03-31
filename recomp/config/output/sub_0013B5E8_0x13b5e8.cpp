#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013B5E8
// Address: 0x13b5e8 - 0x13baa0
void sub_0013B5E8_0x13b5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13b5e8u;

label_13b5e8:
    // 0x13b5e8: 0x27bdfff0
    ctx->pc = 0x13b5e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13b5ec: 0x282d
    ctx->pc = 0x13b5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b5f0: 0xffbf0000
    ctx->pc = 0x13b5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13b5f4: 0x24060030
    ctx->pc = 0x13b5f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    // 0x13b5f8: 0xdfbf0000
    ctx->pc = 0x13b5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b5fc: 0x8041f1a
    ctx->pc = 0x13B5FCu;
    ctx->pc = 0x13B600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x13B604u;
    // 0x13b604: 0x0
    ctx->pc = 0x13b604u;
    // NOP
    // 0x13b608: 0x27bdffd0
    ctx->pc = 0x13b608u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13b60c: 0xffb10018
    ctx->pc = 0x13b60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13b610: 0x80882d
    ctx->pc = 0x13b610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b614: 0xffb00010
    ctx->pc = 0x13b614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13b618: 0xffb20020
    ctx->pc = 0x13b618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13b61c: 0xffbf0028
    ctx->pc = 0x13b61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13b620: 0x16200005
    ctx->pc = 0x13B620u;
    {
        const bool branch_taken_0x13b620 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x13B624u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        if (branch_taken_0x13b620) {
            ctx->pc = 0x13B638u;
            goto label_13b638;
        }
    }
    ctx->pc = 0x13B628u;
    // 0x13b628: 0x3c050024
    ctx->pc = 0x13b628u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x13b62c: 0x10000010
    ctx->pc = 0x13B62Cu;
    {
        const bool branch_taken_0x13b62c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B630u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294954952));
        if (branch_taken_0x13b62c) {
            ctx->pc = 0x13B670u;
            goto label_13b670;
        }
    }
    ctx->pc = 0x13B634u;
    // 0x13b634: 0x0
    ctx->pc = 0x13b634u;
    // NOP
label_13b638:
    // 0x13b638: 0x10c00005
    ctx->pc = 0x13B638u;
    {
        const bool branch_taken_0x13b638 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B63Cu;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x13b638) {
            ctx->pc = 0x13B650u;
            goto label_13b650;
        }
    }
    ctx->pc = 0x13B640u;
    // 0x13b640: 0x202d
    ctx->pc = 0x13b640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b644: 0x1000000a
    ctx->pc = 0x13B644u;
    {
        const bool branch_taken_0x13b644 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B648u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294954992));
        if (branch_taken_0x13b644) {
            ctx->pc = 0x13B670u;
            goto label_13b670;
        }
    }
    ctx->pc = 0x13B64Cu;
    // 0x13b64c: 0x0
    ctx->pc = 0x13b64cu;
    // NOP
label_13b650:
    // 0x13b650: 0xc04ed6c
    ctx->pc = 0x13B650u;
    SET_GPR_U32(ctx, 31, 0x13B658u);
    ctx->pc = 0x13B5B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B5B0_0x13b5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B658u; }
    }
    if (ctx->pc != 0x13B658u) { return; }
    ctx->pc = 0x13B658u;
    // 0x13b658: 0x40802d
    ctx->pc = 0x13b658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b65c: 0x16000008
    ctx->pc = 0x13B65Cu;
    {
        const bool branch_taken_0x13b65c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x13B660u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13b65c) {
            ctx->pc = 0x13B680u;
            goto label_13b680;
        }
    }
    ctx->pc = 0x13B664u;
    // 0x13b664: 0x3c050024
    ctx->pc = 0x13b664u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x13b668: 0x202d
    ctx->pc = 0x13b668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b66c: 0x24a5d018
    ctx->pc = 0x13b66cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955032));
label_13b670:
    // 0x13b670: 0xc04ebf2
    ctx->pc = 0x13B670u;
    SET_GPR_U32(ctx, 31, 0x13B678u);
    ctx->pc = 0x13AFC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AFC8_0x13afc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B678u; }
    }
    if (ctx->pc != 0x13B678u) { return; }
    ctx->pc = 0x13B678u;
    // 0x13b678: 0x1000003f
    ctx->pc = 0x13B678u;
    {
        const bool branch_taken_0x13b678 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B67Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13b678) {
            ctx->pc = 0x13B778u;
            goto label_13b778;
        }
    }
    ctx->pc = 0x13B680u;
label_13b680:
    // 0x13b680: 0xc04f1fa
    ctx->pc = 0x13B680u;
    SET_GPR_U32(ctx, 31, 0x13B688u);
    ctx->pc = 0x13B684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13C7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C7E8_0x13c7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B688u; }
    }
    if (ctx->pc != 0x13B688u) { return; }
    ctx->pc = 0x13B688u;
    // 0x13b688: 0x8fa20004
    ctx->pc = 0x13b688u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x13b68c: 0x14400028
    ctx->pc = 0x13B68Cu;
    {
        const bool branch_taken_0x13b68c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13B690u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x13b68c) {
            ctx->pc = 0x13B730u;
            goto label_13b730;
        }
    }
    ctx->pc = 0x13B694u;
    // 0x13b694: 0x3c020022
    ctx->pc = 0x13b694u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13b698: 0x220202d
    ctx->pc = 0x13b698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b69c: 0x2452dd60
    ctx->pc = 0x13b69cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294958432));
    // 0x13b6a0: 0xc04efa0
    ctx->pc = 0x13B6A0u;
    SET_GPR_U32(ctx, 31, 0x13B6A8u);
    ctx->pc = 0x13B6A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13BE80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013BE80_0x13be80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B6A8u; }
    }
    if (ctx->pc != 0x13B6A8u) { return; }
    ctx->pc = 0x13B6A8u;
    // 0x13b6a8: 0x3c020022
    ctx->pc = 0x13b6a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13b6ac: 0x8c43dea4
    ctx->pc = 0x13b6acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958756)));
    // 0x13b6b0: 0x14600004
    ctx->pc = 0x13B6B0u;
    {
        const bool branch_taken_0x13b6b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x13B6B4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x13b6b0) {
            ctx->pc = 0x13B6C4u;
            goto label_13b6c4;
        }
    }
    ctx->pc = 0x13B6B8u;
    // 0x13b6b8: 0x220282d
    ctx->pc = 0x13b6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b6bc: 0xc045a12
    ctx->pc = 0x13B6BCu;
    SET_GPR_U32(ctx, 31, 0x13B6C4u);
    ctx->pc = 0x13B6C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955080));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B6C4u; }
    }
    if (ctx->pc != 0x13B6C4u) { return; }
    ctx->pc = 0x13B6C4u;
label_13b6c4:
    // 0x13b6c4: 0xc04eccc
    ctx->pc = 0x13B6C4u;
    SET_GPR_U32(ctx, 31, 0x13B6CCu);
    ctx->pc = 0x13B6C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13B330u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B330_0x13b330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B6CCu; }
    }
    if (ctx->pc != 0x13B6CCu) { return; }
    ctx->pc = 0x13B6CCu;
    // 0x13b6cc: 0x40182d
    ctx->pc = 0x13b6ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b6d0: 0x102d
    ctx->pc = 0x13b6d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b6d4: 0x10600028
    ctx->pc = 0x13B6D4u;
    {
        const bool branch_taken_0x13b6d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B6D8u;
        WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
        if (branch_taken_0x13b6d4) {
            ctx->pc = 0x13B778u;
            goto label_13b778;
        }
    }
    ctx->pc = 0x13B6DCu;
    // 0x13b6dc: 0xc04e082
    ctx->pc = 0x13B6DCu;
    SET_GPR_U32(ctx, 31, 0x13B6E4u);
    ctx->pc = 0x13B6E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18688));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B6E4u; }
    }
    if (ctx->pc != 0x13B6E4u) { return; }
    ctx->pc = 0x13B6E4u;
    // 0x13b6e4: 0x3c020022
    ctx->pc = 0x13b6e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13b6e8: 0x8c45dea0
    ctx->pc = 0x13b6e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294958752)));
    // 0x13b6ec: 0xc04e146
    ctx->pc = 0x13B6ECu;
    SET_GPR_U32(ctx, 31, 0x13B6F4u);
    ctx->pc = 0x13B6F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138518u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138518_0x138518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B6F4u; }
    }
    if (ctx->pc != 0x13B6F4u) { return; }
    ctx->pc = 0x13B6F4u;
    // 0x13b6f4: 0x24044901
    ctx->pc = 0x13b6f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18689));
    // 0x13b6f8: 0xc04e082
    ctx->pc = 0x13B6F8u;
    SET_GPR_U32(ctx, 31, 0x13B700u);
    ctx->pc = 0x13B6FCu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B700u; }
    }
    if (ctx->pc != 0x13B700u) { return; }
    ctx->pc = 0x13B700u;
    // 0x13b700: 0x8e020018
    ctx->pc = 0x13b700u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x13b704: 0x443000f
    ctx->pc = 0x13B704u;
    {
        const bool branch_taken_0x13b704 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x13b704) {
            ctx->pc = 0x13B708u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x13B744u;
            goto label_13b744;
        }
    }
    ctx->pc = 0x13B70Cu;
    // 0x13b70c: 0x3c050024
    ctx->pc = 0x13b70cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x13b710: 0x202d
    ctx->pc = 0x13b710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b714: 0xc04ebf2
    ctx->pc = 0x13B714u;
    SET_GPR_U32(ctx, 31, 0x13B71Cu);
    ctx->pc = 0x13B718u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955120));
    ctx->pc = 0x13AFC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AFC8_0x13afc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B71Cu; }
    }
    if (ctx->pc != 0x13B71Cu) { return; }
    ctx->pc = 0x13B71Cu;
    // 0x13b71c: 0xc04ed7a
    ctx->pc = 0x13B71Cu;
    SET_GPR_U32(ctx, 31, 0x13B724u);
    ctx->pc = 0x13B720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13B5E8u;
    goto label_13b5e8;
    ctx->pc = 0x13B724u;
label_13b724:
    // 0x13b724: 0x10000014
    ctx->pc = 0x13B724u;
    {
        const bool branch_taken_0x13b724 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B728u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13b724) {
            ctx->pc = 0x13B778u;
            goto label_13b778;
        }
    }
    ctx->pc = 0x13B72Cu;
    // 0x13b72c: 0x0
    ctx->pc = 0x13b72cu;
    // NOP
label_13b730:
    // 0x13b730: 0xa2020001
    ctx->pc = 0x13b730u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x13b734: 0x8fa30000
    ctx->pc = 0x13b734u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b738: 0xae030018
    ctx->pc = 0x13b738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x13b73c: 0x8fa20004
    ctx->pc = 0x13b73cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x13b740: 0xfe020008
    ctx->pc = 0x13b740u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
label_13b744:
    // 0x13b744: 0xde030008
    ctx->pc = 0x13b744u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13b748: 0x24020001
    ctx->pc = 0x13b748u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b74c: 0xae00001c
    ctx->pc = 0x13b74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x13b750: 0x646307ff
    ctx->pc = 0x13b750u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)2047);
    // 0x13b754: 0xae000020
    ctx->pc = 0x13b754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x13b758: 0x31d78
    ctx->pc = 0x13b758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 21);
    // 0x13b75c: 0x3183f
    ctx->pc = 0x13b75cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x13b760: 0xae000024
    ctx->pc = 0x13b760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x13b764: 0xae030010
    ctx->pc = 0x13b764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x13b768: 0xae000014
    ctx->pc = 0x13b768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x13b76c: 0xa2000002
    ctx->pc = 0x13b76cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13b770: 0xa2020000
    ctx->pc = 0x13b770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x13b774: 0x200102d
    ctx->pc = 0x13b774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13b778:
    // 0x13b778: 0xdfb00010
    ctx->pc = 0x13b778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b77c: 0xdfb10018
    ctx->pc = 0x13b77cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b780: 0xdfb20020
    ctx->pc = 0x13b780u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b784: 0xdfbf0028
    ctx->pc = 0x13b784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13b788: 0x3e00008
    ctx->pc = 0x13B788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B78Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B5E8u: goto label_13b5e8;
            case 0x13B638u: goto label_13b638;
            case 0x13B650u: goto label_13b650;
            case 0x13B670u: goto label_13b670;
            case 0x13B680u: goto label_13b680;
            case 0x13B6C4u: goto label_13b6c4;
            case 0x13B724u: goto label_13b724;
            case 0x13B730u: goto label_13b730;
            case 0x13B744u: goto label_13b744;
            case 0x13B778u: goto label_13b778;
            case 0x13B7C4u: goto label_13b7c4;
            case 0x13B810u: goto label_13b810;
            case 0x13B828u: goto label_13b828;
            case 0x13B868u: goto label_13b868;
            case 0x13B878u: goto label_13b878;
            case 0x13B890u: goto label_13b890;
            case 0x13B8A8u: goto label_13b8a8;
            case 0x13B8ACu: goto label_13b8ac;
            case 0x13B8C8u: goto label_13b8c8;
            case 0x13B900u: goto label_13b900;
            case 0x13B904u: goto label_13b904;
            case 0x13B950u: goto label_13b950;
            case 0x13B960u: goto label_13b960;
            case 0x13B96Cu: goto label_13b96c;
            case 0x13B980u: goto label_13b980;
            case 0x13B998u: goto label_13b998;
            case 0x13B9B8u: goto label_13b9b8;
            case 0x13BA70u: goto label_13ba70;
            case 0x13BA78u: goto label_13ba78;
            case 0x13BA7Cu: goto label_13ba7c;
            case 0x13BA80u: goto label_13ba80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13B790u;
    // 0x13b790: 0x27bdffe0
    ctx->pc = 0x13b790u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13b794: 0xffb10008
    ctx->pc = 0x13b794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13b798: 0x80882d
    ctx->pc = 0x13b798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b79c: 0xffb00000
    ctx->pc = 0x13b79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13b7a0: 0x12200021
    ctx->pc = 0x13B7A0u;
    {
        const bool branch_taken_0x13b7a0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B7A4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x13b7a0) {
            ctx->pc = 0x13B828u;
            goto label_13b828;
        }
    }
    ctx->pc = 0x13B7A8u;
    // 0x13b7a8: 0x92220002
    ctx->pc = 0x13b7a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x13b7ac: 0x2c420002
    ctx->pc = 0x13b7acu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x13b7b0: 0x54400004
    ctx->pc = 0x13B7B0u;
    {
        const bool branch_taken_0x13b7b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13b7b0) {
            ctx->pc = 0x13B7B4u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->pc = 0x13B7C4u;
            goto label_13b7c4;
        }
    }
    ctx->pc = 0x13B7B8u;
    // 0x13b7b8: 0xc04eea8
    ctx->pc = 0x13B7B8u;
    SET_GPR_U32(ctx, 31, 0x13B7C0u);
    ctx->pc = 0x13BAA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013BAA0_0x13baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B7C0u; }
    }
    if (ctx->pc != 0x13B7C0u) { return; }
    ctx->pc = 0x13B7C0u;
    // 0x13b7c0: 0x82220001
    ctx->pc = 0x13b7c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_13b7c4:
    // 0x13b7c4: 0x54400012
    ctx->pc = 0x13B7C4u;
    {
        const bool branch_taken_0x13b7c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13b7c4) {
            ctx->pc = 0x13B7C8u;
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x13B810u;
            goto label_13b810;
        }
    }
    ctx->pc = 0x13B7CCu;
    // 0x13b7cc: 0xc04e082
    ctx->pc = 0x13B7CCu;
    SET_GPR_U32(ctx, 31, 0x13B7D4u);
    ctx->pc = 0x13B7D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20480));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B7D4u; }
    }
    if (ctx->pc != 0x13B7D4u) { return; }
    ctx->pc = 0x13B7D4u;
    // 0x13b7d4: 0xc04e160
    ctx->pc = 0x13B7D4u;
    SET_GPR_U32(ctx, 31, 0x13B7DCu);
    ctx->pc = 0x13B7D8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->pc = 0x138580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138580_0x138580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B7DCu; }
    }
    if (ctx->pc != 0x13B7DCu) { return; }
    ctx->pc = 0x13B7DCu;
    // 0x13b7dc: 0x24045001
    ctx->pc = 0x13b7dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20481));
    // 0x13b7e0: 0xc04e082
    ctx->pc = 0x13B7E0u;
    SET_GPR_U32(ctx, 31, 0x13B7E8u);
    ctx->pc = 0x13B7E4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B7E8u; }
    }
    if (ctx->pc != 0x13B7E8u) { return; }
    ctx->pc = 0x13B7E8u;
    // 0x13b7e8: 0x6030009
    ctx->pc = 0x13B7E8u;
    {
        const bool branch_taken_0x13b7e8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x13b7e8) {
            ctx->pc = 0x13B7ECu;
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x13B810u;
            goto label_13b810;
        }
    }
    ctx->pc = 0x13B7F0u;
    // 0x13b7f0: 0x3c020022
    ctx->pc = 0x13b7f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13b7f4: 0x8c43dea4
    ctx->pc = 0x13b7f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958756)));
    // 0x13b7f8: 0x54600005
    ctx->pc = 0x13B7F8u;
    {
        const bool branch_taken_0x13b7f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x13b7f8) {
            ctx->pc = 0x13B7FCu;
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x13B810u;
            goto label_13b810;
        }
    }
    ctx->pc = 0x13B800u;
    // 0x13b800: 0x3c040024
    ctx->pc = 0x13b800u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13b804: 0xc045a12
    ctx->pc = 0x13B804u;
    SET_GPR_U32(ctx, 31, 0x13B80Cu);
    ctx->pc = 0x13B808u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955160));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B80Cu; }
    }
    if (ctx->pc != 0x13B80Cu) { return; }
    ctx->pc = 0x13B80Cu;
    // 0x13b80c: 0xa2200000
    ctx->pc = 0x13b80cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_13b810:
    // 0x13b810: 0x220202d
    ctx->pc = 0x13b810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b814: 0xdfb00000
    ctx->pc = 0x13b814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b818: 0xdfb10008
    ctx->pc = 0x13b818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13b81c: 0xdfbf0010
    ctx->pc = 0x13b81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b820: 0x804ed7a
    ctx->pc = 0x13B820u;
    ctx->pc = 0x13B824u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x13B5E8u;
    goto label_13b5e8;
    ctx->pc = 0x13B828u;
label_13b828:
    // 0x13b828: 0xdfb00000
    ctx->pc = 0x13b828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b82c: 0xdfb10008
    ctx->pc = 0x13b82cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13b830: 0xdfbf0010
    ctx->pc = 0x13b830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b834: 0x3e00008
    ctx->pc = 0x13B834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B838u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B5E8u: goto label_13b5e8;
            case 0x13B638u: goto label_13b638;
            case 0x13B650u: goto label_13b650;
            case 0x13B670u: goto label_13b670;
            case 0x13B680u: goto label_13b680;
            case 0x13B6C4u: goto label_13b6c4;
            case 0x13B724u: goto label_13b724;
            case 0x13B730u: goto label_13b730;
            case 0x13B744u: goto label_13b744;
            case 0x13B778u: goto label_13b778;
            case 0x13B7C4u: goto label_13b7c4;
            case 0x13B810u: goto label_13b810;
            case 0x13B828u: goto label_13b828;
            case 0x13B868u: goto label_13b868;
            case 0x13B878u: goto label_13b878;
            case 0x13B890u: goto label_13b890;
            case 0x13B8A8u: goto label_13b8a8;
            case 0x13B8ACu: goto label_13b8ac;
            case 0x13B8C8u: goto label_13b8c8;
            case 0x13B900u: goto label_13b900;
            case 0x13B904u: goto label_13b904;
            case 0x13B950u: goto label_13b950;
            case 0x13B960u: goto label_13b960;
            case 0x13B96Cu: goto label_13b96c;
            case 0x13B980u: goto label_13b980;
            case 0x13B998u: goto label_13b998;
            case 0x13B9B8u: goto label_13b9b8;
            case 0x13BA70u: goto label_13ba70;
            case 0x13BA78u: goto label_13ba78;
            case 0x13BA7Cu: goto label_13ba7c;
            case 0x13BA80u: goto label_13ba80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13B83Cu;
    // 0x13b83c: 0x0
    ctx->pc = 0x13b83cu;
    // NOP
    // 0x13b840: 0x27bdfff0
    ctx->pc = 0x13b840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13b844: 0x80382d
    ctx->pc = 0x13b844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b848: 0x14e00007
    ctx->pc = 0x13B848u;
    {
        const bool branch_taken_0x13b848 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x13B84Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13b848) {
            ctx->pc = 0x13B868u;
            goto label_13b868;
        }
    }
    ctx->pc = 0x13B850u;
    // 0x13b850: 0x3c050024
    ctx->pc = 0x13b850u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x13b854: 0xc04ebf2
    ctx->pc = 0x13B854u;
    SET_GPR_U32(ctx, 31, 0x13B85Cu);
    ctx->pc = 0x13B858u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955184));
    ctx->pc = 0x13AFC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AFC8_0x13afc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B85Cu; }
    }
    if (ctx->pc != 0x13B85Cu) { return; }
    ctx->pc = 0x13B85Cu;
    // 0x13b85c: 0x1000001a
    ctx->pc = 0x13B85Cu;
    {
        const bool branch_taken_0x13b85c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B860u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13b85c) {
            ctx->pc = 0x13B8C8u;
            goto label_13b8c8;
        }
    }
    ctx->pc = 0x13B864u;
    // 0x13b864: 0x0
    ctx->pc = 0x13b864u;
    // NOP
label_13b868:
    // 0x13b868: 0x14c00003
    ctx->pc = 0x13B868u;
    {
        const bool branch_taken_0x13b868 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x13B86Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x13b868) {
            ctx->pc = 0x13B878u;
            goto label_13b878;
        }
    }
    ctx->pc = 0x13B870u;
    // 0x13b870: 0x1000000d
    ctx->pc = 0x13B870u;
    {
        const bool branch_taken_0x13b870 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B874u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 5));
        if (branch_taken_0x13b870) {
            ctx->pc = 0x13B8A8u;
            goto label_13b8a8;
        }
    }
    ctx->pc = 0x13B878u;
label_13b878:
    // 0x13b878: 0x14c20005
    ctx->pc = 0x13B878u;
    {
        const bool branch_taken_0x13b878 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x13B87Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x13b878) {
            ctx->pc = 0x13B890u;
            goto label_13b890;
        }
    }
    ctx->pc = 0x13B880u;
    // 0x13b880: 0x8ce40010
    ctx->pc = 0x13b880u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x13b884: 0x851021
    ctx->pc = 0x13b884u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13b888: 0x10000008
    ctx->pc = 0x13B888u;
    {
        const bool branch_taken_0x13b888 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B88Cu;
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
        if (branch_taken_0x13b888) {
            ctx->pc = 0x13B8ACu;
            goto label_13b8ac;
        }
    }
    ctx->pc = 0x13B890u;
label_13b890:
    // 0x13b890: 0x14c20006
    ctx->pc = 0x13B890u;
    {
        const bool branch_taken_0x13b890 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x13B894u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 16)));
        if (branch_taken_0x13b890) {
            ctx->pc = 0x13B8ACu;
            goto label_13b8ac;
        }
    }
    ctx->pc = 0x13B898u;
    // 0x13b898: 0x8ce2001c
    ctx->pc = 0x13b898u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13b89c: 0x451021
    ctx->pc = 0x13b89cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13b8a0: 0x10000002
    ctx->pc = 0x13B8A0u;
    {
        const bool branch_taken_0x13b8a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B8A4u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
        if (branch_taken_0x13b8a0) {
            ctx->pc = 0x13B8ACu;
            goto label_13b8ac;
        }
    }
    ctx->pc = 0x13B8A8u;
label_13b8a8:
    // 0x13b8a8: 0x8ce40010
    ctx->pc = 0x13b8a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_13b8ac:
    // 0x13b8ac: 0x8ce2001c
    ctx->pc = 0x13b8acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13b8b0: 0xace00028
    ctx->pc = 0x13b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
    // 0x13b8b4: 0x44182a
    ctx->pc = 0x13b8b4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x13b8b8: 0x83100a
    ctx->pc = 0x13b8b8u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x13b8bc: 0x28440000
    ctx->pc = 0x13b8bcu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 0));
    // 0x13b8c0: 0x4100b
    ctx->pc = 0x13b8c0u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x13b8c4: 0xace2001c
    ctx->pc = 0x13b8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
label_13b8c8:
    // 0x13b8c8: 0xdfbf0000
    ctx->pc = 0x13b8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b8cc: 0x3e00008
    ctx->pc = 0x13B8CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B8D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B5E8u: goto label_13b5e8;
            case 0x13B638u: goto label_13b638;
            case 0x13B650u: goto label_13b650;
            case 0x13B670u: goto label_13b670;
            case 0x13B680u: goto label_13b680;
            case 0x13B6C4u: goto label_13b6c4;
            case 0x13B724u: goto label_13b724;
            case 0x13B730u: goto label_13b730;
            case 0x13B744u: goto label_13b744;
            case 0x13B778u: goto label_13b778;
            case 0x13B7C4u: goto label_13b7c4;
            case 0x13B810u: goto label_13b810;
            case 0x13B828u: goto label_13b828;
            case 0x13B868u: goto label_13b868;
            case 0x13B878u: goto label_13b878;
            case 0x13B890u: goto label_13b890;
            case 0x13B8A8u: goto label_13b8a8;
            case 0x13B8ACu: goto label_13b8ac;
            case 0x13B8C8u: goto label_13b8c8;
            case 0x13B900u: goto label_13b900;
            case 0x13B904u: goto label_13b904;
            case 0x13B950u: goto label_13b950;
            case 0x13B960u: goto label_13b960;
            case 0x13B96Cu: goto label_13b96c;
            case 0x13B980u: goto label_13b980;
            case 0x13B998u: goto label_13b998;
            case 0x13B9B8u: goto label_13b9b8;
            case 0x13BA70u: goto label_13ba70;
            case 0x13BA78u: goto label_13ba78;
            case 0x13BA7Cu: goto label_13ba7c;
            case 0x13BA80u: goto label_13ba80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13B8D4u;
    // 0x13b8d4: 0x0
    ctx->pc = 0x13b8d4u;
    // NOP
    // 0x13b8d8: 0x27bdfff0
    ctx->pc = 0x13b8d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13b8dc: 0x80102d
    ctx->pc = 0x13b8dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b8e0: 0x14400007
    ctx->pc = 0x13B8E0u;
    {
        const bool branch_taken_0x13b8e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13B8E4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13b8e0) {
            ctx->pc = 0x13B900u;
            goto label_13b900;
        }
    }
    ctx->pc = 0x13B8E8u;
    // 0x13b8e8: 0x3c050024
    ctx->pc = 0x13b8e8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x13b8ec: 0xc04ebf2
    ctx->pc = 0x13B8ECu;
    SET_GPR_U32(ctx, 31, 0x13B8F4u);
    ctx->pc = 0x13B8F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955184));
    ctx->pc = 0x13AFC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AFC8_0x13afc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B8F4u; }
    }
    if (ctx->pc != 0x13B8F4u) { return; }
    ctx->pc = 0x13B8F4u;
    // 0x13b8f4: 0x10000003
    ctx->pc = 0x13B8F4u;
    {
        const bool branch_taken_0x13b8f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B8F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13b8f4) {
            ctx->pc = 0x13B904u;
            goto label_13b904;
        }
    }
    ctx->pc = 0x13B8FCu;
    // 0x13b8fc: 0x0
    ctx->pc = 0x13b8fcu;
    // NOP
label_13b900:
    // 0x13b900: 0x8c42001c
    ctx->pc = 0x13b900u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_13b904:
    // 0x13b904: 0xdfbf0000
    ctx->pc = 0x13b904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b908: 0x3e00008
    ctx->pc = 0x13B908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B90Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B5E8u: goto label_13b5e8;
            case 0x13B638u: goto label_13b638;
            case 0x13B650u: goto label_13b650;
            case 0x13B670u: goto label_13b670;
            case 0x13B680u: goto label_13b680;
            case 0x13B6C4u: goto label_13b6c4;
            case 0x13B724u: goto label_13b724;
            case 0x13B730u: goto label_13b730;
            case 0x13B744u: goto label_13b744;
            case 0x13B778u: goto label_13b778;
            case 0x13B7C4u: goto label_13b7c4;
            case 0x13B810u: goto label_13b810;
            case 0x13B828u: goto label_13b828;
            case 0x13B868u: goto label_13b868;
            case 0x13B878u: goto label_13b878;
            case 0x13B890u: goto label_13b890;
            case 0x13B8A8u: goto label_13b8a8;
            case 0x13B8ACu: goto label_13b8ac;
            case 0x13B8C8u: goto label_13b8c8;
            case 0x13B900u: goto label_13b900;
            case 0x13B904u: goto label_13b904;
            case 0x13B950u: goto label_13b950;
            case 0x13B960u: goto label_13b960;
            case 0x13B96Cu: goto label_13b96c;
            case 0x13B980u: goto label_13b980;
            case 0x13B998u: goto label_13b998;
            case 0x13B9B8u: goto label_13b9b8;
            case 0x13BA70u: goto label_13ba70;
            case 0x13BA78u: goto label_13ba78;
            case 0x13BA7Cu: goto label_13ba7c;
            case 0x13BA80u: goto label_13ba80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13B910u;
    // 0x13b910: 0x27bdffc0
    ctx->pc = 0x13b910u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13b914: 0xffb10008
    ctx->pc = 0x13b914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13b918: 0x80882d
    ctx->pc = 0x13b918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b91c: 0xffb20010
    ctx->pc = 0x13b91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13b920: 0xa0902d
    ctx->pc = 0x13b920u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b924: 0xffb30018
    ctx->pc = 0x13b924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13b928: 0xc0982d
    ctx->pc = 0x13b928u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b92c: 0xffb00000
    ctx->pc = 0x13b92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13b930: 0xffb40020
    ctx->pc = 0x13b930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13b934: 0xffb50028
    ctx->pc = 0x13b934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x13b938: 0x16200005
    ctx->pc = 0x13B938u;
    {
        const bool branch_taken_0x13b938 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x13B93Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        if (branch_taken_0x13b938) {
            ctx->pc = 0x13B950u;
            goto label_13b950;
        }
    }
    ctx->pc = 0x13B940u;
    // 0x13b940: 0x3c050024
    ctx->pc = 0x13b940u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x13b944: 0x10000009
    ctx->pc = 0x13B944u;
    {
        const bool branch_taken_0x13b944 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B948u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955184));
        if (branch_taken_0x13b944) {
            ctx->pc = 0x13B96Cu;
            goto label_13b96c;
        }
    }
    ctx->pc = 0x13B94Cu;
    // 0x13b94c: 0x0
    ctx->pc = 0x13b94cu;
    // NOP
label_13b950:
    // 0x13b950: 0x6410003
    ctx->pc = 0x13B950u;
    {
        const bool branch_taken_0x13b950 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x13B954u;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x13b950) {
            ctx->pc = 0x13B960u;
            goto label_13b960;
        }
    }
    ctx->pc = 0x13B958u;
    // 0x13b958: 0x10000004
    ctx->pc = 0x13B958u;
    {
        const bool branch_taken_0x13b958 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B95Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955208));
        if (branch_taken_0x13b958) {
            ctx->pc = 0x13B96Cu;
            goto label_13b96c;
        }
    }
    ctx->pc = 0x13B960u;
label_13b960:
    // 0x13b960: 0x16600007
    ctx->pc = 0x13B960u;
    {
        const bool branch_taken_0x13b960 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x13B964u;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x13b960) {
            ctx->pc = 0x13B980u;
            goto label_13b980;
        }
    }
    ctx->pc = 0x13B968u;
    // 0x13b968: 0x24a5d0e8
    ctx->pc = 0x13b968u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955240));
label_13b96c:
    // 0x13b96c: 0xc04ebf2
    ctx->pc = 0x13B96Cu;
    SET_GPR_U32(ctx, 31, 0x13B974u);
    ctx->pc = 0x13AFC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AFC8_0x13afc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B974u; }
    }
    if (ctx->pc != 0x13B974u) { return; }
    ctx->pc = 0x13B974u;
    // 0x13b974: 0x10000041
    ctx->pc = 0x13B974u;
    {
        const bool branch_taken_0x13b974 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B978u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13b974) {
            ctx->pc = 0x13BA7Cu;
            goto label_13ba7c;
        }
    }
    ctx->pc = 0x13B97Cu;
    // 0x13b97c: 0x0
    ctx->pc = 0x13b97cu;
    // NOP
label_13b980:
    // 0x13b980: 0xc04ebfe
    ctx->pc = 0x13B980u;
    SET_GPR_U32(ctx, 31, 0x13B988u);
    ctx->pc = 0x13B984u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x13AFF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AFF8_0x13aff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B988u; }
    }
    if (ctx->pc != 0x13B988u) { return; }
    ctx->pc = 0x13B988u;
    // 0x13b988: 0x54540003
    ctx->pc = 0x13B988u;
    {
        const bool branch_taken_0x13b988 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 20));
        if (branch_taken_0x13b988) {
            ctx->pc = 0x13B98Cu;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->pc = 0x13B998u;
            goto label_13b998;
        }
    }
    ctx->pc = 0x13B990u;
    // 0x13b990: 0x1000003a
    ctx->pc = 0x13B990u;
    {
        const bool branch_taken_0x13b990 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B994u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13b990) {
            ctx->pc = 0x13BA7Cu;
            goto label_13ba7c;
        }
    }
    ctx->pc = 0x13B998u;
label_13b998:
    // 0x13b998: 0x24150002
    ctx->pc = 0x13b998u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b99c: 0x10750037
    ctx->pc = 0x13B99Cu;
    {
        const bool branch_taken_0x13b99c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 21));
        ctx->pc = 0x13B9A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13b99c) {
            ctx->pc = 0x13BA7Cu;
            goto label_13ba7c;
        }
    }
    ctx->pc = 0x13B9A4u;
    // 0x13b9a4: 0x16400004
    ctx->pc = 0x13B9A4u;
    {
        const bool branch_taken_0x13b9a4 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x13b9a4) {
            ctx->pc = 0x13B9B8u;
            goto label_13b9b8;
        }
    }
    ctx->pc = 0x13B9ACu;
    // 0x13b9ac: 0x10000033
    ctx->pc = 0x13B9ACu;
    {
        const bool branch_taken_0x13b9ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B9B0u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 20));
        if (branch_taken_0x13b9ac) {
            ctx->pc = 0x13BA7Cu;
            goto label_13ba7c;
        }
    }
    ctx->pc = 0x13B9B4u;
    // 0x13b9b4: 0x0
    ctx->pc = 0x13b9b4u;
    // NOP
label_13b9b8:
    // 0x13b9b8: 0xc04dcd0
    ctx->pc = 0x13B9B8u;
    SET_GPR_U32(ctx, 31, 0x13B9C0u);
    ctx->pc = 0x137340u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00137340_0x137340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B9C0u; }
    }
    if (ctx->pc != 0x13B9C0u) { return; }
    ctx->pc = 0x13B9C0u;
    // 0x13b9c0: 0x40182d
    ctx->pc = 0x13b9c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9c4: 0x1060002d
    ctx->pc = 0x13B9C4u;
    {
        const bool branch_taken_0x13b9c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B9C8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        if (branch_taken_0x13b9c4) {
            ctx->pc = 0x13BA7Cu;
            goto label_13ba7c;
        }
    }
    ctx->pc = 0x13B9CCu;
    // 0x13b9cc: 0x8e23001c
    ctx->pc = 0x13b9ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13b9d0: 0x240282d
    ctx->pc = 0x13b9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9d4: 0x8e220010
    ctx->pc = 0x13b9d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13b9d8: 0x1282c0
    ctx->pc = 0x13b9d8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 11));
    // 0x13b9dc: 0xde270008
    ctx->pc = 0x13b9dcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13b9e0: 0x431023
    ctx->pc = 0x13b9e0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13b9e4: 0xae330020
    ctx->pc = 0x13b9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 19));
    // 0x13b9e8: 0x242182a
    ctx->pc = 0x13b9e8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x13b9ec: 0xf0302b
    ctx->pc = 0x13b9ecu;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x13b9f0: 0x43280a
    ctx->pc = 0x13b9f0u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
    // 0x13b9f4: 0x220202d
    ctx->pc = 0x13b9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9f8: 0xae250024
    ctx->pc = 0x13b9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
    // 0x13b9fc: 0xc04ec2c
    ctx->pc = 0x13B9FCu;
    SET_GPR_U32(ctx, 31, 0x13BA04u);
    ctx->pc = 0x13BA00u;
    if (GPR_U32(ctx, 6) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 7));
    ctx->pc = 0x13B0B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B0B0_0x13b0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BA04u; }
    }
    if (ctx->pc != 0x13BA04u) { return; }
    ctx->pc = 0x13BA04u;
    // 0x13ba04: 0x8e24002c
    ctx->pc = 0x13ba04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x13ba08: 0x8e250018
    ctx->pc = 0x13ba08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x13ba0c: 0x200382d
    ctx->pc = 0x13ba0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba10: 0x8e26001c
    ctx->pc = 0x13ba10u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13ba14: 0xc04dd56
    ctx->pc = 0x13BA14u;
    SET_GPR_U32(ctx, 31, 0x13BA1Cu);
    ctx->pc = 0x13BA18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x137558u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00137558_0x137558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BA1Cu; }
    }
    if (ctx->pc != 0x13BA1Cu) { return; }
    ctx->pc = 0x13BA1Cu;
    // 0x13ba1c: 0x10400018
    ctx->pc = 0x13BA1Cu;
    {
        const bool branch_taken_0x13ba1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13BA20u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x13ba1c) {
            ctx->pc = 0x13BA80u;
            goto label_13ba80;
        }
    }
    ctx->pc = 0x13BA24u;
    // 0x13ba24: 0x3c020022
    ctx->pc = 0x13ba24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13ba28: 0x8c50dea0
    ctx->pc = 0x13ba28u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958752)));
    // 0x13ba2c: 0x56140010
    ctx->pc = 0x13BA2Cu;
    {
        const bool branch_taken_0x13ba2c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 20));
        if (branch_taken_0x13ba2c) {
            ctx->pc = 0x13BA30u;
            WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 21));
            ctx->pc = 0x13BA70u;
            goto label_13ba70;
        }
    }
    ctx->pc = 0x13BA34u;
    // 0x13ba34: 0xc04dfa4
    ctx->pc = 0x13BA34u;
    SET_GPR_U32(ctx, 31, 0x13BA3Cu);
    ctx->pc = 0x137E90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00137E90_0x137e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BA3Cu; }
    }
    if (ctx->pc != 0x13BA3Cu) { return; }
    ctx->pc = 0x13BA3Cu;
    // 0x13ba3c: 0xc04df60
    ctx->pc = 0x13BA3Cu;
    SET_GPR_U32(ctx, 31, 0x13BA44u);
    ctx->pc = 0x137D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00137D80_0x137d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BA44u; }
    }
    if (ctx->pc != 0x13BA44u) { return; }
    ctx->pc = 0x13BA44u;
    // 0x13ba44: 0x8e22001c
    ctx->pc = 0x13ba44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13ba48: 0x8e230024
    ctx->pc = 0x13ba48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x13ba4c: 0x8e24002c
    ctx->pc = 0x13ba4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x13ba50: 0x431021
    ctx->pc = 0x13ba50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13ba54: 0xc04dcf2
    ctx->pc = 0x13BA54u;
    SET_GPR_U32(ctx, 31, 0x13BA5Cu);
    ctx->pc = 0x13BA58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x1373C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001373C8_0x1373c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BA5Cu; }
    }
    if (ctx->pc != 0x13BA5Cu) { return; }
    ctx->pc = 0x13BA5Cu;
    // 0x13ba5c: 0xae20002c
    ctx->pc = 0x13ba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x13ba60: 0x8e220024
    ctx->pc = 0x13ba60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x13ba64: 0xa2300002
    ctx->pc = 0x13ba64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x13ba68: 0x10000003
    ctx->pc = 0x13BA68u;
    {
        const bool branch_taken_0x13ba68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13BA6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        if (branch_taken_0x13ba68) {
            ctx->pc = 0x13BA78u;
            goto label_13ba78;
        }
    }
    ctx->pc = 0x13BA70u;
label_13ba70:
    // 0x13ba70: 0xae200028
    ctx->pc = 0x13ba70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x13ba74: 0x8e220024
    ctx->pc = 0x13ba74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_13ba78:
    // 0x13ba78: 0xae200014
    ctx->pc = 0x13ba78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_13ba7c:
    // 0x13ba7c: 0xdfb00000
    ctx->pc = 0x13ba7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13ba80:
    // 0x13ba80: 0xdfb10008
    ctx->pc = 0x13ba80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13ba84: 0xdfb20010
    ctx->pc = 0x13ba84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ba88: 0xdfb30018
    ctx->pc = 0x13ba88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ba8c: 0xdfb40020
    ctx->pc = 0x13ba8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ba90: 0xdfb50028
    ctx->pc = 0x13ba90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13ba94: 0xdfbf0030
    ctx->pc = 0x13ba94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ba98: 0x3e00008
    ctx->pc = 0x13BA98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BA9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B5E8u: goto label_13b5e8;
            case 0x13B638u: goto label_13b638;
            case 0x13B650u: goto label_13b650;
            case 0x13B670u: goto label_13b670;
            case 0x13B680u: goto label_13b680;
            case 0x13B6C4u: goto label_13b6c4;
            case 0x13B724u: goto label_13b724;
            case 0x13B730u: goto label_13b730;
            case 0x13B744u: goto label_13b744;
            case 0x13B778u: goto label_13b778;
            case 0x13B7C4u: goto label_13b7c4;
            case 0x13B810u: goto label_13b810;
            case 0x13B828u: goto label_13b828;
            case 0x13B868u: goto label_13b868;
            case 0x13B878u: goto label_13b878;
            case 0x13B890u: goto label_13b890;
            case 0x13B8A8u: goto label_13b8a8;
            case 0x13B8ACu: goto label_13b8ac;
            case 0x13B8C8u: goto label_13b8c8;
            case 0x13B900u: goto label_13b900;
            case 0x13B904u: goto label_13b904;
            case 0x13B950u: goto label_13b950;
            case 0x13B960u: goto label_13b960;
            case 0x13B96Cu: goto label_13b96c;
            case 0x13B980u: goto label_13b980;
            case 0x13B998u: goto label_13b998;
            case 0x13B9B8u: goto label_13b9b8;
            case 0x13BA70u: goto label_13ba70;
            case 0x13BA78u: goto label_13ba78;
            case 0x13BA7Cu: goto label_13ba7c;
            case 0x13BA80u: goto label_13ba80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13BAA0u;
}
