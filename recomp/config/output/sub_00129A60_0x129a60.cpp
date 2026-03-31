#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00129A60
// Address: 0x129a60 - 0x129c08
void sub_00129A60_0x129a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x129a60u;

    // 0x129a60: 0x27bdffe0
    ctx->pc = 0x129a60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x129a64: 0xffb00000
    ctx->pc = 0x129a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x129a68: 0xffb10008
    ctx->pc = 0x129a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x129a6c: 0x2411000f
    ctx->pc = 0x129a6cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 15));
    // 0x129a70: 0xffb20010
    ctx->pc = 0x129a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x129a74: 0xffbf0018
    ctx->pc = 0x129a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x129a78: 0xc049938
    ctx->pc = 0x129A78u;
    SET_GPR_U32(ctx, 31, 0x129A80u);
    ctx->pc = 0x129A7Cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1264E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264E0_0x1264e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129A80u; }
    }
    if (ctx->pc != 0x129A80u) { return; }
    ctx->pc = 0x129A80u;
    // 0x129a80: 0x3c020021
    ctx->pc = 0x129a80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x129a84: 0x2450c8c0
    ctx->pc = 0x129a84u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294953152));
label_129a88:
    // 0x129a88: 0x82020000
    ctx->pc = 0x129a88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x129a8c: 0x54520004
    ctx->pc = 0x129A8Cu;
    {
        const bool branch_taken_0x129a8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x129a8c) {
            ctx->pc = 0x129A90u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x129AA0u;
            goto label_129aa0;
        }
    }
    ctx->pc = 0x129A94u;
    // 0x129a94: 0xc04a666
    ctx->pc = 0x129A94u;
    SET_GPR_U32(ctx, 31, 0x129A9Cu);
    ctx->pc = 0x129A98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129998u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129998_0x129998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129A9Cu; }
    }
    if (ctx->pc != 0x129A9Cu) { return; }
    ctx->pc = 0x129A9Cu;
    // 0x129a9c: 0x2631ffff
    ctx->pc = 0x129a9cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_129aa0:
    // 0x129aa0: 0x621fff9
    ctx->pc = 0x129AA0u;
    {
        const bool branch_taken_0x129aa0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x129AA4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 68));
        if (branch_taken_0x129aa0) {
            ctx->pc = 0x129A88u;
            goto label_129a88;
        }
    }
    ctx->pc = 0x129AA8u;
    // 0x129aa8: 0xdfb00000
    ctx->pc = 0x129aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129aac: 0xdfb10008
    ctx->pc = 0x129aacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129ab0: 0xdfb20010
    ctx->pc = 0x129ab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129ab4: 0xdfbf0018
    ctx->pc = 0x129ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x129ab8: 0x804993e
    ctx->pc = 0x129AB8u;
    ctx->pc = 0x129ABCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1264F8u;
    sub_001264F8_0x1264f8(rdram, ctx, runtime); return;
    ctx->pc = 0x129AC0u;
    // 0x129ac0: 0x27bdffd0
    ctx->pc = 0x129ac0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x129ac4: 0xffb00000
    ctx->pc = 0x129ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x129ac8: 0x80802d
    ctx->pc = 0x129ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129acc: 0xffb10008
    ctx->pc = 0x129accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x129ad0: 0xc0882d
    ctx->pc = 0x129ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ad4: 0xffb20010
    ctx->pc = 0x129ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x129ad8: 0xa0902d
    ctx->pc = 0x129ad8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129adc: 0x24040006
    ctx->pc = 0x129adcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    // 0x129ae0: 0x200302d
    ctx->pc = 0x129ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ae4: 0x282d
    ctx->pc = 0x129ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ae8: 0x240382d
    ctx->pc = 0x129ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129aec: 0xffb30018
    ctx->pc = 0x129aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x129af0: 0xffbf0020
    ctx->pc = 0x129af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x129af4: 0xc04a13e
    ctx->pc = 0x129AF4u;
    SET_GPR_U32(ctx, 31, 0x129AFCu);
    ctx->pc = 0x129AF8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1284F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001284F8_0x1284f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129AFCu; }
    }
    if (ctx->pc != 0x129AFCu) { return; }
    ctx->pc = 0x129AFCu;
    // 0x129afc: 0x56000004
    ctx->pc = 0x129AFCu;
    {
        const bool branch_taken_0x129afc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x129afc) {
            ctx->pc = 0x129B00u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->pc = 0x129B10u;
            goto label_129b10;
        }
    }
    ctx->pc = 0x129B04u;
    // 0x129b04: 0x3c040024
    ctx->pc = 0x129b04u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x129b08: 0x10000016
    ctx->pc = 0x129B08u;
    {
        const bool branch_taken_0x129b08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129B0Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942984));
        if (branch_taken_0x129b08) {
            ctx->pc = 0x129B64u;
            goto label_129b64;
        }
    }
    ctx->pc = 0x129B10u;
