#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00140A20
// Address: 0x140a20 - 0x140b98
void sub_00140A20_0x140a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x140a20u;

    // 0x140a20: 0x27bdffc0
    ctx->pc = 0x140a20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x140a24: 0xffb30018
    ctx->pc = 0x140a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x140a28: 0xe0982d
    ctx->pc = 0x140a28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a2c: 0xffb00000
    ctx->pc = 0x140a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x140a30: 0xffb20010
    ctx->pc = 0x140a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x140a34: 0xc0902d
    ctx->pc = 0x140a34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a38: 0xffb40020
    ctx->pc = 0x140a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x140a3c: 0xffb50028
    ctx->pc = 0x140a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x140a40: 0xa0a82d
    ctx->pc = 0x140a40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a44: 0xffb10008
    ctx->pc = 0x140a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x140a48: 0xffbf0030
    ctx->pc = 0x140a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x140a4c: 0xae600000
    ctx->pc = 0x140a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x140a50: 0xae600004
    ctx->pc = 0x140a50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x140a54: 0x8c820000
    ctx->pc = 0x140a54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x140a58: 0x8c830004
    ctx->pc = 0x140a58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x140a5c: 0x40802d
    ctx->pc = 0x140a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a60: 0x1000000b
    ctx->pc = 0x140A60u;
    {
        const bool branch_taken_0x140a60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x140A64u;
        SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x140a60) {
            ctx->pc = 0x140A90u;
            goto label_140a90;
        }
    }
    ctx->pc = 0x140A68u;
label_140a68:
    // 0x140a68: 0x12400005
    ctx->pc = 0x140A68u;
    {
        const bool branch_taken_0x140a68 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x140a68) {
            ctx->pc = 0x140A80u;
            goto label_140a80;
        }
    }
    ctx->pc = 0x140A70u;
    // 0x140a70: 0xc042d10
    ctx->pc = 0x140A70u;
    SET_GPR_U32(ctx, 31, 0x140A78u);
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A78u; }
    }
    if (ctx->pc != 0x140A78u) { return; }
    ctx->pc = 0x140A78u;
    // 0x140a78: 0x50400015
    ctx->pc = 0x140A78u;
    {
        const bool branch_taken_0x140a78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x140a78) {
            ctx->pc = 0x140A7Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x140AD0u;
            goto label_140ad0;
        }
    }
    ctx->pc = 0x140A80u;
label_140a80:
    // 0x140a80: 0xc050236
    ctx->pc = 0x140A80u;
    SET_GPR_U32(ctx, 31, 0x140A88u);
    ctx->pc = 0x140A84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 8));
    ctx->pc = 0x1408D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001408D8_0x1408d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140A88u; }
    }
    if (ctx->pc != 0x140A88u) { return; }
    ctx->pc = 0x140A88u;
    // 0x140a88: 0x2021021
    ctx->pc = 0x140a88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x140a8c: 0x24500010
    ctx->pc = 0x140a8cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 16));
