#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BE6D0
// Address: 0x1be6d0 - 0x1bf580
void sub_001BE6D0_0x1be6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1be6d0u;

    // 0x1be6d0: 0x27bdff60
    ctx->pc = 0x1be6d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1be6d4: 0xffbf0030
    ctx->pc = 0x1be6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1be6d8: 0x7fb20020
    ctx->pc = 0x1be6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1be6dc: 0x7fb10010
    ctx->pc = 0x1be6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1be6e0: 0x80902d
    ctx->pc = 0x1be6e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be6e4: 0x7fb00000
    ctx->pc = 0x1be6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1be6e8: 0xa0882d
    ctx->pc = 0x1be6e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be6ec: 0xc0802d
    ctx->pc = 0x1be6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be6f0: 0x27a40080
    ctx->pc = 0x1be6f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    // 0x1be6f4: 0x282d
    ctx->pc = 0x1be6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be6f8: 0xc0636e0
    ctx->pc = 0x1BE6F8u;
    SET_GPR_U32(ctx, 31, 0x1BE700u);
    ctx->pc = 0x1BE6FCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x18DB80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DB80_0x18db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE700u; }
    }
    if (ctx->pc != 0x1BE700u) { return; }
    ctx->pc = 0x1BE700u;
    // 0x1be700: 0x27a40060
    ctx->pc = 0x1be700u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x1be704: 0x282d
    ctx->pc = 0x1be704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be708: 0xc0636e0
    ctx->pc = 0x1BE708u;
    SET_GPR_U32(ctx, 31, 0x1BE710u);
    ctx->pc = 0x1BE70Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x18DB80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DB80_0x18db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE710u; }
    }
    if (ctx->pc != 0x1BE710u) { return; }
    ctx->pc = 0x1BE710u;
    // 0x1be710: 0x27a40040
    ctx->pc = 0x1be710u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1be714: 0x282d
    ctx->pc = 0x1be714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be718: 0xc0636e0
    ctx->pc = 0x1BE718u;
    SET_GPR_U32(ctx, 31, 0x1BE720u);
    ctx->pc = 0x1BE71Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x18DB80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DB80_0x18db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE720u; }
    }
    if (ctx->pc != 0x1BE720u) { return; }
    ctx->pc = 0x1BE720u;
    // 0x1be720: 0x3c040032
    ctx->pc = 0x1be720u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1be724: 0x282d
    ctx->pc = 0x1be724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be728: 0x24846880
    ctx->pc = 0x1be728u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26752));
    // 0x1be72c: 0xc0636e0
    ctx->pc = 0x1BE72Cu;
    SET_GPR_U32(ctx, 31, 0x1BE734u);
    ctx->pc = 0x1BE730u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x18DB80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DB80_0x18db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE734u; }
    }
    if (ctx->pc != 0x1BE734u) { return; }
    ctx->pc = 0x1BE734u;
    // 0x1be734: 0x3c040032
    ctx->pc = 0x1be734u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1be738: 0x282d
    ctx->pc = 0x1be738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be73c: 0x248468a0
    ctx->pc = 0x1be73cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26784));
    // 0x1be740: 0xc0636e0
    ctx->pc = 0x1BE740u;
    SET_GPR_U32(ctx, 31, 0x1BE748u);
    ctx->pc = 0x1BE744u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 512));
    ctx->pc = 0x18DB80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DB80_0x18db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE748u; }
    }
    if (ctx->pc != 0x1BE748u) { return; }
    ctx->pc = 0x1BE748u;
    // 0x1be748: 0x3c020032
    ctx->pc = 0x1be748u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x1be74c: 0x282d
    ctx->pc = 0x1be74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be750: 0x244268a0
    ctx->pc = 0x1be750u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26784));
    // 0x1be754: 0x10000039
    ctx->pc = 0x1BE754u;
    {
        const bool branch_taken_0x1be754 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BE758u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1be754) {
            ctx->pc = 0x1BE83Cu;
            goto label_1be83c;
        }
    }
    ctx->pc = 0x1BE75Cu;
label_1be75c:
    // 0x1be75c: 0x51940
    ctx->pc = 0x1be75cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 5));
    // 0x1be760: 0x2242021
    ctx->pc = 0x1be760u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1be764: 0x431821
    ctx->pc = 0x1be764u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1be768: 0x8c860000
    ctx->pc = 0x1be768u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1be76c: 0xac660000
    ctx->pc = 0x1be76cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1be770: 0x8c660000
    ctx->pc = 0x1be770u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be774: 0xac660004
    ctx->pc = 0x1be774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x1be778: 0x8c660000
    ctx->pc = 0x1be778u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be77c: 0x24c60010
    ctx->pc = 0x1be77cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x1be780: 0xac660008
    ctx->pc = 0x1be780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x1be784: 0x8c660008
    ctx->pc = 0x1be784u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1be788: 0x8cc80024
    ctx->pc = 0x1be788u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x1be78c: 0x15070003
    ctx->pc = 0x1BE78Cu;
    {
        const bool branch_taken_0x1be78c = (GPR_U32(ctx, 8) != GPR_U32(ctx, 7));
        ctx->pc = 0x1BE790u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 8));
        if (branch_taken_0x1be78c) {
            ctx->pc = 0x1BE79Cu;
            goto label_1be79c;
        }
    }
    ctx->pc = 0x1BE794u;
    // 0x1be794: 0x10000003
    ctx->pc = 0x1BE794u;
    {
        const bool branch_taken_0x1be794 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BE798u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1be794) {
            ctx->pc = 0x1BE7A4u;
            goto label_1be7a4;
        }
    }
    ctx->pc = 0x1BE79Cu;
label_1be79c:
    // 0x1be79c: 0x8c660000
    ctx->pc = 0x1be79cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be7a0: 0xc83021
    ctx->pc = 0x1be7a0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1be7a4:
    // 0x1be7a4: 0xac66000c
    ctx->pc = 0x1be7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x1be7a8: 0x8c860000
    ctx->pc = 0x1be7a8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1be7ac: 0x8cc80014
    ctx->pc = 0x1be7acu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1be7b0: 0x15070003
    ctx->pc = 0x1BE7B0u;
    {
        const bool branch_taken_0x1be7b0 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 7));
        if (branch_taken_0x1be7b0) {
            ctx->pc = 0x1BE7C0u;
            goto label_1be7c0;
        }
    }
    ctx->pc = 0x1BE7B8u;
    // 0x1be7b8: 0x10000003
    ctx->pc = 0x1BE7B8u;
    {
        const bool branch_taken_0x1be7b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BE7BCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1be7b8) {
            ctx->pc = 0x1BE7C8u;
            goto label_1be7c8;
        }
    }
    ctx->pc = 0x1BE7C0u;
label_1be7c0:
    // 0x1be7c0: 0x8c660000
    ctx->pc = 0x1be7c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be7c4: 0xc83021
    ctx->pc = 0x1be7c4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1be7c8:
    // 0x1be7c8: 0xac660010
    ctx->pc = 0x1be7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
    // 0x1be7cc: 0x8c860000
    ctx->pc = 0x1be7ccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1be7d0: 0x8cc80018
    ctx->pc = 0x1be7d0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1be7d4: 0x15070003
    ctx->pc = 0x1BE7D4u;
    {
        const bool branch_taken_0x1be7d4 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 7));
        if (branch_taken_0x1be7d4) {
            ctx->pc = 0x1BE7E4u;
            goto label_1be7e4;
        }
    }
    ctx->pc = 0x1BE7DCu;
    // 0x1be7dc: 0x10000003
    ctx->pc = 0x1BE7DCu;
    {
        const bool branch_taken_0x1be7dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BE7E0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1be7dc) {
            ctx->pc = 0x1BE7ECu;
            goto label_1be7ec;
        }
    }
    ctx->pc = 0x1BE7E4u;
label_1be7e4:
    // 0x1be7e4: 0x8c660000
    ctx->pc = 0x1be7e4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be7e8: 0xc83021
    ctx->pc = 0x1be7e8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1be7ec:
    // 0x1be7ec: 0xac660014
    ctx->pc = 0x1be7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
    // 0x1be7f0: 0x8c860000
    ctx->pc = 0x1be7f0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1be7f4: 0x8cc8001c
    ctx->pc = 0x1be7f4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x1be7f8: 0x15070003
    ctx->pc = 0x1BE7F8u;
    {
        const bool branch_taken_0x1be7f8 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 7));
        if (branch_taken_0x1be7f8) {
            ctx->pc = 0x1BE808u;
            goto label_1be808;
        }
    }
    ctx->pc = 0x1BE800u;
    // 0x1be800: 0x10000003
    ctx->pc = 0x1BE800u;
    {
        const bool branch_taken_0x1be800 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BE804u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1be800) {
            ctx->pc = 0x1BE810u;
            goto label_1be810;
        }
    }
    ctx->pc = 0x1BE808u;
label_1be808:
    // 0x1be808: 0x8c660000
    ctx->pc = 0x1be808u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be80c: 0xc83021
    ctx->pc = 0x1be80cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1be810:
    // 0x1be810: 0xac660018
    ctx->pc = 0x1be810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
    // 0x1be814: 0x8c840000
    ctx->pc = 0x1be814u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1be818: 0x8c860020
    ctx->pc = 0x1be818u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1be81c: 0x14c70003
    ctx->pc = 0x1BE81Cu;
    {
        const bool branch_taken_0x1be81c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 7));
        if (branch_taken_0x1be81c) {
            ctx->pc = 0x1BE82Cu;
            goto label_1be82c;
        }
    }
    ctx->pc = 0x1BE824u;
    // 0x1be824: 0x10000003
    ctx->pc = 0x1BE824u;
    {
        const bool branch_taken_0x1be824 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BE828u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1be824) {
            ctx->pc = 0x1BE834u;
            goto label_1be834;
        }
    }
    ctx->pc = 0x1BE82Cu;
