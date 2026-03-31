#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019D3F0
// Address: 0x19d3f0 - 0x19d440
void sub_0019D3F0_0x19d3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19d3f0u;

    // 0x19d3f0: 0x3c030029
    ctx->pc = 0x19d3f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
    // 0x19d3f4: 0x202d
    ctx->pc = 0x19d3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d3f8: 0x10000008
    ctx->pc = 0x19D3F8u;
    {
        const bool branch_taken_0x19d3f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D3FCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20096));
        if (branch_taken_0x19d3f8) {
            ctx->pc = 0x19D41Cu;
            goto label_19d41c;
        }
    }
    ctx->pc = 0x19D400u;
label_19d400:
    // 0x19d400: 0x441023
    ctx->pc = 0x19d400u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19d404: 0x210c0
    ctx->pc = 0x19d404u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x19d408: 0x621021
    ctx->pc = 0x19d408u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19d40c: 0x80420034
    ctx->pc = 0x19d40cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x19d410: 0x10400006
    ctx->pc = 0x19D410u;
    {
        const bool branch_taken_0x19d410 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D414u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x19d410) {
            ctx->pc = 0x19D42Cu;
            goto label_19d42c;
        }
    }
    ctx->pc = 0x19D418u;
    // 0x19d418: 0x24840001
    ctx->pc = 0x19d418u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_19d41c:
    // 0x19d41c: 0x28820100
    ctx->pc = 0x19d41cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 256));
    // 0x19d420: 0x1440fff7
    ctx->pc = 0x19D420u;
    {
        const bool branch_taken_0x19d420 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19D424u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
        if (branch_taken_0x19d420) {
            ctx->pc = 0x19D400u;
            goto label_19d400;
        }
    }
    ctx->pc = 0x19D428u;
    // 0x19d428: 0x24820001
    ctx->pc = 0x19d428u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
label_19d42c:
    // 0x19d42c: 0x3e00008
    ctx->pc = 0x19D42Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D430u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D400u: goto label_19d400;
            case 0x19D41Cu: goto label_19d41c;
            case 0x19D42Cu: goto label_19d42c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D434u;
    // 0x19d434: 0x0
    ctx->pc = 0x19d434u;
    // NOP
    // 0x19d438: 0x0
    ctx->pc = 0x19d438u;
    // NOP
    // 0x19d43c: 0x0
    ctx->pc = 0x19d43cu;
    // NOP
}
