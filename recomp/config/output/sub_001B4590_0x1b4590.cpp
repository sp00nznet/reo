#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B4590
// Address: 0x1b4590 - 0x1b4650
void sub_001B4590_0x1b4590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b4590u;

    // 0x1b4590: 0xc72821
    ctx->pc = 0x1b4590u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1b4594: 0x3c090031
    ctx->pc = 0x1b4594u;
    SET_GPR_U32(ctx, 9, ((uint32_t)49 << 16));
    // 0x1b4598: 0x3c080031
    ctx->pc = 0x1b4598u;
    SET_GPR_U32(ctx, 8, ((uint32_t)49 << 16));
    // 0x1b459c: 0x252951c0
    ctx->pc = 0x1b459cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 20928));
    // 0x1b45a0: 0x250851d0
    ctx->pc = 0x1b45a0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 20944));
    // 0x1b45a4: 0x10000015
    ctx->pc = 0x1B45A4u;
    {
        const bool branch_taken_0x1b45a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B45A8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b45a4) {
            ctx->pc = 0x1B45FCu;
            goto label_1b45fc;
        }
    }
    ctx->pc = 0x1B45ACu;
label_1b45ac:
    // 0x1b45ac: 0x85020000
    ctx->pc = 0x1b45acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1b45b0: 0x10400010
    ctx->pc = 0x1B45B0u;
    {
        const bool branch_taken_0x1b45b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b45b0) {
            ctx->pc = 0x1B45F4u;
            goto label_1b45f4;
        }
    }
    ctx->pc = 0x1B45B8u;
    // 0x1b45b8: 0x9102000b
    ctx->pc = 0x1b45b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 11)));
    // 0x1b45bc: 0x44082a
    ctx->pc = 0x1b45bcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x1b45c0: 0x1020000c
    ctx->pc = 0x1B45C0u;
    {
        const bool branch_taken_0x1b45c0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b45c0) {
            ctx->pc = 0x1B45F4u;
            goto label_1b45f4;
        }
    }
    ctx->pc = 0x1B45C8u;
    // 0x1b45c8: 0x85030004
    ctx->pc = 0x1b45c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1b45cc: 0x65082a
    ctx->pc = 0x1b45ccu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x1b45d0: 0x10200008
    ctx->pc = 0x1B45D0u;
    {
        const bool branch_taken_0x1b45d0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b45d0) {
            ctx->pc = 0x1B45F4u;
            goto label_1b45f4;
        }
    }
    ctx->pc = 0x1B45D8u;
    // 0x1b45d8: 0x91020008
    ctx->pc = 0x1b45d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1b45dc: 0x621021
    ctx->pc = 0x1b45dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b45e0: 0xc2082a
    ctx->pc = 0x1b45e0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x1b45e4: 0x10200003
    ctx->pc = 0x1B45E4u;
    {
        const bool branch_taken_0x1b45e4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B45E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b45e4) {
            ctx->pc = 0x1B45F4u;
            goto label_1b45f4;
        }
    }
    ctx->pc = 0x1B45ECu;
    // 0x1b45ec: 0x10000013
    ctx->pc = 0x1B45ECu;
    {
        const bool branch_taken_0x1b45ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b45ec) {
            ctx->pc = 0x1B463Cu;
            goto label_1b463c;
        }
    }
    ctx->pc = 0x1B45F4u;
label_1b45f4:
    // 0x1b45f4: 0x24e70001
    ctx->pc = 0x1b45f4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b45f8: 0x2508008c
    ctx->pc = 0x1b45f8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 140));
label_1b45fc:
    // 0x1b45fc: 0x28e20020
    ctx->pc = 0x1b45fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 32));
    // 0x1b4600: 0x1440ffea
    ctx->pc = 0x1B4600u;
    {
        const bool branch_taken_0x1b4600 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b4600) {
            ctx->pc = 0x1B45ACu;
            goto label_1b45ac;
        }
    }
    ctx->pc = 0x1B4608u;
    // 0x1b4608: 0x25240010
    ctx->pc = 0x1b4608u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 9), 16));
    // 0x1b460c: 0x10000008
    ctx->pc = 0x1B460Cu;
    {
        const bool branch_taken_0x1b460c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B4610u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b460c) {
            ctx->pc = 0x1B4630u;
            goto label_1b4630;
        }
    }
    ctx->pc = 0x1B4614u;
label_1b4614:
    // 0x1b4614: 0x84820000
    ctx->pc = 0x1b4614u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b4618: 0x14400003
    ctx->pc = 0x1B4618u;
    {
        const bool branch_taken_0x1b4618 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B461Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b4618) {
            ctx->pc = 0x1B4628u;
            goto label_1b4628;
        }
    }
    ctx->pc = 0x1B4620u;
    // 0x1b4620: 0x10000006
    ctx->pc = 0x1B4620u;
    {
        const bool branch_taken_0x1b4620 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b4620) {
            ctx->pc = 0x1B463Cu;
            goto label_1b463c;
        }
    }
    ctx->pc = 0x1B4628u;
label_1b4628:
    // 0x1b4628: 0x24630001
    ctx->pc = 0x1b4628u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b462c: 0x2484008c
    ctx->pc = 0x1b462cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 140));
label_1b4630:
    // 0x1b4630: 0x28620020
    ctx->pc = 0x1b4630u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 32));
    // 0x1b4634: 0x1440fff7
    ctx->pc = 0x1B4634u;
    {
        const bool branch_taken_0x1b4634 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B4638u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b4634) {
            ctx->pc = 0x1B4614u;
            goto label_1b4614;
        }
    }
    ctx->pc = 0x1B463Cu;
label_1b463c:
    // 0x1b463c: 0x3e00008
    ctx->pc = 0x1B463Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B45ACu: goto label_1b45ac;
            case 0x1B45F4u: goto label_1b45f4;
            case 0x1B45FCu: goto label_1b45fc;
            case 0x1B4614u: goto label_1b4614;
            case 0x1B4628u: goto label_1b4628;
            case 0x1B4630u: goto label_1b4630;
            case 0x1B463Cu: goto label_1b463c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B4644u;
    // 0x1b4644: 0x0
    ctx->pc = 0x1b4644u;
    // NOP
    // 0x1b4648: 0x0
    ctx->pc = 0x1b4648u;
    // NOP
    // 0x1b464c: 0x0
    ctx->pc = 0x1b464cu;
    // NOP
}