label_140a90:
    // 0x140a90: 0x214882b
    ctx->pc = 0x140a90u;
    SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x140a94: 0x1220000c
    ctx->pc = 0x140A94u;
    {
        const bool branch_taken_0x140a94 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x140A98u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x140a94) {
            ctx->pc = 0x140AC8u;
            goto label_140ac8;
        }
    }
    ctx->pc = 0x140A9Cu;
    // 0x140a9c: 0x200202d
    ctx->pc = 0x140a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140aa0: 0x2a0282d
    ctx->pc = 0x140aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140aa4: 0xc042d10
    ctx->pc = 0x140AA4u;
    SET_GPR_U32(ctx, 31, 0x140AACu);
    ctx->pc = 0x140AA8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140AACu; }
    }
    if (ctx->pc != 0x140AACu) { return; }
    ctx->pc = 0x140AACu;
    // 0x140aac: 0x200202d
    ctx->pc = 0x140aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140ab0: 0x240282d
    ctx->pc = 0x140ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140ab4: 0x1440ffec
    ctx->pc = 0x140AB4u;
    {
        const bool branch_taken_0x140ab4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x140AB8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x140ab4) {
            ctx->pc = 0x140A68u;
            goto label_140a68;
        }
    }
    ctx->pc = 0x140ABCu;
    // 0x140abc: 0xc05027a
    ctx->pc = 0x140ABCu;
    SET_GPR_U32(ctx, 31, 0x140AC4u);
    ctx->pc = 0x140AC0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1409E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001409E8_0x1409e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140AC4u; }
    }
    if (ctx->pc != 0x140AC4u) { return; }
    ctx->pc = 0x140AC4u;
    // 0x140ac4: 0x102d
    ctx->pc = 0x140ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140ac8:
    // 0x140ac8: 0x211100b
    ctx->pc = 0x140ac8u;
    if (GPR_U32(ctx, 17) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 16));
    // 0x140acc: 0xdfb00000
    ctx->pc = 0x140accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_140ad0:
    // 0x140ad0: 0xdfb10008
    ctx->pc = 0x140ad0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x140ad4: 0xdfb20010
    ctx->pc = 0x140ad4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140ad8: 0xdfb30018
    ctx->pc = 0x140ad8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x140adc: 0xdfb40020
    ctx->pc = 0x140adcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140ae0: 0xdfb50028
    ctx->pc = 0x140ae0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x140ae4: 0xdfbf0030
    ctx->pc = 0x140ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140ae8: 0x3e00008
    ctx->pc = 0x140AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140AECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140A68u: goto label_140a68;
            case 0x140A80u: goto label_140a80;
            case 0x140A90u: goto label_140a90;
            case 0x140AC8u: goto label_140ac8;
            case 0x140AD0u: goto label_140ad0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140AF0u;
    // 0x140af0: 0x27bdfff0
    ctx->pc = 0x140af0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x140af4: 0x3c020026
    ctx->pc = 0x140af4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x140af8: 0xffb00000
    ctx->pc = 0x140af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x140afc: 0x3c100026
    ctx->pc = 0x140afcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
    // 0x140b00: 0x24424600
    ctx->pc = 0x140b00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17920));
    // 0x140b04: 0xffbf0008
    ctx->pc = 0x140b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x140b08: 0x26104700
    ctx->pc = 0x140b08u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 18176));
    // 0x140b0c: 0xac440000
    ctx->pc = 0x140b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x140b10: 0xac450004
    ctx->pc = 0x140b10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x140b14: 0x40282d
    ctx->pc = 0x140b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b18: 0xac460008
    ctx->pc = 0x140b18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x140b1c: 0x24060003
    ctx->pc = 0x140b1cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x140b20: 0x200382d
    ctx->pc = 0x140b20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b24: 0x24040020
    ctx->pc = 0x140b24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    // 0x140b28: 0xc04e518
    ctx->pc = 0x140B28u;
    SET_GPR_U32(ctx, 31, 0x140B30u);
    ctx->pc = 0x140B2Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x139460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139460_0x139460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B30u; }
    }
    if (ctx->pc != 0x140B30u) { return; }
    ctx->pc = 0x140B30u;
    // 0x140b30: 0x8e020000
    ctx->pc = 0x140b30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x140b34: 0xdfbf0008
    ctx->pc = 0x140b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x140b38: 0xdfb00000
    ctx->pc = 0x140b38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140b3c: 0x3e00008
    ctx->pc = 0x140B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140B40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140A68u: goto label_140a68;
            case 0x140A80u: goto label_140a80;
            case 0x140A90u: goto label_140a90;
            case 0x140AC8u: goto label_140ac8;
            case 0x140AD0u: goto label_140ad0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140B44u;
    // 0x140b44: 0x0
    ctx->pc = 0x140b44u;
    // NOP
    // 0x140b48: 0x27bdfff0
    ctx->pc = 0x140b48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x140b4c: 0x3c020026
    ctx->pc = 0x140b4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x140b50: 0xffb00000
    ctx->pc = 0x140b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x140b54: 0x3c100026
    ctx->pc = 0x140b54u;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
    // 0x140b58: 0x24424600
    ctx->pc = 0x140b58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17920));
    // 0x140b5c: 0xffbf0008
    ctx->pc = 0x140b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x140b60: 0x26104700
    ctx->pc = 0x140b60u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 18176));
    // 0x140b64: 0xac440000
    ctx->pc = 0x140b64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x140b68: 0xac450004
    ctx->pc = 0x140b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x140b6c: 0x40282d
    ctx->pc = 0x140b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b70: 0x200382d
    ctx->pc = 0x140b70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b74: 0x24040021
    ctx->pc = 0x140b74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 33));
    // 0x140b78: 0x24060002
    ctx->pc = 0x140b78u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x140b7c: 0xc04e518
    ctx->pc = 0x140B7Cu;
    SET_GPR_U32(ctx, 31, 0x140B84u);
    ctx->pc = 0x140B80u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x139460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139460_0x139460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140B84u; }
    }
    if (ctx->pc != 0x140B84u) { return; }
    ctx->pc = 0x140B84u;
    // 0x140b84: 0x8e020000
    ctx->pc = 0x140b84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x140b88: 0xdfbf0008
    ctx->pc = 0x140b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x140b8c: 0xdfb00000
    ctx->pc = 0x140b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140b90: 0x3e00008
    ctx->pc = 0x140B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140B94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140A68u: goto label_140a68;
            case 0x140A80u: goto label_140a80;
            case 0x140A90u: goto label_140a90;
            case 0x140AC8u: goto label_140ac8;
            case 0x140AD0u: goto label_140ad0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140B98u;
}
