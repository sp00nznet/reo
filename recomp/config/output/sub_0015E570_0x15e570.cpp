#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015E570
// Address: 0x15e570 - 0x15e5a0
void sub_0015E570_0x15e570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15e570u;

    // 0x15e570: 0x27bdffe0
    ctx->pc = 0x15e570u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15e574: 0xffbf0010
    ctx->pc = 0x15e574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15e578: 0xc05e70c
    ctx->pc = 0x15E578u;
    SET_GPR_U32(ctx, 31, 0x15E580u);
    ctx->pc = 0x15E57Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179C30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179C30_0x179c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E580u; }
    }
    if (ctx->pc != 0x15E580u) { return; }
    ctx->pc = 0x15E580u;
    // 0x15e580: 0x2404ffff
    ctx->pc = 0x15e580u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15e584: 0x8fa30000
    ctx->pc = 0x15e584u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e588: 0x38420000
    ctx->pc = 0x15e588u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 0));
    // 0x15e58c: 0xdfbf0010
    ctx->pc = 0x15e58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e590: 0x62200b
    ctx->pc = 0x15e590u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x15e594: 0x80102d
    ctx->pc = 0x15e594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e598: 0x3e00008
    ctx->pc = 0x15E598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E59Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E5A0u;
}
