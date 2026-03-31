#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001115D0
// Address: 0x1115d0 - 0x111648
void sub_001115D0_0x1115d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1115d0u;

    // 0x1115d0: 0x27bdffe0
    ctx->pc = 0x1115d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1115d4: 0xffb10008
    ctx->pc = 0x1115d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1115d8: 0x882d
    ctx->pc = 0x1115d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115dc: 0x220282d
    ctx->pc = 0x1115dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115e0: 0xffb00000
    ctx->pc = 0x1115e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1115e4: 0xffbf0010
    ctx->pc = 0x1115e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1115e8: 0x80802d
    ctx->pc = 0x1115e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115ec: 0xc0448a6
    ctx->pc = 0x1115ECu;
    SET_GPR_U32(ctx, 31, 0x1115F4u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1115F4u; }
    }
    if (ctx->pc != 0x1115F4u) { return; }
    ctx->pc = 0x1115F4u;
    // 0x1115f4: 0x200202d
    ctx->pc = 0x1115f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115f8: 0x200282d
    ctx->pc = 0x1115f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115fc: 0x443000e
    ctx->pc = 0x1115FCu;
    {
        const bool branch_taken_0x1115fc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1115fc) {
            ctx->pc = 0x111600u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x111638u;
            goto label_111638;
        }
    }
    ctx->pc = 0x111604u;
    // 0x111604: 0x220202d
    ctx->pc = 0x111604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111608: 0xc044752
    ctx->pc = 0x111608u;
    SET_GPR_U32(ctx, 31, 0x111610u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111610u; }
    }
    if (ctx->pc != 0x111610u) { return; }
    ctx->pc = 0x111610u;
    // 0x111610: 0x40202d
    ctx->pc = 0x111610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111614: 0xc04452e
    ctx->pc = 0x111614u;
    SET_GPR_U32(ctx, 31, 0x11161Cu);
    ctx->pc = 0x1114B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001114B8_0x1114b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11161Cu; }
    }
    if (ctx->pc != 0x11161Cu) { return; }
    ctx->pc = 0x11161Cu;
    // 0x11161c: 0xdfb00000
    ctx->pc = 0x11161cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111620: 0x2102f
    ctx->pc = 0x111620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x111624: 0xdfb10008
    ctx->pc = 0x111624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x111628: 0xdfbf0010
    ctx->pc = 0x111628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11162c: 0x3e00008
    ctx->pc = 0x11162Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111630u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111638u: goto label_111638;
            default: break;
        }
        return;
    }
    ctx->pc = 0x111634u;
    // 0x111634: 0x0
    ctx->pc = 0x111634u;
    // NOP
label_111638:
    // 0x111638: 0xdfb10008
    ctx->pc = 0x111638u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11163c: 0xdfbf0010
    ctx->pc = 0x11163cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111640: 0x804452e
    ctx->pc = 0x111640u;
    ctx->pc = 0x111644u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1114B8u;
    sub_001114B8_0x1114b8(rdram, ctx, runtime); return;
    ctx->pc = 0x111648u;
}
