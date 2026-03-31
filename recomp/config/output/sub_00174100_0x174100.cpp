#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00174100
// Address: 0x174100 - 0x1741a0
void sub_00174100_0x174100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x174100u;

    // 0x174100: 0xac800010
    ctx->pc = 0x174100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x174104: 0xac800000
    ctx->pc = 0x174104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x174108: 0xac800004
    ctx->pc = 0x174108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x17410c: 0xac800008
    ctx->pc = 0x17410cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x174110: 0x3e00008
    ctx->pc = 0x174110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174114u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174178u: goto label_174178;
            case 0x174184u: goto label_174184;
            case 0x174188u: goto label_174188;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174118u;
    // 0x174118: 0x27bdffe0
    ctx->pc = 0x174118u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17411c: 0xffb10008
    ctx->pc = 0x17411cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x174120: 0xa0882d
    ctx->pc = 0x174120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174124: 0xffb00000
    ctx->pc = 0x174124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174128: 0xc0802d
    ctx->pc = 0x174128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17412c: 0xffb20010
    ctx->pc = 0x17412cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x174130: 0x80902d
    ctx->pc = 0x174130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174134: 0x12200013
    ctx->pc = 0x174134u;
    {
        const bool branch_taken_0x174134 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x174138u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x174134) {
            ctx->pc = 0x174184u;
            goto label_174184;
        }
    }
    ctx->pc = 0x17413Cu;
    // 0x17413c: 0x1a000012
    ctx->pc = 0x17413Cu;
    {
        const bool branch_taken_0x17413c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x174140u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17413c) {
            ctx->pc = 0x174188u;
            goto label_174188;
        }
    }
    ctx->pc = 0x174144u;
    // 0x174144: 0xc05a78c
    ctx->pc = 0x174144u;
    SET_GPR_U32(ctx, 31, 0x17414Cu);
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17414Cu; }
    }
    if (ctx->pc != 0x17414Cu) { return; }
    ctx->pc = 0x17414Cu;
    // 0x17414c: 0x3c05ff00
    ctx->pc = 0x17414cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x174150: 0x202d
    ctx->pc = 0x174150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174154: 0x34a50165
    ctx->pc = 0x174154u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 357));
    // 0x174158: 0x10400007
    ctx->pc = 0x174158u;
    {
        const bool branch_taken_0x174158 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17415Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174158) {
            ctx->pc = 0x174178u;
            goto label_174178;
        }
    }
    ctx->pc = 0x174160u;
    // 0x174160: 0xdfb00000
    ctx->pc = 0x174160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174164: 0xdfb10008
    ctx->pc = 0x174164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174168: 0xdfb20010
    ctx->pc = 0x174168u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17416c: 0xdfbf0018
    ctx->pc = 0x17416cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174170: 0x805a704
    ctx->pc = 0x174170u;
    ctx->pc = 0x174174u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x174178u;
label_174178:
    // 0x174178: 0x264411ec
    ctx->pc = 0x174178u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 4588));
    // 0x17417c: 0xc05d068
    ctx->pc = 0x17417Cu;
    SET_GPR_U32(ctx, 31, 0x174184u);
    ctx->pc = 0x174180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1741A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001741A0_0x1741a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174184u; }
    }
    if (ctx->pc != 0x174184u) { return; }
    ctx->pc = 0x174184u;
label_174184:
    // 0x174184: 0x102d
    ctx->pc = 0x174184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174188:
    // 0x174188: 0xdfb00000
    ctx->pc = 0x174188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17418c: 0xdfb10008
    ctx->pc = 0x17418cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174190: 0xdfb20010
    ctx->pc = 0x174190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174194: 0xdfbf0018
    ctx->pc = 0x174194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174198: 0x3e00008
    ctx->pc = 0x174198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17419Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174178u: goto label_174178;
            case 0x174184u: goto label_174184;
            case 0x174188u: goto label_174188;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1741A0u;
}
