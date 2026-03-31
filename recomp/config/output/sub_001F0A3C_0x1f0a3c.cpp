#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F0A3C
// Address: 0x1f0a3c - 0x1f0ba0
void sub_001F0A3C_0x1f0a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f0a3cu;

    // 0x1f0a3c: 0x27bdffd0
    ctx->pc = 0x1f0a3cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f0a40: 0xffbe0020
    ctx->pc = 0x1f0a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x1f0a44: 0xffbf0028
    ctx->pc = 0x1f0a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f0a48: 0x3a0f02d
    ctx->pc = 0x1f0a48u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a4c: 0xafc40000
    ctx->pc = 0x1f0a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1f0a50: 0xa0102d
    ctx->pc = 0x1f0a50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a54: 0xafc60008
    ctx->pc = 0x1f0a54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x1f0a58: 0xa7c20004
    ctx->pc = 0x1f0a58u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f0a5c: 0x8fc20000
    ctx->pc = 0x1f0a5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f0a60: 0xafc20014
    ctx->pc = 0x1f0a60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x1f0a64: 0x27c2000c
    ctx->pc = 0x1f0a64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 12));
    // 0x1f0a68: 0x40202d
    ctx->pc = 0x1f0a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a6c: 0x8fc50014
    ctx->pc = 0x1f0a6cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f0a70: 0x24060002
    ctx->pc = 0x1f0a70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0a74: 0xc041eac
    ctx->pc = 0x1F0A74u;
    SET_GPR_U32(ctx, 31, 0x1F0A7Cu);
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0A7Cu; }
    }
    if (ctx->pc != 0x1F0A7Cu) { return; }
    ctx->pc = 0x1F0A7Cu;
    // 0x1f0a7c: 0x8fc20014
    ctx->pc = 0x1f0a7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f0a80: 0x24420002
    ctx->pc = 0x1f0a80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x1f0a84: 0xafc20014
    ctx->pc = 0x1f0a84u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x1f0a88: 0xafc00018
    ctx->pc = 0x1f0a88u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 0));
label_1f0a8c:
    // 0x1f0a8c: 0x87c2000c
    ctx->pc = 0x1f0a8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f0a90: 0x8fc30018
    ctx->pc = 0x1f0a90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1f0a94: 0x62102a
    ctx->pc = 0x1f0a94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1f0a98: 0x14400003
    ctx->pc = 0x1F0A98u;
    {
        const bool branch_taken_0x1f0a98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f0a98) {
            ctx->pc = 0x1F0AA8u;
            goto label_1f0aa8;
        }
    }
    ctx->pc = 0x1F0AA0u;
    // 0x1f0aa0: 0x10000018
    ctx->pc = 0x1F0AA0u;
    {
        const bool branch_taken_0x1f0aa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f0aa0) {
            ctx->pc = 0x1F0B04u;
            goto label_1f0b04;
        }
    }
    ctx->pc = 0x1F0AA8u;
label_1f0aa8:
    // 0x1f0aa8: 0x27c2000e
    ctx->pc = 0x1f0aa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 14));
    // 0x1f0aac: 0x40202d
    ctx->pc = 0x1f0aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0ab0: 0x8fc50014
    ctx->pc = 0x1f0ab0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f0ab4: 0x24060002
    ctx->pc = 0x1f0ab4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0ab8: 0xc041eac
    ctx->pc = 0x1F0AB8u;
    SET_GPR_U32(ctx, 31, 0x1F0AC0u);
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0AC0u; }
    }
    if (ctx->pc != 0x1F0AC0u) { return; }
    ctx->pc = 0x1F0AC0u;
    // 0x1f0ac0: 0x8fc20014
    ctx->pc = 0x1f0ac0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f0ac4: 0x24420002
    ctx->pc = 0x1f0ac4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x1f0ac8: 0xafc20014
    ctx->pc = 0x1f0ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x1f0acc: 0x87c3000e
    ctx->pc = 0x1f0accu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x1f0ad0: 0x87c20004
    ctx->pc = 0x1f0ad0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f0ad4: 0x14620003
    ctx->pc = 0x1F0AD4u;
    {
        const bool branch_taken_0x1f0ad4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f0ad4) {
            ctx->pc = 0x1F0AE4u;
            goto label_1f0ae4;
        }
    }
    ctx->pc = 0x1F0ADCu;
    // 0x1f0adc: 0x10000009
    ctx->pc = 0x1F0ADCu;
    {
        const bool branch_taken_0x1f0adc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f0adc) {
            ctx->pc = 0x1F0B04u;
            goto label_1f0b04;
        }
    }
    ctx->pc = 0x1F0AE4u;
