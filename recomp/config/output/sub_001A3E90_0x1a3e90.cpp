#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A3E90
// Address: 0x1a3e90 - 0x1a3ee0
void sub_001A3E90_0x1a3e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a3e90u;

    // 0x1a3e90: 0x27bdfff0
    ctx->pc = 0x1a3e90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a3e94: 0xa0382d
    ctx->pc = 0x1a3e94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3e98: 0x80402d
    ctx->pc = 0x1a3e98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3e9c: 0xffbf0000
    ctx->pc = 0x1a3e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3ea0: 0xe0202d
    ctx->pc = 0x1a3ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ea4: 0xc068d68
    ctx->pc = 0x1A3EA4u;
    SET_GPR_U32(ctx, 31, 0x1A3EACu);
    ctx->pc = 0x1A3EA8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)12 << 16));
    ctx->pc = 0x1A35A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35A0_0x1a35a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EACu; }
    }
    if (ctx->pc != 0x1A3EACu) { return; }
    ctx->pc = 0x1A3EACu;
    // 0x1a3eac: 0x10400006
    ctx->pc = 0x1A3EACu;
    {
        const bool branch_taken_0x1a3eac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3EB0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3eac) {
            ctx->pc = 0x1A3EC8u;
            goto label_1a3ec8;
        }
    }
    ctx->pc = 0x1A3EB4u;
    // 0x1a3eb4: 0x100202d
    ctx->pc = 0x1a3eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3eb8: 0xc068fdc
    ctx->pc = 0x1A3EB8u;
    SET_GPR_U32(ctx, 31, 0x1A3EC0u);
    ctx->pc = 0x1A3EBCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A3F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3F70_0x1a3f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3EC0u; }
    }
    if (ctx->pc != 0x1A3EC0u) { return; }
    ctx->pc = 0x1A3EC0u;
    // 0x1a3ec0: 0x10000004
    ctx->pc = 0x1A3EC0u;
    {
        const bool branch_taken_0x1a3ec0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3EC4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1a3ec0) {
            ctx->pc = 0x1A3ED4u;
            goto label_1a3ed4;
        }
    }
    ctx->pc = 0x1A3EC8u;
label_1a3ec8:
    // 0x1a3ec8: 0xc069168
    ctx->pc = 0x1A3EC8u;
    SET_GPR_U32(ctx, 31, 0x1A3ED0u);
    ctx->pc = 0x1A3ECCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A45A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A45A0_0x1a45a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3ED0u; }
    }
    if (ctx->pc != 0x1A3ED0u) { return; }
    ctx->pc = 0x1A3ED0u;
    // 0x1a3ed0: 0xdfbf0000
    ctx->pc = 0x1a3ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3ed4:
    // 0x1a3ed4: 0x3e00008
    ctx->pc = 0x1A3ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3ED8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3EC8u: goto label_1a3ec8;
            case 0x1A3ED4u: goto label_1a3ed4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A3EDCu;
    // 0x1a3edc: 0x0
    ctx->pc = 0x1a3edcu;
    // NOP
}
