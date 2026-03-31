#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00180480
// Address: 0x180480 - 0x1804d8
void sub_00180480_0x180480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x180480u;

    // 0x180480: 0x27bdffe0
    ctx->pc = 0x180480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180484: 0xffb00000
    ctx->pc = 0x180484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180488: 0xffbf0010
    ctx->pc = 0x180488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18048c: 0xc062342
    ctx->pc = 0x18048Cu;
    SET_GPR_U32(ctx, 31, 0x180494u);
    ctx->pc = 0x180490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188D08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188D08_0x188d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180494u; }
    }
    if (ctx->pc != 0x180494u) { return; }
    ctx->pc = 0x180494u;
    // 0x180494: 0x440000b
    ctx->pc = 0x180494u;
    {
        const bool branch_taken_0x180494 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x180498u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 820));
        if (branch_taken_0x180494) {
            ctx->pc = 0x1804C4u;
            goto label_1804c4;
        }
    }
    ctx->pc = 0x18049Cu;
    // 0x18049c: 0x3c030027
    ctx->pc = 0x18049cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1804a0: 0x2042018
    ctx->pc = 0x1804a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1804a4: 0x24636188
    ctx->pc = 0x1804a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 24968));
    // 0x1804a8: 0x24020001
    ctx->pc = 0x1804a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1804ac: 0x832821
    ctx->pc = 0x1804acu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1804b0: 0x643021
    ctx->pc = 0x1804b0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1804b4: 0xaca00000
    ctx->pc = 0x1804b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1804b8: 0xc0182d
    ctx->pc = 0x1804b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1804bc: 0xacc00004
    ctx->pc = 0x1804bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1804c0: 0xac60000c
    ctx->pc = 0x1804c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_1804c4:
    // 0x1804c4: 0xdfbf0010
    ctx->pc = 0x1804c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1804c8: 0xdfb00000
    ctx->pc = 0x1804c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1804cc: 0x3e00008
    ctx->pc = 0x1804CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1804D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1804C4u: goto label_1804c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1804D4u;
    // 0x1804d4: 0x0
    ctx->pc = 0x1804d4u;
    // NOP
}
