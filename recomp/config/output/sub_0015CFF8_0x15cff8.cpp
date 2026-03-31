#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015CFF8
// Address: 0x15cff8 - 0x15d048
void sub_0015CFF8_0x15cff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15cff8u;

    // 0x15cff8: 0x27bdfff0
    ctx->pc = 0x15cff8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15cffc: 0xffb00000
    ctx->pc = 0x15cffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15d000: 0xffbf0008
    ctx->pc = 0x15d000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15d004: 0xc05799e
    ctx->pc = 0x15D004u;
    SET_GPR_U32(ctx, 31, 0x15D00Cu);
    ctx->pc = 0x15D008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15E678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E678_0x15e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D00Cu; }
    }
    if (ctx->pc != 0x15D00Cu) { return; }
    ctx->pc = 0x15D00Cu;
    // 0x15d00c: 0x40282d
    ctx->pc = 0x15d00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d010: 0x8e020018
    ctx->pc = 0x15d010u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15d014: 0x2406ffff
    ctx->pc = 0x15d014u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15d018: 0x14400006
    ctx->pc = 0x15D018u;
    {
        const bool branch_taken_0x15d018 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15D01Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15d018) {
            ctx->pc = 0x15D034u;
            goto label_15d034;
        }
    }
    ctx->pc = 0x15D020u;
    // 0x15d020: 0x8ca30028
    ctx->pc = 0x15d020u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x15d024: 0xc0202d
    ctx->pc = 0x15d024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d028: 0x8ca2002c
    ctx->pc = 0x15d028u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x15d02c: 0x3200b
    ctx->pc = 0x15d02cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
    // 0x15d030: 0xc2200a
    ctx->pc = 0x15d030u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 6));
label_15d034:
    // 0x15d034: 0xdfb00000
    ctx->pc = 0x15d034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d038: 0x80102d
    ctx->pc = 0x15d038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d03c: 0xdfbf0008
    ctx->pc = 0x15d03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15d040: 0x3e00008
    ctx->pc = 0x15D040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D044u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D034u: goto label_15d034;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D048u;
}
