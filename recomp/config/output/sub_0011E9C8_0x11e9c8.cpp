#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011E9C8
// Address: 0x11e9c8 - 0x11ea18
void sub_0011E9C8_0x11e9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11e9c8u;

    // 0x11e9c8: 0x27bdffd0
    ctx->pc = 0x11e9c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11e9cc: 0xffb00000
    ctx->pc = 0x11e9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11e9d0: 0xffb10010
    ctx->pc = 0x11e9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11e9d4: 0xffbf0020
    ctx->pc = 0x11e9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11e9d8: 0xc047598
    ctx->pc = 0x11E9D8u;
    SET_GPR_U32(ctx, 31, 0x11E9E0u);
    ctx->pc = 0x11E9DCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E9E0u; }
    }
    if (ctx->pc != 0x11E9E0u) { return; }
    ctx->pc = 0x11E9E0u;
    // 0x11e9e0: 0x200202d
    ctx->pc = 0x11e9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e9e4: 0xc047a4a
    ctx->pc = 0x11E9E4u;
    SET_GPR_U32(ctx, 31, 0x11E9ECu);
    ctx->pc = 0x11E9E8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11E928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E928_0x11e928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E9ECu; }
    }
    if (ctx->pc != 0x11E9ECu) { return; }
    ctx->pc = 0x11E9ECu;
    // 0x11e9ec: 0x12200003
    ctx->pc = 0x11E9ECu;
    {
        const bool branch_taken_0x11e9ec = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x11E9F0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11e9ec) {
            ctx->pc = 0x11E9FCu;
            goto label_11e9fc;
        }
    }
    ctx->pc = 0x11E9F4u;
    // 0x11e9f4: 0xc0475ae
    ctx->pc = 0x11E9F4u;
    SET_GPR_U32(ctx, 31, 0x11E9FCu);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E9FCu; }
    }
    if (ctx->pc != 0x11E9FCu) { return; }
    ctx->pc = 0x11E9FCu;
label_11e9fc:
    // 0x11e9fc: 0x200102d
    ctx->pc = 0x11e9fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea00: 0xdfbf0020
    ctx->pc = 0x11ea00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ea04: 0xdfb10010
    ctx->pc = 0x11ea04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ea08: 0xdfb00000
    ctx->pc = 0x11ea08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ea0c: 0x3e00008
    ctx->pc = 0x11EA0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EA10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E9FCu: goto label_11e9fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11EA14u;
    // 0x11ea14: 0x0
    ctx->pc = 0x11ea14u;
    // NOP
}
