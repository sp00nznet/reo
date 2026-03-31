#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00166720
// Address: 0x166720 - 0x166880
void sub_00166720_0x166720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x166720u;

    // 0x166720: 0x27bdffb0
    ctx->pc = 0x166720u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x166724: 0xffb00020
    ctx->pc = 0x166724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x166728: 0xc0802d
    ctx->pc = 0x166728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16672c: 0xffb10028
    ctx->pc = 0x16672cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x166730: 0x26110008
    ctx->pc = 0x166730u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 8));
    // 0x166734: 0xffb20030
    ctx->pc = 0x166734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x166738: 0xa0902d
    ctx->pc = 0x166738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16673c: 0xffb30038
    ctx->pc = 0x16673cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x166740: 0x80982d
    ctx->pc = 0x166740u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166744: 0xffb40040
    ctx->pc = 0x166744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x166748: 0x220282d
    ctx->pc = 0x166748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16674c: 0xffbf0048
    ctx->pc = 0x16674cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x166750: 0x3a0202d
    ctx->pc = 0x166750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166754: 0xc059a20
    ctx->pc = 0x166754u;
    SET_GPR_U32(ctx, 31, 0x16675Cu);
    ctx->pc = 0x166758u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x166880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166880_0x166880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16675Cu; }
    }
    if (ctx->pc != 0x16675Cu) { return; }
    ctx->pc = 0x16675Cu;
    // 0x16675c: 0x8e230000
    ctx->pc = 0x16675cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x166760: 0x8e020028
    ctx->pc = 0x166760u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x166764: 0x3a0282d
    ctx->pc = 0x166764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166768: 0x382d
    ctx->pc = 0x166768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16676c: 0x240202d
    ctx->pc = 0x16676cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166770: 0x62001a
    ctx->pc = 0x166770u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x166774: 0x220302d
    ctx->pc = 0x166774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166778: 0x50400001
    ctx->pc = 0x166778u;
    {
        const bool branch_taken_0x166778 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x166778) {
            ctx->pc = 0x16677Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x166780u;
            goto label_166780;
        }
    }
    ctx->pc = 0x166780u;
label_166780:
    // 0x166780: 0x4010
    ctx->pc = 0x166780u;
    SET_GPR_U32(ctx, 8, ctx->hi);
    // 0x166784: 0xc059a30
    ctx->pc = 0x166784u;
    SET_GPR_U32(ctx, 31, 0x16678Cu);
    ctx->pc = 0x1668C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001668C0_0x1668c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16678Cu; }
    }
    if (ctx->pc != 0x16678Cu) { return; }
    ctx->pc = 0x16678Cu;
    // 0x16678c: 0x240202d
    ctx->pc = 0x16678cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166790: 0x3a0282d
    ctx->pc = 0x166790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166794: 0x220302d
    ctx->pc = 0x166794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166798: 0x24070001
    ctx->pc = 0x166798u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16679c: 0x24080800
    ctx->pc = 0x16679cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1667a0: 0xc059a30
    ctx->pc = 0x1667A0u;
    SET_GPR_U32(ctx, 31, 0x1667A8u);
    ctx->pc = 0x1667A4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1668C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001668C0_0x1668c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1667A8u; }
    }
    if (ctx->pc != 0x1667A8u) { return; }
    ctx->pc = 0x1667A8u;
    // 0x1667a8: 0x3a0282d
    ctx->pc = 0x1667a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1667ac: 0x240202d
    ctx->pc = 0x1667acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1667b0: 0x220302d
    ctx->pc = 0x1667b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1667b4: 0x24070002
    ctx->pc = 0x1667b4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1667b8: 0x402d
    ctx->pc = 0x1667b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1667bc: 0xc059a30
    ctx->pc = 0x1667BCu;
    SET_GPR_U32(ctx, 31, 0x1667C4u);
    ctx->pc = 0x1667C0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1668C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001668C0_0x1668c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1667C4u; }
    }
    if (ctx->pc != 0x1667C4u) { return; }
    ctx->pc = 0x1667C4u;
    // 0x1667c4: 0x3c05ff00
    ctx->pc = 0x1667c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1667c8: 0x16000005
    ctx->pc = 0x1667C8u;
    {
        const bool branch_taken_0x1667c8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1667CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1667c8) {
            ctx->pc = 0x1667E0u;
            goto label_1667e0;
        }
    }
    ctx->pc = 0x1667D0u;
    // 0x1667d0: 0x16800003
    ctx->pc = 0x1667D0u;
    {
        const bool branch_taken_0x1667d0 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        if (branch_taken_0x1667d0) {
            ctx->pc = 0x1667E0u;
            goto label_1667e0;
        }
    }
    ctx->pc = 0x1667D8u;
    // 0x1667d8: 0x10400005
    ctx->pc = 0x1667D8u;
    {
        const bool branch_taken_0x1667d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1667DCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1667d8) {
            ctx->pc = 0x1667F0u;
            goto label_1667f0;
        }
    }
    ctx->pc = 0x1667E0u;