label_1be82c:
    // 0x1be82c: 0x8c640000
    ctx->pc = 0x1be82cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be830: 0x862021
    ctx->pc = 0x1be830u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1be834:
    // 0x1be834: 0xac64001c
    ctx->pc = 0x1be834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
    // 0x1be838: 0x24a50001
    ctx->pc = 0x1be838u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_1be83c:
    // 0x1be83c: 0xb2182b
    ctx->pc = 0x1be83cu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1be840: 0x1460ffc6
    ctx->pc = 0x1BE840u;
    {
        const bool branch_taken_0x1be840 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BE844u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x1be840) {
            ctx->pc = 0x1BE75Cu;
            goto label_1be75c;
        }
    }
    ctx->pc = 0x1BE848u;
    // 0x1be848: 0x3c010032
    ctx->pc = 0x1be848u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be84c: 0x24050010
    ctx->pc = 0x1be84cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1be850: 0xac306880
    ctx->pc = 0x1be850u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26752), GPR_U32(ctx, 16));
    // 0x1be854: 0x2404ffff
    ctx->pc = 0x1be854u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1be858: 0x3c010032
    ctx->pc = 0x1be858u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be85c: 0x102d
    ctx->pc = 0x1be85cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be860: 0x8c236880
    ctx->pc = 0x1be860u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 26752)));
    // 0x1be864: 0x3c010032
    ctx->pc = 0x1be864u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be868: 0x8c2668a4
    ctx->pc = 0x1be868u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 26788)));
    // 0x1be86c: 0x3c010032
    ctx->pc = 0x1be86cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be870: 0xac236884
    ctx->pc = 0x1be870u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26756), GPR_U32(ctx, 3));
    // 0x1be874: 0x3c010032
    ctx->pc = 0x1be874u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be878: 0x8cc30000
    ctx->pc = 0x1be878u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1be87c: 0x8c276884
    ctx->pc = 0x1be87cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 26756)));
    // 0x1be880: 0xace30000
    ctx->pc = 0x1be880u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1be884: 0x3c010032
    ctx->pc = 0x1be884u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be888: 0x8cc30004
    ctx->pc = 0x1be888u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1be88c: 0xace30004
    ctx->pc = 0x1be88cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x1be890: 0x8cc30008
    ctx->pc = 0x1be890u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1be894: 0xace30008
    ctx->pc = 0x1be894u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1be898: 0x94c3000c
    ctx->pc = 0x1be898u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1be89c: 0xa4e3000c
    ctx->pc = 0x1be89cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1be8a0: 0x90c3000e
    ctx->pc = 0x1be8a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x1be8a4: 0xa0e3000e
    ctx->pc = 0x1be8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x1be8a8: 0x90c3000f
    ctx->pc = 0x1be8a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 15)));
    // 0x1be8ac: 0xa0e3000f
    ctx->pc = 0x1be8acu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x1be8b0: 0x8c236884
    ctx->pc = 0x1be8b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 26756)));
    // 0x1be8b4: 0xac650008
    ctx->pc = 0x1be8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x1be8b8: 0x3c010032
    ctx->pc = 0x1be8b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be8bc: 0x8c236880
    ctx->pc = 0x1be8bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 26752)));
    // 0x1be8c0: 0x3c010032
    ctx->pc = 0x1be8c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be8c4: 0x24630010
    ctx->pc = 0x1be8c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x1be8c8: 0x8c2568a8
    ctx->pc = 0x1be8c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 26792)));
    // 0x1be8cc: 0x3c010032
    ctx->pc = 0x1be8ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be8d0: 0xac236888
    ctx->pc = 0x1be8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26760), GPR_U32(ctx, 3));
    // 0x1be8d4: 0x3c010032
    ctx->pc = 0x1be8d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be8d8: 0x8ca30000
    ctx->pc = 0x1be8d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1be8dc: 0x8c266888
    ctx->pc = 0x1be8dcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 26760)));
    // 0x1be8e0: 0xacc30000
    ctx->pc = 0x1be8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1be8e4: 0x3c010032
    ctx->pc = 0x1be8e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be8e8: 0x8ca30004
    ctx->pc = 0x1be8e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1be8ec: 0xacc30004
    ctx->pc = 0x1be8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1be8f0: 0x8ca30008
    ctx->pc = 0x1be8f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1be8f4: 0xacc30008
    ctx->pc = 0x1be8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1be8f8: 0x8ca3000c
    ctx->pc = 0x1be8f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1be8fc: 0xacc3000c
    ctx->pc = 0x1be8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1be900: 0x8ca30010
    ctx->pc = 0x1be900u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1be904: 0xacc30010
    ctx->pc = 0x1be904u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x1be908: 0x8ca30014
    ctx->pc = 0x1be908u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1be90c: 0xacc30014
    ctx->pc = 0x1be90cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x1be910: 0x8ca30018
    ctx->pc = 0x1be910u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1be914: 0xacc30018
    ctx->pc = 0x1be914u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1be918: 0x8ca3001c
    ctx->pc = 0x1be918u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1be91c: 0xacc3001c
    ctx->pc = 0x1be91cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x1be920: 0x8ca30020
    ctx->pc = 0x1be920u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1be924: 0xacc30020
    ctx->pc = 0x1be924u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x1be928: 0x8ca30024
    ctx->pc = 0x1be928u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1be92c: 0xacc30024
    ctx->pc = 0x1be92cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x1be930: 0x8c236888
    ctx->pc = 0x1be930u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 26760)));
    // 0x1be934: 0xac64000c
    ctx->pc = 0x1be934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x1be938: 0x3c010032
    ctx->pc = 0x1be938u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be93c: 0x8c236888
    ctx->pc = 0x1be93cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 26760)));
    // 0x1be940: 0xac640010
    ctx->pc = 0x1be940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x1be944: 0x3c010032
    ctx->pc = 0x1be944u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be948: 0x8c236888
    ctx->pc = 0x1be948u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 26760)));
    // 0x1be94c: 0xac640014
    ctx->pc = 0x1be94cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x1be950: 0x3c010032
    ctx->pc = 0x1be950u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be954: 0x8c236888
    ctx->pc = 0x1be954u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 26760)));
    // 0x1be958: 0xac640018
    ctx->pc = 0x1be958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
    // 0x1be95c: 0x3c010032
    ctx->pc = 0x1be95cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be960: 0x8c236888
    ctx->pc = 0x1be960u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 26760)));
    // 0x1be964: 0xac64001c
    ctx->pc = 0x1be964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
    // 0x1be968: 0x3c010032
    ctx->pc = 0x1be968u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be96c: 0x8c236888
    ctx->pc = 0x1be96cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 26760)));
    // 0x1be970: 0xac640020
    ctx->pc = 0x1be970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x1be974: 0x3c010032
    ctx->pc = 0x1be974u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be978: 0x8c236888
    ctx->pc = 0x1be978u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 26760)));
    // 0x1be97c: 0xac640024
    ctx->pc = 0x1be97cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 4));
    // 0x1be980: 0x3c010032
    ctx->pc = 0x1be980u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be984: 0x8c236888
    ctx->pc = 0x1be984u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 26760)));
    // 0x1be988: 0x24650028
    ctx->pc = 0x1be988u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 40));
    // 0x1be98c: 0x240400ff
    ctx->pc = 0x1be98cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 255));
label_1be990:
    // 0x1be990: 0x24420001
    ctx->pc = 0x1be990u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1be994: 0xa0a40000
    ctx->pc = 0x1be994u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1be998: 0x2c430018
    ctx->pc = 0x1be998u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 24));
    // 0x1be99c: 0x24a50001
    ctx->pc = 0x1be99cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1be9a0: 0x0
    ctx->pc = 0x1be9a0u;
    // NOP
    // 0x1be9a4: 0x1460fffa
    ctx->pc = 0x1BE9A4u;
    {
        const bool branch_taken_0x1be9a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1be9a4) {
            ctx->pc = 0x1BE990u;
            goto label_1be990;
        }
    }
    ctx->pc = 0x1BE9ACu;
    // 0x1be9ac: 0x3c010032
    ctx->pc = 0x1be9acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be9b0: 0x2406ffff
    ctx->pc = 0x1be9b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1be9b4: 0xac25689c
    ctx->pc = 0x1be9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26780), GPR_U32(ctx, 5));
    // 0x1be9b8: 0x382d
    ctx->pc = 0x1be9b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be9bc: 0x3c010032
    ctx->pc = 0x1be9bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be9c0: 0x3c050032
    ctx->pc = 0x1be9c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x1be9c4: 0x8c2368bc
    ctx->pc = 0x1be9c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 26812)));
    // 0x1be9c8: 0x24a568a0
    ctx->pc = 0x1be9c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26784));
    // 0x1be9cc: 0x3c010032
    ctx->pc = 0x1be9ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be9d0: 0x8c620000
    ctx->pc = 0x1be9d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be9d4: 0x8c24689c
    ctx->pc = 0x1be9d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 26780)));
    // 0x1be9d8: 0xac820000
    ctx->pc = 0x1be9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1be9dc: 0x3c010032
    ctx->pc = 0x1be9dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1be9e0: 0x8c620004
    ctx->pc = 0x1be9e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1be9e4: 0xac820004
    ctx->pc = 0x1be9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1be9e8: 0x8c620008
    ctx->pc = 0x1be9e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1be9ec: 0xac820008
    ctx->pc = 0x1be9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1be9f0: 0x8c62000c
    ctx->pc = 0x1be9f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1be9f4: 0xac82000c
    ctx->pc = 0x1be9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1be9f8: 0x8c22689c
    ctx->pc = 0x1be9f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 26780)));
    // 0x1be9fc: 0xac460008
    ctx->pc = 0x1be9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1bea00: 0x3c010032
    ctx->pc = 0x1bea00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bea04: 0x8c22689c
    ctx->pc = 0x1bea04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 26780)));
    // 0x1bea08: 0x10000012
    ctx->pc = 0x1BEA08u;
    {
        const bool branch_taken_0x1bea08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BEA0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x1bea08) {
            ctx->pc = 0x1BEA54u;
            goto label_1bea54;
        }
    }
    ctx->pc = 0x1BEA10u;
label_1bea10:
    // 0x1bea10: 0xa21021
    ctx->pc = 0x1bea10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1bea14: 0x8c42001c
    ctx->pc = 0x1bea14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1bea18: 0x1046000d
    ctx->pc = 0x1BEA18u;
    {
        const bool branch_taken_0x1bea18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 6));
        if (branch_taken_0x1bea18) {
            ctx->pc = 0x1BEA50u;
            goto label_1bea50;
        }
    }
    ctx->pc = 0x1BEA20u;
    // 0x1bea20: 0x8c42000c
    ctx->pc = 0x1bea20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bea24: 0x71840
    ctx->pc = 0x1bea24u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 1));
    // 0x1bea28: 0x7d1821
    ctx->pc = 0x1bea28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1bea2c: 0x3c010032
    ctx->pc = 0x1bea2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bea30: 0x24630080
    ctx->pc = 0x1bea30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 128));
    // 0x1bea34: 0x24420001
    ctx->pc = 0x1bea34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bea38: 0xa4620000
    ctx->pc = 0x1bea38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bea3c: 0x8c24689c
    ctx->pc = 0x1bea3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 26780)));
    // 0x1bea40: 0x94630000
    ctx->pc = 0x1bea40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bea44: 0x8c82000c
    ctx->pc = 0x1bea44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bea48: 0x431021
    ctx->pc = 0x1bea48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bea4c: 0xac82000c
    ctx->pc = 0x1bea4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1bea50:
    // 0x1bea50: 0x24e70001
    ctx->pc = 0x1bea50u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1bea54:
    // 0x1bea54: 0xf2102b
    ctx->pc = 0x1bea54u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x1bea58: 0x1440ffed
    ctx->pc = 0x1BEA58u;
    {
        const bool branch_taken_0x1bea58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BEA5Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 5));
        if (branch_taken_0x1bea58) {
            ctx->pc = 0x1BEA10u;
            goto label_1bea10;
        }
    }
    ctx->pc = 0x1BEA60u;
    // 0x1bea60: 0x3c010032
    ctx->pc = 0x1bea60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bea64: 0x3c040032
    ctx->pc = 0x1bea64u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1bea68: 0x8c27689c
    ctx->pc = 0x1bea68u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 26780)));
    // 0x1bea6c: 0x102d
    ctx->pc = 0x1bea6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea70: 0x282d
    ctx->pc = 0x1bea70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea74: 0x2403ffff
    ctx->pc = 0x1bea74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bea78: 0x248468a0
    ctx->pc = 0x1bea78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26784));
    // 0x1bea7c: 0x8ce6000c
    ctx->pc = 0x1bea7cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1bea80: 0x3c010032
    ctx->pc = 0x1bea80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bea84: 0x24c6ffff
    ctx->pc = 0x1bea84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1bea88: 0xace6000c
    ctx->pc = 0x1bea88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x1bea8c: 0x8c26689c
    ctx->pc = 0x1bea8cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 26780)));
    // 0x1bea90: 0x24ca0010
    ctx->pc = 0x1bea90u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 6), 16));
    // 0x1bea94: 0x8cc6000c
    ctx->pc = 0x1bea94u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1bea98: 0x24c60001
    ctx->pc = 0x1bea98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1bea9c: 0x63080
    ctx->pc = 0x1bea9cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1beaa0: 0x1000002e
    ctx->pc = 0x1BEAA0u;
    {
        const bool branch_taken_0x1beaa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BEAA4u;
        SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
        if (branch_taken_0x1beaa0) {
            ctx->pc = 0x1BEB5Cu;
            goto label_1beb5c;
        }
    }
    ctx->pc = 0x1BEAA8u;
label_1beaa8:
    // 0x1beaa8: 0x863021
    ctx->pc = 0x1beaa8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1beaac: 0x8cc7001c
    ctx->pc = 0x1beaacu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x1beab0: 0x10e30029
    ctx->pc = 0x1BEAB0u;
    {
        const bool branch_taken_0x1beab0 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 3));
        ctx->pc = 0x1BEAB4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 6), 28));
        if (branch_taken_0x1beab0) {
            ctx->pc = 0x1BEB58u;
            goto label_1beb58;
        }
    }
    ctx->pc = 0x1BEAB8u;
    // 0x1beab8: 0x53840
    ctx->pc = 0x1beab8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1beabc: 0x582d
    ctx->pc = 0x1beabcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beac0: 0xfd3821
    ctx->pc = 0x1beac0u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x1beac4: 0x1000001d
    ctx->pc = 0x1BEAC4u;
    {
        const bool branch_taken_0x1beac4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BEAC8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 128));
        if (branch_taken_0x1beac4) {
            ctx->pc = 0x1BEB3Cu;
            goto label_1beb3c;
        }
    }
    ctx->pc = 0x1BEACCu;
