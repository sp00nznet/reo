#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1a1270
// Address: 0x1a1270 - 0x1a1330
void entry_1a1270_0x1a1330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a1270u;

    // 0x1a1270: 0x27bdffd0
    ctx->pc = 0x1a1270u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a1274: 0xffbf0020
    ctx->pc = 0x1a1274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a1278: 0x7fb10010
    ctx->pc = 0x1a1278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a127c: 0x7fb00000
    ctx->pc = 0x1a127cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a1280: 0x80882d
    ctx->pc = 0x1a1280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1284: 0x8c830018
    ctx->pc = 0x1a1284u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1a1288: 0xa31021
    ctx->pc = 0x1a1288u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a128c: 0x2463ffff
    ctx->pc = 0x1a128cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a1290: 0x2442ffff
    ctx->pc = 0x1a1290u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a1294: 0x601827
    ctx->pc = 0x1a1294u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
    // 0x1a1298: 0xc06856c
    ctx->pc = 0x1A1298u;
    SET_GPR_U32(ctx, 31, 0x1A12A0u);
    ctx->pc = 0x1A129Cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1A15B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A15B0_0x1a15b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A12A0u; }
    }
    if (ctx->pc != 0x1A12A0u) { return; }
    ctx->pc = 0x1A12A0u;
    // 0x1a12a0: 0x50082b
    ctx->pc = 0x1a12a0u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a12a4: 0x10200010
    ctx->pc = 0x1A12A4u;
    {
        const bool branch_taken_0x1a12a4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A12A8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a12a4) {
            ctx->pc = 0x1A12E8u;
            goto label_1a12e8;
        }
    }
    ctx->pc = 0x1A12ACu;
    // 0x1a12ac: 0xc0684fc
    ctx->pc = 0x1A12ACu;
    SET_GPR_U32(ctx, 31, 0x1A12B4u);
    ctx->pc = 0x1A13F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A13F0_0x1a13f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A12B4u; }
    }
    if (ctx->pc != 0x1A12B4u) { return; }
    ctx->pc = 0x1A12B4u;
    // 0x1a12b4: 0x8e220018
    ctx->pc = 0x1a12b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1a12b8: 0x220202d
    ctx->pc = 0x1a12b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a12bc: 0x2443ffff
    ctx->pc = 0x1a12bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a12c0: 0x2021021
    ctx->pc = 0x1a12c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a12c4: 0x601827
    ctx->pc = 0x1a12c4u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
    // 0x1a12c8: 0x2442ffff
    ctx->pc = 0x1a12c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a12cc: 0xc06856c
    ctx->pc = 0x1A12CCu;
    SET_GPR_U32(ctx, 31, 0x1A12D4u);
    ctx->pc = 0x1A12D0u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1A15B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A15B0_0x1a15b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A12D4u; }
    }
    if (ctx->pc != 0x1A12D4u) { return; }
    ctx->pc = 0x1A12D4u;
    // 0x1a12d4: 0x50082b
    ctx->pc = 0x1a12d4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a12d8: 0x10200003
    ctx->pc = 0x1A12D8u;
    {
        const bool branch_taken_0x1a12d8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a12d8) {
            ctx->pc = 0x1A12E8u;
            goto label_1a12e8;
        }
    }
    ctx->pc = 0x1A12E0u;
    // 0x1a12e0: 0x1000000c
    ctx->pc = 0x1A12E0u;
    {
        const bool branch_taken_0x1a12e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A12E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a12e0) {
            ctx->pc = 0x1A1314u;
            goto label_1a1314;
        }
    }
    ctx->pc = 0x1A12E8u;
label_1a12e8:
    // 0x1a12e8: 0x8e22000c
    ctx->pc = 0x1a12e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a12ec: 0x10400006
    ctx->pc = 0x1A12ECu;
    {
        const bool branch_taken_0x1a12ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a12ec) {
            ctx->pc = 0x1A1308u;
            goto label_1a1308;
        }
    }
    ctx->pc = 0x1A12F4u;
    // 0x1a12f4: 0x8e230014
    ctx->pc = 0x1a12f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1a12f8: 0x8e220004
    ctx->pc = 0x1a12f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a12fc: 0x621021
    ctx->pc = 0x1a12fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1300: 0x10000004
    ctx->pc = 0x1A1300u;
    {
        const bool branch_taken_0x1a1300 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1304u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        if (branch_taken_0x1a1300) {
            ctx->pc = 0x1A1314u;
            goto label_1a1314;
        }
    }
    ctx->pc = 0x1A1308u;
label_1a1308:
    // 0x1a1308: 0x8e230014
    ctx->pc = 0x1a1308u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1a130c: 0x8e220004
    ctx->pc = 0x1a130cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a1310: 0x621023
    ctx->pc = 0x1a1310u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a1314:
    // 0x1a1314: 0xdfbf0020
    ctx->pc = 0x1a1314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1318: 0x7bb10010
    ctx->pc = 0x1a1318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a131c: 0x7bb00000
    ctx->pc = 0x1a131cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1320: 0x3e00008
    ctx->pc = 0x1A1320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1324u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A12E8u: goto label_1a12e8;
            case 0x1A1308u: goto label_1a1308;
            case 0x1A1314u: goto label_1a1314;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1328u;
    // 0x1a1328: 0x0
    ctx->pc = 0x1a1328u;
    // NOP
    // 0x1a132c: 0x0
    ctx->pc = 0x1a132cu;
    // NOP
}
