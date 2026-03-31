#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018DDD0
// Address: 0x18ddd0 - 0x18de40
void sub_0018DDD0_0x18ddd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18ddd0u;

    // 0x18ddd0: 0x27bdffe0
    ctx->pc = 0x18ddd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ddd4: 0x24a2ffff
    ctx->pc = 0x18ddd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x18ddd8: 0xffbf0010
    ctx->pc = 0x18ddd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18dddc: 0x3c01002a
    ctx->pc = 0x18dddcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x18dde0: 0x7fb00000
    ctx->pc = 0x18dde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18dde4: 0x403027
    ctx->pc = 0x18dde4u;
    SET_GPR_U32(ctx, 6, NOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x18dde8: 0x8c27fdc0
    ctx->pc = 0x18dde8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 4294966720)));
    // 0x18ddec: 0x80802d
    ctx->pc = 0x18ddecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ddf0: 0x3c01002a
    ctx->pc = 0x18ddf0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x18ddf4: 0xe51021
    ctx->pc = 0x18ddf4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x18ddf8: 0x8c23fdbc
    ctx->pc = 0x18ddf8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966716)));
    // 0x18ddfc: 0x2442ffff
    ctx->pc = 0x18ddfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18de00: 0xc21024
    ctx->pc = 0x18de00u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x18de04: 0x442021
    ctx->pc = 0x18de04u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18de08: 0x64082b
    ctx->pc = 0x18de08u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18de0c: 0x10200006
    ctx->pc = 0x18DE0Cu;
    {
        const bool branch_taken_0x18de0c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x18de0c) {
            ctx->pc = 0x18DE28u;
            goto label_18de28;
        }
    }
    ctx->pc = 0x18DE14u;
    // 0x18de14: 0xc063594
    ctx->pc = 0x18DE14u;
    SET_GPR_U32(ctx, 31, 0x18DE1Cu);
    ctx->pc = 0x18D650u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D650_0x18d650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE1Cu; }
    }
    if (ctx->pc != 0x18DE1Cu) { return; }
    ctx->pc = 0x18DE1Cu;
    // 0x18de1c: 0x3c01002a
    ctx->pc = 0x18de1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x18de20: 0x8c22fdb8
    ctx->pc = 0x18de20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966712)));
    // 0x18de24: 0x502021
    ctx->pc = 0x18de24u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_18de28:
    // 0x18de28: 0x3c01002a
    ctx->pc = 0x18de28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x18de2c: 0xac24fdc0
    ctx->pc = 0x18de2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966720), GPR_U32(ctx, 4));
    // 0x18de30: 0xdfbf0010
    ctx->pc = 0x18de30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18de34: 0x7bb00000
    ctx->pc = 0x18de34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18de38: 0x3e00008
    ctx->pc = 0x18DE38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DE3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18DE28u: goto label_18de28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18DE40u;
}
