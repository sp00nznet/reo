#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17b288
// Address: 0x17b288 - 0x17b360
void entry_17b288_0x17b360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17b288u;

    // 0x17b288: 0x27bdffa0
    ctx->pc = 0x17b288u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17b28c: 0xffb00030
    ctx->pc = 0x17b28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x17b290: 0xa0802d
    ctx->pc = 0x17b290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b294: 0xffb10038
    ctx->pc = 0x17b294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x17b298: 0x26110004
    ctx->pc = 0x17b298u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 4));
    // 0x17b29c: 0xffb20040
    ctx->pc = 0x17b29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x17b2a0: 0x80902d
    ctx->pc = 0x17b2a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b2a4: 0xffb30048
    ctx->pc = 0x17b2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x17b2a8: 0xe0982d
    ctx->pc = 0x17b2a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b2ac: 0xffbf0050
    ctx->pc = 0x17b2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17b2b0: 0xafa60010
    ctx->pc = 0x17b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x17b2b4: 0x8e050044
    ctx->pc = 0x17b2b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x17b2b8: 0x8e020048
    ctx->pc = 0x17b2b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17b2bc: 0x8e230000
    ctx->pc = 0x17b2bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17b2c0: 0xafa50014
    ctx->pc = 0x17b2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x17b2c4: 0xafa30000
    ctx->pc = 0x17b2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x17b2c8: 0xafa50004
    ctx->pc = 0x17b2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x17b2cc: 0xc05eb6a
    ctx->pc = 0x17B2CCu;
    SET_GPR_U32(ctx, 31, 0x17B2D4u);
    ctx->pc = 0x17B2D0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x17ADA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017ADA8_0x17ada8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B2D4u; }
    }
    if (ctx->pc != 0x17B2D4u) { return; }
    ctx->pc = 0x17B2D4u;
    // 0x17b2d4: 0x24030001
    ctx->pc = 0x17b2d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b2d8: 0x3a0202d
    ctx->pc = 0x17b2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b2dc: 0x27a50010
    ctx->pc = 0x17b2dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x17b2e0: 0x14430007
    ctx->pc = 0x17B2E0u;
    {
        const bool branch_taken_0x17b2e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x17B2E4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17b2e0) {
            ctx->pc = 0x17B300u;
            goto label_17b300;
        }
    }
    ctx->pc = 0x17B2E8u;
    // 0x17b2e8: 0x8e020048
    ctx->pc = 0x17b2e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17b2ec: 0x21fc2
    ctx->pc = 0x17b2ecu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x17b2f0: 0x431021
    ctx->pc = 0x17b2f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17b2f4: 0x10000003
    ctx->pc = 0x17B2F4u;
    {
        const bool branch_taken_0x17b2f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B2F8u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x17b2f4) {
            ctx->pc = 0x17B304u;
            goto label_17b304;
        }
    }
    ctx->pc = 0x17B2FCu;
    // 0x17b2fc: 0x0
    ctx->pc = 0x17b2fcu;
    // NOP
label_17b300:
    // 0x17b300: 0x8e020048
    ctx->pc = 0x17b300u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_17b304:
    // 0x17b304: 0xafa20018
    ctx->pc = 0x17b304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x17b308: 0x8e420008
    ctx->pc = 0x17b308u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x17b30c: 0x14400003
    ctx->pc = 0x17B30Cu;
    {
        const bool branch_taken_0x17b30c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17b30c) {
            ctx->pc = 0x17B31Cu;
            goto label_17b31c;
        }
    }
    ctx->pc = 0x17B314u;
    // 0x17b314: 0x8e220004
    ctx->pc = 0x17b314u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17b318: 0x21080
    ctx->pc = 0x17b318u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_17b31c:
    // 0x17b31c: 0x16660006
    ctx->pc = 0x17B31Cu;
    {
        const bool branch_taken_0x17b31c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 6));
        ctx->pc = 0x17B320u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        if (branch_taken_0x17b31c) {
            ctx->pc = 0x17B338u;
            goto label_17b338;
        }
    }
    ctx->pc = 0x17B324u;
    // 0x17b324: 0xc053dfa
    ctx->pc = 0x17B324u;
    SET_GPR_U32(ctx, 31, 0x17B32Cu);
    ctx->pc = 0x17B328u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 60)));
    ctx->pc = 0x14F7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0014F7E8_0x14f7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B32Cu; }
    }
    if (ctx->pc != 0x17B32Cu) { return; }
    ctx->pc = 0x17B32Cu;
    // 0x17b32c: 0x10000006
    ctx->pc = 0x17B32Cu;
    {
        const bool branch_taken_0x17b32c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B330u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17b32c) {
            ctx->pc = 0x17B348u;
            goto label_17b348;
        }
    }
    ctx->pc = 0x17B334u;
    // 0x17b334: 0x0
    ctx->pc = 0x17b334u;
    // NOP
label_17b338:
    // 0x17b338: 0x3a0202d
    ctx->pc = 0x17b338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b33c: 0xc053df2
    ctx->pc = 0x17B33Cu;
    SET_GPR_U32(ctx, 31, 0x17B344u);
    ctx->pc = 0x17B340u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x14F7C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0014F7C8_0x14f7c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B344u; }
    }
    if (ctx->pc != 0x17B344u) { return; }
    ctx->pc = 0x17B344u;
    // 0x17b344: 0xdfb00030
    ctx->pc = 0x17b344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17b348:
    // 0x17b348: 0xdfb10038
    ctx->pc = 0x17b348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17b34c: 0xdfb20040
    ctx->pc = 0x17b34cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b350: 0xdfb30048
    ctx->pc = 0x17b350u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b354: 0xdfbf0050
    ctx->pc = 0x17b354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17b358: 0x3e00008
    ctx->pc = 0x17B358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B35Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B300u: goto label_17b300;
            case 0x17B304u: goto label_17b304;
            case 0x17B31Cu: goto label_17b31c;
            case 0x17B338u: goto label_17b338;
            case 0x17B348u: goto label_17b348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B360u;
}
