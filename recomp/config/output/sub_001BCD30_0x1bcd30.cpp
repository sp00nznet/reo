#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BCD30
// Address: 0x1bcd30 - 0x1bcf60
void sub_001BCD30_0x1bcd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bcd30u;

    // 0x1bcd30: 0x27bdffd0
    ctx->pc = 0x1bcd30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bcd34: 0x3c010032
    ctx->pc = 0x1bcd34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bcd38: 0xffbf0020
    ctx->pc = 0x1bcd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bcd3c: 0x7fb10010
    ctx->pc = 0x1bcd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bcd40: 0x7fb00000
    ctx->pc = 0x1bcd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bcd44: 0x94314300
    ctx->pc = 0x1bcd44u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17152)));
    // 0x1bcd48: 0x80802d
    ctx->pc = 0x1bcd48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd4c: 0xc06d584
    ctx->pc = 0x1BCD4Cu;
    SET_GPR_U32(ctx, 31, 0x1BCD54u);
    ctx->pc = 0x1BCD50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->pc = 0x1B5610u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5610_0x1b5610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCD54u; }
    }
    if (ctx->pc != 0x1BCD54u) { return; }
    ctx->pc = 0x1BCD54u;
    // 0x1bcd54: 0xc06d574
    ctx->pc = 0x1BCD54u;
    SET_GPR_U32(ctx, 31, 0x1BCD5Cu);
    ctx->pc = 0x1BCD58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x1B55D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B55D0_0x1b55d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCD5Cu; }
    }
    if (ctx->pc != 0x1BCD5Cu) { return; }
    ctx->pc = 0x1BCD5Cu;
    // 0x1bcd5c: 0xc06d590
    ctx->pc = 0x1BCD5Cu;
    SET_GPR_U32(ctx, 31, 0x1BCD64u);
    ctx->pc = 0x1BCD60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B5640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5640_0x1b5640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCD64u; }
    }
    if (ctx->pc != 0x1BCD64u) { return; }
    ctx->pc = 0x1BCD64u;
    // 0x1bcd64: 0x9203000a
    ctx->pc = 0x1bcd64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1bcd68: 0x2402005b
    ctx->pc = 0x1bcd68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 91));
    // 0x1bcd6c: 0x10620058
    ctx->pc = 0x1BCD6Cu;
    {
        const bool branch_taken_0x1bcd6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1BCD70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 90));
        if (branch_taken_0x1bcd6c) {
            ctx->pc = 0x1BCED0u;
            goto label_1bced0;
        }
    }
    ctx->pc = 0x1BCD74u;
    // 0x1bcd74: 0x10620039
    ctx->pc = 0x1BCD74u;
    {
        const bool branch_taken_0x1bcd74 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1BCD78u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1bcd74) {
            ctx->pc = 0x1BCE5Cu;
            goto label_1bce5c;
        }
    }
    ctx->pc = 0x1BCD7Cu;
    // 0x1bcd7c: 0x10640030
    ctx->pc = 0x1BCD7Cu;
    {
        const bool branch_taken_0x1bcd7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x1bcd7c) {
            ctx->pc = 0x1BCE40u;
            goto label_1bce40;
        }
    }
    ctx->pc = 0x1BCD84u;
    // 0x1bcd84: 0x10600003
    ctx->pc = 0x1BCD84u;
    {
        const bool branch_taken_0x1bcd84 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bcd84) {
            ctx->pc = 0x1BCD94u;
            goto label_1bcd94;
        }
    }
    ctx->pc = 0x1BCD8Cu;
    // 0x1bcd8c: 0x1000006c
    ctx->pc = 0x1BCD8Cu;
    {
        const bool branch_taken_0x1bcd8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BCD90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1bcd8c) {
            ctx->pc = 0x1BCF40u;
            goto label_1bcf40;
        }
    }
    ctx->pc = 0x1BCD94u;
