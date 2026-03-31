#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AE2E0
// Address: 0x1ae2e0 - 0x1ae3d0
void sub_001AE2E0_0x1ae2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ae2e0u;

    // 0x1ae2e0: 0x27bdfff0
    ctx->pc = 0x1ae2e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ae2e4: 0x24030004
    ctx->pc = 0x1ae2e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ae2e8: 0xffbf0000
    ctx->pc = 0x1ae2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae2ec: 0x10a3002d
    ctx->pc = 0x1AE2ECu;
    {
        const bool branch_taken_0x1ae2ec = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1AE2F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ae2ec) {
            ctx->pc = 0x1AE3A4u;
            goto label_1ae3a4;
        }
    }
    ctx->pc = 0x1AE2F4u;
    // 0x1ae2f4: 0x24030003
    ctx->pc = 0x1ae2f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae2f8: 0x10a30022
    ctx->pc = 0x1AE2F8u;
    {
        const bool branch_taken_0x1ae2f8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1AE2FCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1ae2f8) {
            ctx->pc = 0x1AE384u;
            goto label_1ae384;
        }
    }
    ctx->pc = 0x1AE300u;
    // 0x1ae300: 0x10a30017
    ctx->pc = 0x1AE300u;
    {
        const bool branch_taken_0x1ae300 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ae300) {
            ctx->pc = 0x1AE360u;
            goto label_1ae360;
        }
    }
    ctx->pc = 0x1AE308u;
    // 0x1ae308: 0x24030001
    ctx->pc = 0x1ae308u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae30c: 0x10a3000d
    ctx->pc = 0x1AE30Cu;
    {
        const bool branch_taken_0x1ae30c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1AE310u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x1ae30c) {
            ctx->pc = 0x1AE344u;
            goto label_1ae344;
        }
    }
    ctx->pc = 0x1AE314u;
    // 0x1ae314: 0x10a00003
    ctx->pc = 0x1AE314u;
    {
        const bool branch_taken_0x1ae314 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ae314) {
            ctx->pc = 0x1AE324u;
            goto label_1ae324;
        }
    }
    ctx->pc = 0x1AE31Cu;
    // 0x1ae31c: 0x10000029
    ctx->pc = 0x1AE31Cu;
    {
        const bool branch_taken_0x1ae31c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE320u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1ae31c) {
            ctx->pc = 0x1AE3C4u;
            goto label_1ae3c4;
        }
    }
    ctx->pc = 0x1AE324u;
label_1ae324:
    // 0x1ae324: 0x3c02002c
    ctx->pc = 0x1ae324u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1ae328: 0x41880
    ctx->pc = 0x1ae328u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ae32c: 0x24428dc8
    ctx->pc = 0x1ae32cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294938056));
    // 0x1ae330: 0x431021
    ctx->pc = 0x1ae330u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae334: 0xc04c7be
    ctx->pc = 0x1AE334u;
    SET_GPR_U32(ctx, 31, 0x1AE33Cu);
    ctx->pc = 0x1AE338u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x131EF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131EF8_0x131ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE33Cu; }
    }
    if (ctx->pc != 0x1AE33Cu) { return; }
    ctx->pc = 0x1AE33Cu;
    // 0x1ae33c: 0x10000020
    ctx->pc = 0x1AE33Cu;
    {
        const bool branch_taken_0x1ae33c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ae33c) {
            ctx->pc = 0x1AE3C0u;
            goto label_1ae3c0;
        }
    }
    ctx->pc = 0x1AE344u;
label_1ae344:
    // 0x1ae344: 0x3c02002c
    ctx->pc = 0x1ae344u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1ae348: 0x641821
    ctx->pc = 0x1ae348u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ae34c: 0x24428d74
    ctx->pc = 0x1ae34cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937972));
    // 0x1ae350: 0x318c0
    ctx->pc = 0x1ae350u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ae354: 0x431021
    ctx->pc = 0x1ae354u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae358: 0x10000019
    ctx->pc = 0x1AE358u;
    {
        const bool branch_taken_0x1ae358 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE35Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1ae358) {
            ctx->pc = 0x1AE3C0u;
            goto label_1ae3c0;
        }
    }
    ctx->pc = 0x1AE360u;
label_1ae360:
    // 0x1ae360: 0x3c02002c
    ctx->pc = 0x1ae360u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1ae364: 0x41880
    ctx->pc = 0x1ae364u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ae368: 0x24428dc8
    ctx->pc = 0x1ae368u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294938056));
    // 0x1ae36c: 0x431021
    ctx->pc = 0x1ae36cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae370: 0x8c440000
    ctx->pc = 0x1ae370u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae374: 0xc04c9bc
    ctx->pc = 0x1AE374u;
    SET_GPR_U32(ctx, 31, 0x1AE37Cu);
    ctx->pc = 0x1AE378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1326F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001326F0_0x1326f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE37Cu; }
    }
    if (ctx->pc != 0x1AE37Cu) { return; }
    ctx->pc = 0x1AE37Cu;
    // 0x1ae37c: 0x10000010
    ctx->pc = 0x1AE37Cu;
    {
        const bool branch_taken_0x1ae37c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ae37c) {
            ctx->pc = 0x1AE3C0u;
            goto label_1ae3c0;
        }
    }
    ctx->pc = 0x1AE384u;
label_1ae384:
    // 0x1ae384: 0x3c02002c
    ctx->pc = 0x1ae384u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1ae388: 0x41880
    ctx->pc = 0x1ae388u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ae38c: 0x24428dc8
    ctx->pc = 0x1ae38cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294938056));
    // 0x1ae390: 0x431021
    ctx->pc = 0x1ae390u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae394: 0xc04cb3c
    ctx->pc = 0x1AE394u;
    SET_GPR_U32(ctx, 31, 0x1AE39Cu);
    ctx->pc = 0x1AE398u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x132CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00132CF0_0x132cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE39Cu; }
    }
    if (ctx->pc != 0x1AE39Cu) { return; }
    ctx->pc = 0x1AE39Cu;
    // 0x1ae39c: 0x10000008
    ctx->pc = 0x1AE39Cu;
    {
        const bool branch_taken_0x1ae39c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ae39c) {
            ctx->pc = 0x1AE3C0u;
            goto label_1ae3c0;
        }
    }
    ctx->pc = 0x1AE3A4u;
label_1ae3a4:
    // 0x1ae3a4: 0x41840
    ctx->pc = 0x1ae3a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ae3a8: 0x3c02002c
    ctx->pc = 0x1ae3a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1ae3ac: 0x641821
    ctx->pc = 0x1ae3acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ae3b0: 0x24428d70
    ctx->pc = 0x1ae3b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937968));
    // 0x1ae3b4: 0x318c0
    ctx->pc = 0x1ae3b4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ae3b8: 0x431021
    ctx->pc = 0x1ae3b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae3bc: 0x80420000
    ctx->pc = 0x1ae3bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ae3c0:
    // 0x1ae3c0: 0xdfbf0000
    ctx->pc = 0x1ae3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae3c4:
    // 0x1ae3c4: 0x3e00008
    ctx->pc = 0x1AE3C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE3C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE324u: goto label_1ae324;
            case 0x1AE344u: goto label_1ae344;
            case 0x1AE360u: goto label_1ae360;
            case 0x1AE384u: goto label_1ae384;
            case 0x1AE3A4u: goto label_1ae3a4;
            case 0x1AE3C0u: goto label_1ae3c0;
            case 0x1AE3C4u: goto label_1ae3c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AE3CCu;
    // 0x1ae3cc: 0x0
    ctx->pc = 0x1ae3ccu;
    // NOP
}
