#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001722C0
// Address: 0x1722c0 - 0x172340
void sub_001722C0_0x1722c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1722c0u;

    // 0x1722c0: 0x24030003
    ctx->pc = 0x1722c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1722c4: 0x102d
    ctx->pc = 0x1722c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1722c8: 0x3e00008
    ctx->pc = 0x1722C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1722CCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172310u: goto label_172310;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1722D0u;
    // 0x1722d0: 0x27bdffe0
    ctx->pc = 0x1722d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1722d4: 0xffb00000
    ctx->pc = 0x1722d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1722d8: 0x80802d
    ctx->pc = 0x1722d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1722dc: 0xffb10008
    ctx->pc = 0x1722dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1722e0: 0xffbf0010
    ctx->pc = 0x1722e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1722e4: 0xc05a78c
    ctx->pc = 0x1722E4u;
    SET_GPR_U32(ctx, 31, 0x1722ECu);
    ctx->pc = 0x1722E8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1722ECu; }
    }
    if (ctx->pc != 0x1722ECu) { return; }
    ctx->pc = 0x1722ECu;
    // 0x1722ec: 0x3c05ff00
    ctx->pc = 0x1722ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1722f0: 0x10400007
    ctx->pc = 0x1722F0u;
    {
        const bool branch_taken_0x1722f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1722F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1722f0) {
            ctx->pc = 0x172310u;
            goto label_172310;
        }
    }
    ctx->pc = 0x1722F8u;
    // 0x1722f8: 0xdfb00000
    ctx->pc = 0x1722f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1722fc: 0x34a50144
    ctx->pc = 0x1722fcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 324));
    // 0x172300: 0xdfb10008
    ctx->pc = 0x172300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172304: 0xdfbf0010
    ctx->pc = 0x172304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172308: 0x805a704
    ctx->pc = 0x172308u;
    ctx->pc = 0x17230Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x172310u;
label_172310:
    // 0x172310: 0x200202d
    ctx->pc = 0x172310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172314: 0xc05dd10
    ctx->pc = 0x172314u;
    SET_GPR_U32(ctx, 31, 0x17231Cu);
    ctx->pc = 0x172318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177440_0x177440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17231Cu; }
    }
    if (ctx->pc != 0x17231Cu) { return; }
    ctx->pc = 0x17231Cu;
    // 0x17231c: 0x200202d
    ctx->pc = 0x17231cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172320: 0xc0598d4
    ctx->pc = 0x172320u;
    SET_GPR_U32(ctx, 31, 0x172328u);
    ctx->pc = 0x172324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x166350u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166350_0x166350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172328u; }
    }
    if (ctx->pc != 0x172328u) { return; }
    ctx->pc = 0x172328u;
    // 0x172328: 0x102d
    ctx->pc = 0x172328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17232c: 0xdfb00000
    ctx->pc = 0x17232cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172330: 0xdfb10008
    ctx->pc = 0x172330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172334: 0xdfbf0010
    ctx->pc = 0x172334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172338: 0x3e00008
    ctx->pc = 0x172338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17233Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172310u: goto label_172310;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172340u;
}
