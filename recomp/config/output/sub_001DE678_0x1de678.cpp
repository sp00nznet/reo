#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001DE678
// Address: 0x1de678 - 0x1de74c
void sub_001DE678_0x1de678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1de678u;

    // 0x1de678: 0x27bdffe0
    ctx->pc = 0x1de678u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de67c: 0xffbe0010
    ctx->pc = 0x1de67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1de680: 0xffbf0018
    ctx->pc = 0x1de680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1de684: 0x3a0f02d
    ctx->pc = 0x1de684u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de688: 0xafc40000
    ctx->pc = 0x1de688u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1de68c: 0x8fc40000
    ctx->pc = 0x1de68cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1de690: 0xc077950
    ctx->pc = 0x1DE690u;
    SET_GPR_U32(ctx, 31, 0x1DE698u);
    ctx->pc = 0x1DE540u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE540_0x1de540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE698u; }
    }
    if (ctx->pc != 0x1DE698u) { return; }
    ctx->pc = 0x1DE698u;
    // 0x1de698: 0x8fc20000
    ctx->pc = 0x1de698u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1de69c: 0x2442000c
    ctx->pc = 0x1de69cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
    // 0x1de6a0: 0xafc2000c
    ctx->pc = 0x1de6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1de6a4: 0x8fc2000c
    ctx->pc = 0x1de6a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1de6a8: 0xafc20008
    ctx->pc = 0x1de6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1de6ac: 0x8fc20000
    ctx->pc = 0x1de6acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1de6b0: 0x8c420008
    ctx->pc = 0x1de6b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de6b4: 0x2842037d
    ctx->pc = 0x1de6b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 893));
    // 0x1de6b8: 0x14400003
    ctx->pc = 0x1DE6B8u;
    {
        const bool branch_taken_0x1de6b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1de6b8) {
            ctx->pc = 0x1DE6C8u;
            goto label_1de6c8;
        }
    }
    ctx->pc = 0x1DE6C0u;
    // 0x1de6c0: 0x1000001c
    ctx->pc = 0x1DE6C0u;
    {
        const bool branch_taken_0x1de6c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1de6c0) {
            ctx->pc = 0x1DE734u;
            goto label_1de734;
        }
    }
    ctx->pc = 0x1DE6C8u;
label_1de6c8:
    // 0x1de6c8: 0xafc00004
    ctx->pc = 0x1de6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_1de6cc:
    // 0x1de6cc: 0x8fc20000
    ctx->pc = 0x1de6ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1de6d0: 0x8fc30004
    ctx->pc = 0x1de6d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1de6d4: 0x8c420008
    ctx->pc = 0x1de6d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de6d8: 0x62102a
    ctx->pc = 0x1de6d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1de6dc: 0x14400003
    ctx->pc = 0x1DE6DCu;
    {
        const bool branch_taken_0x1de6dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1de6dc) {
            ctx->pc = 0x1DE6ECu;
            goto label_1de6ec;
        }
    }
    ctx->pc = 0x1DE6E4u;
    // 0x1de6e4: 0x10000013
    ctx->pc = 0x1DE6E4u;
    {
        const bool branch_taken_0x1de6e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1de6e4) {
            ctx->pc = 0x1DE734u;
            goto label_1de734;
        }
    }
    ctx->pc = 0x1DE6ECu;
label_1de6ec:
    // 0x1de6ec: 0x8fc4000c
    ctx->pc = 0x1de6ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1de6f0: 0xc0777be
    ctx->pc = 0x1DE6F0u;
    SET_GPR_U32(ctx, 31, 0x1DE6F8u);
    ctx->pc = 0x1DDEF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DDEF8_0x1ddef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE6F8u; }
    }
    if (ctx->pc != 0x1DE6F8u) { return; }
    ctx->pc = 0x1DE6F8u;
    // 0x1de6f8: 0x8fc2000c
    ctx->pc = 0x1de6f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1de6fc: 0x8c420014
    ctx->pc = 0x1de6fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1de700: 0x2442001b
    ctx->pc = 0x1de700u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 27));
    // 0x1de704: 0x21082
    ctx->pc = 0x1de704u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 2));
    // 0x1de708: 0x21880
    ctx->pc = 0x1de708u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1de70c: 0x8fc20008
    ctx->pc = 0x1de70cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1de710: 0x431021
    ctx->pc = 0x1de710u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de714: 0xafc20008
    ctx->pc = 0x1de714u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1de718: 0x8fc20008
    ctx->pc = 0x1de718u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1de71c: 0xafc2000c
    ctx->pc = 0x1de71cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1de720: 0x8fc20004
    ctx->pc = 0x1de720u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1de724: 0x24420001
    ctx->pc = 0x1de724u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de728: 0xafc20004
    ctx->pc = 0x1de728u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x1de72c: 0x1000ffe7
    ctx->pc = 0x1DE72Cu;
    {
        const bool branch_taken_0x1de72c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1de72c) {
            ctx->pc = 0x1DE6CCu;
            goto label_1de6cc;
        }
    }
    ctx->pc = 0x1DE734u;
label_1de734:
    // 0x1de734: 0x3c0e82d
    ctx->pc = 0x1de734u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de738: 0xdfbe0010
    ctx->pc = 0x1de738u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de73c: 0xdfbf0018
    ctx->pc = 0x1de73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1de740: 0x27bd0020
    ctx->pc = 0x1de740u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1de744: 0x3e00008
    ctx->pc = 0x1DE744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DE6C8u: goto label_1de6c8;
            case 0x1DE6CCu: goto label_1de6cc;
            case 0x1DE6ECu: goto label_1de6ec;
            case 0x1DE734u: goto label_1de734;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DE74Cu;
}
