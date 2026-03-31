#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016D5E8
// Address: 0x16d5e8 - 0x16d630
void sub_0016D5E8_0x16d5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16d5e8u;

    // 0x16d5e8: 0x27bdfff0
    ctx->pc = 0x16d5e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d5ec: 0x24030080
    ctx->pc = 0x16d5ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 128));
    // 0x16d5f0: 0xffbf0000
    ctx->pc = 0x16d5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d5f4: 0x28a50005
    ctx->pc = 0x16d5f4u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), 5));
    // 0x16d5f8: 0x10c30009
    ctx->pc = 0x16D5F8u;
    {
        const bool branch_taken_0x16d5f8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x16D5FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16d5f8) {
            ctx->pc = 0x16D620u;
            goto label_16d620;
        }
    }
    ctx->pc = 0x16D600u;
    // 0x16d600: 0x50a00007
    ctx->pc = 0x16D600u;
    {
        const bool branch_taken_0x16d600 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x16d600) {
            ctx->pc = 0x16D604u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x16D620u;
            goto label_16d620;
        }
    }
    ctx->pc = 0x16D608u;
    // 0x16d608: 0xc05b58c
    ctx->pc = 0x16D608u;
    SET_GPR_U32(ctx, 31, 0x16D610u);
    ctx->pc = 0x16D630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D630_0x16d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D610u; }
    }
    if (ctx->pc != 0x16D610u) { return; }
    ctx->pc = 0x16D610u;
    // 0x16d610: 0x24030001
    ctx->pc = 0x16d610u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d614: 0x10430003
    ctx->pc = 0x16D614u;
    {
        const bool branch_taken_0x16d614 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x16D618u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x16d614) {
            ctx->pc = 0x16D624u;
            goto label_16d624;
        }
    }
    ctx->pc = 0x16D61Cu;
    // 0x16d61c: 0x102d
    ctx->pc = 0x16d61cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d620:
    // 0x16d620: 0xdfbf0000
    ctx->pc = 0x16d620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16d624:
    // 0x16d624: 0x3e00008
    ctx->pc = 0x16D624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D628u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D620u: goto label_16d620;
            case 0x16D624u: goto label_16d624;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D62Cu;
    // 0x16d62c: 0x0
    ctx->pc = 0x16d62cu;
    // NOP
}
