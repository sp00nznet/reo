#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00379ED0
// Address: 0x379ed0 - 0x37a160
void sub_00379ED0_0x379ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x379ed0u;

    // 0x379ed0: 0x27bdffd0
    ctx->pc = 0x379ed0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x379ed4: 0x3c010057
    ctx->pc = 0x379ed4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379ed8: 0xffbf0020
    ctx->pc = 0x379ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x379edc: 0x7fb10010
    ctx->pc = 0x379edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x379ee0: 0x7fb00000
    ctx->pc = 0x379ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x379ee4: 0x80882d
    ctx->pc = 0x379ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379ee8: 0xac20bad8
    ctx->pc = 0x379ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949592), GPR_U32(ctx, 0));
    // 0x379eec: 0x3c010032
    ctx->pc = 0x379eecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x379ef0: 0x902343fc
    ctx->pc = 0x379ef0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17404)));
    // 0x379ef4: 0x1460000c
    ctx->pc = 0x379EF4u;
    {
        const bool branch_taken_0x379ef4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x379EF8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x379ef4) {
            ctx->pc = 0x379F28u;
            goto label_379f28;
        }
    }
    ctx->pc = 0x379EFCu;
    // 0x379efc: 0x3c010032
    ctx->pc = 0x379efcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x379f00: 0x902343c0
    ctx->pc = 0x379f00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17344)));
    // 0x379f04: 0x10600009
    ctx->pc = 0x379F04u;
    {
        const bool branch_taken_0x379f04 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x379F08u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x379f04) {
            ctx->pc = 0x379F2Cu;
            goto label_379f2c;
        }
    }
    ctx->pc = 0x379F0Cu;
    // 0x379f0c: 0x3c01004c
    ctx->pc = 0x379f0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x379f10: 0x8023adf8
    ctx->pc = 0x379f10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946296)));
    // 0x379f14: 0x10600004
    ctx->pc = 0x379F14u;
    {
        const bool branch_taken_0x379f14 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x379F18u;
        SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
        if (branch_taken_0x379f14) {
            ctx->pc = 0x379F28u;
            goto label_379f28;
        }
    }
    ctx->pc = 0x379F1Cu;
    // 0x379f1c: 0x9023ae0b
    ctx->pc = 0x379f1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946315)));
    // 0x379f20: 0x10600087
    ctx->pc = 0x379F20u;
    {
        const bool branch_taken_0x379f20 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x379f20) {
            ctx->pc = 0x37A140u;
            goto label_37a140;
        }
    }
    ctx->pc = 0x379F28u;
label_379f28:
    // 0x379f28: 0x220202d
    ctx->pc = 0x379f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_379f2c:
    // 0x379f2c: 0xc0de760
    ctx->pc = 0x379F2Cu;
    SET_GPR_U32(ctx, 31, 0x379F34u);
    ctx->pc = 0x379F30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x379D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00379D80_0x379d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379F34u; }
    }
    if (ctx->pc != 0x379F34u) { return; }
    ctx->pc = 0x379F34u;
    // 0x379f34: 0x3c020034
    ctx->pc = 0x379f34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x379f38: 0x3c010034
    ctx->pc = 0x379f38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x379f3c: 0x24420a40
    ctx->pc = 0x379f3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2624));
    // 0x379f40: 0x282d
    ctx->pc = 0x379f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379f44: 0xac220a20
    ctx->pc = 0x379f44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2592), GPR_U32(ctx, 2));
    // 0x379f48: 0x24060030
    ctx->pc = 0x379f48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    // 0x379f4c: 0x3c010034
    ctx->pc = 0x379f4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x379f50: 0x8c220a20
    ctx->pc = 0x379f50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x379f54: 0xa451008c
    ctx->pc = 0x379f54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 140), (uint16_t)GPR_U32(ctx, 17));
    // 0x379f58: 0x3c010034
    ctx->pc = 0x379f58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x379f5c: 0x8c220a20
    ctx->pc = 0x379f5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x379f60: 0xa450008e
    ctx->pc = 0x379f60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 142), (uint16_t)GPR_U32(ctx, 16));
    // 0x379f64: 0x3c010034
    ctx->pc = 0x379f64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x379f68: 0x8c220a20
    ctx->pc = 0x379f68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x379f6c: 0x24500004
    ctx->pc = 0x379f6cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4));
    // 0x379f70: 0xc041f1a
    ctx->pc = 0x379F70u;
    SET_GPR_U32(ctx, 31, 0x379F78u);
    ctx->pc = 0x379F74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        auto targetFn = runtime->lookupFunction(0x107C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379F78u; }
        if (ctx->pc != 0x379F78u) { return; }
    }
    ctx->pc = 0x379F78u;
    // 0x379f78: 0x24030011
    ctx->pc = 0x379f78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 17));
    // 0x379f7c: 0x24020003
    ctx->pc = 0x379f7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x379f80: 0xae030020
    ctx->pc = 0x379f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x379f84: 0x3c010032
    ctx->pc = 0x379f84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x379f88: 0xae020000
    ctx->pc = 0x379f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x379f8c: 0x902343fc
    ctx->pc = 0x379f8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17404)));
    // 0x379f90: 0x10620005
    ctx->pc = 0x379F90u;
    {
        const bool branch_taken_0x379f90 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x379f90) {
            ctx->pc = 0x379FA8u;
            goto label_379fa8;
        }
    }
    ctx->pc = 0x379F98u;
    // 0x379f98: 0x10600003
    ctx->pc = 0x379F98u;
    {
        const bool branch_taken_0x379f98 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x379f98) {
            ctx->pc = 0x379FA8u;
            goto label_379fa8;
        }
    }
    ctx->pc = 0x379FA0u;
    // 0x379fa0: 0x10000007
    ctx->pc = 0x379FA0u;
    {
        const bool branch_taken_0x379fa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x379FA4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x379fa0) {
            ctx->pc = 0x379FC0u;
            goto label_379fc0;
        }
    }
    ctx->pc = 0x379FA8u;