label_1bcd94:
    // 0x1bcd94: 0xc06f5a4
    ctx->pc = 0x1BCD94u;
    SET_GPR_U32(ctx, 31, 0x1BCD9Cu);
    ctx->pc = 0x1BD690u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD690_0x1bd690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCD9Cu; }
    }
    if (ctx->pc != 0x1BCD9Cu) { return; }
    ctx->pc = 0x1BCD9Cu;
    // 0x1bcd9c: 0x2403fffa
    ctx->pc = 0x1bcd9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x1bcda0: 0x1043001f
    ctx->pc = 0x1BCDA0u;
    {
        const bool branch_taken_0x1bcda0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1BCDA4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x1bcda0) {
            ctx->pc = 0x1BCE20u;
            goto label_1bce20;
        }
    }
    ctx->pc = 0x1BCDA8u;
    // 0x1bcda8: 0x10430017
    ctx->pc = 0x1BCDA8u;
    {
        const bool branch_taken_0x1bcda8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1BCDACu;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1bcda8) {
            ctx->pc = 0x1BCE08u;
            goto label_1bce08;
        }
    }
    ctx->pc = 0x1BCDB0u;
    // 0x1bcdb0: 0x2403fffc
    ctx->pc = 0x1bcdb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1bcdb4: 0x10430010
    ctx->pc = 0x1BCDB4u;
    {
        const bool branch_taken_0x1bcdb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1BCDB8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1bcdb4) {
            ctx->pc = 0x1BCDF8u;
            goto label_1bcdf8;
        }
    }
    ctx->pc = 0x1BCDBCu;
    // 0x1bcdbc: 0x2403ffff
    ctx->pc = 0x1bcdbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bcdc0: 0x1043000a
    ctx->pc = 0x1BCDC0u;
    {
        const bool branch_taken_0x1bcdc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1BCDC4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1bcdc0) {
            ctx->pc = 0x1BCDECu;
            goto label_1bcdec;
        }
    }
    ctx->pc = 0x1BCDC8u;
    // 0x1bcdc8: 0x10400003
    ctx->pc = 0x1BCDC8u;
    {
        const bool branch_taken_0x1bcdc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bcdc8) {
            ctx->pc = 0x1BCDD8u;
            goto label_1bcdd8;
        }
    }
    ctx->pc = 0x1BCDD0u;
    // 0x1bcdd0: 0x1000005a
    ctx->pc = 0x1BCDD0u;
    {
        const bool branch_taken_0x1bcdd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bcdd0) {
            ctx->pc = 0x1BCF3Cu;
            goto label_1bcf3c;
        }
    }
    ctx->pc = 0x1BCDD8u;
label_1bcdd8:
    // 0x1bcdd8: 0x9202000a
    ctx->pc = 0x1bcdd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1bcddc: 0x24420001
    ctx->pc = 0x1bcddcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bcde0: 0xa202000a
    ctx->pc = 0x1bcde0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bcde4: 0x10000055
    ctx->pc = 0x1BCDE4u;
    {
        const bool branch_taken_0x1bcde4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BCDE8u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1bcde4) {
            ctx->pc = 0x1BCF3Cu;
            goto label_1bcf3c;
        }
    }
    ctx->pc = 0x1BCDECu;
label_1bcdec:
    // 0x1bcdec: 0x102d
    ctx->pc = 0x1bcdecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcdf0: 0x10000053
    ctx->pc = 0x1BCDF0u;
    {
        const bool branch_taken_0x1bcdf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BCDF4u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 17361), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1bcdf0) {
            ctx->pc = 0x1BCF40u;
            goto label_1bcf40;
        }
    }
    ctx->pc = 0x1BCDF8u;
label_1bcdf8:
    // 0x1bcdf8: 0x3c010032
    ctx->pc = 0x1bcdf8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bcdfc: 0x102d
    ctx->pc = 0x1bcdfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce00: 0x1000004f
    ctx->pc = 0x1BCE00u;
    {
        const bool branch_taken_0x1bce00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BCE04u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 17361), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1bce00) {
            ctx->pc = 0x1BCF40u;
            goto label_1bcf40;
        }
    }
    ctx->pc = 0x1BCE08u;
