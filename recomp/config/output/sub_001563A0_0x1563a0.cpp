#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001563A0
// Address: 0x1563a0 - 0x156400
void sub_001563A0_0x1563a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1563a0u;

    // 0x1563a0: 0x3e00008
    ctx->pc = 0x1563A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1563E8u: goto label_1563e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1563A8u;
    // 0x1563a8: 0x27bdffe0
    ctx->pc = 0x1563a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1563ac: 0xffb00000
    ctx->pc = 0x1563acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1563b0: 0x80802d
    ctx->pc = 0x1563b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1563b4: 0xffb10008
    ctx->pc = 0x1563b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1563b8: 0xffbf0010
    ctx->pc = 0x1563b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1563bc: 0xc0560f2
    ctx->pc = 0x1563BCu;
    SET_GPR_U32(ctx, 31, 0x1563C4u);
    ctx->pc = 0x1563C0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1583C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001583C8_0x1583c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1563C4u; }
    }
    if (ctx->pc != 0x1563C4u) { return; }
    ctx->pc = 0x1563C4u;
    // 0x1563c4: 0x3c05ff02
    ctx->pc = 0x1563c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65282 << 16));
    // 0x1563c8: 0x10400007
    ctx->pc = 0x1563C8u;
    {
        const bool branch_taken_0x1563c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1563CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1563c8) {
            ctx->pc = 0x1563E8u;
            goto label_1563e8;
        }
    }
    ctx->pc = 0x1563D0u;
    // 0x1563d0: 0xdfb00000
    ctx->pc = 0x1563d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1563d4: 0x34a50302
    ctx->pc = 0x1563d4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 770));
    // 0x1563d8: 0xdfb10008
    ctx->pc = 0x1563d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1563dc: 0xdfbf0010
    ctx->pc = 0x1563dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1563e0: 0x805607e
    ctx->pc = 0x1563E0u;
    ctx->pc = 0x1563E4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1581F8u;
    sub_001581F8_0x1581f8(rdram, ctx, runtime); return;
    ctx->pc = 0x1563E8u;
label_1563e8:
    // 0x1563e8: 0xae110010
    ctx->pc = 0x1563e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x1563ec: 0xdfb00000
    ctx->pc = 0x1563ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1563f0: 0xdfb10008
    ctx->pc = 0x1563f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1563f4: 0xdfbf0010
    ctx->pc = 0x1563f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1563f8: 0x3e00008
    ctx->pc = 0x1563F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1563FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1563E8u: goto label_1563e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x156400u;
}
