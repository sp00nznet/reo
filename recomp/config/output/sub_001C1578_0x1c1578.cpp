#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C1578
// Address: 0x1c1578 - 0x1c15e8
void sub_001C1578_0x1c1578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c1578u;

    // 0x1c1578: 0x27bdffc0
    ctx->pc = 0x1c1578u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c157c: 0xffb10010
    ctx->pc = 0x1c157cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c1580: 0x3c110023
    ctx->pc = 0x1c1580u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x1c1584: 0xffb20020
    ctx->pc = 0x1c1584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c1588: 0x822252d8
    ctx->pc = 0x1c1588u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 21208)));
    // 0x1c158c: 0x263252d8
    ctx->pc = 0x1c158cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 21208));
    // 0x1c1590: 0xffbf0030
    ctx->pc = 0x1c1590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c1594: 0x1440000d
    ctx->pc = 0x1C1594u;
    {
        const bool branch_taken_0x1c1594 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C1598u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x1c1594) {
            ctx->pc = 0x1C15CCu;
            goto label_1c15cc;
        }
    }
    ctx->pc = 0x1C159Cu;
    // 0x1c159c: 0x3c040025
    ctx->pc = 0x1c159cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
    // 0x1c15a0: 0x24050001
    ctx->pc = 0x1c15a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c15a4: 0xc04629c
    ctx->pc = 0x1C15A4u;
    SET_GPR_U32(ctx, 31, 0x1C15ACu);
    ctx->pc = 0x1C15A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1656));
    ctx->pc = 0x118A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118A70_0x118a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15ACu; }
    }
    if (ctx->pc != 0x1C15ACu) { return; }
    ctx->pc = 0x1C15ACu;
    // 0x1c15ac: 0x40802d
    ctx->pc = 0x1c15acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c15b0: 0x6000006
    ctx->pc = 0x1C15B0u;
    {
        const bool branch_taken_0x1c15b0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1C15B4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c15b0) {
            ctx->pc = 0x1C15CCu;
            goto label_1c15cc;
        }
    }
    ctx->pc = 0x1C15B8u;
    // 0x1c15b8: 0x200202d
    ctx->pc = 0x1c15b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c15bc: 0xc04642c
    ctx->pc = 0x1C15BCu;
    SET_GPR_U32(ctx, 31, 0x1C15C4u);
    ctx->pc = 0x1C15C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x1190B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001190B0_0x1190b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15C4u; }
    }
    if (ctx->pc != 0x1C15C4u) { return; }
    ctx->pc = 0x1C15C4u;
    // 0x1c15c4: 0xc04633e
    ctx->pc = 0x1C15C4u;
    SET_GPR_U32(ctx, 31, 0x1C15CCu);
    ctx->pc = 0x1C15C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118CF8_0x118cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C15CCu; }
    }
    if (ctx->pc != 0x1C15CCu) { return; }
    ctx->pc = 0x1C15CCu;
label_1c15cc:
    // 0x1c15cc: 0x262252d8
    ctx->pc = 0x1c15ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 21208));
    // 0x1c15d0: 0xdfbf0030
    ctx->pc = 0x1c15d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c15d4: 0xdfb20020
    ctx->pc = 0x1c15d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c15d8: 0xdfb10010
    ctx->pc = 0x1c15d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c15dc: 0xdfb00000
    ctx->pc = 0x1c15dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c15e0: 0x3e00008
    ctx->pc = 0x1C15E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C15E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C15CCu: goto label_1c15cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C15E8u;
}
