#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015B548
// Address: 0x15b548 - 0x15b610
void sub_0015B548_0x15b548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15b548u;

    // 0x15b548: 0x27bdffe0
    ctx->pc = 0x15b548u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15b54c: 0xffb00000
    ctx->pc = 0x15b54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15b550: 0x80802d
    ctx->pc = 0x15b550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b554: 0xffb10008
    ctx->pc = 0x15b554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15b558: 0xffbf0010
    ctx->pc = 0x15b558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15b55c: 0xc056cca
    ctx->pc = 0x15B55Cu;
    SET_GPR_U32(ctx, 31, 0x15B564u);
    ctx->pc = 0x15B560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15B328u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B328_0x15b328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B564u; }
    }
    if (ctx->pc != 0x15B564u) { return; }
    ctx->pc = 0x15B564u;
    // 0x15b564: 0xae00018c
    ctx->pc = 0x15b564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x15b568: 0x3c050026
    ctx->pc = 0x15b568u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
    // 0x15b56c: 0x24a54c70
    ctx->pc = 0x15b56cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 19568));
    // 0x15b570: 0x24060010
    ctx->pc = 0x15b570u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x15b574: 0xc05583c
    ctx->pc = 0x15B574u;
    SET_GPR_U32(ctx, 31, 0x15B57Cu);
    ctx->pc = 0x15B578u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 400));
    ctx->pc = 0x1560F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001560F0_0x1560f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B57Cu; }
    }
    if (ctx->pc != 0x15B57Cu) { return; }
    ctx->pc = 0x15B57Cu;
    // 0x15b57c: 0xc05638c
    ctx->pc = 0x15B57Cu;
    SET_GPR_U32(ctx, 31, 0x15B584u);
    ctx->pc = 0x15B580u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 548));
    ctx->pc = 0x158E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158E30_0x158e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B584u; }
    }
    if (ctx->pc != 0x15B584u) { return; }
    ctx->pc = 0x15B584u;
    // 0x15b584: 0xc056d04
    ctx->pc = 0x15B584u;
    SET_GPR_U32(ctx, 31, 0x15B58Cu);
    ctx->pc = 0x15B588u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 464));
    ctx->pc = 0x15B410u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B410_0x15b410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B58Cu; }
    }
    if (ctx->pc != 0x15B58Cu) { return; }
    ctx->pc = 0x15B58Cu;
    // 0x15b58c: 0xae000340
    ctx->pc = 0x15b58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
    // 0x15b590: 0x8e0201ac
    ctx->pc = 0x15b590u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x15b594: 0xae000344
    ctx->pc = 0x15b594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 836), GPR_U32(ctx, 0));
    // 0x15b598: 0xae020374
    ctx->pc = 0x15b598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 884), GPR_U32(ctx, 2));
    // 0x15b59c: 0xae000354
    ctx->pc = 0x15b59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 0));
    // 0x15b5a0: 0xae000358
    ctx->pc = 0x15b5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 856), GPR_U32(ctx, 0));
    // 0x15b5a4: 0xae00035c
    ctx->pc = 0x15b5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
    // 0x15b5a8: 0xae000360
    ctx->pc = 0x15b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
    // 0x15b5ac: 0xae000364
    ctx->pc = 0x15b5acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
    // 0x15b5b0: 0x220282d
    ctx->pc = 0x15b5b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b5b4: 0x0
    ctx->pc = 0x15b5b4u;
    // NOP
label_15b5b8:
    // 0x15b5b8: 0x26310001
    ctx->pc = 0x15b5b8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x15b5bc: 0x200202d
    ctx->pc = 0x15b5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b5c0: 0x302d
    ctx->pc = 0x15b5c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b5c4: 0x382d
    ctx->pc = 0x15b5c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b5c8: 0xc05652e
    ctx->pc = 0x15B5C8u;
    SET_GPR_U32(ctx, 31, 0x15B5D0u);
    ctx->pc = 0x15B5CCu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1594B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001594B8_0x1594b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5D0u; }
    }
    if (ctx->pc != 0x15B5D0u) { return; }
    ctx->pc = 0x15B5D0u;
    // 0x15b5d0: 0x2a220004
    ctx->pc = 0x15b5d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x15b5d4: 0x1440fff8
    ctx->pc = 0x15B5D4u;
    {
        const bool branch_taken_0x15b5d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15B5D8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15b5d4) {
            ctx->pc = 0x15B5B8u;
            goto label_15b5b8;
        }
    }
    ctx->pc = 0x15B5DCu;
    // 0x15b5dc: 0x200202d
    ctx->pc = 0x15b5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b5e0: 0x282d
    ctx->pc = 0x15b5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b5e4: 0xc056538
    ctx->pc = 0x15B5E4u;
    SET_GPR_U32(ctx, 31, 0x15B5ECu);
    ctx->pc = 0x15B5E8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1594E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001594E0_0x1594e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5ECu; }
    }
    if (ctx->pc != 0x15B5ECu) { return; }
    ctx->pc = 0x15B5ECu;
    // 0x15b5ec: 0x24020002
    ctx->pc = 0x15b5ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x15b5f0: 0xae020188
    ctx->pc = 0x15b5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x15b5f4: 0x200102d
    ctx->pc = 0x15b5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b5f8: 0xdfb10008
    ctx->pc = 0x15b5f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15b5fc: 0xdfb00000
    ctx->pc = 0x15b5fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b600: 0xdfbf0010
    ctx->pc = 0x15b600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b604: 0x3e00008
    ctx->pc = 0x15B604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B608u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B5B8u: goto label_15b5b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15B60Cu;
    // 0x15b60c: 0x0
    ctx->pc = 0x15b60cu;
    // NOP
}
