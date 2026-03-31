#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00113390
// Address: 0x113390 - 0x1133f0
void sub_00113390_0x113390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x113390u;

    // 0x113390: 0x27bdffd0
    ctx->pc = 0x113390u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113394: 0xffb10010
    ctx->pc = 0x113394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x113398: 0x80882d
    ctx->pc = 0x113398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11339c: 0xffb00000
    ctx->pc = 0x11339cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1133a0: 0x30b00001
    ctx->pc = 0x1133a0u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 5), 1));
    // 0x1133a4: 0x24040028
    ctx->pc = 0x1133a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 40));
    // 0x1133a8: 0x2041018
    ctx->pc = 0x1133a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1133ac: 0xffbf0020
    ctx->pc = 0x1133acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1133b0: 0xc044ae6
    ctx->pc = 0x1133B0u;
    SET_GPR_U32(ctx, 31, 0x1133B8u);
    ctx->pc = 0x1133B4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x112B98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112B98_0x112b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1133B8u; }
    }
    if (ctx->pc != 0x1133B8u) { return; }
    ctx->pc = 0x1133B8u;
    // 0x1133b8: 0x12000005
    ctx->pc = 0x1133B8u;
    {
        const bool branch_taken_0x1133b8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1133b8) {
            ctx->pc = 0x1133D0u;
            goto label_1133d0;
        }
    }
    ctx->pc = 0x1133C0u;
    // 0x1133c0: 0xc044c04
    ctx->pc = 0x1133C0u;
    SET_GPR_U32(ctx, 31, 0x1133C8u);
    ctx->pc = 0x1133C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 320));
    ctx->pc = 0x113010u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00113010_0x113010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1133C8u; }
    }
    if (ctx->pc != 0x1133C8u) { return; }
    ctx->pc = 0x1133C8u;
    // 0x1133c8: 0x10000004
    ctx->pc = 0x1133C8u;
    {
        const bool branch_taken_0x1133c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1133CCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1133c8) {
            ctx->pc = 0x1133DCu;
            goto label_1133dc;
        }
    }
    ctx->pc = 0x1133D0u;
label_1133d0:
    // 0x1133d0: 0xc044c04
    ctx->pc = 0x1133D0u;
    SET_GPR_U32(ctx, 31, 0x1133D8u);
    ctx->pc = 0x1133D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 80));
    ctx->pc = 0x113010u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00113010_0x113010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1133D8u; }
    }
    if (ctx->pc != 0x1133D8u) { return; }
    ctx->pc = 0x1133D8u;
    // 0x1133d8: 0xdfbf0020
    ctx->pc = 0x1133d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1133dc:
    // 0x1133dc: 0xdfb10010
    ctx->pc = 0x1133dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1133e0: 0xdfb00000
    ctx->pc = 0x1133e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1133e4: 0x3e00008
    ctx->pc = 0x1133E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1133E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1133D0u: goto label_1133d0;
            case 0x1133DCu: goto label_1133dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1133ECu;
    // 0x1133ec: 0x0
    ctx->pc = 0x1133ecu;
    // NOP
}
