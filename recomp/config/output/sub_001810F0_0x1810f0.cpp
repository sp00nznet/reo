#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001810F0
// Address: 0x1810f0 - 0x181230
void sub_001810F0_0x1810f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1810f0u;

    // 0x1810f0: 0x3c030023
    ctx->pc = 0x1810f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1810f4: 0x27bdfdd0
    ctx->pc = 0x1810f4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x1810f8: 0x8c67fa10
    ctx->pc = 0x1810f8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 4294965776)));
    // 0x1810fc: 0x3c028101
    ctx->pc = 0x1810fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181100: 0xffb10208
    ctx->pc = 0x181100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 17));
    // 0x181104: 0xa0882d
    ctx->pc = 0x181104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181108: 0xffb20210
    ctx->pc = 0x181108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 18));
    // 0x18110c: 0x80902d
    ctx->pc = 0x18110cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181110: 0xffb30218
    ctx->pc = 0x181110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 19));
    // 0x181114: 0xc0982d
    ctx->pc = 0x181114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181118: 0xffb00200
    ctx->pc = 0x181118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
    // 0x18111c: 0x34428001
    ctx->pc = 0x18111cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32769));
    // 0x181120: 0x10e0001c
    ctx->pc = 0x181120u;
    {
        const bool branch_taken_0x181120 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x181124u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 31));
        if (branch_taken_0x181120) {
            ctx->pc = 0x181194u;
            goto label_181194;
        }
    }
    ctx->pc = 0x181128u;
    // 0x181128: 0xc061e90
    ctx->pc = 0x181128u;
    SET_GPR_U32(ctx, 31, 0x181130u);
    ctx->pc = 0x187A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187A40_0x187a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181130u; }
    }
    if (ctx->pc != 0x181130u) { return; }
    ctx->pc = 0x181130u;
    // 0x181130: 0x3c030028
    ctx->pc = 0x181130u;
    SET_GPR_U32(ctx, 3, ((uint32_t)40 << 16));
    // 0x181134: 0x14400004
    ctx->pc = 0x181134u;
    {
        const bool branch_taken_0x181134 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181138u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294939904));
        if (branch_taken_0x181134) {
            ctx->pc = 0x181148u;
            goto label_181148;
        }
    }
    ctx->pc = 0x18113Cu;
    // 0x18113c: 0x3c028101
    ctx->pc = 0x18113cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181140: 0x10000014
    ctx->pc = 0x181140u;
    {
        const bool branch_taken_0x181140 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181144u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32770));
        if (branch_taken_0x181140) {
            ctx->pc = 0x181194u;
            goto label_181194;
        }
    }
    ctx->pc = 0x181148u;