label_379fa8:
    // 0x379fa8: 0x3c030016
    ctx->pc = 0x379fa8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)22 << 16));
    // 0x379fac: 0x24020001
    ctx->pc = 0x379facu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x379fb0: 0x3463e360
    ctx->pc = 0x379fb0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 58208));
    // 0x379fb4: 0xae030004
    ctx->pc = 0x379fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x379fb8: 0x10000015
    ctx->pc = 0x379FB8u;
    {
        const bool branch_taken_0x379fb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x379FBCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x379fb8) {
            ctx->pc = 0x37A010u;
            goto label_37a010;
        }
    }
    ctx->pc = 0x379FC0u;
label_379fc0:
    // 0x379fc0: 0x902243c0
    ctx->pc = 0x379fc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17344)));
    // 0x379fc4: 0x14400007
    ctx->pc = 0x379FC4u;
    {
        const bool branch_taken_0x379fc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x379FC8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x379fc4) {
            ctx->pc = 0x379FE4u;
            goto label_379fe4;
        }
    }
    ctx->pc = 0x379FCCu;
    // 0x379fcc: 0x24030002
    ctx->pc = 0x379fccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x379fd0: 0x3c020049
    ctx->pc = 0x379fd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)73 << 16));
    // 0x379fd4: 0xae030010
    ctx->pc = 0x379fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x379fd8: 0x34423e00
    ctx->pc = 0x379fd8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 15872));
    // 0x379fdc: 0x1000000c
    ctx->pc = 0x379FDCu;
    {
        const bool branch_taken_0x379fdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x379FE0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x379fdc) {
            ctx->pc = 0x37A010u;
            goto label_37a010;
        }
    }
    ctx->pc = 0x379FE4u;
label_379fe4:
    // 0x379fe4: 0x14620006
    ctx->pc = 0x379FE4u;
    {
        const bool branch_taken_0x379fe4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x379fe4) {
            ctx->pc = 0x37A000u;
            goto label_37a000;
        }
    }
    ctx->pc = 0x379FECu;
    // 0x379fec: 0xae020010
    ctx->pc = 0x379fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x379ff0: 0x3c02003d
    ctx->pc = 0x379ff0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x379ff4: 0x34420900
    ctx->pc = 0x379ff4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2304));
    // 0x379ff8: 0x10000005
    ctx->pc = 0x379FF8u;
    {
        const bool branch_taken_0x379ff8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x379FFCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x379ff8) {
            ctx->pc = 0x37A010u;
            goto label_37a010;
        }
    }
    ctx->pc = 0x37A000u;
