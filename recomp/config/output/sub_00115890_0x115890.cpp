#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00115890
// Address: 0x115890 - 0x1158c8
void sub_00115890_0x115890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115890u;

    // 0x115890: 0x27bdffe0
    ctx->pc = 0x115890u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x115894: 0xa0102d
    ctx->pc = 0x115894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115898: 0x30c6ffff
    ctx->pc = 0x115898u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 65535));
    // 0x11589c: 0xafa40000
    ctx->pc = 0x11589cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1158a0: 0xffbf0010
    ctx->pc = 0x1158a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1158a4: 0x3a0282d
    ctx->pc = 0x1158a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1158a8: 0xafa20004
    ctx->pc = 0x1158a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1158ac: 0x2404fffb
    ctx->pc = 0x1158acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1158b0: 0xc045294
    ctx->pc = 0x1158B0u;
    SET_GPR_U32(ctx, 31, 0x1158B8u);
    ctx->pc = 0x1158B4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->pc = 0x114A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A50_0x114a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1158B8u; }
    }
    if (ctx->pc != 0x1158B8u) { return; }
    ctx->pc = 0x1158B8u;
    // 0x1158b8: 0xdfbf0010
    ctx->pc = 0x1158b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1158bc: 0x3e00008
    ctx->pc = 0x1158BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1158C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1158C4u;
    // 0x1158c4: 0x0
    ctx->pc = 0x1158c4u;
    // NOP
}
