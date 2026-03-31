#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00132978
// Address: 0x132978 - 0x132a08
void sub_00132978_0x132978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x132978u;

label_132978:
    // 0x132978: 0x27bdfff0
    ctx->pc = 0x132978u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13297c:
    // 0x13297c: 0x14800006
label_132980:
    if (ctx->pc == 0x132980u) {
        ctx->pc = 0x132980u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x132984u;
        goto label_132984;
    }
    ctx->pc = 0x13297Cu;
    {
        const bool branch_taken_0x13297c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x132980u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13297c) {
            ctx->pc = 0x132998u;
            goto label_132998;
        }
    }
    ctx->pc = 0x132984u;
label_132984:
    // 0x132984: 0x3c040024
    ctx->pc = 0x132984u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_132988:
    // 0x132988: 0xdfbf0000
    ctx->pc = 0x132988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13298c:
    // 0x13298c: 0x2484b238
    ctx->pc = 0x13298cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947384));
label_132990:
    // 0x132990: 0x804a034
label_132994:
    if (ctx->pc == 0x132994u) {
        ctx->pc = 0x132994u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x132998u;
        goto label_132998;
    }
    ctx->pc = 0x132990u;
    ctx->pc = 0x132994u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1280D0u;
    sub_001280D0_0x1280d0(rdram, ctx, runtime); return;
    ctx->pc = 0x132998u;
label_132998:
    // 0x132998: 0xdfbf0000
    ctx->pc = 0x132998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13299c:
    // 0x13299c: 0xa485003e
    ctx->pc = 0x13299cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 62), (uint16_t)GPR_U32(ctx, 5));
label_1329a0:
    // 0x1329a0: 0x3e00008
label_1329a4:
    if (ctx->pc == 0x1329A4u) {
        ctx->pc = 0x1329A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1329A8u;
        goto label_1329a8;
    }
    ctx->pc = 0x1329A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1329A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132978u: goto label_132978;
            case 0x13297Cu: goto label_13297c;
            case 0x132980u: goto label_132980;
            case 0x132984u: goto label_132984;
            case 0x132988u: goto label_132988;
            case 0x13298Cu: goto label_13298c;
            case 0x132990u: goto label_132990;
            case 0x132994u: goto label_132994;
            case 0x132998u: goto label_132998;
            case 0x13299Cu: goto label_13299c;
            case 0x1329A0u: goto label_1329a0;
            case 0x1329A4u: goto label_1329a4;
            case 0x1329A8u: goto label_1329a8;
            case 0x1329ACu: goto label_1329ac;
            case 0x1329B0u: goto label_1329b0;
            case 0x1329B4u: goto label_1329b4;
            case 0x1329B8u: goto label_1329b8;
            case 0x1329BCu: goto label_1329bc;
            case 0x1329C0u: goto label_1329c0;
            case 0x1329C4u: goto label_1329c4;
            case 0x1329C8u: goto label_1329c8;
            case 0x1329CCu: goto label_1329cc;
            case 0x1329D0u: goto label_1329d0;
            case 0x1329D4u: goto label_1329d4;
            case 0x1329D8u: goto label_1329d8;
            case 0x1329DCu: goto label_1329dc;
            case 0x1329E0u: goto label_1329e0;
            case 0x1329E4u: goto label_1329e4;
            case 0x1329E8u: goto label_1329e8;
            case 0x1329ECu: goto label_1329ec;
            case 0x1329F0u: goto label_1329f0;
            case 0x1329F4u: goto label_1329f4;
            case 0x1329F8u: goto label_1329f8;
            case 0x1329FCu: goto label_1329fc;
            case 0x132A00u: goto label_132a00;
            case 0x132A04u: goto label_132a04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1329A8u;
label_1329a8:
    // 0x1329a8: 0x27bdfff0
    ctx->pc = 0x1329a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1329ac:
    // 0x1329ac: 0x14800006