label_129b10:
    // 0x129b10: 0x24130002
    ctx->pc = 0x129b10u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
    // 0x129b14: 0x14530003
    ctx->pc = 0x129B14u;
    {
        const bool branch_taken_0x129b14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x129b14) {
            ctx->pc = 0x129B24u;
            goto label_129b24;
        }
    }
    ctx->pc = 0x129B1Cu;
    // 0x129b1c: 0xc04a5f8
    ctx->pc = 0x129B1Cu;
    SET_GPR_U32(ctx, 31, 0x129B24u);
    ctx->pc = 0x129B20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1297E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001297E0_0x1297e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129B24u; }
    }
    if (ctx->pc != 0x129B24u) { return; }
    ctx->pc = 0x129B24u;
label_129b24:
    // 0x129b24: 0x16200004
    ctx->pc = 0x129B24u;
    {
        const bool branch_taken_0x129b24 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x129B28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x129b24) {
            ctx->pc = 0x129B38u;
            goto label_129b38;
        }
    }
    ctx->pc = 0x129B2Cu;
    // 0x129b2c: 0x10000012
    ctx->pc = 0x129B2Cu;
    {
        const bool branch_taken_0x129b2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129B30u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
        if (branch_taken_0x129b2c) {
            ctx->pc = 0x129B78u;
            goto label_129b78;
        }
    }
    ctx->pc = 0x129B34u;
    // 0x129b34: 0x0
    ctx->pc = 0x129b34u;
    // NOP
label_129b38:
    // 0x129b38: 0x16220003
    ctx->pc = 0x129B38u;
    {
        const bool branch_taken_0x129b38 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x129b38) {
            ctx->pc = 0x129B48u;
            goto label_129b48;
        }
    }
    ctx->pc = 0x129B40u;
    // 0x129b40: 0x10000004
    ctx->pc = 0x129B40u;
    {
        const bool branch_taken_0x129b40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129B44u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        if (branch_taken_0x129b40) {
            ctx->pc = 0x129B54u;
            goto label_129b54;
        }
    }
    ctx->pc = 0x129B48u;
label_129b48:
    // 0x129b48: 0x16330005
    ctx->pc = 0x129B48u;
    {
        const bool branch_taken_0x129b48 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 19));
        ctx->pc = 0x129B4Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x129b48) {
            ctx->pc = 0x129B60u;
            goto label_129b60;
        }
    }
    ctx->pc = 0x129B50u;
    // 0x129b50: 0x8e02000c
    ctx->pc = 0x129b50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_129b54:
    // 0x129b54: 0x521021
    ctx->pc = 0x129b54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x129b58: 0x10000007
    ctx->pc = 0x129B58u;
    {
        const bool branch_taken_0x129b58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129B5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x129b58) {
            ctx->pc = 0x129B78u;
            goto label_129b78;
        }
    }
    ctx->pc = 0x129B60u;
label_129b60:
    // 0x129b60: 0x2484a130
    ctx->pc = 0x129b60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943024));
label_129b64:
    // 0x129b64: 0xc04a034
    ctx->pc = 0x129B64u;
    SET_GPR_U32(ctx, 31, 0x129B6Cu);
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129B6Cu; }
    }
    if (ctx->pc != 0x129B6Cu) { return; }
    ctx->pc = 0x129B6Cu;
    // 0x129b6c: 0x10000012
    ctx->pc = 0x129B6Cu;
    {
        const bool branch_taken_0x129b6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129B70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x129b6c) {
            ctx->pc = 0x129BB8u;
            goto label_129bb8;
        }
    }
    ctx->pc = 0x129B74u;
    // 0x129b74: 0x0
    ctx->pc = 0x129b74u;
    // NOP
label_129b78:
    // 0x129b78: 0x8e020014
    ctx->pc = 0x129b78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x129b7c: 0x4430004
    ctx->pc = 0x129B7Cu;
    {
        const bool branch_taken_0x129b7c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x129b7c) {
            ctx->pc = 0x129B80u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x129B90u;
            goto label_129b90;
        }
    }
    ctx->pc = 0x129B84u;
    // 0x129b84: 0x10000005
    ctx->pc = 0x129B84u;
    {
        const bool branch_taken_0x129b84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129B88u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        if (branch_taken_0x129b84) {
            ctx->pc = 0x129B9Cu;
            goto label_129b9c;
        }
    }
    ctx->pc = 0x129B8Cu;
    // 0x129b8c: 0x0
    ctx->pc = 0x129b8cu;
    // NOP
