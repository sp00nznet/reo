#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1662e0
// Address: 0x1662e0 - 0x166350
void entry_1662e0_0x166350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1662e0u;

label_1662e0:
    // 0x1662e0: 0x27bdfff0
    ctx->pc = 0x1662e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1662e4:
    // 0x1662e4: 0xffb00000
    ctx->pc = 0x1662e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1662e8:
    // 0x1662e8: 0xffbf0008
    ctx->pc = 0x1662e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1662ec:
    // 0x1662ec: 0xc05a78c
label_1662f0:
    if (ctx->pc == 0x1662F0u) {
        ctx->pc = 0x1662F0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1662F4u;
        goto label_1662f4;
    }
    ctx->pc = 0x1662ECu;
    SET_GPR_U32(ctx, 31, 0x1662F4u);
    ctx->pc = 0x1662F0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662F4u; }
    }
    if (ctx->pc != 0x1662F4u) { return; }
    ctx->pc = 0x1662F4u;
label_1662f4:
    // 0x1662f4: 0x3c05ff00
    ctx->pc = 0x1662f4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
label_1662f8:
    // 0x1662f8: 0x202d
    ctx->pc = 0x1662f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1662fc:
    // 0x1662fc: 0x10400006
label_166300:
    if (ctx->pc == 0x166300u) {
        ctx->pc = 0x166300u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 420));
        ctx->pc = 0x166304u;
        goto label_166304;
    }
    ctx->pc = 0x1662FCu;
    {
        const bool branch_taken_0x1662fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x166300u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 420));
        if (branch_taken_0x1662fc) {
            ctx->pc = 0x166318u;
            goto label_166318;
        }
    }
    ctx->pc = 0x166304u;
label_166304:
    // 0x166304: 0xc05a704
label_166308:
    if (ctx->pc == 0x166308u) {
        ctx->pc = 0x16630Cu;
        goto label_16630c;
    }
    ctx->pc = 0x166304u;
    SET_GPR_U32(ctx, 31, 0x16630Cu);
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16630Cu; }
    }
    if (ctx->pc != 0x16630Cu) { return; }
    ctx->pc = 0x16630Cu;
label_16630c:
    // 0x16630c: 0x1000000b
label_166310:
    if (ctx->pc == 0x166310u) {
        ctx->pc = 0x166310u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166314u;
        goto label_166314;
    }
    ctx->pc = 0x16630Cu;
    {
        const bool branch_taken_0x16630c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x166310u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16630c) {
            ctx->pc = 0x16633Cu;
            goto label_16633c;
        }
    }
    ctx->pc = 0x166314u;
label_166314:
    // 0x166314: 0x0
    ctx->pc = 0x166314u;
    // NOP
label_166318:
    // 0x166318: 0x200202d
    ctx->pc = 0x166318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16631c:
    // 0x16631c: 0xc05d58a
label_166320:
    if (ctx->pc == 0x166320u) {
        ctx->pc = 0x166320u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x166324u;
        goto label_166324;
    }
    ctx->pc = 0x16631Cu;
    SET_GPR_U32(ctx, 31, 0x166324u);
    ctx->pc = 0x166320u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166324u; }
    }
    if (ctx->pc != 0x166324u) { return; }
    ctx->pc = 0x166324u;
label_166324:
    // 0x166324: 0x10400005
label_166328:
    if (ctx->pc == 0x166328u) {
        ctx->pc = 0x166328u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16632Cu;
        goto label_16632c;
    }
    ctx->pc = 0x166324u;
    {
        const bool branch_taken_0x166324 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x166328u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x166324) {
            ctx->pc = 0x16633Cu;
            goto label_16633c;
        }
    }
    ctx->pc = 0x16632Cu;
label_16632c:
    // 0x16632c: 0x8e031c84
    ctx->pc = 0x16632cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7300)));
label_166330:
    // 0x166330: 0x8c620010
    ctx->pc = 0x166330u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_166334:
    // 0x166334: 0x40f809
label_166338:
    if (ctx->pc == 0x166338u) {
        ctx->pc = 0x16633Cu;
        goto label_16633c;
    }
    ctx->pc = 0x166334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16633Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1662E0u: goto label_1662e0;
            case 0x1662E4u: goto label_1662e4;
            case 0x1662E8u: goto label_1662e8;
            case 0x1662ECu: goto label_1662ec;
            case 0x1662F0u: goto label_1662f0;
            case 0x1662F4u: goto label_1662f4;
            case 0x1662F8u: goto label_1662f8;
            case 0x1662FCu: goto label_1662fc;
            case 0x166300u: goto label_166300;
            case 0x166304u: goto label_166304;
            case 0x166308u: goto label_166308;
            case 0x16630Cu: goto label_16630c;
            case 0x166310u: goto label_166310;
            case 0x166314u: goto label_166314;
            case 0x166318u: goto label_166318;
            case 0x16631Cu: goto label_16631c;
            case 0x166320u: goto label_166320;
            case 0x166324u: goto label_166324;
            case 0x166328u: goto label_166328;
            case 0x16632Cu: goto label_16632c;
            case 0x166330u: goto label_166330;
            case 0x166334u: goto label_166334;
            case 0x166338u: goto label_166338;
            case 0x16633Cu: goto label_16633c;
            case 0x166340u: goto label_166340;
            case 0x166344u: goto label_166344;
            case 0x166348u: goto label_166348;
            case 0x16634Cu: goto label_16634c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16633Cu; }
            if (ctx->pc != 0x16633Cu) { return; }
        }
    }
    ctx->pc = 0x16633Cu;
label_16633c:
    // 0x16633c: 0xdfb00000
    ctx->pc = 0x16633cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_166340:
    // 0x166340: 0xdfbf0008
    ctx->pc = 0x166340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_166344:
    // 0x166344: 0x3e00008
label_166348:
    if (ctx->pc == 0x166348u) {
        ctx->pc = 0x166348u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16634Cu;
        goto label_16634c;
    }
    ctx->pc = 0x166344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166348u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1662E0u: goto label_1662e0;
            case 0x1662E4u: goto label_1662e4;
            case 0x1662E8u: goto label_1662e8;
            case 0x1662ECu: goto label_1662ec;
            case 0x1662F0u: goto label_1662f0;
            case 0x1662F4u: goto label_1662f4;
            case 0x1662F8u: goto label_1662f8;
            case 0x1662FCu: goto label_1662fc;
            case 0x166300u: goto label_166300;
            case 0x166304u: goto label_166304;
            case 0x166308u: goto label_166308;
            case 0x16630Cu: goto label_16630c;
            case 0x166310u: goto label_166310;
            case 0x166314u: goto label_166314;
            case 0x166318u: goto label_166318;
            case 0x16631Cu: goto label_16631c;
            case 0x166320u: goto label_166320;
            case 0x166324u: goto label_166324;
            case 0x166328u: goto label_166328;
            case 0x16632Cu: goto label_16632c;
            case 0x166330u: goto label_166330;
            case 0x166334u: goto label_166334;
            case 0x166338u: goto label_166338;
            case 0x16633Cu: goto label_16633c;
            case 0x166340u: goto label_166340;
            case 0x166344u: goto label_166344;
            case 0x166348u: goto label_166348;
            case 0x16634Cu: goto label_16634c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16634Cu;
label_16634c:
    // 0x16634c: 0x0
    ctx->pc = 0x16634cu;
    // NOP
}
