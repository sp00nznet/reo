#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00167E38
// Address: 0x167e38 - 0x167e80
void sub_00167E38_0x167e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x167e38u;

    // 0x167e38: 0x27bdfff0
    ctx->pc = 0x167e38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x167e3c: 0x24050031
    ctx->pc = 0x167e3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 49));
    // 0x167e40: 0xffb00000
    ctx->pc = 0x167e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x167e44: 0xffbf0008
    ctx->pc = 0x167e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x167e48: 0xc05d58a
    ctx->pc = 0x167E48u;
    SET_GPR_U32(ctx, 31, 0x167E50u);
    ctx->pc = 0x167E4Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167E50u; }
    }
    if (ctx->pc != 0x167E50u) { return; }
    ctx->pc = 0x167E50u;
    // 0x167e50: 0x200202d
    ctx->pc = 0x167e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e54: 0x14400005
    ctx->pc = 0x167E54u;
    {
        const bool branch_taken_0x167e54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x167E58u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x167e54) {
            ctx->pc = 0x167E6Cu;
            goto label_167e6c;
        }
    }
    ctx->pc = 0x167E5Cu;
    // 0x167e5c: 0xc05d58a
    ctx->pc = 0x167E5Cu;
    SET_GPR_U32(ctx, 31, 0x167E64u);
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167E64u; }
    }
    if (ctx->pc != 0x167E64u) { return; }
    ctx->pc = 0x167E64u;
    // 0x167e64: 0x10400003
    ctx->pc = 0x167E64u;
    {
        const bool branch_taken_0x167e64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x167E68u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x167e64) {
            ctx->pc = 0x167E74u;
            goto label_167e74;
        }
    }
    ctx->pc = 0x167E6Cu;
label_167e6c:
    // 0x167e6c: 0x24020001
    ctx->pc = 0x167e6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x167e70: 0xdfb00000
    ctx->pc = 0x167e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_167e74:
    // 0x167e74: 0xdfbf0008
    ctx->pc = 0x167e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x167e78: 0x3e00008
    ctx->pc = 0x167E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167E7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167E6Cu: goto label_167e6c;
            case 0x167E74u: goto label_167e74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167E80u;
}
