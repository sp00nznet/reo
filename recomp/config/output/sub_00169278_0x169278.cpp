#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169278
// Address: 0x169278 - 0x1692e0
void sub_00169278_0x169278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169278u;

    // 0x169278: 0x27bdffe0
    ctx->pc = 0x169278u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16927c: 0xffb10008
    ctx->pc = 0x16927cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169280: 0x80882d
    ctx->pc = 0x169280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169284: 0xffb00000
    ctx->pc = 0x169284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169288: 0xffbf0010
    ctx->pc = 0x169288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16928c: 0xc05a4b8
    ctx->pc = 0x16928Cu;
    SET_GPR_U32(ctx, 31, 0x169294u);
    ctx->pc = 0x169290u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 120));
    ctx->pc = 0x1692E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001692E0_0x1692e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169294u; }
    }
    if (ctx->pc != 0x169294u) { return; }
    ctx->pc = 0x169294u;
    // 0x169294: 0x40282d
    ctx->pc = 0x169294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169298: 0x1040000b
    ctx->pc = 0x169298u;
    {
        const bool branch_taken_0x169298 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16929Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x169298) {
            ctx->pc = 0x1692C8u;
            goto label_1692c8;
        }
    }
    ctx->pc = 0x1692A0u;
    // 0x1692a0: 0xc05a46a
    ctx->pc = 0x1692A0u;
    SET_GPR_U32(ctx, 31, 0x1692A8u);
    ctx->pc = 0x1691A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001691A8_0x1691a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1692A8u; }
    }
    if (ctx->pc != 0x1692A8u) { return; }
    ctx->pc = 0x1692A8u;
    // 0x1692a8: 0xc05a4cc
    ctx->pc = 0x1692A8u;
    SET_GPR_U32(ctx, 31, 0x1692B0u);
    ctx->pc = 0x1692ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169330u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169330_0x169330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1692B0u; }
    }
    if (ctx->pc != 0x1692B0u) { return; }
    ctx->pc = 0x1692B0u;
    // 0x1692b0: 0x220202d
    ctx->pc = 0x1692b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1692b4: 0xdfb00000
    ctx->pc = 0x1692b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1692b8: 0xdfb10008
    ctx->pc = 0x1692b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1692bc: 0xdfbf0010
    ctx->pc = 0x1692bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1692c0: 0x805a654
    ctx->pc = 0x1692C0u;
    ctx->pc = 0x1692C4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169950u;
    sub_00169950_0x169950(rdram, ctx, runtime); return;
    ctx->pc = 0x1692C8u;
label_1692c8:
    // 0x1692c8: 0xdfb00000
    ctx->pc = 0x1692c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1692cc: 0xdfb10008
    ctx->pc = 0x1692ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1692d0: 0xdfbf0010
    ctx->pc = 0x1692d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1692d4: 0x3e00008
    ctx->pc = 0x1692D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1692D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1692C8u: goto label_1692c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1692DCu;
    // 0x1692dc: 0x0
    ctx->pc = 0x1692dcu;
    // NOP
}
