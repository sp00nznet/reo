#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00176198
// Address: 0x176198 - 0x176210
void sub_00176198_0x176198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x176198u;

    // 0x176198: 0x27bdffe0
    ctx->pc = 0x176198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17619c: 0xffb00000
    ctx->pc = 0x17619cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1761a0: 0x80802d
    ctx->pc = 0x1761a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1761a4: 0xffb10008
    ctx->pc = 0x1761a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1761a8: 0xc0882d
    ctx->pc = 0x1761a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1761ac: 0xffb20010
    ctx->pc = 0x1761acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1761b0: 0xffbf0018
    ctx->pc = 0x1761b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1761b4: 0xc05a78c
    ctx->pc = 0x1761B4u;
    SET_GPR_U32(ctx, 31, 0x1761BCu);
    ctx->pc = 0x1761B8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1761BCu; }
    }
    if (ctx->pc != 0x1761BCu) { return; }
    ctx->pc = 0x1761BCu;
    // 0x1761bc: 0x3c05ff00
    ctx->pc = 0x1761bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1761c0: 0x200202d
    ctx->pc = 0x1761c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1761c4: 0x220302d
    ctx->pc = 0x1761c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1761c8: 0x10400009
    ctx->pc = 0x1761C8u;
    {
        const bool branch_taken_0x1761c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1761CCu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 289));
        if (branch_taken_0x1761c8) {
            ctx->pc = 0x1761F0u;
            goto label_1761f0;
        }
    }
    ctx->pc = 0x1761D0u;
    // 0x1761d0: 0xdfb00000
    ctx->pc = 0x1761d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1761d4: 0x202d
    ctx->pc = 0x1761d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1761d8: 0xdfb10008
    ctx->pc = 0x1761d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1761dc: 0xdfb20010
    ctx->pc = 0x1761dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1761e0: 0xdfbf0018
    ctx->pc = 0x1761e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1761e4: 0x805a704
    ctx->pc = 0x1761E4u;
    ctx->pc = 0x1761E8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x1761ECu;
    // 0x1761ec: 0x0
    ctx->pc = 0x1761ecu;
    // NOP
label_1761f0:
    // 0x1761f0: 0x240282d
    ctx->pc = 0x1761f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1761f4: 0xdfb20010
    ctx->pc = 0x1761f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1761f8: 0xdfb00000
    ctx->pc = 0x1761f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1761fc: 0xdfb10008
    ctx->pc = 0x1761fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176200: 0xdfbf0018
    ctx->pc = 0x176200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x176204: 0x805d884
    ctx->pc = 0x176204u;
    ctx->pc = 0x176208u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x176210u;
    sub_00176210_0x176210(rdram, ctx, runtime); return;
    ctx->pc = 0x17620Cu;
    // 0x17620c: 0x0
    ctx->pc = 0x17620cu;
    // NOP
}
