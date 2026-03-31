#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A5280
// Address: 0x1a5280 - 0x1a52d0
void sub_001A5280_0x1a5280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a5280u;

    // 0x1a5280: 0x27bdffe0
    ctx->pc = 0x1a5280u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5284: 0xffbf0010
    ctx->pc = 0x1a5284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a5288: 0x7fb00000
    ctx->pc = 0x1a5288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a528c: 0xc0695ec
    ctx->pc = 0x1A528Cu;
    SET_GPR_U32(ctx, 31, 0x1A5294u);
    ctx->pc = 0x1A5290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A57B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A57B0_0x1a57b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5294u; }
    }
    if (ctx->pc != 0x1A5294u) { return; }
    ctx->pc = 0x1A5294u;
    // 0x1a5294: 0x14400003
    ctx->pc = 0x1A5294u;
    {
        const bool branch_taken_0x1a5294 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A5298u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a5294) {
            ctx->pc = 0x1A52A4u;
            goto label_1a52a4;
        }
    }
    ctx->pc = 0x1A529Cu;
    // 0x1a529c: 0x10000006
    ctx->pc = 0x1A529Cu;
    {
        const bool branch_taken_0x1a529c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A52A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a529c) {
            ctx->pc = 0x1A52B8u;
            goto label_1a52b8;
        }
    }
    ctx->pc = 0x1A52A4u;
label_1a52a4:
    // 0x1a52a4: 0xc069630
    ctx->pc = 0x1A52A4u;
    SET_GPR_U32(ctx, 31, 0x1A52ACu);
    ctx->pc = 0x1A52A8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A58C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A58C0_0x1a58c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A52ACu; }
    }
    if (ctx->pc != 0x1A52ACu) { return; }
    ctx->pc = 0x1A52ACu;
    // 0x1a52ac: 0x90420011
    ctx->pc = 0x1a52acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x1a52b0: 0x2442ffff
    ctx->pc = 0x1a52b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a52b4: 0x304200ff
    ctx->pc = 0x1a52b4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_1a52b8:
    // 0x1a52b8: 0xdfbf0010
    ctx->pc = 0x1a52b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a52bc: 0x7bb00000
    ctx->pc = 0x1a52bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a52c0: 0x3e00008
    ctx->pc = 0x1A52C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A52C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A52A4u: goto label_1a52a4;
            case 0x1A52B8u: goto label_1a52b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A52C8u;
    // 0x1a52c8: 0x0
    ctx->pc = 0x1a52c8u;
    // NOP
    // 0x1a52cc: 0x0
    ctx->pc = 0x1a52ccu;
    // NOP
}
