#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A7F50
// Address: 0x1a7f50 - 0x1a7fb0
void sub_001A7F50_0x1a7f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a7f50u;

    // 0x1a7f50: 0x27bdfff0
    ctx->pc = 0x1a7f50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a7f54: 0x10800008
    ctx->pc = 0x1A7F54u;
    {
        const bool branch_taken_0x1a7f54 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7F58u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1a7f54) {
            ctx->pc = 0x1A7F78u;
            goto label_1a7f78;
        }
    }
    ctx->pc = 0x1A7F5Cu;
    // 0x1a7f5c: 0x3c010023
    ctx->pc = 0x1a7f5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1a7f60: 0xc04519c
    ctx->pc = 0x1A7F60u;
    SET_GPR_U32(ctx, 31, 0x1A7F68u);
    ctx->pc = 0x1A7F64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4480)));
    ctx->pc = 0x114670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114670_0x114670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F68u; }
    }
    if (ctx->pc != 0x1A7F68u) { return; }
    ctx->pc = 0x1A7F68u;
    // 0x1a7f68: 0x4410006
    ctx->pc = 0x1A7F68u;
    {
        const bool branch_taken_0x1a7f68 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a7f68) {
            ctx->pc = 0x1A7F84u;
            goto label_1a7f84;
        }
    }
    ctx->pc = 0x1A7F70u;
    // 0x1a7f70: 0x10000008
    ctx->pc = 0x1A7F70u;
    {
        const bool branch_taken_0x1a7f70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7F74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1a7f70) {
            ctx->pc = 0x1A7F94u;
            goto label_1a7f94;
        }
    }
    ctx->pc = 0x1A7F78u;
label_1a7f78:
    // 0x1a7f78: 0x3c010023
    ctx->pc = 0x1a7f78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1a7f7c: 0xc045198
    ctx->pc = 0x1A7F7Cu;
    SET_GPR_U32(ctx, 31, 0x1A7F84u);
    ctx->pc = 0x1A7F80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4480)));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F84u; }
    }
    if (ctx->pc != 0x1A7F84u) { return; }
    ctx->pc = 0x1A7F84u;
label_1a7f84:
    // 0x1a7f84: 0x3c010023
    ctx->pc = 0x1a7f84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1a7f88: 0xc045190
    ctx->pc = 0x1A7F88u;
    SET_GPR_U32(ctx, 31, 0x1A7F90u);
    ctx->pc = 0x1A7F8Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4480)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F90u; }
    }
    if (ctx->pc != 0x1A7F90u) { return; }
    ctx->pc = 0x1A7F90u;
    // 0x1a7f90: 0x102d
    ctx->pc = 0x1a7f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7f94:
    // 0x1a7f94: 0xdfbf0000
    ctx->pc = 0x1a7f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7f98: 0x3e00008
    ctx->pc = 0x1A7F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7F9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7F78u: goto label_1a7f78;
            case 0x1A7F84u: goto label_1a7f84;
            case 0x1A7F94u: goto label_1a7f94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7FA0u;
    // 0x1a7fa0: 0x8045194
    ctx->pc = 0x1A7FA0u;
    ctx->pc = 0x114650u;
    sub_00114650_0x114650(rdram, ctx, runtime); return;
    ctx->pc = 0x1A7FA8u;
    // 0x1a7fa8: 0x0
    ctx->pc = 0x1a7fa8u;
    // NOP
    // 0x1a7fac: 0x0
    ctx->pc = 0x1a7facu;
    // NOP
}
