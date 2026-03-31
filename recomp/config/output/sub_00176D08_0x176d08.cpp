#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00176D08
// Address: 0x176d08 - 0x176d68
void sub_00176D08_0x176d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x176d08u;

    // 0x176d08: 0x27bdffe0
    ctx->pc = 0x176d08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176d0c: 0x2ca20002
    ctx->pc = 0x176d0cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 2));
    // 0x176d10: 0xffb00010
    ctx->pc = 0x176d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x176d14: 0x80802d
    ctx->pc = 0x176d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d18: 0x1440000f
    ctx->pc = 0x176D18u;
    {
        const bool branch_taken_0x176d18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x176D1Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x176d18) {
            ctx->pc = 0x176D58u;
            goto label_176d58;
        }
    }
    ctx->pc = 0x176D20u;
    // 0x176d20: 0x24020002
    ctx->pc = 0x176d20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x176d24: 0x54a2000d
    ctx->pc = 0x176D24u;
    {
        const bool branch_taken_0x176d24 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x176d24) {
            ctx->pc = 0x176D28u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x176D5Cu;
            goto label_176d5c;
        }
    }
    ctx->pc = 0x176D2Cu;
    // 0x176d2c: 0x3a0282d
    ctx->pc = 0x176d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d30: 0xc05db7a
    ctx->pc = 0x176D30u;
    SET_GPR_U32(ctx, 31, 0x176D38u);
    ctx->pc = 0x176D34u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x176DE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176DE8_0x176de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D38u; }
    }
    if (ctx->pc != 0x176D38u) { return; }
    ctx->pc = 0x176D38u;
    // 0x176d38: 0x200202d
    ctx->pc = 0x176d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d3c: 0x8fa50000
    ctx->pc = 0x176d3cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176d40: 0xc05db5a
    ctx->pc = 0x176D40u;
    SET_GPR_U32(ctx, 31, 0x176D48u);
    ctx->pc = 0x176D44u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x176D68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176D68_0x176d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D48u; }
    }
    if (ctx->pc != 0x176D48u) { return; }
    ctx->pc = 0x176D48u;
    // 0x176d48: 0x200202d
    ctx->pc = 0x176d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d4c: 0x8fa50000
    ctx->pc = 0x176d4cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176d50: 0xc05db6c
    ctx->pc = 0x176D50u;
    SET_GPR_U32(ctx, 31, 0x176D58u);
    ctx->pc = 0x176D54u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x176DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176DB0_0x176db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D58u; }
    }
    if (ctx->pc != 0x176D58u) { return; }
    ctx->pc = 0x176D58u;
label_176d58:
    // 0x176d58: 0xdfb00010
    ctx->pc = 0x176d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_176d5c:
    // 0x176d5c: 0xdfbf0018
    ctx->pc = 0x176d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x176d60: 0x3e00008
    ctx->pc = 0x176D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176D64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176D58u: goto label_176d58;
            case 0x176D5Cu: goto label_176d5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x176D68u;
}
