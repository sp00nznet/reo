#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00112D20
// Address: 0x112d20 - 0x112f08
void sub_00112D20_0x112d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x112d20u;

    // 0x112d20: 0x27bdff90
    ctx->pc = 0x112d20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x112d24: 0x63400
    ctx->pc = 0x112d24u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 16));
    // 0x112d28: 0xffb20020
    ctx->pc = 0x112d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x112d2c: 0x52c00
    ctx->pc = 0x112d2cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x112d30: 0x69403
    ctx->pc = 0x112d30u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x112d34: 0xffb40040
    ctx->pc = 0x112d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x112d38: 0x2642003f
    ctx->pc = 0x112d38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 63));
    // 0x112d3c: 0x5a403
    ctx->pc = 0x112d3cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 16));
    // 0x112d40: 0x21183
    ctx->pc = 0x112d40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x112d44: 0x3283000f
    ctx->pc = 0x112d44u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 20), 15));
    // 0x112d48: 0x3042003f
    ctx->pc = 0x112d48u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 63));
    // 0x112d4c: 0xffb00000
    ctx->pc = 0x112d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x112d50: 0x31e38
    ctx->pc = 0x112d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x112d54: 0x21438
    ctx->pc = 0x112d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x112d58: 0x80802d
    ctx->pc = 0x112d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d5c: 0x431025
    ctx->pc = 0x112d5cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112d60: 0xffb50050
    ctx->pc = 0x112d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x112d64: 0x73c00
    ctx->pc = 0x112d64u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 16));
    // 0x112d68: 0xffb30030
    ctx->pc = 0x112d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x112d6c: 0x84400
    ctx->pc = 0x112d6cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 16));
    // 0x112d70: 0xffb10010
    ctx->pc = 0x112d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x112d74: 0x94c00
    ctx->pc = 0x112d74u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 16));
    // 0x112d78: 0xffbf0060
    ctx->pc = 0x112d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x112d7c: 0x2403004c
    ctx->pc = 0x112d7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 76));
    // 0x112d80: 0x2404004e
    ctx->pc = 0x112d80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 78));
    // 0x112d84: 0x78c03
    ctx->pc = 0x112d84u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 7), 16));
    // 0x112d88: 0x8ac03
    ctx->pc = 0x112d88u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
    // 0x112d8c: 0x99c03
    ctx->pc = 0x112d8cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 9), 16));
    // 0x112d90: 0xfe030008
    ctx->pc = 0x112d90u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x112d94: 0xfe020000
    ctx->pc = 0x112d94u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x112d98: 0x16a0000e
    ctx->pc = 0x112D98u;
    {
        const bool branch_taken_0x112d98 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x112D9Cu;
        WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 4));
        if (branch_taken_0x112d98) {
            ctx->pc = 0x112DD4u;
            goto label_112dd4;
        }
    }
    ctx->pc = 0x112DA0u;
    // 0x112da0: 0x280202d
    ctx->pc = 0x112da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112da4: 0x240282d
    ctx->pc = 0x112da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112da8: 0xc044b16
    ctx->pc = 0x112DA8u;
    SET_GPR_U32(ctx, 31, 0x112DB0u);
    ctx->pc = 0x112DACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112C58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112C58_0x112c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112DB0u; }
    }
    if (ctx->pc != 0x112DB0u) { return; }
    ctx->pc = 0x112DB0u;
    // 0x112db0: 0x2143c
    ctx->pc = 0x112db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x112db4: 0x3263000f
    ctx->pc = 0x112db4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 15));
    // 0x112db8: 0x2143f
    ctx->pc = 0x112db8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x112dbc: 0x31e38
    ctx->pc = 0x112dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x112dc0: 0x431025
    ctx->pc = 0x112dc0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112dc4: 0x34048000
    ctx->pc = 0x112dc4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32768));
    // 0x112dc8: 0x42478
    ctx->pc = 0x112dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x112dcc: 0x1000000a
    ctx->pc = 0x112DCCu;
    {
        const bool branch_taken_0x112dcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x112DD0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        if (branch_taken_0x112dcc) {
            ctx->pc = 0x112DF8u;
            goto label_112df8;
        }
    }
    ctx->pc = 0x112DD4u;
