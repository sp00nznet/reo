#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016B2B8
// Address: 0x16b2b8 - 0x16b340
void sub_0016B2B8_0x16b2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16b2b8u;

    // 0x16b2b8: 0x27bdffe0
    ctx->pc = 0x16b2b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b2bc: 0xffb10008
    ctx->pc = 0x16b2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16b2c0: 0x80882d
    ctx->pc = 0x16b2c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2c4: 0xffb20010
    ctx->pc = 0x16b2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16b2c8: 0xffb00000
    ctx->pc = 0x16b2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b2cc: 0xffbf0018
    ctx->pc = 0x16b2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16b2d0: 0xc05acd0
    ctx->pc = 0x16B2D0u;
    SET_GPR_U32(ctx, 31, 0x16B2D8u);
    ctx->pc = 0x16B2D4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16B340u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B340_0x16b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B2D8u; }
    }
    if (ctx->pc != 0x16B2D8u) { return; }
    ctx->pc = 0x16B2D8u;
    // 0x16b2d8: 0x10520013
    ctx->pc = 0x16B2D8u;
    {
        const bool branch_taken_0x16b2d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        ctx->pc = 0x16B2DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b2d8) {
            ctx->pc = 0x16B328u;
            goto label_16b328;
        }
    }
    ctx->pc = 0x16B2E0u;
    // 0x16b2e0: 0x8e301af4
    ctx->pc = 0x16b2e0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 6900)));
    // 0x16b2e4: 0xc059f30
    ctx->pc = 0x16B2E4u;
    SET_GPR_U32(ctx, 31, 0x16B2ECu);
    ctx->pc = 0x16B2E8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167CC0_0x167cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B2ECu; }
    }
    if (ctx->pc != 0x16B2ECu) { return; }
    ctx->pc = 0x16B2ECu;
    // 0x16b2ec: 0x220202d
    ctx->pc = 0x16b2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2f0: 0x1452000d
    ctx->pc = 0x16B2F0u;
    {
        const bool branch_taken_0x16b2f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        ctx->pc = 0x16B2F4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b2f0) {
            ctx->pc = 0x16B328u;
            goto label_16b328;
        }
    }
    ctx->pc = 0x16B2F8u;
    // 0x16b2f8: 0xc05ad04
    ctx->pc = 0x16B2F8u;
    SET_GPR_U32(ctx, 31, 0x16B300u);
    ctx->pc = 0x16B410u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B410_0x16b410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B300u; }
    }
    if (ctx->pc != 0x16B300u) { return; }
    ctx->pc = 0x16B300u;
    // 0x16b300: 0x10400009
    ctx->pc = 0x16B300u;
    {
        const bool branch_taken_0x16b300 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B304u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b300) {
            ctx->pc = 0x16B328u;
            goto label_16b328;
        }
    }
    ctx->pc = 0x16B308u;
    // 0x16b308: 0xdfb10008
    ctx->pc = 0x16b308u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b30c: 0xdfb00000
    ctx->pc = 0x16b30cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b310: 0x24050001
    ctx->pc = 0x16b310u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b314: 0xdfb20010
    ctx->pc = 0x16b314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b318: 0xdfbf0018
    ctx->pc = 0x16b318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b31c: 0x805acec
    ctx->pc = 0x16B31Cu;
    ctx->pc = 0x16B320u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x16B3B0u;
    entry_16b3b0_0x16b410(rdram, ctx, runtime); return;
    ctx->pc = 0x16B324u;
    // 0x16b324: 0x0
    ctx->pc = 0x16b324u;
    // NOP
label_16b328:
    // 0x16b328: 0xdfb00000
    ctx->pc = 0x16b328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b32c: 0xdfb10008
    ctx->pc = 0x16b32cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b330: 0xdfb20010
    ctx->pc = 0x16b330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b334: 0xdfbf0018
    ctx->pc = 0x16b334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b338: 0x3e00008
    ctx->pc = 0x16B338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B33Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B328u: goto label_16b328;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B340u;
}
