#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1615d8
// Address: 0x1615d8 - 0x161688
void entry_1615d8_0x161688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1615d8u;

label_1615d8:
    // 0x1615d8: 0x27bdffe0
    ctx->pc = 0x1615d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1615dc: 0xffb00000
    ctx->pc = 0x1615dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1615e0: 0x80802d
    ctx->pc = 0x1615e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1615e4: 0xffb10008
    ctx->pc = 0x1615e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1615e8: 0xa0882d
    ctx->pc = 0x1615e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1615ec: 0xffb20010
    ctx->pc = 0x1615ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1615f0: 0xffbf0018
    ctx->pc = 0x1615f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1615f4: 0xc057ff0
    ctx->pc = 0x1615F4u;
    SET_GPR_U32(ctx, 31, 0x1615FCu);
    ctx->pc = 0x1615F8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615FCu; }
    }
    if (ctx->pc != 0x1615FCu) { return; }
    ctx->pc = 0x1615FCu;
    // 0x1615fc: 0x1440000a
    ctx->pc = 0x1615FCu;
    {
        const bool branch_taken_0x1615fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x161600u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1615fc) {
            ctx->pc = 0x161628u;
            goto label_161628;
        }
    }
    ctx->pc = 0x161604u;
    // 0x161604: 0x3c040024
    ctx->pc = 0x161604u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x161608: 0xdfb00000
    ctx->pc = 0x161608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16160c: 0xdfb10008
    ctx->pc = 0x16160cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x161610: 0x2484fd28
    ctx->pc = 0x161610u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966568));
    // 0x161614: 0xdfb20010
    ctx->pc = 0x161614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161618: 0xdfbf0018
    ctx->pc = 0x161618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16161c: 0x8058dd4
    ctx->pc = 0x16161Cu;
    ctx->pc = 0x161620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x161624u;
    // 0x161624: 0x0
    ctx->pc = 0x161624u;
    // NOP
label_161628:
    // 0x161628: 0xc0582e4
    ctx->pc = 0x161628u;
    SET_GPR_U32(ctx, 31, 0x161630u);
    ctx->pc = 0x160B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B90_0x160b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161630u; }
    }
    if (ctx->pc != 0x161630u) { return; }
    ctx->pc = 0x161630u;
    // 0x161630: 0x220282d
    ctx->pc = 0x161630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161634: 0x240302d
    ctx->pc = 0x161634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161638: 0xdfb20010
    ctx->pc = 0x161638u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16163c: 0xdfb00000
    ctx->pc = 0x16163cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161640: 0x40202d
    ctx->pc = 0x161640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161644: 0xdfb10008
    ctx->pc = 0x161644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x161648: 0xdfbf0018
    ctx->pc = 0x161648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16164c: 0x805f49a
    ctx->pc = 0x16164Cu;
    ctx->pc = 0x161650u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17D268u;
    sub_0017D268_0x17d268(rdram, ctx, runtime); return;
    ctx->pc = 0x161654u;
    // 0x161654: 0x0
    ctx->pc = 0x161654u;
    // NOP
    // 0x161658: 0x27bdfff0
    ctx->pc = 0x161658u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16165c: 0x382d
    ctx->pc = 0x16165cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161660: 0xffbf0000
    ctx->pc = 0x161660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161664: 0xdfbf0000
    ctx->pc = 0x161664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161668: 0x80585a2
    ctx->pc = 0x161668u;
    ctx->pc = 0x16166Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x161688u;
    entry_161688_0x1618b0(rdram, ctx, runtime); return;
    ctx->pc = 0x161670u;
    // 0x161670: 0x27bdfff0
    ctx->pc = 0x161670u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161674: 0xffbf0000
    ctx->pc = 0x161674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161678: 0xdfbf0000
    ctx->pc = 0x161678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16167c: 0x8058576
    ctx->pc = 0x16167Cu;
    ctx->pc = 0x161680u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1615D8u;
    goto label_1615d8;
    ctx->pc = 0x161684u;
    // 0x161684: 0x0
    ctx->pc = 0x161684u;
    // NOP
}
