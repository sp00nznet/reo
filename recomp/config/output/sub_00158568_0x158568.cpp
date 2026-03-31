#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00158568
// Address: 0x158568 - 0x1585b8
void sub_00158568_0x158568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x158568u;

    // 0x158568: 0x27bdfff0
    ctx->pc = 0x158568u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15856c: 0xffb00000
    ctx->pc = 0x15856cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x158570: 0xffbf0008
    ctx->pc = 0x158570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x158574: 0xc0560f2
    ctx->pc = 0x158574u;
    SET_GPR_U32(ctx, 31, 0x15857Cu);
    ctx->pc = 0x158578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1583C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001583C8_0x1583c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15857Cu; }
    }
    if (ctx->pc != 0x15857Cu) { return; }
    ctx->pc = 0x15857Cu;
    // 0x15857c: 0x3c05ff02
    ctx->pc = 0x15857cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65282 << 16));
    // 0x158580: 0x202d
    ctx->pc = 0x158580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158584: 0x10400006
    ctx->pc = 0x158584u;
    {
        const bool branch_taken_0x158584 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x158588u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 259));
        if (branch_taken_0x158584) {
            ctx->pc = 0x1585A0u;
            goto label_1585a0;
        }
    }
    ctx->pc = 0x15858Cu;
    // 0x15858c: 0xdfb00000
    ctx->pc = 0x15858cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158590: 0xdfbf0008
    ctx->pc = 0x158590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x158594: 0x805607e
    ctx->pc = 0x158594u;
    ctx->pc = 0x158598u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1581F8u;
    sub_001581F8_0x1581f8(rdram, ctx, runtime); return;
    ctx->pc = 0x15859Cu;
    // 0x15859c: 0x0
    ctx->pc = 0x15859cu;
    // NOP
label_1585a0:
    // 0x1585a0: 0x24030001
    ctx->pc = 0x1585a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1585a4: 0xdfbf0008
    ctx->pc = 0x1585a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1585a8: 0xae030000
    ctx->pc = 0x1585a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1585ac: 0xdfb00000
    ctx->pc = 0x1585acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1585b0: 0x3e00008
    ctx->pc = 0x1585B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1585B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1585A0u: goto label_1585a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1585B8u;
}