label_37a000:
    // 0x37a000: 0xae020010
    ctx->pc = 0x37a000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x37a004: 0x3c02002d
    ctx->pc = 0x37a004u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
    // 0x37a008: 0x3442c6c0
    ctx->pc = 0x37a008u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 50880));
    // 0x37a00c: 0xae020004
    ctx->pc = 0x37a00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_37a010:
    // 0x37a010: 0x3c010057
    ctx->pc = 0x37a010u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37a014: 0x24020002
    ctx->pc = 0x37a014u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a018: 0x8c23bae8
    ctx->pc = 0x37a018u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x37a01c: 0x200202d
    ctx->pc = 0x37a01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a020: 0x94630008
    ctx->pc = 0x37a020u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x37a024: 0x3c010057
    ctx->pc = 0x37a024u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37a028: 0xae030008
    ctx->pc = 0x37a028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x37a02c: 0x8c23bae8
    ctx->pc = 0x37a02cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x37a030: 0x9463000a
    ctx->pc = 0x37a030u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x37a034: 0xae03000c
    ctx->pc = 0x37a034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x37a038: 0xc056fd2
    ctx->pc = 0x37A038u;
    SET_GPR_U32(ctx, 31, 0x37A040u);
    ctx->pc = 0x37A03Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x15BF48u;
    {
        auto targetFn = runtime->lookupFunction(0x15BF48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A040u; }
        if (ctx->pc != 0x37A040u) { return; }
    }
    ctx->pc = 0x37A040u;
    // 0x37a040: 0xae02001c
    ctx->pc = 0x37a040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x37a044: 0x3c010057
    ctx->pc = 0x37a044u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37a048: 0x8c25bae8
    ctx->pc = 0x37a048u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x37a04c: 0x8e04001c
    ctx->pc = 0x37a04cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x37a050: 0x8ca30004
    ctx->pc = 0x37a050u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37a054: 0x83182b
    ctx->pc = 0x37a054u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x37a058: 0x14600003
    ctx->pc = 0x37A058u;
    {
        const bool branch_taken_0x37a058 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x37A05Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x37a058) {
            ctx->pc = 0x37A068u;
            goto label_37a068;
        }
    }
    ctx->pc = 0x37A060u;
    // 0x37a060: 0x10000037
    ctx->pc = 0x37A060u;
    {
        const bool branch_taken_0x37a060 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37A064u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949608), GPR_U32(ctx, 0));
        if (branch_taken_0x37a060) {
            ctx->pc = 0x37A140u;
            goto label_37a140;
        }
    }
    ctx->pc = 0x37A068u;
label_37a068:
    // 0x37a068: 0x8ca20000
    ctx->pc = 0x37a068u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37a06c: 0x3c010034
    ctx->pc = 0x37a06cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37a070: 0xac220a28
    ctx->pc = 0x37a070u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2600), GPR_U32(ctx, 2));
    // 0x37a074: 0x3c010034
    ctx->pc = 0x37a074u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37a078: 0x8c220a28
    ctx->pc = 0x37a078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2600)));
    // 0x37a07c: 0xae020018
    ctx->pc = 0x37a07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x37a080: 0x3c010057
    ctx->pc = 0x37a080u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37a084: 0x8c22bae8
    ctx->pc = 0x37a084u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x37a088: 0x9445000a
    ctx->pc = 0x37a088u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x37a08c: 0xc0de4bc
    ctx->pc = 0x37A08Cu;
    SET_GPR_U32(ctx, 31, 0x37A094u);
    ctx->pc = 0x37A090u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->pc = 0x3792F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003792F0_0x3792f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A094u; }
    }
    if (ctx->pc != 0x37A094u) { return; }
    ctx->pc = 0x37A094u;
    // 0x37a094: 0x3c010032
    ctx->pc = 0x37a094u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37a098: 0x24030002
    ctx->pc = 0x37a098u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a09c: 0x90244405
    ctx->pc = 0x37a09cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17413)));
    // 0x37a0a0: 0x10830004
    ctx->pc = 0x37A0A0u;
    {
        const bool branch_taken_0x37a0a0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x37A0A4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
        if (branch_taken_0x37a0a0) {
            ctx->pc = 0x37A0B4u;
            goto label_37a0b4;
        }
    }
    ctx->pc = 0x37A0A8u;
    // 0x37a0a8: 0x3c010057
    ctx->pc = 0x37a0a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37a0ac: 0x10000024
    ctx->pc = 0x37A0ACu;
    {
        const bool branch_taken_0x37a0ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37A0B0u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949608), GPR_U32(ctx, 0));
        if (branch_taken_0x37a0ac) {
            ctx->pc = 0x37A140u;
            goto label_37a140;
        }
    }
    ctx->pc = 0x37A0B4u;
