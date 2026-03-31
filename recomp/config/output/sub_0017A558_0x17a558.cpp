#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017A558
// Address: 0x17a558 - 0x17a598
void sub_0017A558_0x17a558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17a558u;

    // 0x17a558: 0x27bdfff0
    ctx->pc = 0x17a558u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a55c: 0xffb00000
    ctx->pc = 0x17a55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a560: 0xffbf0008
    ctx->pc = 0x17a560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17a564: 0xc05e976
    ctx->pc = 0x17A564u;
    SET_GPR_U32(ctx, 31, 0x17A56Cu);
    ctx->pc = 0x17A568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17A5D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A5D8_0x17a5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A56Cu; }
    }
    if (ctx->pc != 0x17A56Cu) { return; }
    ctx->pc = 0x17A56Cu;
    // 0x17a56c: 0x240300c0
    ctx->pc = 0x17a56cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 192));
    // 0x17a570: 0x14430005
    ctx->pc = 0x17A570u;
    {
        const bool branch_taken_0x17a570 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x17A574u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17a570) {
            ctx->pc = 0x17A588u;
            goto label_17a588;
        }
    }
    ctx->pc = 0x17A578u;
    // 0x17a578: 0x92030020
    ctx->pc = 0x17a578u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17a57c: 0x3102b
    ctx->pc = 0x17a57cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x17a580: 0x2c630002
    ctx->pc = 0x17a580u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x17a584: 0x3100a
    ctx->pc = 0x17a584u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
label_17a588:
    // 0x17a588: 0xdfb00000
    ctx->pc = 0x17a588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a58c: 0xdfbf0008
    ctx->pc = 0x17a58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a590: 0x3e00008
    ctx->pc = 0x17A590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A594u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A588u: goto label_17a588;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A598u;
}
