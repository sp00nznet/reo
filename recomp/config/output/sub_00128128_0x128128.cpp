#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00128128
// Address: 0x128128 - 0x128198
void sub_00128128_0x128128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x128128u;

label_128128:
    // 0x128128: 0x27bdffe0
    ctx->pc = 0x128128u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_12812c:
    // 0x12812c: 0x3c020021
    ctx->pc = 0x12812cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_128130:
    // 0x128130: 0xffb10008
    ctx->pc = 0x128130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_128134:
    // 0x128134: 0x2451c7b8
    ctx->pc = 0x128134u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294952888));
label_128138:
    // 0x128138: 0xffb00000
    ctx->pc = 0x128138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12813c:
    // 0x12813c: 0xa0802d
    ctx->pc = 0x12813cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_128140:
    // 0x128140: 0x240600ff
    ctx->pc = 0x128140u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 255));
label_128144:
    // 0x128144: 0x80282d
    ctx->pc = 0x128144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_128148:
    // 0x128148: 0xffbf0010
    ctx->pc = 0x128148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_12814c:
    // 0x12814c: 0xc042d7e
label_128150:
    if (ctx->pc == 0x128150u) {
        ctx->pc = 0x128150u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128154u;
        goto label_128154;
    }
    ctx->pc = 0x12814Cu;
    SET_GPR_U32(ctx, 31, 0x128154u);
    ctx->pc = 0x128150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B5F8_0x10b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128154u; }
    }
    if (ctx->pc != 0x128154u) { return; }
    ctx->pc = 0x128154u;
label_128154:
    // 0x128154: 0x220202d
    ctx->pc = 0x128154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_128158:
    // 0x128158: 0x200282d
    ctx->pc = 0x128158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12815c:
    // 0x12815c: 0xc042ca4
label_128160:
    if (ctx->pc == 0x128160u) {
        ctx->pc = 0x128160u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x128164u;
        goto label_128164;
    }
    ctx->pc = 0x12815Cu;
    SET_GPR_U32(ctx, 31, 0x128164u);
    ctx->pc = 0x128160u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x10B290u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B290_0x10b290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128164u; }
    }
    if (ctx->pc != 0x128164u) { return; }
    ctx->pc = 0x128164u;
label_128164:
    // 0x128164: 0x3c030021
    ctx->pc = 0x128164u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
label_128168:
    // 0x128168: 0x8c63c7b0
    ctx->pc = 0x128168u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294952880)));
label_12816c:
    // 0x12816c: 0x10600004
label_128170:
    if (ctx->pc == 0x128170u) {
        ctx->pc = 0x128170u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128174u;
        goto label_128174;
    }
    ctx->pc = 0x12816Cu;
    {
        const bool branch_taken_0x12816c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x128170u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12816c) {
            ctx->pc = 0x128180u;
            goto label_128180;
        }
    }
    ctx->pc = 0x128174u;
label_128174:
    // 0x128174: 0x3c020021
    ctx->pc = 0x128174u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_128178:
    // 0x128178: 0x60f809
label_12817c:
    if (ctx->pc == 0x12817Cu) {
        ctx->pc = 0x12817Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294952884)));
        ctx->pc = 0x128180u;
        goto label_128180;
    }
    ctx->pc = 0x128178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x128180u);
        ctx->pc = 0x12817Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294952884)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x128128u: goto label_128128;
            case 0x12812Cu: goto label_12812c;
            case 0x128130u: goto label_128130;
            case 0x128134u: goto label_128134;
            case 0x128138u: goto label_128138;
            case 0x12813Cu: goto label_12813c;
            case 0x128140u: goto label_128140;
            case 0x128144u: goto label_128144;
            case 0x128148u: goto label_128148;
            case 0x12814Cu: goto label_12814c;
            case 0x128150u: goto label_128150;
            case 0x128154u: goto label_128154;
            case 0x128158u: goto label_128158;
            case 0x12815Cu: goto label_12815c;
            case 0x128160u: goto label_128160;
            case 0x128164u: goto label_128164;
            case 0x128168u: goto label_128168;
            case 0x12816Cu: goto label_12816c;
            case 0x128170u: goto label_128170;
            case 0x128174u: goto label_128174;
            case 0x128178u: goto label_128178;
            case 0x12817Cu: goto label_12817c;
            case 0x128180u: goto label_128180;
            case 0x128184u: goto label_128184;
            case 0x128188u: goto label_128188;
            case 0x12818Cu: goto label_12818c;
            case 0x128190u: goto label_128190;
            case 0x128194u: goto label_128194;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128180u; }
            if (ctx->pc != 0x128180u) { return; }
        }
    }
    ctx->pc = 0x128180u;
label_128180:
    // 0x128180: 0x220202d
    ctx->pc = 0x128180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_128184:
    // 0x128184: 0xdfb10008
    ctx->pc = 0x128184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_128188:
    // 0x128188: 0xdfb00000
    ctx->pc = 0x128188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12818c:
    // 0x12818c: 0xdfbf0010
    ctx->pc = 0x12818cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_128190:
    // 0x128190: 0x8050600
label_128194:
    if (ctx->pc == 0x128194u) {
        ctx->pc = 0x128194u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x128198u;
        goto label_fallthrough_0x128190;
    }
    ctx->pc = 0x128190u;
    ctx->pc = 0x128194u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x141800u;
    sub_00141800_0x141800(rdram, ctx, runtime); return;
label_fallthrough_0x128190:
    ctx->pc = 0x128198u;
}
