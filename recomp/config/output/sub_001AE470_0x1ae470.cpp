#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AE470
// Address: 0x1ae470 - 0x1ae4b0
void sub_001AE470_0x1ae470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ae470u;

    // 0x1ae470: 0x41040
    ctx->pc = 0x1ae470u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ae474: 0x3c03002c
    ctx->pc = 0x1ae474u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1ae478: 0x441021
    ctx->pc = 0x1ae478u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ae47c: 0x24638d7c
    ctx->pc = 0x1ae47cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937980));
    // 0x1ae480: 0x220c0
    ctx->pc = 0x1ae480u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ae484: 0x641821
    ctx->pc = 0x1ae484u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ae488: 0xc4610000
    ctx->pc = 0x1ae488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ae48c: 0x44800000
    ctx->pc = 0x1ae48cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1ae490: 0x0
    ctx->pc = 0x1ae490u;
    // NOP
    // 0x1ae494: 0x46010032
    ctx->pc = 0x1ae494u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ae498: 0x45000002
    ctx->pc = 0x1AE498u;
    {
        const bool branch_taken_0x1ae498 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AE49Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ae498) {
            ctx->pc = 0x1AE4A4u;
            goto label_1ae4a4;
        }
    }
    ctx->pc = 0x1AE4A0u;
    // 0x1ae4a0: 0x102d
    ctx->pc = 0x1ae4a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae4a4:
    // 0x1ae4a4: 0x3e00008
    ctx->pc = 0x1AE4A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE4A4u: goto label_1ae4a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AE4ACu;
    // 0x1ae4ac: 0x0
    ctx->pc = 0x1ae4acu;
    // NOP
}
