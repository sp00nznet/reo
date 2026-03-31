#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001E7318
// Address: 0x1e7318 - 0x1e73c0
void sub_001E7318_0x1e7318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1e7318u;

    // 0x1e7318: 0x27bdffe0
    ctx->pc = 0x1e7318u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e731c: 0xffbe0010
    ctx->pc = 0x1e731cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1e7320: 0xffbf0018
    ctx->pc = 0x1e7320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e7324: 0x3a0f02d
    ctx->pc = 0x1e7324u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7328: 0xafc40000
    ctx->pc = 0x1e7328u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1e732c: 0xafc50004
    ctx->pc = 0x1e732cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1e7330: 0xafc0000c
    ctx->pc = 0x1e7330u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
label_1e7334:
    // 0x1e7334: 0x8fc2000c
    ctx->pc = 0x1e7334u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e7338: 0x10400003
    ctx->pc = 0x1E7338u;
    {
        const bool branch_taken_0x1e7338 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7338) {
            ctx->pc = 0x1E7348u;
            goto label_1e7348;
        }
    }
    ctx->pc = 0x1E7340u;
    // 0x1e7340: 0x10000016
    ctx->pc = 0x1E7340u;
    {
        const bool branch_taken_0x1e7340 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7340) {
            ctx->pc = 0x1E739Cu;
            goto label_1e739c;
        }
    }
    ctx->pc = 0x1E7348u;
label_1e7348:
    // 0x1e7348: 0x8fc20004
    ctx->pc = 0x1e7348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e734c: 0x24420008
    ctx->pc = 0x1e734cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e7350: 0x27c30008
    ctx->pc = 0x1e7350u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 8));
    // 0x1e7354: 0x40202d
    ctx->pc = 0x1e7354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7358: 0x60282d
    ctx->pc = 0x1e7358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e735c: 0xc07c499
    ctx->pc = 0x1E735Cu;
    SET_GPR_U32(ctx, 31, 0x1E7364u);
    ctx->pc = 0x1F1264u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1264_0x1f1264(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7364u; }
    }
    if (ctx->pc != 0x1E7364u) { return; }
    ctx->pc = 0x1E7364u;
    // 0x1e7364: 0xafc2000c
    ctx->pc = 0x1e7364u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1e7368: 0x8fc2000c
    ctx->pc = 0x1e7368u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1e736c: 0x10400003
    ctx->pc = 0x1E736Cu;
    {
        const bool branch_taken_0x1e736c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e736c) {
            ctx->pc = 0x1E737Cu;
            goto label_1e737c;
        }
    }
    ctx->pc = 0x1E7374u;
    // 0x1e7374: 0x10000009
    ctx->pc = 0x1E7374u;
    {
        const bool branch_taken_0x1e7374 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7374) {
            ctx->pc = 0x1E739Cu;
            goto label_1e739c;
        }
    }
    ctx->pc = 0x1E737Cu;
label_1e737c:
    // 0x1e737c: 0x8fc20000
    ctx->pc = 0x1e737cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e7380: 0x8c440520
    ctx->pc = 0x1e7380u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 1312)));
    // 0x1e7384: 0x8fc50008
    ctx->pc = 0x1e7384u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e7388: 0xc07ca04
    ctx->pc = 0x1E7388u;
    SET_GPR_U32(ctx, 31, 0x1E7390u);
    ctx->pc = 0x1F2810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2810_0x1f2810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7390u; }
    }
    if (ctx->pc != 0x1E7390u) { return; }
    ctx->pc = 0x1E7390u;
    // 0x1e7390: 0xafc2000c
    ctx->pc = 0x1e7390u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1e7394: 0x1000ffe7
    ctx->pc = 0x1E7394u;
    {
        const bool branch_taken_0x1e7394 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7394) {
            ctx->pc = 0x1E7334u;
            goto label_1e7334;
        }
    }
    ctx->pc = 0x1E739Cu;
label_1e739c:
    // 0x1e739c: 0x8fc40004
    ctx->pc = 0x1e739cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e73a0: 0xc079f90
    ctx->pc = 0x1E73A0u;
    SET_GPR_U32(ctx, 31, 0x1E73A8u);
    ctx->pc = 0x1E7E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7E40_0x1e7e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E73A8u; }
    }
    if (ctx->pc != 0x1E73A8u) { return; }
    ctx->pc = 0x1E73A8u;
    // 0x1e73a8: 0x3c0e82d
    ctx->pc = 0x1e73a8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e73ac: 0xdfbe0010
    ctx->pc = 0x1e73acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e73b0: 0xdfbf0018
    ctx->pc = 0x1e73b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e73b4: 0x27bd0020
    ctx->pc = 0x1e73b4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e73b8: 0x3e00008
    ctx->pc = 0x1E73B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7334u: goto label_1e7334;
            case 0x1E7348u: goto label_1e7348;
            case 0x1E737Cu: goto label_1e737c;
            case 0x1E739Cu: goto label_1e739c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E73C0u;
}
