#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17d3d8
// Address: 0x17d3d8 - 0x17d3e0
void entry_17d3d8_0x17d3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d3d8u;

    // 0x17d3d8: 0x3e00008
    ctx->pc = 0x17D3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D3DCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D3E0u;
}
