#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00132028
// Address: 0x132028 - 0x132148
void sub_00132028_0x132028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x132028u;

    // 0x132028: 0x27bdffd0
    ctx->pc = 0x132028u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13202c: 0xffb00000
    ctx->pc = 0x13202cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132030: 0xc0802d
    ctx->pc = 0x132030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132034: 0xffb20010
    ctx->pc = 0x132034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x132038: 0x80902d
    ctx->pc = 0x132038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13203c: 0xffb30018
    ctx->pc = 0x13203cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x132040: 0xa0982d
    ctx->pc = 0x132040u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132044: 0xffb10008
    ctx->pc = 0x132044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132048: 0xffbf0020
    ctx->pc = 0x132048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13204c: 0x92420001
    ctx->pc = 0x13204cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x132050: 0x21e00
    ctx->pc = 0x132050u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 24));
    // 0x132054: 0x2442fffd
    ctx->pc = 0x132054u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x132058: 0x2c420002
    ctx->pc = 0x132058u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x13205c: 0x10400014
    ctx->pc = 0x13205Cu;
    {
        const bool branch_taken_0x13205c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x132060u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
        if (branch_taken_0x13205c) {
            ctx->pc = 0x1320B0u;
            goto label_1320b0;
        }
    }
    ctx->pc = 0x132064u;
    // 0x132064: 0xc04b5e4
    ctx->pc = 0x132064u;
    SET_GPR_U32(ctx, 31, 0x13206Cu);
    ctx->pc = 0x132068u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->pc = 0x12D790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D790_0x12d790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13206Cu; }
    }
    if (ctx->pc != 0x13206Cu) { return; }
    ctx->pc = 0x13206Cu;
    // 0x13206c: 0x8e440004
    ctx->pc = 0x13206cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x132070: 0xc04b5b8
    ctx->pc = 0x132070u;
    SET_GPR_U32(ctx, 31, 0x132078u);
    ctx->pc = 0x132074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x12D6E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D6E0_0x12d6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132078u; }
    }
    if (ctx->pc != 0x132078u) { return; }
    ctx->pc = 0x132078u;
    // 0x132078: 0x8e44000c
    ctx->pc = 0x132078u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x13207c: 0xc04b1cc
    ctx->pc = 0x13207Cu;
    SET_GPR_U32(ctx, 31, 0x132084u);
    ctx->pc = 0x132080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12C730u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C730_0x12c730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132084u; }
    }
    if (ctx->pc != 0x132084u) { return; }
    ctx->pc = 0x132084u;
    // 0x132084: 0x240202d
    ctx->pc = 0x132084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132088: 0x282d
    ctx->pc = 0x132088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13208c: 0xc04ca82
    ctx->pc = 0x13208Cu;
    SET_GPR_U32(ctx, 31, 0x132094u);
    ctx->pc = 0x132090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x132A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00132A08_0x132a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132094u; }
    }
    if (ctx->pc != 0x132094u) { return; }
    ctx->pc = 0x132094u;
    // 0x132094: 0x8e4300a4
    ctx->pc = 0x132094u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x132098: 0x2228821
    ctx->pc = 0x132098u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13209c: 0x2118023
    ctx->pc = 0x13209cu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1320a0: 0x2038021
    ctx->pc = 0x1320a0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1320a4: 0x1000001c
    ctx->pc = 0x1320A4u;
    {
        const bool branch_taken_0x1320a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1320A8u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        if (branch_taken_0x1320a4) {
            ctx->pc = 0x132118u;
            goto label_132118;
        }
    }
    ctx->pc = 0x1320ACu;
    // 0x1320ac: 0x0
    ctx->pc = 0x1320acu;
    // NOP
