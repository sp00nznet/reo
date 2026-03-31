#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011CFF0
// Address: 0x11cff0 - 0x11d0d0
void sub_0011CFF0_0x11cff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11cff0u;

label_11cff0:
    // 0x11cff0: 0x24030056
    ctx->pc = 0x11cff0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 86));
    // 0x11cff4: 0xc
    ctx->pc = 0x11cff4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x11cff8: 0x3e00008
    ctx->pc = 0x11CFF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CFF0u: goto label_11cff0;
            case 0x11D01Cu: goto label_11d01c;
            case 0x11D024u: goto label_11d024;
            case 0x11D0BCu: goto label_11d0bc;
            case 0x11D0C8u: goto label_11d0c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D000u;
    // 0x11d000: 0x27bdfff0
    ctx->pc = 0x11d000u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d004: 0x2482fff3
    ctx->pc = 0x11d004u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967283));
    // 0x11d008: 0x2c420023
    ctx->pc = 0x11d008u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 35));
    // 0x11d00c: 0x14400003
    ctx->pc = 0x11D00Cu;
    {
        const bool branch_taken_0x11d00c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11D010u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x11d00c) {
            ctx->pc = 0x11D01Cu;
            goto label_11d01c;
        }
    }
    ctx->pc = 0x11D014u;
    // 0x11d014: 0x10000003
    ctx->pc = 0x11D014u;
    {
        const bool branch_taken_0x11d014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D018u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x11d014) {
            ctx->pc = 0x11D024u;
            goto label_11d024;
        }
    }
    ctx->pc = 0x11D01Cu;
label_11d01c:
    // 0x11d01c: 0xc0473fc
    ctx->pc = 0x11D01Cu;
    SET_GPR_U32(ctx, 31, 0x11D024u);
    ctx->pc = 0x11CFF0u;
    goto label_11cff0;
    ctx->pc = 0x11D024u;
