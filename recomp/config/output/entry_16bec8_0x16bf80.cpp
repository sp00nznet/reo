#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_16bec8
// Address: 0x16bec8 - 0x16bf80
void entry_16bec8_0x16bf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16bec8u;

    // 0x16bec8: 0x27bdffe0
    ctx->pc = 0x16bec8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16becc: 0x182d
    ctx->pc = 0x16beccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bed0: 0xffb00000
    ctx->pc = 0x16bed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16bed4: 0x80802d
    ctx->pc = 0x16bed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bed8: 0xffb10008
    ctx->pc = 0x16bed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16bedc: 0xa0882d
    ctx->pc = 0x16bedcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bee0: 0xffb20010
    ctx->pc = 0x16bee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16bee4: 0xc0902d
    ctx->pc = 0x16bee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bee8: 0x1200000f
    ctx->pc = 0x16BEE8u;
    {
        const bool branch_taken_0x16bee8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BEECu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x16bee8) {
            ctx->pc = 0x16BF28u;
            goto label_16bf28;
        }
    }
    ctx->pc = 0x16BEF0u;
    // 0x16bef0: 0xc05a78c
    ctx->pc = 0x16BEF0u;
    SET_GPR_U32(ctx, 31, 0x16BEF8u);
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BEF8u; }
    }
    if (ctx->pc != 0x16BEF8u) { return; }
    ctx->pc = 0x16BEF8u;
    // 0x16bef8: 0x3c05ff00
    ctx->pc = 0x16bef8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16befc: 0x10400008
    ctx->pc = 0x16BEFCu;
    {
        const bool branch_taken_0x16befc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BF00u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16befc) {
            ctx->pc = 0x16BF20u;
            goto label_16bf20;
        }
    }
    ctx->pc = 0x16BF04u;
    // 0x16bf04: 0xdfb00000
    ctx->pc = 0x16bf04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bf08: 0x34a50181
    ctx->pc = 0x16bf08u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 385));
    // 0x16bf0c: 0xdfb10008
    ctx->pc = 0x16bf0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16bf10: 0xdfb20010
    ctx->pc = 0x16bf10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bf14: 0xdfbf0018
    ctx->pc = 0x16bf14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16bf18: 0x805a704
    ctx->pc = 0x16BF18u;
    ctx->pc = 0x16BF1Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16BF20u;
label_16bf20:
    // 0x16bf20: 0x8e021b30
    ctx->pc = 0x16bf20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6960)));
    // 0x16bf24: 0x8c430000
    ctx->pc = 0x16bf24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16bf28:
    // 0x16bf28: 0x3a220005
    ctx->pc = 0x16bf28u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 17), 5));
    // 0x16bf2c: 0x302d
    ctx->pc = 0x16bf2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf30: 0x60202d
    ctx->pc = 0x16bf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf34: 0x220282d
    ctx->pc = 0x16bf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf38: 0xc056daa
    ctx->pc = 0x16BF38u;
    SET_GPR_U32(ctx, 31, 0x16BF40u);
    ctx->pc = 0x16BF3Cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 18));
    ctx->pc = 0x15B6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B6A8_0x15b6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF40u; }
    }
    if (ctx->pc != 0x16BF40u) { return; }
    ctx->pc = 0x16BF40u;
    // 0x16bf40: 0x3c05ff00
    ctx->pc = 0x16bf40u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16bf44: 0x10400008
    ctx->pc = 0x16BF44u;
    {
        const bool branch_taken_0x16bf44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BF48u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16bf44) {
            ctx->pc = 0x16BF68u;
            goto label_16bf68;
        }
    }
    ctx->pc = 0x16BF4Cu;
    // 0x16bf4c: 0xdfb00000
    ctx->pc = 0x16bf4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bf50: 0x34a50f12
    ctx->pc = 0x16bf50u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3858));
    // 0x16bf54: 0xdfb10008
    ctx->pc = 0x16bf54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16bf58: 0xdfb20010
    ctx->pc = 0x16bf58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bf5c: 0xdfbf0018
    ctx->pc = 0x16bf5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16bf60: 0x805a704
    ctx->pc = 0x16BF60u;
    ctx->pc = 0x16BF64u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16BF68u;
label_16bf68:
    // 0x16bf68: 0xdfb00000
    ctx->pc = 0x16bf68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bf6c: 0xdfb10008
    ctx->pc = 0x16bf6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16bf70: 0xdfb20010
    ctx->pc = 0x16bf70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bf74: 0xdfbf0018
    ctx->pc = 0x16bf74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16bf78: 0x3e00008
    ctx->pc = 0x16BF78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BF7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16BF20u: goto label_16bf20;
            case 0x16BF28u: goto label_16bf28;
            case 0x16BF68u: goto label_16bf68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16BF80u;
}