label_112dd4:
    // 0x112dd4: 0x280202d
    ctx->pc = 0x112dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112dd8: 0x240282d
    ctx->pc = 0x112dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ddc: 0xc044b16
    ctx->pc = 0x112DDCu;
    SET_GPR_U32(ctx, 31, 0x112DE4u);
    ctx->pc = 0x112DE0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112C58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112C58_0x112c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112DE4u; }
    }
    if (ctx->pc != 0x112DE4u) { return; }
    ctx->pc = 0x112DE4u;
    // 0x112de4: 0x2143c
    ctx->pc = 0x112de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x112de8: 0x3263000f
    ctx->pc = 0x112de8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 15));
    // 0x112dec: 0x2143f
    ctx->pc = 0x112decu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x112df0: 0x31e38
    ctx->pc = 0x112df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x112df4: 0x431025
    ctx->pc = 0x112df4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_112df8:
    // 0x112df8: 0xfe020010
    ctx->pc = 0x112df8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x112dfc: 0x111043
    ctx->pc = 0x112dfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x112e00: 0x121843
    ctx->pc = 0x112e00u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
    // 0x112e04: 0x2143c
    ctx->pc = 0x112e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x112e08: 0x24040800
    ctx->pc = 0x112e08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x112e0c: 0x31c3c
    ctx->pc = 0x112e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x112e10: 0x2143f
    ctx->pc = 0x112e10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x112e14: 0x31c3f
    ctx->pc = 0x112e14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x112e18: 0x82102f
    ctx->pc = 0x112e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x112e1c: 0x83202f
    ctx->pc = 0x112e1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x112e20: 0x2113c
    ctx->pc = 0x112e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x112e24: 0x2646ffff
    ctx->pc = 0x112e24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x112e28: 0x2625ffff
    ctx->pc = 0x112e28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x112e2c: 0x42138
    ctx->pc = 0x112e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
    // 0x112e30: 0xde030040
    ctx->pc = 0x112e30u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x112e34: 0xde070050
    ctx->pc = 0x112e34u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x112e38: 0x52c3c
    ctx->pc = 0x112e38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x112e3c: 0x822025
    ctx->pc = 0x112e3cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x112e40: 0x63438
    ctx->pc = 0x112e40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x112e44: 0x240b0001
    ctx->pc = 0x112e44u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
    // 0x112e48: 0xc53025
    ctx->pc = 0x112e48u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x112e4c: 0x24020018
    ctx->pc = 0x112e4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x112e50: 0x6b1825
    ctx->pc = 0x112e50u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x112e54: 0xeb3825
    ctx->pc = 0x112e54u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x112e58: 0x24050040
    ctx->pc = 0x112e58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 64));
    // 0x112e5c: 0x2408001a
    ctx->pc = 0x112e5cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 26));
    // 0x112e60: 0x24090046
    ctx->pc = 0x112e60u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 70));
    // 0x112e64: 0x240a0045
    ctx->pc = 0x112e64u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 69));
    // 0x112e68: 0xfe020028
    ctx->pc = 0x112e68u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x112e6c: 0xfe040020
    ctx->pc = 0x112e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 4));
    // 0x112e70: 0x32820002
    ctx->pc = 0x112e70u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 2));
    // 0x112e74: 0xfe050038
    ctx->pc = 0x112e74u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 5));
    // 0x112e78: 0xfe060030
    ctx->pc = 0x112e78u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 6));
    // 0x112e7c: 0xfe080048
    ctx->pc = 0x112e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 8));
    // 0x112e80: 0xfe030040
    ctx->pc = 0x112e80u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x112e84: 0xfe090058
    ctx->pc = 0x112e84u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 9));
    // 0x112e88: 0xfe070050
    ctx->pc = 0x112e88u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 7));
    // 0x112e8c: 0x10400004
    ctx->pc = 0x112E8Cu;
    {
        const bool branch_taken_0x112e8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x112E90u;
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 10));
        if (branch_taken_0x112e8c) {
            ctx->pc = 0x112EA0u;
            goto label_112ea0;
        }
    }
    ctx->pc = 0x112E94u;
    // 0x112e94: 0xde020060
    ctx->pc = 0x112e94u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x112e98: 0x10000004
    ctx->pc = 0x112E98u;
    {
        const bool branch_taken_0x112e98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x112E9Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
        if (branch_taken_0x112e98) {
            ctx->pc = 0x112EACu;
            goto label_112eac;
        }
    }
    ctx->pc = 0x112EA0u;
label_112ea0:
    // 0x112ea0: 0xde020060
    ctx->pc = 0x112ea0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x112ea4: 0x2403fffe
    ctx->pc = 0x112ea4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x112ea8: 0x431024
    ctx->pc = 0x112ea8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_112eac:
    // 0x112eac: 0xfe020060
    ctx->pc = 0x112eacu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x112eb0: 0x24020047
    ctx->pc = 0x112eb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 71));
    // 0x112eb4: 0x12a00006
    ctx->pc = 0x112EB4u;
    {
        const bool branch_taken_0x112eb4 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x112EB8u;
        WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 2));
        if (branch_taken_0x112eb4) {
            ctx->pc = 0x112ED0u;
            goto label_112ed0;
        }
    }
    ctx->pc = 0x112EBCu;
    // 0x112ebc: 0x32a20003
    ctx->pc = 0x112ebcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), 3));
    // 0x112ec0: 0x3c030001
    ctx->pc = 0x112ec0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x112ec4: 0x21478
    ctx->pc = 0x112ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x112ec8: 0x10000002
    ctx->pc = 0x112EC8u;
    {
        const bool branch_taken_0x112ec8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x112ECCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x112ec8) {
            ctx->pc = 0x112ED4u;
            goto label_112ed4;
        }
    }
    ctx->pc = 0x112ED0u;
label_112ed0:
    // 0x112ed0: 0x3c020003
    ctx->pc = 0x112ed0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)3 << 16));
label_112ed4:
    // 0x112ed4: 0xfe020070
    ctx->pc = 0x112ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x112ed8: 0xf
    ctx->pc = 0x112ed8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x112edc: 0xdfbf0060
    ctx->pc = 0x112edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x112ee0: 0x24020008
    ctx->pc = 0x112ee0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x112ee4: 0xdfb50050
    ctx->pc = 0x112ee4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x112ee8: 0xdfb40040
    ctx->pc = 0x112ee8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x112eec: 0xdfb30030
    ctx->pc = 0x112eecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112ef0: 0xdfb20020
    ctx->pc = 0x112ef0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112ef4: 0xdfb10010
    ctx->pc = 0x112ef4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112ef8: 0xdfb00000
    ctx->pc = 0x112ef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112efc: 0x3e00008
    ctx->pc = 0x112EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112F00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x112DD4u: goto label_112dd4;
            case 0x112DF8u: goto label_112df8;
            case 0x112EA0u: goto label_112ea0;
            case 0x112EACu: goto label_112eac;
            case 0x112ED0u: goto label_112ed0;
            case 0x112ED4u: goto label_112ed4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x112F04u;
    // 0x112f04: 0x0
    ctx->pc = 0x112f04u;
    // NOP
}
