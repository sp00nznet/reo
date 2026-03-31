#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A3210
// Address: 0x1a3210 - 0x1a32b0
void sub_001A3210_0x1a3210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a3210u;

    // 0x1a3210: 0x27bdffd0
    ctx->pc = 0x1a3210u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a3214: 0xffbf0020
    ctx->pc = 0x1a3214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a3218: 0x7fb10010
    ctx->pc = 0x1a3218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a321c: 0xa0882d
    ctx->pc = 0x1a321cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3220: 0xc068d64
    ctx->pc = 0x1A3220u;
    SET_GPR_U32(ctx, 31, 0x1A3228u);
    ctx->pc = 0x1A3224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A3590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3590_0x1a3590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3228u; }
    }
    if (ctx->pc != 0x1A3228u) { return; }
    ctx->pc = 0x1A3228u;
    // 0x1a3228: 0x40802d
    ctx->pc = 0x1a3228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a322c: 0x24050002
    ctx->pc = 0x1a322cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a3230: 0xc068d68
    ctx->pc = 0x1A3230u;
    SET_GPR_U32(ctx, 31, 0x1A3238u);
    ctx->pc = 0x1A3234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35A0_0x1a35a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3238u; }
    }
    if (ctx->pc != 0x1A3238u) { return; }
    ctx->pc = 0x1A3238u;
    // 0x1a3238: 0x10400003
    ctx->pc = 0x1A3238u;
    {
        const bool branch_taken_0x1a3238 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A323Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3238) {
            ctx->pc = 0x1A3248u;
            goto label_1a3248;
        }
    }
    ctx->pc = 0x1A3240u;
    // 0x1a3240: 0x10000015
    ctx->pc = 0x1A3240u;
    {
        const bool branch_taken_0x1a3240 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3244u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3240) {
            ctx->pc = 0x1A3298u;
            goto label_1a3298;
        }
    }
    ctx->pc = 0x1A3248u;
label_1a3248:
    // 0x1a3248: 0x24050002
    ctx->pc = 0x1a3248u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a324c: 0xc068d7c
    ctx->pc = 0x1A324Cu;
    SET_GPR_U32(ctx, 31, 0x1A3254u);
    ctx->pc = 0x1A3250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3254u; }
    }
    if (ctx->pc != 0x1A3254u) { return; }
    ctx->pc = 0x1A3254u;
    // 0x1a3254: 0x14400003
    ctx->pc = 0x1A3254u;
    {
        const bool branch_taken_0x1a3254 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3254) {
            ctx->pc = 0x1A3264u;
            goto label_1a3264;
        }
    }
    ctx->pc = 0x1A325Cu;
    // 0x1a325c: 0x1000000e
    ctx->pc = 0x1A325Cu;
    {
        const bool branch_taken_0x1a325c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3260u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a325c) {
            ctx->pc = 0x1A3298u;
            goto label_1a3298;
        }
    }
    ctx->pc = 0x1A3264u;
label_1a3264:
    // 0x1a3264: 0x8c430004
    ctx->pc = 0x1a3264u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a3268: 0x71082b
    ctx->pc = 0x1a3268u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a326c: 0x10200003
    ctx->pc = 0x1A326Cu;
    {
        const bool branch_taken_0x1a326c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3270u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a326c) {
            ctx->pc = 0x1A327Cu;
            goto label_1a327c;
        }
    }
    ctx->pc = 0x1A3274u;
    // 0x1a3274: 0x10000008
    ctx->pc = 0x1A3274u;
    {
        const bool branch_taken_0x1a3274 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3278u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3274) {
            ctx->pc = 0x1A3298u;
            goto label_1a3298;
        }
    }
    ctx->pc = 0x1A327Cu;
label_1a327c:
    // 0x1a327c: 0x40202d
    ctx->pc = 0x1a327cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3280: 0xc068d7c
    ctx->pc = 0x1A3280u;
    SET_GPR_U32(ctx, 31, 0x1A3288u);
    ctx->pc = 0x1A3284u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3288u; }
    }
    if (ctx->pc != 0x1A3288u) { return; }
    ctx->pc = 0x1A3288u;
    // 0x1a3288: 0x14400003
    ctx->pc = 0x1A3288u;
    {
        const bool branch_taken_0x1a3288 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3288) {
            ctx->pc = 0x1A3298u;
            goto label_1a3298;
        }
    }
    ctx->pc = 0x1A3290u;
    // 0x1a3290: 0x10000001
    ctx->pc = 0x1A3290u;
    {
        const bool branch_taken_0x1a3290 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3294u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3290) {
            ctx->pc = 0x1A3298u;
            goto label_1a3298;
        }
    }
    ctx->pc = 0x1A3298u;
label_1a3298:
    // 0x1a3298: 0xdfbf0020
    ctx->pc = 0x1a3298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a329c: 0x7bb10010
    ctx->pc = 0x1a329cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a32a0: 0x7bb00000
    ctx->pc = 0x1a32a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a32a4: 0x3e00008
    ctx->pc = 0x1A32A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A32A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3248u: goto label_1a3248;
            case 0x1A3264u: goto label_1a3264;
            case 0x1A327Cu: goto label_1a327c;
            case 0x1A3298u: goto label_1a3298;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A32ACu;
    // 0x1a32ac: 0x0
    ctx->pc = 0x1a32acu;
    // NOP
}