label_1bce08:
    // 0x1bce08: 0x2402005a
    ctx->pc = 0x1bce08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 90));
    // 0x1bce0c: 0xa02043d1
    ctx->pc = 0x1bce0cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17361), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bce10: 0xa202000a
    ctx->pc = 0x1bce10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bce14: 0x24020020
    ctx->pc = 0x1bce14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1bce18: 0x10000048
    ctx->pc = 0x1BCE18u;
    {
        const bool branch_taken_0x1bce18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BCE1Cu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1bce18) {
            ctx->pc = 0x1BCF3Cu;
            goto label_1bcf3c;
        }
    }
    ctx->pc = 0x1BCE20u;
label_1bce20:
    // 0x1bce20: 0x24020001
    ctx->pc = 0x1bce20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bce24: 0x3c010032
    ctx->pc = 0x1bce24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bce28: 0xa02243d1
    ctx->pc = 0x1bce28u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17361), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bce2c: 0x2403005b
    ctx->pc = 0x1bce2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 91));
    // 0x1bce30: 0x24020020
    ctx->pc = 0x1bce30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1bce34: 0xa203000a
    ctx->pc = 0x1bce34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bce38: 0x10000040
    ctx->pc = 0x1BCE38u;
    {
        const bool branch_taken_0x1bce38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BCE3Cu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1bce38) {
            ctx->pc = 0x1BCF3Cu;
            goto label_1bcf3c;
        }
    }
    ctx->pc = 0x1BCE40u;
label_1bce40:
    // 0x1bce40: 0xc06f8a0
    ctx->pc = 0x1BCE40u;
    SET_GPR_U32(ctx, 31, 0x1BCE48u);
    ctx->pc = 0x1BE280u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE280_0x1be280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE48u; }
    }
    if (ctx->pc != 0x1BCE48u) { return; }
    ctx->pc = 0x1BCE48u;
    // 0x1bce48: 0x24030002
    ctx->pc = 0x1bce48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bce4c: 0x3c010032
    ctx->pc = 0x1bce4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bce50: 0x102d
    ctx->pc = 0x1bce50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce54: 0x1000003a
    ctx->pc = 0x1BCE54u;
    {
        const bool branch_taken_0x1bce54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BCE58u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 17361), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1bce54) {
            ctx->pc = 0x1BCF40u;
            goto label_1bcf40;
        }
    }
    ctx->pc = 0x1BCE5Cu;
label_1bce5c:
    // 0x1bce5c: 0x9202000b
    ctx->pc = 0x1bce5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x1bce60: 0x10400004
    ctx->pc = 0x1BCE60u;
    {
        const bool branch_taken_0x1bce60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bce60) {
            ctx->pc = 0x1BCE74u;
            goto label_1bce74;
        }
    }
    ctx->pc = 0x1BCE68u;
    // 0x1bce68: 0x2442ffff
    ctx->pc = 0x1bce68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bce6c: 0x10000010
    ctx->pc = 0x1BCE6Cu;
    {
        const bool branch_taken_0x1bce6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BCE70u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1bce6c) {
            ctx->pc = 0x1BCEB0u;
            goto label_1bceb0;
        }
    }
    ctx->pc = 0x1BCE74u;
label_1bce74:
    // 0x1bce74: 0x3222ffff
    ctx->pc = 0x1bce74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 65535));
    // 0x1bce78: 0x3042fff0
    ctx->pc = 0x1bce78u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65520));
    // 0x1bce7c: 0x10400006
    ctx->pc = 0x1BCE7Cu;
    {
        const bool branch_taken_0x1bce7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BCE80u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1bce7c) {
            ctx->pc = 0x1BCE98u;
            goto label_1bce98;
        }
    }
    ctx->pc = 0x1BCE84u;
    // 0x1bce84: 0x202d
    ctx->pc = 0x1bce84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce88: 0xc06e1f8
    ctx->pc = 0x1BCE88u;
    SET_GPR_U32(ctx, 31, 0x1BCE90u);
    ctx->pc = 0x1BCE8Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B87E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B87E0_0x1b87e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCE90u; }
    }
    if (ctx->pc != 0x1BCE90u) { return; }
    ctx->pc = 0x1BCE90u;
    // 0x1bce90: 0x1000002b
    ctx->pc = 0x1BCE90u;
    {
        const bool branch_taken_0x1bce90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BCE94u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bce90) {
            ctx->pc = 0x1BCF40u;
            goto label_1bcf40;
        }
    }
    ctx->pc = 0x1BCE98u;
