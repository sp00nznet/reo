#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CF5F0
// Address: 0x1cf5f0 - 0x1cf6b0
void sub_001CF5F0_0x1cf5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cf5f0u;

    // 0x1cf5f0: 0x8c8a0808
    ctx->pc = 0x1cf5f0u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 2056)));
    // 0x1cf5f4: 0x15400003
    ctx->pc = 0x1CF5F4u;
    {
        const bool branch_taken_0x1cf5f4 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF5F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cf5f4) {
            ctx->pc = 0x1CF604u;
            goto label_1cf604;
        }
    }
    ctx->pc = 0x1CF5FCu;
    // 0x1cf5fc: 0x10000028
    ctx->pc = 0x1CF5FCu;
    {
        const bool branch_taken_0x1cf5fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cf5fc) {
            ctx->pc = 0x1CF6A0u;
            goto label_1cf6a0;
        }
    }
    ctx->pc = 0x1CF604u;
label_1cf604:
    // 0x1cf604: 0x94880812
    ctx->pc = 0x1cf604u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2066)));
    // 0x1cf608: 0x1d000003
    ctx->pc = 0x1CF608u;
    {
        const bool branch_taken_0x1cf608 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x1CF60Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cf608) {
            ctx->pc = 0x1CF618u;
            goto label_1cf618;
        }
    }
    ctx->pc = 0x1CF610u;
    // 0x1cf610: 0x10000023
    ctx->pc = 0x1CF610u;
    {
        const bool branch_taken_0x1cf610 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cf610) {
            ctx->pc = 0x1CF6A0u;
            goto label_1cf6a0;
        }
    }
    ctx->pc = 0x1CF618u;
label_1cf618:
    // 0x1cf618: 0x8ca40808
    ctx->pc = 0x1cf618u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 2056)));
    // 0x1cf61c: 0x14800003
    ctx->pc = 0x1CF61Cu;
    {
        const bool branch_taken_0x1cf61c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF620u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cf61c) {
            ctx->pc = 0x1CF62Cu;
            goto label_1cf62c;
        }
    }
    ctx->pc = 0x1CF624u;
    // 0x1cf624: 0x1000001e
    ctx->pc = 0x1CF624u;
    {
        const bool branch_taken_0x1cf624 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cf624) {
            ctx->pc = 0x1CF6A0u;
            goto label_1cf6a0;
        }
    }
    ctx->pc = 0x1CF62Cu;
label_1cf62c:
    // 0x1cf62c: 0x94a70812
    ctx->pc = 0x1cf62cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2066)));
    // 0x1cf630: 0x1ce00003
    ctx->pc = 0x1CF630u;
    {
        const bool branch_taken_0x1cf630 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1CF634u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cf630) {
            ctx->pc = 0x1CF640u;
            goto label_1cf640;
        }
    }
    ctx->pc = 0x1CF638u;
    // 0x1cf638: 0x10000019
    ctx->pc = 0x1CF638u;
    {
        const bool branch_taken_0x1cf638 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF63Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cf638) {
            ctx->pc = 0x1CF6A0u;
            goto label_1cf6a0;
        }
    }
    ctx->pc = 0x1CF640u;
label_1cf640:
    // 0x1cf640: 0x10000015
    ctx->pc = 0x1CF640u;
    {
        const bool branch_taken_0x1cf640 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF644u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 8)));
        if (branch_taken_0x1cf640) {
            ctx->pc = 0x1CF698u;
            goto label_1cf698;
        }
    }
    ctx->pc = 0x1CF648u;
label_1cf648:
    // 0x1cf648: 0x8d430000
    ctx->pc = 0x1cf648u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1cf64c: 0x1060000f
    ctx->pc = 0x1CF64Cu;
    {
        const bool branch_taken_0x1cf64c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF650u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cf64c) {
            ctx->pc = 0x1CF68Cu;
            goto label_1cf68c;
        }
    }
    ctx->pc = 0x1CF654u;
    // 0x1cf654: 0x1000000a
    ctx->pc = 0x1CF654u;
    {
        const bool branch_taken_0x1cf654 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF658u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cf654) {
            ctx->pc = 0x1CF680u;
            goto label_1cf680;
        }
    }
    ctx->pc = 0x1CF65Cu;
label_1cf65c:
    // 0x1cf65c: 0x8d220000
    ctx->pc = 0x1cf65cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1cf660: 0x10400005
    ctx->pc = 0x1CF660u;
    {
        const bool branch_taken_0x1cf660 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cf660) {
            ctx->pc = 0x1CF678u;
            goto label_1cf678;
        }
    }
    ctx->pc = 0x1CF668u;
    // 0x1cf668: 0x14620003
    ctx->pc = 0x1CF668u;
    {
        const bool branch_taken_0x1cf668 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1cf668) {
            ctx->pc = 0x1CF678u;
            goto label_1cf678;
        }
    }
    ctx->pc = 0x1CF670u;
    // 0x1cf670: 0x1000000b
    ctx->pc = 0x1CF670u;
    {
        const bool branch_taken_0x1cf670 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF674u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1cf670) {
            ctx->pc = 0x1CF6A0u;
            goto label_1cf6a0;
        }
    }
    ctx->pc = 0x1CF678u;
label_1cf678:
    // 0x1cf678: 0x24a50001
    ctx->pc = 0x1cf678u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cf67c: 0x25290098
    ctx->pc = 0x1cf67cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 152));
label_1cf680:
    // 0x1cf680: 0xa7102a
    ctx->pc = 0x1cf680u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 7)));
    // 0x1cf684: 0x1440fff5
    ctx->pc = 0x1CF684u;
    {
        const bool branch_taken_0x1cf684 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cf684) {
            ctx->pc = 0x1CF65Cu;
            goto label_1cf65c;
        }
    }
    ctx->pc = 0x1CF68Cu;
label_1cf68c:
    // 0x1cf68c: 0x24c60001
    ctx->pc = 0x1cf68cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1cf690: 0x254a0098
    ctx->pc = 0x1cf690u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 152));
    // 0x1cf694: 0xc8102a
    ctx->pc = 0x1cf694u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 8)));
label_1cf698:
    // 0x1cf698: 0x1440ffeb
    ctx->pc = 0x1CF698u;
    {
        const bool branch_taken_0x1cf698 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF69Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cf698) {
            ctx->pc = 0x1CF648u;
            goto label_1cf648;
        }
    }
    ctx->pc = 0x1CF6A0u;
label_1cf6a0:
    // 0x1cf6a0: 0x3e00008
    ctx->pc = 0x1CF6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CF604u: goto label_1cf604;
            case 0x1CF618u: goto label_1cf618;
            case 0x1CF62Cu: goto label_1cf62c;
            case 0x1CF640u: goto label_1cf640;
            case 0x1CF648u: goto label_1cf648;
            case 0x1CF65Cu: goto label_1cf65c;
            case 0x1CF678u: goto label_1cf678;
            case 0x1CF680u: goto label_1cf680;
            case 0x1CF68Cu: goto label_1cf68c;
            case 0x1CF698u: goto label_1cf698;
            case 0x1CF6A0u: goto label_1cf6a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CF6A8u;
    // 0x1cf6a8: 0x0
    ctx->pc = 0x1cf6a8u;
    // NOP
    // 0x1cf6ac: 0x0
    ctx->pc = 0x1cf6acu;
    // NOP
}
