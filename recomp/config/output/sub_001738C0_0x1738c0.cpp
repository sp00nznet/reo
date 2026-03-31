#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001738C0
// Address: 0x1738c0 - 0x173928
void sub_001738C0_0x1738c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1738c0u;

label_1738c0:
    // 0x1738c0: 0x27bdffe0
    ctx->pc = 0x1738c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1738c4:
    // 0x1738c4: 0xffb00000
    ctx->pc = 0x1738c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1738c8:
    // 0x1738c8: 0xffb10008
    ctx->pc = 0x1738c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1738cc:
    // 0x1738cc: 0x80882d
    ctx->pc = 0x1738ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1738d0:
    // 0x1738d0: 0xffb20010
    ctx->pc = 0x1738d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1738d4:
    // 0x1738d4: 0xc0902d
    ctx->pc = 0x1738d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1738d8:
    // 0x1738d8: 0xffbf0018
    ctx->pc = 0x1738d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1738dc:
    // 0x1738dc: 0x2630094c
    ctx->pc = 0x1738dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 2380));
label_1738e0:
    // 0x1738e0: 0x8e020000
    ctx->pc = 0x1738e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1738e4:
    // 0x1738e4: 0x451021
    ctx->pc = 0x1738e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1738e8:
    // 0x1738e8: 0x24050024
    ctx->pc = 0x1738e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 36));
label_1738ec:
    // 0x1738ec: 0xc05d58a
label_1738f0:
    if (ctx->pc == 0x1738F0u) {
        ctx->pc = 0x1738F0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1738F4u;
        goto label_1738f4;
    }
    ctx->pc = 0x1738ECu;
    SET_GPR_U32(ctx, 31, 0x1738F4u);
    ctx->pc = 0x1738F0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1738F4u; }
    }
    if (ctx->pc != 0x1738F4u) { return; }
    ctx->pc = 0x1738F4u;
label_1738f4:
    // 0x1738f4: 0x220202d
    ctx->pc = 0x1738f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1738f8:
    // 0x1738f8: 0x240282d
    ctx->pc = 0x1738f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1738fc:
    // 0x1738fc: 0x10400003
label_173900:
    if (ctx->pc == 0x173900u) {
        ctx->pc = 0x173900u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173904u;
        goto label_173904;
    }
    ctx->pc = 0x1738FCu;
    {
        const bool branch_taken_0x1738fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x173900u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1738fc) {
            ctx->pc = 0x17390Cu;
            goto label_17390c;
        }
    }
    ctx->pc = 0x173904u;
label_173904:
    // 0x173904: 0x40f809
label_173908:
    if (ctx->pc == 0x173908u) {
        ctx->pc = 0x17390Cu;
        goto label_17390c;
    }
    ctx->pc = 0x173904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17390Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1738C0u: goto label_1738c0;
            case 0x1738C4u: goto label_1738c4;
            case 0x1738C8u: goto label_1738c8;
            case 0x1738CCu: goto label_1738cc;
            case 0x1738D0u: goto label_1738d0;
            case 0x1738D4u: goto label_1738d4;
            case 0x1738D8u: goto label_1738d8;
            case 0x1738DCu: goto label_1738dc;
            case 0x1738E0u: goto label_1738e0;
            case 0x1738E4u: goto label_1738e4;
            case 0x1738E8u: goto label_1738e8;
            case 0x1738ECu: goto label_1738ec;
            case 0x1738F0u: goto label_1738f0;
            case 0x1738F4u: goto label_1738f4;
            case 0x1738F8u: goto label_1738f8;
            case 0x1738FCu: goto label_1738fc;
            case 0x173900u: goto label_173900;
            case 0x173904u: goto label_173904;
            case 0x173908u: goto label_173908;
            case 0x17390Cu: goto label_17390c;
            case 0x173910u: goto label_173910;
            case 0x173914u: goto label_173914;
            case 0x173918u: goto label_173918;
            case 0x17391Cu: goto label_17391c;
            case 0x173920u: goto label_173920;
            case 0x173924u: goto label_173924;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17390Cu; }
            if (ctx->pc != 0x17390Cu) { return; }
        }
    }
    ctx->pc = 0x17390Cu;
label_17390c:
    // 0x17390c: 0xdfb00000
    ctx->pc = 0x17390cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173910:
    // 0x173910: 0xdfb10008
    ctx->pc = 0x173910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_173914:
    // 0x173914: 0xdfb20010
    ctx->pc = 0x173914u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_173918:
    // 0x173918: 0xdfbf0018
    ctx->pc = 0x173918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_17391c:
    // 0x17391c: 0x3e00008
label_173920:
    if (ctx->pc == 0x173920u) {
        ctx->pc = 0x173920u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x173924u;
        goto label_173924;
    }
    ctx->pc = 0x17391Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173920u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1738C0u: goto label_1738c0;
            case 0x1738C4u: goto label_1738c4;
            case 0x1738C8u: goto label_1738c8;
            case 0x1738CCu: goto label_1738cc;
            case 0x1738D0u: goto label_1738d0;
            case 0x1738D4u: goto label_1738d4;
            case 0x1738D8u: goto label_1738d8;
            case 0x1738DCu: goto label_1738dc;
            case 0x1738E0u: goto label_1738e0;
            case 0x1738E4u: goto label_1738e4;
            case 0x1738E8u: goto label_1738e8;
            case 0x1738ECu: goto label_1738ec;
            case 0x1738F0u: goto label_1738f0;
            case 0x1738F4u: goto label_1738f4;
            case 0x1738F8u: goto label_1738f8;
            case 0x1738FCu: goto label_1738fc;
            case 0x173900u: goto label_173900;
            case 0x173904u: goto label_173904;
            case 0x173908u: goto label_173908;
            case 0x17390Cu: goto label_17390c;
            case 0x173910u: goto label_173910;
            case 0x173914u: goto label_173914;
            case 0x173918u: goto label_173918;
            case 0x17391Cu: goto label_17391c;
            case 0x173920u: goto label_173920;
            case 0x173924u: goto label_173924;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173924u;
label_173924:
    // 0x173924: 0x0
    ctx->pc = 0x173924u;
    // NOP
}