label_1beacc:
    // 0x1beacc: 0x8d0d0000
    ctx->pc = 0x1beaccu;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1bead0: 0xb6080
    ctx->pc = 0x1bead0u;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 11), 2));
    // 0x1bead4: 0x1ac6021
    ctx->pc = 0x1bead4u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x1bead8: 0x8d8c0010
    ctx->pc = 0x1bead8u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x1beadc: 0x11830014
    ctx->pc = 0x1BEADCu;
    {
        const bool branch_taken_0x1beadc = (GPR_U32(ctx, 12) == GPR_U32(ctx, 3));
        if (branch_taken_0x1beadc) {
            ctx->pc = 0x1BEB30u;
            goto label_1beb30;
        }
    }
    ctx->pc = 0x1BEAE4u;
    // 0x1beae4: 0x18d6821
    ctx->pc = 0x1beae4u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x1beae8: 0x3c010032
    ctx->pc = 0x1beae8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1beaec: 0x8c2c689c
    ctx->pc = 0x1beaecu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 1), 26780)));
    // 0x1beaf0: 0x12c6023
    ctx->pc = 0x1beaf0u;
    SET_GPR_U32(ctx, 12, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x1beaf4: 0xad4c0000
    ctx->pc = 0x1beaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 12));
    // 0x1beaf8: 0x8dac0000
    ctx->pc = 0x1beaf8u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1beafc: 0x254a0004
    ctx->pc = 0x1beafcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4));
    // 0x1beb00: 0xad2c0000
    ctx->pc = 0x1beb00u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
    // 0x1beb04: 0x95ac0004
    ctx->pc = 0x1beb04u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x1beb08: 0xa52c0004
    ctx->pc = 0x1beb08u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4), (uint16_t)GPR_U32(ctx, 12));
    // 0x1beb0c: 0x91ac0006
    ctx->pc = 0x1beb0cu;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 6)));
    // 0x1beb10: 0xa12c0006
    ctx->pc = 0x1beb10u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 6), (uint8_t)GPR_U32(ctx, 12));
    // 0x1beb14: 0x91ac0007
    ctx->pc = 0x1beb14u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 7)));
    // 0x1beb18: 0xa12c0007
    ctx->pc = 0x1beb18u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 7), (uint8_t)GPR_U32(ctx, 12));
    // 0x1beb1c: 0x8d2c0000
    ctx->pc = 0x1beb1cu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1beb20: 0x1826021
    ctx->pc = 0x1beb20u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1beb24: 0xad2c0000
    ctx->pc = 0x1beb24u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
    // 0x1beb28: 0x10000003
    ctx->pc = 0x1BEB28u;
    {
        const bool branch_taken_0x1beb28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BEB2Cu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 8));
        if (branch_taken_0x1beb28) {
            ctx->pc = 0x1BEB38u;
            goto label_1beb38;
        }
    }
    ctx->pc = 0x1BEB30u;
label_1beb30:
    // 0x1beb30: 0xad4c0000
    ctx->pc = 0x1beb30u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 12));
    // 0x1beb34: 0x254a0004
    ctx->pc = 0x1beb34u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4));
label_1beb38:
    // 0x1beb38: 0x256b0001
    ctx->pc = 0x1beb38u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
label_1beb3c:
    // 0x1beb3c: 0x94ec0000
    ctx->pc = 0x1beb3cu;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1beb40: 0x16c602b
    ctx->pc = 0x1beb40u;
    SET_GPR_U32(ctx, 12, SLTU32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x1beb44: 0x1580ffe1
    ctx->pc = 0x1BEB44u;
    {
        const bool branch_taken_0x1beb44 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        if (branch_taken_0x1beb44) {
            ctx->pc = 0x1BEACCu;
            goto label_1beacc;
        }
    }
    ctx->pc = 0x1BEB4Cu;
    // 0x1beb4c: 0x8cc60008
    ctx->pc = 0x1beb4cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1beb50: 0x8cc60010
    ctx->pc = 0x1beb50u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1beb54: 0x461021
    ctx->pc = 0x1beb54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1beb58:
    // 0x1beb58: 0x24a50001
    ctx->pc = 0x1beb58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_1beb5c:
    // 0x1beb5c: 0xb2302b
    ctx->pc = 0x1beb5cu;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1beb60: 0x14c0ffd1
    ctx->pc = 0x1BEB60u;
    {
        const bool branch_taken_0x1beb60 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BEB64u;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 5), 5));
        if (branch_taken_0x1beb60) {
            ctx->pc = 0x1BEAA8u;
            goto label_1beaa8;
        }
    }
    ctx->pc = 0x1BEB68u;
    // 0x1beb68: 0x3c010032
    ctx->pc = 0x1beb68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1beb6c: 0x24030010
    ctx->pc = 0x1beb6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1beb70: 0x8c24689c
    ctx->pc = 0x1beb70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 26780)));
    // 0x1beb74: 0x1242023
    ctx->pc = 0x1beb74u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1beb78: 0x3084000f
    ctx->pc = 0x1beb78u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 15));
    // 0x1beb7c: 0x643023
    ctx->pc = 0x1beb7cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1beb80: 0x10c3000b
    ctx->pc = 0x1BEB80u;
    {
        const bool branch_taken_0x1beb80 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        if (branch_taken_0x1beb80) {
            ctx->pc = 0x1BEBB0u;
            goto label_1bebb0;
        }
    }
    ctx->pc = 0x1BEB88u;
    // 0x1beb88: 0x282d
    ctx->pc = 0x1beb88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beb8c: 0x10000004
    ctx->pc = 0x1BEB8Cu;
    {
        const bool branch_taken_0x1beb8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BEB90u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x1beb8c) {
            ctx->pc = 0x1BEBA0u;
            goto label_1beba0;
        }
    }
    ctx->pc = 0x1BEB94u;
label_1beb94:
    // 0x1beb94: 0xa1240000
    ctx->pc = 0x1beb94u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1beb98: 0x24a50001
    ctx->pc = 0x1beb98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1beb9c: 0x25290001
    ctx->pc = 0x1beb9cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
label_1beba0:
    // 0x1beba0: 0xa6182b
    ctx->pc = 0x1beba0u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1beba4: 0x0
    ctx->pc = 0x1beba4u;
    // NOP
    // 0x1beba8: 0x1460fffa
    ctx->pc = 0x1BEBA8u;
    {
        const bool branch_taken_0x1beba8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1beba8) {
            ctx->pc = 0x1BEB94u;
            goto label_1beb94;
        }
    }
    ctx->pc = 0x1BEBB0u;
label_1bebb0:
    // 0x1bebb0: 0x3c010032
    ctx->pc = 0x1bebb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bebb4: 0x3c070032
    ctx->pc = 0x1bebb4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)50 << 16));
    // 0x1bebb8: 0x8c25689c
    ctx->pc = 0x1bebb8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 26780)));
    // 0x1bebbc: 0x2408ffff
    ctx->pc = 0x1bebbcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bebc0: 0x182d
    ctx->pc = 0x1bebc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bebc4: 0x24e768a0
    ctx->pc = 0x1bebc4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 26784));
    // 0x1bebc8: 0x1252023
    ctx->pc = 0x1bebc8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1bebcc: 0x3c010032
    ctx->pc = 0x1bebccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bebd0: 0xaca40008
    ctx->pc = 0x1bebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1bebd4: 0xac296898
    ctx->pc = 0x1bebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26776), GPR_U32(ctx, 9));
    // 0x1bebd8: 0x3c010032
    ctx->pc = 0x1bebd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bebdc: 0x8c2568b8
    ctx->pc = 0x1bebdcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 26808)));
    // 0x1bebe0: 0x3c010032
    ctx->pc = 0x1bebe0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bebe4: 0x8ca40000
    ctx->pc = 0x1bebe4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bebe8: 0x8c266898
    ctx->pc = 0x1bebe8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 26776)));
    // 0x1bebec: 0xacc40000
    ctx->pc = 0x1bebecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1bebf0: 0x3c010032
    ctx->pc = 0x1bebf0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bebf4: 0x8ca40004
    ctx->pc = 0x1bebf4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1bebf8: 0xacc40004
    ctx->pc = 0x1bebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x1bebfc: 0x8ca40008
    ctx->pc = 0x1bebfcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bec00: 0xacc40008
    ctx->pc = 0x1bec00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x1bec04: 0x8ca4000c
    ctx->pc = 0x1bec04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1bec08: 0xacc4000c
    ctx->pc = 0x1bec08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x1bec0c: 0x8c246898
    ctx->pc = 0x1bec0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 26776)));
    // 0x1bec10: 0xac880008
    ctx->pc = 0x1bec10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x1bec14: 0x3c010032
    ctx->pc = 0x1bec14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bec18: 0x8c246898
    ctx->pc = 0x1bec18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 26776)));
    // 0x1bec1c: 0x10000012
    ctx->pc = 0x1BEC1Cu;
    {
        const bool branch_taken_0x1bec1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BEC20u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x1bec1c) {
            ctx->pc = 0x1BEC68u;
            goto label_1bec68;
        }
    }
    ctx->pc = 0x1BEC24u;
label_1bec24:
    // 0x1bec24: 0xe42021
    ctx->pc = 0x1bec24u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1bec28: 0x8c840018
    ctx->pc = 0x1bec28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1bec2c: 0x1088000d
    ctx->pc = 0x1BEC2Cu;
    {
        const bool branch_taken_0x1bec2c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 8));
        if (branch_taken_0x1bec2c) {
            ctx->pc = 0x1BEC64u;
            goto label_1bec64;
        }
    }
    ctx->pc = 0x1BEC34u;
    // 0x1bec34: 0x8c84000c
    ctx->pc = 0x1bec34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bec38: 0x32840
    ctx->pc = 0x1bec38u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1bec3c: 0xbd2821
    ctx->pc = 0x1bec3cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1bec40: 0x3c010032
    ctx->pc = 0x1bec40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bec44: 0x24a50060
    ctx->pc = 0x1bec44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 96));
    // 0x1bec48: 0x24840001
    ctx->pc = 0x1bec48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1bec4c: 0xa4a40000
    ctx->pc = 0x1bec4cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1bec50: 0x8c266898
    ctx->pc = 0x1bec50u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 26776)));
    // 0x1bec54: 0x94a50000
    ctx->pc = 0x1bec54u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bec58: 0x8cc4000c
    ctx->pc = 0x1bec58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1bec5c: 0x852021
    ctx->pc = 0x1bec5cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1bec60: 0xacc4000c
    ctx->pc = 0x1bec60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
label_1bec64:
    // 0x1bec64: 0x24630001
    ctx->pc = 0x1bec64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1bec68:
    // 0x1bec68: 0x72202b
    ctx->pc = 0x1bec68u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1bec6c: 0x1480ffed
    ctx->pc = 0x1BEC6Cu;
    {
        const bool branch_taken_0x1bec6c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BEC70u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 5));
        if (branch_taken_0x1bec6c) {
            ctx->pc = 0x1BEC24u;
            goto label_1bec24;
        }
    }
    ctx->pc = 0x1BEC74u;
    // 0x1bec74: 0x3c010032
    ctx->pc = 0x1bec74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bec78: 0x3c040032
    ctx->pc = 0x1bec78u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1bec7c: 0x8c276898
    ctx->pc = 0x1bec7cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 26776)));
    // 0x1bec80: 0x682d
    ctx->pc = 0x1bec80u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec84: 0x302d
    ctx->pc = 0x1bec84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec88: 0x2403ffff
    ctx->pc = 0x1bec88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bec8c: 0x248468a0
    ctx->pc = 0x1bec8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26784));
    // 0x1bec90: 0x8ce5000c
    ctx->pc = 0x1bec90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1bec94: 0x3c010032
    ctx->pc = 0x1bec94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bec98: 0x24a5ffff
    ctx->pc = 0x1bec98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1bec9c: 0xace5000c
    ctx->pc = 0x1bec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x1beca0: 0x8c256898
    ctx->pc = 0x1beca0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 26776)));
    // 0x1beca4: 0x24ac0010
    ctx->pc = 0x1beca4u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 5), 16));
    // 0x1beca8: 0x8ca5000c
    ctx->pc = 0x1beca8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1becac: 0x24a50001
    ctx->pc = 0x1becacu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1becb0: 0x52880
    ctx->pc = 0x1becb0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1becb4: 0x1000006d
    ctx->pc = 0x1BECB4u;
    {
        const bool branch_taken_0x1becb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BECB8u;
        SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
        if (branch_taken_0x1becb4) {
            ctx->pc = 0x1BEE6Cu;
            goto label_1bee6c;
        }
    }
    ctx->pc = 0x1BECBCu;