label_181148:
    // 0x181148: 0x8e030004
    ctx->pc = 0x181148u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18114c: 0x3c028101
    ctx->pc = 0x18114cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181150: 0x14600010
    ctx->pc = 0x181150u;
    {
        const bool branch_taken_0x181150 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x181154u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x181150) {
            ctx->pc = 0x181194u;
            goto label_181194;
        }
    }
    ctx->pc = 0x181158u;
    // 0x181158: 0xc042c56
    ctx->pc = 0x181158u;
    SET_GPR_U32(ctx, 31, 0x181160u);
    ctx->pc = 0x18115Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181160u; }
    }
    if (ctx->pc != 0x181160u) { return; }
    ctx->pc = 0x181160u;
    // 0x181160: 0x220282d
    ctx->pc = 0x181160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181164: 0x2c430080
    ctx->pc = 0x181164u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 128));
    // 0x181168: 0x3c028101
    ctx->pc = 0x181168u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x18116c: 0x2604041c
    ctx->pc = 0x18116cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1052));
    // 0x181170: 0x10600008
    ctx->pc = 0x181170u;
    {
        const bool branch_taken_0x181170 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x181174u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 91));
        if (branch_taken_0x181170) {
            ctx->pc = 0x181194u;
            goto label_181194;
        }
    }
    ctx->pc = 0x181178u;
    // 0x181178: 0x2402000e
    ctx->pc = 0x181178u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x18117c: 0xae120000
    ctx->pc = 0x18117cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x181180: 0xc042bf0
    ctx->pc = 0x181180u;
    SET_GPR_U32(ctx, 31, 0x181188u);
    ctx->pc = 0x181184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181188u; }
    }
    if (ctx->pc != 0x181188u) { return; }
    ctx->pc = 0x181188u;
    // 0x181188: 0xc062228
    ctx->pc = 0x181188u;
    SET_GPR_U32(ctx, 31, 0x181190u);
    ctx->pc = 0x18118Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    ctx->pc = 0x1888A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001888A0_0x1888a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181190u; }
    }
    if (ctx->pc != 0x181190u) { return; }
    ctx->pc = 0x181190u;
    // 0x181190: 0x102d
    ctx->pc = 0x181190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181194:
    // 0x181194: 0xdfb00200
    ctx->pc = 0x181194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x181198: 0xdfb10208
    ctx->pc = 0x181198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x18119c: 0xdfb20210
    ctx->pc = 0x18119cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1811a0: 0xdfb30218
    ctx->pc = 0x1811a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x1811a4: 0xdfbf0220
    ctx->pc = 0x1811a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1811a8: 0x3e00008
    ctx->pc = 0x1811A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1811ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181148u: goto label_181148;
            case 0x181194u: goto label_181194;
            case 0x1811F8u: goto label_1811f8;
            case 0x18121Cu: goto label_18121c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1811B0u;
    // 0x1811b0: 0x3c030023
    ctx->pc = 0x1811b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1811b4: 0x27bdfff0
    ctx->pc = 0x1811b4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1811b8: 0x8c65fa10
    ctx->pc = 0x1811b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294965776)));
    // 0x1811bc: 0x3c028101
    ctx->pc = 0x1811bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1811c0: 0xffb00000
    ctx->pc = 0x1811c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1811c4: 0x80802d
    ctx->pc = 0x1811c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1811c8: 0xffbf0008
    ctx->pc = 0x1811c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1811cc: 0x10a00013
    ctx->pc = 0x1811CCu;
    {
        const bool branch_taken_0x1811cc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1811D0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32769));
        if (branch_taken_0x1811cc) {
            ctx->pc = 0x18121Cu;
            goto label_18121c;
        }
    }
    ctx->pc = 0x1811D4u;
    // 0x1811d4: 0xc061e90
    ctx->pc = 0x1811D4u;
    SET_GPR_U32(ctx, 31, 0x1811DCu);
    ctx->pc = 0x187A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187A40_0x187a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1811DCu; }
    }
    if (ctx->pc != 0x1811DCu) { return; }
    ctx->pc = 0x1811DCu;
    // 0x1811dc: 0x3c030028
    ctx->pc = 0x1811dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)40 << 16));
    // 0x1811e0: 0x14400005
    ctx->pc = 0x1811E0u;
    {
        const bool branch_taken_0x1811e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1811E4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294939904));
        if (branch_taken_0x1811e0) {
            ctx->pc = 0x1811F8u;
            goto label_1811f8;
        }
    }
    ctx->pc = 0x1811E8u;
    // 0x1811e8: 0x3c028101
    ctx->pc = 0x1811e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1811ec: 0x1000000b
    ctx->pc = 0x1811ECu;
    {
        const bool branch_taken_0x1811ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1811F0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32770));
        if (branch_taken_0x1811ec) {
            ctx->pc = 0x18121Cu;
            goto label_18121c;
        }
    }
    ctx->pc = 0x1811F4u;
    // 0x1811f4: 0x0
    ctx->pc = 0x1811f4u;
    // NOP
label_1811f8:
    // 0x1811f8: 0x8c830004
    ctx->pc = 0x1811f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1811fc: 0x3c028101
    ctx->pc = 0x1811fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181200: 0x14600006
    ctx->pc = 0x181200u;
    {
        const bool branch_taken_0x181200 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x181204u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x181200) {
            ctx->pc = 0x18121Cu;
            goto label_18121c;
        }
    }
    ctx->pc = 0x181208u;
    // 0x181208: 0x24020064
    ctx->pc = 0x181208u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
    // 0x18120c: 0xac900000
    ctx->pc = 0x18120cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x181210: 0xc062228
    ctx->pc = 0x181210u;
    SET_GPR_U32(ctx, 31, 0x181218u);
    ctx->pc = 0x181214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1888A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001888A0_0x1888a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181218u; }
    }
    if (ctx->pc != 0x181218u) { return; }
    ctx->pc = 0x181218u;
    // 0x181218: 0x102d
    ctx->pc = 0x181218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18121c:
    // 0x18121c: 0xdfb00000
    ctx->pc = 0x18121cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181220: 0xdfbf0008
    ctx->pc = 0x181220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181224: 0x3e00008
    ctx->pc = 0x181224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181228u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181148u: goto label_181148;
            case 0x181194u: goto label_181194;
            case 0x1811F8u: goto label_1811f8;
            case 0x18121Cu: goto label_18121c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18122Cu;
    // 0x18122c: 0x0
    ctx->pc = 0x18122cu;
    // NOP
}
