#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00112038
// Address: 0x112038 - 0x112178
void sub_00112038_0x112038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x112038u;

    // 0x112038: 0x27bdffa0
    ctx->pc = 0x112038u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11203c: 0xffa40040
    ctx->pc = 0x11203cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x112040: 0x27a40040
    ctx->pc = 0x112040u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x112044: 0xffa50048
    ctx->pc = 0x112044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x112048: 0xffb00050
    ctx->pc = 0x112048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x11204c: 0xffbf0058
    ctx->pc = 0x11204cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x112050: 0xc044674
    ctx->pc = 0x112050u;
    SET_GPR_U32(ctx, 31, 0x112058u);
    ctx->pc = 0x112054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1119D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001119D0_0x1119d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112058u; }
    }
    if (ctx->pc != 0x112058u) { return; }
    ctx->pc = 0x112058u;
    // 0x112058: 0x27b00020
    ctx->pc = 0x112058u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x11205c: 0x27a40048
    ctx->pc = 0x11205cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 72));
    // 0x112060: 0xc044674
    ctx->pc = 0x112060u;
    SET_GPR_U32(ctx, 31, 0x112068u);
    ctx->pc = 0x112064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1119D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001119D0_0x1119d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112068u; }
    }
    if (ctx->pc != 0x112068u) { return; }
    ctx->pc = 0x112068u;
    // 0x112068: 0x8fa60000
    ctx->pc = 0x112068u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11206c: 0x3a0402d
    ctx->pc = 0x11206cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112070: 0x2cc20002
    ctx->pc = 0x112070u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 2));
    // 0x112074: 0x1440003a
    ctx->pc = 0x112074u;
    {
        const bool branch_taken_0x112074 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x112078u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x112074) {
            ctx->pc = 0x112160u;
            goto label_112160;
        }
    }
    ctx->pc = 0x11207Cu;
    // 0x11207c: 0x8fa50020
    ctx->pc = 0x11207cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112080: 0x2ca20002
    ctx->pc = 0x112080u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 2));
    // 0x112084: 0x14400036
    ctx->pc = 0x112084u;
    {
        const bool branch_taken_0x112084 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x112088u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x112084) {
            ctx->pc = 0x112160u;
            goto label_112160;
        }
    }
    ctx->pc = 0x11208Cu;
    // 0x11208c: 0x8fa20004
    ctx->pc = 0x11208cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x112090: 0x38c40004
    ctx->pc = 0x112090u;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 6), 4));
    // 0x112094: 0x8fa30024
    ctx->pc = 0x112094u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x112098: 0x431026
    ctx->pc = 0x112098u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11209c: 0x10800004
    ctx->pc = 0x11209Cu;
    {
        const bool branch_taken_0x11209c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1120A0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x11209c) {
            ctx->pc = 0x1120B0u;
            goto label_1120b0;
        }
    }
    ctx->pc = 0x1120A4u;
    // 0x1120a4: 0x38c20002
    ctx->pc = 0x1120a4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 6), 2));
    // 0x1120a8: 0x14400007
    ctx->pc = 0x1120A8u;
    {
        const bool branch_taken_0x1120a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1120ACu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x1120a8) {
            ctx->pc = 0x1120C8u;
            goto label_1120c8;
        }
    }
    ctx->pc = 0x1120B0u;
label_1120b0:
    // 0x1120b0: 0x54c5002b
    ctx->pc = 0x1120B0u;
    {
        const bool branch_taken_0x1120b0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 5));
        if (branch_taken_0x1120b0) {
            ctx->pc = 0x1120B4u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x112160u;
            goto label_112160;
        }
    }
    ctx->pc = 0x1120B8u;
    // 0x1120b8: 0x3c020024
    ctx->pc = 0x1120b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x1120bc: 0x10000028
    ctx->pc = 0x1120BCu;
    {
        const bool branch_taken_0x1120bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1120C0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294935968));
        if (branch_taken_0x1120bc) {
            ctx->pc = 0x112160u;
            goto label_112160;
        }
    }
    ctx->pc = 0x1120C4u;
    // 0x1120c4: 0x0
    ctx->pc = 0x1120c4u;
    // NOP
label_1120c8:
    // 0x1120c8: 0x54400005
    ctx->pc = 0x1120C8u;
    {
        const bool branch_taken_0x1120c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1120c8) {
            ctx->pc = 0x1120CCu;
            SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), 2));
            ctx->pc = 0x1120E0u;
            goto label_1120e0;
        }
    }
    ctx->pc = 0x1120D0u;
    // 0x1120d0: 0xffa00010
    ctx->pc = 0x1120d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1120d4: 0x3a0202d
    ctx->pc = 0x1120d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1120d8: 0x10000021
    ctx->pc = 0x1120D8u;
    {
        const bool branch_taken_0x1120d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1120DCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x1120d8) {
            ctx->pc = 0x112160u;
            goto label_112160;
        }
    }
    ctx->pc = 0x1120E0u;
