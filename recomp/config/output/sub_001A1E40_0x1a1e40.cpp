#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A1E40
// Address: 0x1a1e40 - 0x1a1ed0
void sub_001A1E40_0x1a1e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a1e40u;

    // 0x1a1e40: 0x27bdffb0
    ctx->pc = 0x1a1e40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a1e44: 0xffbf0040
    ctx->pc = 0x1a1e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a1e48: 0x7fb30030
    ctx->pc = 0x1a1e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a1e4c: 0x7fb20020
    ctx->pc = 0x1a1e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a1e50: 0x7fb10010
    ctx->pc = 0x1a1e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a1e54: 0x7fb00000
    ctx->pc = 0x1a1e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a1e58: 0xc068ab4
    ctx->pc = 0x1A1E58u;
    SET_GPR_U32(ctx, 31, 0x1A1E60u);
    ctx->pc = 0x1A1E5Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A2AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2AD0_0x1a2ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E60u; }
    }
    if (ctx->pc != 0x1A1E60u) { return; }
    ctx->pc = 0x1A1E60u;
    // 0x1a1e60: 0x40902d
    ctx->pc = 0x1a1e60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1e64: 0x982d
    ctx->pc = 0x1a1e64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1e68: 0x21080
    ctx->pc = 0x1a1e68u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a1e6c: 0x1000000b
    ctx->pc = 0x1A1E6Cu;
    {
        const bool branch_taken_0x1a1e6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1E70u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 32));
        if (branch_taken_0x1a1e6c) {
            ctx->pc = 0x1A1E9Cu;
            goto label_1a1e9c;
        }
    }
    ctx->pc = 0x1A1E74u;
label_1a1e74:
    // 0x1a1e74: 0xc06876c
    ctx->pc = 0x1A1E74u;
    SET_GPR_U32(ctx, 31, 0x1A1E7Cu);
    ctx->pc = 0x1A1E78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A1DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1DB0_0x1a1db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E7Cu; }
    }
    if (ctx->pc != 0x1A1E7Cu) { return; }
    ctx->pc = 0x1A1E7Cu;
    // 0x1a1e7c: 0x8c430004
    ctx->pc = 0x1a1e7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a1e80: 0x40202d
    ctx->pc = 0x1a1e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1e84: 0x26310008
    ctx->pc = 0x1a1e84u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
    // 0x1a1e88: 0x310c0
    ctx->pc = 0x1a1e88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a1e8c: 0xc0687b4
    ctx->pc = 0x1A1E8Cu;
    SET_GPR_U32(ctx, 31, 0x1A1E94u);
    ctx->pc = 0x1A1E90u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->pc = 0x1A1ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1ED0_0x1a1ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E94u; }
    }
    if (ctx->pc != 0x1A1E94u) { return; }
    ctx->pc = 0x1A1E94u;
    // 0x1a1e94: 0x2228821
    ctx->pc = 0x1a1e94u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a1e98: 0x26730001
    ctx->pc = 0x1a1e98u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1a1e9c:
    // 0x1a1e9c: 0x272102a
    ctx->pc = 0x1a1e9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 18)));
    // 0x1a1ea0: 0x1440fff4
    ctx->pc = 0x1A1EA0u;
    {
        const bool branch_taken_0x1a1ea0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A1EA4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ea0) {
            ctx->pc = 0x1A1E74u;
            goto label_1a1e74;
        }
    }
    ctx->pc = 0x1A1EA8u;
    // 0x1a1ea8: 0x220102d
    ctx->pc = 0x1a1ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1eac: 0xdfbf0040
    ctx->pc = 0x1a1eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1eb0: 0x7bb30030
    ctx->pc = 0x1a1eb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1eb4: 0x7bb20020
    ctx->pc = 0x1a1eb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1eb8: 0x7bb10010
    ctx->pc = 0x1a1eb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1ebc: 0x7bb00000
    ctx->pc = 0x1a1ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1ec0: 0x3e00008
    ctx->pc = 0x1A1EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1EC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1E74u: goto label_1a1e74;
            case 0x1A1E9Cu: goto label_1a1e9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1EC8u;
    // 0x1a1ec8: 0x0
    ctx->pc = 0x1a1ec8u;
    // NOP
    // 0x1a1ecc: 0x0
    ctx->pc = 0x1a1eccu;
    // NOP
}
