#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018C000
// Address: 0x18c000 - 0x18c070
void sub_0018C000_0x18c000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18c000u;

    // 0x18c000: 0x27bdffe0
    ctx->pc = 0x18c000u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18c004: 0xffbf0010
    ctx->pc = 0x18c004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18c008: 0x7fb00000
    ctx->pc = 0x18c008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18c00c: 0x802d
    ctx->pc = 0x18c00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c010:
    // 0x18c010: 0x3c010029
    ctx->pc = 0x18c010u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18c014: 0x102040
    ctx->pc = 0x18c014u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 1));
    // 0x18c018: 0x8c2341a0
    ctx->pc = 0x18c018u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 16800)));
    // 0x18c01c: 0x902021
    ctx->pc = 0x18c01cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x18c020: 0x421c0
    ctx->pc = 0x18c020u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 7));
    // 0x18c024: 0x642021
    ctx->pc = 0x18c024u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18c028: 0x8c830004
    ctx->pc = 0x18c028u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18c02c: 0x10600006
    ctx->pc = 0x18C02Cu;
    {
        const bool branch_taken_0x18c02c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x18c02c) {
            ctx->pc = 0x18C048u;
            goto label_18c048;
        }
    }
    ctx->pc = 0x18C034u;
    // 0x18c034: 0x8c83001c
    ctx->pc = 0x18c034u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x18c038: 0x10600003
    ctx->pc = 0x18C038u;
    {
        const bool branch_taken_0x18c038 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x18c038) {
            ctx->pc = 0x18C048u;
            goto label_18c048;
        }
    }
    ctx->pc = 0x18C040u;
    // 0x18c040: 0xc06301c
    ctx->pc = 0x18C040u;
    SET_GPR_U32(ctx, 31, 0x18C048u);
    ctx->pc = 0x18C070u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018C070_0x18c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C048u; }
    }
    if (ctx->pc != 0x18C048u) { return; }
    ctx->pc = 0x18C048u;
label_18c048:
    // 0x18c048: 0x26100001
    ctx->pc = 0x18c048u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x18c04c: 0x2a030280
    ctx->pc = 0x18c04cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 640));
    // 0x18c050: 0x1460ffef
    ctx->pc = 0x18C050u;
    {
        const bool branch_taken_0x18c050 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x18c050) {
            ctx->pc = 0x18C010u;
            goto label_18c010;
        }
    }
    ctx->pc = 0x18C058u;
    // 0x18c058: 0xdfbf0010
    ctx->pc = 0x18c058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c05c: 0x7bb00000
    ctx->pc = 0x18c05cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c060: 0x3e00008
    ctx->pc = 0x18C060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C064u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C010u: goto label_18c010;
            case 0x18C048u: goto label_18c048;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18C068u;
    // 0x18c068: 0x0
    ctx->pc = 0x18c068u;
    // NOP
    // 0x18c06c: 0x0
    ctx->pc = 0x18c06cu;
    // NOP
}
