#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00103A48
// Address: 0x103a48 - 0x103c78
void sub_00103A48_0x103a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x103a48u;

    // 0x103a48: 0x27bdffc0
    ctx->pc = 0x103a48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x103a4c: 0xa0702d
    ctx->pc = 0x103a4cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a50: 0xffb40020
    ctx->pc = 0x103a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x103a54: 0x80a02d
    ctx->pc = 0x103a54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a58: 0xffb00000
    ctx->pc = 0x103a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103a5c: 0xffb10008
    ctx->pc = 0x103a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x103a60: 0xffb20010
    ctx->pc = 0x103a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x103a64: 0xffb30018
    ctx->pc = 0x103a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x103a68: 0xffb50028
    ctx->pc = 0x103a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x103a6c: 0xffb60030
    ctx->pc = 0x103a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x103a70: 0xffbf0038
    ctx->pc = 0x103a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x103a74: 0x8dd00010
    ctx->pc = 0x103a74u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x103a78: 0x8e830010
    ctx->pc = 0x103a78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x103a7c: 0x70182a
    ctx->pc = 0x103a7cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
    // 0x103a80: 0x14600072
    ctx->pc = 0x103A80u;
    {
        const bool branch_taken_0x103a80 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x103A84u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x103a80) {
            ctx->pc = 0x103C4Cu;
            goto label_103c4c;
        }
    }
    ctx->pc = 0x103A88u;
    // 0x103a88: 0x2610ffff
    ctx->pc = 0x103a88u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x103a8c: 0x25cb0014
    ctx->pc = 0x103a8cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 14), 20));
    // 0x103a90: 0x101080
    ctx->pc = 0x103a90u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x103a94: 0x26910014
    ctx->pc = 0x103a94u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 20), 20));
    // 0x103a98: 0x1629821
    ctx->pc = 0x103a98u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x103a9c: 0x2224821
    ctx->pc = 0x103a9cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x103aa0: 0x8e630000
    ctx->pc = 0x103aa0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x103aa4: 0x160b02d
    ctx->pc = 0x103aa4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103aa8: 0x8d2d0000
    ctx->pc = 0x103aa8u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x103aac: 0x220502d
    ctx->pc = 0x103aacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ab0: 0x24630001
    ctx->pc = 0x103ab0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x103ab4: 0x1a3001b
    ctx->pc = 0x103ab4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 13) / divisor; ctx->hi = GPR_U32(ctx, 3) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,13); } }
    // 0x103ab8: 0x50600001
    ctx->pc = 0x103AB8u;
    {
        const bool branch_taken_0x103ab8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x103ab8) {
            ctx->pc = 0x103ABCu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x103AC0u;
            goto label_103ac0;
        }
    }
    ctx->pc = 0x103AC0u;
label_103ac0:
    // 0x103ac0: 0xa812
    ctx->pc = 0x103ac0u;
    SET_GPR_U32(ctx, 21, ctx->lo);
    // 0x103ac4: 0x2a0902d
    ctx->pc = 0x103ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ac8: 0x1240002b
    ctx->pc = 0x103AC8u;
    {
        const bool branch_taken_0x103ac8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x103ACCu;
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x103ac8) {
            ctx->pc = 0x103B78u;
            goto label_103b78;
        }
    }
    ctx->pc = 0x103AD0u;
    // 0x103ad0: 0x182d
    ctx->pc = 0x103ad0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ad4: 0x0
    ctx->pc = 0x103ad4u;
    // NOP
