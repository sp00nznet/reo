#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00192480
// Address: 0x192480 - 0x192500
void sub_00192480_0x192480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x192480u;

    // 0x192480: 0x27bdffd0
    ctx->pc = 0x192480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x192484: 0xffbf0020
    ctx->pc = 0x192484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x192488: 0x7fb10010
    ctx->pc = 0x192488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19248c: 0x7fb00000
    ctx->pc = 0x19248cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x192490: 0x8c910008
    ctx->pc = 0x192490u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x192494: 0x8e24000c
    ctx->pc = 0x192494u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x192498: 0xc063714
    ctx->pc = 0x192498u;
    SET_GPR_U32(ctx, 31, 0x1924A0u);
    ctx->pc = 0x19249Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x18DC50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC50_0x18dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1924A0u; }
    }
    if (ctx->pc != 0x1924A0u) { return; }
    ctx->pc = 0x1924A0u;
    // 0x1924a0: 0x40802d
    ctx->pc = 0x1924a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1924a4: 0xc063728
    ctx->pc = 0x1924A4u;
    SET_GPR_U32(ctx, 31, 0x1924ACu);
    ctx->pc = 0x1924A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18DCA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCA0_0x18dca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1924ACu; }
    }
    if (ctx->pc != 0x1924ACu) { return; }
    ctx->pc = 0x1924ACu;
    // 0x1924ac: 0x220202d
    ctx->pc = 0x1924acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1924b0: 0x10000006
    ctx->pc = 0x1924B0u;
    {
        const bool branch_taken_0x1924b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1924B4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1924b0) {
            ctx->pc = 0x1924CCu;
            goto label_1924cc;
        }
    }
    ctx->pc = 0x1924B8u;
label_1924b8:
    // 0x1924b8: 0x90830000
    ctx->pc = 0x1924b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1924bc: 0x24a50001
    ctx->pc = 0x1924bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1924c0: 0xa0430000
    ctx->pc = 0x1924c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1924c4: 0x24840001
    ctx->pc = 0x1924c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1924c8: 0x24420001
    ctx->pc = 0x1924c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1924cc:
    // 0x1924cc: 0x8e23000c
    ctx->pc = 0x1924ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1924d0: 0xa3182b
    ctx->pc = 0x1924d0u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1924d4: 0x1460fff8
    ctx->pc = 0x1924D4u;
    {
        const bool branch_taken_0x1924d4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1924d4) {
            ctx->pc = 0x1924B8u;
            goto label_1924b8;
        }
    }
    ctx->pc = 0x1924DCu;
    // 0x1924dc: 0x200102d
    ctx->pc = 0x1924dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1924e0: 0xdfbf0020
    ctx->pc = 0x1924e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1924e4: 0x7bb10010
    ctx->pc = 0x1924e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1924e8: 0x7bb00000
    ctx->pc = 0x1924e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1924ec: 0x3e00008
    ctx->pc = 0x1924ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1924F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1924B8u: goto label_1924b8;
            case 0x1924CCu: goto label_1924cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1924F4u;
    // 0x1924f4: 0x0
    ctx->pc = 0x1924f4u;
    // NOP
    // 0x1924f8: 0x0
    ctx->pc = 0x1924f8u;
    // NOP
    // 0x1924fc: 0x0
    ctx->pc = 0x1924fcu;
    // NOP
}
