#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016FEA8
// Address: 0x16fea8 - 0x16ffc0
void sub_0016FEA8_0x16fea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16fea8u;

    // 0x16fea8: 0x27bdfff0
    ctx->pc = 0x16fea8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16feac: 0xffbf0000
    ctx->pc = 0x16feacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16feb0: 0xdfbf0000
    ctx->pc = 0x16feb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16feb4: 0x8056d8a
    ctx->pc = 0x16FEB4u;
    ctx->pc = 0x16FEB8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x15B628u;
    entry_15b628_0x15b690(rdram, ctx, runtime); return;
    ctx->pc = 0x16FEBCu;
    // 0x16febc: 0x0
    ctx->pc = 0x16febcu;
    // NOP
    // 0x16fec0: 0x3e00008
    ctx->pc = 0x16FEC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FEC4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16FF60u: goto label_16ff60;
            case 0x16FF88u: goto label_16ff88;
            case 0x16FFA8u: goto label_16ffa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16FEC8u;
    // 0x16fec8: 0x3e00008
    ctx->pc = 0x16FEC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FECCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16FF60u: goto label_16ff60;
            case 0x16FF88u: goto label_16ff88;
            case 0x16FFA8u: goto label_16ffa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16FED0u;
    // 0x16fed0: 0x3e00008
    ctx->pc = 0x16FED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FED4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16FF60u: goto label_16ff60;
            case 0x16FF88u: goto label_16ff88;
            case 0x16FFA8u: goto label_16ffa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16FED8u;
    // 0x16fed8: 0x3e00008
    ctx->pc = 0x16FED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FEDCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16FF60u: goto label_16ff60;
            case 0x16FF88u: goto label_16ff88;
            case 0x16FFA8u: goto label_16ffa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16FEE0u;
    // 0x16fee0: 0x27bdfff0
    ctx->pc = 0x16fee0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16fee4: 0x3c05ff00
    ctx->pc = 0x16fee4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16fee8: 0xffbf0000
    ctx->pc = 0x16fee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16feec: 0x34a50f0d
    ctx->pc = 0x16feecu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3853));
    // 0x16fef0: 0xdfbf0000
    ctx->pc = 0x16fef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fef4: 0x805a704
    ctx->pc = 0x16FEF4u;
    ctx->pc = 0x16FEF8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16FEFCu;
    // 0x16fefc: 0x0
    ctx->pc = 0x16fefcu;
    // NOP
    // 0x16ff00: 0x27bdfff0
    ctx->pc = 0x16ff00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ff04: 0x3c05ff00
    ctx->pc = 0x16ff04u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16ff08: 0xffbf0000
    ctx->pc = 0x16ff08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ff0c: 0x34a50f0d
    ctx->pc = 0x16ff0cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3853));
    // 0x16ff10: 0xdfbf0000
    ctx->pc = 0x16ff10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ff14: 0x805a704
    ctx->pc = 0x16FF14u;
    ctx->pc = 0x16FF18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16FF1Cu;
    // 0x16ff1c: 0x0
    ctx->pc = 0x16ff1cu;
    // NOP
    // 0x16ff20: 0x27bdffd0
    ctx->pc = 0x16ff20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16ff24: 0xffb00010
    ctx->pc = 0x16ff24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16ff28: 0x80802d
    ctx->pc = 0x16ff28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff2c: 0xffb10018
    ctx->pc = 0x16ff2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16ff30: 0xa0882d
    ctx->pc = 0x16ff30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff34: 0xffb20020
    ctx->pc = 0x16ff34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16ff38: 0xffbf0028
    ctx->pc = 0x16ff38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x16ff3c: 0xc05c164
    ctx->pc = 0x16FF3Cu;
    SET_GPR_U32(ctx, 31, 0x16FF44u);
    ctx->pc = 0x16FF40u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 3264));
    ctx->pc = 0x170590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00170590_0x170590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FF44u; }
    }
    if (ctx->pc != 0x16FF44u) { return; }
    ctx->pc = 0x16FF44u;
    // 0x16ff44: 0x2403ffff
    ctx->pc = 0x16ff44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ff48: 0x3a0282d
    ctx->pc = 0x16ff48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff4c: 0x14430004
    ctx->pc = 0x16FF4Cu;
    {
        const bool branch_taken_0x16ff4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x16FF50u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ff4c) {
            ctx->pc = 0x16FF60u;
            goto label_16ff60;
        }
    }
    ctx->pc = 0x16FF54u;
    // 0x16ff54: 0xae200000
    ctx->pc = 0x16ff54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x16ff58: 0x10000013
    ctx->pc = 0x16FF58u;
    {
        const bool branch_taken_0x16ff58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16FF5Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ff58) {
            ctx->pc = 0x16FFA8u;
            goto label_16ffa8;
        }
    }
    ctx->pc = 0x16FF60u;
label_16ff60:
    // 0x16ff60: 0xc05c1d8
    ctx->pc = 0x16FF60u;
    SET_GPR_U32(ctx, 31, 0x16FF68u);
    ctx->pc = 0x170760u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00170760_0x170760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FF68u; }
    }
    if (ctx->pc != 0x16FF68u) { return; }
    ctx->pc = 0x16FF68u;
    // 0x16ff68: 0x200202d
    ctx->pc = 0x16ff68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff6c: 0x40182d
    ctx->pc = 0x16ff6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff70: 0x220302d
    ctx->pc = 0x16ff70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff74: 0x14600004
    ctx->pc = 0x16FF74u;
    {
        const bool branch_taken_0x16ff74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x16FF78u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ff74) {
            ctx->pc = 0x16FF88u;
            goto label_16ff88;
        }
    }
    ctx->pc = 0x16FF7Cu;
    // 0x16ff7c: 0x1000000a
    ctx->pc = 0x16FF7Cu;
    {
        const bool branch_taken_0x16ff7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16FF80u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x16ff7c) {
            ctx->pc = 0x16FFA8u;
            goto label_16ffa8;
        }
    }
    ctx->pc = 0x16FF84u;
    // 0x16ff84: 0x0
    ctx->pc = 0x16ff84u;
    // NOP
label_16ff88:
    // 0x16ff88: 0xc05bff0
    ctx->pc = 0x16FF88u;
    SET_GPR_U32(ctx, 31, 0x16FF90u);
    ctx->pc = 0x16FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016FFC0_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FF90u; }
    }
    if (ctx->pc != 0x16FF90u) { return; }
    ctx->pc = 0x16FF90u;
    // 0x16ff90: 0x102d
    ctx->pc = 0x16ff90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff94: 0x8e230000
    ctx->pc = 0x16ff94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16ff98: 0x8c640014
    ctx->pc = 0x16ff98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x16ff9c: 0xae440238
    ctx->pc = 0x16ff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 568), GPR_U32(ctx, 4));
    // 0x16ffa0: 0x8c650018
    ctx->pc = 0x16ffa0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16ffa4: 0xae45023c
    ctx->pc = 0x16ffa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 572), GPR_U32(ctx, 5));
label_16ffa8:
    // 0x16ffa8: 0xdfb00010
    ctx->pc = 0x16ffa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ffac: 0xdfb10018
    ctx->pc = 0x16ffacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ffb0: 0xdfb20020
    ctx->pc = 0x16ffb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ffb4: 0xdfbf0028
    ctx->pc = 0x16ffb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16ffb8: 0x3e00008
    ctx->pc = 0x16FFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FFBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16FF60u: goto label_16ff60;
            case 0x16FF88u: goto label_16ff88;
            case 0x16FFA8u: goto label_16ffa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16FFC0u;
}
