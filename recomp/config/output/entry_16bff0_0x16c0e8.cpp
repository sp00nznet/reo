#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_16bff0
// Address: 0x16bff0 - 0x16c0e8
void entry_16bff0_0x16c0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16bff0u;

    // 0x16bff0: 0x27bdfff0
    ctx->pc = 0x16bff0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16bff4: 0xffb00000
    ctx->pc = 0x16bff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16bff8: 0xffbf0008
    ctx->pc = 0x16bff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16bffc: 0xc05a78c
    ctx->pc = 0x16BFFCu;
    SET_GPR_U32(ctx, 31, 0x16C004u);
    ctx->pc = 0x16C000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C004u; }
    }
    if (ctx->pc != 0x16C004u) { return; }
    ctx->pc = 0x16C004u;
    // 0x16c004: 0x3c05ff00
    ctx->pc = 0x16c004u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16c008: 0x200202d
    ctx->pc = 0x16c008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c00c: 0x10400008
    ctx->pc = 0x16C00Cu;
    {
        const bool branch_taken_0x16c00c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C010u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 387));
        if (branch_taken_0x16c00c) {
            ctx->pc = 0x16C030u;
            goto label_16c030;
        }
    }
    ctx->pc = 0x16C014u;
    // 0x16c014: 0xc05a704
    ctx->pc = 0x16C014u;
    SET_GPR_U32(ctx, 31, 0x16C01Cu);
    ctx->pc = 0x16C018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C01Cu; }
    }
    if (ctx->pc != 0x16C01Cu) { return; }
    ctx->pc = 0x16C01Cu;
    // 0x16c01c: 0x102d
    ctx->pc = 0x16c01cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c020: 0xdfb00000
    ctx->pc = 0x16c020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c024: 0xdfbf0008
    ctx->pc = 0x16c024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c028: 0x3e00008
    ctx->pc = 0x16C028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C02Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C030u: goto label_16c030;
            case 0x16C0B0u: goto label_16c0b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C030u;
label_16c030:
    // 0x16c030: 0xdfb00000
    ctx->pc = 0x16c030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c034: 0xdfbf0008
    ctx->pc = 0x16c034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c038: 0x805c212
    ctx->pc = 0x16C038u;
    ctx->pc = 0x16C03Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x170848u;
    entry_170848_0x170980(rdram, ctx, runtime); return;
    ctx->pc = 0x16C040u;
    // 0x16c040: 0x27bdffd0
    ctx->pc = 0x16c040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16c044: 0xffb00000
    ctx->pc = 0x16c044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c048: 0xc0802d
    ctx->pc = 0x16c048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c04c: 0xffb10008
    ctx->pc = 0x16c04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16c050: 0xe0882d
    ctx->pc = 0x16c050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c054: 0xffb20010
    ctx->pc = 0x16c054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16c058: 0x100902d
    ctx->pc = 0x16c058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c05c: 0xffb30018
    ctx->pc = 0x16c05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16c060: 0x80982d
    ctx->pc = 0x16c060u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c064: 0xffb40020
    ctx->pc = 0x16c064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16c068: 0xffbf0028
    ctx->pc = 0x16c068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x16c06c: 0xc05a78c
    ctx->pc = 0x16C06Cu;
    SET_GPR_U32(ctx, 31, 0x16C074u);
    ctx->pc = 0x16C070u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C074u; }
    }
    if (ctx->pc != 0x16C074u) { return; }
    ctx->pc = 0x16C074u;
    // 0x16c074: 0x3c05ff00
    ctx->pc = 0x16c074u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16c078: 0x200302d
    ctx->pc = 0x16c078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c07c: 0x220382d
    ctx->pc = 0x16c07cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c080: 0x240402d
    ctx->pc = 0x16c080u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c084: 0x202d
    ctx->pc = 0x16c084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c088: 0x10400009
    ctx->pc = 0x16C088u;
    {
        const bool branch_taken_0x16c088 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C08Cu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 388));
        if (branch_taken_0x16c088) {
            ctx->pc = 0x16C0B0u;
            goto label_16c0b0;
        }
    }
    ctx->pc = 0x16C090u;
    // 0x16c090: 0xdfb00000
    ctx->pc = 0x16c090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c094: 0xdfb10008
    ctx->pc = 0x16c094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c098: 0xdfb20010
    ctx->pc = 0x16c098u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c09c: 0xdfb30018
    ctx->pc = 0x16c09cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16c0a0: 0xdfb40020
    ctx->pc = 0x16c0a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c0a4: 0xdfbf0028
    ctx->pc = 0x16c0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16c0a8: 0x805a704
    ctx->pc = 0x16C0A8u;
    ctx->pc = 0x16C0ACu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16C0B0u;
label_16c0b0:
    // 0x16c0b0: 0x8e621b30
    ctx->pc = 0x16c0b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 6960)));
    // 0x16c0b4: 0x280282d
    ctx->pc = 0x16c0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c0b8: 0xc05652e
    ctx->pc = 0x16C0B8u;
    SET_GPR_U32(ctx, 31, 0x16C0C0u);
    ctx->pc = 0x16C0BCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1594B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001594B8_0x1594b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0C0u; }
    }
    if (ctx->pc != 0x16C0C0u) { return; }
    ctx->pc = 0x16C0C0u;
    // 0x16c0c0: 0x102d
    ctx->pc = 0x16c0c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c0c4: 0xdfb00000
    ctx->pc = 0x16c0c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c0c8: 0xdfb10008
    ctx->pc = 0x16c0c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c0cc: 0xdfb20010
    ctx->pc = 0x16c0ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c0d0: 0xdfb30018
    ctx->pc = 0x16c0d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16c0d4: 0xdfb40020
    ctx->pc = 0x16c0d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c0d8: 0xdfbf0028
    ctx->pc = 0x16c0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16c0dc: 0x3e00008
    ctx->pc = 0x16C0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C0E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C030u: goto label_16c030;
            case 0x16C0B0u: goto label_16c0b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C0E4u;
    // 0x16c0e4: 0x0
    ctx->pc = 0x16c0e4u;
    // NOP
}
