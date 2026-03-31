#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012D678
// Address: 0x12d678 - 0x12d6e0
void sub_0012D678_0x12d678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d678u;

    // 0x12d678: 0x27bdffe0
    ctx->pc = 0x12d678u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12d67c: 0x3c020021
    ctx->pc = 0x12d67cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x12d680: 0xffbf0018
    ctx->pc = 0x12d680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12d684: 0xffb00000
    ctx->pc = 0x12d684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12d688: 0x24507d88
    ctx->pc = 0x12d688u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 32136));
    // 0x12d68c: 0xffb10008
    ctx->pc = 0x12d68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12d690: 0x2411000f
    ctx->pc = 0x12d690u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 15));
    // 0x12d694: 0xffb20010
    ctx->pc = 0x12d694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12d698: 0x24120001
    ctx->pc = 0x12d698u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d69c: 0x0
    ctx->pc = 0x12d69cu;
    // NOP
label_12d6a0:
    // 0x12d6a0: 0x82020000
    ctx->pc = 0x12d6a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12d6a4: 0x54520004
    ctx->pc = 0x12D6A4u;
    {
        const bool branch_taken_0x12d6a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x12d6a4) {
            ctx->pc = 0x12D6A8u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x12D6B8u;
            goto label_12d6b8;
        }
    }
    ctx->pc = 0x12D6ACu;
    // 0x12d6ac: 0xc04b58e
    ctx->pc = 0x12D6ACu;
    SET_GPR_U32(ctx, 31, 0x12D6B4u);
    ctx->pc = 0x12D6B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D638_0x12d638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D6B4u; }
    }
    if (ctx->pc != 0x12D6B4u) { return; }
    ctx->pc = 0x12D6B4u;
    // 0x12d6b4: 0x2631ffff
    ctx->pc = 0x12d6b4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_12d6b8:
    // 0x12d6b8: 0x621fff9
    ctx->pc = 0x12D6B8u;
    {
        const bool branch_taken_0x12d6b8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x12D6BCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 156));
        if (branch_taken_0x12d6b8) {
            ctx->pc = 0x12D6A0u;
            goto label_12d6a0;
        }
    }
    ctx->pc = 0x12D6C0u;
    // 0x12d6c0: 0xdfb00000
    ctx->pc = 0x12d6c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d6c4: 0xdfb10008
    ctx->pc = 0x12d6c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d6c8: 0xdfb20010
    ctx->pc = 0x12d6c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d6cc: 0xdfbf0018
    ctx->pc = 0x12d6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d6d0: 0x3e00008
    ctx->pc = 0x12D6D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D6D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D6A0u: goto label_12d6a0;
            case 0x12D6B8u: goto label_12d6b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12D6D8u;
    // 0x12d6d8: 0x3e00008
    ctx->pc = 0x12D6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D6DCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D6A0u: goto label_12d6a0;
            case 0x12D6B8u: goto label_12d6b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12D6E0u;
}
