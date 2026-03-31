#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00130748
// Address: 0x130748 - 0x130798
void sub_00130748_0x130748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130748u;

    // 0x130748: 0x27bdffe0
    ctx->pc = 0x130748u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13074c: 0xffb00000
    ctx->pc = 0x13074cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130750: 0x80802d
    ctx->pc = 0x130750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130754: 0xffb10008
    ctx->pc = 0x130754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130758: 0xffbf0010
    ctx->pc = 0x130758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13075c: 0xc04c1b8
    ctx->pc = 0x13075Cu;
    SET_GPR_U32(ctx, 31, 0x130764u);
    ctx->pc = 0x130760u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1306E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001306E0_0x1306e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130764u; }
    }
    if (ctx->pc != 0x130764u) { return; }
    ctx->pc = 0x130764u;
    // 0x130764: 0x0
    ctx->pc = 0x130764u;
    // NOP
label_130768:
    // 0x130768: 0xc04a808
    ctx->pc = 0x130768u;
    SET_GPR_U32(ctx, 31, 0x130770u);
    ctx->pc = 0x12A020u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A020_0x12a020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130770u; }
    }
    if (ctx->pc != 0x130770u) { return; }
    ctx->pc = 0x130770u;
    // 0x130770: 0x82020001
    ctx->pc = 0x130770u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x130774: 0x1451fffc
    ctx->pc = 0x130774u;
    {
        const bool branch_taken_0x130774 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x130774) {
            ctx->pc = 0x130768u;
            goto label_130768;
        }
    }
    ctx->pc = 0x13077Cu;
    // 0x13077c: 0x8e020020
    ctx->pc = 0x13077cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x130780: 0x1440fff9
    ctx->pc = 0x130780u;
    {
        const bool branch_taken_0x130780 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x130784u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x130780) {
            ctx->pc = 0x130768u;
            goto label_130768;
        }
    }
    ctx->pc = 0x130788u;
    // 0x130788: 0xdfb00000
    ctx->pc = 0x130788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13078c: 0xdfb10008
    ctx->pc = 0x13078cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130790: 0x3e00008
    ctx->pc = 0x130790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130794u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130768u: goto label_130768;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130798u;
}
