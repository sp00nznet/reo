#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C2360
// Address: 0x1c2360 - 0x1c23e0
void sub_001C2360_0x1c2360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c2360u;

    // 0x1c2360: 0x27bdfff0
    ctx->pc = 0x1c2360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2364: 0x80182d
    ctx->pc = 0x1c2364u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2368: 0xffbf0000
    ctx->pc = 0x1c2368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c236c: 0x24640001
    ctx->pc = 0x1c236cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c2370: 0x90650000
    ctx->pc = 0x1c2370u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2374: 0x24030043
    ctx->pc = 0x1c2374u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 67));
    // 0x1c2378: 0x10a30003
    ctx->pc = 0x1C2378u;
    {
        const bool branch_taken_0x1c2378 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c2378) {
            ctx->pc = 0x1C2388u;
            goto label_1c2388;
        }
    }
    ctx->pc = 0x1C2380u;
    // 0x1c2380: 0x10000012
    ctx->pc = 0x1C2380u;
    {
        const bool branch_taken_0x1c2380 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2384u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1c2380) {
            ctx->pc = 0x1C23CCu;
            goto label_1c23cc;
        }
    }
    ctx->pc = 0x1C2388u;
label_1c2388:
    // 0x1c2388: 0x90830000
    ctx->pc = 0x1c2388u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c238c: 0x1060000e
    ctx->pc = 0x1C238Cu;
    {
        const bool branch_taken_0x1c238c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c238c) {
            ctx->pc = 0x1C23C8u;
            goto label_1c23c8;
        }
    }
    ctx->pc = 0x1C2394u;
    // 0x1c2394: 0x2463ffd0
    ctx->pc = 0x1c2394u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1c2398: 0x306300ff
    ctx->pc = 0x1c2398u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x1c239c: 0x28610008
    ctx->pc = 0x1c239cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 8));
    // 0x1c23a0: 0x10200009
    ctx->pc = 0x1C23A0u;
    {
        const bool branch_taken_0x1c23a0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c23a0) {
            ctx->pc = 0x1C23C8u;
            goto label_1c23c8;
        }
    }
    ctx->pc = 0x1C23A8u;
    // 0x1c23a8: 0x3c020023
    ctx->pc = 0x1c23a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1c23ac: 0x31880
    ctx->pc = 0x1c23acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c23b0: 0x24425f30
    ctx->pc = 0x1c23b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 24368));
    // 0x1c23b4: 0x431821
    ctx->pc = 0x1c23b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c23b8: 0x8c630000
    ctx->pc = 0x1c23b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c23bc: 0x3c028000
    ctx->pc = 0x1c23bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x1c23c0: 0xc06d594
    ctx->pc = 0x1C23C0u;
    SET_GPR_U32(ctx, 31, 0x1C23C8u);
    ctx->pc = 0x1C23C4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B5650u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5650_0x1b5650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C23C8u; }
    }
    if (ctx->pc != 0x1C23C8u) { return; }
    ctx->pc = 0x1C23C8u;
label_1c23c8:
    // 0x1c23c8: 0xdfbf0000
    ctx->pc = 0x1c23c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c23cc:
    // 0x1c23cc: 0x3e00008
    ctx->pc = 0x1C23CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C23D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2388u: goto label_1c2388;
            case 0x1C23C8u: goto label_1c23c8;
            case 0x1C23CCu: goto label_1c23cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C23D4u;
    // 0x1c23d4: 0x0
    ctx->pc = 0x1c23d4u;
    // NOP
    // 0x1c23d8: 0x0
    ctx->pc = 0x1c23d8u;
    // NOP
    // 0x1c23dc: 0x0
    ctx->pc = 0x1c23dcu;
    // NOP
}