label_1becbc:
    // 0x1becbc: 0x852821
    ctx->pc = 0x1becbcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1becc0: 0x24a90018
    ctx->pc = 0x1becc0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 5), 24));
    // 0x1becc4: 0x8ca50018
    ctx->pc = 0x1becc4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1becc8: 0x10a30067
    ctx->pc = 0x1BECC8u;
    {
        const bool branch_taken_0x1becc8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1BECCCu;
        SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x1becc8) {
            ctx->pc = 0x1BEE68u;
            goto label_1bee68;
        }
    }
    ctx->pc = 0x1BECD0u;
    // 0x1becd0: 0x282d
    ctx->pc = 0x1becd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1becd4: 0xfd4021
    ctx->pc = 0x1becd4u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x1becd8: 0x1000005b
    ctx->pc = 0x1BECD8u;
    {
        const bool branch_taken_0x1becd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BECDCu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 96));
        if (branch_taken_0x1becd8) {
            ctx->pc = 0x1BEE48u;
            goto label_1bee48;
        }
    }
    ctx->pc = 0x1BECE0u;
label_1bece0:
    // 0x1bece0: 0x8d2e0000
    ctx->pc = 0x1bece0u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1bece4: 0x55880
    ctx->pc = 0x1bece4u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1bece8: 0x1cb5821
    ctx->pc = 0x1bece8u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x1becec: 0x8d6b0010
    ctx->pc = 0x1bececu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1becf0: 0x11630052
    ctx->pc = 0x1BECF0u;
    {
        const bool branch_taken_0x1becf0 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 3));
        if (branch_taken_0x1becf0) {
            ctx->pc = 0x1BEE3Cu;
            goto label_1bee3c;
        }
    }
    ctx->pc = 0x1BECF8u;
    // 0x1becf8: 0x16e5821
    ctx->pc = 0x1becf8u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x1becfc: 0x3c010032
    ctx->pc = 0x1becfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bed00: 0x8c2e6898
    ctx->pc = 0x1bed00u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 1), 26776)));
    // 0x1bed04: 0x14e7023
    ctx->pc = 0x1bed04u;
    SET_GPR_U32(ctx, 14, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x1bed08: 0xad8e0000
    ctx->pc = 0x1bed08u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x1bed0c: 0x956e0000
    ctx->pc = 0x1bed0cu;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1bed10: 0x258c0004
    ctx->pc = 0x1bed10u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 4));
    // 0x1bed14: 0xa54e0000
    ctx->pc = 0x1bed14u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x1bed18: 0x916e0002
    ctx->pc = 0x1bed18u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x1bed1c: 0xa14e0002
    ctx->pc = 0x1bed1cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bed20: 0x916e0003
    ctx->pc = 0x1bed20u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x1bed24: 0xa14e0003
    ctx->pc = 0x1bed24u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bed28: 0x916e0004
    ctx->pc = 0x1bed28u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1bed2c: 0xa14e0004
    ctx->pc = 0x1bed2cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bed30: 0x816e0005
    ctx->pc = 0x1bed30u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 5)));
    // 0x1bed34: 0xa14e0005
    ctx->pc = 0x1bed34u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 5), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bed38: 0x916e0006
    ctx->pc = 0x1bed38u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x1bed3c: 0xa14e0006
    ctx->pc = 0x1bed3cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 6), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bed40: 0x916e0007
    ctx->pc = 0x1bed40u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 7)));
    // 0x1bed44: 0xa14e0007
    ctx->pc = 0x1bed44u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 7), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bed48: 0x816e0008
    ctx->pc = 0x1bed48u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1bed4c: 0xa14e0008
    ctx->pc = 0x1bed4cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 8), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bed50: 0x916e0009
    ctx->pc = 0x1bed50u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 9)));
    // 0x1bed54: 0xa14e0009
    ctx->pc = 0x1bed54u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 9), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bed58: 0x916e000a
    ctx->pc = 0x1bed58u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 10)));
    // 0x1bed5c: 0xa14e000a
    ctx->pc = 0x1bed5cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 10), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bed60: 0x916e000b
    ctx->pc = 0x1bed60u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 11)));
    // 0x1bed64: 0xa14e000b
    ctx->pc = 0x1bed64u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 11), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bed68: 0x816e000c
    ctx->pc = 0x1bed68u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x1bed6c: 0xa14e000c
    ctx->pc = 0x1bed6cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 12), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bed70: 0x816e000d
    ctx->pc = 0x1bed70u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 13)));
    // 0x1bed74: 0xa14e000d
    ctx->pc = 0x1bed74u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 13), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bed78: 0x916e000e
    ctx->pc = 0x1bed78u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 14)));
    // 0x1bed7c: 0xa14e000e
    ctx->pc = 0x1bed7cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 14), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bed80: 0x916e000f
    ctx->pc = 0x1bed80u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 15)));
    // 0x1bed84: 0xa14e000f
    ctx->pc = 0x1bed84u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 15), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bed88: 0x916e0010
    ctx->pc = 0x1bed88u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1bed8c: 0xa14e0010
    ctx->pc = 0x1bed8cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 16), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bed90: 0x916e0011
    ctx->pc = 0x1bed90u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 17)));
    // 0x1bed94: 0xa14e0011
    ctx->pc = 0x1bed94u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 17), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bed98: 0x956e0012
    ctx->pc = 0x1bed98u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 18)));
    // 0x1bed9c: 0xa54e0012
    ctx->pc = 0x1bed9cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 18), (uint16_t)GPR_U32(ctx, 14));
    // 0x1beda0: 0x956e0014
    ctx->pc = 0x1beda0u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x1beda4: 0xa54e0014
    ctx->pc = 0x1beda4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 20), (uint16_t)GPR_U32(ctx, 14));
    // 0x1beda8: 0x816e0016
    ctx->pc = 0x1beda8u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 22)));
    // 0x1bedac: 0xa14e0016
    ctx->pc = 0x1bedacu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 22), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bedb0: 0x916e0017
    ctx->pc = 0x1bedb0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 23)));
    // 0x1bedb4: 0xa14e0017
    ctx->pc = 0x1bedb4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 23), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bedb8: 0x816e0018
    ctx->pc = 0x1bedb8u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x1bedbc: 0xa14e0018
    ctx->pc = 0x1bedbcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 24), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bedc0: 0x916e0019
    ctx->pc = 0x1bedc0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 25)));
    // 0x1bedc4: 0xa14e0019
    ctx->pc = 0x1bedc4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 25), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bedc8: 0x816e001a
    ctx->pc = 0x1bedc8u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 26)));
    // 0x1bedcc: 0xa14e001a
    ctx->pc = 0x1bedccu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 26), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bedd0: 0x916e001b
    ctx->pc = 0x1bedd0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 27)));
    // 0x1bedd4: 0xa14e001b
    ctx->pc = 0x1bedd4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 27), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bedd8: 0x816e001c
    ctx->pc = 0x1bedd8u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 28)));
    // 0x1beddc: 0xa14e001c
    ctx->pc = 0x1beddcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 28), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bede0: 0x916e001d
    ctx->pc = 0x1bede0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 29)));
    // 0x1bede4: 0xa14e001d
    ctx->pc = 0x1bede4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 29), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bede8: 0x816e001e
    ctx->pc = 0x1bede8u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 30)));
    // 0x1bedec: 0xa14e001e
    ctx->pc = 0x1bedecu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 30), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bedf0: 0x916e001f
    ctx->pc = 0x1bedf0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 31)));
    // 0x1bedf4: 0xa14e001f
    ctx->pc = 0x1bedf4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 31), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bedf8: 0x956e0020
    ctx->pc = 0x1bedf8u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x1bedfc: 0xa54e0020
    ctx->pc = 0x1bedfcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 32), (uint16_t)GPR_U32(ctx, 14));
    // 0x1bee00: 0x956e0022
    ctx->pc = 0x1bee00u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 34)));
    // 0x1bee04: 0xa54e0022
    ctx->pc = 0x1bee04u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 34), (uint16_t)GPR_U32(ctx, 14));
    // 0x1bee08: 0x956e0024
    ctx->pc = 0x1bee08u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 36)));
    // 0x1bee0c: 0xa54e0024
    ctx->pc = 0x1bee0cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 36), (uint16_t)GPR_U32(ctx, 14));
    // 0x1bee10: 0x956e0026
    ctx->pc = 0x1bee10u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 38)));
    // 0x1bee14: 0xa54e0026
    ctx->pc = 0x1bee14u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 38), (uint16_t)GPR_U32(ctx, 14));
    // 0x1bee18: 0x916e0028
    ctx->pc = 0x1bee18u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 40)));
    // 0x1bee1c: 0xa14e0028
    ctx->pc = 0x1bee1cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 40), (uint8_t)GPR_U32(ctx, 14));
    // 0x1bee20: 0x916b0029
    ctx->pc = 0x1bee20u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 41)));
    // 0x1bee24: 0xa14b0029
    ctx->pc = 0x1bee24u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 41), (uint8_t)GPR_U32(ctx, 11));
    // 0x1bee28: 0x954b0000
    ctx->pc = 0x1bee28u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1bee2c: 0x16d5821
    ctx->pc = 0x1bee2cu;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x1bee30: 0xa54b0000
    ctx->pc = 0x1bee30u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x1bee34: 0x10000003
    ctx->pc = 0x1BEE34u;
    {
        const bool branch_taken_0x1bee34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BEE38u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 42));
        if (branch_taken_0x1bee34) {
            ctx->pc = 0x1BEE44u;
            goto label_1bee44;
        }
    }
    ctx->pc = 0x1BEE3Cu;
label_1bee3c:
    // 0x1bee3c: 0xad8b0000
    ctx->pc = 0x1bee3cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 11));
    // 0x1bee40: 0x258c0004
    ctx->pc = 0x1bee40u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 4));
label_1bee44:
    // 0x1bee44: 0x24a50001
    ctx->pc = 0x1bee44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_1bee48:
    // 0x1bee48: 0x950b0000
    ctx->pc = 0x1bee48u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1bee4c: 0xab582b
    ctx->pc = 0x1bee4cu;
    SET_GPR_U32(ctx, 11, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x1bee50: 0x1560ffa3
    ctx->pc = 0x1BEE50u;
    {
        const bool branch_taken_0x1bee50 = (GPR_U32(ctx, 11) != GPR_U32(ctx, 0));
        if (branch_taken_0x1bee50) {
            ctx->pc = 0x1BECE0u;
            goto label_1bece0;
        }
    }
    ctx->pc = 0x1BEE58u;
    // 0x1bee58: 0xfd2821
    ctx->pc = 0x1bee58u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x1bee5c: 0x94a50080
    ctx->pc = 0x1bee5cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x1bee60: 0x1a52821
    ctx->pc = 0x1bee60u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x1bee64: 0x30adffff
    ctx->pc = 0x1bee64u;
    SET_GPR_U32(ctx, 13, AND32(GPR_U32(ctx, 5), 65535));
label_1bee68:
    // 0x1bee68: 0x24c60001
    ctx->pc = 0x1bee68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_1bee6c:
    // 0x1bee6c: 0xd2282b
    ctx->pc = 0x1bee6cu;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x1bee70: 0x14a0ff92
    ctx->pc = 0x1BEE70u;
    {
        const bool branch_taken_0x1bee70 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BEE74u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 5));
        if (branch_taken_0x1bee70) {
            ctx->pc = 0x1BECBCu;
            goto label_1becbc;
        }
    }
    ctx->pc = 0x1BEE78u;
    // 0x1bee78: 0x3c010032
    ctx->pc = 0x1bee78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bee7c: 0x24030010
    ctx->pc = 0x1bee7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bee80: 0x8c246898
    ctx->pc = 0x1bee80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 26776)));
    // 0x1bee84: 0x1442023
    ctx->pc = 0x1bee84u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1bee88: 0x3084000f
    ctx->pc = 0x1bee88u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 15));
    // 0x1bee8c: 0x642823
    ctx->pc = 0x1bee8cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bee90: 0x10a3000b
    ctx->pc = 0x1BEE90u;
    {
        const bool branch_taken_0x1bee90 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1bee90) {
            ctx->pc = 0x1BEEC0u;
            goto label_1beec0;
        }
    }
    ctx->pc = 0x1BEE98u;
    // 0x1bee98: 0x302d
    ctx->pc = 0x1bee98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee9c: 0x10000004
    ctx->pc = 0x1BEE9Cu;
    {
        const bool branch_taken_0x1bee9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BEEA0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x1bee9c) {
            ctx->pc = 0x1BEEB0u;
            goto label_1beeb0;
        }
    }
    ctx->pc = 0x1BEEA4u;
