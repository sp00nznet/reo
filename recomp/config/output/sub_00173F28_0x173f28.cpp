#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00173F28
// Address: 0x173f28 - 0x173fb0
void sub_00173F28_0x173f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x173f28u;

    // 0x173f28: 0x27bdfff0
    ctx->pc = 0x173f28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173f2c: 0xffb00000
    ctx->pc = 0x173f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173f30: 0xffbf0008
    ctx->pc = 0x173f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x173f34: 0xc05a78c
    ctx->pc = 0x173F34u;
    SET_GPR_U32(ctx, 31, 0x173F3Cu);
    ctx->pc = 0x173F38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F3Cu; }
    }
    if (ctx->pc != 0x173F3Cu) { return; }
    ctx->pc = 0x173F3Cu;
    // 0x173f3c: 0x3c05ff00
    ctx->pc = 0x173f3cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x173f40: 0x200202d
    ctx->pc = 0x173f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f44: 0x24060001
    ctx->pc = 0x173f44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x173f48: 0x10400007
    ctx->pc = 0x173F48u;
    {
        const bool branch_taken_0x173f48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x173F4Cu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 309));
        if (branch_taken_0x173f48) {
            ctx->pc = 0x173F68u;
            goto label_173f68;
        }
    }
    ctx->pc = 0x173F50u;
    // 0x173f50: 0xdfb00000
    ctx->pc = 0x173f50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173f54: 0x202d
    ctx->pc = 0x173f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f58: 0xdfbf0008
    ctx->pc = 0x173f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173f5c: 0x805a704
    ctx->pc = 0x173F5Cu;
    ctx->pc = 0x173F60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x173F64u;
    // 0x173f64: 0x0
    ctx->pc = 0x173f64u;
    // NOP
label_173f68:
    // 0x173f68: 0xc059f38
    ctx->pc = 0x173F68u;
    SET_GPR_U32(ctx, 31, 0x173F70u);
    ctx->pc = 0x173F6Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 6836)));
    ctx->pc = 0x167CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167CE0_0x167ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F70u; }
    }
    if (ctx->pc != 0x173F70u) { return; }
    ctx->pc = 0x173F70u;
    // 0x173f70: 0x24020001
    ctx->pc = 0x173f70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x173f74: 0xae020044
    ctx->pc = 0x173f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x173f78: 0x102d
    ctx->pc = 0x173f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f7c: 0xdfb00000
    ctx->pc = 0x173f7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173f80: 0xdfbf0008
    ctx->pc = 0x173f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173f84: 0x3e00008
    ctx->pc = 0x173F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173F88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173F68u: goto label_173f68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173F8Cu;
    // 0x173f8c: 0x0
    ctx->pc = 0x173f8cu;
    // NOP
    // 0x173f90: 0x27bdfff0
    ctx->pc = 0x173f90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173f94: 0xffbf0000
    ctx->pc = 0x173f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173f98: 0xc059f40
    ctx->pc = 0x173F98u;
    SET_GPR_U32(ctx, 31, 0x173FA0u);
    ctx->pc = 0x173F9Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 6836)));
    ctx->pc = 0x167D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D00_0x167d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173FA0u; }
    }
    if (ctx->pc != 0x173FA0u) { return; }
    ctx->pc = 0x173FA0u;
    // 0x173fa0: 0xdfbf0000
    ctx->pc = 0x173fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173fa4: 0x2102b
    ctx->pc = 0x173fa4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x173fa8: 0x3e00008
    ctx->pc = 0x173FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173FACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173F68u: goto label_173f68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173FB0u;
}