label_129b90:
    // 0x129b90: 0x62102a
    ctx->pc = 0x129b90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x129b94: 0x54400001
    ctx->pc = 0x129B94u;
    {
        const bool branch_taken_0x129b94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x129b94) {
            ctx->pc = 0x129B98u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
            ctx->pc = 0x129B9Cu;
            goto label_129b9c;
        }
    }
    ctx->pc = 0x129B9Cu;
label_129b9c:
    // 0x129b9c: 0x240382d
    ctx->pc = 0x129b9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ba0: 0x220402d
    ctx->pc = 0x129ba0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ba4: 0x24040006
    ctx->pc = 0x129ba4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    // 0x129ba8: 0x24050001
    ctx->pc = 0x129ba8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x129bac: 0xc04a13e
    ctx->pc = 0x129BACu;
    SET_GPR_U32(ctx, 31, 0x129BB4u);
    ctx->pc = 0x129BB0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1284F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001284F8_0x1284f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129BB4u; }
    }
    if (ctx->pc != 0x129BB4u) { return; }
    ctx->pc = 0x129BB4u;
    // 0x129bb4: 0x8e020014
    ctx->pc = 0x129bb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_129bb8:
    // 0x129bb8: 0xdfb00000
    ctx->pc = 0x129bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129bbc: 0xdfb10008
    ctx->pc = 0x129bbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129bc0: 0xdfb20010
    ctx->pc = 0x129bc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129bc4: 0xdfb30018
    ctx->pc = 0x129bc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x129bc8: 0xdfbf0020
    ctx->pc = 0x129bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129bcc: 0x3e00008
    ctx->pc = 0x129BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129BD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129A88u: goto label_129a88;
            case 0x129AA0u: goto label_129aa0;
            case 0x129B10u: goto label_129b10;
            case 0x129B24u: goto label_129b24;
            case 0x129B38u: goto label_129b38;
            case 0x129B48u: goto label_129b48;
            case 0x129B54u: goto label_129b54;
            case 0x129B60u: goto label_129b60;
            case 0x129B64u: goto label_129b64;
            case 0x129B78u: goto label_129b78;
            case 0x129B90u: goto label_129b90;
            case 0x129B9Cu: goto label_129b9c;
            case 0x129BB8u: goto label_129bb8;
            case 0x129BF8u: goto label_129bf8;
            case 0x129BFCu: goto label_129bfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129BD4u;
    // 0x129bd4: 0x0
    ctx->pc = 0x129bd4u;
    // NOP
    // 0x129bd8: 0x27bdfff0
    ctx->pc = 0x129bd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x129bdc: 0x14800006
    ctx->pc = 0x129BDCu;
    {
        const bool branch_taken_0x129bdc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x129BE0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x129bdc) {
            ctx->pc = 0x129BF8u;
            goto label_129bf8;
        }
    }
    ctx->pc = 0x129BE4u;
    // 0x129be4: 0x3c040024
    ctx->pc = 0x129be4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x129be8: 0xc04a034
    ctx->pc = 0x129BE8u;
    SET_GPR_U32(ctx, 31, 0x129BF0u);
    ctx->pc = 0x129BECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943064));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129BF0u; }
    }
    if (ctx->pc != 0x129BF0u) { return; }
    ctx->pc = 0x129BF0u;
    // 0x129bf0: 0x10000002
    ctx->pc = 0x129BF0u;
    {
        const bool branch_taken_0x129bf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129BF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x129bf0) {
            ctx->pc = 0x129BFCu;
            goto label_129bfc;
        }
    }
    ctx->pc = 0x129BF8u;
label_129bf8:
    // 0x129bf8: 0x8c820014
    ctx->pc = 0x129bf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_129bfc:
    // 0x129bfc: 0xdfbf0000
    ctx->pc = 0x129bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129c00: 0x3e00008
    ctx->pc = 0x129C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129C04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129A88u: goto label_129a88;
            case 0x129AA0u: goto label_129aa0;
            case 0x129B10u: goto label_129b10;
            case 0x129B24u: goto label_129b24;
            case 0x129B38u: goto label_129b38;
            case 0x129B48u: goto label_129b48;
            case 0x129B54u: goto label_129b54;
            case 0x129B60u: goto label_129b60;
            case 0x129B64u: goto label_129b64;
            case 0x129B78u: goto label_129b78;
            case 0x129B90u: goto label_129b90;
            case 0x129B9Cu: goto label_129b9c;
            case 0x129BB8u: goto label_129bb8;
            case 0x129BF8u: goto label_129bf8;
            case 0x129BFCu: goto label_129bfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129C08u;
}
