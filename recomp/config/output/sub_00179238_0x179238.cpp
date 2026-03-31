#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00179238
// Address: 0x179238 - 0x179288
void sub_00179238_0x179238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x179238u;

    // 0x179238: 0x27bdffe0
    ctx->pc = 0x179238u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17923c: 0x80102d
    ctx->pc = 0x17923cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179240: 0xffb00000
    ctx->pc = 0x179240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179244: 0xa0202d
    ctx->pc = 0x179244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179248: 0xffb10008
    ctx->pc = 0x179248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17924c: 0x18400009
    ctx->pc = 0x17924Cu;
    {
        const bool branch_taken_0x17924c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x179250u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x17924c) {
            ctx->pc = 0x179274u;
            goto label_179274;
        }
    }
    ctx->pc = 0x179254u;
    // 0x179254: 0x80882d
    ctx->pc = 0x179254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179258: 0x40802d
    ctx->pc = 0x179258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17925c: 0x220202d
    ctx->pc = 0x17925cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_179260:
    // 0x179260: 0x26310010
    ctx->pc = 0x179260u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
    // 0x179264: 0xc05e482
    ctx->pc = 0x179264u;
    SET_GPR_U32(ctx, 31, 0x17926Cu);
    ctx->pc = 0x179268u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x179208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179208_0x179208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17926Cu; }
    }
    if (ctx->pc != 0x17926Cu) { return; }
    ctx->pc = 0x17926Cu;
    // 0x17926c: 0x1600fffc
    ctx->pc = 0x17926Cu;
    {
        const bool branch_taken_0x17926c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x179270u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17926c) {
            ctx->pc = 0x179260u;
            goto label_179260;
        }
    }
    ctx->pc = 0x179274u;
label_179274:
    // 0x179274: 0xdfb00000
    ctx->pc = 0x179274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179278: 0xdfb10008
    ctx->pc = 0x179278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17927c: 0xdfbf0010
    ctx->pc = 0x17927cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179280: 0x3e00008
    ctx->pc = 0x179280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179284u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179260u: goto label_179260;
            case 0x179274u: goto label_179274;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179288u;
}