label_1f0ae4:
    // 0x1f0ae4: 0x8fc20014
    ctx->pc = 0x1f0ae4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f0ae8: 0x24420004
    ctx->pc = 0x1f0ae8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1f0aec: 0xafc20014
    ctx->pc = 0x1f0aecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x1f0af0: 0x8fc20018
    ctx->pc = 0x1f0af0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1f0af4: 0x24420001
    ctx->pc = 0x1f0af4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f0af8: 0xafc20018
    ctx->pc = 0x1f0af8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x1f0afc: 0x1000ffe3
    ctx->pc = 0x1F0AFCu;
    {
        const bool branch_taken_0x1f0afc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f0afc) {
            ctx->pc = 0x1F0A8Cu;
            goto label_1f0a8c;
        }
    }
    ctx->pc = 0x1F0B04u;
label_1f0b04:
    // 0x1f0b04: 0x87c3000c
    ctx->pc = 0x1f0b04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f0b08: 0x8fc20018
    ctx->pc = 0x1f0b08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1f0b0c: 0x14430015
    ctx->pc = 0x1F0B0Cu;
    {
        const bool branch_taken_0x1f0b0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1f0b0c) {
            ctx->pc = 0x1F0B64u;
            goto label_1f0b64;
        }
    }
    ctx->pc = 0x1F0B14u;
    // 0x1f0b14: 0x97c2000c
    ctx->pc = 0x1f0b14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f0b18: 0x24420001
    ctx->pc = 0x1f0b18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f0b1c: 0xa7c2000c
    ctx->pc = 0x1f0b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f0b20: 0x27c2000c
    ctx->pc = 0x1f0b20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 12));
    // 0x1f0b24: 0x8fc40000
    ctx->pc = 0x1f0b24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f0b28: 0x40282d
    ctx->pc = 0x1f0b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0b2c: 0x24060002
    ctx->pc = 0x1f0b2cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0b30: 0xc041eac
    ctx->pc = 0x1F0B30u;
    SET_GPR_U32(ctx, 31, 0x1F0B38u);
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0B38u; }
    }
    if (ctx->pc != 0x1F0B38u) { return; }
    ctx->pc = 0x1F0B38u;
    // 0x1f0b38: 0x97c20004
    ctx->pc = 0x1f0b38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f0b3c: 0xa7c2000e
    ctx->pc = 0x1f0b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f0b40: 0x27c2000e
    ctx->pc = 0x1f0b40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 14));
    // 0x1f0b44: 0x8fc40014
    ctx->pc = 0x1f0b44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f0b48: 0x40282d
    ctx->pc = 0x1f0b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0b4c: 0x24060002
    ctx->pc = 0x1f0b4cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0b50: 0xc041eac
    ctx->pc = 0x1F0B50u;
    SET_GPR_U32(ctx, 31, 0x1F0B58u);
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0B58u; }
    }
    if (ctx->pc != 0x1F0B58u) { return; }
    ctx->pc = 0x1F0B58u;
    // 0x1f0b58: 0x8fc20014
    ctx->pc = 0x1f0b58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f0b5c: 0x24420002
    ctx->pc = 0x1f0b5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x1f0b60: 0xafc20014
    ctx->pc = 0x1f0b60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_1f0b64:
    // 0x1f0b64: 0x8fc20008
    ctx->pc = 0x1f0b64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f0b68: 0xafc20010
    ctx->pc = 0x1f0b68u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x1f0b6c: 0x27c20010
    ctx->pc = 0x1f0b6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 16));
    // 0x1f0b70: 0x8fc40014
    ctx->pc = 0x1f0b70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f0b74: 0x40282d
    ctx->pc = 0x1f0b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0b78: 0x24060004
    ctx->pc = 0x1f0b78u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0b7c: 0xc041eac
    ctx->pc = 0x1F0B7Cu;
    SET_GPR_U32(ctx, 31, 0x1F0B84u);
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0B84u; }
    }
    if (ctx->pc != 0x1F0B84u) { return; }
    ctx->pc = 0x1F0B84u;
    // 0x1f0b84: 0x102d
    ctx->pc = 0x1f0b84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0b88: 0x3c0e82d
    ctx->pc = 0x1f0b88u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0b8c: 0xdfbe0020
    ctx->pc = 0x1f0b8cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0b90: 0xdfbf0028
    ctx->pc = 0x1f0b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f0b94: 0x27bd0030
    ctx->pc = 0x1f0b94u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f0b98: 0x3e00008
    ctx->pc = 0x1F0B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0A8Cu: goto label_1f0a8c;
            case 0x1F0AA8u: goto label_1f0aa8;
            case 0x1F0AE4u: goto label_1f0ae4;
            case 0x1F0B04u: goto label_1f0b04;
            case 0x1F0B64u: goto label_1f0b64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0BA0u;
}
