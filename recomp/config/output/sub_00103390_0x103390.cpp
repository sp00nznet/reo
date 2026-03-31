#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00103390
// Address: 0x103390 - 0x1033f8
void sub_00103390_0x103390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x103390u;

    // 0x103390: 0x27bdffd0
    ctx->pc = 0x103390u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x103394: 0xffb00000
    ctx->pc = 0x103394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103398: 0x80802d
    ctx->pc = 0x103398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10339c: 0xffb10010
    ctx->pc = 0x10339cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1033a0: 0xffbf0020
    ctx->pc = 0x1033a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1033a4: 0xc040c00
    ctx->pc = 0x1033A4u;
    SET_GPR_U32(ctx, 31, 0x1033ACu);
    ctx->pc = 0x1033A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x103000u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103000_0x103000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1033ACu; }
    }
    if (ctx->pc != 0x1033ACu) { return; }
    ctx->pc = 0x1033ACu;
    // 0x1033ac: 0x40882d
    ctx->pc = 0x1033acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1033b0: 0xc040bc2
    ctx->pc = 0x1033B0u;
    SET_GPR_U32(ctx, 31, 0x1033B8u);
    ctx->pc = 0x1033B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x102F08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00102F08_0x102f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1033B8u; }
    }
    if (ctx->pc != 0x1033B8u) { return; }
    ctx->pc = 0x1033B8u;
    // 0x1033b8: 0x3c02ffff
    ctx->pc = 0x1033b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x1033bc: 0x8e030030
    ctx->pc = 0x1033bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1033c0: 0x3442ffff
    ctx->pc = 0x1033c0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1033c4: 0x54620001
    ctx->pc = 0x1033C4u;
    {
        const bool branch_taken_0x1033c4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1033c4) {
            ctx->pc = 0x1033C8u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
            ctx->pc = 0x1033CCu;
            goto label_1033cc;
        }
    }
    ctx->pc = 0x1033CCu;
label_1033cc:
    // 0x1033cc: 0x8e020000
    ctx->pc = 0x1033ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1033d0: 0x2403fff3
    ctx->pc = 0x1033d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1033d4: 0xae000020
    ctx->pc = 0x1033d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1033d8: 0x431024
    ctx->pc = 0x1033d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1033dc: 0xdfbf0020
    ctx->pc = 0x1033dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1033e0: 0x34420105
    ctx->pc = 0x1033e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 261));
    // 0x1033e4: 0xdfb10010
    ctx->pc = 0x1033e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1033e8: 0xae020000
    ctx->pc = 0x1033e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1033ec: 0xdfb00000
    ctx->pc = 0x1033ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1033f0: 0x3e00008
    ctx->pc = 0x1033F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1033F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1033CCu: goto label_1033cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1033F8u;
}
