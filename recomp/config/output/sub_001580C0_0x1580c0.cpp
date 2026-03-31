#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001580C0
// Address: 0x1580c0 - 0x158158
void sub_001580C0_0x1580c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1580c0u;

    // 0x1580c0: 0x27bdffe0
    ctx->pc = 0x1580c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1580c4: 0xa0102d
    ctx->pc = 0x1580c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1580c8: 0xffb10008
    ctx->pc = 0x1580c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1580cc: 0x80882d
    ctx->pc = 0x1580ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1580d0: 0xffb00000
    ctx->pc = 0x1580d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1580d4: 0x3c100023
    ctx->pc = 0x1580d4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x1580d8: 0x113040
    ctx->pc = 0x1580d8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 17), 1));
    // 0x1580dc: 0x2610d870
    ctx->pc = 0x1580dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294957168));
    // 0x1580e0: 0xd13021
    ctx->pc = 0x1580e0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1580e4: 0xffbf0010
    ctx->pc = 0x1580e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1580e8: 0x63100
    ctx->pc = 0x1580e8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 4));
    // 0x1580ec: 0xae020000
    ctx->pc = 0x1580ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1580f0: 0x40202d
    ctx->pc = 0x1580f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1580f4: 0x24c60004
    ctx->pc = 0x1580f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x1580f8: 0xc0558b4
    ctx->pc = 0x1580F8u;
    SET_GPR_U32(ctx, 31, 0x158100u);
    ctx->pc = 0x1580FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1562D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001562D0_0x1562d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158100u; }
    }
    if (ctx->pc != 0x158100u) { return; }
    ctx->pc = 0x158100u;
    // 0x158100: 0xc056074
    ctx->pc = 0x158100u;
    SET_GPR_U32(ctx, 31, 0x158108u);
    ctx->pc = 0x158104u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1581D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001581D0_0x1581d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158108u; }
    }
    if (ctx->pc != 0x158108u) { return; }
    ctx->pc = 0x158108u;
    // 0x158108: 0x8e020000
    ctx->pc = 0x158108u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15810c: 0xac51000c
    ctx->pc = 0x15810cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
    // 0x158110: 0x1a20000a
    ctx->pc = 0x158110u;
    {
        const bool branch_taken_0x158110 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x158114u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x158110) {
            ctx->pc = 0x15813Cu;
            goto label_15813c;
        }
    }
    ctx->pc = 0x158118u;
    // 0x158118: 0x220202d
    ctx->pc = 0x158118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15811c: 0x24030001
    ctx->pc = 0x15811cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_158120:
    // 0x158120: 0x2484ffff
    ctx->pc = 0x158120u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x158124: 0xac430000
    ctx->pc = 0x158124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x158128: 0x0
    ctx->pc = 0x158128u;
    // NOP
    // 0x15812c: 0x0
    ctx->pc = 0x15812cu;
    // NOP
    // 0x158130: 0x0
    ctx->pc = 0x158130u;
    // NOP
    // 0x158134: 0x1480fffa
    ctx->pc = 0x158134u;
    {
        const bool branch_taken_0x158134 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x158138u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 192));
        if (branch_taken_0x158134) {
            ctx->pc = 0x158120u;
            goto label_158120;
        }
    }
    ctx->pc = 0x15813Cu;
label_15813c:
    // 0x15813c: 0xdfb00000
    ctx->pc = 0x15813cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158140: 0x102d
    ctx->pc = 0x158140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158144: 0xdfb10008
    ctx->pc = 0x158144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x158148: 0xdfbf0010
    ctx->pc = 0x158148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15814c: 0x3e00008
    ctx->pc = 0x15814Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158150u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158120u: goto label_158120;
            case 0x15813Cu: goto label_15813c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x158154u;
    // 0x158154: 0x0
    ctx->pc = 0x158154u;
    // NOP
}
