#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001759A0
// Address: 0x1759a0 - 0x175a38
void sub_001759A0_0x1759a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1759a0u;

    // 0x1759a0: 0x27bdffe0
    ctx->pc = 0x1759a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1759a4: 0xffb00000
    ctx->pc = 0x1759a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1759a8: 0x80802d
    ctx->pc = 0x1759a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1759ac: 0xffb10008
    ctx->pc = 0x1759acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1759b0: 0xa0882d
    ctx->pc = 0x1759b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1759b4: 0xffb20010
    ctx->pc = 0x1759b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1759b8: 0xffbf0018
    ctx->pc = 0x1759b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1759bc: 0xc05a78c
    ctx->pc = 0x1759BCu;
    SET_GPR_U32(ctx, 31, 0x1759C4u);
    ctx->pc = 0x1759C0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1759C4u; }
    }
    if (ctx->pc != 0x1759C4u) { return; }
    ctx->pc = 0x1759C4u;
    // 0x1759c4: 0x3c05ff00
    ctx->pc = 0x1759c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1759c8: 0x202d
    ctx->pc = 0x1759c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1759cc: 0x10400008
    ctx->pc = 0x1759CCu;
    {
        const bool branch_taken_0x1759cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1759D0u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 284));
        if (branch_taken_0x1759cc) {
            ctx->pc = 0x1759F0u;
            goto label_1759f0;
        }
    }
    ctx->pc = 0x1759D4u;
    // 0x1759d4: 0xdfb00000
    ctx->pc = 0x1759d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1759d8: 0xdfb10008
    ctx->pc = 0x1759d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1759dc: 0xdfb20010
    ctx->pc = 0x1759dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1759e0: 0xdfbf0018
    ctx->pc = 0x1759e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1759e4: 0x805a704
    ctx->pc = 0x1759E4u;
    ctx->pc = 0x1759E8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x1759ECu;
    // 0x1759ec: 0x0
    ctx->pc = 0x1759ecu;
    // NOP
label_1759f0:
    // 0x1759f0: 0x8e020078
    ctx->pc = 0x1759f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1759f4: 0x10400006
    ctx->pc = 0x1759F4u;
    {
        const bool branch_taken_0x1759f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1759F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 268));
        if (branch_taken_0x1759f4) {
            ctx->pc = 0x175A10u;
            goto label_175a10;
        }
    }
    ctx->pc = 0x1759FCu;
    // 0x1759fc: 0x8e030108
    ctx->pc = 0x1759fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x175a00: 0xae220000
    ctx->pc = 0x175a00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x175a04: 0x10000004
    ctx->pc = 0x175A04u;
    {
        const bool branch_taken_0x175a04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175A08u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x175a04) {
            ctx->pc = 0x175A18u;
            goto label_175a18;
        }
    }
    ctx->pc = 0x175A0Cu;
    // 0x175a0c: 0x0
    ctx->pc = 0x175a0cu;
    // NOP
label_175a10:
    // 0x175a10: 0xae200000
    ctx->pc = 0x175a10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x175a14: 0xae400000
    ctx->pc = 0x175a14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_175a18:
    // 0x175a18: 0xdfb00000
    ctx->pc = 0x175a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175a1c: 0x102d
    ctx->pc = 0x175a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a20: 0xdfb10008
    ctx->pc = 0x175a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175a24: 0xdfb20010
    ctx->pc = 0x175a24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175a28: 0xdfbf0018
    ctx->pc = 0x175a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175a2c: 0x3e00008
    ctx->pc = 0x175A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175A30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1759F0u: goto label_1759f0;
            case 0x175A10u: goto label_175a10;
            case 0x175A18u: goto label_175a18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175A34u;
    // 0x175a34: 0x0
    ctx->pc = 0x175a34u;
    // NOP
}
