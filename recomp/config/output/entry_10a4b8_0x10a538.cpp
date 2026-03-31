#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_10a4b8
// Address: 0x10a4b8 - 0x10a538
void entry_10a4b8_0x10a538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10a4b8u;

    // 0x10a4b8: 0x27bdffe0
    ctx->pc = 0x10a4b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a4bc: 0xffb10008
    ctx->pc = 0x10a4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10a4c0: 0xa0882d
    ctx->pc = 0x10a4c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a4c4: 0x2e220020
    ctx->pc = 0x10a4c4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 32));
    // 0x10a4c8: 0xffb00000
    ctx->pc = 0x10a4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a4cc: 0xffb20010
    ctx->pc = 0x10a4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10a4d0: 0xc0902d
    ctx->pc = 0x10a4d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a4d4: 0xffbf0018
    ctx->pc = 0x10a4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10a4d8: 0x14400005
    ctx->pc = 0x10A4D8u;
    {
        const bool branch_taken_0x10a4d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10A4DCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10a4d8) {
            ctx->pc = 0x10A4F0u;
            goto label_10a4f0;
        }
    }
    ctx->pc = 0x10A4E0u;
    // 0x10a4e0: 0x24030016
    ctx->pc = 0x10a4e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
    // 0x10a4e4: 0x2402ffff
    ctx->pc = 0x10a4e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10a4e8: 0x1000000d
    ctx->pc = 0x10A4E8u;
    {
        const bool branch_taken_0x10a4e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A4ECu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x10a4e8) {
            ctx->pc = 0x10A520u;
            goto label_10a520;
        }
    }
    ctx->pc = 0x10A4F0u;
label_10a4f0:
    // 0x10a4f0: 0x8e0201d4
    ctx->pc = 0x10a4f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x10a4f4: 0x14400007
    ctx->pc = 0x10A4F4u;
    {
        const bool branch_taken_0x10a4f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10A4F8u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x10a4f4) {
            ctx->pc = 0x10A514u;
            goto label_10a514;
        }
    }
    ctx->pc = 0x10A4FCu;
    // 0x10a4fc: 0xc042912
    ctx->pc = 0x10A4FCu;
    SET_GPR_U32(ctx, 31, 0x10A504u);
    ctx->pc = 0x10A448u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A448_0x10a448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A504u; }
    }
    if (ctx->pc != 0x10A504u) { return; }
    ctx->pc = 0x10A504u;
    // 0x10a504: 0x14400006
    ctx->pc = 0x10A504u;
    {
        const bool branch_taken_0x10a504 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10A508u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x10a504) {
            ctx->pc = 0x10A520u;
            goto label_10a520;
        }
    }
    ctx->pc = 0x10A50Cu;
    // 0x10a50c: 0x8e0201d4
    ctx->pc = 0x10a50cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x10a510: 0x111880
    ctx->pc = 0x10a510u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_10a514:
    // 0x10a514: 0x621821
    ctx->pc = 0x10a514u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10a518: 0x8c620000
    ctx->pc = 0x10a518u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10a51c: 0xac720000
    ctx->pc = 0x10a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_10a520:
    // 0x10a520: 0xdfb00000
    ctx->pc = 0x10a520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a524: 0xdfb10008
    ctx->pc = 0x10a524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a528: 0xdfb20010
    ctx->pc = 0x10a528u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a52c: 0xdfbf0018
    ctx->pc = 0x10a52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10a530: 0x3e00008
    ctx->pc = 0x10A530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A534u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A4F0u: goto label_10a4f0;
            case 0x10A514u: goto label_10a514;
            case 0x10A520u: goto label_10a520;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A538u;
}
