#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A2FF0
// Address: 0x1a2ff0 - 0x1a3090
void sub_001A2FF0_0x1a2ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a2ff0u;

    // 0x1a2ff0: 0x27bdffe0
    ctx->pc = 0x1a2ff0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a2ff4: 0xffbf0010
    ctx->pc = 0x1a2ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a2ff8: 0x7fb00000
    ctx->pc = 0x1a2ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2ffc: 0x80802d
    ctx->pc = 0x1a2ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3000: 0xa0202d
    ctx->pc = 0x1a3000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3004: 0xc068c84
    ctx->pc = 0x1A3004u;
    SET_GPR_U32(ctx, 31, 0x1A300Cu);
    ctx->pc = 0x1A3008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A3210u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3210_0x1a3210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A300Cu; }
    }
    if (ctx->pc != 0x1A300Cu) { return; }
    ctx->pc = 0x1A300Cu;
    // 0x1a300c: 0x8c440000
    ctx->pc = 0x1a300cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a3010: 0x24030004
    ctx->pc = 0x1a3010u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a3014: 0x10830003
    ctx->pc = 0x1A3014u;
    {
        const bool branch_taken_0x1a3014 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1A3018u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3014) {
            ctx->pc = 0x1A3024u;
            goto label_1a3024;
        }
    }
    ctx->pc = 0x1A301Cu;
    // 0x1a301c: 0x10000016
    ctx->pc = 0x1A301Cu;
    {
        const bool branch_taken_0x1a301c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3020u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a301c) {
            ctx->pc = 0x1A3078u;
            goto label_1a3078;
        }
    }
    ctx->pc = 0x1A3024u;
label_1a3024:
    // 0x1a3024: 0x3c050010
    ctx->pc = 0x1a3024u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16 << 16));
    // 0x1a3028: 0xc068d7c
    ctx->pc = 0x1A3028u;
    SET_GPR_U32(ctx, 31, 0x1A3030u);
    ctx->pc = 0x1A302Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3030u; }
    }
    if (ctx->pc != 0x1A3030u) { return; }
    ctx->pc = 0x1A3030u;
    // 0x1a3030: 0x14400003
    ctx->pc = 0x1A3030u;
    {
        const bool branch_taken_0x1a3030 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3030) {
            ctx->pc = 0x1A3040u;
            goto label_1a3040;
        }
    }
    ctx->pc = 0x1A3038u;
    // 0x1a3038: 0x1000000f
    ctx->pc = 0x1A3038u;
    {
        const bool branch_taken_0x1a3038 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A303Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a3038) {
            ctx->pc = 0x1A3078u;
            goto label_1a3078;
        }
    }
    ctx->pc = 0x1A3040u;
label_1a3040:
    // 0x1a3040: 0x8c440004
    ctx->pc = 0x1a3040u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a3044: 0x2446000c
    ctx->pc = 0x1a3044u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 12));
    // 0x1a3048: 0x282d
    ctx->pc = 0x1a3048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a304c: 0x10000007
    ctx->pc = 0x1A304Cu;
    {
        const bool branch_taken_0x1a304c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3050u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
        if (branch_taken_0x1a304c) {
            ctx->pc = 0x1A306Cu;
            goto label_1a306c;
        }
    }
    ctx->pc = 0x1A3054u;
label_1a3054:
    // 0x1a3054: 0x8cc30000
    ctx->pc = 0x1a3054u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a3058: 0x51040
    ctx->pc = 0x1a3058u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1a305c: 0x2021021
    ctx->pc = 0x1a305cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a3060: 0x24a50001
    ctx->pc = 0x1a3060u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a3064: 0xa4430002
    ctx->pc = 0x1a3064u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a3068: 0x24c60004
    ctx->pc = 0x1a3068u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
label_1a306c:
    // 0x1a306c: 0xa4102a
    ctx->pc = 0x1a306cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
    // 0x1a3070: 0x1440fff8
    ctx->pc = 0x1A3070u;
    {
        const bool branch_taken_0x1a3070 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A3074u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3070) {
            ctx->pc = 0x1A3054u;
            goto label_1a3054;
        }
    }
    ctx->pc = 0x1A3078u;
label_1a3078:
    // 0x1a3078: 0xdfbf0010
    ctx->pc = 0x1a3078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a307c: 0x7bb00000
    ctx->pc = 0x1a307cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3080: 0x3e00008
    ctx->pc = 0x1A3080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3084u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3024u: goto label_1a3024;
            case 0x1A3040u: goto label_1a3040;
            case 0x1A3054u: goto label_1a3054;
            case 0x1A306Cu: goto label_1a306c;
            case 0x1A3078u: goto label_1a3078;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A3088u;
    // 0x1a3088: 0x0
    ctx->pc = 0x1a3088u;
    // NOP
    // 0x1a308c: 0x0
    ctx->pc = 0x1a308cu;
    // NOP
}
