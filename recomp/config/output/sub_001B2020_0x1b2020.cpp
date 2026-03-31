#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B2020
// Address: 0x1b2020 - 0x1b20e0
void sub_001B2020_0x1b2020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b2020u;

    // 0x1b2020: 0x27bdffd0
    ctx->pc = 0x1b2020u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b2024: 0x3c01004c
    ctx->pc = 0x1b2024u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b2028: 0xffbf0020
    ctx->pc = 0x1b2028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b202c: 0x7fb10010
    ctx->pc = 0x1b202cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b2030: 0x7fb00000
    ctx->pc = 0x1b2030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b2034: 0x8023adf8
    ctx->pc = 0x1b2034u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946296)));
    // 0x1b2038: 0x10600023
    ctx->pc = 0x1B2038u;
    {
        const bool branch_taken_0x1b2038 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B203Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
        if (branch_taken_0x1b2038) {
            ctx->pc = 0x1B20C8u;
            goto label_1b20c8;
        }
    }
    ctx->pc = 0x1B2040u;
    // 0x1b2040: 0x8c30edd4
    ctx->pc = 0x1b2040u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 4294962644)));
    // 0x1b2044: 0x1200000b
    ctx->pc = 0x1B2044u;
    {
        const bool branch_taken_0x1b2044 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b2044) {
            ctx->pc = 0x1B2074u;
            goto label_1b2074;
        }
    }
    ctx->pc = 0x1B204Cu;
    // 0x1b204c: 0x882d
    ctx->pc = 0x1b204cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2050:
    // 0x1b2050: 0x96021170
    ctx->pc = 0x1b2050u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4464)));
    // 0x1b2054: 0x10400003
    ctx->pc = 0x1B2054u;
    {
        const bool branch_taken_0x1b2054 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B2058u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x1b2054) {
            ctx->pc = 0x1B2064u;
            goto label_1b2064;
        }
    }
    ctx->pc = 0x1B205Cu;
    // 0x1b205c: 0xc064968
    ctx->pc = 0x1B205Cu;
    SET_GPR_U32(ctx, 31, 0x1B2064u);
    ctx->pc = 0x1925A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001925A0_0x1925a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2064u; }
    }
    if (ctx->pc != 0x1B2064u) { return; }
    ctx->pc = 0x1B2064u;
label_1b2064:
    // 0x1b2064: 0x26310001
    ctx->pc = 0x1b2064u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b2068: 0x2a220010
    ctx->pc = 0x1b2068u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 16));
    // 0x1b206c: 0x1440fff8
    ctx->pc = 0x1B206Cu;
    {
        const bool branch_taken_0x1b206c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B2070u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4512));
        if (branch_taken_0x1b206c) {
            ctx->pc = 0x1B2050u;
            goto label_1b2050;
        }
    }
    ctx->pc = 0x1B2074u;
label_1b2074:
    // 0x1b2074: 0x3c04004c
    ctx->pc = 0x1b2074u;
    SET_GPR_U32(ctx, 4, ((uint32_t)76 << 16));
    // 0x1b2078: 0xc06c6ec
    ctx->pc = 0x1B2078u;
    SET_GPR_U32(ctx, 31, 0x1B2080u);
    ctx->pc = 0x1B207Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952980));
    ctx->pc = 0x1B1BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1BB0_0x1b1bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2080u; }
    }
    if (ctx->pc != 0x1B2080u) { return; }
    ctx->pc = 0x1B2080u;
    // 0x1b2080: 0x3c01004c
    ctx->pc = 0x1b2080u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b2084: 0x3c04004c
    ctx->pc = 0x1b2084u;
    SET_GPR_U32(ctx, 4, ((uint32_t)76 << 16));
    // 0x1b2088: 0xa020c810
    ctx->pc = 0x1b2088u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294952976), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b208c: 0x2484bb84
    ctx->pc = 0x1b208cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949764));
    // 0x1b2090: 0x3c01004c
    ctx->pc = 0x1b2090u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b2094: 0xc06c6ec
    ctx->pc = 0x1B2094u;
    SET_GPR_U32(ctx, 31, 0x1B209Cu);
    ctx->pc = 0x1B2098u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294952977), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1B1BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1BB0_0x1b1bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B209Cu; }
    }
    if (ctx->pc != 0x1B209Cu) { return; }
    ctx->pc = 0x1B209Cu;
    // 0x1b209c: 0x3c01004c
    ctx->pc = 0x1b209cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b20a0: 0x3c04004c
    ctx->pc = 0x1b20a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)76 << 16));
    // 0x1b20a4: 0xa020bb80
    ctx->pc = 0x1b20a4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294949760), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b20a8: 0x2484aef4
    ctx->pc = 0x1b20a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946548));
    // 0x1b20ac: 0x3c01004c
    ctx->pc = 0x1b20acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b20b0: 0xc06c6ec
    ctx->pc = 0x1B20B0u;
    SET_GPR_U32(ctx, 31, 0x1B20B8u);
    ctx->pc = 0x1B20B4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294949761), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1B1BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1BB0_0x1b1bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B20B8u; }
    }
    if (ctx->pc != 0x1B20B8u) { return; }
    ctx->pc = 0x1B20B8u;
    // 0x1b20b8: 0x3c01004c
    ctx->pc = 0x1b20b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b20bc: 0xa020aef0
    ctx->pc = 0x1b20bcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b20c0: 0x3c01004c
    ctx->pc = 0x1b20c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1b20c4: 0xa020aef1
    ctx->pc = 0x1b20c4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946545), (uint8_t)GPR_U32(ctx, 0));
label_1b20c8:
    // 0x1b20c8: 0xdfbf0020
    ctx->pc = 0x1b20c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b20cc: 0x7bb10010
    ctx->pc = 0x1b20ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b20d0: 0x7bb00000
    ctx->pc = 0x1b20d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b20d4: 0x3e00008
    ctx->pc = 0x1B20D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B20D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2050u: goto label_1b2050;
            case 0x1B2064u: goto label_1b2064;
            case 0x1B2074u: goto label_1b2074;
            case 0x1B20C8u: goto label_1b20c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B20DCu;
    // 0x1b20dc: 0x0
    ctx->pc = 0x1b20dcu;
    // NOP
}
