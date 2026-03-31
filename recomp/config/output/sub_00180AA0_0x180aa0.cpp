#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00180AA0
// Address: 0x180aa0 - 0x180b88
void sub_00180AA0_0x180aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x180aa0u;

    // 0x180aa0: 0x402d
    ctx->pc = 0x180aa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180aa4: 0x482d
    ctx->pc = 0x180aa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180aa8: 0x382d
    ctx->pc = 0x180aa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180aac: 0x302d
    ctx->pc = 0x180aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180ab0: 0x240a0008
    ctx->pc = 0x180ab0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 8));
    // 0x180ab4: 0x0
    ctx->pc = 0x180ab4u;
    // NOP
label_180ab8:
    // 0x180ab8: 0x90820000
    ctx->pc = 0x180ab8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180abc: 0x1021007
    ctx->pc = 0x180abcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x180ac0: 0x30420001
    ctx->pc = 0x180ac0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x180ac4: 0x10400014
    ctx->pc = 0x180AC4u;
    {
        const bool branch_taken_0x180ac4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x180AC8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x180ac4) {
            ctx->pc = 0x180B18u;
            goto label_180b18;
        }
    }
    ctx->pc = 0x180ACCu;
    // 0x180acc: 0x24c2fff0
    ctx->pc = 0x180accu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x180ad0: 0x2c420010
    ctx->pc = 0x180ad0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 16));
    // 0x180ad4: 0xaca30000
    ctx->pc = 0x180ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x180ad8: 0xaca90008
    ctx->pc = 0x180ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
    // 0x180adc: 0x14400005
    ctx->pc = 0x180ADCu;
    {
        const bool branch_taken_0x180adc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x180AE0u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
        if (branch_taken_0x180adc) {
            ctx->pc = 0x180AF4u;
            goto label_180af4;
        }
    }
    ctx->pc = 0x180AE4u;
    // 0x180ae4: 0x24c2ffdd
    ctx->pc = 0x180ae4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294967261));
    // 0x180ae8: 0x2c420004
    ctx->pc = 0x180ae8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 4));
    // 0x180aec: 0x50400004
    ctx->pc = 0x180AECu;
    {
        const bool branch_taken_0x180aec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x180aec) {
            ctx->pc = 0x180AF0u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x180B00u;
            goto label_180b00;
        }
    }
    ctx->pc = 0x180AF4u;
label_180af4:
    // 0x180af4: 0xacaa0004
    ctx->pc = 0x180af4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 10));
    // 0x180af8: 0x1000000a
    ctx->pc = 0x180AF8u;
    {
        const bool branch_taken_0x180af8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x180AFCu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
        if (branch_taken_0x180af8) {
            ctx->pc = 0x180B24u;
            goto label_180b24;
        }
    }
    ctx->pc = 0x180B00u;
label_180b00:
    // 0x180b00: 0x30e20007
    ctx->pc = 0x180b00u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), 7));
    // 0x180b04: 0x14400007
    ctx->pc = 0x180B04u;
    {
        const bool branch_taken_0x180b04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x180B08u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x180b04) {
            ctx->pc = 0x180B24u;
            goto label_180b24;
        }
    }
    ctx->pc = 0x180B0Cu;
    // 0x180b0c: 0x25290001
    ctx->pc = 0x180b0cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x180b10: 0x10000004
    ctx->pc = 0x180B10u;
    {
        const bool branch_taken_0x180b10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x180B14u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x180b10) {
            ctx->pc = 0x180B24u;
            goto label_180b24;
        }
    }
    ctx->pc = 0x180B18u;
label_180b18:
    // 0x180b18: 0xaca00000
    ctx->pc = 0x180b18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x180b1c: 0xaca00008
    ctx->pc = 0x180b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x180b20: 0xaca0000c
    ctx->pc = 0x180b20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_180b24:
    // 0x180b24: 0x25080001
    ctx->pc = 0x180b24u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180b28: 0x31020007
    ctx->pc = 0x180b28u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 8), 7));
    // 0x180b2c: 0x14400003
    ctx->pc = 0x180B2Cu;
    {
        const bool branch_taken_0x180b2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x180B30u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x180b2c) {
            ctx->pc = 0x180B3Cu;
            goto label_180b3c;
        }
    }
    ctx->pc = 0x180B34u;
    // 0x180b34: 0x24840001
    ctx->pc = 0x180b34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x180b38: 0x402d
    ctx->pc = 0x180b38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180b3c:
    // 0x180b3c: 0x28c20028
    ctx->pc = 0x180b3cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 40));
    // 0x180b40: 0x1440ffdd
    ctx->pc = 0x180B40u;
    {
        const bool branch_taken_0x180b40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x180B44u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
        if (branch_taken_0x180b40) {
            ctx->pc = 0x180AB8u;
            goto label_180ab8;
        }
    }
    ctx->pc = 0x180B48u;
    // 0x180b48: 0x3e00008
    ctx->pc = 0x180B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180B4Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180AB8u: goto label_180ab8;
            case 0x180AF4u: goto label_180af4;
            case 0x180B00u: goto label_180b00;
            case 0x180B18u: goto label_180b18;
            case 0x180B24u: goto label_180b24;
            case 0x180B3Cu: goto label_180b3c;
            case 0x180B78u: goto label_180b78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180B50u;
    // 0x180b50: 0x2c820004
    ctx->pc = 0x180b50u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 4));
    // 0x180b54: 0x10400008
    ctx->pc = 0x180B54u;
    {
        const bool branch_taken_0x180b54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x180B58u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        if (branch_taken_0x180b54) {
            ctx->pc = 0x180B78u;
            goto label_180b78;
        }
    }
    ctx->pc = 0x180B5Cu;
    // 0x180b5c: 0x3c020023
    ctx->pc = 0x180b5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x180b60: 0x41880
    ctx->pc = 0x180b60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x180b64: 0x2442f9f0
    ctx->pc = 0x180b64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965744));
    // 0x180b68: 0xa0202d
    ctx->pc = 0x180b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180b6c: 0x621821
    ctx->pc = 0x180b6cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x180b70: 0x8042bf0
    ctx->pc = 0x180B70u;
    ctx->pc = 0x180B74u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x10AFC0u;
    sub_0010AFC0_0x10afc0(rdram, ctx, runtime); return;
    ctx->pc = 0x180B78u;
label_180b78:
    // 0x180b78: 0x904315f8
    ctx->pc = 0x180b78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5624)));
    // 0x180b7c: 0x3e00008
    ctx->pc = 0x180B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180B80u;
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180AB8u: goto label_180ab8;
            case 0x180AF4u: goto label_180af4;
            case 0x180B00u: goto label_180b00;
            case 0x180B18u: goto label_180b18;
            case 0x180B24u: goto label_180b24;
            case 0x180B3Cu: goto label_180b3c;
            case 0x180B78u: goto label_180b78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180B84u;
    // 0x180b84: 0x0
    ctx->pc = 0x180b84u;
    // NOP
}