label_1329b0:
    if (ctx->pc == 0x1329B0u) {
        ctx->pc = 0x1329B0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1329B4u;
        goto label_1329b4;
    }
    ctx->pc = 0x1329ACu;
    {
        const bool branch_taken_0x1329ac = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1329B0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1329ac) {
            ctx->pc = 0x1329C8u;
            goto label_1329c8;
        }
    }
    ctx->pc = 0x1329B4u;
label_1329b4:
    // 0x1329b4: 0x3c040024
    ctx->pc = 0x1329b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_1329b8:
    // 0x1329b8: 0xc04a034
label_1329bc:
    if (ctx->pc == 0x1329BCu) {
        ctx->pc = 0x1329BCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947432));
        ctx->pc = 0x1329C0u;
        goto label_1329c0;
    }
    ctx->pc = 0x1329B8u;
    SET_GPR_U32(ctx, 31, 0x1329C0u);
    ctx->pc = 0x1329BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947432));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1329C0u; }
    }
    if (ctx->pc != 0x1329C0u) { return; }
    ctx->pc = 0x1329C0u;
label_1329c0:
    // 0x1329c0: 0x1000000e
label_1329c4:
    if (ctx->pc == 0x1329C4u) {
        ctx->pc = 0x1329C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1329C8u;
        goto label_1329c8;
    }
    ctx->pc = 0x1329C0u;
    {
        const bool branch_taken_0x1329c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1329C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1329c0) {
            ctx->pc = 0x1329FCu;
            goto label_1329fc;
        }
    }
    ctx->pc = 0x1329C8u;
label_1329c8:
    // 0x1329c8: 0x8c830014
    ctx->pc = 0x1329c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1329cc:
    // 0x1329cc: 0x1060000a
label_1329d0:
    if (ctx->pc == 0x1329D0u) {
        ctx->pc = 0x1329D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1329D4u;
        goto label_1329d4;
    }
    ctx->pc = 0x1329CCu;
    {
        const bool branch_taken_0x1329cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1329D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1329cc) {
            ctx->pc = 0x1329F8u;
            goto label_1329f8;
        }
    }
    ctx->pc = 0x1329D4u;
label_1329d4:
    // 0x1329d4: 0x8c630000
    ctx->pc = 0x1329d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1329d8:
    // 0x1329d8: 0x8c620024
    ctx->pc = 0x1329d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1329dc:
    // 0x1329dc: 0x40f809
label_1329e0:
    if (ctx->pc == 0x1329E0u) {
        ctx->pc = 0x1329E0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1329E4u;
        goto label_1329e4;
    }
    ctx->pc = 0x1329DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1329E4u);
        ctx->pc = 0x1329E0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132978u: goto label_132978;
            case 0x13297Cu: goto label_13297c;
            case 0x132980u: goto label_132980;
            case 0x132984u: goto label_132984;
            case 0x132988u: goto label_132988;
            case 0x13298Cu: goto label_13298c;
            case 0x132990u: goto label_132990;
            case 0x132994u: goto label_132994;
            case 0x132998u: goto label_132998;
            case 0x13299Cu: goto label_13299c;
            case 0x1329A0u: goto label_1329a0;
            case 0x1329A4u: goto label_1329a4;
            case 0x1329A8u: goto label_1329a8;
            case 0x1329ACu: goto label_1329ac;
            case 0x1329B0u: goto label_1329b0;
            case 0x1329B4u: goto label_1329b4;
            case 0x1329B8u: goto label_1329b8;
            case 0x1329BCu: goto label_1329bc;
            case 0x1329C0u: goto label_1329c0;
            case 0x1329C4u: goto label_1329c4;
            case 0x1329C8u: goto label_1329c8;
            case 0x1329CCu: goto label_1329cc;
            case 0x1329D0u: goto label_1329d0;
            case 0x1329D4u: goto label_1329d4;
            case 0x1329D8u: goto label_1329d8;
            case 0x1329DCu: goto label_1329dc;
            case 0x1329E0u: goto label_1329e0;
            case 0x1329E4u: goto label_1329e4;
            case 0x1329E8u: goto label_1329e8;
            case 0x1329ECu: goto label_1329ec;
            case 0x1329F0u: goto label_1329f0;
            case 0x1329F4u: goto label_1329f4;
            case 0x1329F8u: goto label_1329f8;
            case 0x1329FCu: goto label_1329fc;
            case 0x132A00u: goto label_132a00;
            case 0x132A04u: goto label_132a04;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1329E4u; }
            if (ctx->pc != 0x1329E4u) { return; }
        }
    }
    ctx->pc = 0x1329E4u;
