#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17de60
// Address: 0x17de60 - 0x17deb0
void entry_17de60_0x17deb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17de60u;

    // 0x17de60: 0x27bdffd0
    ctx->pc = 0x17de60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17de64: 0xffb10018
    ctx->pc = 0x17de64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17de68: 0xc0882d
    ctx->pc = 0x17de68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de6c: 0xffb00010
    ctx->pc = 0x17de6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17de70: 0x80802d
    ctx->pc = 0x17de70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de74: 0xffbf0020
    ctx->pc = 0x17de74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17de78: 0x3a0302d
    ctx->pc = 0x17de78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de7c: 0xa6200000
    ctx->pc = 0x17de7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x17de80: 0xc05f65a
    ctx->pc = 0x17DE80u;
    SET_GPR_U32(ctx, 31, 0x17DE88u);
    ctx->pc = 0x17DE84u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x17D968u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D968_0x17d968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE88u; }
    }
    if (ctx->pc != 0x17DE88u) { return; }
    ctx->pc = 0x17DE88u;
    // 0x17de88: 0x200202d
    ctx->pc = 0x17de88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de8c: 0x8fa50000
    ctx->pc = 0x17de8cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17de90: 0x220382d
    ctx->pc = 0x17de90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de94: 0xc05f7ac
    ctx->pc = 0x17DE94u;
    SET_GPR_U32(ctx, 31, 0x17DE9Cu);
    ctx->pc = 0x17DE98u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x17DEB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DEB0_0x17deb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DE9Cu; }
    }
    if (ctx->pc != 0x17DE9Cu) { return; }
    ctx->pc = 0x17DE9Cu;
    // 0x17de9c: 0xdfb00010
    ctx->pc = 0x17de9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dea0: 0xdfb10018
    ctx->pc = 0x17dea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17dea4: 0xdfbf0020
    ctx->pc = 0x17dea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17dea8: 0x3e00008
    ctx->pc = 0x17DEA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DEACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17DEB0u;
}
