#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00180970
// Address: 0x180970 - 0x1809d8
void sub_00180970_0x180970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x180970u;

    // 0x180970: 0x24030334
    ctx->pc = 0x180970u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 820));
    // 0x180974: 0x27bdffe0
    ctx->pc = 0x180974u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180978: 0x832018
    ctx->pc = 0x180978u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x18097c: 0x3c020027
    ctx->pc = 0x18097cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x180980: 0xffbf0010
    ctx->pc = 0x180980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x180984: 0x24426188
    ctx->pc = 0x180984u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 24968));
    // 0x180988: 0x441021
    ctx->pc = 0x180988u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18098c: 0x8c430010
    ctx->pc = 0x18098cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x180990: 0x60202d
    ctx->pc = 0x180990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180994: 0x24620080
    ctx->pc = 0x180994u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 128));
    // 0x180998: 0xafa20004
    ctx->pc = 0x180998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x18099c: 0x248500ff
    ctx->pc = 0x18099cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 255));
    // 0x1809a0: 0xc0453c6
    ctx->pc = 0x1809A0u;
    SET_GPR_U32(ctx, 31, 0x1809A8u);
    ctx->pc = 0x1809A4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x114F18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114F18_0x114f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1809A8u; }
    }
    if (ctx->pc != 0x1809A8u) { return; }
    ctx->pc = 0x1809A8u;
    // 0x1809a8: 0x8fa40000
    ctx->pc = 0x1809a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1809ac: 0x8fa50004
    ctx->pc = 0x1809acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1809b0: 0x8c82007c
    ctx->pc = 0x1809b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x1809b4: 0x8ca3007c
    ctx->pc = 0x1809b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x1809b8: 0xdfbf0010
    ctx->pc = 0x1809b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1809bc: 0x43102a
    ctx->pc = 0x1809bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x1809c0: 0x21080
    ctx->pc = 0x1809c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1809c4: 0x3a21821
    ctx->pc = 0x1809c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1809c8: 0x8c620000
    ctx->pc = 0x1809c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1809cc: 0x3e00008
    ctx->pc = 0x1809CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1809D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1809D4u;
    // 0x1809d4: 0x0
    ctx->pc = 0x1809d4u;
    // NOP
}
