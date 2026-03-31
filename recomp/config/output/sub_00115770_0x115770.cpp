#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00115770
// Address: 0x115770 - 0x1157e0
void sub_00115770_0x115770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115770u;

    // 0x115770: 0x3c020026
    ctx->pc = 0x115770u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x115774: 0x27bdffe0
    ctx->pc = 0x115774u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x115778: 0x3c032000
    ctx->pc = 0x115778u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8192 << 16));
    // 0x11577c: 0x2442aa40
    ctx->pc = 0x11577cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945344));
    // 0x115780: 0x3084ffff
    ctx->pc = 0x115780u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x115784: 0x431025
    ctx->pc = 0x115784u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x115788: 0xafa50004
    ctx->pc = 0x115788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x11578c: 0xafa40000
    ctx->pc = 0x11578cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x115790: 0x3a0282d
    ctx->pc = 0x115790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115794: 0xffbf0010
    ctx->pc = 0x115794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x115798: 0x24040001
    ctx->pc = 0x115798u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11579c: 0xafa60008
    ctx->pc = 0x11579cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1157a0: 0xc045294
    ctx->pc = 0x1157A0u;
    SET_GPR_U32(ctx, 31, 0x1157A8u);
    ctx->pc = 0x1157A4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x114A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A50_0x114a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1157A8u; }
    }
    if (ctx->pc != 0x1157A8u) { return; }
    ctx->pc = 0x1157A8u;
    // 0x1157a8: 0xdfbf0010
    ctx->pc = 0x1157a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1157ac: 0x3e00008
    ctx->pc = 0x1157ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1157B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1157B4u;
    // 0x1157b4: 0x0
    ctx->pc = 0x1157b4u;
    // NOP
    // 0x1157b8: 0x27bdffe0
    ctx->pc = 0x1157b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1157bc: 0xafa40000
    ctx->pc = 0x1157bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1157c0: 0x3a0282d
    ctx->pc = 0x1157c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1157c4: 0xffbf0010
    ctx->pc = 0x1157c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1157c8: 0xc045294
    ctx->pc = 0x1157C8u;
    SET_GPR_U32(ctx, 31, 0x1157D0u);
    ctx->pc = 0x1157CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x114A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A50_0x114a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1157D0u; }
    }
    if (ctx->pc != 0x1157D0u) { return; }
    ctx->pc = 0x1157D0u;
    // 0x1157d0: 0xdfbf0010
    ctx->pc = 0x1157d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1157d4: 0x3e00008
    ctx->pc = 0x1157D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1157D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1157DCu;
    // 0x1157dc: 0x0
    ctx->pc = 0x1157dcu;
    // NOP
}
