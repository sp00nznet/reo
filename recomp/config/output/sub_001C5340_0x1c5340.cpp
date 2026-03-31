#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C5340
// Address: 0x1c5340 - 0x1c53b0
void sub_001C5340_0x1c5340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c5340u;

    // 0x1c5340: 0x27bdffe0
    ctx->pc = 0x1c5340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5344: 0x3c020001
    ctx->pc = 0x1c5344u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x1c5348: 0xffbf0010
    ctx->pc = 0x1c5348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c534c: 0x3c010032
    ctx->pc = 0x1c534cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c5350: 0x7fb00000
    ctx->pc = 0x1c5350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5354: 0x3446fbc0
    ctx->pc = 0x1c5354u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 64448));
    // 0x1c5358: 0x90234488
    ctx->pc = 0x1c5358u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17544)));
    // 0x1c535c: 0xa0802d
    ctx->pc = 0x1c535cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5360: 0x282d
    ctx->pc = 0x1c5360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5364: 0xa0830019
    ctx->pc = 0x1c5364u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c5368: 0x3c010032
    ctx->pc = 0x1c5368u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c536c: 0x9022448d
    ctx->pc = 0x1c536cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17549)));
    // 0x1c5370: 0xa082001b
    ctx->pc = 0x1c5370u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 27), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c5374: 0x3c010001
    ctx->pc = 0x1c5374u;
    SET_GPR_U32(ctx, 1, ((uint32_t)1 << 16));
    // 0x1c5378: 0xc041f1a
    ctx->pc = 0x1C5378u;
    SET_GPR_U32(ctx, 31, 0x1C5380u);
    ctx->pc = 0x1C537Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5380u; }
    }
    if (ctx->pc != 0x1C5380u) { return; }
    ctx->pc = 0x1C5380u;
    // 0x1c5380: 0x3c010001
    ctx->pc = 0x1c5380u;
    SET_GPR_U32(ctx, 1, ((uint32_t)1 << 16));
    // 0x1c5384: 0x3c050032
    ctx->pc = 0x1c5384u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x1c5388: 0x2012021
    ctx->pc = 0x1c5388u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1c538c: 0x24a58b60
    ctx->pc = 0x1c538cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294937440));
    // 0x1c5390: 0xc041eac
    ctx->pc = 0x1C5390u;
    SET_GPR_U32(ctx, 31, 0x1C5398u);
    ctx->pc = 0x1C5394u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 28672));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5398u; }
    }
    if (ctx->pc != 0x1C5398u) { return; }
    ctx->pc = 0x1C5398u;
    // 0x1c5398: 0xdfbf0010
    ctx->pc = 0x1c5398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c539c: 0x7bb00000
    ctx->pc = 0x1c539cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c53a0: 0x3e00008
    ctx->pc = 0x1C53A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C53A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C53A8u;
    // 0x1c53a8: 0x0
    ctx->pc = 0x1c53a8u;
    // NOP
    // 0x1c53ac: 0x0
    ctx->pc = 0x1c53acu;
    // NOP
}
