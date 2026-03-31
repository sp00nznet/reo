#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019EE90
// Address: 0x19ee90 - 0x19eed0
void sub_0019EE90_0x19ee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19ee90u;

    // 0x19ee90: 0x27bdfff0
    ctx->pc = 0x19ee90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19ee94: 0x10000003
    ctx->pc = 0x19EE94u;
    {
        const bool branch_taken_0x19ee94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EE98u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x19ee94) {
            ctx->pc = 0x19EEA4u;
            goto label_19eea4;
        }
    }
    ctx->pc = 0x19EE9Cu;
label_19ee9c:
    // 0x19ee9c: 0xc067adc
    ctx->pc = 0x19EE9Cu;
    SET_GPR_U32(ctx, 31, 0x19EEA4u);
    ctx->pc = 0x19EB70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EB70_0x19eb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EEA4u; }
    }
    if (ctx->pc != 0x19EEA4u) { return; }
    ctx->pc = 0x19EEA4u;
label_19eea4:
    // 0x19eea4: 0x3c01002a
    ctx->pc = 0x19eea4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19eea8: 0x8c24bed0
    ctx->pc = 0x19eea8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294950608)));
    // 0x19eeac: 0x0
    ctx->pc = 0x19eeacu;
    // NOP
    // 0x19eeb0: 0x0
    ctx->pc = 0x19eeb0u;
    // NOP
    // 0x19eeb4: 0x1480fff9
    ctx->pc = 0x19EEB4u;
    {
        const bool branch_taken_0x19eeb4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x19eeb4) {
            ctx->pc = 0x19EE9Cu;
            goto label_19ee9c;
        }
    }
    ctx->pc = 0x19EEBCu;
    // 0x19eebc: 0xdfbf0000
    ctx->pc = 0x19eebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19eec0: 0x24020001
    ctx->pc = 0x19eec0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19eec4: 0x3e00008
    ctx->pc = 0x19EEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EEC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19EE9Cu: goto label_19ee9c;
            case 0x19EEA4u: goto label_19eea4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19EECCu;
    // 0x19eecc: 0x0
    ctx->pc = 0x19eeccu;
    // NOP
}
