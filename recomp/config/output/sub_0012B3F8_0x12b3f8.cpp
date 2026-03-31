#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012B3F8
// Address: 0x12b3f8 - 0x12b490
void sub_0012B3F8_0x12b3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12b3f8u;

    // 0x12b3f8: 0x3c020021
    ctx->pc = 0x12b3f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x12b3fc: 0x27bdffc0
    ctx->pc = 0x12b3fcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12b400: 0x8c477d78
    ctx->pc = 0x12b400u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 32120)));
    // 0x12b404: 0x3c020026
    ctx->pc = 0x12b404u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x12b408: 0x3c050013
    ctx->pc = 0x12b408u;
    SET_GPR_U32(ctx, 5, ((uint32_t)19 << 16));
    // 0x12b40c: 0x3c030021
    ctx->pc = 0x12b40cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x12b410: 0xffb00030
    ctx->pc = 0x12b410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x12b414: 0x3c100021
    ctx->pc = 0x12b414u;
    SET_GPR_U32(ctx, 16, ((uint32_t)33 << 16));
    // 0x12b418: 0x24633d70
    ctx->pc = 0x12b418u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15728));
    // 0x12b41c: 0x3a0202d
    ctx->pc = 0x12b41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b420: 0x24062000
    ctx->pc = 0x12b420u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x12b424: 0x24a5ae50
    ctx->pc = 0x12b424u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294946384));
    // 0x12b428: 0x24421cf0
    ctx->pc = 0x12b428u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7408));
    // 0x12b42c: 0x261004ec
    ctx->pc = 0x12b42cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1260));
    // 0x12b430: 0xffbf0038
    ctx->pc = 0x12b430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x12b434: 0xafa50004
    ctx->pc = 0x12b434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x12b438: 0xafa30008
    ctx->pc = 0x12b438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x12b43c: 0xafa6000c
    ctx->pc = 0x12b43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x12b440: 0xafa70014
    ctx->pc = 0x12b440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x12b444: 0xc045108
    ctx->pc = 0x12B444u;
    SET_GPR_U32(ctx, 31, 0x12B44Cu);
    ctx->pc = 0x12B448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x114420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114420_0x114420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B44Cu; }
    }
    if (ctx->pc != 0x12B44Cu) { return; }
    ctx->pc = 0x12B44Cu;
    // 0x12b44c: 0xae020000
    ctx->pc = 0x12b44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x12b450: 0x282d
    ctx->pc = 0x12b450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b454: 0x8e020000
    ctx->pc = 0x12b454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b458: 0xc045110
    ctx->pc = 0x12B458u;
    SET_GPR_U32(ctx, 31, 0x12B460u);
    ctx->pc = 0x12B45Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x114440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114440_0x114440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B460u; }
    }
    if (ctx->pc != 0x12B460u) { return; }
    ctx->pc = 0x12B460u;
    // 0x12b460: 0x8e040000
    ctx->pc = 0x12b460u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b464: 0x3c020021
    ctx->pc = 0x12b464u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x12b468: 0xc04512c
    ctx->pc = 0x12B468u;
    SET_GPR_U32(ctx, 31, 0x12B470u);
    ctx->pc = 0x12B46Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 1144)));
    ctx->pc = 0x1144B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001144B0_0x1144b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B470u; }
    }
    if (ctx->pc != 0x12B470u) { return; }
    ctx->pc = 0x12B470u;
    // 0x12b470: 0x8e040000
    ctx->pc = 0x12b470u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b474: 0xc04ac56
    ctx->pc = 0x12B474u;
    SET_GPR_U32(ctx, 31, 0x12B47Cu);
    ctx->pc = 0x12B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B158_0x12b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B47Cu; }
    }
    if (ctx->pc != 0x12B47Cu) { return; }
    ctx->pc = 0x12B47Cu;
    // 0x12b47c: 0x8e030000
    ctx->pc = 0x12b47cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b480: 0xdfbf0038
    ctx->pc = 0x12b480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12b484: 0xdfb00030
    ctx->pc = 0x12b484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b488: 0x3e00008
    ctx->pc = 0x12B488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B48Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B490u;
}
