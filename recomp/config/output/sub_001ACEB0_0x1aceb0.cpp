#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001ACEB0
// Address: 0x1aceb0 - 0x1acf60
void sub_001ACEB0_0x1aceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1aceb0u;

    // 0x1aceb0: 0x27bdffd0
    ctx->pc = 0x1aceb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aceb4: 0xffbf0020
    ctx->pc = 0x1aceb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aceb8: 0x7fb10010
    ctx->pc = 0x1aceb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1acebc: 0x7fb00000
    ctx->pc = 0x1acebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1acec0: 0xa0802d
    ctx->pc = 0x1acec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acec4: 0x1600000b
    ctx->pc = 0x1ACEC4u;
    {
        const bool branch_taken_0x1acec4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ACEC8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1acec4) {
            ctx->pc = 0x1ACEF4u;
            goto label_1acef4;
        }
    }
    ctx->pc = 0x1ACECCu;
    // 0x1acecc: 0xc069eec
    ctx->pc = 0x1ACECCu;
    SET_GPR_U32(ctx, 31, 0x1ACED4u);
    ctx->pc = 0x1ACED0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A7BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7BB0_0x1a7bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACED4u; }
    }
    if (ctx->pc != 0x1ACED4u) { return; }
    ctx->pc = 0x1ACED4u;
    // 0x1aced4: 0x4410003
    ctx->pc = 0x1ACED4u;
    {
        const bool branch_taken_0x1aced4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1aced4) {
            ctx->pc = 0x1ACEE4u;
            goto label_1acee4;
        }
    }
    ctx->pc = 0x1ACEDCu;
    // 0x1acedc: 0x10000019
    ctx->pc = 0x1ACEDCu;
    {
        const bool branch_taken_0x1acedc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ACEE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1acedc) {
            ctx->pc = 0x1ACF44u;
            goto label_1acf44;
        }
    }
    ctx->pc = 0x1ACEE4u;
label_1acee4:
    // 0x1acee4: 0x24020001
    ctx->pc = 0x1acee4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acee8: 0x3c01002b
    ctx->pc = 0x1acee8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aceec: 0x1000000c
    ctx->pc = 0x1ACEECu;
    {
        const bool branch_taken_0x1aceec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ACEF0u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 14392), GPR_U32(ctx, 2));
        if (branch_taken_0x1aceec) {
            ctx->pc = 0x1ACF20u;
            goto label_1acf20;
        }
    }
    ctx->pc = 0x1ACEF4u;
label_1acef4:
    // 0x1acef4: 0x3c01002b
    ctx->pc = 0x1acef4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1acef8: 0x8c223838
    ctx->pc = 0x1acef8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 14392)));
    // 0x1acefc: 0x10400009
    ctx->pc = 0x1ACEFCu;
    {
        const bool branch_taken_0x1acefc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ACF00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1acefc) {
            ctx->pc = 0x1ACF24u;
            goto label_1acf24;
        }
    }
    ctx->pc = 0x1ACF04u;
    // 0x1acf04: 0xc069eec
    ctx->pc = 0x1ACF04u;
    SET_GPR_U32(ctx, 31, 0x1ACF0Cu);
    ctx->pc = 0x1ACF08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A7BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7BB0_0x1a7bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACF0Cu; }
    }
    if (ctx->pc != 0x1ACF0Cu) { return; }
    ctx->pc = 0x1ACF0Cu;
    // 0x1acf0c: 0x4410003
    ctx->pc = 0x1ACF0Cu;
    {
        const bool branch_taken_0x1acf0c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1ACF10u;
        SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
        if (branch_taken_0x1acf0c) {
            ctx->pc = 0x1ACF1Cu;
            goto label_1acf1c;
        }
    }
    ctx->pc = 0x1ACF14u;
    // 0x1acf14: 0x1000000b
    ctx->pc = 0x1ACF14u;
    {
        const bool branch_taken_0x1acf14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ACF18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1acf14) {
            ctx->pc = 0x1ACF44u;
            goto label_1acf44;
        }
    }
    ctx->pc = 0x1ACF1Cu;
label_1acf1c:
    // 0x1acf1c: 0xac203838
    ctx->pc = 0x1acf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14392), GPR_U32(ctx, 0));
label_1acf20:
    // 0x1acf20: 0x2402ffff
    ctx->pc = 0x1acf20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1acf24:
    // 0x1acf24: 0x16220005
    ctx->pc = 0x1ACF24u;
    {
        const bool branch_taken_0x1acf24 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x1ACF28u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 17), 255));
        if (branch_taken_0x1acf24) {
            ctx->pc = 0x1ACF3Cu;
            goto label_1acf3c;
        }
    }
    ctx->pc = 0x1ACF2Cu;
    // 0x1acf2c: 0xc069da4
    ctx->pc = 0x1ACF2Cu;
    SET_GPR_U32(ctx, 31, 0x1ACF34u);
    ctx->pc = 0x1ACF30u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 16), 65535));
    ctx->pc = 0x1A7690u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7690_0x1a7690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACF34u; }
    }
    if (ctx->pc != 0x1ACF34u) { return; }
    ctx->pc = 0x1ACF34u;
    // 0x1acf34: 0x10000003
    ctx->pc = 0x1ACF34u;
    {
        const bool branch_taken_0x1acf34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1acf34) {
            ctx->pc = 0x1ACF44u;
            goto label_1acf44;
        }
    }
    ctx->pc = 0x1ACF3Cu;
label_1acf3c:
    // 0x1acf3c: 0xc069dcc
    ctx->pc = 0x1ACF3Cu;
    SET_GPR_U32(ctx, 31, 0x1ACF44u);
    ctx->pc = 0x1ACF40u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 16), 65535));
    ctx->pc = 0x1A7730u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7730_0x1a7730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACF44u; }
    }
    if (ctx->pc != 0x1ACF44u) { return; }
    ctx->pc = 0x1ACF44u;
label_1acf44:
    // 0x1acf44: 0xdfbf0020
    ctx->pc = 0x1acf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1acf48: 0x7bb10010
    ctx->pc = 0x1acf48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1acf4c: 0x7bb00000
    ctx->pc = 0x1acf4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1acf50: 0x3e00008
    ctx->pc = 0x1ACF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACF54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ACEE4u: goto label_1acee4;
            case 0x1ACEF4u: goto label_1acef4;
            case 0x1ACF1Cu: goto label_1acf1c;
            case 0x1ACF20u: goto label_1acf20;
            case 0x1ACF24u: goto label_1acf24;
            case 0x1ACF3Cu: goto label_1acf3c;
            case 0x1ACF44u: goto label_1acf44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ACF58u;
    // 0x1acf58: 0x0
    ctx->pc = 0x1acf58u;
    // NOP
    // 0x1acf5c: 0x0
    ctx->pc = 0x1acf5cu;
    // NOP
}
