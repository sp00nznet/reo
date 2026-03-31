#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00100E18
// Address: 0x100e18 - 0x100e88
void sub_00100E18_0x100e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x100e18u;

    // 0x100e18: 0x27bdffe0
    ctx->pc = 0x100e18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x100e1c: 0xffbf0010
    ctx->pc = 0x100e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100e20: 0x14800011
    ctx->pc = 0x100E20u;
    {
        const bool branch_taken_0x100e20 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x100E24u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x100e20) {
            ctx->pc = 0x100E68u;
            goto label_100e68;
        }
    }
    ctx->pc = 0x100E28u;
    // 0x100e28: 0x3c020020
    ctx->pc = 0x100e28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
    // 0x100e2c: 0x8c437910
    ctx->pc = 0x100e2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x100e30: 0x18600003
    ctx->pc = 0x100E30u;
    {
        const bool branch_taken_0x100e30 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x100E34u;
        SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
        if (branch_taken_0x100e30) {
            ctx->pc = 0x100E40u;
            goto label_100e40;
        }
    }
    ctx->pc = 0x100E38u;
    // 0x100e38: 0xc045a12
    ctx->pc = 0x100E38u;
    SET_GPR_U32(ctx, 31, 0x100E40u);
    ctx->pc = 0x100E3Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30056));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E40u; }
    }
    if (ctx->pc != 0x100E40u) { return; }
    ctx->pc = 0x100E40u;
label_100e40:
    // 0x100e40: 0x10000003
    ctx->pc = 0x100E40u;
    {
        const bool branch_taken_0x100e40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x100E44u;
        SET_GPR_U32(ctx, 16, ((uint32_t)33 << 16));
        if (branch_taken_0x100e40) {
            ctx->pc = 0x100E50u;
            goto label_100e50;
        }
    }
    ctx->pc = 0x100E48u;
label_100e48:
    // 0x100e48: 0xc0455a0
    ctx->pc = 0x100E48u;
    SET_GPR_U32(ctx, 31, 0x100E50u);
    ctx->pc = 0x100E4Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4000));
    ctx->pc = 0x115680u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00115680_0x115680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E50u; }
    }
    if (ctx->pc != 0x100E50u) { return; }
    ctx->pc = 0x100E50u;
label_100e50:
    // 0x100e50: 0xc045ef8
    ctx->pc = 0x100E50u;
    SET_GPR_U32(ctx, 31, 0x100E58u);
    ctx->pc = 0x100E54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294939776));
    ctx->pc = 0x117BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117BE0_0x117be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E58u; }
    }
    if (ctx->pc != 0x100E58u) { return; }
    ctx->pc = 0x100E58u;
    // 0x100e58: 0x1440fffb
    ctx->pc = 0x100E58u;
    {
        const bool branch_taken_0x100e58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x100E5Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x100e58) {
            ctx->pc = 0x100E48u;
            goto label_100e48;
        }
    }
    ctx->pc = 0x100E60u;
    // 0x100e60: 0x10000005
    ctx->pc = 0x100E60u;
    {
        const bool branch_taken_0x100e60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x100E64u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x100e60) {
            ctx->pc = 0x100E78u;
            goto label_100e78;
        }
    }
    ctx->pc = 0x100E68u;
label_100e68:
    // 0x100e68: 0x3c040021
    ctx->pc = 0x100e68u;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
    // 0x100e6c: 0xc045ef8
    ctx->pc = 0x100E6Cu;
    SET_GPR_U32(ctx, 31, 0x100E74u);
    ctx->pc = 0x100E70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939776));
    ctx->pc = 0x117BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117BE0_0x117be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E74u; }
    }
    if (ctx->pc != 0x100E74u) { return; }
    ctx->pc = 0x100E74u;
    // 0x100e74: 0xdfbf0010
    ctx->pc = 0x100e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_100e78:
    // 0x100e78: 0xdfb00000
    ctx->pc = 0x100e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100e7c: 0x3e00008
    ctx->pc = 0x100E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100E80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100E40u: goto label_100e40;
            case 0x100E48u: goto label_100e48;
            case 0x100E50u: goto label_100e50;
            case 0x100E68u: goto label_100e68;
            case 0x100E78u: goto label_100e78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x100E84u;
    // 0x100e84: 0x0
    ctx->pc = 0x100e84u;
    // NOP
}
