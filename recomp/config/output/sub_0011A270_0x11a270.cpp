#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011A270
// Address: 0x11a270 - 0x11a338
void sub_0011A270_0x11a270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a270u;

    // 0x11a270: 0x27bdffc0
    ctx->pc = 0x11a270u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11a274: 0xffb00000
    ctx->pc = 0x11a274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a278: 0x80802d
    ctx->pc = 0x11a278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a27c: 0xffbf0030
    ctx->pc = 0x11a27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11a280: 0xffb20020
    ctx->pc = 0x11a280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11a284: 0x24040009
    ctx->pc = 0x11a284u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
    // 0x11a288: 0xc04619c
    ctx->pc = 0x11A288u;
    SET_GPR_U32(ctx, 31, 0x11A290u);
    ctx->pc = 0x11A28Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->pc = 0x118670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118670_0x118670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A290u; }
    }
    if (ctx->pc != 0x11A290u) { return; }
    ctx->pc = 0x11A290u;
    // 0x11a290: 0x3c030021
    ctx->pc = 0x11a290u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x11a294: 0x8c629ddc
    ctx->pc = 0x11a294u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294942172)));
    // 0x11a298: 0x14400003
    ctx->pc = 0x11A298u;
    {
        const bool branch_taken_0x11a298 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11a298) {
            ctx->pc = 0x11A2A8u;
            goto label_11a2a8;
        }
    }
    ctx->pc = 0x11A2A0u;
    // 0x11a2a0: 0xc0461e8
    ctx->pc = 0x11A2A0u;
    SET_GPR_U32(ctx, 31, 0x11A2A8u);
    ctx->pc = 0x1187A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001187A0_0x1187a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2A8u; }
    }
    if (ctx->pc != 0x11A2A8u) { return; }
    ctx->pc = 0x11A2A8u;
label_11a2a8:
    // 0x11a2a8: 0xc0461a8
    ctx->pc = 0x11A2A8u;
    SET_GPR_U32(ctx, 31, 0x11A2B0u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2B0u; }
    }
    if (ctx->pc != 0x11A2B0u) { return; }
    ctx->pc = 0x11A2B0u;
    // 0x11a2b0: 0xc04605c
    ctx->pc = 0x11A2B0u;
    SET_GPR_U32(ctx, 31, 0x11A2B8u);
    ctx->pc = 0x118170u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118170_0x118170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2B8u; }
    }
    if (ctx->pc != 0x11A2B8u) { return; }
    ctx->pc = 0x11A2B8u;
    // 0x11a2b8: 0x40902d
    ctx->pc = 0x11a2b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2bc: 0x16400003
    ctx->pc = 0x11A2BCu;
    {
        const bool branch_taken_0x11a2bc = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x11A2C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11a2bc) {
            ctx->pc = 0x11A2CCu;
            goto label_11a2cc;
        }
    }
    ctx->pc = 0x11A2C4u;
    // 0x11a2c4: 0x10000016
    ctx->pc = 0x11A2C4u;
    {
        const bool branch_taken_0x11a2c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A2C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967277));
        if (branch_taken_0x11a2c4) {
            ctx->pc = 0x11A320u;
            goto label_11a320;
        }
    }
    ctx->pc = 0x11A2CCu;
label_11a2cc:
    // 0x11a2cc: 0xc0466ca
    ctx->pc = 0x11A2CCu;
    SET_GPR_U32(ctx, 31, 0x11A2D4u);
    ctx->pc = 0x11A2D0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x119B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00119B28_0x119b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2D4u; }
    }
    if (ctx->pc != 0x11A2D4u) { return; }
    ctx->pc = 0x11A2D4u;
    // 0x11a2d4: 0x40882d
    ctx->pc = 0x11a2d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2d8: 0x6210006
    ctx->pc = 0x11A2D8u;
    {
        const bool branch_taken_0x11a2d8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x11A2DCu;
        SET_GPR_U32(ctx, 16, ((uint32_t)33 << 16));
        if (branch_taken_0x11a2d8) {
            ctx->pc = 0x11A2F4u;
            goto label_11a2f4;
        }
    }
    ctx->pc = 0x11A2E0u;
    // 0x11a2e0: 0xc045198
    ctx->pc = 0x11A2E0u;
    SET_GPR_U32(ctx, 31, 0x11A2E8u);
    ctx->pc = 0x11A2E4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294942184)));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2E8u; }
    }
    if (ctx->pc != 0x11A2E8u) { return; }
    ctx->pc = 0x11A2E8u;
    // 0x11a2e8: 0xae400004
    ctx->pc = 0x11a2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x11a2ec: 0x10000009
    ctx->pc = 0x11A2ECu;
    {
        const bool branch_taken_0x11a2ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11A2F0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294942184)));
        if (branch_taken_0x11a2ec) {
            ctx->pc = 0x11A314u;
            goto label_11a314;
        }
    }
    ctx->pc = 0x11A2F4u;
label_11a2f4:
    // 0x11a2f4: 0xc045198
    ctx->pc = 0x11A2F4u;
    SET_GPR_U32(ctx, 31, 0x11A2FCu);
    ctx->pc = 0x11A2F8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294942184)));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2FCu; }
    }
    if (ctx->pc != 0x11A2FCu) { return; }
    ctx->pc = 0x11A2FCu;
    // 0x11a2fc: 0x3c030026
    ctx->pc = 0x11a2fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x11a300: 0xae510000
    ctx->pc = 0x11a300u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x11a304: 0x2463df40
    ctx->pc = 0x11a304u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958912));
    // 0x11a308: 0x8e049de8
    ctx->pc = 0x11a308u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294942184)));
    // 0x11a30c: 0x2431823
    ctx->pc = 0x11a30cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x11a310: 0x38903
    ctx->pc = 0x11a310u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
label_11a314:
    // 0x11a314: 0xc045190
    ctx->pc = 0x11A314u;
    SET_GPR_U32(ctx, 31, 0x11A31Cu);
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A31Cu; }
    }
    if (ctx->pc != 0x11A31Cu) { return; }
    ctx->pc = 0x11A31Cu;
    // 0x11a31c: 0x220102d
    ctx->pc = 0x11a31cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a320:
    // 0x11a320: 0xdfbf0030
    ctx->pc = 0x11a320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a324: 0xdfb20020
    ctx->pc = 0x11a324u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a328: 0xdfb10010
    ctx->pc = 0x11a328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a32c: 0xdfb00000
    ctx->pc = 0x11a32cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a330: 0x3e00008
    ctx->pc = 0x11A330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A334u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A2A8u: goto label_11a2a8;
            case 0x11A2CCu: goto label_11a2cc;
            case 0x11A2F4u: goto label_11a2f4;
            case 0x11A314u: goto label_11a314;
            case 0x11A320u: goto label_11a320;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11A338u;
}
