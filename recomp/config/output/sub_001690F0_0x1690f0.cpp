#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001690F0
// Address: 0x1690f0 - 0x169168
void sub_001690F0_0x1690f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1690f0u;

    // 0x1690f0: 0x27bdffe0
    ctx->pc = 0x1690f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1690f4: 0x28c70801
    ctx->pc = 0x1690f4u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 6), 2049));
    // 0x1690f8: 0xffb10008
    ctx->pc = 0x1690f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1690fc: 0x102d
    ctx->pc = 0x1690fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169100: 0xffb20010
    ctx->pc = 0x169100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x169104: 0x80902d
    ctx->pc = 0x169104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169108: 0xffb00000
    ctx->pc = 0x169108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16910c: 0x26510078
    ctx->pc = 0x16910cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 120));
    // 0x169110: 0xffbf0018
    ctx->pc = 0x169110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x169114: 0x8e230000
    ctx->pc = 0x169114u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x169118: 0x1460000d
    ctx->pc = 0x169118u;
    {
        const bool branch_taken_0x169118 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x16911Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 268));
        if (branch_taken_0x169118) {
            ctx->pc = 0x169150u;
            goto label_169150;
        }
    }
    ctx->pc = 0x169120u;
    // 0x169120: 0x24100800
    ctx->pc = 0x169120u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x169124: 0xc7800b
    ctx->pc = 0x169124u;
    if (GPR_U32(ctx, 7) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 6));
    // 0x169128: 0xc055798
    ctx->pc = 0x169128u;
    SET_GPR_U32(ctx, 31, 0x169130u);
    ctx->pc = 0x16912Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x155E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00155E60_0x155e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169130u; }
    }
    if (ctx->pc != 0x169130u) { return; }
    ctx->pc = 0x169130u;
    // 0x169130: 0xae300090
    ctx->pc = 0x169130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x169134: 0xc05a4cc
    ctx->pc = 0x169134u;
    SET_GPR_U32(ctx, 31, 0x16913Cu);
    ctx->pc = 0x169138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169330u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169330_0x169330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16913Cu; }
    }
    if (ctx->pc != 0x16913Cu) { return; }
    ctx->pc = 0x16913Cu;
    // 0x16913c: 0xc05a654
    ctx->pc = 0x16913Cu;
    SET_GPR_U32(ctx, 31, 0x169144u);
    ctx->pc = 0x169140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169950u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169950_0x169950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169144u; }
    }
    if (ctx->pc != 0x169144u) { return; }
    ctx->pc = 0x169144u;
    // 0x169144: 0xc05a45a
    ctx->pc = 0x169144u;
    SET_GPR_U32(ctx, 31, 0x16914Cu);
    ctx->pc = 0x169148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169168u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169168_0x169168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16914Cu; }
    }
    if (ctx->pc != 0x16914Cu) { return; }
    ctx->pc = 0x16914Cu;
    // 0x16914c: 0x24020001
    ctx->pc = 0x16914cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_169150:
    // 0x169150: 0xdfb00000
    ctx->pc = 0x169150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169154: 0xdfb10008
    ctx->pc = 0x169154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169158: 0xdfb20010
    ctx->pc = 0x169158u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16915c: 0xdfbf0018
    ctx->pc = 0x16915cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169160: 0x3e00008
    ctx->pc = 0x169160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169164u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169150u: goto label_169150;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169168u;
}