label_1bce98:
    // 0x1bce98: 0xc0707b8
    ctx->pc = 0x1BCE98u;
    SET_GPR_U32(ctx, 31, 0x1BCEA0u);
    ctx->pc = 0x1C1EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1EE0_0x1c1ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCEA0u; }
    }
    if (ctx->pc != 0x1BCEA0u) { return; }
    ctx->pc = 0x1BCEA0u;
    // 0x1bcea0: 0x40202d
    ctx->pc = 0x1bcea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcea4: 0x24050030
    ctx->pc = 0x1bcea4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
    // 0x1bcea8: 0xc070920
    ctx->pc = 0x1BCEA8u;
    SET_GPR_U32(ctx, 31, 0x1BCEB0u);
    ctx->pc = 0x1BCEACu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 392));
    ctx->pc = 0x1C2480u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2480_0x1c2480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCEB0u; }
    }
    if (ctx->pc != 0x1BCEB0u) { return; }
    ctx->pc = 0x1BCEB0u;
label_1bceb0:
    // 0x1bceb0: 0xc0707b8
    ctx->pc = 0x1BCEB0u;
    SET_GPR_U32(ctx, 31, 0x1BCEB8u);
    ctx->pc = 0x1BCEB4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x1C1EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1EE0_0x1c1ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCEB8u; }
    }
    if (ctx->pc != 0x1BCEB8u) { return; }
    ctx->pc = 0x1BCEB8u;
    // 0x1bceb8: 0x40202d
    ctx->pc = 0x1bceb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcebc: 0x24050030
    ctx->pc = 0x1bcebcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
    // 0x1bcec0: 0xc070920
    ctx->pc = 0x1BCEC0u;
    SET_GPR_U32(ctx, 31, 0x1BCEC8u);
    ctx->pc = 0x1BCEC4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 312));
    ctx->pc = 0x1C2480u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2480_0x1c2480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCEC8u; }
    }
    if (ctx->pc != 0x1BCEC8u) { return; }
    ctx->pc = 0x1BCEC8u;
    // 0x1bcec8: 0x1000001c
    ctx->pc = 0x1BCEC8u;
    {
        const bool branch_taken_0x1bcec8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bcec8) {
            ctx->pc = 0x1BCF3Cu;
            goto label_1bcf3c;
        }
    }
    ctx->pc = 0x1BCED0u;
label_1bced0:
    // 0x1bced0: 0x9202000b
    ctx->pc = 0x1bced0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x1bced4: 0x10400004
    ctx->pc = 0x1BCED4u;
    {
        const bool branch_taken_0x1bced4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bced4) {
            ctx->pc = 0x1BCEE8u;
            goto label_1bcee8;
        }
    }
    ctx->pc = 0x1BCEDCu;
    // 0x1bcedc: 0x2442ffff
    ctx->pc = 0x1bcedcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bcee0: 0x10000010
    ctx->pc = 0x1BCEE0u;
    {
        const bool branch_taken_0x1bcee0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BCEE4u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1bcee0) {
            ctx->pc = 0x1BCF24u;
            goto label_1bcf24;
        }
    }
    ctx->pc = 0x1BCEE8u;
label_1bcee8:
    // 0x1bcee8: 0x3222ffff
    ctx->pc = 0x1bcee8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 65535));
    // 0x1bceec: 0x3042fff0
    ctx->pc = 0x1bceecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65520));
    // 0x1bcef0: 0x10400006
    ctx->pc = 0x1BCEF0u;
    {
        const bool branch_taken_0x1bcef0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BCEF4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1bcef0) {
            ctx->pc = 0x1BCF0Cu;
            goto label_1bcf0c;
        }
    }
    ctx->pc = 0x1BCEF8u;
    // 0x1bcef8: 0x202d
    ctx->pc = 0x1bcef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcefc: 0xc06e1f8
    ctx->pc = 0x1BCEFCu;
    SET_GPR_U32(ctx, 31, 0x1BCF04u);
    ctx->pc = 0x1BCF00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B87E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B87E0_0x1b87e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF04u; }
    }
    if (ctx->pc != 0x1BCF04u) { return; }
    ctx->pc = 0x1BCF04u;
    // 0x1bcf04: 0x1000000e
    ctx->pc = 0x1BCF04u;
    {
        const bool branch_taken_0x1bcf04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BCF08u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bcf04) {
            ctx->pc = 0x1BCF40u;
            goto label_1bcf40;
        }
    }
    ctx->pc = 0x1BCF0Cu;
