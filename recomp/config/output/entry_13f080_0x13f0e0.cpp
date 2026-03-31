#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13f080
// Address: 0x13f080 - 0x13f0e0
void entry_13f080_0x13f0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13f080u;

    // 0x13f080: 0x27bdfff0
    ctx->pc = 0x13f080u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f084: 0x24020010
    ctx->pc = 0x13f084u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x13f088: 0x10a20007
    ctx->pc = 0x13F088u;
    {
        const bool branch_taken_0x13f088 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x13F08Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13f088) {
            ctx->pc = 0x13F0A8u;
            goto label_13f0a8;
        }
    }
    ctx->pc = 0x13F090u;
    // 0x13f090: 0x3c040024
    ctx->pc = 0x13f090u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13f094: 0xdfbf0000
    ctx->pc = 0x13f094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f098: 0x2484d8e0
    ctx->pc = 0x13f098u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957280));
    // 0x13f09c: 0x8045a12
    ctx->pc = 0x13F09Cu;
    ctx->pc = 0x13F0A0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x116848u;
    sub_00116848_0x116848(rdram, ctx, runtime); return;
    ctx->pc = 0x13F0A4u;
    // 0x13f0a4: 0x0
    ctx->pc = 0x13f0a4u;
    // NOP
label_13f0a8:
    // 0x13f0a8: 0xdfbf0000
    ctx->pc = 0x13f0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f0ac: 0x3e00008
    ctx->pc = 0x13F0ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F0B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F0A8u: goto label_13f0a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F0B4u;
    // 0x13f0b4: 0x0
    ctx->pc = 0x13f0b4u;
    // NOP
    // 0x13f0b8: 0x3c040024
    ctx->pc = 0x13f0b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13f0bc: 0x27bdfff0
    ctx->pc = 0x13f0bcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f0c0: 0xffbf0000
    ctx->pc = 0x13f0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f0c4: 0xc045a12
    ctx->pc = 0x13F0C4u;
    SET_GPR_U32(ctx, 31, 0x13F0CCu);
    ctx->pc = 0x13F0C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957328));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F0CCu; }
    }
    if (ctx->pc != 0x13F0CCu) { return; }
    ctx->pc = 0x13F0CCu;
    // 0x13f0cc: 0x102d
    ctx->pc = 0x13f0ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f0d0: 0xdfbf0000
    ctx->pc = 0x13f0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f0d4: 0x3e00008
    ctx->pc = 0x13F0D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F0D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F0A8u: goto label_13f0a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F0DCu;
    // 0x13f0dc: 0x0
    ctx->pc = 0x13f0dcu;
    // NOP
}
