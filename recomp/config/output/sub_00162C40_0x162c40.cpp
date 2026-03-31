#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00162C40
// Address: 0x162c40 - 0x162d20
void sub_00162C40_0x162c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x162c40u;

    // 0x162c40: 0x3c020006
    ctx->pc = 0x162c40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)6 << 16));
    // 0x162c44: 0x3c030001
    ctx->pc = 0x162c44u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x162c48: 0x24072000
    ctx->pc = 0x162c48u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x162c4c: 0x3442952c
    ctx->pc = 0x162c4cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 38188));
    // 0x162c50: 0x34633c68
    ctx->pc = 0x162c50u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 15464));
    // 0x162c54: 0xac820000
    ctx->pc = 0x162c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x162c58: 0xaca30000
    ctx->pc = 0x162c58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x162c5c: 0xacc70000
    ctx->pc = 0x162c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x162c60: 0x8c820000
    ctx->pc = 0x162c60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x162c64: 0x8ca30000
    ctx->pc = 0x162c64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x162c68: 0x431021
    ctx->pc = 0x162c68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x162c6c: 0x3e00008
    ctx->pc = 0x162C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162C70u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162C90u: goto label_162c90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162C74u;
    // 0x162c74: 0x0
    ctx->pc = 0x162c74u;
    // NOP
    // 0x162c78: 0x27bdfff0
    ctx->pc = 0x162c78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162c7c: 0xffbf0000
    ctx->pc = 0x162c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162c80: 0xdfbf0000
    ctx->pc = 0x162c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162c84: 0x8058b24
    ctx->pc = 0x162C84u;
    ctx->pc = 0x162C88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x162C90u;
    goto label_162c90;
    ctx->pc = 0x162C8Cu;
    // 0x162c8c: 0x0
    ctx->pc = 0x162c8cu;
    // NOP
label_162c90:
    // 0x162c90: 0x27bdffd0
    ctx->pc = 0x162c90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x162c94: 0x302d
    ctx->pc = 0x162c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162c98: 0xffb00000
    ctx->pc = 0x162c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x162c9c: 0x249001ec
    ctx->pc = 0x162c9cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 492));
    // 0x162ca0: 0xffb30018
    ctx->pc = 0x162ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x162ca4: 0xa0982d
    ctx->pc = 0x162ca4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ca8: 0xffbf0020
    ctx->pc = 0x162ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x162cac: 0x382d
    ctx->pc = 0x162cacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162cb0: 0xffb10008
    ctx->pc = 0x162cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x162cb4: 0x402d
    ctx->pc = 0x162cb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162cb8: 0xffb20010
    ctx->pc = 0x162cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x162cbc: 0x8c910040
    ctx->pc = 0x162cbcu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x162cc0: 0x8e050010
    ctx->pc = 0x162cc0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x162cc4: 0x8e12000c
    ctx->pc = 0x162cc4u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x162cc8: 0x220202d
    ctx->pc = 0x162cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ccc: 0xc05a7fc
    ctx->pc = 0x162CCCu;
    SET_GPR_U32(ctx, 31, 0x162CD4u);
    ctx->pc = 0x162CD0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 192));
    ctx->pc = 0x169FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169FF0_0x169ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162CD4u; }
    }
    if (ctx->pc != 0x162CD4u) { return; }
    ctx->pc = 0x162CD4u;
    // 0x162cd4: 0x220202d
    ctx->pc = 0x162cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162cd8: 0x266500c0
    ctx->pc = 0x162cd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 192));
    // 0x162cdc: 0x240302d
    ctx->pc = 0x162cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ce0: 0x382d
    ctx->pc = 0x162ce0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ce4: 0xc05a7fc
    ctx->pc = 0x162CE4u;
    SET_GPR_U32(ctx, 31, 0x162CECu);
    ctx->pc = 0x162CE8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169FF0_0x169ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162CECu; }
    }
    if (ctx->pc != 0x162CECu) { return; }
    ctx->pc = 0x162CECu;
    // 0x162cec: 0xae130010
    ctx->pc = 0x162cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
    // 0x162cf0: 0xdfb10008
    ctx->pc = 0x162cf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x162cf4: 0xdfb00000
    ctx->pc = 0x162cf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162cf8: 0xdfb20010
    ctx->pc = 0x162cf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162cfc: 0xdfb30018
    ctx->pc = 0x162cfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x162d00: 0xdfbf0020
    ctx->pc = 0x162d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162d04: 0x3e00008
    ctx->pc = 0x162D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162D08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162C90u: goto label_162c90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162D0Cu;
    // 0x162d0c: 0x0
    ctx->pc = 0x162d0cu;
    // NOP
    // 0x162d10: 0x3e00008
    ctx->pc = 0x162D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162D14u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 504)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162C90u: goto label_162c90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162D18u;
    // 0x162d18: 0x3e00008
    ctx->pc = 0x162D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162D1Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 512)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162C90u: goto label_162c90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162D20u;
}
