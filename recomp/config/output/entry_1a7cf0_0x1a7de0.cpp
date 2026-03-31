#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1a7cf0
// Address: 0x1a7cf0 - 0x1a7de0
void entry_1a7cf0_0x1a7de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a7cf0u;

    // 0x1a7cf0: 0x27bdfff0
    ctx->pc = 0x1a7cf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a7cf4: 0x2c810003
    ctx->pc = 0x1a7cf4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), 3));
    // 0x1a7cf8: 0x14200006
    ctx->pc = 0x1A7CF8u;
    {
        const bool branch_taken_0x1a7cf8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A7CFCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1a7cf8) {
            ctx->pc = 0x1A7D14u;
            goto label_1a7d14;
        }
    }
    ctx->pc = 0x1A7D00u;
    // 0x1a7d00: 0x3c040024
    ctx->pc = 0x1a7d00u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a7d04: 0xc0423b4
    ctx->pc = 0x1A7D04u;
    SET_GPR_U32(ctx, 31, 0x1A7D0Cu);
    ctx->pc = 0x1A7D08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9056));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D0Cu; }
    }
    if (ctx->pc != 0x1A7D0Cu) { return; }
    ctx->pc = 0x1A7D0Cu;
    // 0x1a7d0c: 0x10000031
    ctx->pc = 0x1A7D0Cu;
    {
        const bool branch_taken_0x1a7d0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7D10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x1a7d0c) {
            ctx->pc = 0x1A7DD4u;
            goto label_1a7dd4;
        }
    }
    ctx->pc = 0x1A7D14u;
label_1a7d14:
    // 0x1a7d14: 0x2ca2000a
    ctx->pc = 0x1a7d14u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 10));
    // 0x1a7d18: 0x14400006
    ctx->pc = 0x1A7D18u;
    {
        const bool branch_taken_0x1a7d18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A7D1Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
        if (branch_taken_0x1a7d18) {
            ctx->pc = 0x1A7D34u;
            goto label_1a7d34;
        }
    }
    ctx->pc = 0x1A7D20u;
    // 0x1a7d20: 0x3c040024
    ctx->pc = 0x1a7d20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a7d24: 0xc0423b4
    ctx->pc = 0x1A7D24u;
    SET_GPR_U32(ctx, 31, 0x1A7D2Cu);
    ctx->pc = 0x1A7D28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9104));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D2Cu; }
    }
    if (ctx->pc != 0x1A7D2Cu) { return; }
    ctx->pc = 0x1A7D2Cu;
    // 0x1a7d2c: 0x10000029
    ctx->pc = 0x1A7D2Cu;
    {
        const bool branch_taken_0x1a7d2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7D30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x1a7d2c) {
            ctx->pc = 0x1A7DD4u;
            goto label_1a7dd4;
        }
    }
    ctx->pc = 0x1A7D34u;
label_1a7d34:
    // 0x1a7d34: 0x3c02002b
    ctx->pc = 0x1a7d34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a7d38: 0x8c290a68
    ctx->pc = 0x1a7d38u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1a7d3c: 0x24420a80
    ctx->pc = 0x1a7d3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2688));
    // 0x1a7d40: 0x91840
    ctx->pc = 0x1a7d40u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 9), 1));
    // 0x1a7d44: 0x691821
    ctx->pc = 0x1a7d44u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1a7d48: 0x31880
    ctx->pc = 0x1a7d48u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7d4c: 0x434821
    ctx->pc = 0x1a7d4cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7d50: 0x8d220000
    ctx->pc = 0x1a7d50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1a7d54: 0x4400006
    ctx->pc = 0x1A7D54u;
    {
        const bool branch_taken_0x1a7d54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A7D58u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x1a7d54) {
            ctx->pc = 0x1A7D70u;
            goto label_1a7d70;
        }
    }
    ctx->pc = 0x1A7D5Cu;
    // 0x1a7d5c: 0x3c040024
    ctx->pc = 0x1a7d5cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a7d60: 0xc0423b4
    ctx->pc = 0x1A7D60u;
    SET_GPR_U32(ctx, 31, 0x1A7D68u);
    ctx->pc = 0x1A7D64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9152));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D68u; }
    }
    if (ctx->pc != 0x1A7D68u) { return; }
    ctx->pc = 0x1A7D68u;
    // 0x1a7d68: 0x1000001a
    ctx->pc = 0x1A7D68u;
    {
        const bool branch_taken_0x1a7d68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7D6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a7d68) {
            ctx->pc = 0x1A7DD4u;
            goto label_1a7dd4;
        }
    }
    ctx->pc = 0x1A7D70u;
label_1a7d70:
    // 0x1a7d70: 0x6143c
    ctx->pc = 0x1a7d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1a7d74: 0x32180
    ctx->pc = 0x1a7d74u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 6));
    // 0x1a7d78: 0x2143f
    ctx->pc = 0x1a7d78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a7d7c: 0xa42825
    ctx->pc = 0x1a7d7cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a7d80: 0x3043ffff
    ctx->pc = 0x1a7d80u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1a7d84: 0x52400
    ctx->pc = 0x1a7d84u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 16));
    // 0x1a7d88: 0x3c024400
    ctx->pc = 0x1a7d88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17408 << 16));
    // 0x1a7d8c: 0x831825
    ctx->pc = 0x1a7d8cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a7d90: 0x3c01002b
    ctx->pc = 0x1a7d90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7d94: 0x31a3c
    ctx->pc = 0x1a7d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x1a7d98: 0x31a3e
    ctx->pc = 0x1a7d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x1a7d9c: 0x621025
    ctx->pc = 0x1a7d9cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7da0: 0xad220000
    ctx->pc = 0x1a7da0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x1a7da4: 0xa1270004
    ctx->pc = 0x1a7da4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 7));
    // 0x1a7da8: 0xa1280005
    ctx->pc = 0x1a7da8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 8));
    // 0x1a7dac: 0x8c220a68
    ctx->pc = 0x1a7dacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1a7db0: 0x24430001
    ctx->pc = 0x1a7db0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a7db4: 0x4610004
    ctx->pc = 0x1A7DB4u;
    {
        const bool branch_taken_0x1a7db4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A7DB8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 31));
        if (branch_taken_0x1a7db4) {
            ctx->pc = 0x1A7DC8u;
            goto label_1a7dc8;
        }
    }
    ctx->pc = 0x1A7DBCu;
    // 0x1a7dbc: 0x10400002
    ctx->pc = 0x1A7DBCu;
    {
        const bool branch_taken_0x1a7dbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7dbc) {
            ctx->pc = 0x1A7DC8u;
            goto label_1a7dc8;
        }
    }
    ctx->pc = 0x1A7DC4u;
    // 0x1a7dc4: 0x2442ffe0
    ctx->pc = 0x1a7dc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967264));
label_1a7dc8:
    // 0x1a7dc8: 0x3c01002b
    ctx->pc = 0x1a7dc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7dcc: 0xac220a68
    ctx->pc = 0x1a7dccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2664), GPR_U32(ctx, 2));
    // 0x1a7dd0: 0x102d
    ctx->pc = 0x1a7dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7dd4:
    // 0x1a7dd4: 0xdfbf0000
    ctx->pc = 0x1a7dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7dd8: 0x3e00008
    ctx->pc = 0x1A7DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7DDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7D14u: goto label_1a7d14;
            case 0x1A7D34u: goto label_1a7d34;
            case 0x1A7D70u: goto label_1a7d70;
            case 0x1A7DC8u: goto label_1a7dc8;
            case 0x1A7DD4u: goto label_1a7dd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7DE0u;
}
