#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A3090
// Address: 0x1a3090 - 0x1a31b0
void sub_001A3090_0x1a3090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a3090u;

    // 0x1a3090: 0x27bdffe0
    ctx->pc = 0x1a3090u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a3094: 0xffbf0010
    ctx->pc = 0x1a3094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a3098: 0x7fb00000
    ctx->pc = 0x1a3098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a309c: 0x80802d
    ctx->pc = 0x1a309cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a30a0: 0xa0202d
    ctx->pc = 0x1a30a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a30a4: 0xc068c84
    ctx->pc = 0x1A30A4u;
    SET_GPR_U32(ctx, 31, 0x1A30ACu);
    ctx->pc = 0x1A30A8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A3210u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3210_0x1a3210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A30ACu; }
    }
    if (ctx->pc != 0x1A30ACu) { return; }
    ctx->pc = 0x1A30ACu;
    // 0x1a30ac: 0x8c440000
    ctx->pc = 0x1a30acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a30b0: 0x24030004
    ctx->pc = 0x1a30b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a30b4: 0x10830003
    ctx->pc = 0x1A30B4u;
    {
        const bool branch_taken_0x1a30b4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1A30B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a30b4) {
            ctx->pc = 0x1A30C4u;
            goto label_1a30c4;
        }
    }
    ctx->pc = 0x1A30BCu;
    // 0x1a30bc: 0x10000038
    ctx->pc = 0x1A30BCu;
    {
        const bool branch_taken_0x1a30bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A30C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a30bc) {
            ctx->pc = 0x1A31A0u;
            goto label_1a31a0;
        }
    }
    ctx->pc = 0x1A30C4u;
label_1a30c4:
    // 0x1a30c4: 0x3c05000f
    ctx->pc = 0x1a30c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)15 << 16));
    // 0x1a30c8: 0xc068d7c
    ctx->pc = 0x1A30C8u;
    SET_GPR_U32(ctx, 31, 0x1A30D0u);
    ctx->pc = 0x1A30CCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A30D0u; }
    }
    if (ctx->pc != 0x1A30D0u) { return; }
    ctx->pc = 0x1A30D0u;
    // 0x1a30d0: 0x14400003
    ctx->pc = 0x1A30D0u;
    {
        const bool branch_taken_0x1a30d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a30d0) {
            ctx->pc = 0x1A30E0u;
            goto label_1a30e0;
        }
    }
    ctx->pc = 0x1A30D8u;
    // 0x1a30d8: 0x10000031
    ctx->pc = 0x1A30D8u;
    {
        const bool branch_taken_0x1a30d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A30DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a30d8) {
            ctx->pc = 0x1A31A0u;
            goto label_1a31a0;
        }
    }
    ctx->pc = 0x1A30E0u;
label_1a30e0:
    // 0x1a30e0: 0x8c45000c
    ctx->pc = 0x1a30e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a30e4: 0x2443000c
    ctx->pc = 0x1a30e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 12));
    // 0x1a30e8: 0x3c04ffff
    ctx->pc = 0x1a30e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x1a30ec: 0xae050000
    ctx->pc = 0x1a30ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1a30f0: 0x3c020001
    ctx->pc = 0x1a30f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x1a30f4: 0x8e050000
    ctx->pc = 0x1a30f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a30f8: 0xa42024
    ctx->pc = 0x1a30f8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a30fc: 0x10820003
    ctx->pc = 0x1A30FCu;
    {
        const bool branch_taken_0x1a30fc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a30fc) {
            ctx->pc = 0x1A310Cu;
            goto label_1a310c;
        }
    }
    ctx->pc = 0x1A3104u;
    // 0x1a3104: 0x10000026
    ctx->pc = 0x1A3104u;
    {
        const bool branch_taken_0x1a3104 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3108u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x1a3104) {
            ctx->pc = 0x1A31A0u;
            goto label_1a31a0;
        }
    }
    ctx->pc = 0x1A310Cu;
label_1a310c:
    // 0x1a310c: 0x8c640000
    ctx->pc = 0x1a310cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a3110: 0x102d
    ctx->pc = 0x1a3110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3114: 0xae040000
    ctx->pc = 0x1a3114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1a3118: 0x8c640004
    ctx->pc = 0x1a3118u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a311c: 0xae040004
    ctx->pc = 0x1a311cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1a3120: 0x8c640008
    ctx->pc = 0x1a3120u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a3124: 0xae040008
    ctx->pc = 0x1a3124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x1a3128: 0x8c64000c
    ctx->pc = 0x1a3128u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a312c: 0xae04000c
    ctx->pc = 0x1a312cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x1a3130: 0x8c640010
    ctx->pc = 0x1a3130u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a3134: 0xae040010
    ctx->pc = 0x1a3134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x1a3138: 0x8c640014
    ctx->pc = 0x1a3138u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1a313c: 0xae040014
    ctx->pc = 0x1a313cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x1a3140: 0x8c640018
    ctx->pc = 0x1a3140u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1a3144: 0xae040018
    ctx->pc = 0x1a3144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x1a3148: 0x8c64001c
    ctx->pc = 0x1a3148u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1a314c: 0xae04001c
    ctx->pc = 0x1a314cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x1a3150: 0x8c640020
    ctx->pc = 0x1a3150u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a3154: 0xae040020
    ctx->pc = 0x1a3154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x1a3158: 0x8c640024
    ctx->pc = 0x1a3158u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1a315c: 0xae040024
    ctx->pc = 0x1a315cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x1a3160: 0x8c640028
    ctx->pc = 0x1a3160u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1a3164: 0xae040028
    ctx->pc = 0x1a3164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x1a3168: 0x8c64002c
    ctx->pc = 0x1a3168u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1a316c: 0xae04002c
    ctx->pc = 0x1a316cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x1a3170: 0x8c640030
    ctx->pc = 0x1a3170u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1a3174: 0xae040030
    ctx->pc = 0x1a3174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
    // 0x1a3178: 0x8c640034
    ctx->pc = 0x1a3178u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1a317c: 0xae040034
    ctx->pc = 0x1a317cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x1a3180: 0x8c640038
    ctx->pc = 0x1a3180u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1a3184: 0xae040038
    ctx->pc = 0x1a3184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x1a3188: 0x8c64003c
    ctx->pc = 0x1a3188u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1a318c: 0xae04003c
    ctx->pc = 0x1a318cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
    // 0x1a3190: 0x8c640040
    ctx->pc = 0x1a3190u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1a3194: 0xae040040
    ctx->pc = 0x1a3194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
    // 0x1a3198: 0x8c630044
    ctx->pc = 0x1a3198u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1a319c: 0xae030044
    ctx->pc = 0x1a319cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_1a31a0:
    // 0x1a31a0: 0xdfbf0010
    ctx->pc = 0x1a31a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a31a4: 0x7bb00000
    ctx->pc = 0x1a31a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a31a8: 0x3e00008
    ctx->pc = 0x1A31A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A31ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A30C4u: goto label_1a30c4;
            case 0x1A30E0u: goto label_1a30e0;
            case 0x1A310Cu: goto label_1a310c;
            case 0x1A31A0u: goto label_1a31a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A31B0u;
}
