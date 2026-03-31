#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169918
// Address: 0x169918 - 0x169950
void sub_00169918_0x169918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169918u;

label_169918:
    // 0x169918: 0x27bdffe0
    ctx->pc = 0x169918u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_16991c:
    // 0x16991c: 0xc0102d
    ctx->pc = 0x16991cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_169920:
    // 0x169920: 0xffbf0010
    ctx->pc = 0x169920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_169924:
    // 0x169924: 0x30a500ff
    ctx->pc = 0x169924u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 255));
label_169928:
    // 0x169928: 0x40f809
label_16992c:
    if (ctx->pc == 0x16992Cu) {
        ctx->pc = 0x16992Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x169930u;
        goto label_169930;
    }
    ctx->pc = 0x169928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x169930u);
        ctx->pc = 0x16992Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169918u: goto label_169918;
            case 0x16991Cu: goto label_16991c;
            case 0x169920u: goto label_169920;
            case 0x169924u: goto label_169924;
            case 0x169928u: goto label_169928;
            case 0x16992Cu: goto label_16992c;
            case 0x169930u: goto label_169930;
            case 0x169934u: goto label_169934;
            case 0x169938u: goto label_169938;
            case 0x16993Cu: goto label_16993c;
            case 0x169940u: goto label_169940;
            case 0x169944u: goto label_169944;
            case 0x169948u: goto label_169948;
            case 0x16994Cu: goto label_16994c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x169930u; }
            if (ctx->pc != 0x169930u) { return; }
        }
    }
    ctx->pc = 0x169930u;
label_169930:
    // 0x169930: 0x2404ffff
    ctx->pc = 0x169930u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_169934:
    // 0x169934: 0x8fa30000
    ctx->pc = 0x169934u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_169938:
    // 0x169938: 0x38420000
    ctx->pc = 0x169938u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 0));
label_16993c:
    // 0x16993c: 0xdfbf0010
    ctx->pc = 0x16993cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_169940:
    // 0x169940: 0x62200b
    ctx->pc = 0x169940u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
label_169944:
    // 0x169944: 0x80102d
    ctx->pc = 0x169944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_169948:
    // 0x169948: 0x3e00008
label_16994c:
    if (ctx->pc == 0x16994Cu) {
        ctx->pc = 0x16994Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x169950u;
        goto label_fallthrough_0x169948;
    }
    ctx->pc = 0x169948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16994Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169918u: goto label_169918;
            case 0x16991Cu: goto label_16991c;
            case 0x169920u: goto label_169920;
            case 0x169924u: goto label_169924;
            case 0x169928u: goto label_169928;
            case 0x16992Cu: goto label_16992c;
            case 0x169930u: goto label_169930;
            case 0x169934u: goto label_169934;
            case 0x169938u: goto label_169938;
            case 0x16993Cu: goto label_16993c;
            case 0x169940u: goto label_169940;
            case 0x169944u: goto label_169944;
            case 0x169948u: goto label_169948;
            case 0x16994Cu: goto label_16994c;
            default: break;
        }
        return;
    }
label_fallthrough_0x169948:
    ctx->pc = 0x169950u;
}
