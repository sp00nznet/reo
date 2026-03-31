#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015B410
// Address: 0x15b410 - 0x15b478
void sub_0015B410_0x15b410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15b410u;

    // 0x15b410: 0x24050001
    ctx->pc = 0x15b410u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b414: 0x2403ffff
    ctx->pc = 0x15b414u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15b418: 0x24020003
    ctx->pc = 0x15b418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x15b41c: 0xac850050
    ctx->pc = 0x15b41cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
    // 0x15b420: 0xac820038
    ctx->pc = 0x15b420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x15b424: 0xac830048
    ctx->pc = 0x15b424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x15b428: 0xac800000
    ctx->pc = 0x15b428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x15b42c: 0xac800004
    ctx->pc = 0x15b42cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x15b430: 0xac800008
    ctx->pc = 0x15b430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x15b434: 0xac80000c
    ctx->pc = 0x15b434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x15b438: 0xac800010
    ctx->pc = 0x15b438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x15b43c: 0xac800014
    ctx->pc = 0x15b43cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x15b440: 0xac800018
    ctx->pc = 0x15b440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x15b444: 0xac80001c
    ctx->pc = 0x15b444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x15b448: 0xac800020
    ctx->pc = 0x15b448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x15b44c: 0xac800024
    ctx->pc = 0x15b44cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x15b450: 0xac800028
    ctx->pc = 0x15b450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x15b454: 0xac80002c
    ctx->pc = 0x15b454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x15b458: 0xac800030
    ctx->pc = 0x15b458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x15b45c: 0xac800034
    ctx->pc = 0x15b45cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x15b460: 0xac85003c
    ctx->pc = 0x15b460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
    // 0x15b464: 0xac830040
    ctx->pc = 0x15b464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x15b468: 0xac830044
    ctx->pc = 0x15b468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x15b46c: 0x3e00008
    ctx->pc = 0x15B46Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B470u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B474u;
    // 0x15b474: 0x0
    ctx->pc = 0x15b474u;
    // NOP
}
