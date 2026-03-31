#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00182C08
// Address: 0x182c08 - 0x182c48
void sub_00182C08_0x182c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x182c08u;

    // 0x182c08: 0x27bdfff0
    ctx->pc = 0x182c08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x182c0c: 0xffb00000
    ctx->pc = 0x182c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182c10: 0xffbf0008
    ctx->pc = 0x182c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x182c14: 0xc060aa6
    ctx->pc = 0x182C14u;
    SET_GPR_U32(ctx, 31, 0x182C1Cu);
    ctx->pc = 0x182C18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182A98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182A98_0x182a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182C1Cu; }
    }
    if (ctx->pc != 0x182C1Cu) { return; }
    ctx->pc = 0x182C1Cu;
    // 0x182c1c: 0x3c037fff
    ctx->pc = 0x182c1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x182c20: 0x3c048101
    ctx->pc = 0x182c20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)33025 << 16));
    // 0x182c24: 0x3463ffff
    ctx->pc = 0x182c24u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x182c28: 0x14430002
    ctx->pc = 0x182C28u;
    {
        const bool branch_taken_0x182c28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x182C2Cu;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 36866));
        if (branch_taken_0x182c28) {
            ctx->pc = 0x182C34u;
            goto label_182c34;
        }
    }
    ctx->pc = 0x182C30u;
    // 0x182c30: 0xae040000
    ctx->pc = 0x182c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_182c34:
    // 0x182c34: 0xdfb00000
    ctx->pc = 0x182c34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182c38: 0xdfbf0008
    ctx->pc = 0x182c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182c3c: 0x3e00008
    ctx->pc = 0x182C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182C40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182C34u: goto label_182c34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182C44u;
    // 0x182c44: 0x0
    ctx->pc = 0x182c44u;
    // NOP
}
