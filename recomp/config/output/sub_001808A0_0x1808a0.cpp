#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001808A0
// Address: 0x1808a0 - 0x180918
void sub_001808A0_0x1808a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1808a0u;

    // 0x1808a0: 0x24030334
    ctx->pc = 0x1808a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 820));
    // 0x1808a4: 0x27bdffd0
    ctx->pc = 0x1808a4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1808a8: 0x832018
    ctx->pc = 0x1808a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1808ac: 0x3c020027
    ctx->pc = 0x1808acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1808b0: 0xffb10010
    ctx->pc = 0x1808b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1808b4: 0x24426188
    ctx->pc = 0x1808b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 24968));
    // 0x1808b8: 0xffbf0020
    ctx->pc = 0x1808b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1808bc: 0x24110001
    ctx->pc = 0x1808bcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1808c0: 0xffb00000
    ctx->pc = 0x1808c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1808c4: 0x441021
    ctx->pc = 0x1808c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1808c8: 0x8c500010
    ctx->pc = 0x1808c8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1808cc: 0xa2000000
    ctx->pc = 0x1808ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1808d0:
    // 0x1808d0: 0x2604001c
    ctx->pc = 0x1808d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 28));
    // 0x1808d4: 0xae00007c
    ctx->pc = 0x1808d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x1808d8: 0x240500ff
    ctx->pc = 0x1808d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1808dc: 0xa2000001
    ctx->pc = 0x1808dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1808e0: 0x24060020
    ctx->pc = 0x1808e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1808e4: 0xa2000003
    ctx->pc = 0x1808e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1808e8: 0x2631ffff
    ctx->pc = 0x1808e8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1808ec: 0xa2000002
    ctx->pc = 0x1808ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1808f0: 0xae000004
    ctx->pc = 0x1808f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1808f4: 0xc041f1a
    ctx->pc = 0x1808F4u;
    SET_GPR_U32(ctx, 31, 0x1808FCu);
    ctx->pc = 0x1808F8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 128));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1808FCu; }
    }
    if (ctx->pc != 0x1808FCu) { return; }
    ctx->pc = 0x1808FCu;
    // 0x1808fc: 0x623fff4
    ctx->pc = 0x1808FCu;
    {
        const bool branch_taken_0x1808fc = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1808fc) {
            ctx->pc = 0x180900u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x1808D0u;
            goto label_1808d0;
        }
    }
    ctx->pc = 0x180904u;
    // 0x180904: 0xdfbf0020
    ctx->pc = 0x180904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180908: 0xdfb10010
    ctx->pc = 0x180908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18090c: 0xdfb00000
    ctx->pc = 0x18090cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180910: 0x3e00008
    ctx->pc = 0x180910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180914u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1808D0u: goto label_1808d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180918u;
}
