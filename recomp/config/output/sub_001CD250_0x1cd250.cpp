#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CD250
// Address: 0x1cd250 - 0x1cd2c0
void sub_001CD250_0x1cd250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cd250u;

    // 0x1cd250: 0x27bdfff0
    ctx->pc = 0x1cd250u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd254: 0xffbf0000
    ctx->pc = 0x1cd254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd258: 0xc07340c
    ctx->pc = 0x1CD258u;
    SET_GPR_U32(ctx, 31, 0x1CD260u);
    ctx->pc = 0x1CD030u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD030_0x1cd030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD260u; }
    }
    if (ctx->pc != 0x1CD260u) { return; }
    ctx->pc = 0x1CD260u;
    // 0x1cd260: 0x3c060034
    ctx->pc = 0x1cd260u;
    SET_GPR_U32(ctx, 6, ((uint32_t)52 << 16));
    // 0x1cd264: 0x40202d
    ctx->pc = 0x1cd264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd268: 0x24c61640
    ctx->pc = 0x1cd268u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 5696));
    // 0x1cd26c: 0x1000000b
    ctx->pc = 0x1CD26Cu;
    {
        const bool branch_taken_0x1cd26c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD270u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cd26c) {
            ctx->pc = 0x1CD29Cu;
            goto label_1cd29c;
        }
    }
    ctx->pc = 0x1CD274u;
label_1cd274:
    // 0x1cd274: 0x8cc20000
    ctx->pc = 0x1cd274u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cd278: 0x10400006
    ctx->pc = 0x1CD278u;
    {
        const bool branch_taken_0x1cd278 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd278) {
            ctx->pc = 0x1CD294u;
            goto label_1cd294;
        }
    }
    ctx->pc = 0x1CD280u;
    // 0x1cd280: 0x8cc30004
    ctx->pc = 0x1cd280u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1cd284: 0x14640003
    ctx->pc = 0x1CD284u;
    {
        const bool branch_taken_0x1cd284 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x1cd284) {
            ctx->pc = 0x1CD294u;
            goto label_1cd294;
        }
    }
    ctx->pc = 0x1CD28Cu;
    // 0x1cd28c: 0x10000007
    ctx->pc = 0x1CD28Cu;
    {
        const bool branch_taken_0x1cd28c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD290u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1cd28c) {
            ctx->pc = 0x1CD2ACu;
            goto label_1cd2ac;
        }
    }
    ctx->pc = 0x1CD294u;
label_1cd294:
    // 0x1cd294: 0x24a50001
    ctx->pc = 0x1cd294u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cd298: 0x24c60010
    ctx->pc = 0x1cd298u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
label_1cd29c:
    // 0x1cd29c: 0x28a20100
    ctx->pc = 0x1cd29cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 256));
    // 0x1cd2a0: 0x1440fff4
    ctx->pc = 0x1CD2A0u;
    {
        const bool branch_taken_0x1cd2a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD2A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cd2a0) {
            ctx->pc = 0x1CD274u;
            goto label_1cd274;
        }
    }
    ctx->pc = 0x1CD2A8u;
    // 0x1cd2a8: 0xdfbf0000
    ctx->pc = 0x1cd2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cd2ac:
    // 0x1cd2ac: 0x3e00008
    ctx->pc = 0x1CD2ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD2B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD274u: goto label_1cd274;
            case 0x1CD294u: goto label_1cd294;
            case 0x1CD29Cu: goto label_1cd29c;
            case 0x1CD2ACu: goto label_1cd2ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CD2B4u;
    // 0x1cd2b4: 0x0
    ctx->pc = 0x1cd2b4u;
    // NOP
    // 0x1cd2b8: 0x0
    ctx->pc = 0x1cd2b8u;
    // NOP
    // 0x1cd2bc: 0x0
    ctx->pc = 0x1cd2bcu;
    // NOP
}
