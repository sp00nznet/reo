#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00147FE0
// Address: 0x147fe0 - 0x1480b0
void sub_00147FE0_0x147fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x147fe0u;

    // 0x147fe0: 0x27bdffd0
    ctx->pc = 0x147fe0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x147fe4: 0x24020001
    ctx->pc = 0x147fe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x147fe8: 0xffbf0020
    ctx->pc = 0x147fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x147fec: 0x3a0282d
    ctx->pc = 0x147fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147ff0: 0xc051fda
    ctx->pc = 0x147FF0u;
    SET_GPR_U32(ctx, 31, 0x147FF8u);
    ctx->pc = 0x147FF4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x147F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00147F68_0x147f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147FF8u; }
    }
    if (ctx->pc != 0x147FF8u) { return; }
    ctx->pc = 0x147FF8u;
    // 0x147ff8: 0xdfbf0020
    ctx->pc = 0x147ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147ffc: 0x24020001
    ctx->pc = 0x147ffcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x148000: 0x3e00008
    ctx->pc = 0x148000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148004u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148008u;
    // 0x148008: 0x8c830040
    ctx->pc = 0x148008u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x14800c: 0x24020001
    ctx->pc = 0x14800cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x148010: 0x24040001
    ctx->pc = 0x148010u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x148014: 0xfc650090
    ctx->pc = 0x148014u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 144), GPR_U64(ctx, 5));
    // 0x148018: 0x3e00008
    ctx->pc = 0x148018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14801Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148020u;
    // 0x148020: 0x8c830040
    ctx->pc = 0x148020u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x148024: 0x24020001
    ctx->pc = 0x148024u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x148028: 0xfc600090
    ctx->pc = 0x148028u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 144), GPR_U64(ctx, 0));
    // 0x14802c: 0x3e00008
    ctx->pc = 0x14802Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148030u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148034u;
    // 0x148034: 0x0
    ctx->pc = 0x148034u;
    // NOP
    // 0x148038: 0x8c830040
    ctx->pc = 0x148038u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x14803c: 0x24020001
    ctx->pc = 0x14803cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x148040: 0x3e00008
    ctx->pc = 0x148040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148044u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148048u;
    // 0x148048: 0x8c830040
    ctx->pc = 0x148048u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x14804c: 0x3e00008
    ctx->pc = 0x14804Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148050u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 228)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148054u;
    // 0x148054: 0x0
    ctx->pc = 0x148054u;
    // NOP
    // 0x148058: 0x8c830040
    ctx->pc = 0x148058u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x14805c: 0x3e00008
    ctx->pc = 0x14805Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148060u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 232)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148064u;
    // 0x148064: 0x0
    ctx->pc = 0x148064u;
    // NOP
    // 0x148068: 0x8c820040
    ctx->pc = 0x148068u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x14806c: 0x3e00008
    ctx->pc = 0x14806Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148070u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 204));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148074u;
    // 0x148074: 0x0
    ctx->pc = 0x148074u;
    // NOP
    // 0x148078: 0x8c820040
    ctx->pc = 0x148078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x14807c: 0x3e00008
    ctx->pc = 0x14807Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148080u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 204));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148084u;
    // 0x148084: 0x0
    ctx->pc = 0x148084u;
    // NOP
    // 0x148088: 0x8c830040
    ctx->pc = 0x148088u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x14808c: 0x8c620100
    ctx->pc = 0x14808cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x148090: 0x3e00008
    ctx->pc = 0x148090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148094u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148098u;
    // 0x148098: 0x8c860040
    ctx->pc = 0x148098u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x14809c: 0x24030001
    ctx->pc = 0x14809cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1480a0: 0x24020001
    ctx->pc = 0x1480a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1480a4: 0xacc30110
    ctx->pc = 0x1480a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 272), GPR_U32(ctx, 3));
    // 0x1480a8: 0x3e00008
    ctx->pc = 0x1480A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1480ACu;
        WRITE64(ADD32(GPR_U32(ctx, 6), 264), GPR_U64(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1480B0u;
}
