#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001775E0
// Address: 0x1775e0 - 0x177698
void sub_001775E0_0x1775e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1775e0u;

    // 0x1775e0: 0x27bdffd0
    ctx->pc = 0x1775e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1775e4: 0xffb30018
    ctx->pc = 0x1775e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1775e8: 0x8cd30000
    ctx->pc = 0x1775e8u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1775ec: 0xffbf0028
    ctx->pc = 0x1775ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1775f0: 0xffb00000
    ctx->pc = 0x1775f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1775f4: 0xa0802d
    ctx->pc = 0x1775f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775f8: 0xffb10008
    ctx->pc = 0x1775f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1775fc: 0x260882d
    ctx->pc = 0x1775fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177600: 0xffb20010
    ctx->pc = 0x177600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x177604: 0x24120008
    ctx->pc = 0x177604u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 8));
    // 0x177608: 0xffb40020
    ctx->pc = 0x177608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17760c: 0x80a02d
    ctx->pc = 0x17760cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177610: 0xae000008
    ctx->pc = 0x177610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x177614: 0x0
    ctx->pc = 0x177614u;
    // NOP
label_177618:
    // 0x177618: 0x200202d
    ctx->pc = 0x177618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17761c: 0x2652ffff
    ctx->pc = 0x17761cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x177620: 0x26100044
    ctx->pc = 0x177620u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 68));
    // 0x177624: 0x8e250000
    ctx->pc = 0x177624u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x177628: 0xc05dda6
    ctx->pc = 0x177628u;
    SET_GPR_U32(ctx, 31, 0x177630u);
    ctx->pc = 0x17762Cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
    ctx->pc = 0x177698u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177698_0x177698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177630u; }
    }
    if (ctx->pc != 0x177630u) { return; }
    ctx->pc = 0x177630u;
    // 0x177630: 0x643fff9
    ctx->pc = 0x177630u;
    {
        const bool branch_taken_0x177630 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x177630) {
            ctx->pc = 0x177634u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
            ctx->pc = 0x177618u;
            goto label_177618;
        }
    }
    ctx->pc = 0x177638u;
    // 0x177638: 0x260282d
    ctx->pc = 0x177638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17763c: 0xc05ddb8
    ctx->pc = 0x17763Cu;
    SET_GPR_U32(ctx, 31, 0x177644u);
    ctx->pc = 0x177640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1776E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001776E0_0x1776e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177644u; }
    }
    if (ctx->pc != 0x177644u) { return; }
    ctx->pc = 0x177644u;
    // 0x177644: 0x1040000c
    ctx->pc = 0x177644u;
    {
        const bool branch_taken_0x177644 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x177648u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x177644) {
            ctx->pc = 0x177678u;
            goto label_177678;
        }
    }
    ctx->pc = 0x17764Cu;
    // 0x17764c: 0xdfb40020
    ctx->pc = 0x17764cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177650: 0x3c05ff00
    ctx->pc = 0x177650u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x177654: 0xdfb00000
    ctx->pc = 0x177654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177658: 0xdfb10008
    ctx->pc = 0x177658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17765c: 0x34a50302
    ctx->pc = 0x17765cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 770));
    // 0x177660: 0xdfb20010
    ctx->pc = 0x177660u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177664: 0xdfb30018
    ctx->pc = 0x177664u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177668: 0xdfbf0028
    ctx->pc = 0x177668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17766c: 0x805a704
    ctx->pc = 0x17766Cu;
    ctx->pc = 0x177670u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x177674u;
    // 0x177674: 0x0
    ctx->pc = 0x177674u;
    // NOP
label_177678:
    // 0x177678: 0xdfb00000
    ctx->pc = 0x177678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17767c: 0xdfb10008
    ctx->pc = 0x17767cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177680: 0xdfb20010
    ctx->pc = 0x177680u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177684: 0xdfb30018
    ctx->pc = 0x177684u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177688: 0xdfb40020
    ctx->pc = 0x177688u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17768c: 0xdfbf0028
    ctx->pc = 0x17768cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177690: 0x3e00008
    ctx->pc = 0x177690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177694u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177618u: goto label_177618;
            case 0x177678u: goto label_177678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x177698u;
}