label_1beea4:
    // 0x1beea4: 0xa1440000
    ctx->pc = 0x1beea4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1beea8: 0x24c60001
    ctx->pc = 0x1beea8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1beeac: 0x254a0001
    ctx->pc = 0x1beeacu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_1beeb0:
    // 0x1beeb0: 0xc5182b
    ctx->pc = 0x1beeb0u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1beeb4: 0x0
    ctx->pc = 0x1beeb4u;
    // NOP
    // 0x1beeb8: 0x1460fffa
    ctx->pc = 0x1BEEB8u;
    {
        const bool branch_taken_0x1beeb8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1beeb8) {
            ctx->pc = 0x1BEEA4u;
            goto label_1beea4;
        }
    }
    ctx->pc = 0x1BEEC0u;
label_1beec0:
    // 0x1beec0: 0x3c010032
    ctx->pc = 0x1beec0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1beec4: 0x3c070032
    ctx->pc = 0x1beec4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)50 << 16));
    // 0x1beec8: 0x8c256898
    ctx->pc = 0x1beec8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 26776)));
    // 0x1beecc: 0x2408ffff
    ctx->pc = 0x1beeccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1beed0: 0x182d
    ctx->pc = 0x1beed0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beed4: 0x24e768a0
    ctx->pc = 0x1beed4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 26784));
    // 0x1beed8: 0x1452023
    ctx->pc = 0x1beed8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x1beedc: 0x3c010032
    ctx->pc = 0x1beedcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1beee0: 0xaca40008
    ctx->pc = 0x1beee0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1beee4: 0xac2a6894
    ctx->pc = 0x1beee4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26772), GPR_U32(ctx, 10));
    // 0x1beee8: 0x3c010032
    ctx->pc = 0x1beee8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1beeec: 0x8c2568b4
    ctx->pc = 0x1beeecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 26804)));
    // 0x1beef0: 0x3c010032
    ctx->pc = 0x1beef0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1beef4: 0x8ca40000
    ctx->pc = 0x1beef4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1beef8: 0x8c266894
    ctx->pc = 0x1beef8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 26772)));
    // 0x1beefc: 0xacc40000
    ctx->pc = 0x1beefcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1bef00: 0x3c010032
    ctx->pc = 0x1bef00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bef04: 0x8ca40004
    ctx->pc = 0x1bef04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1bef08: 0xacc40004
    ctx->pc = 0x1bef08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x1bef0c: 0x8ca40008
    ctx->pc = 0x1bef0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bef10: 0xacc40008
    ctx->pc = 0x1bef10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x1bef14: 0x8ca4000c
    ctx->pc = 0x1bef14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1bef18: 0xacc4000c
    ctx->pc = 0x1bef18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x1bef1c: 0x8c246894
    ctx->pc = 0x1bef1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 26772)));
    // 0x1bef20: 0xac880008
    ctx->pc = 0x1bef20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x1bef24: 0x3c010032
    ctx->pc = 0x1bef24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bef28: 0x8c246894
    ctx->pc = 0x1bef28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 26772)));
    // 0x1bef2c: 0x10000012
    ctx->pc = 0x1BEF2Cu;
    {
        const bool branch_taken_0x1bef2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BEF30u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x1bef2c) {
            ctx->pc = 0x1BEF78u;
            goto label_1bef78;
        }
    }
    ctx->pc = 0x1BEF34u;
label_1bef34:
    // 0x1bef34: 0xe42021
    ctx->pc = 0x1bef34u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1bef38: 0x8c840014
    ctx->pc = 0x1bef38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1bef3c: 0x1088000d
    ctx->pc = 0x1BEF3Cu;
    {
        const bool branch_taken_0x1bef3c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 8));
        if (branch_taken_0x1bef3c) {
            ctx->pc = 0x1BEF74u;
            goto label_1bef74;
        }
    }
    ctx->pc = 0x1BEF44u;
    // 0x1bef44: 0x8c84000c
    ctx->pc = 0x1bef44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bef48: 0x32840
    ctx->pc = 0x1bef48u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1bef4c: 0xbd2821
    ctx->pc = 0x1bef4cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1bef50: 0x3c010032
    ctx->pc = 0x1bef50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bef54: 0x24a50040
    ctx->pc = 0x1bef54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x1bef58: 0x24840001
    ctx->pc = 0x1bef58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1bef5c: 0xa4a40000
    ctx->pc = 0x1bef5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1bef60: 0x8c266894
    ctx->pc = 0x1bef60u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 26772)));
    // 0x1bef64: 0x94a50000
    ctx->pc = 0x1bef64u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bef68: 0x8cc4000c
    ctx->pc = 0x1bef68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1bef6c: 0x852021
    ctx->pc = 0x1bef6cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1bef70: 0xacc4000c
    ctx->pc = 0x1bef70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
label_1bef74:
    // 0x1bef74: 0x24630001
    ctx->pc = 0x1bef74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1bef78:
    // 0x1bef78: 0x72202b
    ctx->pc = 0x1bef78u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1bef7c: 0x1480ffed
    ctx->pc = 0x1BEF7Cu;
    {
        const bool branch_taken_0x1bef7c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BEF80u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 5));
        if (branch_taken_0x1bef7c) {
            ctx->pc = 0x1BEF34u;
            goto label_1bef34;
        }
    }
    ctx->pc = 0x1BEF84u;
    // 0x1bef84: 0x3c010032
    ctx->pc = 0x1bef84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bef88: 0x3c040032
    ctx->pc = 0x1bef88u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1bef8c: 0x8c276894
    ctx->pc = 0x1bef8cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 26772)));
    // 0x1bef90: 0x782d
    ctx->pc = 0x1bef90u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef94: 0x302d
    ctx->pc = 0x1bef94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef98: 0x2403ffff
    ctx->pc = 0x1bef98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bef9c: 0x248468a0
    ctx->pc = 0x1bef9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26784));
    // 0x1befa0: 0x8ce5000c
    ctx->pc = 0x1befa0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1befa4: 0x3c010032
    ctx->pc = 0x1befa4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1befa8: 0x24a5ffff
    ctx->pc = 0x1befa8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1befac: 0xace5000c
    ctx->pc = 0x1befacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x1befb0: 0x8c256894
    ctx->pc = 0x1befb0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 26772)));
    // 0x1befb4: 0x24ae0010
    ctx->pc = 0x1befb4u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 5), 16));
    // 0x1befb8: 0x8ca5000c
    ctx->pc = 0x1befb8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1befbc: 0x24a50001
    ctx->pc = 0x1befbcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1befc0: 0x52880
    ctx->pc = 0x1befc0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1befc4: 0x10000039
    ctx->pc = 0x1BEFC4u;
    {
        const bool branch_taken_0x1befc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BEFC8u;
        SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
        if (branch_taken_0x1befc4) {
            ctx->pc = 0x1BF0ACu;
            goto label_1bf0ac;
        }
    }
    ctx->pc = 0x1BEFCCu;
label_1befcc:
    // 0x1befcc: 0x852821
    ctx->pc = 0x1befccu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1befd0: 0x24aa0014
    ctx->pc = 0x1befd0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 5), 20));
    // 0x1befd4: 0x8ca50014
    ctx->pc = 0x1befd4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1befd8: 0x10a30033
    ctx->pc = 0x1BEFD8u;
    {
        const bool branch_taken_0x1befd8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1BEFDCu;
        SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x1befd8) {
            ctx->pc = 0x1BF0A8u;
            goto label_1bf0a8;
        }
    }
    ctx->pc = 0x1BEFE0u;
    // 0x1befe0: 0x282d
    ctx->pc = 0x1befe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befe4: 0xfd4021
    ctx->pc = 0x1befe4u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x1befe8: 0x31e9ffff
    ctx->pc = 0x1befe8u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 15), 65535));
    // 0x1befec: 0x10000026
    ctx->pc = 0x1BEFECu;
    {
        const bool branch_taken_0x1befec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BEFF0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 64));
        if (branch_taken_0x1befec) {
            ctx->pc = 0x1BF088u;
            goto label_1bf088;
        }
    }
    ctx->pc = 0x1BEFF4u;
label_1beff4:
    // 0x1beff4: 0x8d4d0000
    ctx->pc = 0x1beff4u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1beff8: 0x55880
    ctx->pc = 0x1beff8u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1beffc: 0x1ab5821
    ctx->pc = 0x1beffcu;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1bf000: 0x8d6b0010
    ctx->pc = 0x1bf000u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1bf004: 0x1163001d
    ctx->pc = 0x1BF004u;
    {
        const bool branch_taken_0x1bf004 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 3));
        ctx->pc = 0x1BF008u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1bf004) {
            ctx->pc = 0x1BF07Cu;
            goto label_1bf07c;
        }
    }
    ctx->pc = 0x1BF00Cu;
    // 0x1bf00c: 0x16d6821
    ctx->pc = 0x1bf00cu;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x1bf010: 0x8c316894
    ctx->pc = 0x1bf010u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 1), 26772)));
    // 0x1bf014: 0x25ab0004
    ctx->pc = 0x1bf014u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 13), 4));
    // 0x1bf018: 0x802d
    ctx->pc = 0x1bf018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf01c: 0x1918823
    ctx->pc = 0x1bf01cu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x1bf020: 0xadd10000
    ctx->pc = 0x1bf020u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 17));
    // 0x1bf024: 0x91b10000
    ctx->pc = 0x1bf024u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1bf028: 0xa1910000
    ctx->pc = 0x1bf028u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1bf02c: 0x91b10001
    ctx->pc = 0x1bf02cu;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x1bf030: 0xa1910001
    ctx->pc = 0x1bf030u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 1), (uint8_t)GPR_U32(ctx, 17));
    // 0x1bf034: 0x91b10002
    ctx->pc = 0x1bf034u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x1bf038: 0xa1910002
    ctx->pc = 0x1bf038u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x1bf03c: 0x91b10003
    ctx->pc = 0x1bf03cu;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x1bf040: 0xa1910003
    ctx->pc = 0x1bf040u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3), (uint8_t)GPR_U32(ctx, 17));
    // 0x1bf044: 0x10000007
    ctx->pc = 0x1BF044u;
    {
        const bool branch_taken_0x1bf044 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BF048u;
        SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 4));
        if (branch_taken_0x1bf044) {
            ctx->pc = 0x1BF064u;
            goto label_1bf064;
        }
    }
    ctx->pc = 0x1BF04Cu;
label_1bf04c:
    // 0x1bf04c: 0x95710000
    ctx->pc = 0x1bf04cu;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1bf050: 0x26100001
    ctx->pc = 0x1bf050u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1bf054: 0x2298821
    ctx->pc = 0x1bf054u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x1bf058: 0x256b0002
    ctx->pc = 0x1bf058u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
    // 0x1bf05c: 0xa5910000
    ctx->pc = 0x1bf05cu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x1bf060: 0x258c0002
    ctx->pc = 0x1bf060u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 2));
label_1bf064:
    // 0x1bf064: 0x91b10003
    ctx->pc = 0x1bf064u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x1bf068: 0x211882b
    ctx->pc = 0x1bf068u;
    SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1bf06c: 0x1620fff7
    ctx->pc = 0x1BF06Cu;
    {
        const bool branch_taken_0x1bf06c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x1bf06c) {
            ctx->pc = 0x1BF04Cu;
            goto label_1bf04c;
        }
    }
    ctx->pc = 0x1BF074u;
    // 0x1bf074: 0x10000003
    ctx->pc = 0x1BF074u;
    {
        const bool branch_taken_0x1bf074 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BF078u;
        SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 4));
        if (branch_taken_0x1bf074) {
            ctx->pc = 0x1BF084u;
            goto label_1bf084;
        }
    }
    ctx->pc = 0x1BF07Cu;
