#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B1CB0
// Address: 0x1b1cb0 - 0x1b1d60
void sub_001B1CB0_0x1b1cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b1cb0u;

    // 0x1b1cb0: 0x27bdffb0
    ctx->pc = 0x1b1cb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b1cb4: 0xffbf0040
    ctx->pc = 0x1b1cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b1cb8: 0x7fb30030
    ctx->pc = 0x1b1cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b1cbc: 0x7fb20020
    ctx->pc = 0x1b1cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b1cc0: 0x80902d
    ctx->pc = 0x1b1cc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1cc4: 0x7fb10010
    ctx->pc = 0x1b1cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b1cc8: 0x3c04004f
    ctx->pc = 0x1b1cc8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)79 << 16));
    // 0x1b1ccc: 0x240282d
    ctx->pc = 0x1b1cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1cd0: 0x24848970
    ctx->pc = 0x1b1cd0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936944));
    // 0x1b1cd4: 0xc06c708
    ctx->pc = 0x1B1CD4u;
    SET_GPR_U32(ctx, 31, 0x1B1CDCu);
    ctx->pc = 0x1B1CD8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1B1C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1C20_0x1b1c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1CDCu; }
    }
    if (ctx->pc != 0x1B1CDCu) { return; }
    ctx->pc = 0x1B1CDCu;
    // 0x1b1cdc: 0x3c04004e
    ctx->pc = 0x1b1cdcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)78 << 16));
    // 0x1b1ce0: 0x240282d
    ctx->pc = 0x1b1ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ce4: 0xc06c708
    ctx->pc = 0x1B1CE4u;
    SET_GPR_U32(ctx, 31, 0x1B1CECu);
    ctx->pc = 0x1B1CE8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27168));
    ctx->pc = 0x1B1C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1C20_0x1b1c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1CECu; }
    }
    if (ctx->pc != 0x1B1CECu) { return; }
    ctx->pc = 0x1B1CECu;
    // 0x1b1cec: 0x882d
    ctx->pc = 0x1b1cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1cf0: 0x325000ff
    ctx->pc = 0x1b1cf0u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 18), 255));
    // 0x1b1cf4: 0x24031f44
    ctx->pc = 0x1b1cf4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8004));
label_1b1cf8:
    // 0x1b1cf8: 0x3c02004d
    ctx->pc = 0x1b1cf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)77 << 16));
    // 0x1b1cfc: 0x2231818
    ctx->pc = 0x1b1cfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1b1d00: 0x24427000
    ctx->pc = 0x1b1d00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1b1d04: 0x240282d
    ctx->pc = 0x1b1d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d08: 0x439821
    ctx->pc = 0x1b1d08u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1d0c: 0xc06c708
    ctx->pc = 0x1B1D0Cu;
    SET_GPR_U32(ctx, 31, 0x1B1D14u);
    ctx->pc = 0x1B1D10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B1C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1C20_0x1b1c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D14u; }
    }
    if (ctx->pc != 0x1B1D14u) { return; }
    ctx->pc = 0x1B1D14u;
    // 0x1b1d14: 0x24030001
    ctx->pc = 0x1b1d14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1d18: 0x16030003
    ctx->pc = 0x1B1D18u;
    {
        const bool branch_taken_0x1b1d18 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 3));
        ctx->pc = 0x1B1D1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b1d18) {
            ctx->pc = 0x1B1D28u;
            goto label_1b1d28;
        }
    }
    ctx->pc = 0x1B1D20u;
    // 0x1b1d20: 0xc06c708
    ctx->pc = 0x1B1D20u;
    SET_GPR_U32(ctx, 31, 0x1B1D28u);
    ctx->pc = 0x1B1D24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B1C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1C20_0x1b1c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D28u; }
    }
    if (ctx->pc != 0x1B1D28u) { return; }
    ctx->pc = 0x1B1D28u;
label_1b1d28:
    // 0x1b1d28: 0x26310001
    ctx->pc = 0x1b1d28u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b1d2c: 0x2a230008
    ctx->pc = 0x1b1d2cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 8));
    // 0x1b1d30: 0x1460fff1
    ctx->pc = 0x1B1D30u;
    {
        const bool branch_taken_0x1b1d30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B1D34u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8004));
        if (branch_taken_0x1b1d30) {
            ctx->pc = 0x1B1CF8u;
            goto label_1b1cf8;
        }
    }
    ctx->pc = 0x1B1D38u;
    // 0x1b1d38: 0xdfbf0040
    ctx->pc = 0x1b1d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1d3c: 0x7bb30030
    ctx->pc = 0x1b1d3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1d40: 0x7bb20020
    ctx->pc = 0x1b1d40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1d44: 0x7bb10010
    ctx->pc = 0x1b1d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1d48: 0x7bb00000
    ctx->pc = 0x1b1d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1d4c: 0x3e00008
    ctx->pc = 0x1B1D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1D50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1CF8u: goto label_1b1cf8;
            case 0x1B1D28u: goto label_1b1d28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1D54u;
    // 0x1b1d54: 0x0
    ctx->pc = 0x1b1d54u;
    // NOP
    // 0x1b1d58: 0x0
    ctx->pc = 0x1b1d58u;
    // NOP
    // 0x1b1d5c: 0x0
    ctx->pc = 0x1b1d5cu;
    // NOP
}
