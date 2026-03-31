#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00102F08
// Address: 0x102f08 - 0x102f78
void sub_00102F08_0x102f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x102f08u;

    // 0x102f08: 0x27bdffc0
    ctx->pc = 0x102f08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x102f0c: 0xffb10010
    ctx->pc = 0x102f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x102f10: 0xffb00000
    ctx->pc = 0x102f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102f14: 0x3c110100
    ctx->pc = 0x102f14u;
    SET_GPR_U32(ctx, 17, ((uint32_t)256 << 16));
    // 0x102f18: 0xffbf0030
    ctx->pc = 0x102f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x102f1c: 0x80802d
    ctx->pc = 0x102f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102f20: 0xffb20020
    ctx->pc = 0x102f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x102f24: 0x8e020000
    ctx->pc = 0x102f24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102f28: 0x30420100
    ctx->pc = 0x102f28u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x102f2c: 0x1040000c
    ctx->pc = 0x102F2Cu;
    {
        const bool branch_taken_0x102f2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x102F30u;
        SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
        if (branch_taken_0x102f2c) {
            ctx->pc = 0x102F60u;
            goto label_102f60;
        }
    }
    ctx->pc = 0x102F34u;
    // 0x102f34: 0x2631ffff
    ctx->pc = 0x102f34u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_102f38:
    // 0x102f38: 0x6210005
    ctx->pc = 0x102F38u;
    {
        const bool branch_taken_0x102f38 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x102f38) {
            ctx->pc = 0x102F50u;
            goto label_102f50;
        }
    }
    ctx->pc = 0x102F40u;
    // 0x102f40: 0xc045a12
    ctx->pc = 0x102F40u;
    SET_GPR_U32(ctx, 31, 0x102F48u);
    ctx->pc = 0x102F44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 30456));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102F48u; }
    }
    if (ctx->pc != 0x102F48u) { return; }
    ctx->pc = 0x102F48u;
    // 0x102f48: 0xc040da8
    ctx->pc = 0x102F48u;
    SET_GPR_U32(ctx, 31, 0x102F50u);
    ctx->pc = 0x102F4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1036A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001036A0_0x1036a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102F50u; }
    }
    if (ctx->pc != 0x102F50u) { return; }
    ctx->pc = 0x102F50u;
label_102f50:
    // 0x102f50: 0x8e020000
    ctx->pc = 0x102f50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102f54: 0x30420100
    ctx->pc = 0x102f54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x102f58: 0x1440fff7
    ctx->pc = 0x102F58u;
    {
        const bool branch_taken_0x102f58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x102F5Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
        if (branch_taken_0x102f58) {
            ctx->pc = 0x102F38u;
            goto label_102f38;
        }
    }
    ctx->pc = 0x102F60u;
label_102f60:
    // 0x102f60: 0xdfbf0030
    ctx->pc = 0x102f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102f64: 0xdfb20020
    ctx->pc = 0x102f64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102f68: 0xdfb10010
    ctx->pc = 0x102f68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102f6c: 0xdfb00000
    ctx->pc = 0x102f6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102f70: 0x3e00008
    ctx->pc = 0x102F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102F74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102F38u: goto label_102f38;
            case 0x102F50u: goto label_102f50;
            case 0x102F60u: goto label_102f60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102F78u;
}
