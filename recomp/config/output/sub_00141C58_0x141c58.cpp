#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00141C58
// Address: 0x141c58 - 0x141d18
void sub_00141C58_0x141c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x141c58u;

    // 0x141c58: 0x27bdffd0
    ctx->pc = 0x141c58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x141c5c: 0xffb10008
    ctx->pc = 0x141c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x141c60: 0xa0882d
    ctx->pc = 0x141c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141c64: 0x2e220006
    ctx->pc = 0x141c64u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 6));
    // 0x141c68: 0xffb00000
    ctx->pc = 0x141c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141c6c: 0xffb20010
    ctx->pc = 0x141c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x141c70: 0xe0902d
    ctx->pc = 0x141c70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141c74: 0xffb30018
    ctx->pc = 0x141c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x141c78: 0xc0982d
    ctx->pc = 0x141c78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141c7c: 0xffbf0020
    ctx->pc = 0x141c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x141c80: 0x14400004
    ctx->pc = 0x141C80u;
    {
        const bool branch_taken_0x141c80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x141C84u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x141c80) {
            ctx->pc = 0x141C94u;
            goto label_141c94;
        }
    }
    ctx->pc = 0x141C88u;
    // 0x141c88: 0x3c040024
    ctx->pc = 0x141c88u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x141c8c: 0xc05062a
    ctx->pc = 0x141C8Cu;
    SET_GPR_U32(ctx, 31, 0x141C94u);
    ctx->pc = 0x141C90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958152));
    ctx->pc = 0x1418A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001418A8_0x1418a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141C94u; }
    }
    if (ctx->pc != 0x141C94u) { return; }
    ctx->pc = 0x141C94u;
label_141c94:
    // 0x141c94: 0x6000003
    ctx->pc = 0x141C94u;
    {
        const bool branch_taken_0x141c94 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x141C98u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 8));
        if (branch_taken_0x141c94) {
            ctx->pc = 0x141CA4u;
            goto label_141ca4;
        }
    }
    ctx->pc = 0x141C9Cu;
    // 0x141c9c: 0x14400004
    ctx->pc = 0x141C9Cu;
    {
        const bool branch_taken_0x141c9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x141c9c) {
            ctx->pc = 0x141CB0u;
            goto label_141cb0;
        }
    }
    ctx->pc = 0x141CA4u;
label_141ca4:
    // 0x141ca4: 0x3c040024
    ctx->pc = 0x141ca4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x141ca8: 0xc05062a
    ctx->pc = 0x141CA8u;
    SET_GPR_U32(ctx, 31, 0x141CB0u);
    ctx->pc = 0x141CACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958192));
    ctx->pc = 0x1418A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001418A8_0x1418a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141CB0u; }
    }
    if (ctx->pc != 0x141CB0u) { return; }
    ctx->pc = 0x141CB0u;
label_141cb0:
    // 0x141cb0: 0xc0505b4
    ctx->pc = 0x141CB0u;
    SET_GPR_U32(ctx, 31, 0x141CB8u);
    ctx->pc = 0x1416D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001416D0_0x1416d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141CB8u; }
    }
    if (ctx->pc != 0x141CB8u) { return; }
    ctx->pc = 0x141CB8u;
    // 0x141cb8: 0x3c040024
    ctx->pc = 0x141cb8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x141cbc: 0x101040
    ctx->pc = 0x141cbcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 1));
    // 0x141cc0: 0x501021
    ctx->pc = 0x141cc0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x141cc4: 0x21040
    ctx->pc = 0x141cc4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x141cc8: 0x511021
    ctx->pc = 0x141cc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x141ccc: 0x210c0
    ctx->pc = 0x141cccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x141cd0: 0x3c100026
    ctx->pc = 0x141cd0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
    // 0x141cd4: 0x26104820
    ctx->pc = 0x141cd4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 18464));
    // 0x141cd8: 0x2028021
    ctx->pc = 0x141cd8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x141cdc: 0x8e030000
    ctx->pc = 0x141cdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x141ce0: 0x10600003
    ctx->pc = 0x141CE0u;
    {
        const bool branch_taken_0x141ce0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x141CE4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958232));
        if (branch_taken_0x141ce0) {
            ctx->pc = 0x141CF0u;
            goto label_141cf0;
        }
    }
    ctx->pc = 0x141CE8u;
    // 0x141ce8: 0xc05062a
    ctx->pc = 0x141CE8u;
    SET_GPR_U32(ctx, 31, 0x141CF0u);
    ctx->pc = 0x1418A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001418A8_0x1418a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141CF0u; }
    }
    if (ctx->pc != 0x141CF0u) { return; }
    ctx->pc = 0x141CF0u;
label_141cf0:
    // 0x141cf0: 0xae120004
    ctx->pc = 0x141cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x141cf4: 0xae130000
    ctx->pc = 0x141cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x141cf8: 0xdfb10008
    ctx->pc = 0x141cf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141cfc: 0xdfb00000
    ctx->pc = 0x141cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141d00: 0xdfb20010
    ctx->pc = 0x141d00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141d04: 0xdfb30018
    ctx->pc = 0x141d04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x141d08: 0xdfbf0020
    ctx->pc = 0x141d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141d0c: 0x80505ba
    ctx->pc = 0x141D0Cu;
    ctx->pc = 0x141D10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1416E8u;
    sub_001416E8_0x1416e8(rdram, ctx, runtime); return;
    ctx->pc = 0x141D14u;
    // 0x141d14: 0x0
    ctx->pc = 0x141d14u;
    // NOP
}
