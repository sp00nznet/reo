#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C8960
// Address: 0x1c8960 - 0x1c89d0
void sub_001C8960_0x1c8960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c8960u;

    // 0x1c8960: 0x27bdffd0
    ctx->pc = 0x1c8960u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c8964: 0xffbf0020
    ctx->pc = 0x1c8964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c8968: 0x7fb10010
    ctx->pc = 0x1c8968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c896c: 0x7fb00000
    ctx->pc = 0x1c896cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c8970: 0xc0882d
    ctx->pc = 0x1c8970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8974: 0x8c87000c
    ctx->pc = 0x1c8974u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c8978: 0x8c820010
    ctx->pc = 0x1c8978u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c897c: 0xe61821
    ctx->pc = 0x1c897cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1c8980: 0x43082a
    ctx->pc = 0x1c8980u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x1c8984: 0x10200005
    ctx->pc = 0x1C8984u;
    {
        const bool branch_taken_0x1c8984 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8988u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c8984) {
            ctx->pc = 0x1C899Cu;
            goto label_1c899c;
        }
    }
    ctx->pc = 0x1C898Cu;
    // 0x1c898c: 0xc071ef0
    ctx->pc = 0x1C898Cu;
    SET_GPR_U32(ctx, 31, 0x1C8994u);
    ctx->pc = 0x1C8990u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1C7BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7BC0_0x1c7bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8994u; }
    }
    if (ctx->pc != 0x1C8994u) { return; }
    ctx->pc = 0x1C8994u;
    // 0x1c8994: 0x10000008
    ctx->pc = 0x1C8994u;
    {
        const bool branch_taken_0x1c8994 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8998u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1c8994) {
            ctx->pc = 0x1C89B8u;
            goto label_1c89b8;
        }
    }
    ctx->pc = 0x1C899Cu;
label_1c899c:
    // 0x1c899c: 0x8e020008
    ctx->pc = 0x1c899cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c89a0: 0xc041eac
    ctx->pc = 0x1C89A0u;
    SET_GPR_U32(ctx, 31, 0x1C89A8u);
    ctx->pc = 0x1C89A4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C89A8u; }
    }
    if (ctx->pc != 0x1C89A8u) { return; }
    ctx->pc = 0x1C89A8u;
    // 0x1c89a8: 0x8e03000c
    ctx->pc = 0x1c89a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c89ac: 0x711821
    ctx->pc = 0x1c89acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c89b0: 0xae03000c
    ctx->pc = 0x1c89b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1c89b4: 0xdfbf0020
    ctx->pc = 0x1c89b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c89b8:
    // 0x1c89b8: 0x7bb10010
    ctx->pc = 0x1c89b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c89bc: 0x7bb00000
    ctx->pc = 0x1c89bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c89c0: 0x3e00008
    ctx->pc = 0x1C89C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C89C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C899Cu: goto label_1c899c;
            case 0x1C89B8u: goto label_1c89b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C89C8u;
    // 0x1c89c8: 0x0
    ctx->pc = 0x1c89c8u;
    // NOP
    // 0x1c89cc: 0x0
    ctx->pc = 0x1c89ccu;
    // NOP
}