label_1120e0:
    // 0x1120e0: 0x54400005
    ctx->pc = 0x1120E0u;
    {
        const bool branch_taken_0x1120e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1120e0) {
            ctx->pc = 0x1120E4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->pc = 0x1120F8u;
            goto label_1120f8;
        }
    }
    ctx->pc = 0x1120E8u;
    // 0x1120e8: 0x24020004
    ctx->pc = 0x1120e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1120ec: 0x3a0202d
    ctx->pc = 0x1120ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1120f0: 0x1000001b
    ctx->pc = 0x1120F0u;
    {
        const bool branch_taken_0x1120f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1120F4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1120f0) {
            ctx->pc = 0x112160u;
            goto label_112160;
        }
    }
    ctx->pc = 0x1120F8u;
label_1120f8:
    // 0x1120f8: 0x8fa20028
    ctx->pc = 0x1120f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1120fc: 0xdfa40010
    ctx->pc = 0x1120fcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112100: 0xdfa60030
    ctx->pc = 0x112100u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112104: 0x621023
    ctx->pc = 0x112104u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x112108: 0x86282b
    ctx->pc = 0x112108u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x11210c: 0x10a00005
    ctx->pc = 0x11210Cu;
    {
        const bool branch_taken_0x11210c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x112110u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x11210c) {
            ctx->pc = 0x112124u;
            goto label_112124;
        }
    }
    ctx->pc = 0x112114u;
    // 0x112114: 0x2442ffff
    ctx->pc = 0x112114u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x112118: 0x42078
    ctx->pc = 0x112118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x11211c: 0xafa20008
    ctx->pc = 0x11211cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x112120: 0x86282b
    ctx->pc = 0x112120u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_112124:
    // 0x112124: 0x34038000
    ctx->pc = 0x112124u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x112128: 0x31b7c
    ctx->pc = 0x112128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x11212c: 0x382d
    ctx->pc = 0x11212cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112130:
    // 0x112130: 0x14a00005
    ctx->pc = 0x112130u;
    {
        const bool branch_taken_0x112130 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x112134u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 1);
        if (branch_taken_0x112130) {
            ctx->pc = 0x112148u;
            goto label_112148;
        }
    }
    ctx->pc = 0x112138u;
    // 0x112138: 0x86202f
    ctx->pc = 0x112138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 6));
    // 0x11213c: 0xe33825
    ctx->pc = 0x11213cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x112140: 0x41078
    ctx->pc = 0x112140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 1);
    // 0x112144: 0x0
    ctx->pc = 0x112144u;
    // NOP
label_112148:
    // 0x112148: 0x3187a
    ctx->pc = 0x112148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x11214c: 0x46282b
    ctx->pc = 0x11214cu;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x112150: 0x1460fff7
    ctx->pc = 0x112150u;
    {
        const bool branch_taken_0x112150 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x112154u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x112150) {
            ctx->pc = 0x112130u;
            goto label_112130;
        }
    }
    ctx->pc = 0x112158u;
    // 0x112158: 0xfd070010
    ctx->pc = 0x112158u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 7));
    // 0x11215c: 0x100202d
    ctx->pc = 0x11215cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_112160:
    // 0x112160: 0xc04463e
    ctx->pc = 0x112160u;
    SET_GPR_U32(ctx, 31, 0x112168u);
    ctx->pc = 0x1118F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001118F8_0x1118f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112168u; }
    }
    if (ctx->pc != 0x112168u) { return; }
    ctx->pc = 0x112168u;
    // 0x112168: 0xdfb00050
    ctx->pc = 0x112168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11216c: 0xdfbf0058
    ctx->pc = 0x11216cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x112170: 0x3e00008
    ctx->pc = 0x112170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112174u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1120B0u: goto label_1120b0;
            case 0x1120C8u: goto label_1120c8;
            case 0x1120E0u: goto label_1120e0;
            case 0x1120F8u: goto label_1120f8;
            case 0x112124u: goto label_112124;
            case 0x112130u: goto label_112130;
            case 0x112148u: goto label_112148;
            case 0x112160u: goto label_112160;
            default: break;
        }
        return;
    }
    ctx->pc = 0x112178u;
}
