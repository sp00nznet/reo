#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AE1E0
// Address: 0x1ae1e0 - 0x1ae2e0
void sub_001AE1E0_0x1ae1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ae1e0u;

    // 0x1ae1e0: 0x27bdffd0
    ctx->pc = 0x1ae1e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ae1e4: 0xffbf0020
    ctx->pc = 0x1ae1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ae1e8: 0x7fb10010
    ctx->pc = 0x1ae1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ae1ec: 0x7fb00000
    ctx->pc = 0x1ae1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ae1f0: 0x882d
    ctx->pc = 0x1ae1f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae1f4:
    // 0x1ae1f4: 0x3c03002c
    ctx->pc = 0x1ae1f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1ae1f8: 0x112080
    ctx->pc = 0x1ae1f8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 2));
    // 0x1ae1fc: 0x24638dc8
    ctx->pc = 0x1ae1fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294938056));
    // 0x1ae200: 0x648021
    ctx->pc = 0x1ae200u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ae204: 0x8e040000
    ctx->pc = 0x1ae204u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ae208: 0x10800011
    ctx->pc = 0x1AE208u;
    {
        const bool branch_taken_0x1ae208 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ae208) {
            ctx->pc = 0x1AE250u;
            goto label_1ae250;
        }
    }
    ctx->pc = 0x1AE210u;
    // 0x1ae210: 0xc04c7be
    ctx->pc = 0x1AE210u;
    SET_GPR_U32(ctx, 31, 0x1AE218u);
    ctx->pc = 0x131EF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131EF8_0x131ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE218u; }
    }
    if (ctx->pc != 0x1AE218u) { return; }
    ctx->pc = 0x1AE218u;
    // 0x1ae218: 0x24030003
    ctx->pc = 0x1ae218u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae21c: 0x1443000c
    ctx->pc = 0x1AE21Cu;
    {
        const bool branch_taken_0x1ae21c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1AE220u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1ae21c) {
            ctx->pc = 0x1AE250u;
            goto label_1ae250;
        }
    }
    ctx->pc = 0x1AE224u;
    // 0x1ae224: 0x3c02002c
    ctx->pc = 0x1ae224u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1ae228: 0x711821
    ctx->pc = 0x1ae228u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1ae22c: 0x24428d70
    ctx->pc = 0x1ae22cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937968));
    // 0x1ae230: 0x318c0
    ctx->pc = 0x1ae230u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ae234: 0x431021
    ctx->pc = 0x1ae234u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae238: 0xa0400000
    ctx->pc = 0x1ae238u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae23c: 0x8e040000
    ctx->pc = 0x1ae23cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ae240: 0xc04cb94
    ctx->pc = 0x1AE240u;
    SET_GPR_U32(ctx, 31, 0x1AE248u);
    ctx->pc = 0x1AE244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x132E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E50_0x132e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE248u; }
    }
    if (ctx->pc != 0x1AE248u) { return; }
    ctx->pc = 0x1AE248u;
    // 0x1ae248: 0xc04c78e
    ctx->pc = 0x1AE248u;
    SET_GPR_U32(ctx, 31, 0x1AE250u);
    ctx->pc = 0x1AE24Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x131E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131E38_0x131e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE250u; }
    }
    if (ctx->pc != 0x1AE250u) { return; }
    ctx->pc = 0x1AE250u;
label_1ae250:
    // 0x1ae250: 0x26310001
    ctx->pc = 0x1ae250u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ae254: 0x2a230003
    ctx->pc = 0x1ae254u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 3));
    // 0x1ae258: 0x1460ffe6
    ctx->pc = 0x1AE258u;
    {
        const bool branch_taken_0x1ae258 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ae258) {
            ctx->pc = 0x1AE1F4u;
            goto label_1ae1f4;
        }
    }
    ctx->pc = 0x1AE260u;
    // 0x1ae260: 0xdfbf0020
    ctx->pc = 0x1ae260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae264: 0x7bb10010
    ctx->pc = 0x1ae264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae268: 0x7bb00000
    ctx->pc = 0x1ae268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae26c: 0x3e00008
    ctx->pc = 0x1AE26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE270u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE1F4u: goto label_1ae1f4;
            case 0x1AE250u: goto label_1ae250;
            case 0x1AE290u: goto label_1ae290;
            case 0x1AE2B4u: goto label_1ae2b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AE274u;
    // 0x1ae274: 0x0
    ctx->pc = 0x1ae274u;
    // NOP
    // 0x1ae278: 0x0
    ctx->pc = 0x1ae278u;
    // NOP
    // 0x1ae27c: 0x0
    ctx->pc = 0x1ae27cu;
    // NOP
    // 0x1ae280: 0x27bdffe0
    ctx->pc = 0x1ae280u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ae284: 0xffbf0010
    ctx->pc = 0x1ae284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ae288: 0x7fb00000
    ctx->pc = 0x1ae288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ae28c: 0x802d
    ctx->pc = 0x1ae28cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae290:
    // 0x1ae290: 0x3c03002c
    ctx->pc = 0x1ae290u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1ae294: 0x102080
    ctx->pc = 0x1ae294u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ae298: 0x24638dc8
    ctx->pc = 0x1ae298u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294938056));
    // 0x1ae29c: 0x641821
    ctx->pc = 0x1ae29cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ae2a0: 0x8c640000
    ctx->pc = 0x1ae2a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ae2a4: 0x10800003
    ctx->pc = 0x1AE2A4u;
    {
        const bool branch_taken_0x1ae2a4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE2A8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ae2a4) {
            ctx->pc = 0x1AE2B4u;
            goto label_1ae2b4;
        }
    }
    ctx->pc = 0x1AE2ACu;
    // 0x1ae2ac: 0xc04cb94
    ctx->pc = 0x1AE2ACu;
    SET_GPR_U32(ctx, 31, 0x1AE2B4u);
    ctx->pc = 0x132E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E50_0x132e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE2B4u; }
    }
    if (ctx->pc != 0x1AE2B4u) { return; }
    ctx->pc = 0x1AE2B4u;
label_1ae2b4:
    // 0x1ae2b4: 0x26100001
    ctx->pc = 0x1ae2b4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ae2b8: 0x2a030003
    ctx->pc = 0x1ae2b8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 3));
    // 0x1ae2bc: 0x1460fff4
    ctx->pc = 0x1AE2BCu;
    {
        const bool branch_taken_0x1ae2bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ae2bc) {
            ctx->pc = 0x1AE290u;
            goto label_1ae290;
        }
    }
    ctx->pc = 0x1AE2C4u;
    // 0x1ae2c4: 0xdfbf0010
    ctx->pc = 0x1ae2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae2c8: 0x7bb00000
    ctx->pc = 0x1ae2c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae2cc: 0x3e00008
    ctx->pc = 0x1AE2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE2D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE1F4u: goto label_1ae1f4;
            case 0x1AE250u: goto label_1ae250;
            case 0x1AE290u: goto label_1ae290;
            case 0x1AE2B4u: goto label_1ae2b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AE2D4u;
    // 0x1ae2d4: 0x0
    ctx->pc = 0x1ae2d4u;
    // NOP
    // 0x1ae2d8: 0x0
    ctx->pc = 0x1ae2d8u;
    // NOP
    // 0x1ae2dc: 0x0
    ctx->pc = 0x1ae2dcu;
    // NOP
}
