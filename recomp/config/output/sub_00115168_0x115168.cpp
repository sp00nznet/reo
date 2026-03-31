#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00115168
// Address: 0x115168 - 0x1151d0
void sub_00115168_0x115168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115168u;

    // 0x115168: 0x27bdffd0
    ctx->pc = 0x115168u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11516c: 0xffb10010
    ctx->pc = 0x11516cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x115170: 0xffbf0020
    ctx->pc = 0x115170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x115174: 0x80882d
    ctx->pc = 0x115174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115178: 0xffb00000
    ctx->pc = 0x115178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11517c: 0x40106000
    ctx->pc = 0x11517cu;
    SET_GPR_U32(ctx, 16, ctx->cop0_status);
    // 0x115180: 0x3c020001
    ctx->pc = 0x115180u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x115184: 0x2028024
    ctx->pc = 0x115184u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x115188: 0x12000003
    ctx->pc = 0x115188u;
    {
        const bool branch_taken_0x115188 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x115188) {
            ctx->pc = 0x115198u;
            goto label_115198;
        }
    }
    ctx->pc = 0x115190u;
    // 0x115190: 0xc047598
    ctx->pc = 0x115190u;
    SET_GPR_U32(ctx, 31, 0x115198u);
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115198u; }
    }
    if (ctx->pc != 0x115198u) { return; }
    ctx->pc = 0x115198u;
label_115198:
    // 0x115198: 0xc0450d8
    ctx->pc = 0x115198u;
    SET_GPR_U32(ctx, 31, 0x1151A0u);
    ctx->pc = 0x11519Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114360_0x114360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1151A0u; }
    }
    if (ctx->pc != 0x1151A0u) { return; }
    ctx->pc = 0x1151A0u;
    // 0x1151a0: 0x40882d
    ctx->pc = 0x1151a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1151a4: 0xf
    ctx->pc = 0x1151a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1151a8: 0x12000004
    ctx->pc = 0x1151A8u;
    {
        const bool branch_taken_0x1151a8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1151ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1151a8) {
            ctx->pc = 0x1151BCu;
            goto label_1151bc;
        }
    }
    ctx->pc = 0x1151B0u;
    // 0x1151b0: 0xc0475ae
    ctx->pc = 0x1151B0u;
    SET_GPR_U32(ctx, 31, 0x1151B8u);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1151B8u; }
    }
    if (ctx->pc != 0x1151B8u) { return; }
    ctx->pc = 0x1151B8u;
    // 0x1151b8: 0x220102d
    ctx->pc = 0x1151b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1151bc:
    // 0x1151bc: 0xdfbf0020
    ctx->pc = 0x1151bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1151c0: 0xdfb10010
    ctx->pc = 0x1151c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1151c4: 0xdfb00000
    ctx->pc = 0x1151c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1151c8: 0x3e00008
    ctx->pc = 0x1151C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1151CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115198u: goto label_115198;
            case 0x1151BCu: goto label_1151bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1151D0u;
}
