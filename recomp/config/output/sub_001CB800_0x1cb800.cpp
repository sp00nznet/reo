#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CB800
// Address: 0x1cb800 - 0x1cb8c0
void sub_001CB800_0x1cb800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cb800u;

label_1cb800:
    // 0x1cb800: 0x102d
    ctx->pc = 0x1cb800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb804: 0x1000000d
    ctx->pc = 0x1CB804u;
    {
        const bool branch_taken_0x1cb804 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CB808u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cb804) {
            ctx->pc = 0x1CB83Cu;
            goto label_1cb83c;
        }
    }
    ctx->pc = 0x1CB80Cu;
label_1cb80c:
    // 0x1cb80c: 0x80860000
    ctx->pc = 0x1cb80cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb810: 0x28c30030
    ctx->pc = 0x1cb810u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 48));
    // 0x1cb814: 0x14600007
    ctx->pc = 0x1CB814u;
    {
        const bool branch_taken_0x1cb814 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CB818u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 6), 58));
        if (branch_taken_0x1cb814) {
            ctx->pc = 0x1CB834u;
            goto label_1cb834;
        }
    }
    ctx->pc = 0x1CB81Cu;
    // 0x1cb81c: 0x10200005
    ctx->pc = 0x1CB81Cu;
    {
        const bool branch_taken_0x1cb81c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CB820u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4294967248));
        if (branch_taken_0x1cb81c) {
            ctx->pc = 0x1CB834u;
            goto label_1cb834;
        }
    }
    ctx->pc = 0x1CB824u;
    // 0x1cb824: 0x23080
    ctx->pc = 0x1cb824u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cb828: 0xc21021
    ctx->pc = 0x1cb828u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cb82c: 0x21040
    ctx->pc = 0x1cb82cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1cb830: 0x431021
    ctx->pc = 0x1cb830u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb834:
    // 0x1cb834: 0x24840001
    ctx->pc = 0x1cb834u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cb838: 0x24e70001
    ctx->pc = 0x1cb838u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1cb83c:
    // 0x1cb83c: 0xe5182a
    ctx->pc = 0x1cb83cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 5)));
    // 0x1cb840: 0x1460fff2
    ctx->pc = 0x1CB840u;
    {
        const bool branch_taken_0x1cb840 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cb840) {
            ctx->pc = 0x1CB80Cu;
            goto label_1cb80c;
        }
    }
    ctx->pc = 0x1CB848u;
    // 0x1cb848: 0x3e00008
    ctx->pc = 0x1CB848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB800u: goto label_1cb800;
            case 0x1CB80Cu: goto label_1cb80c;
            case 0x1CB834u: goto label_1cb834;
            case 0x1CB83Cu: goto label_1cb83c;
            case 0x1CB86Cu: goto label_1cb86c;
            case 0x1CB874u: goto label_1cb874;
            case 0x1CB880u: goto label_1cb880;
            case 0x1CB88Cu: goto label_1cb88c;
            case 0x1CB8B4u: goto label_1cb8b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CB850u;
    // 0x1cb850: 0x27bdfff0
    ctx->pc = 0x1cb850u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb854: 0x80502d
    ctx->pc = 0x1cb854u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb858: 0xffbf0000
    ctx->pc = 0x1cb858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb85c: 0x11400003
    ctx->pc = 0x1CB85Cu;
    {
        const bool branch_taken_0x1cb85c = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CB860u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cb85c) {
            ctx->pc = 0x1CB86Cu;
            goto label_1cb86c;
        }
    }
    ctx->pc = 0x1CB864u;
    // 0x1cb864: 0x15200003
    ctx->pc = 0x1CB864u;
    {
        const bool branch_taken_0x1cb864 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CB868u;
        SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 6), 65535));
        if (branch_taken_0x1cb864) {
            ctx->pc = 0x1CB874u;
            goto label_1cb874;
        }
    }
    ctx->pc = 0x1CB86Cu;
label_1cb86c:
    // 0x1cb86c: 0x10000011
    ctx->pc = 0x1CB86Cu;
    {
        const bool branch_taken_0x1cb86c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CB870u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1cb86c) {
            ctx->pc = 0x1CB8B4u;
            goto label_1cb8b4;
        }
    }
    ctx->pc = 0x1CB874u;
label_1cb874:
    // 0x1cb874: 0x120202d
    ctx->pc = 0x1cb874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb878: 0xc072e00
    ctx->pc = 0x1CB878u;
    SET_GPR_U32(ctx, 31, 0x1CB880u);
    ctx->pc = 0x1CB87Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1CB800u;
    goto label_1cb800;
    ctx->pc = 0x1CB880u;
label_1cb880:
    // 0x1cb880: 0x25240004
    ctx->pc = 0x1cb880u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 9), 4));
    // 0x1cb884: 0xc072e00
    ctx->pc = 0x1CB884u;
    SET_GPR_U32(ctx, 31, 0x1CB88Cu);
    ctx->pc = 0x1CB888u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CB800u;
    goto label_1cb800;
    ctx->pc = 0x1CB88Cu;
label_1cb88c:
    // 0x1cb88c: 0x1024021
    ctx->pc = 0x1cb88cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1cb890: 0x120282d
    ctx->pc = 0x1cb890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb894: 0x140202d
    ctx->pc = 0x1cb894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb898: 0xc072dec
    ctx->pc = 0x1CB898u;
    SET_GPR_U32(ctx, 31, 0x1CB8A0u);
    ctx->pc = 0x1CB89Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1CB7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB7B0_0x1cb7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB8A0u; }
    }
    if (ctx->pc != 0x1CB8A0u) { return; }
    ctx->pc = 0x1CB8A0u;
    // 0x1cb8a0: 0x100282d
    ctx->pc = 0x1cb8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8a4: 0xc072dec
    ctx->pc = 0x1CB8A4u;
    SET_GPR_U32(ctx, 31, 0x1CB8ACu);
    ctx->pc = 0x1CB8A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 10), 5));
    ctx->pc = 0x1CB7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB7B0_0x1cb7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB8ACu; }
    }
    if (ctx->pc != 0x1CB8ACu) { return; }
    ctx->pc = 0x1CB8ACu;
    // 0x1cb8ac: 0xa140000a
    ctx->pc = 0x1cb8acu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb8b0: 0x102d
    ctx->pc = 0x1cb8b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb8b4:
    // 0x1cb8b4: 0xdfbf0000
    ctx->pc = 0x1cb8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8b8: 0x3e00008
    ctx->pc = 0x1CB8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB8BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB800u: goto label_1cb800;
            case 0x1CB80Cu: goto label_1cb80c;
            case 0x1CB834u: goto label_1cb834;
            case 0x1CB83Cu: goto label_1cb83c;
            case 0x1CB86Cu: goto label_1cb86c;
            case 0x1CB874u: goto label_1cb874;
            case 0x1CB880u: goto label_1cb880;
            case 0x1CB88Cu: goto label_1cb88c;
            case 0x1CB8B4u: goto label_1cb8b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CB8C0u;
}
