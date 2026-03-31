#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00178BC0
// Address: 0x178bc0 - 0x178c38
void sub_00178BC0_0x178bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x178bc0u;

    // 0x178bc0: 0x27bdffd0
    ctx->pc = 0x178bc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178bc4: 0xffb00000
    ctx->pc = 0x178bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178bc8: 0x24b00004
    ctx->pc = 0x178bc8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 5), 4));
    // 0x178bcc: 0xffb10008
    ctx->pc = 0x178bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178bd0: 0x882d
    ctx->pc = 0x178bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bd4: 0xffb20010
    ctx->pc = 0x178bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x178bd8: 0xc0902d
    ctx->pc = 0x178bd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bdc: 0xffb30018
    ctx->pc = 0x178bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x178be0: 0x80982d
    ctx->pc = 0x178be0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178be4: 0xffbf0020
    ctx->pc = 0x178be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x178be8: 0xaca00000
    ctx->pc = 0x178be8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x178bec: 0x0
    ctx->pc = 0x178becu;
    // NOP
label_178bf0:
    // 0x178bf0: 0xc05e30e
    ctx->pc = 0x178BF0u;
    SET_GPR_U32(ctx, 31, 0x178BF8u);
    ctx->pc = 0x178BF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x178C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00178C38_0x178c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178BF8u; }
    }
    if (ctx->pc != 0x178BF8u) { return; }
    ctx->pc = 0x178BF8u;
    // 0x178bf8: 0x260202d
    ctx->pc = 0x178bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bfc: 0x220302d
    ctx->pc = 0x178bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c00: 0x26310001
    ctx->pc = 0x178c00u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x178c04: 0x200382d
    ctx->pc = 0x178c04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c08: 0x26100010
    ctx->pc = 0x178c08u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
    // 0x178c0c: 0xc059bc6
    ctx->pc = 0x178C0Cu;
    SET_GPR_U32(ctx, 31, 0x178C14u);
    ctx->pc = 0x178C10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x166F18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166F18_0x166f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178C14u; }
    }
    if (ctx->pc != 0x178C14u) { return; }
    ctx->pc = 0x178C14u;
    // 0x178c14: 0x2a220003
    ctx->pc = 0x178c14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 3));
    // 0x178c18: 0x1440fff5
    ctx->pc = 0x178C18u;
    {
        const bool branch_taken_0x178c18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x178C1Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x178c18) {
            ctx->pc = 0x178BF0u;
            goto label_178bf0;
        }
    }
    ctx->pc = 0x178C20u;
    // 0x178c20: 0xdfb00000
    ctx->pc = 0x178c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178c24: 0xdfb10008
    ctx->pc = 0x178c24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178c28: 0xdfb20010
    ctx->pc = 0x178c28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178c2c: 0xdfb30018
    ctx->pc = 0x178c2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178c30: 0x3e00008
    ctx->pc = 0x178C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178C34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178BF0u: goto label_178bf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178C38u;
}
