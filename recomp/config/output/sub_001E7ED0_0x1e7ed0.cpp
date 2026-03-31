#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001E7ED0
// Address: 0x1e7ed0 - 0x1e8134
void sub_001E7ED0_0x1e7ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1e7ed0u;

    // 0x1e7ed0: 0x27bdff70
    ctx->pc = 0x1e7ed0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e7ed4: 0xffb00070
    ctx->pc = 0x1e7ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1e7ed8: 0xffbe0078
    ctx->pc = 0x1e7ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 30));
    // 0x1e7edc: 0xffbf0080
    ctx->pc = 0x1e7edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1e7ee0: 0x3a0f02d
    ctx->pc = 0x1e7ee0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ee4: 0xafc40000
    ctx->pc = 0x1e7ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1e7ee8: 0xafc50004
    ctx->pc = 0x1e7ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1e7eec: 0xc0413bc
    ctx->pc = 0x1E7EECu;
    SET_GPR_U32(ctx, 31, 0x1E7EF4u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7EF4u; }
    }
    if (ctx->pc != 0x1E7EF4u) { return; }
    ctx->pc = 0x1E7EF4u;
    // 0x1e7ef4: 0xac400000
    ctx->pc = 0x1e7ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e7ef8: 0x27c20050
    ctx->pc = 0x1e7ef8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 80));
    // 0x1e7efc: 0x40202d
    ctx->pc = 0x1e7efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7f00: 0x282d
    ctx->pc = 0x1e7f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7f04: 0xc07a80b
    ctx->pc = 0x1E7F04u;
    SET_GPR_U32(ctx, 31, 0x1E7F0Cu);
    ctx->pc = 0x1EA02Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA02C_0x1ea02c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F0Cu; }
    }
    if (ctx->pc != 0x1E7F0Cu) { return; }
    ctx->pc = 0x1E7F0Cu;
    // 0x1e7f0c: 0x8fc20000
    ctx->pc = 0x1e7f0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e7f10: 0x8c420000
    ctx->pc = 0x1e7f10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e7f14: 0xffc20040
    ctx->pc = 0x1e7f14u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 64), GPR_U64(ctx, 2));
    // 0x1e7f18: 0x8fc20000
    ctx->pc = 0x1e7f18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e7f1c: 0x8c430004
    ctx->pc = 0x1e7f1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e7f20: 0x240203e8
    ctx->pc = 0x1e7f20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1e7f24: 0x62001a
    ctx->pc = 0x1e7f24u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1e7f28: 0x1812
    ctx->pc = 0x1e7f28u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1e7f2c: 0x50400001
    ctx->pc = 0x1E7F2Cu;
    {
        const bool branch_taken_0x1e7f2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7f2c) {
            ctx->pc = 0x1E7F30u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1E7F34u;
            goto label_1e7f34;
        }
    }
    ctx->pc = 0x1E7F34u;
label_1e7f34:
    // 0x1e7f34: 0x60102d
    ctx->pc = 0x1e7f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7f38: 0xffc20048
    ctx->pc = 0x1e7f38u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 72), GPR_U64(ctx, 2));
    // 0x1e7f3c: 0xafc00018
    ctx->pc = 0x1e7f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 0));
    // 0x1e7f40: 0x24020001
    ctx->pc = 0x1e7f40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7f44: 0xafc20014
    ctx->pc = 0x1e7f44u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x1e7f48: 0xafc00024
    ctx->pc = 0x1e7f48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 0));
    // 0x1e7f4c: 0x27c20010
    ctx->pc = 0x1e7f4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 16));
    // 0x1e7f50: 0x40202d
    ctx->pc = 0x1e7f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7f54: 0xc045188
    ctx->pc = 0x1E7F54u;
    SET_GPR_U32(ctx, 31, 0x1E7F5Cu);
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F5Cu; }
    }
    if (ctx->pc != 0x1E7F5Cu) { return; }
    ctx->pc = 0x1E7F5Cu;
    // 0x1e7f5c: 0xaf828090
    ctx->pc = 0x1e7f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934672), GPR_U32(ctx, 2));
    // 0x1e7f60: 0x8f828090
    ctx->pc = 0x1e7f60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934672)));
    // 0x1e7f64: 0x4410009
    ctx->pc = 0x1E7F64u;
    {
        const bool branch_taken_0x1e7f64 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e7f64) {
            ctx->pc = 0x1E7F8Cu;
            goto label_1e7f8c;
        }
    }
    ctx->pc = 0x1E7F6Cu;
    // 0x1e7f6c: 0xc0413bc
    ctx->pc = 0x1E7F6Cu;
    SET_GPR_U32(ctx, 31, 0x1E7F74u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F74u; }
    }
    if (ctx->pc != 0x1E7F74u) { return; }
    ctx->pc = 0x1E7F74u;
    // 0x1e7f74: 0x40182d
    ctx->pc = 0x1e7f74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7f78: 0x2402000e
    ctx->pc = 0x1e7f78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e7f7c: 0xac620000
    ctx->pc = 0x1e7f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e7f80: 0x2402ffff
    ctx->pc = 0x1e7f80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e7f84: 0x10000064
    ctx->pc = 0x1E7F84u;
    {
        const bool branch_taken_0x1e7f84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7f84) {
            ctx->pc = 0x1E8118u;
            goto label_1e8118;
        }
    }
    ctx->pc = 0x1E7F8Cu;
