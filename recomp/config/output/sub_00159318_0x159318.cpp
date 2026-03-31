#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00159318
// Address: 0x159318 - 0x159378
void sub_00159318_0x159318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x159318u;

    // 0x159318: 0x27bdffe0
    ctx->pc = 0x159318u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15931c: 0xffb00000
    ctx->pc = 0x15931cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159320: 0x80802d
    ctx->pc = 0x159320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159324: 0xffb10008
    ctx->pc = 0x159324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x159328: 0xffbf0010
    ctx->pc = 0x159328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15932c: 0xc056dec
    ctx->pc = 0x15932Cu;
    SET_GPR_U32(ctx, 31, 0x159334u);
    ctx->pc = 0x159330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15B7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B7B0_0x15b7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159334u; }
    }
    if (ctx->pc != 0x159334u) { return; }
    ctx->pc = 0x159334u;
    // 0x159334: 0x3c05ff03
    ctx->pc = 0x159334u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
    // 0x159338: 0x10400007
    ctx->pc = 0x159338u;
    {
        const bool branch_taken_0x159338 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15933Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x159338) {
            ctx->pc = 0x159358u;
            goto label_159358;
        }
    }
    ctx->pc = 0x159340u;
    // 0x159340: 0xdfb00000
    ctx->pc = 0x159340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159344: 0x34a5020d
    ctx->pc = 0x159344u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 525));
    // 0x159348: 0xdfb10008
    ctx->pc = 0x159348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15934c: 0xdfbf0010
    ctx->pc = 0x15934cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159350: 0x80563ce
    ctx->pc = 0x159350u;
    ctx->pc = 0x159354u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x158F38u;
    sub_00158F38_0x158f38(rdram, ctx, runtime); return;
    ctx->pc = 0x159358u;
label_159358:
    // 0x159358: 0x8e03027c
    ctx->pc = 0x159358u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 636)));
    // 0x15935c: 0xdfb00000
    ctx->pc = 0x15935cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159360: 0xae230000
    ctx->pc = 0x159360u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x159364: 0xdfbf0010
    ctx->pc = 0x159364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159368: 0xdfb10008
    ctx->pc = 0x159368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15936c: 0x3e00008
    ctx->pc = 0x15936Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159370u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159358u: goto label_159358;
            default: break;
        }
        return;
    }
    ctx->pc = 0x159374u;
    // 0x159374: 0x0
    ctx->pc = 0x159374u;
    // NOP
}
