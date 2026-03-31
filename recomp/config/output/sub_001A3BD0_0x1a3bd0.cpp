#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A3BD0
// Address: 0x1a3bd0 - 0x1a3c20
void sub_001A3BD0_0x1a3bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a3bd0u;

    // 0x1a3bd0: 0x27bdfff0
    ctx->pc = 0x1a3bd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a3bd4: 0xa0402d
    ctx->pc = 0x1a3bd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3bd8: 0xffbf0000
    ctx->pc = 0x1a3bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3bdc: 0x3c050008
    ctx->pc = 0x1a3bdcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)8 << 16));
    // 0x1a3be0: 0xc068d7c
    ctx->pc = 0x1A3BE0u;
    SET_GPR_U32(ctx, 31, 0x1A3BE8u);
    ctx->pc = 0x1A3BE4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3BE8u; }
    }
    if (ctx->pc != 0x1A3BE8u) { return; }
    ctx->pc = 0x1A3BE8u;
    // 0x1a3be8: 0x14400003
    ctx->pc = 0x1A3BE8u;
    {
        const bool branch_taken_0x1a3be8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A3BECu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 1));
        if (branch_taken_0x1a3be8) {
            ctx->pc = 0x1A3BF8u;
            goto label_1a3bf8;
        }
    }
    ctx->pc = 0x1A3BF0u;
    // 0x1a3bf0: 0x10000005
    ctx->pc = 0x1A3BF0u;
    {
        const bool branch_taken_0x1a3bf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3BF4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3bf0) {
            ctx->pc = 0x1A3C08u;
            goto label_1a3c08;
        }
    }
    ctx->pc = 0x1A3BF8u;
label_1a3bf8:
    // 0x1a3bf8: 0x681821
    ctx->pc = 0x1a3bf8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1a3bfc: 0x31880
    ctx->pc = 0x1a3bfcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3c00: 0x621021
    ctx->pc = 0x1a3c00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a3c04: 0x2442000c
    ctx->pc = 0x1a3c04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
label_1a3c08:
    // 0x1a3c08: 0xdfbf0000
    ctx->pc = 0x1a3c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3c0c: 0x3e00008
    ctx->pc = 0x1A3C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3C10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3BF8u: goto label_1a3bf8;
            case 0x1A3C08u: goto label_1a3c08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A3C14u;
    // 0x1a3c14: 0x0
    ctx->pc = 0x1a3c14u;
    // NOP
    // 0x1a3c18: 0x0
    ctx->pc = 0x1a3c18u;
    // NOP
    // 0x1a3c1c: 0x0
    ctx->pc = 0x1a3c1cu;
    // NOP
}