label_1667e0:
    // 0x1667e0: 0xc05a704
    ctx->pc = 0x1667E0u;
    SET_GPR_U32(ctx, 31, 0x1667E8u);
    ctx->pc = 0x1667E4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1034));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1667E8u; }
    }
    if (ctx->pc != 0x1667E8u) { return; }
    ctx->pc = 0x1667E8u;
    // 0x1667e8: 0x1000001d
    ctx->pc = 0x1667E8u;
    {
        const bool branch_taken_0x1667e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1667ECu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1667e8) {
            ctx->pc = 0x166860u;
            goto label_166860;
        }
    }
    ctx->pc = 0x1667F0u;
label_1667f0:
    // 0x1667f0: 0x24080003
    ctx->pc = 0x1667f0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1667f4: 0x220382d
    ctx->pc = 0x1667f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1667f8: 0x260202d
    ctx->pc = 0x1667f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1667fc: 0xc059aa2
    ctx->pc = 0x1667FCu;
    SET_GPR_U32(ctx, 31, 0x166804u);
    ctx->pc = 0x166800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x166A88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166A88_0x166a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166804u; }
    }
    if (ctx->pc != 0x166804u) { return; }
    ctx->pc = 0x166804u;
    // 0x166804: 0x240202d
    ctx->pc = 0x166804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166808: 0x3a0282d
    ctx->pc = 0x166808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16680c: 0x220302d
    ctx->pc = 0x16680cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166810: 0xc059ad0
    ctx->pc = 0x166810u;
    SET_GPR_U32(ctx, 31, 0x166818u);
    ctx->pc = 0x166814u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x166B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166B40_0x166b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166818u; }
    }
    if (ctx->pc != 0x166818u) { return; }
    ctx->pc = 0x166818u;
    // 0x166818: 0x260202d
    ctx->pc = 0x166818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16681c: 0x3a0302d
    ctx->pc = 0x16681cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166820: 0x24080005
    ctx->pc = 0x166820u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 5));
    // 0x166824: 0x240282d
    ctx->pc = 0x166824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166828: 0xc059aa2
    ctx->pc = 0x166828u;
    SET_GPR_U32(ctx, 31, 0x166830u);
    ctx->pc = 0x16682Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x166A88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166A88_0x166a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166830u; }
    }
    if (ctx->pc != 0x166830u) { return; }
    ctx->pc = 0x166830u;
    // 0x166830: 0x240202d
    ctx->pc = 0x166830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166834: 0x3a0282d
    ctx->pc = 0x166834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166838: 0x220302d
    ctx->pc = 0x166838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16683c: 0xc059ad0
    ctx->pc = 0x16683Cu;
    SET_GPR_U32(ctx, 31, 0x166844u);
    ctx->pc = 0x166840u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x166B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166B40_0x166b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166844u; }
    }
    if (ctx->pc != 0x166844u) { return; }
    ctx->pc = 0x166844u;
    // 0x166844: 0x240202d
    ctx->pc = 0x166844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166848: 0x3a0282d
    ctx->pc = 0x166848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16684c: 0x220302d
    ctx->pc = 0x16684cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166850: 0xc059b1a
    ctx->pc = 0x166850u;
    SET_GPR_U32(ctx, 31, 0x166858u);
    ctx->pc = 0x166854u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x166C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166C68_0x166c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166858u; }
    }
    if (ctx->pc != 0x166858u) { return; }
    ctx->pc = 0x166858u;
    // 0x166858: 0x102d
    ctx->pc = 0x166858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16685c: 0xdfb00020
    ctx->pc = 0x16685cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_166860:
    // 0x166860: 0xdfb10028
    ctx->pc = 0x166860u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x166864: 0xdfb20030
    ctx->pc = 0x166864u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166868: 0xdfb30038
    ctx->pc = 0x166868u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16686c: 0xdfb40040
    ctx->pc = 0x16686cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166870: 0xdfbf0048
    ctx->pc = 0x166870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x166874: 0x3e00008
    ctx->pc = 0x166874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166878u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166780u: goto label_166780;
            case 0x1667E0u: goto label_1667e0;
            case 0x1667F0u: goto label_1667f0;
            case 0x166860u: goto label_166860;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16687Cu;
    // 0x16687c: 0x0
    ctx->pc = 0x16687cu;
    // NOP
}
