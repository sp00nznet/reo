#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C1728
// Address: 0x1c1728 - 0x1c17e0
void sub_001C1728_0x1c1728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c1728u;

    // 0x1c1728: 0x27bdffe0
    ctx->pc = 0x1c1728u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c172c: 0xffbf0010
    ctx->pc = 0x1c172cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c1730: 0xc07057a
    ctx->pc = 0x1C1730u;
    SET_GPR_U32(ctx, 31, 0x1C1738u);
    ctx->pc = 0x1C15E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C15E8_0x1c15e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1738u; }
    }
    if (ctx->pc != 0x1C1738u) { return; }
    ctx->pc = 0x1C1738u;
    // 0x1c1738: 0x10400003
    ctx->pc = 0x1C1738u;
    {
        const bool branch_taken_0x1c1738 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C173Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x1c1738) {
            ctx->pc = 0x1C1748u;
            goto label_1c1748;
        }
    }
    ctx->pc = 0x1C1740u;
    // 0x1c1740: 0x10000009
    ctx->pc = 0x1C1740u;
    {
        const bool branch_taken_0x1c1740 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C1744u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 21200)));
        if (branch_taken_0x1c1740) {
            ctx->pc = 0x1C1768u;
            goto label_1c1768;
        }
    }
    ctx->pc = 0x1C1748u;
label_1c1748:
    // 0x1c1748: 0xc0451b4
    ctx->pc = 0x1C1748u;
    SET_GPR_U32(ctx, 31, 0x1C1750u);
    ctx->pc = 0x1C174Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1146D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001146D0_0x1146d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1750u; }
    }
    if (ctx->pc != 0x1C1750u) { return; }
    ctx->pc = 0x1C1750u;
    // 0x1c1750: 0x8fa20000
    ctx->pc = 0x1c1750u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1754: 0x2404021c
    ctx->pc = 0x1c1754u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 540));
    // 0x1c1758: 0x21b42
    ctx->pc = 0x1c1758u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 13));
    // 0x1c175c: 0x21543
    ctx->pc = 0x1c175cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 21));
    // 0x1c1760: 0x30630007
    ctx->pc = 0x1c1760u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 7));
    // 0x1c1764: 0x83100a
    ctx->pc = 0x1c1764u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_1c1768:
    // 0x1c1768: 0xdfbf0010
    ctx->pc = 0x1c1768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c176c: 0x3e00008
    ctx->pc = 0x1C176Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1770u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1748u: goto label_1c1748;
            case 0x1C1768u: goto label_1c1768;
            case 0x1C1798u: goto label_1c1798;
            case 0x1C17BCu: goto label_1c17bc;
            case 0x1C17D0u: goto label_1c17d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1774u;
    // 0x1c1774: 0x0
    ctx->pc = 0x1c1774u;
    // NOP
    // 0x1c1778: 0x27bdffe0
    ctx->pc = 0x1c1778u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c177c: 0xffbf0010
    ctx->pc = 0x1c177cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c1780: 0xc07057a
    ctx->pc = 0x1C1780u;
    SET_GPR_U32(ctx, 31, 0x1C1788u);
    ctx->pc = 0x1C15E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C15E8_0x1c15e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1788u; }
    }
    if (ctx->pc != 0x1C1788u) { return; }
    ctx->pc = 0x1C1788u;
    // 0x1c1788: 0x10400003
    ctx->pc = 0x1C1788u;
    {
        const bool branch_taken_0x1c1788 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C178Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x1c1788) {
            ctx->pc = 0x1C1798u;
            goto label_1c1798;
        }
    }
    ctx->pc = 0x1C1790u;
    // 0x1c1790: 0x1000000f
    ctx->pc = 0x1C1790u;
    {
        const bool branch_taken_0x1c1790 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C1794u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21203)));
        if (branch_taken_0x1c1790) {
            ctx->pc = 0x1C17D0u;
            goto label_1c17d0;
        }
    }
    ctx->pc = 0x1C1798u;
label_1c1798:
    // 0x1c1798: 0xc0451b4
    ctx->pc = 0x1C1798u;
    SET_GPR_U32(ctx, 31, 0x1C17A0u);
    ctx->pc = 0x1C179Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1146D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001146D0_0x1146d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C17A0u; }
    }
    if (ctx->pc != 0x1C17A0u) { return; }
    ctx->pc = 0x1C17A0u;
    // 0x1c17a0: 0x8fa20000
    ctx->pc = 0x1c17a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c17a4: 0x21342
    ctx->pc = 0x1c17a4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 13));
    // 0x1c17a8: 0x30420007
    ctx->pc = 0x1c17a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x1c17ac: 0x14400003
    ctx->pc = 0x1C17ACu;
    {
        const bool branch_taken_0x1c17ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C17B0u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 29), 4));
        if (branch_taken_0x1c17ac) {
            ctx->pc = 0x1C17BCu;
            goto label_1c17bc;
        }
    }
    ctx->pc = 0x1C17B4u;
    // 0x1c17b4: 0x10000006
    ctx->pc = 0x1C17B4u;
    {
        const bool branch_taken_0x1c17b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C17B8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c17b4) {
            ctx->pc = 0x1C17D0u;
            goto label_1c17d0;
        }
    }
    ctx->pc = 0x1C17BCu;
label_1c17bc:
    // 0x1c17bc: 0x24050001
    ctx->pc = 0x1c17bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c17c0: 0xc04524c
    ctx->pc = 0x1C17C0u;
    SET_GPR_U32(ctx, 31, 0x1C17C8u);
    ctx->pc = 0x1C17C4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x114930u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114930_0x114930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C17C8u; }
    }
    if (ctx->pc != 0x1C17C8u) { return; }
    ctx->pc = 0x1C17C8u;
    // 0x1c17c8: 0x93a30004
    ctx->pc = 0x1c17c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c17cc: 0x31182
    ctx->pc = 0x1c17ccu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 6));
label_1c17d0:
    // 0x1c17d0: 0xdfbf0010
    ctx->pc = 0x1c17d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c17d4: 0x3e00008
    ctx->pc = 0x1C17D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C17D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1748u: goto label_1c1748;
            case 0x1C1768u: goto label_1c1768;
            case 0x1C1798u: goto label_1c1798;
            case 0x1C17BCu: goto label_1c17bc;
            case 0x1C17D0u: goto label_1c17d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C17DCu;
    // 0x1c17dc: 0x0
    ctx->pc = 0x1c17dcu;
    // NOP
}
