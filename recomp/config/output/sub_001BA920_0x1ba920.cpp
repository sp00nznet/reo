#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BA920
// Address: 0x1ba920 - 0x1baa00
void sub_001BA920_0x1ba920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ba920u;

    // 0x1ba920: 0x27bdffe0
    ctx->pc = 0x1ba920u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ba924: 0x3c010031
    ctx->pc = 0x1ba924u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1ba928: 0xffbf0010
    ctx->pc = 0x1ba928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ba92c: 0x7fb00000
    ctx->pc = 0x1ba92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ba930: 0x90236570
    ctx->pc = 0x1ba930u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 25968)));
    // 0x1ba934: 0x3c100031
    ctx->pc = 0x1ba934u;
    SET_GPR_U32(ctx, 16, ((uint32_t)49 << 16));
    // 0x1ba938: 0x10600024
    ctx->pc = 0x1BA938u;
    {
        const bool branch_taken_0x1ba938 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BA93Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 25968));
        if (branch_taken_0x1ba938) {
            ctx->pc = 0x1BA9CCu;
            goto label_1ba9cc;
        }
    }
    ctx->pc = 0x1BA940u;
    // 0x1ba940: 0x8e030010
    ctx->pc = 0x1ba940u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ba944: 0x10600021
    ctx->pc = 0x1BA944u;
    {
        const bool branch_taken_0x1ba944 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ba944) {
            ctx->pc = 0x1BA9CCu;
            goto label_1ba9cc;
        }
    }
    ctx->pc = 0x1BA94Cu;
    // 0x1ba94c: 0x3c010032
    ctx->pc = 0x1ba94cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1ba950: 0x8603000c
    ctx->pc = 0x1ba950u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ba954: 0x902643cc
    ctx->pc = 0x1ba954u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17356)));
    // 0x1ba958: 0x24050001
    ctx->pc = 0x1ba958u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba95c: 0xc52804
    ctx->pc = 0x1ba95cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x1ba960: 0x52c3c
    ctx->pc = 0x1ba960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1ba964: 0x52c3f
    ctx->pc = 0x1ba964u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1ba968: 0x651823
    ctx->pc = 0x1ba968u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ba96c: 0xa603000c
    ctx->pc = 0x1ba96cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ba970: 0x8603000c
    ctx->pc = 0x1ba970u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ba974: 0x1c600017
    ctx->pc = 0x1BA974u;
    {
        const bool branch_taken_0x1ba974 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1ba974) {
            ctx->pc = 0x1BA9D4u;
            goto label_1ba9d4;
        }
    }
    ctx->pc = 0x1BA97Cu;
    // 0x1ba97c: 0x8603000e
    ctx->pc = 0x1ba97cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1ba980: 0x8e020010
    ctx->pc = 0x1ba980u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ba984: 0x318c0
    ctx->pc = 0x1ba984u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ba988: 0x431021
    ctx->pc = 0x1ba988u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ba98c: 0x84420000
    ctx->pc = 0x1ba98cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ba990: 0xa602000c
    ctx->pc = 0x1ba990u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ba994: 0x8602000c
    ctx->pc = 0x1ba994u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ba998: 0x1040000c
    ctx->pc = 0x1BA998u;
    {
        const bool branch_taken_0x1ba998 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ba998) {
            ctx->pc = 0x1BA9CCu;
            goto label_1ba9cc;
        }
    }
    ctx->pc = 0x1BA9A0u;
    // 0x1ba9a0: 0x8602000e
    ctx->pc = 0x1ba9a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1ba9a4: 0x8e030010
    ctx->pc = 0x1ba9a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ba9a8: 0x210c0
    ctx->pc = 0x1ba9a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ba9ac: 0x431021
    ctx->pc = 0x1ba9acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ba9b0: 0xc06ea28
    ctx->pc = 0x1BA9B0u;
    SET_GPR_U32(ctx, 31, 0x1BA9B8u);
    ctx->pc = 0x1BA9B4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x1BA8A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA8A0_0x1ba8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA9B8u; }
    }
    if (ctx->pc != 0x1BA9B8u) { return; }
    ctx->pc = 0x1BA9B8u;
    // 0x1ba9b8: 0x8603000e
    ctx->pc = 0x1ba9b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1ba9bc: 0x24630001
    ctx->pc = 0x1ba9bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ba9c0: 0xa603000e
    ctx->pc = 0x1ba9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ba9c4: 0x10000004
    ctx->pc = 0x1BA9C4u;
    {
        const bool branch_taken_0x1ba9c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BA9C8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1ba9c4) {
            ctx->pc = 0x1BA9D8u;
            goto label_1ba9d8;
        }
    }
    ctx->pc = 0x1BA9CCu;
label_1ba9cc:
    // 0x1ba9cc: 0xc06ea10
    ctx->pc = 0x1BA9CCu;
    SET_GPR_U32(ctx, 31, 0x1BA9D4u);
    ctx->pc = 0x1BA840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA840_0x1ba840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA9D4u; }
    }
    if (ctx->pc != 0x1BA9D4u) { return; }
    ctx->pc = 0x1BA9D4u;
label_1ba9d4:
    // 0x1ba9d4: 0xdfbf0010
    ctx->pc = 0x1ba9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ba9d8:
    // 0x1ba9d8: 0x7bb00000
    ctx->pc = 0x1ba9d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba9dc: 0x3e00008
    ctx->pc = 0x1BA9DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA9E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BA9CCu: goto label_1ba9cc;
            case 0x1BA9D4u: goto label_1ba9d4;
            case 0x1BA9D8u: goto label_1ba9d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BA9E4u;
    // 0x1ba9e4: 0x0
    ctx->pc = 0x1ba9e4u;
    // NOP
    // 0x1ba9e8: 0x0
    ctx->pc = 0x1ba9e8u;
    // NOP
    // 0x1ba9ec: 0x0
    ctx->pc = 0x1ba9ecu;
    // NOP
    // 0x1ba9f0: 0x80282d
    ctx->pc = 0x1ba9f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba9f4: 0x806e9e4
    ctx->pc = 0x1BA9F4u;
    ctx->pc = 0x1BA9F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1BA790u;
    entry_1ba790_0x1ba840(rdram, ctx, runtime); return;
    ctx->pc = 0x1BA9FCu;
    // 0x1ba9fc: 0x0
    ctx->pc = 0x1ba9fcu;
    // NOP
}