label_1e7f8c:
    // 0x1e7f8c: 0xdfc20040
    ctx->pc = 0x1e7f8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x1e7f90: 0x440005d
    ctx->pc = 0x1E7F90u;
    {
        const bool branch_taken_0x1e7f90 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e7f90) {
            ctx->pc = 0x1E8108u;
            goto label_1e8108;
        }
    }
    ctx->pc = 0x1E7F98u;
    // 0x1e7f98: 0xdfc20048
    ctx->pc = 0x1e7f98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 72)));
    // 0x1e7f9c: 0x4410003
    ctx->pc = 0x1E7F9Cu;
    {
        const bool branch_taken_0x1e7f9c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e7f9c) {
            ctx->pc = 0x1E7FACu;
            goto label_1e7fac;
        }
    }
    ctx->pc = 0x1E7FA4u;
    // 0x1e7fa4: 0x10000058
    ctx->pc = 0x1E7FA4u;
    {
        const bool branch_taken_0x1e7fa4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7fa4) {
            ctx->pc = 0x1E8108u;
            goto label_1e8108;
        }
    }
    ctx->pc = 0x1E7FACu;
label_1e7fac:
    // 0x1e7fac: 0xdfc20040
    ctx->pc = 0x1e7facu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x1e7fb0: 0x28420004
    ctx->pc = 0x1e7fb0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x1e7fb4: 0x14400005
    ctx->pc = 0x1E7FB4u;
    {
        const bool branch_taken_0x1e7fb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e7fb4) {
            ctx->pc = 0x1E7FCCu;
            goto label_1e7fcc;
        }
    }
    ctx->pc = 0x1E7FBCu;
    // 0x1e7fbc: 0x2402b8ec
    ctx->pc = 0x1e7fbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294949100));
    // 0x1e7fc0: 0xa7c20008
    ctx->pc = 0x1e7fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e7fc4: 0x10000012
    ctx->pc = 0x1E7FC4u;
    {
        const bool branch_taken_0x1e7fc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7fc4) {
            ctx->pc = 0x1E8010u;
            goto label_1e8010;
        }
    }
    ctx->pc = 0x1E7FCCu;
label_1e7fcc:
    // 0x1e7fcc: 0xdfc40040
    ctx->pc = 0x1e7fccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x1e7fd0: 0x80102d
    ctx->pc = 0x1e7fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7fd4: 0x21178
    ctx->pc = 0x1e7fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x1e7fd8: 0x44102d
    ctx->pc = 0x1e7fd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1e7fdc: 0x218f8
    ctx->pc = 0x1e7fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 3);
    // 0x1e7fe0: 0x64182f
    ctx->pc = 0x1e7fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
    // 0x1e7fe4: 0x31138
    ctx->pc = 0x1e7fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 4);
    // 0x1e7fe8: 0x43102f
    ctx->pc = 0x1e7fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x1e7fec: 0x280b8
    ctx->pc = 0x1e7fecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << 2);
    // 0x1e7ff0: 0xdfc20048
    ctx->pc = 0x1e7ff0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 72)));
    // 0x1e7ff4: 0x40202d
    ctx->pc = 0x1e7ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ff8: 0x2405003f
    ctx->pc = 0x1e7ff8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 63));
    // 0x1e7ffc: 0xc043ec6
    ctx->pc = 0x1E7FFCu;
    SET_GPR_U32(ctx, 31, 0x1E8004u);
    ctx->pc = 0x10FB18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FB18_0x10fb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8004u; }
    }
    if (ctx->pc != 0x1E8004u) { return; }
    ctx->pc = 0x1E8004u;
    // 0x1e8004: 0x202102d
    ctx->pc = 0x1e8004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1e8008: 0x3042ffff
    ctx->pc = 0x1e8008u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1e800c: 0xa7c20008
    ctx->pc = 0x1e800cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 2));
