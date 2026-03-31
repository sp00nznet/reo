#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00137FE8
// Address: 0x137fe8 - 0x1380c8
void sub_00137FE8_0x137fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x137fe8u;

    // 0x137fe8: 0x27bdfff0
    ctx->pc = 0x137fe8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x137fec: 0xffb00000
    ctx->pc = 0x137fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x137ff0: 0xffbf0008
    ctx->pc = 0x137ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x137ff4: 0xc04e082
    ctx->pc = 0x137FF4u;
    SET_GPR_U32(ctx, 31, 0x137FFCu);
    ctx->pc = 0x137FF8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8960));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137FFCu; }
    }
    if (ctx->pc != 0x137FFCu) { return; }
    ctx->pc = 0x137FFCu;
    // 0x137ffc: 0xc04035e
    ctx->pc = 0x137FFCu;
    SET_GPR_U32(ctx, 31, 0x138004u);
    ctx->pc = 0x138000u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x100D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00100D78_0x100d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138004u; }
    }
    if (ctx->pc != 0x138004u) { return; }
    ctx->pc = 0x138004u;
    // 0x138004: 0x24042301
    ctx->pc = 0x138004u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8961));
    // 0x138008: 0xc04e082
    ctx->pc = 0x138008u;
    SET_GPR_U32(ctx, 31, 0x138010u);
    ctx->pc = 0x13800Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138010u; }
    }
    if (ctx->pc != 0x138010u) { return; }
    ctx->pc = 0x138010u;
    // 0x138010: 0xdfbf0008
    ctx->pc = 0x138010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x138014: 0x200102d
    ctx->pc = 0x138014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138018: 0xdfb00000
    ctx->pc = 0x138018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13801c: 0x3e00008
    ctx->pc = 0x13801Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138020u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138080u: goto label_138080;
            case 0x1380A8u: goto label_1380a8;
            case 0x1380B0u: goto label_1380b0;
            case 0x1380B4u: goto label_1380b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x138024u;
    // 0x138024: 0x0
    ctx->pc = 0x138024u;
    // NOP
    // 0x138028: 0x27bdffe0
    ctx->pc = 0x138028u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13802c: 0x3c020022
    ctx->pc = 0x13802cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x138030: 0xffb00010
    ctx->pc = 0x138030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x138034: 0x2450bb88
    ctx->pc = 0x138034u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294949768));
    // 0x138038: 0x82030002
    ctx->pc = 0x138038u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x13803c: 0x24040002
    ctx->pc = 0x13803cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x138040: 0x1464001b
    ctx->pc = 0x138040u;
    {
        const bool branch_taken_0x138040 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x138044u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x138040) {
            ctx->pc = 0x1380B0u;
            goto label_1380b0;
        }
    }
    ctx->pc = 0x138048u;
    // 0x138048: 0xc0505b4
    ctx->pc = 0x138048u;
    SET_GPR_U32(ctx, 31, 0x138050u);
    ctx->pc = 0x1416D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001416D0_0x1416d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138050u; }
    }
    if (ctx->pc != 0x138050u) { return; }
    ctx->pc = 0x138050u;
    // 0x138050: 0xc04e082
    ctx->pc = 0x138050u;
    SET_GPR_U32(ctx, 31, 0x138058u);
    ctx->pc = 0x138054u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9216));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138058u; }
    }
    if (ctx->pc != 0x138058u) { return; }
    ctx->pc = 0x138058u;
    // 0x138058: 0x24050001
    ctx->pc = 0x138058u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13805c: 0x8e040030
    ctx->pc = 0x13805cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x138060: 0xc04e128
    ctx->pc = 0x138060u;
    SET_GPR_U32(ctx, 31, 0x138068u);
    ctx->pc = 0x138064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1384A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001384A0_0x1384a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138068u; }
    }
    if (ctx->pc != 0x138068u) { return; }
    ctx->pc = 0x138068u;
    // 0x138068: 0x4410005
    ctx->pc = 0x138068u;
    {
        const bool branch_taken_0x138068 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x13806Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9218));
        if (branch_taken_0x138068) {
            ctx->pc = 0x138080u;
            goto label_138080;
        }
    }
    ctx->pc = 0x138070u;
    // 0x138070: 0xc04e082
    ctx->pc = 0x138070u;
    SET_GPR_U32(ctx, 31, 0x138078u);
    ctx->pc = 0x138074u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9217));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138078u; }
    }
    if (ctx->pc != 0x138078u) { return; }
    ctx->pc = 0x138078u;
    // 0x138078: 0x1000000b
    ctx->pc = 0x138078u;
    {
        const bool branch_taken_0x138078 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x138078) {
            ctx->pc = 0x1380A8u;
            goto label_1380a8;
        }
    }
    ctx->pc = 0x138080u;
label_138080:
    // 0x138080: 0xc04e082
    ctx->pc = 0x138080u;
    SET_GPR_U32(ctx, 31, 0x138088u);
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138088u; }
    }
    if (ctx->pc != 0x138088u) { return; }
    ctx->pc = 0x138088u;
    // 0x138088: 0x8fa20000
    ctx->pc = 0x138088u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13808c: 0x10400006
    ctx->pc = 0x13808Cu;
    {
        const bool branch_taken_0x13808c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x13808c) {
            ctx->pc = 0x1380A8u;
            goto label_1380a8;
        }
    }
    ctx->pc = 0x138094u;
    // 0x138094: 0xc0505ba
    ctx->pc = 0x138094u;
    SET_GPR_U32(ctx, 31, 0x13809Cu);
    ctx->pc = 0x1416E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001416E8_0x1416e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13809Cu; }
    }
    if (ctx->pc != 0x13809Cu) { return; }
    ctx->pc = 0x13809Cu;
    // 0x13809c: 0x10000005
    ctx->pc = 0x13809Cu;
    {
        const bool branch_taken_0x13809c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1380A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x13809c) {
            ctx->pc = 0x1380B4u;
            goto label_1380b4;
        }
    }
    ctx->pc = 0x1380A4u;
    // 0x1380a4: 0x0
    ctx->pc = 0x1380a4u;
    // NOP
label_1380a8:
    // 0x1380a8: 0xc0505ba
    ctx->pc = 0x1380A8u;
    SET_GPR_U32(ctx, 31, 0x1380B0u);
    ctx->pc = 0x1416E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001416E8_0x1416e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1380B0u; }
    }
    if (ctx->pc != 0x1380B0u) { return; }
    ctx->pc = 0x1380B0u;
label_1380b0:
    // 0x1380b0: 0x102d
    ctx->pc = 0x1380b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1380b4:
    // 0x1380b4: 0xdfb00010
    ctx->pc = 0x1380b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1380b8: 0xdfbf0018
    ctx->pc = 0x1380b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1380bc: 0x3e00008
    ctx->pc = 0x1380BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1380C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138080u: goto label_138080;
            case 0x1380A8u: goto label_1380a8;
            case 0x1380B0u: goto label_1380b0;
            case 0x1380B4u: goto label_1380b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1380C4u;
    // 0x1380c4: 0x0
    ctx->pc = 0x1380c4u;
    // NOP
}
