#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015D9D8
// Address: 0x15d9d8 - 0x15da28
void sub_0015D9D8_0x15d9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15d9d8u;

    // 0x15d9d8: 0x27bdffe0
    ctx->pc = 0x15d9d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15d9dc: 0xffb00000
    ctx->pc = 0x15d9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15d9e0: 0x80802d
    ctx->pc = 0x15d9e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d9e4: 0xffb10008
    ctx->pc = 0x15d9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15d9e8: 0xa0882d
    ctx->pc = 0x15d9e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d9ec: 0xffbf0010
    ctx->pc = 0x15d9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15d9f0: 0x8e23002c
    ctx->pc = 0x15d9f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x15d9f4: 0x8e0200fc
    ctx->pc = 0x15d9f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x15d9f8: 0x43102a
    ctx->pc = 0x15d9f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x15d9fc: 0x50400005
    ctx->pc = 0x15D9FCu;
    {
        const bool branch_taken_0x15d9fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x15d9fc) {
            ctx->pc = 0x15DA00u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
            ctx->pc = 0x15DA14u;
            goto label_15da14;
        }
    }
    ctx->pc = 0x15DA04u;
    // 0x15da04: 0xc0586a0
    ctx->pc = 0x15DA04u;
    SET_GPR_U32(ctx, 31, 0x15DA0Cu);
    ctx->pc = 0x161A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00161A80_0x161a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DA0Cu; }
    }
    if (ctx->pc != 0x15DA0Cu) { return; }
    ctx->pc = 0x15DA0Cu;
    // 0x15da0c: 0x8e23002c
    ctx->pc = 0x15da0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x15da10: 0xae0300fc
    ctx->pc = 0x15da10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
label_15da14:
    // 0x15da14: 0xdfb10008
    ctx->pc = 0x15da14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15da18: 0xdfb00000
    ctx->pc = 0x15da18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15da1c: 0xdfbf0010
    ctx->pc = 0x15da1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15da20: 0x3e00008
    ctx->pc = 0x15DA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DA24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15DA14u: goto label_15da14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15DA28u;
}
