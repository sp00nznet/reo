#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00165578
// Address: 0x165578 - 0x1655c0
void sub_00165578_0x165578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x165578u;

    // 0x165578: 0x27bdffc0
    ctx->pc = 0x165578u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16557c: 0xffb00020
    ctx->pc = 0x16557cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x165580: 0xc0802d
    ctx->pc = 0x165580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165584: 0xffb10028
    ctx->pc = 0x165584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x165588: 0xa0882d
    ctx->pc = 0x165588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16558c: 0xffbf0030
    ctx->pc = 0x16558cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x165590: 0x3a0302d
    ctx->pc = 0x165590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165594: 0xc059bfa
    ctx->pc = 0x165594u;
    SET_GPR_U32(ctx, 31, 0x16559Cu);
    ctx->pc = 0x165598u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 7036)));
    ctx->pc = 0x166FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166FE8_0x166fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16559Cu; }
    }
    if (ctx->pc != 0x16559Cu) { return; }
    ctx->pc = 0x16559Cu;
    // 0x16559c: 0x8fa30000
    ctx->pc = 0x16559cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1655a0: 0x8fa40004
    ctx->pc = 0x1655a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1655a4: 0xae230000
    ctx->pc = 0x1655a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1655a8: 0xae040000
    ctx->pc = 0x1655a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1655ac: 0xdfb10028
    ctx->pc = 0x1655acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1655b0: 0xdfb00020
    ctx->pc = 0x1655b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1655b4: 0xdfbf0030
    ctx->pc = 0x1655b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1655b8: 0x3e00008
    ctx->pc = 0x1655B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1655BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1655C0u;
}