label_1bcf0c:
    // 0x1bcf0c: 0xc0707b8
    ctx->pc = 0x1BCF0Cu;
    SET_GPR_U32(ctx, 31, 0x1BCF14u);
    ctx->pc = 0x1C1EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1EE0_0x1c1ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF14u; }
    }
    if (ctx->pc != 0x1BCF14u) { return; }
    ctx->pc = 0x1BCF14u;
    // 0x1bcf14: 0x40202d
    ctx->pc = 0x1bcf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcf18: 0x24050030
    ctx->pc = 0x1bcf18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
    // 0x1bcf1c: 0xc070920
    ctx->pc = 0x1BCF1Cu;
    SET_GPR_U32(ctx, 31, 0x1BCF24u);
    ctx->pc = 0x1BCF20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 392));
    ctx->pc = 0x1C2480u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2480_0x1c2480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF24u; }
    }
    if (ctx->pc != 0x1BCF24u) { return; }
    ctx->pc = 0x1BCF24u;
label_1bcf24:
    // 0x1bcf24: 0xc0707b8
    ctx->pc = 0x1BCF24u;
    SET_GPR_U32(ctx, 31, 0x1BCF2Cu);
    ctx->pc = 0x1BCF28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x1C1EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1EE0_0x1c1ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF2Cu; }
    }
    if (ctx->pc != 0x1BCF2Cu) { return; }
    ctx->pc = 0x1BCF2Cu;
    // 0x1bcf2c: 0x40202d
    ctx->pc = 0x1bcf2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcf30: 0x24050030
    ctx->pc = 0x1bcf30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
    // 0x1bcf34: 0xc070920
    ctx->pc = 0x1BCF34u;
    SET_GPR_U32(ctx, 31, 0x1BCF3Cu);
    ctx->pc = 0x1BCF38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 312));
    ctx->pc = 0x1C2480u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2480_0x1c2480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCF3Cu; }
    }
    if (ctx->pc != 0x1BCF3Cu) { return; }
    ctx->pc = 0x1BCF3Cu;
label_1bcf3c:
    // 0x1bcf3c: 0x24020001
    ctx->pc = 0x1bcf3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1bcf40:
    // 0x1bcf40: 0xdfbf0020
    ctx->pc = 0x1bcf40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bcf44: 0x7bb10010
    ctx->pc = 0x1bcf44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcf48: 0x7bb00000
    ctx->pc = 0x1bcf48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bcf4c: 0x3e00008
    ctx->pc = 0x1BCF4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCF50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BCD94u: goto label_1bcd94;
            case 0x1BCDD8u: goto label_1bcdd8;
            case 0x1BCDECu: goto label_1bcdec;
            case 0x1BCDF8u: goto label_1bcdf8;
            case 0x1BCE08u: goto label_1bce08;
            case 0x1BCE20u: goto label_1bce20;
            case 0x1BCE40u: goto label_1bce40;
            case 0x1BCE5Cu: goto label_1bce5c;
            case 0x1BCE74u: goto label_1bce74;
            case 0x1BCE98u: goto label_1bce98;
            case 0x1BCEB0u: goto label_1bceb0;
            case 0x1BCED0u: goto label_1bced0;
            case 0x1BCEE8u: goto label_1bcee8;
            case 0x1BCF0Cu: goto label_1bcf0c;
            case 0x1BCF24u: goto label_1bcf24;
            case 0x1BCF3Cu: goto label_1bcf3c;
            case 0x1BCF40u: goto label_1bcf40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BCF54u;
    // 0x1bcf54: 0x0
    ctx->pc = 0x1bcf54u;
    // NOP
    // 0x1bcf58: 0x0
    ctx->pc = 0x1bcf58u;
    // NOP
    // 0x1bcf5c: 0x0
    ctx->pc = 0x1bcf5cu;
    // NOP
}