label_1e8010:
    // 0x1e8010: 0x97c20008
    ctx->pc = 0x1e8010u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e8014: 0x2c420002
    ctx->pc = 0x1e8014u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x1e8018: 0x14400017
    ctx->pc = 0x1E8018u;
    {
        const bool branch_taken_0x1e8018 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e8018) {
            ctx->pc = 0x1E8078u;
            goto label_1e8078;
        }
    }
    ctx->pc = 0x1E8020u;
    // 0x1e8020: 0x97c20008
    ctx->pc = 0x1e8020u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e8024: 0x40202d
    ctx->pc = 0x1e8024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8028: 0x3c05001e
    ctx->pc = 0x1e8028u;
    SET_GPR_U32(ctx, 5, ((uint32_t)30 << 16));
    // 0x1e802c: 0x24a57e88
    ctx->pc = 0x1e802cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32392));
    // 0x1e8030: 0x27868090
    ctx->pc = 0x1e8030u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 28), 4294934672));
    // 0x1e8034: 0xc0450e8
    ctx->pc = 0x1E8034u;
    SET_GPR_U32(ctx, 31, 0x1E803Cu);
    ctx->pc = 0x1143A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001143A0_0x1143a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E803Cu; }
    }
    if (ctx->pc != 0x1E803Cu) { return; }
    ctx->pc = 0x1E803Cu;
    // 0x1e803c: 0xafc20030
    ctx->pc = 0x1e803cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
    // 0x1e8040: 0x8fc20030
    ctx->pc = 0x1e8040u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x1e8044: 0x4410009
    ctx->pc = 0x1E8044u;
    {
        const bool branch_taken_0x1e8044 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e8044) {
            ctx->pc = 0x1E806Cu;
            goto label_1e806c;
        }
    }
    ctx->pc = 0x1E804Cu;
    // 0x1e804c: 0xc0413bc
    ctx->pc = 0x1E804Cu;
    SET_GPR_U32(ctx, 31, 0x1E8054u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8054u; }
    }
    if (ctx->pc != 0x1E8054u) { return; }
    ctx->pc = 0x1E8054u;
    // 0x1e8054: 0x40182d
    ctx->pc = 0x1e8054u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8058: 0x2402000e
    ctx->pc = 0x1e8058u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e805c: 0xac620000
    ctx->pc = 0x1e805cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e8060: 0x2402ffff
    ctx->pc = 0x1e8060u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8064: 0x1000002c
    ctx->pc = 0x1E8064u;
    {
        const bool branch_taken_0x1e8064 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8064) {
            ctx->pc = 0x1E8118u;
            goto label_1e8118;
        }
    }
    ctx->pc = 0x1E806Cu;
label_1e806c:
    // 0x1e806c: 0x8f848090
    ctx->pc = 0x1e806cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934672)));
    // 0x1e8070: 0xc045198
    ctx->pc = 0x1E8070u;
    SET_GPR_U32(ctx, 31, 0x1E8078u);
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8078u; }
    }
    if (ctx->pc != 0x1E8078u) { return; }
    ctx->pc = 0x1E8078u;
label_1e8078:
    // 0x1e8078: 0x27c20060
    ctx->pc = 0x1e8078u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 96));
    // 0x1e807c: 0x40202d
    ctx->pc = 0x1e807cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8080: 0x282d
    ctx->pc = 0x1e8080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8084: 0xc07a80b
    ctx->pc = 0x1E8084u;
    SET_GPR_U32(ctx, 31, 0x1E808Cu);
    ctx->pc = 0x1EA02Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA02C_0x1ea02c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E808Cu; }
    }
    if (ctx->pc != 0x1E808Cu) { return; }
    ctx->pc = 0x1E808Cu;
    // 0x1e808c: 0xdfc30060
    ctx->pc = 0x1e808cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x1e8090: 0xdfc20050
    ctx->pc = 0x1e8090u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 80)));
    // 0x1e8094: 0x62182f
    ctx->pc = 0x1e8094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x1e8098: 0xdfc20040
    ctx->pc = 0x1e8098u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x1e809c: 0x43102f
    ctx->pc = 0x1e809cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x1e80a0: 0xffc20040
    ctx->pc = 0x1e80a0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 64), GPR_U64(ctx, 2));
    // 0x1e80a4: 0xdfc30068
    ctx->pc = 0x1e80a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 30), 104)));
    // 0x1e80a8: 0xdfc20058
    ctx->pc = 0x1e80a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 88)));
    // 0x1e80ac: 0x62182f
    ctx->pc = 0x1e80acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x1e80b0: 0xdfc20048
    ctx->pc = 0x1e80b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 72)));
    // 0x1e80b4: 0x43102f
    ctx->pc = 0x1e80b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x1e80b8: 0xffc20048
    ctx->pc = 0x1e80b8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 72), GPR_U64(ctx, 2));