label_1329e4:
    // 0x1329e4: 0x244407ff
    ctx->pc = 0x1329e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2047));
label_1329e8:
    // 0x1329e8: 0x28430000
    ctx->pc = 0x1329e8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 0));
label_1329ec:
    // 0x1329ec: 0x83100b
    ctx->pc = 0x1329ecu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_1329f0:
    // 0x1329f0: 0x10000002
label_1329f4:
    if (ctx->pc == 0x1329F4u) {
        ctx->pc = 0x1329F4u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
        ctx->pc = 0x1329F8u;
        goto label_1329f8;
    }
    ctx->pc = 0x1329F0u;
    {
        const bool branch_taken_0x1329f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1329F4u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
        if (branch_taken_0x1329f0) {
            ctx->pc = 0x1329FCu;
            goto label_1329fc;
        }
    }
    ctx->pc = 0x1329F8u;
label_1329f8:
    // 0x1329f8: 0x102d
    ctx->pc = 0x1329f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1329fc:
    // 0x1329fc: 0xdfbf0000
    ctx->pc = 0x1329fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132a00:
    // 0x132a00: 0x3e00008
label_132a04:
    if (ctx->pc == 0x132A04u) {
        ctx->pc = 0x132A04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x132A08u;
        goto label_fallthrough_0x132a00;
    }
    ctx->pc = 0x132A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132A04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132978u: goto label_132978;
            case 0x13297Cu: goto label_13297c;
            case 0x132980u: goto label_132980;
            case 0x132984u: goto label_132984;
            case 0x132988u: goto label_132988;
            case 0x13298Cu: goto label_13298c;
            case 0x132990u: goto label_132990;
            case 0x132994u: goto label_132994;
            case 0x132998u: goto label_132998;
            case 0x13299Cu: goto label_13299c;
            case 0x1329A0u: goto label_1329a0;
            case 0x1329A4u: goto label_1329a4;
            case 0x1329A8u: goto label_1329a8;
            case 0x1329ACu: goto label_1329ac;
            case 0x1329B0u: goto label_1329b0;
            case 0x1329B4u: goto label_1329b4;
            case 0x1329B8u: goto label_1329b8;
            case 0x1329BCu: goto label_1329bc;
            case 0x1329C0u: goto label_1329c0;
            case 0x1329C4u: goto label_1329c4;
            case 0x1329C8u: goto label_1329c8;
            case 0x1329CCu: goto label_1329cc;
            case 0x1329D0u: goto label_1329d0;
            case 0x1329D4u: goto label_1329d4;
            case 0x1329D8u: goto label_1329d8;
            case 0x1329DCu: goto label_1329dc;
            case 0x1329E0u: goto label_1329e0;
            case 0x1329E4u: goto label_1329e4;
            case 0x1329E8u: goto label_1329e8;
            case 0x1329ECu: goto label_1329ec;
            case 0x1329F0u: goto label_1329f0;
            case 0x1329F4u: goto label_1329f4;
            case 0x1329F8u: goto label_1329f8;
            case 0x1329FCu: goto label_1329fc;
            case 0x132A00u: goto label_132a00;
            case 0x132A04u: goto label_132a04;
            default: break;
        }
        return;
    }
label_fallthrough_0x132a00:
    ctx->pc = 0x132A08u;
}
