#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001701F0
// Address: 0x1701f0 - 0x170268
void sub_001701F0_0x1701f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1701f0u;

    // 0x1701f0: 0x3e00008
    ctx->pc = 0x1701F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1701F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170248u: goto label_170248;
            case 0x17024Cu: goto label_17024c;
            case 0x170258u: goto label_170258;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1701F8u;
    // 0x1701f8: 0x27bdffd0
    ctx->pc = 0x1701f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1701fc: 0xffb10018
    ctx->pc = 0x1701fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x170200: 0x80882d
    ctx->pc = 0x170200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170204: 0xffb00010
    ctx->pc = 0x170204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x170208: 0x3a0302d
    ctx->pc = 0x170208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17020c: 0xffbf0020
    ctx->pc = 0x17020cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x170210: 0x8e301b30
    ctx->pc = 0x170210u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 6960)));
    // 0x170214: 0xc05c09a
    ctx->pc = 0x170214u;
    SET_GPR_U32(ctx, 31, 0x17021Cu);
    ctx->pc = 0x170218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170268u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00170268_0x170268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17021Cu; }
    }
    if (ctx->pc != 0x17021Cu) { return; }
    ctx->pc = 0x17021Cu;
    // 0x17021c: 0x5440000e
    ctx->pc = 0x17021Cu;
    {
        const bool branch_taken_0x17021c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17021c) {
            ctx->pc = 0x170220u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x170258u;
            goto label_170258;
        }
    }
    ctx->pc = 0x170224u;
    // 0x170224: 0x24020002
    ctx->pc = 0x170224u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x170228: 0xae020074
    ctx->pc = 0x170228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x17022c: 0x8fa30000
    ctx->pc = 0x17022cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170230: 0x10600005
    ctx->pc = 0x170230u;
    {
        const bool branch_taken_0x170230 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x170234u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x170230) {
            ctx->pc = 0x170248u;
            goto label_170248;
        }
    }
    ctx->pc = 0x170238u;
    // 0x170238: 0xc05d58a
    ctx->pc = 0x170238u;
    SET_GPR_U32(ctx, 31, 0x170240u);
    ctx->pc = 0x17023Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170240u; }
    }
    if (ctx->pc != 0x170240u) { return; }
    ctx->pc = 0x170240u;
    // 0x170240: 0x54400002
    ctx->pc = 0x170240u;
    {
        const bool branch_taken_0x170240 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x170240) {
            ctx->pc = 0x170244u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 200));
            ctx->pc = 0x17024Cu;
            goto label_17024c;
        }
    }
    ctx->pc = 0x170248u;
label_170248:
    // 0x170248: 0x240200c0
    ctx->pc = 0x170248u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 192));
label_17024c:
    // 0x17024c: 0xae020078
    ctx->pc = 0x17024cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x170250: 0x102d
    ctx->pc = 0x170250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170254: 0xdfb00010
    ctx->pc = 0x170254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_170258:
    // 0x170258: 0xdfb10018
    ctx->pc = 0x170258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17025c: 0xdfbf0020
    ctx->pc = 0x17025cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170260: 0x3e00008
    ctx->pc = 0x170260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170264u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170248u: goto label_170248;
            case 0x17024Cu: goto label_17024c;
            case 0x170258u: goto label_170258;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170268u;
}