label_1e80bc:
    // 0x1e80bc: 0xdfc20048
    ctx->pc = 0x1e80bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 72)));
    // 0x1e80c0: 0x4400007
    ctx->pc = 0x1E80C0u;
    {
        const bool branch_taken_0x1e80c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e80c0) {
            ctx->pc = 0x1E80E0u;
            goto label_1e80e0;
        }
    }
    ctx->pc = 0x1E80C8u;
    // 0x1e80c8: 0xdfc20060
    ctx->pc = 0x1e80c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x1e80cc: 0xffc20050
    ctx->pc = 0x1e80ccu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 80), GPR_U64(ctx, 2));
    // 0x1e80d0: 0xdfc20068
    ctx->pc = 0x1e80d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 104)));
    // 0x1e80d4: 0xffc20058
    ctx->pc = 0x1e80d4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 88), GPR_U64(ctx, 2));
    // 0x1e80d8: 0x1000ffac
    ctx->pc = 0x1E80D8u;
    {
        const bool branch_taken_0x1e80d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e80d8) {
            ctx->pc = 0x1E7F8Cu;
            goto label_1e7f8c;
        }
    }
    ctx->pc = 0x1E80E0u;
label_1e80e0:
    // 0x1e80e0: 0xdfc30048
    ctx->pc = 0x1e80e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 30), 72)));
    // 0x1e80e4: 0x3c02000f
    ctx->pc = 0x1e80e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
    // 0x1e80e8: 0x34424240
    ctx->pc = 0x1e80e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16960));
    // 0x1e80ec: 0x62102d
    ctx->pc = 0x1e80ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1e80f0: 0xffc20048
    ctx->pc = 0x1e80f0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 72), GPR_U64(ctx, 2));
    // 0x1e80f4: 0xdfc20040
    ctx->pc = 0x1e80f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x1e80f8: 0x6442ffff
    ctx->pc = 0x1e80f8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)4294967295);
    // 0x1e80fc: 0xffc20040
    ctx->pc = 0x1e80fcu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 64), GPR_U64(ctx, 2));
    // 0x1e8100: 0x1000ffee
    ctx->pc = 0x1E8100u;
    {
        const bool branch_taken_0x1e8100 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8100) {
            ctx->pc = 0x1E80BCu;
            goto label_1e80bc;
        }
    }
    ctx->pc = 0x1E8108u;
label_1e8108:
    // 0x1e8108: 0x8f848090
    ctx->pc = 0x1e8108u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934672)));
    // 0x1e810c: 0xc04518c
    ctx->pc = 0x1E810Cu;
    SET_GPR_U32(ctx, 31, 0x1E8114u);
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8114u; }
    }
    if (ctx->pc != 0x1E8114u) { return; }
    ctx->pc = 0x1E8114u;
    // 0x1e8114: 0x102d
    ctx->pc = 0x1e8114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8118:
    // 0x1e8118: 0x3c0e82d
    ctx->pc = 0x1e8118u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e811c: 0xdfb00070
    ctx->pc = 0x1e811cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e8120: 0xdfbe0078
    ctx->pc = 0x1e8120u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1e8124: 0xdfbf0080
    ctx->pc = 0x1e8124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e8128: 0x27bd0090
    ctx->pc = 0x1e8128u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e812c: 0x3e00008
    ctx->pc = 0x1E812Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7F34u: goto label_1e7f34;
            case 0x1E7F8Cu: goto label_1e7f8c;
            case 0x1E7FACu: goto label_1e7fac;
            case 0x1E7FCCu: goto label_1e7fcc;
            case 0x1E8010u: goto label_1e8010;
            case 0x1E806Cu: goto label_1e806c;
            case 0x1E8078u: goto label_1e8078;
            case 0x1E80BCu: goto label_1e80bc;
            case 0x1E80E0u: goto label_1e80e0;
            case 0x1E8108u: goto label_1e8108;
            case 0x1E8118u: goto label_1e8118;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E8134u;
}
