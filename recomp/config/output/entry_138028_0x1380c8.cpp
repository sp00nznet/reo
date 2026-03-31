#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_138028
// Address: 0x138028 - 0x1380c8
void entry_138028_0x1380c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x138028u;

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