label_1bf07c:
    // 0x1bf07c: 0xadcb0000
    ctx->pc = 0x1bf07cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 11));
    // 0x1bf080: 0x25ce0004
    ctx->pc = 0x1bf080u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 4));
label_1bf084:
    // 0x1bf084: 0x24a50001
    ctx->pc = 0x1bf084u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_1bf088:
    // 0x1bf088: 0x950b0000
    ctx->pc = 0x1bf088u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1bf08c: 0xab582b
    ctx->pc = 0x1bf08cu;
    SET_GPR_U32(ctx, 11, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x1bf090: 0x1560ffd8
    ctx->pc = 0x1BF090u;
    {
        const bool branch_taken_0x1bf090 = (GPR_U32(ctx, 11) != GPR_U32(ctx, 0));
        if (branch_taken_0x1bf090) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BF098u;
    // 0x1bf098: 0xfd2821
    ctx->pc = 0x1bf098u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x1bf09c: 0x94a50060
    ctx->pc = 0x1bf09cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x1bf0a0: 0x1e52821
    ctx->pc = 0x1bf0a0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x1bf0a4: 0x30afffff
    ctx->pc = 0x1bf0a4u;
    SET_GPR_U32(ctx, 15, AND32(GPR_U32(ctx, 5), 65535));
label_1bf0a8:
    // 0x1bf0a8: 0x24c60001
    ctx->pc = 0x1bf0a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_1bf0ac:
    // 0x1bf0ac: 0xd2282b
    ctx->pc = 0x1bf0acu;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x1bf0b0: 0x14a0ffc6
    ctx->pc = 0x1BF0B0u;
    {
        const bool branch_taken_0x1bf0b0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BF0B4u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 5));
        if (branch_taken_0x1bf0b0) {
            ctx->pc = 0x1BEFCCu;
            goto label_1befcc;
        }
    }
    ctx->pc = 0x1BF0B8u;
    // 0x1bf0b8: 0x3c010032
    ctx->pc = 0x1bf0b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf0bc: 0x24030010
    ctx->pc = 0x1bf0bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bf0c0: 0x8c246894
    ctx->pc = 0x1bf0c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 26772)));
    // 0x1bf0c4: 0x1842023
    ctx->pc = 0x1bf0c4u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x1bf0c8: 0x3084000f
    ctx->pc = 0x1bf0c8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 15));
    // 0x1bf0cc: 0x642823
    ctx->pc = 0x1bf0ccu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bf0d0: 0x10a3000b
    ctx->pc = 0x1BF0D0u;
    {
        const bool branch_taken_0x1bf0d0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1bf0d0) {
            ctx->pc = 0x1BF100u;
            goto label_1bf100;
        }
    }
    ctx->pc = 0x1BF0D8u;
    // 0x1bf0d8: 0x302d
    ctx->pc = 0x1bf0d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf0dc: 0x10000004
    ctx->pc = 0x1BF0DCu;
    {
        const bool branch_taken_0x1bf0dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BF0E0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x1bf0dc) {
            ctx->pc = 0x1BF0F0u;
            goto label_1bf0f0;
        }
    }
    ctx->pc = 0x1BF0E4u;
label_1bf0e4:
    // 0x1bf0e4: 0xa1840000
    ctx->pc = 0x1bf0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bf0e8: 0x24c60001
    ctx->pc = 0x1bf0e8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1bf0ec: 0x258c0001
    ctx->pc = 0x1bf0ecu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 1));
label_1bf0f0:
    // 0x1bf0f0: 0xc5182b
    ctx->pc = 0x1bf0f0u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1bf0f4: 0x0
    ctx->pc = 0x1bf0f4u;
    // NOP
    // 0x1bf0f8: 0x1460fffa
    ctx->pc = 0x1BF0F8u;
    {
        const bool branch_taken_0x1bf0f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1bf0f8) {
            ctx->pc = 0x1BF0E4u;
            goto label_1bf0e4;
        }
    }
    ctx->pc = 0x1BF100u;
label_1bf100:
    // 0x1bf100: 0x3c010032
    ctx->pc = 0x1bf100u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf104: 0x3c040032
    ctx->pc = 0x1bf104u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1bf108: 0x8c276894
    ctx->pc = 0x1bf108u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 26772)));
    // 0x1bf10c: 0x2405ffff
    ctx->pc = 0x1bf10cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bf110: 0x302d
    ctx->pc = 0x1bf110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf114: 0x248468a0
    ctx->pc = 0x1bf114u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26784));
    // 0x1bf118: 0x1871823
    ctx->pc = 0x1bf118u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x1bf11c: 0x3c010032
    ctx->pc = 0x1bf11cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf120: 0xace30008
    ctx->pc = 0x1bf120u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1bf124: 0xac2c6890
    ctx->pc = 0x1bf124u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26768), GPR_U32(ctx, 12));
    // 0x1bf128: 0x3c010032
    ctx->pc = 0x1bf128u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf12c: 0x8c2768b0
    ctx->pc = 0x1bf12cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 26800)));
    // 0x1bf130: 0x3c010032
    ctx->pc = 0x1bf130u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf134: 0x8ce30000
    ctx->pc = 0x1bf134u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1bf138: 0x8c286890
    ctx->pc = 0x1bf138u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 26768)));
    // 0x1bf13c: 0xad030000
    ctx->pc = 0x1bf13cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1bf140: 0x3c010032
    ctx->pc = 0x1bf140u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf144: 0x8ce30004
    ctx->pc = 0x1bf144u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1bf148: 0xad030004
    ctx->pc = 0x1bf148u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x1bf14c: 0x8ce30008
    ctx->pc = 0x1bf14cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1bf150: 0xad030008
    ctx->pc = 0x1bf150u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x1bf154: 0x8ce3000c
    ctx->pc = 0x1bf154u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1bf158: 0xad03000c
    ctx->pc = 0x1bf158u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x1bf15c: 0x8c236890
    ctx->pc = 0x1bf15cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 26768)));
    // 0x1bf160: 0xac650008
    ctx->pc = 0x1bf160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x1bf164: 0x3c010032
    ctx->pc = 0x1bf164u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf168: 0x8c236890
    ctx->pc = 0x1bf168u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 26768)));
    // 0x1bf16c: 0x1000000f
    ctx->pc = 0x1BF16Cu;
    {
        const bool branch_taken_0x1bf16c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BF170u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x1bf16c) {
            ctx->pc = 0x1BF1ACu;
            goto label_1bf1ac;
        }
    }
    ctx->pc = 0x1BF174u;
label_1bf174:
    // 0x1bf174: 0x831821
    ctx->pc = 0x1bf174u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bf178: 0x8c630010
    ctx->pc = 0x1bf178u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bf17c: 0x1065000a
    ctx->pc = 0x1BF17Cu;
    {
        const bool branch_taken_0x1bf17c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        if (branch_taken_0x1bf17c) {
            ctx->pc = 0x1BF1A8u;
            goto label_1bf1a8;
        }
    }
    ctx->pc = 0x1BF184u;
    // 0x1bf184: 0x8c68000c
    ctx->pc = 0x1bf184u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1bf188: 0x3c010032
    ctx->pc = 0x1bf188u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf18c: 0x8c236890
    ctx->pc = 0x1bf18cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 26768)));
    // 0x1bf190: 0x2467000c
    ctx->pc = 0x1bf190u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 12));
    // 0x1bf194: 0x8c63000c
    ctx->pc = 0x1bf194u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1bf198: 0x68082b
    ctx->pc = 0x1bf198u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1bf19c: 0x10200002
    ctx->pc = 0x1BF19Cu;
    {
        const bool branch_taken_0x1bf19c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bf19c) {
            ctx->pc = 0x1BF1A8u;
            goto label_1bf1a8;
        }
    }
    ctx->pc = 0x1BF1A4u;
    // 0x1bf1a4: 0xace80000
    ctx->pc = 0x1bf1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
label_1bf1a8:
    // 0x1bf1a8: 0x24c60001
    ctx->pc = 0x1bf1a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_1bf1ac:
    // 0x1bf1ac: 0xd2182b
    ctx->pc = 0x1bf1acu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x1bf1b0: 0x1460fff0
    ctx->pc = 0x1BF1B0u;
    {
        const bool branch_taken_0x1bf1b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BF1B4u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 5));
        if (branch_taken_0x1bf1b0) {
            ctx->pc = 0x1BF174u;
            goto label_1bf174;
        }
    }
    ctx->pc = 0x1BF1B8u;
    // 0x1bf1b8: 0x282d
    ctx->pc = 0x1bf1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1bc: 0x10000005
    ctx->pc = 0x1BF1BCu;
    {
        const bool branch_taken_0x1bf1bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BF1C0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1bf1bc) {
            ctx->pc = 0x1BF1D4u;
            goto label_1bf1d4;
        }
    }
    ctx->pc = 0x1BF1C4u;
label_1bf1c4:
    // 0x1bf1c4: 0x51880
    ctx->pc = 0x1bf1c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1bf1c8: 0xc31821
    ctx->pc = 0x1bf1c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1bf1cc: 0x24a50001
    ctx->pc = 0x1bf1ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1bf1d0: 0xac640010
    ctx->pc = 0x1bf1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_1bf1d4:
    // 0x1bf1d4: 0x3c010032
    ctx->pc = 0x1bf1d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf1d8: 0x8c266890
    ctx->pc = 0x1bf1d8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 26768)));
    // 0x1bf1dc: 0x8cc3000c
    ctx->pc = 0x1bf1dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1bf1e0: 0x65082b
    ctx->pc = 0x1bf1e0u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bf1e4: 0x1020fff7
    ctx->pc = 0x1BF1E4u;
    {
        const bool branch_taken_0x1bf1e4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bf1e4) {
            ctx->pc = 0x1BF1C4u;
            goto label_1bf1c4;
        }
    }
    ctx->pc = 0x1BF1ECu;
    // 0x1bf1ec: 0x24630001
    ctx->pc = 0x1bf1ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bf1f0: 0x24c40010
    ctx->pc = 0x1bf1f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 16));
    // 0x1bf1f4: 0x31880
    ctx->pc = 0x1bf1f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bf1f8: 0x602d
    ctx->pc = 0x1bf1f8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1fc: 0x835021
    ctx->pc = 0x1bf1fcu;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bf200: 0x382d
    ctx->pc = 0x1bf200u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf204: 0x3c040032
    ctx->pc = 0x1bf204u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1bf208: 0x2403ffff
    ctx->pc = 0x1bf208u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bf20c: 0x1000008b
    ctx->pc = 0x1BF20Cu;
    {
        const bool branch_taken_0x1bf20c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BF210u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26784));
        if (branch_taken_0x1bf20c) {
            ctx->pc = 0x1BF43Cu;
            goto label_1bf43c;
        }
    }
    ctx->pc = 0x1BF214u;
label_1bf214:
    // 0x1bf214: 0x852821
    ctx->pc = 0x1bf214u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1bf218: 0x24a80010
    ctx->pc = 0x1bf218u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 5), 16));
    // 0x1bf21c: 0x8ca50010
    ctx->pc = 0x1bf21cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1bf220: 0x10a30085
    ctx->pc = 0x1BF220u;
    {
        const bool branch_taken_0x1bf220 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1BF224u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bf220) {
            ctx->pc = 0x1BF438u;
            goto label_1bf438;
        }
    }
    ctx->pc = 0x1BF228u;
    // 0x1bf228: 0x1000007a
    ctx->pc = 0x1BF228u;
    {
        const bool branch_taken_0x1bf228 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BF22Cu;
        SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 8), 0)));
        if (branch_taken_0x1bf228) {
            ctx->pc = 0x1BF414u;
            goto label_1bf414;
        }
    }
    ctx->pc = 0x1BF230u;
