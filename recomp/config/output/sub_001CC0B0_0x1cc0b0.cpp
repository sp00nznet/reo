#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CC0B0
// Address: 0x1cc0b0 - 0x1cc110
void sub_001CC0B0_0x1cc0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cc0b0u;

    // 0x1cc0b0: 0x27bdffe0
    ctx->pc = 0x1cc0b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc0b4: 0xffbf0010
    ctx->pc = 0x1cc0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cc0b8: 0x7fb00000
    ctx->pc = 0x1cc0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cc0bc: 0x8ca3000c
    ctx->pc = 0x1cc0bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1cc0c0: 0xa0802d
    ctx->pc = 0x1cc0c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc0c4: 0x8ca20010
    ctx->pc = 0x1cc0c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1cc0c8: 0x432823
    ctx->pc = 0x1cc0c8u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cc0cc: 0x28a10385
    ctx->pc = 0x1cc0ccu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 901));
    // 0x1cc0d0: 0x14200002
    ctx->pc = 0x1CC0D0u;
    {
        const bool branch_taken_0x1cc0d0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cc0d0) {
            ctx->pc = 0x1CC0DCu;
            goto label_1cc0dc;
        }
    }
    ctx->pc = 0x1CC0D8u;
    // 0x1cc0d8: 0x24050384
    ctx->pc = 0x1cc0d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 900));
label_1cc0dc:
    // 0x1cc0dc: 0x8e020008
    ctx->pc = 0x1cc0dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cc0e0: 0xc072f40
    ctx->pc = 0x1CC0E0u;
    SET_GPR_U32(ctx, 31, 0x1CC0E8u);
    ctx->pc = 0x1CC0E4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1CBD00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBD00_0x1cbd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC0E8u; }
    }
    if (ctx->pc != 0x1CC0E8u) { return; }
    ctx->pc = 0x1CC0E8u;
    // 0x1cc0e8: 0x18400004
    ctx->pc = 0x1CC0E8u;
    {
        const bool branch_taken_0x1cc0e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1cc0e8) {
            ctx->pc = 0x1CC0FCu;
            goto label_1cc0fc;
        }
    }
    ctx->pc = 0x1CC0F0u;
    // 0x1cc0f0: 0x8e03000c
    ctx->pc = 0x1cc0f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cc0f4: 0x621821
    ctx->pc = 0x1cc0f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cc0f8: 0xae03000c
    ctx->pc = 0x1cc0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1cc0fc:
    // 0x1cc0fc: 0xdfbf0010
    ctx->pc = 0x1cc0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc100: 0x7bb00000
    ctx->pc = 0x1cc100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc104: 0x3e00008
    ctx->pc = 0x1CC104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC108u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC0DCu: goto label_1cc0dc;
            case 0x1CC0FCu: goto label_1cc0fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CC10Cu;
    // 0x1cc10c: 0x0
    ctx->pc = 0x1cc10cu;
    // NOP
}