label_1320b0:
    // 0x1320b0: 0x24020005
    ctx->pc = 0x1320b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1320b4: 0x54620016
    ctx->pc = 0x1320B4u;
    {
        const bool branch_taken_0x1320b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1320b4) {
            ctx->pc = 0x1320B8u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x132110u;
            goto label_132110;
        }
    }
    ctx->pc = 0x1320BCu;
    // 0x1320bc: 0xc04b602
    ctx->pc = 0x1320BCu;
    SET_GPR_U32(ctx, 31, 0x1320C4u);
    ctx->pc = 0x1320C0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->pc = 0x12D808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D808_0x12d808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1320C4u; }
    }
    if (ctx->pc != 0x1320C4u) { return; }
    ctx->pc = 0x1320C4u;
    // 0x1320c4: 0x8e440004
    ctx->pc = 0x1320c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1320c8: 0xc04b5e4
    ctx->pc = 0x1320C8u;
    SET_GPR_U32(ctx, 31, 0x1320D0u);
    ctx->pc = 0x1320CCu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x12D790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D790_0x12d790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1320D0u; }
    }
    if (ctx->pc != 0x1320D0u) { return; }
    ctx->pc = 0x1320D0u;
    // 0x1320d0: 0x8e440004
    ctx->pc = 0x1320d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1320d4: 0xc04b5f0
    ctx->pc = 0x1320D4u;
    SET_GPR_U32(ctx, 31, 0x1320DCu);
    ctx->pc = 0x1320D8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x12D7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D7C0_0x12d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1320DCu; }
    }
    if (ctx->pc != 0x1320DCu) { return; }
    ctx->pc = 0x1320DCu;
    // 0x1320dc: 0x24030010
    ctx->pc = 0x1320dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1320e0: 0x62001a
    ctx->pc = 0x1320e0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1320e4: 0x50400001
    ctx->pc = 0x1320E4u;
    {
        const bool branch_taken_0x1320e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1320e4) {
            ctx->pc = 0x1320E8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1320ECu;
            goto label_1320ec;
        }
    }
    ctx->pc = 0x1320ECu;
label_1320ec:
    // 0x1320ec: 0x8e620000
    ctx->pc = 0x1320ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1320f0: 0x1812
    ctx->pc = 0x1320f0u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1320f4: 0x431018
    ctx->pc = 0x1320f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1320f8: 0xae620000
    ctx->pc = 0x1320f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1320fc: 0x8e4300a4
    ctx->pc = 0x1320fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x132100: 0x431021
    ctx->pc = 0x132100u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x132104: 0x10000004
    ctx->pc = 0x132104u;
    {
        const bool branch_taken_0x132104 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x132108u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x132104) {
            ctx->pc = 0x132118u;
            goto label_132118;
        }
    }
    ctx->pc = 0x13210Cu;
    // 0x13210c: 0x0
    ctx->pc = 0x13210cu;
    // NOP
label_132110:
    // 0x132110: 0xae600000
    ctx->pc = 0x132110u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x132114: 0xae020000
    ctx->pc = 0x132114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_132118:
    // 0x132118: 0x8e430088
    ctx->pc = 0x132118u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x13211c: 0x8e620000
    ctx->pc = 0x13211cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x132120: 0xdfb00000
    ctx->pc = 0x132120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132124: 0x431021
    ctx->pc = 0x132124u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x132128: 0xdfb10008
    ctx->pc = 0x132128u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13212c: 0xae620000
    ctx->pc = 0x13212cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x132130: 0xdfb20010
    ctx->pc = 0x132130u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132134: 0xdfb30018
    ctx->pc = 0x132134u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x132138: 0xdfbf0020
    ctx->pc = 0x132138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13213c: 0x3e00008
    ctx->pc = 0x13213Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132140u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1320B0u: goto label_1320b0;
            case 0x1320ECu: goto label_1320ec;
            case 0x132110u: goto label_132110;
            case 0x132118u: goto label_132118;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132144u;
    // 0x132144: 0x0
    ctx->pc = 0x132144u;
    // NOP
}
