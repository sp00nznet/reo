#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AFA00
// Address: 0x1afa00 - 0x1afa70
void sub_001AFA00_0x1afa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1afa00u;

    // 0x1afa00: 0x3c01002c
    ctx->pc = 0x1afa00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1afa04: 0x3c05002c
    ctx->pc = 0x1afa04u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x1afa08: 0x8c268e10
    ctx->pc = 0x1afa08u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294938128)));
    // 0x1afa0c: 0x382d
    ctx->pc = 0x1afa0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afa10: 0x10000006
    ctx->pc = 0x1AFA10u;
    {
        const bool branch_taken_0x1afa10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AFA14u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294938144));
        if (branch_taken_0x1afa10) {
            ctx->pc = 0x1AFA2Cu;
            goto label_1afa2c;
        }
    }
    ctx->pc = 0x1AFA18u;
label_1afa18:
    // 0x1afa18: 0xa31821
    ctx->pc = 0x1afa18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1afa1c: 0x8c630000
    ctx->pc = 0x1afa1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1afa20: 0x10640011
    ctx->pc = 0x1AFA20u;
    {
        const bool branch_taken_0x1afa20 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x1afa20) {
            ctx->pc = 0x1AFA68u;
            goto label_1afa68;
        }
    }
    ctx->pc = 0x1AFA28u;
    // 0x1afa28: 0x24e70001
    ctx->pc = 0x1afa28u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1afa2c:
    // 0x1afa2c: 0xe6182a
    ctx->pc = 0x1afa2cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
    // 0x1afa30: 0x1460fff9
    ctx->pc = 0x1AFA30u;
    {
        const bool branch_taken_0x1afa30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AFA34u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 2));
        if (branch_taken_0x1afa30) {
            ctx->pc = 0x1AFA18u;
            goto label_1afa18;
        }
    }
    ctx->pc = 0x1AFA38u;
    // 0x1afa38: 0x24030008
    ctx->pc = 0x1afa38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1afa3c: 0x10c3000a
    ctx->pc = 0x1AFA3Cu;
    {
        const bool branch_taken_0x1afa3c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x1AFA40u;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        if (branch_taken_0x1afa3c) {
            ctx->pc = 0x1AFA68u;
            goto label_1afa68;
        }
    }
    ctx->pc = 0x1AFA44u;
    // 0x1afa44: 0x62880
    ctx->pc = 0x1afa44u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1afa48: 0x24638e20
    ctx->pc = 0x1afa48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294938144));
    // 0x1afa4c: 0x3c01002c
    ctx->pc = 0x1afa4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1afa50: 0x651821
    ctx->pc = 0x1afa50u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1afa54: 0xac640000
    ctx->pc = 0x1afa54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1afa58: 0x8c238e10
    ctx->pc = 0x1afa58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294938128)));
    // 0x1afa5c: 0x24630001
    ctx->pc = 0x1afa5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1afa60: 0x3c01002c
    ctx->pc = 0x1afa60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1afa64: 0xac238e10
    ctx->pc = 0x1afa64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938128), GPR_U32(ctx, 3));
label_1afa68:
    // 0x1afa68: 0x3e00008
    ctx->pc = 0x1AFA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AFA18u: goto label_1afa18;
            case 0x1AFA2Cu: goto label_1afa2c;
            case 0x1AFA68u: goto label_1afa68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AFA70u;
}
