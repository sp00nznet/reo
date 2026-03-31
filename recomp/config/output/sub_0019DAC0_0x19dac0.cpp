#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019DAC0
// Address: 0x19dac0 - 0x19db10
void sub_0019DAC0_0x19dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19dac0u;

    // 0x19dac0: 0x4243c
    ctx->pc = 0x19dac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x19dac4: 0x24050001
    ctx->pc = 0x19dac4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19dac8: 0x4243f
    ctx->pc = 0x19dac8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x19dacc: 0xa0102d
    ctx->pc = 0x19daccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dad0: 0xa21804
    ctx->pc = 0x19dad0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
label_19dad4:
    // 0x19dad4: 0x64182a
    ctx->pc = 0x19dad4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x19dad8: 0x14600004
    ctx->pc = 0x19DAD8u;
    {
        const bool branch_taken_0x19dad8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x19dad8) {
            ctx->pc = 0x19DAECu;
            goto label_19daec;
        }
    }
    ctx->pc = 0x19DAE0u;
    // 0x19dae0: 0x5143c
    ctx->pc = 0x19dae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x19dae4: 0x10000005
    ctx->pc = 0x19DAE4u;
    {
        const bool branch_taken_0x19dae4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DAE8u;
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        if (branch_taken_0x19dae4) {
            ctx->pc = 0x19DAFCu;
            goto label_19dafc;
        }
    }
    ctx->pc = 0x19DAECu;
label_19daec:
    // 0x19daec: 0x24a50001
    ctx->pc = 0x19daecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x19daf0: 0x28a1000b
    ctx->pc = 0x19daf0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 11));
    // 0x19daf4: 0x1420fff7
    ctx->pc = 0x19DAF4u;
    {
        const bool branch_taken_0x19daf4 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x19DAF8u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
        if (branch_taken_0x19daf4) {
            ctx->pc = 0x19DAD4u;
            goto label_19dad4;
        }
    }
    ctx->pc = 0x19DAFCu;
label_19dafc:
    // 0x19dafc: 0x3e00008
    ctx->pc = 0x19DAFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DAD4u: goto label_19dad4;
            case 0x19DAECu: goto label_19daec;
            case 0x19DAFCu: goto label_19dafc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19DB04u;
    // 0x19db04: 0x0
    ctx->pc = 0x19db04u;
    // NOP
    // 0x19db08: 0x0
    ctx->pc = 0x19db08u;
    // NOP
    // 0x19db0c: 0x0
    ctx->pc = 0x19db0cu;
    // NOP
}
