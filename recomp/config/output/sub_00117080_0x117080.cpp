#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00117080
// Address: 0x117080 - 0x117220
void sub_00117080_0x117080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x117080u;

    // 0x117080: 0x27bdffc0
    ctx->pc = 0x117080u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x117084: 0xffbf0030
    ctx->pc = 0x117084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x117088: 0xffb20020
    ctx->pc = 0x117088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11708c: 0xffb10010
    ctx->pc = 0x11708cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117090: 0xc047598
    ctx->pc = 0x117090u;
    SET_GPR_U32(ctx, 31, 0x117098u);
    ctx->pc = 0x117094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117098u; }
    }
    if (ctx->pc != 0x117098u) { return; }
    ctx->pc = 0x117098u;
    // 0x117098: 0x3c030021
    ctx->pc = 0x117098u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x11709c: 0x8c629d50
    ctx->pc = 0x11709cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294942032)));
    // 0x1170a0: 0x10400007
    ctx->pc = 0x1170A0u;
    {
        const bool branch_taken_0x1170a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1170A4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1170a0) {
            ctx->pc = 0x1170C0u;
            goto label_1170c0;
        }
    }
    ctx->pc = 0x1170A8u;
    // 0x1170a8: 0xdfbf0030
    ctx->pc = 0x1170a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1170ac: 0xdfb20020
    ctx->pc = 0x1170acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1170b0: 0xdfb10010
    ctx->pc = 0x1170b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1170b4: 0xdfb00000
    ctx->pc = 0x1170b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1170b8: 0x80475ae
    ctx->pc = 0x1170B8u;
    ctx->pc = 0x1170BCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x11D6B8u;
    sub_0011D6B8_0x11d6b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1170C0u;