label_1bf230:
    // 0x1bf230: 0x3c010032
    ctx->pc = 0x1bf230u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf234: 0x1a92821
    ctx->pc = 0x1bf234u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x1bf238: 0x8c2b6890
    ctx->pc = 0x1bf238u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 1), 26768)));
    // 0x1bf23c: 0x24ae0010
    ctx->pc = 0x1bf23cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 5), 16));
    // 0x1bf240: 0x8ca50010
    ctx->pc = 0x1bf240u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1bf244: 0x1694821
    ctx->pc = 0x1bf244u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x1bf248: 0x10a30070
    ctx->pc = 0x1BF248u;
    {
        const bool branch_taken_0x1bf248 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1BF24Cu;
        SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 9), 16));
        if (branch_taken_0x1bf248) {
            ctx->pc = 0x1BF40Cu;
            goto label_1bf40c;
        }
    }
    ctx->pc = 0x1BF250u;
    // 0x1bf250: 0x8da50000
    ctx->pc = 0x1bf250u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1bf254: 0x10a30003
    ctx->pc = 0x1BF254u;
    {
        const bool branch_taken_0x1bf254 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1BF258u;
        SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        if (branch_taken_0x1bf254) {
            ctx->pc = 0x1BF264u;
            goto label_1bf264;
        }
    }
    ctx->pc = 0x1BF25Cu;
    // 0x1bf25c: 0x100000c0
    ctx->pc = 0x1BF25Cu;
    {
        const bool branch_taken_0x1bf25c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BF260u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x1bf25c) {
            ctx->pc = 0x1BF560u;
            goto label_1bf560;
        }
    }
    ctx->pc = 0x1BF264u;
label_1bf264:
    // 0x1bf264: 0x282d
    ctx->pc = 0x1bf264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf268: 0xada90000
    ctx->pc = 0x1bf268u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 9));
    // 0x1bf26c: 0x8dc90000
    ctx->pc = 0x1bf26cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1bf270: 0x8d0b0000
    ctx->pc = 0x1bf270u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1bf274: 0x12b5821
    ctx->pc = 0x1bf274u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x1bf278: 0x8d6d0000
    ctx->pc = 0x1bf278u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1bf27c: 0x25690024
    ctx->pc = 0x1bf27cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 11), 36));
    // 0x1bf280: 0xad4d0000
    ctx->pc = 0x1bf280u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 13));
    // 0x1bf284: 0x916d0004
    ctx->pc = 0x1bf284u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1bf288: 0xa14d0004
    ctx->pc = 0x1bf288u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf28c: 0x916d0005
    ctx->pc = 0x1bf28cu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 5)));
    // 0x1bf290: 0xa14d0005
    ctx->pc = 0x1bf290u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 5), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf294: 0x916d0006
    ctx->pc = 0x1bf294u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x1bf298: 0xa14d0006
    ctx->pc = 0x1bf298u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 6), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf29c: 0x816d0007
    ctx->pc = 0x1bf29cu;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 7)));
    // 0x1bf2a0: 0xa14d0007
    ctx->pc = 0x1bf2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 7), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf2a4: 0x816d0008
    ctx->pc = 0x1bf2a4u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1bf2a8: 0xa14d0008
    ctx->pc = 0x1bf2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 8), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf2ac: 0x816d0009
    ctx->pc = 0x1bf2acu;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 9)));
    // 0x1bf2b0: 0xa14d0009
    ctx->pc = 0x1bf2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 9), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf2b4: 0x816d000a
    ctx->pc = 0x1bf2b4u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 10)));
    // 0x1bf2b8: 0xa14d000a
    ctx->pc = 0x1bf2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 10), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf2bc: 0x916d000b
    ctx->pc = 0x1bf2bcu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 11)));
    // 0x1bf2c0: 0xa14d000b
    ctx->pc = 0x1bf2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 11), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf2c4: 0x916d000c
    ctx->pc = 0x1bf2c4u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x1bf2c8: 0xa14d000c
    ctx->pc = 0x1bf2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 12), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf2cc: 0x916d000d
    ctx->pc = 0x1bf2ccu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 13)));
    // 0x1bf2d0: 0xa14d000d
    ctx->pc = 0x1bf2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 13), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf2d4: 0x916d000e
    ctx->pc = 0x1bf2d4u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 14)));
    // 0x1bf2d8: 0xa14d000e
    ctx->pc = 0x1bf2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 14), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf2dc: 0x916d000f
    ctx->pc = 0x1bf2dcu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 15)));
    // 0x1bf2e0: 0xa14d000f
    ctx->pc = 0x1bf2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 15), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf2e4: 0x916d0010
    ctx->pc = 0x1bf2e4u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1bf2e8: 0xa14d0010
    ctx->pc = 0x1bf2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 16), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf2ec: 0x916d0011
    ctx->pc = 0x1bf2ecu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 17)));
    // 0x1bf2f0: 0xa14d0011
    ctx->pc = 0x1bf2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 17), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf2f4: 0x916d0012
    ctx->pc = 0x1bf2f4u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 18)));
    // 0x1bf2f8: 0xa14d0012
    ctx->pc = 0x1bf2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 18), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf2fc: 0x916d0013
    ctx->pc = 0x1bf2fcu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 19)));
    // 0x1bf300: 0xa14d0013
    ctx->pc = 0x1bf300u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 19), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf304: 0x956d0014
    ctx->pc = 0x1bf304u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x1bf308: 0xa54d0014
    ctx->pc = 0x1bf308u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 20), (uint16_t)GPR_U32(ctx, 13));
    // 0x1bf30c: 0x956d0016
    ctx->pc = 0x1bf30cu;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 22)));
    // 0x1bf310: 0xa54d0016
    ctx->pc = 0x1bf310u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 22), (uint16_t)GPR_U32(ctx, 13));
    // 0x1bf314: 0x856d0018
    ctx->pc = 0x1bf314u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x1bf318: 0xa54d0018
    ctx->pc = 0x1bf318u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 24), (uint16_t)GPR_U32(ctx, 13));
    // 0x1bf31c: 0x856d001a
    ctx->pc = 0x1bf31cu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 26)));
    // 0x1bf320: 0xa54d001a
    ctx->pc = 0x1bf320u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 26), (uint16_t)GPR_U32(ctx, 13));
    // 0x1bf324: 0x856d001c
    ctx->pc = 0x1bf324u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 28)));
    // 0x1bf328: 0xa54d001c
    ctx->pc = 0x1bf328u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 28), (uint16_t)GPR_U32(ctx, 13));
    // 0x1bf32c: 0x856d001e
    ctx->pc = 0x1bf32cu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 30)));
    // 0x1bf330: 0xa54d001e
    ctx->pc = 0x1bf330u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 30), (uint16_t)GPR_U32(ctx, 13));
    // 0x1bf334: 0x816d0020
    ctx->pc = 0x1bf334u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x1bf338: 0xa14d0020
    ctx->pc = 0x1bf338u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 32), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf33c: 0x816d0021
    ctx->pc = 0x1bf33cu;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 33)));
    // 0x1bf340: 0xa14d0021
    ctx->pc = 0x1bf340u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 33), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf344: 0x816d0022
    ctx->pc = 0x1bf344u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 34)));
    // 0x1bf348: 0xa14d0022
    ctx->pc = 0x1bf348u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 34), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf34c: 0x816d0023
    ctx->pc = 0x1bf34cu;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 35)));
    // 0x1bf350: 0xa14d0023
    ctx->pc = 0x1bf350u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 35), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf354: 0x10000029
    ctx->pc = 0x1BF354u;
    {
        const bool branch_taken_0x1bf354 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BF358u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 36));
        if (branch_taken_0x1bf354) {
            ctx->pc = 0x1BF3FCu;
            goto label_1bf3fc;
        }
    }
    ctx->pc = 0x1BF35Cu;
label_1bf35c:
    // 0x1bf35c: 0x952d0000
    ctx->pc = 0x1bf35cu;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1bf360: 0x24a50001
    ctx->pc = 0x1bf360u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1bf364: 0xa54d0000
    ctx->pc = 0x1bf364u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x1bf368: 0x912d0002
    ctx->pc = 0x1bf368u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x1bf36c: 0xa14d0002
    ctx->pc = 0x1bf36cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf370: 0x912d0003
    ctx->pc = 0x1bf370u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x1bf374: 0xa14d0003
    ctx->pc = 0x1bf374u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf378: 0x912d0004
    ctx->pc = 0x1bf378u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1bf37c: 0xa14d0004
    ctx->pc = 0x1bf37cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf380: 0x912d0005
    ctx->pc = 0x1bf380u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
    // 0x1bf384: 0xa14d0005
    ctx->pc = 0x1bf384u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 5), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf388: 0x952d0006
    ctx->pc = 0x1bf388u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x1bf38c: 0xa54d0006
    ctx->pc = 0x1bf38cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 6), (uint16_t)GPR_U32(ctx, 13));
    // 0x1bf390: 0x952d0008
    ctx->pc = 0x1bf390u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1bf394: 0xa54d0008
    ctx->pc = 0x1bf394u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 8), (uint16_t)GPR_U32(ctx, 13));
    // 0x1bf398: 0x812d000a
    ctx->pc = 0x1bf398u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x1bf39c: 0xa14d000a
    ctx->pc = 0x1bf39cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 10), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf3a0: 0x912d000b
    ctx->pc = 0x1bf3a0u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 11)));
    // 0x1bf3a4: 0xa14d000b
    ctx->pc = 0x1bf3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 11), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf3a8: 0x812d000c
    ctx->pc = 0x1bf3a8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1bf3ac: 0xa14d000c
    ctx->pc = 0x1bf3acu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 12), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf3b0: 0x912d000d
    ctx->pc = 0x1bf3b0u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 13)));
    // 0x1bf3b4: 0xa14d000d
    ctx->pc = 0x1bf3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 13), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf3b8: 0x812d000e
    ctx->pc = 0x1bf3b8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 14)));
    // 0x1bf3bc: 0xa14d000e
    ctx->pc = 0x1bf3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 14), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf3c0: 0x912d000f
    ctx->pc = 0x1bf3c0u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 15)));
    // 0x1bf3c4: 0xa14d000f
    ctx->pc = 0x1bf3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 15), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf3c8: 0x912d0010
    ctx->pc = 0x1bf3c8u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1bf3cc: 0xa14d0010
    ctx->pc = 0x1bf3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 16), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf3d0: 0x812d0011
    ctx->pc = 0x1bf3d0u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 17)));
    // 0x1bf3d4: 0xa14d0011
    ctx->pc = 0x1bf3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 17), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf3d8: 0x812d0012
    ctx->pc = 0x1bf3d8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 18)));
    // 0x1bf3dc: 0xa14d0012
    ctx->pc = 0x1bf3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 18), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf3e0: 0x812d0013
    ctx->pc = 0x1bf3e0u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 19)));
    // 0x1bf3e4: 0xa14d0013
    ctx->pc = 0x1bf3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 19), (uint8_t)GPR_U32(ctx, 13));
    // 0x1bf3e8: 0x25290014
    ctx->pc = 0x1bf3e8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 20));
    // 0x1bf3ec: 0x954d0000
    ctx->pc = 0x1bf3ecu;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1bf3f0: 0x1ac6821
    ctx->pc = 0x1bf3f0u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x1bf3f4: 0xa54d0000
    ctx->pc = 0x1bf3f4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x1bf3f8: 0x254a0014
    ctx->pc = 0x1bf3f8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 20));
label_1bf3fc:
    // 0x1bf3fc: 0x916d0004
    ctx->pc = 0x1bf3fcu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1bf400: 0xad682b
    ctx->pc = 0x1bf400u;
    SET_GPR_U32(ctx, 13, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x1bf404: 0x15a0ffd5
    ctx->pc = 0x1BF404u;
    {
        const bool branch_taken_0x1bf404 = (GPR_U32(ctx, 13) != GPR_U32(ctx, 0));
        if (branch_taken_0x1bf404) {
            ctx->pc = 0x1BF35Cu;
            goto label_1bf35c;
        }
    }
    ctx->pc = 0x1BF40Cu;
label_1bf40c:
    // 0x1bf40c: 0x24c60001
    ctx->pc = 0x1bf40cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1bf410: 0x8d0d0000
    ctx->pc = 0x1bf410u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1bf414:
    // 0x1bf414: 0x8da5000c
    ctx->pc = 0x1bf414u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x1bf418: 0xa6082b
    ctx->pc = 0x1bf418u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1bf41c: 0x1020ff84
    ctx->pc = 0x1BF41Cu;
    {
        const bool branch_taken_0x1bf41c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BF420u;
        SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1bf41c) {
            ctx->pc = 0x1BF230u;
            goto label_1bf230;
        }
    }
    ctx->pc = 0x1BF424u;
    // 0x1bf424: 0x72840
    ctx->pc = 0x1bf424u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 7), 1));
    // 0x1bf428: 0xbd2821
    ctx->pc = 0x1bf428u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1bf42c: 0x94a50040
    ctx->pc = 0x1bf42cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1bf430: 0x1852821
    ctx->pc = 0x1bf430u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1bf434: 0x30acffff
    ctx->pc = 0x1bf434u;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 5), 65535));
