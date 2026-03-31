#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00135730
// Address: 0x135730 - 0x1357f8
void sub_00135730_0x135730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x135730u;

    // 0x135730: 0x27bdffe0
    ctx->pc = 0x135730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x135734: 0xffb00000
    ctx->pc = 0x135734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x135738: 0x80802d
    ctx->pc = 0x135738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13573c: 0xffb10008
    ctx->pc = 0x13573cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x135740: 0x16000009
    ctx->pc = 0x135740u;
    {
        const bool branch_taken_0x135740 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x135744u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x135740) {
            ctx->pc = 0x135768u;
            goto label_135768;
        }
    }
    ctx->pc = 0x135748u;
    // 0x135748: 0x3c040024
    ctx->pc = 0x135748u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13574c: 0xdfb00000
    ctx->pc = 0x13574cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135750: 0xdfb10008
    ctx->pc = 0x135750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135754: 0x2484b850
    ctx->pc = 0x135754u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948944));
    // 0x135758: 0xdfbf0010
    ctx->pc = 0x135758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13575c: 0x804d480
    ctx->pc = 0x13575Cu;
    ctx->pc = 0x135760u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x135200u;
    sub_00135200_0x135200(rdram, ctx, runtime); return;
    ctx->pc = 0x135764u;
    // 0x135764: 0x0
    ctx->pc = 0x135764u;
    // NOP
label_135768:
    // 0x135768: 0xc042c56
    ctx->pc = 0x135768u;
    SET_GPR_U32(ctx, 31, 0x135770u);
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135770u; }
    }
    if (ctx->pc != 0x135770u) { return; }
    ctx->pc = 0x135770u;
    // 0x135770: 0x40882d
    ctx->pc = 0x135770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135774: 0x16200008
    ctx->pc = 0x135774u;
    {
        const bool branch_taken_0x135774 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x135778u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x135774) {
            ctx->pc = 0x135798u;
            goto label_135798;
        }
    }
    ctx->pc = 0x13577Cu;
    // 0x13577c: 0xdfb00000
    ctx->pc = 0x13577cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135780: 0x3c020026
    ctx->pc = 0x135780u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x135784: 0xdfb10008
    ctx->pc = 0x135784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135788: 0xdfbf0010
    ctx->pc = 0x135788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13578c: 0xa0402268
    ctx->pc = 0x13578cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8808), (uint8_t)GPR_U32(ctx, 0));
    // 0x135790: 0x3e00008
    ctx->pc = 0x135790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135794u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135768u: goto label_135768;
            case 0x135798u: goto label_135798;
            case 0x1357D8u: goto label_1357d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x135798u;
label_135798:
    // 0x135798: 0xc04d57e
    ctx->pc = 0x135798u;
    SET_GPR_U32(ctx, 31, 0x1357A0u);
    ctx->pc = 0x1355F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001355F8_0x1355f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1357A0u; }
    }
    if (ctx->pc != 0x1357A0u) { return; }
    ctx->pc = 0x1357A0u;
    // 0x1357a0: 0x200202d
    ctx->pc = 0x1357a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1357a4: 0xc04d5fe
    ctx->pc = 0x1357A4u;
    SET_GPR_U32(ctx, 31, 0x1357ACu);
    ctx->pc = 0x1357A8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1357F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001357F8_0x1357f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1357ACu; }
    }
    if (ctx->pc != 0x1357ACu) { return; }
    ctx->pc = 0x1357ACu;
    // 0x1357ac: 0x3c040026
    ctx->pc = 0x1357acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x1357b0: 0x24030001
    ctx->pc = 0x1357b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1357b4: 0x24842268
    ctx->pc = 0x1357b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8808));
    // 0x1357b8: 0x200282d
    ctx->pc = 0x1357b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1357bc: 0x14430006
    ctx->pc = 0x1357BCu;
    {
        const bool branch_taken_0x1357bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1357C0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1357bc) {
            ctx->pc = 0x1357D8u;
            goto label_1357d8;
        }
    }
    ctx->pc = 0x1357C4u;
    // 0x1357c4: 0xdfb00000
    ctx->pc = 0x1357c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1357c8: 0xdfb10008
    ctx->pc = 0x1357c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1357cc: 0xdfbf0010
    ctx->pc = 0x1357ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1357d0: 0x8041eac
    ctx->pc = 0x1357D0u;
    ctx->pc = 0x1357D4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x107AB0u;
    sub_00107AB0_0x107ab0(rdram, ctx, runtime); return;
    ctx->pc = 0x1357D8u;
label_1357d8:
    // 0x1357d8: 0x3c040024
    ctx->pc = 0x1357d8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1357dc: 0xdfb00000
    ctx->pc = 0x1357dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1357e0: 0xdfb10008
    ctx->pc = 0x1357e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1357e4: 0x2484b878
    ctx->pc = 0x1357e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948984));
    // 0x1357e8: 0xdfbf0010
    ctx->pc = 0x1357e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1357ec: 0x804d480
    ctx->pc = 0x1357ECu;
    ctx->pc = 0x1357F0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x135200u;
    sub_00135200_0x135200(rdram, ctx, runtime); return;
    ctx->pc = 0x1357F4u;
    // 0x1357f4: 0x0
    ctx->pc = 0x1357f4u;
    // NOP
}