label_1170c0:
    // 0x1170c0: 0xc0475ae
    ctx->pc = 0x1170C0u;
    SET_GPR_U32(ctx, 31, 0x1170C8u);
    ctx->pc = 0x1170C4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942032), GPR_U32(ctx, 17));
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1170C8u; }
    }
    if (ctx->pc != 0x1170C8u) { return; }
    ctx->pc = 0x1170C8u;
    // 0x1170c8: 0xc045a48
    ctx->pc = 0x1170C8u;
    SET_GPR_U32(ctx, 31, 0x1170D0u);
    ctx->pc = 0x116920u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116920_0x116920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1170D0u; }
    }
    if (ctx->pc != 0x1170D0u) { return; }
    ctx->pc = 0x1170D0u;
    // 0x1170d0: 0xc047598
    ctx->pc = 0x1170D0u;
    SET_GPR_U32(ctx, 31, 0x1170D8u);
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1170D8u; }
    }
    if (ctx->pc != 0x1170D8u) { return; }
    ctx->pc = 0x1170D8u;
    // 0x1170d8: 0x3c030026
    ctx->pc = 0x1170d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x1170dc: 0x3c080026
    ctx->pc = 0x1170dcu;
    SET_GPR_U32(ctx, 8, ((uint32_t)38 << 16));
    // 0x1170e0: 0x2472b1c0
    ctx->pc = 0x1170e0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 4294947264));
    // 0x1170e4: 0x3c060026
    ctx->pc = 0x1170e4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)38 << 16));
    // 0x1170e8: 0x3c070026
    ctx->pc = 0x1170e8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)38 << 16));
    // 0x1170ec: 0x2510c9c0
    ctx->pc = 0x1170ecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 8), 4294953408));
    // 0x1170f0: 0x24030020
    ctx->pc = 0x1170f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1170f4: 0x3c022000
    ctx->pc = 0x1170f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x1170f8: 0x24c6b9c0
    ctx->pc = 0x1170f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294949312));
    // 0x1170fc: 0x24e7c1c0
    ctx->pc = 0x1170fcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294951360));
    // 0x117100: 0xc23025
    ctx->pc = 0x117100u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x117104: 0xe23825
    ctx->pc = 0x117104u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x117108: 0xae030020
    ctx->pc = 0x117108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x11710c: 0x2421025
    ctx->pc = 0x11710cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x117110: 0xad11c9c0
    ctx->pc = 0x117110u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294953408), GPR_U32(ctx, 17));
    // 0x117114: 0x3c050011
    ctx->pc = 0x117114u;
    SET_GPR_U32(ctx, 5, ((uint32_t)17 << 16));
    // 0x117118: 0xae060014
    ctx->pc = 0x117118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
    // 0x11711c: 0x3c048000
    ctx->pc = 0x11711cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x117120: 0xae020004
    ctx->pc = 0x117120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x117124: 0x24a57380
    ctx->pc = 0x117124u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29568));
    // 0x117128: 0xae07001c
    ctx->pc = 0x117128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
    // 0x11712c: 0x34840008
    ctx->pc = 0x11712cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 8));
    // 0x117130: 0x200302d
    ctx->pc = 0x117130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117134: 0xae030008
    ctx->pc = 0x117134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x117138: 0xae00000c
    ctx->pc = 0x117138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x11713c: 0xae000010
    ctx->pc = 0x11713cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x117140: 0xae030018
    ctx->pc = 0x117140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x117144: 0xc045b02
    ctx->pc = 0x117144u;
    SET_GPR_U32(ctx, 31, 0x11714Cu);
    ctx->pc = 0x117148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x116C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116C08_0x116c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11714Cu; }
    }
    if (ctx->pc != 0x11714Cu) { return; }
    ctx->pc = 0x11714Cu;
    // 0x11714c: 0x3c050011
    ctx->pc = 0x11714cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)17 << 16));
    // 0x117150: 0x3c048000
    ctx->pc = 0x117150u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x117154: 0x24a57748
    ctx->pc = 0x117154u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30536));
    // 0x117158: 0x34840009
    ctx->pc = 0x117158u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 9));
    // 0x11715c: 0xc045b02
    ctx->pc = 0x11715Cu;
    SET_GPR_U32(ctx, 31, 0x117164u);
    ctx->pc = 0x117160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116C08_0x116c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117164u; }
    }
    if (ctx->pc != 0x117164u) { return; }
    ctx->pc = 0x117164u;
    // 0x117164: 0x3c050011
    ctx->pc = 0x117164u;
    SET_GPR_U32(ctx, 5, ((uint32_t)17 << 16));
    // 0x117168: 0x3c048000
    ctx->pc = 0x117168u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x11716c: 0x24a57958
    ctx->pc = 0x11716cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31064));
    // 0x117170: 0x3484000a
    ctx->pc = 0x117170u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 10));
    // 0x117174: 0xc045b02
    ctx->pc = 0x117174u;
    SET_GPR_U32(ctx, 31, 0x11717Cu);
    ctx->pc = 0x117178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116C08_0x116c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11717Cu; }
    }
    if (ctx->pc != 0x11717Cu) { return; }
    ctx->pc = 0x11717Cu;
    // 0x11717c: 0x3c050011
    ctx->pc = 0x11717cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)17 << 16));
    // 0x117180: 0x3c048000
    ctx->pc = 0x117180u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x117184: 0x24a57490
    ctx->pc = 0x117184u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29840));
    // 0x117188: 0x200302d
    ctx->pc = 0x117188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11718c: 0xc045b02
    ctx->pc = 0x11718Cu;
    SET_GPR_U32(ctx, 31, 0x117194u);
    ctx->pc = 0x117190u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 12));
    ctx->pc = 0x116C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116C08_0x116c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117194u; }
    }
    if (ctx->pc != 0x117194u) { return; }
    ctx->pc = 0x117194u;
    // 0x117194: 0xc0475ae
    ctx->pc = 0x117194u;
    SET_GPR_U32(ctx, 31, 0x11719Cu);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11719Cu; }
    }
    if (ctx->pc != 0x11719Cu) { return; }
    ctx->pc = 0x11719Cu;
    // 0x11719c: 0x3c048000
    ctx->pc = 0x11719cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x1171a0: 0xc04528c
    ctx->pc = 0x1171A0u;
    SET_GPR_U32(ctx, 31, 0x1171A8u);
    ctx->pc = 0x1171A4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 2));
    ctx->pc = 0x114A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A30_0x114a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1171A8u; }
    }
    if (ctx->pc != 0x1171A8u) { return; }
    ctx->pc = 0x1171A8u;
    // 0x1171a8: 0x14400017
    ctx->pc = 0x1171A8u;
    {
        const bool branch_taken_0x1171a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1171ACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1171a8) {
            ctx->pc = 0x117208u;
            goto label_117208;
        }
    }
    ctx->pc = 0x1171B0u;
    // 0x1171b0: 0x26450040
    ctx->pc = 0x1171b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 64));
    // 0x1171b4: 0x3c048000
    ctx->pc = 0x1171b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x1171b8: 0xacb1000c
    ctx->pc = 0x1171b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 17));
    // 0x1171bc: 0x34840002
    ctx->pc = 0x1171bcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 2));
    // 0x1171c0: 0x24060010
    ctx->pc = 0x1171c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1171c4: 0x382d
    ctx->pc = 0x1171c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171c8: 0x402d
    ctx->pc = 0x1171c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171cc: 0xc045b82
    ctx->pc = 0x1171CCu;
    SET_GPR_U32(ctx, 31, 0x1171D4u);
    ctx->pc = 0x1171D0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116E08_0x116e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1171D4u; }
    }
    if (ctx->pc != 0x1171D4u) { return; }
    ctx->pc = 0x1171D4u;
    // 0x1171d4: 0x0
    ctx->pc = 0x1171d4u;
    // NOP
