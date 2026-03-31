#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001DB1FC
// Address: 0x1db1fc - 0x1db290
void sub_001DB1FC_0x1db1fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1db1fcu;

    // 0x1db1fc: 0x27bdffc0
    ctx->pc = 0x1db1fcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1db200: 0xffb00020
    ctx->pc = 0x1db200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1db204: 0xffbe0028
    ctx->pc = 0x1db204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 30));
    // 0x1db208: 0xffbf0030
    ctx->pc = 0x1db208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1db20c: 0x3a0f02d
    ctx->pc = 0x1db20cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db210: 0x27c20010
    ctx->pc = 0x1db210u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 16));
    // 0x1db214: 0x3c0202d
    ctx->pc = 0x1db214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db218: 0x40282d
    ctx->pc = 0x1db218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db21c: 0xc07a80b
    ctx->pc = 0x1DB21Cu;
    SET_GPR_U32(ctx, 31, 0x1DB224u);
    ctx->pc = 0x1EA02Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA02C_0x1ea02c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB224u; }
    }
    if (ctx->pc != 0x1DB224u) { return; }
    ctx->pc = 0x1DB224u;
    // 0x1db224: 0x4410004
    ctx->pc = 0x1DB224u;
    {
        const bool branch_taken_0x1db224 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1db224) {
            ctx->pc = 0x1DB238u;
            goto label_1db238;
        }
    }
    ctx->pc = 0x1DB22Cu;
    // 0x1db22c: 0x24020001
    ctx->pc = 0x1db22cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db230: 0x10000010
    ctx->pc = 0x1DB230u;
    {
        const bool branch_taken_0x1db230 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1db230) {
            ctx->pc = 0x1DB274u;
            goto label_1db274;
        }
    }
    ctx->pc = 0x1DB238u;
label_1db238:
    // 0x1db238: 0xdfc30000
    ctx->pc = 0x1db238u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1db23c: 0x60102d
    ctx->pc = 0x1db23cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db240: 0x21178
    ctx->pc = 0x1db240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x1db244: 0x43102f
    ctx->pc = 0x1db244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x1db248: 0x210b8
    ctx->pc = 0x1db248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x1db24c: 0x43102d
    ctx->pc = 0x1db24cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1db250: 0x280f8
    ctx->pc = 0x1db250u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << 3);
    // 0x1db254: 0xdfc20008
    ctx->pc = 0x1db254u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1db258: 0x40202d
    ctx->pc = 0x1db258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db25c: 0x240503e8
    ctx->pc = 0x1db25cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1db260: 0xc043ec6
    ctx->pc = 0x1DB260u;
    SET_GPR_U32(ctx, 31, 0x1DB268u);
    ctx->pc = 0x10FB18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FB18_0x10fb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB268u; }
    }
    if (ctx->pc != 0x1DB268u) { return; }
    ctx->pc = 0x1DB268u;
    // 0x1db268: 0x202102d
    ctx->pc = 0x1db268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1db26c: 0x2103c
    ctx->pc = 0x1db26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db270: 0x2103f
    ctx->pc = 0x1db270u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1db274:
    // 0x1db274: 0x3c0e82d
    ctx->pc = 0x1db274u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db278: 0xdfb00020
    ctx->pc = 0x1db278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db27c: 0xdfbe0028
    ctx->pc = 0x1db27cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1db280: 0xdfbf0030
    ctx->pc = 0x1db280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db284: 0x27bd0040
    ctx->pc = 0x1db284u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1db288: 0x3e00008
    ctx->pc = 0x1DB288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB238u: goto label_1db238;
            case 0x1DB274u: goto label_1db274;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB290u;
}
