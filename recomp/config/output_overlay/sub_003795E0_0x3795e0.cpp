#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_003795E0
// Address: 0x3795e0 - 0x379660
void sub_003795E0_0x3795e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3795e0u;

    // 0x3795e0: 0x502d
    ctx->pc = 0x3795e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3795e4: 0x4e10003
    ctx->pc = 0x3795E4u;
    {
        const bool branch_taken_0x3795e4 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x3795E8u;
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 7), 4));
        if (branch_taken_0x3795e4) {
            ctx->pc = 0x3795F4u;
            goto label_3795f4;
        }
    }
    ctx->pc = 0x3795ECu;
    // 0x3795ec: 0x24e3000f
    ctx->pc = 0x3795ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 15));
    // 0x3795f0: 0x34103
    ctx->pc = 0x3795f0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 4));
label_3795f4:
    // 0x3795f4: 0x4c10003
    ctx->pc = 0x3795F4u;
    {
        const bool branch_taken_0x3795f4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x3795F8u;
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 4));
        if (branch_taken_0x3795f4) {
            ctx->pc = 0x379604u;
            goto label_379604;
        }
    }
    ctx->pc = 0x3795FCu;
    // 0x3795fc: 0x24c3000f
    ctx->pc = 0x3795fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 15));
    // 0x379600: 0x33903
    ctx->pc = 0x379600u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
label_379604:
    // 0x379604: 0x10000010
    ctx->pc = 0x379604u;
    {
        const bool branch_taken_0x379604 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x379608u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 480));
        if (branch_taken_0x379604) {
            ctx->pc = 0x379648u;
            goto label_379648;
        }
    }
    ctx->pc = 0x37960Cu;
label_37960c:
    // 0x37960c: 0x10000005
    ctx->pc = 0x37960Cu;
    {
        const bool branch_taken_0x37960c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x379610u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37960c) {
            ctx->pc = 0x379624u;
            goto label_379624;
        }
    }
    ctx->pc = 0x379614u;
label_379614:
    // 0x379614: 0xac850054
    ctx->pc = 0x379614u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
    // 0x379618: 0x25290001
    ctx->pc = 0x379618u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x37961c: 0x24840060
    ctx->pc = 0x37961cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 96));
    // 0x379620: 0x24a50400
    ctx->pc = 0x379620u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1024));
label_379624:
    // 0x379624: 0x128182a
    ctx->pc = 0x379624u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 8)));
    // 0x379628: 0x1460fffa
    ctx->pc = 0x379628u;
    {
        const bool branch_taken_0x379628 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x379628) {
            ctx->pc = 0x379614u;
            goto label_379614;
        }
    }
    ctx->pc = 0x379630u;
    // 0x379630: 0x3c010057
    ctx->pc = 0x379630u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x379634: 0x8c23bad0
    ctx->pc = 0x379634u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294949584)));
    // 0x379638: 0x14660002
    ctx->pc = 0x379638u;
    {
        const bool branch_taken_0x379638 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 6));
        if (branch_taken_0x379638) {
            ctx->pc = 0x379644u;
            goto label_379644;
        }
    }
    ctx->pc = 0x379640u;
    // 0x379640: 0x24a50800
    ctx->pc = 0x379640u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2048));
label_379644:
    // 0x379644: 0x254a0001
    ctx->pc = 0x379644u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_379648:
    // 0x379648: 0x147182a
    ctx->pc = 0x379648u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 7)));
    // 0x37964c: 0x1460ffef
    ctx->pc = 0x37964Cu;
    {
        const bool branch_taken_0x37964c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x37964c) {
            ctx->pc = 0x37960Cu;
            goto label_37960c;
        }
    }
    ctx->pc = 0x379654u;
    // 0x379654: 0x3e00008
    ctx->pc = 0x379654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3795F4u: goto label_3795f4;
            case 0x379604u: goto label_379604;
            case 0x37960Cu: goto label_37960c;
            case 0x379614u: goto label_379614;
            case 0x379624u: goto label_379624;
            case 0x379644u: goto label_379644;
            case 0x379648u: goto label_379648;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37965Cu;
    // 0x37965c: 0x0
    ctx->pc = 0x37965cu;
    // NOP
}
