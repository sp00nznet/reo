#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00178A78
// Address: 0x178a78 - 0x178af8
void sub_00178A78_0x178a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x178a78u;

    // 0x178a78: 0x27bdffe0
    ctx->pc = 0x178a78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178a7c: 0x24050008
    ctx->pc = 0x178a7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x178a80: 0xffb00000
    ctx->pc = 0x178a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178a84: 0x80802d
    ctx->pc = 0x178a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a88: 0xffb10008
    ctx->pc = 0x178a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178a8c: 0xffbf0010
    ctx->pc = 0x178a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x178a90: 0xc05df1e
    ctx->pc = 0x178A90u;
    SET_GPR_U32(ctx, 31, 0x178A98u);
    ctx->pc = 0x178A94u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x177C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C78_0x177c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178A98u; }
    }
    if (ctx->pc != 0x178A98u) { return; }
    ctx->pc = 0x178A98u;
    // 0x178a98: 0x10510011
    ctx->pc = 0x178A98u;
    {
        const bool branch_taken_0x178a98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x178A9Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178a98) {
            ctx->pc = 0x178AE0u;
            goto label_178ae0;
        }
    }
    ctx->pc = 0x178AA0u;
    // 0x178aa0: 0xc059f40
    ctx->pc = 0x178AA0u;
    SET_GPR_U32(ctx, 31, 0x178AA8u);
    ctx->pc = 0x178AA4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 7376)));
    ctx->pc = 0x167D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D00_0x167d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AA8u; }
    }
    if (ctx->pc != 0x178AA8u) { return; }
    ctx->pc = 0x178AA8u;
    // 0x178aa8: 0x1451000d
    ctx->pc = 0x178AA8u;
    {
        const bool branch_taken_0x178aa8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x178AACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178aa8) {
            ctx->pc = 0x178AE0u;
            goto label_178ae0;
        }
    }
    ctx->pc = 0x178AB0u;
    // 0x178ab0: 0xc05e2be
    ctx->pc = 0x178AB0u;
    SET_GPR_U32(ctx, 31, 0x178AB8u);
    ctx->pc = 0x178AF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00178AF8_0x178af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AB8u; }
    }
    if (ctx->pc != 0x178AB8u) { return; }
    ctx->pc = 0x178AB8u;
    // 0x178ab8: 0x10400009
    ctx->pc = 0x178AB8u;
    {
        const bool branch_taken_0x178ab8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x178ABCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178ab8) {
            ctx->pc = 0x178AE0u;
            goto label_178ae0;
        }
    }
    ctx->pc = 0x178AC0u;
    // 0x178ac0: 0xdfb00000
    ctx->pc = 0x178ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178ac4: 0xdfb10008
    ctx->pc = 0x178ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178ac8: 0x24050008
    ctx->pc = 0x178ac8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x178acc: 0xdfbf0010
    ctx->pc = 0x178accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178ad0: 0x24060001
    ctx->pc = 0x178ad0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x178ad4: 0x805df18
    ctx->pc = 0x178AD4u;
    ctx->pc = 0x178AD8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x177C60u;
    entry_177c60_0x177c78(rdram, ctx, runtime); return;
    ctx->pc = 0x178ADCu;
    // 0x178adc: 0x0
    ctx->pc = 0x178adcu;
    // NOP
label_178ae0:
    // 0x178ae0: 0xdfb00000
    ctx->pc = 0x178ae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178ae4: 0xdfb10008
    ctx->pc = 0x178ae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178ae8: 0xdfbf0010
    ctx->pc = 0x178ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178aec: 0x3e00008
    ctx->pc = 0x178AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178AF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178AE0u: goto label_178ae0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178AF4u;
    // 0x178af4: 0x0
    ctx->pc = 0x178af4u;
    // NOP
}
