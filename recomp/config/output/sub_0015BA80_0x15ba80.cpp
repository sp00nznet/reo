#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015BA80
// Address: 0x15ba80 - 0x15baf0
void sub_0015BA80_0x15ba80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15ba80u;

    // 0x15ba80: 0xa0102d
    ctx->pc = 0x15ba80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ba84: 0xc0282d
    ctx->pc = 0x15ba84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ba88: 0x820018
    ctx->pc = 0x15ba88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x15ba8c: 0x27bdfff0
    ctx->pc = 0x15ba8cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15ba90: 0x822026
    ctx->pc = 0x15ba90u;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15ba94: 0xffbf0000
    ctx->pc = 0x15ba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15ba98: 0x28840000
    ctx->pc = 0x15ba98u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), 0));
    // 0x15ba9c: 0x3812
    ctx->pc = 0x15ba9cu;
    SET_GPR_U32(ctx, 7, ctx->lo);
    // 0x15baa0: 0x1810
    ctx->pc = 0x15baa0u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x15baa4: 0x7383c
    ctx->pc = 0x15baa4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x15baa8: 0x3183c
    ctx->pc = 0x15baa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15baac: 0x7383e
    ctx->pc = 0x15baacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x15bab0: 0x14c00007
    ctx->pc = 0x15BAB0u;
    {
        const bool branch_taken_0x15bab0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x15BAB4u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        if (branch_taken_0x15bab0) {
            ctx->pc = 0x15BAD0u;
            goto label_15bad0;
        }
    }
    ctx->pc = 0x15BAB8u;
    // 0x15bab8: 0x3c027fff
    ctx->pc = 0x15bab8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x15babc: 0x3c038000
    ctx->pc = 0x15babcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x15bac0: 0x3442ffff
    ctx->pc = 0x15bac0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x15bac4: 0x10000006
    ctx->pc = 0x15BAC4u;
    {
        const bool branch_taken_0x15bac4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15BAC8u;
        if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
        if (branch_taken_0x15bac4) {
            ctx->pc = 0x15BAE0u;
            goto label_15bae0;
        }
    }
    ctx->pc = 0x15BACCu;
    // 0x15bacc: 0x0
    ctx->pc = 0x15baccu;
    // NOP
label_15bad0:
    // 0x15bad0: 0xc043ec6
    ctx->pc = 0x15BAD0u;
    SET_GPR_U32(ctx, 31, 0x15BAD8u);
    ctx->pc = 0x15BAD4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10FB18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FB18_0x10fb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BAD8u; }
    }
    if (ctx->pc != 0x15BAD8u) { return; }
    ctx->pc = 0x15BAD8u;
    // 0x15bad8: 0x2103c
    ctx->pc = 0x15bad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15badc: 0x2103f
    ctx->pc = 0x15badcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_15bae0:
    // 0x15bae0: 0xdfbf0000
    ctx->pc = 0x15bae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bae4: 0x3e00008
    ctx->pc = 0x15BAE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BAE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15BAD0u: goto label_15bad0;
            case 0x15BAE0u: goto label_15bae0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15BAECu;
    // 0x15baec: 0x0
    ctx->pc = 0x15baecu;
    // NOP
}