label_37a0b4:
    // 0x37a0b4: 0x24020001
    ctx->pc = 0x37a0b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a0b8: 0xa020ae0c
    ctx->pc = 0x37a0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946316), (uint8_t)GPR_U32(ctx, 0));
    // 0x37a0bc: 0x3c010032
    ctx->pc = 0x37a0bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37a0c0: 0xa02243d5
    ctx->pc = 0x37a0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17365), (uint8_t)GPR_U32(ctx, 2));
    // 0x37a0c4: 0x3c010057
    ctx->pc = 0x37a0c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37a0c8: 0xac20bae0
    ctx->pc = 0x37a0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949600), GPR_U32(ctx, 0));
    // 0x37a0cc: 0x3c010057
    ctx->pc = 0x37a0ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37a0d0: 0x8c22bae8
    ctx->pc = 0x37a0d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x37a0d4: 0xac400018
    ctx->pc = 0x37a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x37a0d8: 0x3c010057
    ctx->pc = 0x37a0d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37a0dc: 0x8c22bae8
    ctx->pc = 0x37a0dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294949608)));
    // 0x37a0e0: 0x94450008
    ctx->pc = 0x37a0e0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x37a0e4: 0x9446000a
    ctx->pc = 0x37a0e4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x37a0e8: 0xc0de73c
    ctx->pc = 0x37A0E8u;
    SET_GPR_U32(ctx, 31, 0x37A0F0u);
    ctx->pc = 0x37A0ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x379CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00379CF0_0x379cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A0F0u; }
    }
    if (ctx->pc != 0x37A0F0u) { return; }
    ctx->pc = 0x37A0F0u;
    // 0x37a0f0: 0xc057320
    ctx->pc = 0x37A0F0u;
    SET_GPR_U32(ctx, 31, 0x37A0F8u);
    ctx->pc = 0x37A0F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15CC80u;
    {
        auto targetFn = runtime->lookupFunction(0x15CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A0F8u; }
        if (ctx->pc != 0x37A0F8u) { return; }
    }
    ctx->pc = 0x37A0F8u;
    // 0x37a0f8: 0x3c010034
    ctx->pc = 0x37a0f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37a0fc: 0x8c230a20
    ctx->pc = 0x37a0fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37a100: 0xac620000
    ctx->pc = 0x37a100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x37a104: 0x3c010034
    ctx->pc = 0x37a104u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37a108: 0x8c240a20
    ctx->pc = 0x37a108u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37a10c: 0x8c830000
    ctx->pc = 0x37a10cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37a110: 0x14600005
    ctx->pc = 0x37A110u;
    {
        const bool branch_taken_0x37a110 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x37A114u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x37a110) {
            ctx->pc = 0x37A128u;
            goto label_37a128;
        }
    }
    ctx->pc = 0x37A118u;
    // 0x37a118: 0xac20bae8
    ctx->pc = 0x37a118u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949608), GPR_U32(ctx, 0));
    // 0x37a11c: 0x3c010032
    ctx->pc = 0x37a11cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37a120: 0x10000007
    ctx->pc = 0x37A120u;
    {
        const bool branch_taken_0x37a120 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37A124u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 17365), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x37a120) {
            ctx->pc = 0x37A140u;
            goto label_37a140;
        }
    }
    ctx->pc = 0x37A128u;
label_37a128:
    // 0x37a128: 0xa0800091
    ctx->pc = 0x37a128u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 145), (uint8_t)GPR_U32(ctx, 0));
    // 0x37a12c: 0x3c010034
    ctx->pc = 0x37a12cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x37a130: 0x8c230a20
    ctx->pc = 0x37a130u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 2592)));
    // 0x37a134: 0xa4600096
    ctx->pc = 0x37a134u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 150), (uint16_t)GPR_U32(ctx, 0));
    // 0x37a138: 0x3c010057
    ctx->pc = 0x37a138u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37a13c: 0xa020baf0
    ctx->pc = 0x37a13cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294949616), (uint8_t)GPR_U32(ctx, 0));
label_37a140:
    // 0x37a140: 0xdfbf0020
    ctx->pc = 0x37a140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37a144: 0x7bb10010
    ctx->pc = 0x37a144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a148: 0x7bb00000
    ctx->pc = 0x37a148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a14c: 0x3e00008
    ctx->pc = 0x37A14Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A150u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x379F28u: goto label_379f28;
            case 0x379F2Cu: goto label_379f2c;
            case 0x379FA8u: goto label_379fa8;
            case 0x379FC0u: goto label_379fc0;
            case 0x379FE4u: goto label_379fe4;
            case 0x37A000u: goto label_37a000;
            case 0x37A010u: goto label_37a010;
            case 0x37A068u: goto label_37a068;
            case 0x37A0B4u: goto label_37a0b4;
            case 0x37A128u: goto label_37a128;
            case 0x37A140u: goto label_37a140;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37A154u;
    // 0x37a154: 0x0
    ctx->pc = 0x37a154u;
    // NOP
    // 0x37a158: 0x0
    ctx->pc = 0x37a158u;
    // NOP
    // 0x37a15c: 0x0
    ctx->pc = 0x37a15cu;
    // NOP
}
