#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00182200
// Address: 0x182200 - 0x182270
void sub_00182200_0x182200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x182200u;

    // 0x182200: 0x27bdfff0
    ctx->pc = 0x182200u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x182204: 0x2405002f
    ctx->pc = 0x182204u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
    // 0x182208: 0xffb00000
    ctx->pc = 0x182208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18220c: 0xffbf0008
    ctx->pc = 0x18220cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x182210: 0xc042b3a
    ctx->pc = 0x182210u;
    SET_GPR_U32(ctx, 31, 0x182218u);
    ctx->pc = 0x182214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10ACE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ACE8_0x10ace8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182218u; }
    }
    if (ctx->pc != 0x182218u) { return; }
    ctx->pc = 0x182218u;
    // 0x182218: 0x200202d
    ctx->pc = 0x182218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18221c: 0x1040000a
    ctx->pc = 0x18221Cu;
    {
        const bool branch_taken_0x18221c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x182220u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
        if (branch_taken_0x18221c) {
            ctx->pc = 0x182248u;
            goto label_182248;
        }
    }
    ctx->pc = 0x182224u;
    // 0x182224: 0xc042dee
    ctx->pc = 0x182224u;
    SET_GPR_U32(ctx, 31, 0x18222Cu);
    ctx->pc = 0x10B7B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B7B8_0x10b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18222Cu; }
    }
    if (ctx->pc != 0x18222Cu) { return; }
    ctx->pc = 0x18222Cu;
    // 0x18222c: 0xc042c56
    ctx->pc = 0x18222Cu;
    SET_GPR_U32(ctx, 31, 0x182234u);
    ctx->pc = 0x182230u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182234u; }
    }
    if (ctx->pc != 0x182234u) { return; }
    ctx->pc = 0x182234u;
    // 0x182234: 0x2c430020
    ctx->pc = 0x182234u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 32));
    // 0x182238: 0x14600008
    ctx->pc = 0x182238u;
    {
        const bool branch_taken_0x182238 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x18223Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x182238) {
            ctx->pc = 0x18225Cu;
            goto label_18225c;
        }
    }
    ctx->pc = 0x182240u;
    // 0x182240: 0x10000008
    ctx->pc = 0x182240u;
    {
        const bool branch_taken_0x182240 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182244u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x182240) {
            ctx->pc = 0x182264u;
            goto label_182264;
        }
    }
    ctx->pc = 0x182248u;
label_182248:
    // 0x182248: 0xc042c56
    ctx->pc = 0x182248u;
    SET_GPR_U32(ctx, 31, 0x182250u);
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182250u; }
    }
    if (ctx->pc != 0x182250u) { return; }
    ctx->pc = 0x182250u;
    // 0x182250: 0x2c430020
    ctx->pc = 0x182250u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 32));
    // 0x182254: 0x10600002
    ctx->pc = 0x182254u;
    {
        const bool branch_taken_0x182254 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x182258u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x182254) {
            ctx->pc = 0x182260u;
            goto label_182260;
        }
    }
    ctx->pc = 0x18225Cu;
label_18225c:
    // 0x18225c: 0x24020001
    ctx->pc = 0x18225cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_182260:
    // 0x182260: 0xdfb00000
    ctx->pc = 0x182260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_182264:
    // 0x182264: 0xdfbf0008
    ctx->pc = 0x182264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182268: 0x3e00008
    ctx->pc = 0x182268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18226Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182248u: goto label_182248;
            case 0x18225Cu: goto label_18225c;
            case 0x182260u: goto label_182260;
            case 0x182264u: goto label_182264;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182270u;
}
