#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001739A8
// Address: 0x1739a8 - 0x173a48
void sub_001739A8_0x1739a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1739a8u;

    // 0x1739a8: 0x27bdfff0
    ctx->pc = 0x1739a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1739ac: 0xffb00000
    ctx->pc = 0x1739acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1739b0: 0xffbf0008
    ctx->pc = 0x1739b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1739b4: 0xc05a78c
    ctx->pc = 0x1739B4u;
    SET_GPR_U32(ctx, 31, 0x1739BCu);
    ctx->pc = 0x1739B8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1739BCu; }
    }
    if (ctx->pc != 0x1739BCu) { return; }
    ctx->pc = 0x1739BCu;
    // 0x1739bc: 0x10400008
    ctx->pc = 0x1739BCu;
    {
        const bool branch_taken_0x1739bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1739C0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x1739bc) {
            ctx->pc = 0x1739E0u;
            goto label_1739e0;
        }
    }
    ctx->pc = 0x1739C4u;
    // 0x1739c4: 0x3c05ff00
    ctx->pc = 0x1739c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1739c8: 0xdfb00000
    ctx->pc = 0x1739c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1739cc: 0x202d
    ctx->pc = 0x1739ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1739d0: 0x34a50131
    ctx->pc = 0x1739d0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 305));
    // 0x1739d4: 0x805a704
    ctx->pc = 0x1739D4u;
    ctx->pc = 0x1739D8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x1739DCu;
    // 0x1739dc: 0x0
    ctx->pc = 0x1739dcu;
    // NOP
label_1739e0:
    // 0x1739e0: 0xc05cee0
    ctx->pc = 0x1739E0u;
    SET_GPR_U32(ctx, 31, 0x1739E8u);
    ctx->pc = 0x1739E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x173B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173B80_0x173b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1739E8u; }
    }
    if (ctx->pc != 0x1739E8u) { return; }
    ctx->pc = 0x1739E8u;
    // 0x1739e8: 0xc05a3de
    ctx->pc = 0x1739E8u;
    SET_GPR_U32(ctx, 31, 0x1739F0u);
    ctx->pc = 0x1739ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 120));
    ctx->pc = 0x168F78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168F78_0x168f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1739F0u; }
    }
    if (ctx->pc != 0x1739F0u) { return; }
    ctx->pc = 0x1739F0u;
    // 0x1739f0: 0xc059a78
    ctx->pc = 0x1739F0u;
    SET_GPR_U32(ctx, 31, 0x1739F8u);
    ctx->pc = 0x1739F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1669E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001669E0_0x1669e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1739F8u; }
    }
    if (ctx->pc != 0x1739F8u) { return; }
    ctx->pc = 0x1739F8u;
    // 0x1739f8: 0xc05ce92
    ctx->pc = 0x1739F8u;
    SET_GPR_U32(ctx, 31, 0x173A00u);
    ctx->pc = 0x1739FCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x173A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173A48_0x173a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173A00u; }
    }
    if (ctx->pc != 0x173A00u) { return; }
    ctx->pc = 0x173A00u;
    // 0x173a00: 0x24040007
    ctx->pc = 0x173a00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    // 0x173a04: 0x40282d
    ctx->pc = 0x173a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a08: 0x3c020023
    ctx->pc = 0x173a08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x173a0c: 0x2443f18c
    ctx->pc = 0x173a0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294963596));
label_173a10:
    // 0x173a10: 0x8c620000
    ctx->pc = 0x173a10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x173a14: 0x50500001
    ctx->pc = 0x173A14u;
    {
        const bool branch_taken_0x173a14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        if (branch_taken_0x173a14) {
            ctx->pc = 0x173A18u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x173A1Cu;
            goto label_173a1c;
        }
    }
    ctx->pc = 0x173A1Cu;
label_173a1c:
    // 0x173a1c: 0x2484ffff
    ctx->pc = 0x173a1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x173a20: 0x0
    ctx->pc = 0x173a20u;
    // NOP
    // 0x173a24: 0x0
    ctx->pc = 0x173a24u;
    // NOP
    // 0x173a28: 0x0
    ctx->pc = 0x173a28u;
    // NOP
    // 0x173a2c: 0x481fff8
    ctx->pc = 0x173A2Cu;
    {
        const bool branch_taken_0x173a2c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x173A30u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x173a2c) {
            ctx->pc = 0x173A10u;
            goto label_173a10;
        }
    }
    ctx->pc = 0x173A34u;
    // 0x173a34: 0xdfb00000
    ctx->pc = 0x173a34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173a38: 0xa0102d
    ctx->pc = 0x173a38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a3c: 0xdfbf0008
    ctx->pc = 0x173a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173a40: 0x3e00008
    ctx->pc = 0x173A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173A44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1739E0u: goto label_1739e0;
            case 0x173A10u: goto label_173a10;
            case 0x173A1Cu: goto label_173a1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173A48u;
}
