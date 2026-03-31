#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001189A8
// Address: 0x1189a8 - 0x118a38
void sub_001189A8_0x1189a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1189a8u;

    // 0x1189a8: 0x27bdffb0
    ctx->pc = 0x1189a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1189ac: 0x3c020021
    ctx->pc = 0x1189acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x1189b0: 0xffb30030
    ctx->pc = 0x1189b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1189b4: 0x3c030026
    ctx->pc = 0x1189b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x1189b8: 0xffb10010
    ctx->pc = 0x1189b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1189bc: 0x24539d2c
    ctx->pc = 0x1189bcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294941996));
    // 0x1189c0: 0xffb20020
    ctx->pc = 0x1189c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1189c4: 0x2471e168
    ctx->pc = 0x1189c4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294959464));
    // 0x1189c8: 0xffbf0040
    ctx->pc = 0x1189c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1189cc: 0x902d
    ctx->pc = 0x1189ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1189d0: 0xffb00000
    ctx->pc = 0x1189d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1189d4: 0x220202d
    ctx->pc = 0x1189d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1189d8: 0x260282d
    ctx->pc = 0x1189d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1189dc: 0xc041e86
    ctx->pc = 0x1189DCu;
    SET_GPR_U32(ctx, 31, 0x1189E4u);
    ctx->pc = 0x1189E0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x107A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107A18_0x107a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1189E4u; }
    }
    if (ctx->pc != 0x1189E4u) { return; }
    ctx->pc = 0x1189E4u;
    // 0x1189e4: 0x1040000b
    ctx->pc = 0x1189E4u;
    {
        const bool branch_taken_0x1189e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1189E8u;
        SET_GPR_U32(ctx, 16, ((uint32_t)33 << 16));
        if (branch_taken_0x1189e4) {
            ctx->pc = 0x118A14u;
            goto label_118a14;
        }
    }
    ctx->pc = 0x1189ECu;
    // 0x1189ec: 0x220202d
    ctx->pc = 0x1189ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1189f0: 0x8e059df0
    ctx->pc = 0x1189f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294942192)));
    // 0x1189f4: 0xc041e86
    ctx->pc = 0x1189F4u;
    SET_GPR_U32(ctx, 31, 0x1189FCu);
    ctx->pc = 0x1189F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x107A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107A18_0x107a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1189FCu; }
    }
    if (ctx->pc != 0x1189FCu) { return; }
    ctx->pc = 0x1189FCu;
    // 0x1189fc: 0x10400005
    ctx->pc = 0x1189FCu;
    {
        const bool branch_taken_0x1189fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x118A00u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294942192)));
        if (branch_taken_0x1189fc) {
            ctx->pc = 0x118A14u;
            goto label_118a14;
        }
    }
    ctx->pc = 0x118A04u;
    // 0x118a04: 0x260202d
    ctx->pc = 0x118a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a08: 0xc041e86
    ctx->pc = 0x118A08u;
    SET_GPR_U32(ctx, 31, 0x118A10u);
    ctx->pc = 0x118A0Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x107A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107A18_0x107a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118A10u; }
    }
    if (ctx->pc != 0x118A10u) { return; }
    ctx->pc = 0x118A10u;
    // 0x118a10: 0x2902b
    ctx->pc = 0x118a10u;
    SET_GPR_U32(ctx, 18, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_118a14:
    // 0x118a14: 0x240102d
    ctx->pc = 0x118a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a18: 0xdfbf0040
    ctx->pc = 0x118a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118a1c: 0xdfb30030
    ctx->pc = 0x118a1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118a20: 0xdfb20020
    ctx->pc = 0x118a20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118a24: 0xdfb10010
    ctx->pc = 0x118a24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118a28: 0xdfb00000
    ctx->pc = 0x118a28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118a2c: 0x3e00008
    ctx->pc = 0x118A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118A30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118A14u: goto label_118a14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x118A34u;
    // 0x118a34: 0x0
    ctx->pc = 0x118a34u;
    // NOP
}
