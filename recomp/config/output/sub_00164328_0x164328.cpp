#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00164328
// Address: 0x164328 - 0x164368
void sub_00164328_0x164328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x164328u;

    // 0x164328: 0x27bdffe0
    ctx->pc = 0x164328u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16432c: 0xffb00000
    ctx->pc = 0x16432cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164330: 0x80802d
    ctx->pc = 0x164330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164334: 0xffb10008
    ctx->pc = 0x164334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x164338: 0xffbf0010
    ctx->pc = 0x164338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16433c: 0xc05799e
    ctx->pc = 0x16433Cu;
    SET_GPR_U32(ctx, 31, 0x164344u);
    ctx->pc = 0x164340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15E678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E678_0x15e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164344u; }
    }
    if (ctx->pc != 0x164344u) { return; }
    ctx->pc = 0x164344u;
    // 0x164344: 0xdfbf0010
    ctx->pc = 0x164344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164348: 0xae11005c
    ctx->pc = 0x164348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 17));
    // 0x16434c: 0xac510024
    ctx->pc = 0x16434cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 17));
    // 0x164350: 0xdfb00000
    ctx->pc = 0x164350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164354: 0xdfb10008
    ctx->pc = 0x164354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164358: 0x3e00008
    ctx->pc = 0x164358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16435Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164360u;
    // 0x164360: 0x3e00008
    ctx->pc = 0x164360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164364u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164368u;
}