label_103ad8:
    // 0x103ad8: 0x8d640000
    ctx->pc = 0x103ad8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x103adc: 0x256b0004
    ctx->pc = 0x103adcu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4));
    // 0x103ae0: 0x8d460000
    ctx->pc = 0x103ae0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x103ae4: 0x26b382b
    ctx->pc = 0x103ae4u;
    SET_GPR_U32(ctx, 7, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x103ae8: 0x3082ffff
    ctx->pc = 0x103ae8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 65535));
    // 0x103aec: 0x42402
    ctx->pc = 0x103aecu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 16));
    // 0x103af0: 0x522818
    ctx->pc = 0x103af0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x103af4: 0x922018
    ctx->pc = 0x103af4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x103af8: 0xa31021
    ctx->pc = 0x103af8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x103afc: 0x30c3ffff
    ctx->pc = 0x103afcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 65535));
    // 0x103b00: 0x3045ffff
    ctx->pc = 0x103b00u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), 65535));
    // 0x103b04: 0x21402
    ctx->pc = 0x103b04u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 16));
    // 0x103b08: 0x824021
    ctx->pc = 0x103b08u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x103b0c: 0x651823
    ctx->pc = 0x103b0cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x103b10: 0x6c1821
    ctx->pc = 0x103b10u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x103b14: 0x63402
    ctx->pc = 0x103b14u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 6), 16));
    // 0x103b18: 0x3102ffff
    ctx->pc = 0x103b18u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 8), 65535));
    // 0x103b1c: 0x36403
    ctx->pc = 0x103b1cu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x103b20: 0xc23023
    ctx->pc = 0x103b20u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x103b24: 0xa5430000
    ctx->pc = 0x103b24u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x103b28: 0xcc2821
    ctx->pc = 0x103b28u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x103b2c: 0x81c02
    ctx->pc = 0x103b2cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 8), 16));
    // 0x103b30: 0xa5450002
    ctx->pc = 0x103b30u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x103b34: 0x254a0004
    ctx->pc = 0x103b34u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4));
    // 0x103b38: 0x10e0ffe7
    ctx->pc = 0x103B38u;
    {
        const bool branch_taken_0x103b38 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x103B3Cu;
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
        if (branch_taken_0x103b38) {
            ctx->pc = 0x103AD8u;
            goto label_103ad8;
        }
    }
    ctx->pc = 0x103B40u;
    // 0x103b40: 0x55a0000e
    ctx->pc = 0x103B40u;
    {
        const bool branch_taken_0x103b40 = (GPR_U32(ctx, 13) != GPR_U32(ctx, 0));
        if (branch_taken_0x103b40) {
            ctx->pc = 0x103B44u;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x103B7Cu;
            goto label_103b7c;
        }
    }
    ctx->pc = 0x103B48u;
    // 0x103b48: 0x10000002
    ctx->pc = 0x103B48u;
    {
        const bool branch_taken_0x103b48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x103B4Cu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967292));
        if (branch_taken_0x103b48) {
            ctx->pc = 0x103B54u;
            goto label_103b54;
        }
    }
    ctx->pc = 0x103B50u;
label_103b50:
    // 0x103b50: 0x2610ffff
    ctx->pc = 0x103b50u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_103b54:
    // 0x103b54: 0x229102b
    ctx->pc = 0x103b54u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x103b58: 0x50400007
    ctx->pc = 0x103B58u;
    {
        const bool branch_taken_0x103b58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x103b58) {
            ctx->pc = 0x103B5Cu;
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->pc = 0x103B78u;
            goto label_103b78;
        }
    }
    ctx->pc = 0x103B60u;
    // 0x103b60: 0x8d220000
    ctx->pc = 0x103b60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x103b64: 0x0
    ctx->pc = 0x103b64u;
    // NOP
    // 0x103b68: 0x0
    ctx->pc = 0x103b68u;
    // NOP
    // 0x103b6c: 0x5040fff8
    ctx->pc = 0x103B6Cu;
    {
        const bool branch_taken_0x103b6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x103b6c) {
            ctx->pc = 0x103B70u;
            SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967292));
            ctx->pc = 0x103B50u;
            goto label_103b50;
        }
    }
    ctx->pc = 0x103B74u;
    // 0x103b74: 0xae900010
    ctx->pc = 0x103b74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_103b78:
    // 0x103b78: 0x1c0282d
    ctx->pc = 0x103b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_103b7c:
    // 0x103b7c: 0xc0421ba
    ctx->pc = 0x103B7Cu;
    SET_GPR_U32(ctx, 31, 0x103B84u);
    ctx->pc = 0x103B80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1086E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001086E8_0x1086e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103B84u; }
    }
    if (ctx->pc != 0x103B84u) { return; }
    ctx->pc = 0x103B84u;
    // 0x103b84: 0x4400030
    ctx->pc = 0x103B84u;
    {
        const bool branch_taken_0x103b84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x103B88u;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x103b84) {
            ctx->pc = 0x103C48u;
            goto label_103c48;
        }
    }
    ctx->pc = 0x103B8Cu;
    // 0x103b8c: 0x26b20001
    ctx->pc = 0x103b8cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 21), 1));
    // 0x103b90: 0x602d
    ctx->pc = 0x103b90u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b94: 0x182d
    ctx->pc = 0x103b94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b98: 0x220502d
    ctx->pc = 0x103b98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b9c: 0x0
    ctx->pc = 0x103b9cu;
    // NOP
