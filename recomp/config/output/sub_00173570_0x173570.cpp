#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00173570
// Address: 0x173570 - 0x1735b0
void sub_00173570_0x173570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x173570u;

    // 0x173570: 0x3c020023
    ctx->pc = 0x173570u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x173574: 0x282d
    ctx->pc = 0x173574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173578: 0x2446f18c
    ctx->pc = 0x173578u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294963596));
    // 0x17357c: 0x8cc30000
    ctx->pc = 0x17357cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_173580:
    // 0x173580: 0x24c60004
    ctx->pc = 0x173580u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x173584: 0xa0102d
    ctx->pc = 0x173584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173588: 0x24a50001
    ctx->pc = 0x173588u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x17358c: 0x10600006
    ctx->pc = 0x17358Cu;
    {
        const bool branch_taken_0x17358c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x173590u;
        SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 5), 8));
        if (branch_taken_0x17358c) {
            ctx->pc = 0x1735A8u;
            goto label_1735a8;
        }
    }
    ctx->pc = 0x173594u;
    // 0x173594: 0x0
    ctx->pc = 0x173594u;
    // NOP
    // 0x173598: 0x0
    ctx->pc = 0x173598u;
    // NOP
    // 0x17359c: 0x5480fff8
    ctx->pc = 0x17359Cu;
    {
        const bool branch_taken_0x17359c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x17359c) {
            ctx->pc = 0x1735A0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->pc = 0x173580u;
            goto label_173580;
        }
    }
    ctx->pc = 0x1735A4u;
    // 0x1735a4: 0x2402ffff
    ctx->pc = 0x1735a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1735a8:
    // 0x1735a8: 0x3e00008
    ctx->pc = 0x1735A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173580u: goto label_173580;
            case 0x1735A8u: goto label_1735a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1735B0u;
}