label_1bf438:
    // 0x1bf438: 0x24e70001
    ctx->pc = 0x1bf438u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1bf43c:
    // 0x1bf43c: 0xf2282b
    ctx->pc = 0x1bf43cu;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x1bf440: 0x14a0ff74
    ctx->pc = 0x1BF440u;
    {
        const bool branch_taken_0x1bf440 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BF444u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 7), 5));
        if (branch_taken_0x1bf440) {
            ctx->pc = 0x1BF214u;
            goto label_1bf214;
        }
    }
    ctx->pc = 0x1BF448u;
    // 0x1bf448: 0x3c010032
    ctx->pc = 0x1bf448u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf44c: 0x24030010
    ctx->pc = 0x1bf44cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bf450: 0x8c246890
    ctx->pc = 0x1bf450u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 26768)));
    // 0x1bf454: 0x1442023
    ctx->pc = 0x1bf454u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1bf458: 0x3084000f
    ctx->pc = 0x1bf458u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 15));
    // 0x1bf45c: 0x642823
    ctx->pc = 0x1bf45cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bf460: 0x10a3000b
    ctx->pc = 0x1BF460u;
    {
        const bool branch_taken_0x1bf460 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1bf460) {
            ctx->pc = 0x1BF490u;
            goto label_1bf490;
        }
    }
    ctx->pc = 0x1BF468u;
    // 0x1bf468: 0x302d
    ctx->pc = 0x1bf468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf46c: 0x10000004
    ctx->pc = 0x1BF46Cu;
    {
        const bool branch_taken_0x1bf46c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BF470u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x1bf46c) {
            ctx->pc = 0x1BF480u;
            goto label_1bf480;
        }
    }
    ctx->pc = 0x1BF474u;
label_1bf474:
    // 0x1bf474: 0xa1440000
    ctx->pc = 0x1bf474u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bf478: 0x24c60001
    ctx->pc = 0x1bf478u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1bf47c: 0x254a0001
    ctx->pc = 0x1bf47cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_1bf480:
    // 0x1bf480: 0xc5182b
    ctx->pc = 0x1bf480u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1bf484: 0x0
    ctx->pc = 0x1bf484u;
    // NOP
    // 0x1bf488: 0x1460fffa
    ctx->pc = 0x1BF488u;
    {
        const bool branch_taken_0x1bf488 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1bf488) {
            ctx->pc = 0x1BF474u;
            goto label_1bf474;
        }
    }
    ctx->pc = 0x1BF490u;
label_1bf490:
    // 0x1bf490: 0x3c010032
    ctx->pc = 0x1bf490u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf494: 0x2403ffff
    ctx->pc = 0x1bf494u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bf498: 0x8c256890
    ctx->pc = 0x1bf498u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 26768)));
    // 0x1bf49c: 0x1452023
    ctx->pc = 0x1bf49cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x1bf4a0: 0x3c010032
    ctx->pc = 0x1bf4a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf4a4: 0xaca40008
    ctx->pc = 0x1bf4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1bf4a8: 0x8c256880
    ctx->pc = 0x1bf4a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 26752)));
    // 0x1bf4ac: 0x3c010032
    ctx->pc = 0x1bf4acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf4b0: 0x1452823
    ctx->pc = 0x1bf4b0u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x1bf4b4: 0x8c246888
    ctx->pc = 0x1bf4b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 26760)));
    // 0x1bf4b8: 0xac85000c
    ctx->pc = 0x1bf4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1bf4bc: 0x3c010032
    ctx->pc = 0x1bf4bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf4c0: 0x8c246888
    ctx->pc = 0x1bf4c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 26760)));
    // 0x1bf4c4: 0xac820010
    ctx->pc = 0x1bf4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1bf4c8: 0x3c010032
    ctx->pc = 0x1bf4c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf4cc: 0x8c256890
    ctx->pc = 0x1bf4ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 26768)));
    // 0x1bf4d0: 0x3c010032
    ctx->pc = 0x1bf4d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf4d4: 0x8c246880
    ctx->pc = 0x1bf4d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 26752)));
    // 0x1bf4d8: 0x3c010032
    ctx->pc = 0x1bf4d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf4dc: 0xa42023
    ctx->pc = 0x1bf4dcu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1bf4e0: 0x8c226888
    ctx->pc = 0x1bf4e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 26760)));
    // 0x1bf4e4: 0xac440014
    ctx->pc = 0x1bf4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x1bf4e8: 0x3c010032
    ctx->pc = 0x1bf4e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf4ec: 0x8c256894
    ctx->pc = 0x1bf4ecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 26772)));
    // 0x1bf4f0: 0x3c010032
    ctx->pc = 0x1bf4f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf4f4: 0x8c246880
    ctx->pc = 0x1bf4f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 26752)));
    // 0x1bf4f8: 0x3c010032
    ctx->pc = 0x1bf4f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf4fc: 0xa42023
    ctx->pc = 0x1bf4fcu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1bf500: 0x8c226888
    ctx->pc = 0x1bf500u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 26760)));
    // 0x1bf504: 0xac440018
    ctx->pc = 0x1bf504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x1bf508: 0x3c010032
    ctx->pc = 0x1bf508u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf50c: 0x8c256898
    ctx->pc = 0x1bf50cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 26776)));
    // 0x1bf510: 0x3c010032
    ctx->pc = 0x1bf510u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf514: 0x8c246880
    ctx->pc = 0x1bf514u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 26752)));
    // 0x1bf518: 0x3c010032
    ctx->pc = 0x1bf518u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf51c: 0xa42023
    ctx->pc = 0x1bf51cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1bf520: 0x8c226888
    ctx->pc = 0x1bf520u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 26760)));
    // 0x1bf524: 0xac44001c
    ctx->pc = 0x1bf524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x1bf528: 0x3c010032
    ctx->pc = 0x1bf528u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf52c: 0x8c25689c
    ctx->pc = 0x1bf52cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 26780)));
    // 0x1bf530: 0x3c010032
    ctx->pc = 0x1bf530u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf534: 0x8c246880
    ctx->pc = 0x1bf534u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 26752)));
    // 0x1bf538: 0x3c010032
    ctx->pc = 0x1bf538u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf53c: 0xa42023
    ctx->pc = 0x1bf53cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1bf540: 0x8c226888
    ctx->pc = 0x1bf540u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 26760)));
    // 0x1bf544: 0xac440020
    ctx->pc = 0x1bf544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x1bf548: 0x3c010032
    ctx->pc = 0x1bf548u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf54c: 0x8c226888
    ctx->pc = 0x1bf54cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 26760)));
    // 0x1bf550: 0xac430024
    ctx->pc = 0x1bf550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x1bf554: 0x3c010032
    ctx->pc = 0x1bf554u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf558: 0x8c226888
    ctx->pc = 0x1bf558u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 26760)));
    // 0x1bf55c: 0x8c42000c
    ctx->pc = 0x1bf55cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1bf560:
    // 0x1bf560: 0xdfbf0030
    ctx->pc = 0x1bf560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf564: 0x7bb20020
    ctx->pc = 0x1bf564u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf568: 0x7bb10010
    ctx->pc = 0x1bf568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf56c: 0x7bb00000
    ctx->pc = 0x1bf56cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf570: 0x3e00008
    ctx->pc = 0x1BF570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF574u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE75Cu: goto label_1be75c;
            case 0x1BE79Cu: goto label_1be79c;
            case 0x1BE7A4u: goto label_1be7a4;
            case 0x1BE7C0u: goto label_1be7c0;
            case 0x1BE7C8u: goto label_1be7c8;
            case 0x1BE7E4u: goto label_1be7e4;
            case 0x1BE7ECu: goto label_1be7ec;
            case 0x1BE808u: goto label_1be808;
            case 0x1BE810u: goto label_1be810;
            case 0x1BE82Cu: goto label_1be82c;
            case 0x1BE834u: goto label_1be834;
            case 0x1BE83Cu: goto label_1be83c;
            case 0x1BE990u: goto label_1be990;
            case 0x1BEA10u: goto label_1bea10;
            case 0x1BEA50u: goto label_1bea50;
            case 0x1BEA54u: goto label_1bea54;
            case 0x1BEAA8u: goto label_1beaa8;
            case 0x1BEACCu: goto label_1beacc;
            case 0x1BEB30u: goto label_1beb30;
            case 0x1BEB38u: goto label_1beb38;
            case 0x1BEB3Cu: goto label_1beb3c;
            case 0x1BEB58u: goto label_1beb58;
            case 0x1BEB5Cu: goto label_1beb5c;
            case 0x1BEB94u: goto label_1beb94;
            case 0x1BEBA0u: goto label_1beba0;
            case 0x1BEBB0u: goto label_1bebb0;
            case 0x1BEC24u: goto label_1bec24;
            case 0x1BEC64u: goto label_1bec64;
            case 0x1BEC68u: goto label_1bec68;
            case 0x1BECBCu: goto label_1becbc;
            case 0x1BECE0u: goto label_1bece0;
            case 0x1BEE3Cu: goto label_1bee3c;
            case 0x1BEE44u: goto label_1bee44;
            case 0x1BEE48u: goto label_1bee48;
            case 0x1BEE68u: goto label_1bee68;
            case 0x1BEE6Cu: goto label_1bee6c;
            case 0x1BEEA4u: goto label_1beea4;
            case 0x1BEEB0u: goto label_1beeb0;
            case 0x1BEEC0u: goto label_1beec0;
            case 0x1BEF34u: goto label_1bef34;
            case 0x1BEF74u: goto label_1bef74;
            case 0x1BEF78u: goto label_1bef78;
            case 0x1BEFCCu: goto label_1befcc;
            case 0x1BEFF4u: goto label_1beff4;
            case 0x1BF04Cu: goto label_1bf04c;
            case 0x1BF064u: goto label_1bf064;
            case 0x1BF07Cu: goto label_1bf07c;
            case 0x1BF084u: goto label_1bf084;
            case 0x1BF088u: goto label_1bf088;
            case 0x1BF0A8u: goto label_1bf0a8;
            case 0x1BF0ACu: goto label_1bf0ac;
            case 0x1BF0E4u: goto label_1bf0e4;
            case 0x1BF0F0u: goto label_1bf0f0;
            case 0x1BF100u: goto label_1bf100;
            case 0x1BF174u: goto label_1bf174;
            case 0x1BF1A8u: goto label_1bf1a8;
            case 0x1BF1ACu: goto label_1bf1ac;
            case 0x1BF1C4u: goto label_1bf1c4;
            case 0x1BF1D4u: goto label_1bf1d4;
            case 0x1BF214u: goto label_1bf214;
            case 0x1BF230u: goto label_1bf230;
            case 0x1BF264u: goto label_1bf264;
            case 0x1BF35Cu: goto label_1bf35c;
            case 0x1BF3FCu: goto label_1bf3fc;
            case 0x1BF40Cu: goto label_1bf40c;
            case 0x1BF414u: goto label_1bf414;
            case 0x1BF438u: goto label_1bf438;
            case 0x1BF43Cu: goto label_1bf43c;
            case 0x1BF474u: goto label_1bf474;
            case 0x1BF480u: goto label_1bf480;
            case 0x1BF490u: goto label_1bf490;
            case 0x1BF560u: goto label_1bf560;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BF578u;
    // 0x1bf578: 0x0
    ctx->pc = 0x1bf578u;
    // NOP
    // 0x1bf57c: 0x0
    ctx->pc = 0x1bf57cu;
    // NOP
}