label_103ba0:
    // 0x103ba0: 0x8d640000
    ctx->pc = 0x103ba0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x103ba4: 0x256b0004
    ctx->pc = 0x103ba4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4));
    // 0x103ba8: 0x8d450000
    ctx->pc = 0x103ba8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x103bac: 0x26b382b
    ctx->pc = 0x103bacu;
    SET_GPR_U32(ctx, 7, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x103bb0: 0x3082ffff
    ctx->pc = 0x103bb0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 65535));
    // 0x103bb4: 0x43402
    ctx->pc = 0x103bb4u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 4), 16));
    // 0x103bb8: 0x431021
    ctx->pc = 0x103bb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x103bbc: 0x30a3ffff
    ctx->pc = 0x103bbcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
    // 0x103bc0: 0x3044ffff
    ctx->pc = 0x103bc0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 65535));
    // 0x103bc4: 0x21402
    ctx->pc = 0x103bc4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 16));
    // 0x103bc8: 0xc24021
    ctx->pc = 0x103bc8u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x103bcc: 0x641823
    ctx->pc = 0x103bccu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x103bd0: 0x6c1821
    ctx->pc = 0x103bd0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x103bd4: 0x52c02
    ctx->pc = 0x103bd4u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 16));
    // 0x103bd8: 0x3102ffff
    ctx->pc = 0x103bd8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 8), 65535));
    // 0x103bdc: 0x36403
    ctx->pc = 0x103bdcu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x103be0: 0xa22823
    ctx->pc = 0x103be0u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x103be4: 0xa5430000
    ctx->pc = 0x103be4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x103be8: 0xac2821
    ctx->pc = 0x103be8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x103bec: 0x81c02
    ctx->pc = 0x103becu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 8), 16));
    // 0x103bf0: 0xa5450002
    ctx->pc = 0x103bf0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x103bf4: 0x254a0004
    ctx->pc = 0x103bf4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4));
    // 0x103bf8: 0x10e0ffe9
    ctx->pc = 0x103BF8u;
    {
        const bool branch_taken_0x103bf8 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x103BFCu;
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
        if (branch_taken_0x103bf8) {
            ctx->pc = 0x103BA0u;
            goto label_103ba0;
        }
    }
    ctx->pc = 0x103C00u;
    // 0x103c00: 0x101080
    ctx->pc = 0x103c00u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x103c04: 0x2224821
    ctx->pc = 0x103c04u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x103c08: 0x8d230000
    ctx->pc = 0x103c08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x103c0c: 0x1460000f
    ctx->pc = 0x103C0Cu;
    {
        const bool branch_taken_0x103c0c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x103C10u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x103c0c) {
            ctx->pc = 0x103C4Cu;
            goto label_103c4c;
        }
    }
    ctx->pc = 0x103C14u;
    // 0x103c14: 0x10000003
    ctx->pc = 0x103C14u;
    {
        const bool branch_taken_0x103c14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x103C18u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967292));
        if (branch_taken_0x103c14) {
            ctx->pc = 0x103C24u;
            goto label_103c24;
        }
    }
    ctx->pc = 0x103C1Cu;
    // 0x103c1c: 0x0
    ctx->pc = 0x103c1cu;
    // NOP
label_103c20:
    // 0x103c20: 0x2610ffff
    ctx->pc = 0x103c20u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_103c24:
    // 0x103c24: 0x229102b
    ctx->pc = 0x103c24u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x103c28: 0x50400007
    ctx->pc = 0x103C28u;
    {
        const bool branch_taken_0x103c28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x103c28) {
            ctx->pc = 0x103C2Cu;
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->pc = 0x103C48u;
            goto label_103c48;
        }
    }
    ctx->pc = 0x103C30u;
    // 0x103c30: 0x8d220000
    ctx->pc = 0x103c30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x103c34: 0x0
    ctx->pc = 0x103c34u;
    // NOP
    // 0x103c38: 0x0
    ctx->pc = 0x103c38u;
    // NOP
    // 0x103c3c: 0x5040fff8
    ctx->pc = 0x103C3Cu;
    {
        const bool branch_taken_0x103c3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x103c3c) {
            ctx->pc = 0x103C40u;
            SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967292));
            ctx->pc = 0x103C20u;
            goto label_103c20;
        }
    }
    ctx->pc = 0x103C44u;
    // 0x103c44: 0xae900010
    ctx->pc = 0x103c44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_103c48:
    // 0x103c48: 0x240102d
    ctx->pc = 0x103c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_103c4c:
    // 0x103c4c: 0xdfb00000
    ctx->pc = 0x103c4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103c50: 0xdfb10008
    ctx->pc = 0x103c50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x103c54: 0xdfb20010
    ctx->pc = 0x103c54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103c58: 0xdfb30018
    ctx->pc = 0x103c58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x103c5c: 0xdfb40020
    ctx->pc = 0x103c5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103c60: 0xdfb50028
    ctx->pc = 0x103c60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x103c64: 0xdfb60030
    ctx->pc = 0x103c64u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103c68: 0xdfbf0038
    ctx->pc = 0x103c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x103c6c: 0x3e00008
    ctx->pc = 0x103C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103C70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103AC0u: goto label_103ac0;
            case 0x103AD8u: goto label_103ad8;
            case 0x103B50u: goto label_103b50;
            case 0x103B54u: goto label_103b54;
            case 0x103B78u: goto label_103b78;
            case 0x103B7Cu: goto label_103b7c;
            case 0x103BA0u: goto label_103ba0;
            case 0x103C20u: goto label_103c20;
            case 0x103C24u: goto label_103c24;
            case 0x103C48u: goto label_103c48;
            case 0x103C4Cu: goto label_103c4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103C74u;
    // 0x103c74: 0x0
    ctx->pc = 0x103c74u;
    // NOP
}