label_11d024:
    // 0x11d024: 0xdfbf0000
    ctx->pc = 0x11d024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d028: 0x3e00008
    ctx->pc = 0x11D028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D02Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CFF0u: goto label_11cff0;
            case 0x11D01Cu: goto label_11d01c;
            case 0x11D024u: goto label_11d024;
            case 0x11D0BCu: goto label_11d0bc;
            case 0x11D0C8u: goto label_11d0c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D030u;
    // 0x11d030: 0x2403ffaa
    ctx->pc = 0x11d030u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967210));
    // 0x11d034: 0xc
    ctx->pc = 0x11d034u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x11d038: 0x3e00008
    ctx->pc = 0x11D038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CFF0u: goto label_11cff0;
            case 0x11D01Cu: goto label_11d01c;
            case 0x11D024u: goto label_11d024;
            case 0x11D0BCu: goto label_11d0bc;
            case 0x11D0C8u: goto label_11d0c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D040u;
    // 0x11d040: 0x24030057
    ctx->pc = 0x11d040u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 87));
    // 0x11d044: 0xc
    ctx->pc = 0x11d044u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x11d048: 0x3e00008
    ctx->pc = 0x11D048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CFF0u: goto label_11cff0;
            case 0x11D01Cu: goto label_11d01c;
            case 0x11D024u: goto label_11d024;
            case 0x11D0BCu: goto label_11d0bc;
            case 0x11D0C8u: goto label_11d0c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D050u;
    // 0x11d050: 0x2403ffa9
    ctx->pc = 0x11d050u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967209));
    // 0x11d054: 0xc
    ctx->pc = 0x11d054u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x11d058: 0x3e00008
    ctx->pc = 0x11D058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CFF0u: goto label_11cff0;
            case 0x11D01Cu: goto label_11d01c;
            case 0x11D024u: goto label_11d024;
            case 0x11D0BCu: goto label_11d0bc;
            case 0x11D0C8u: goto label_11d0c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D060u;
    // 0x11d060: 0x24030058
    ctx->pc = 0x11d060u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 88));
    // 0x11d064: 0xc
    ctx->pc = 0x11d064u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x11d068: 0x3e00008
    ctx->pc = 0x11D068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CFF0u: goto label_11cff0;
            case 0x11D01Cu: goto label_11d01c;
            case 0x11D024u: goto label_11d024;
            case 0x11D0BCu: goto label_11d0bc;
            case 0x11D0C8u: goto label_11d0c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D070u;
    // 0x11d070: 0x2403ffa8
    ctx->pc = 0x11d070u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967208));
    // 0x11d074: 0xc
    ctx->pc = 0x11d074u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x11d078: 0x3e00008
    ctx->pc = 0x11D078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CFF0u: goto label_11cff0;
            case 0x11D01Cu: goto label_11d01c;
            case 0x11D024u: goto label_11d024;
            case 0x11D0BCu: goto label_11d0bc;
            case 0x11D0C8u: goto label_11d0c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D080u;
    // 0x11d080: 0x24030059
    ctx->pc = 0x11d080u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 89));
    // 0x11d084: 0xc
    ctx->pc = 0x11d084u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x11d088: 0x3e00008
    ctx->pc = 0x11D088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CFF0u: goto label_11cff0;
            case 0x11D01Cu: goto label_11d01c;
            case 0x11D024u: goto label_11d024;
            case 0x11D0BCu: goto label_11d0bc;
            case 0x11D0C8u: goto label_11d0c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D090u;
    // 0x11d090: 0x27bdfff0
    ctx->pc = 0x11d090u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d094: 0xffbf0000
    ctx->pc = 0x11d094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d098: 0xc0452a0
    ctx->pc = 0x11D098u;
    SET_GPR_U32(ctx, 31, 0x11D0A0u);
    ctx->pc = 0x114A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A80_0x114a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0A0u; }
    }
    if (ctx->pc != 0x11D0A0u) { return; }
    ctx->pc = 0x11D0A0u;
    // 0x11d0a0: 0x3c030200
    ctx->pc = 0x11d0a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
    // 0x11d0a4: 0x14430005
    ctx->pc = 0x11D0A4u;
    {
        const bool branch_taken_0x11d0a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x11d0a4) {
            ctx->pc = 0x11D0BCu;
            goto label_11d0bc;
        }
    }
    ctx->pc = 0x11D0ACu;
    // 0x11d0ac: 0xc047434
    ctx->pc = 0x11D0ACu;
    SET_GPR_U32(ctx, 31, 0x11D0B4u);
    ctx->pc = 0x11D0D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D0D0_0x11d0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0B4u; }
    }
    if (ctx->pc != 0x11D0B4u) { return; }
    ctx->pc = 0x11D0B4u;
    // 0x11d0b4: 0x10000004
    ctx->pc = 0x11D0B4u;
    {
        const bool branch_taken_0x11d0b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D0B8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x11d0b4) {
            ctx->pc = 0x11D0C8u;
            goto label_11d0c8;
        }
    }
    ctx->pc = 0x11D0BCu;
label_11d0bc:
    // 0x11d0bc: 0xc0452a4
    ctx->pc = 0x11D0BCu;
    SET_GPR_U32(ctx, 31, 0x11D0C4u);
    ctx->pc = 0x114A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A90_0x114a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0C4u; }
    }
    if (ctx->pc != 0x11D0C4u) { return; }
    ctx->pc = 0x11D0C4u;
    // 0x11d0c4: 0xdfbf0000
    ctx->pc = 0x11d0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11d0c8:
    // 0x11d0c8: 0x3e00008
    ctx->pc = 0x11D0C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D0CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CFF0u: goto label_11cff0;
            case 0x11D01Cu: goto label_11d01c;
            case 0x11D024u: goto label_11d024;
            case 0x11D0BCu: goto label_11d0bc;
            case 0x11D0C8u: goto label_11d0c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D0D0u;
}