label_1171d8:
    // 0x1171d8: 0xc045a36
    ctx->pc = 0x1171D8u;
    SET_GPR_U32(ctx, 31, 0x1171E0u);
    ctx->pc = 0x1171DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1168D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001168D8_0x1168d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1171E0u; }
    }
    if (ctx->pc != 0x1171E0u) { return; }
    ctx->pc = 0x1171E0u;
    // 0x1171e0: 0x1040fffd
    ctx->pc = 0x1171E0u;
    {
        const bool branch_taken_0x1171e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1171E4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1171e0) {
            ctx->pc = 0x1171D8u;
            goto label_1171d8;
        }
    }
    ctx->pc = 0x1171E8u;
    // 0x1171e8: 0x3c048000
    ctx->pc = 0x1171e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x1171ec: 0xdfb20020
    ctx->pc = 0x1171ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1171f0: 0x24050001
    ctx->pc = 0x1171f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1171f4: 0xdfb10010
    ctx->pc = 0x1171f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1171f8: 0x34840002
    ctx->pc = 0x1171f8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 2));
    // 0x1171fc: 0xdfb00000
    ctx->pc = 0x1171fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117200: 0x8045288
    ctx->pc = 0x117200u;
    ctx->pc = 0x117204u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x114A20u;
    sub_00114A20_0x114a20(rdram, ctx, runtime); return;
    ctx->pc = 0x117208u;
label_117208:
    // 0x117208: 0xdfb20020
    ctx->pc = 0x117208u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11720c: 0xdfb10010
    ctx->pc = 0x11720cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117210: 0xdfb00000
    ctx->pc = 0x117210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117214: 0x3e00008
    ctx->pc = 0x117214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117218u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1170C0u: goto label_1170c0;
            case 0x1171D8u: goto label_1171d8;
            case 0x117208u: goto label_117208;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11721Cu;
    // 0x11721c: 0x0
    ctx->pc = 0x11721cu;
    // NOP
}
