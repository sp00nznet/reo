#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00182A10
// Address: 0x182a10 - 0x182a98
void sub_00182A10_0x182a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x182a10u;

    // 0x182a10: 0x27bdffe0
    ctx->pc = 0x182a10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182a14: 0x24020898
    ctx->pc = 0x182a14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2200));
    // 0x182a18: 0xffb00000
    ctx->pc = 0x182a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182a1c: 0x80802d
    ctx->pc = 0x182a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a20: 0x2024018
    ctx->pc = 0x182a20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)(uint32_t)result); }
    // 0x182a24: 0xffb10008
    ctx->pc = 0x182a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x182a28: 0x3c110028
    ctx->pc = 0x182a28u;
    SET_GPR_U32(ctx, 17, ((uint32_t)40 << 16));
    // 0x182a2c: 0xffbf0010
    ctx->pc = 0x182a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182a30: 0x26255b48
    ctx->pc = 0x182a30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 23368));
    // 0x182a34: 0x1051021
    ctx->pc = 0x182a34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x182a38: 0x8c460800
    ctx->pc = 0x182a38u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 2048)));
    // 0x182a3c: 0x18c0000b
    ctx->pc = 0x182A3Cu;
    {
        const bool branch_taken_0x182a3c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x182A40u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x182a3c) {
            ctx->pc = 0x182A6Cu;
            goto label_182a6c;
        }
    }
    ctx->pc = 0x182A44u;
    // 0x182a44: 0x8c630894
    ctx->pc = 0x182a44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 2196)));
    // 0x182a48: 0x24020001
    ctx->pc = 0x182a48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x182a4c: 0x54620008
    ctx->pc = 0x182A4Cu;
    {
        const bool branch_taken_0x182a4c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x182a4c) {
            ctx->pc = 0x182A50u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2200));
            ctx->pc = 0x182A70u;
            goto label_182a70;
        }
    }
    ctx->pc = 0x182A54u;
    // 0x182a54: 0x24a50400
    ctx->pc = 0x182a54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1024));
    // 0x182a58: 0x24070001
    ctx->pc = 0x182a58u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x182a5c: 0xc061baa
    ctx->pc = 0x182A5Cu;
    SET_GPR_U32(ctx, 31, 0x182A64u);
    ctx->pc = 0x182A60u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    ctx->pc = 0x186EA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00186EA8_0x186ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A64u; }
    }
    if (ctx->pc != 0x182A64u) { return; }
    ctx->pc = 0x182A64u;
    // 0x182a64: 0x50400008
    ctx->pc = 0x182A64u;
    {
        const bool branch_taken_0x182a64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x182a64) {
            ctx->pc = 0x182A68u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x182A88u;
            goto label_182a88;
        }
    }
    ctx->pc = 0x182A6Cu;
label_182a6c:
    // 0x182a6c: 0x24030898
    ctx->pc = 0x182a6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2200));
label_182a70:
    // 0x182a70: 0x26245b48
    ctx->pc = 0x182a70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 23368));
    // 0x182a74: 0x2031818
    ctx->pc = 0x182a74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x182a78: 0x24020001
    ctx->pc = 0x182a78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x182a7c: 0x641821
    ctx->pc = 0x182a7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x182a80: 0xac600894
    ctx->pc = 0x182a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2196), GPR_U32(ctx, 0));
    // 0x182a84: 0xdfb00000
    ctx->pc = 0x182a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_182a88:
    // 0x182a88: 0xdfb10008
    ctx->pc = 0x182a88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182a8c: 0xdfbf0010
    ctx->pc = 0x182a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182a90: 0x3e00008
    ctx->pc = 0x182A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182A94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182A6Cu: goto label_182a6c;
            case 0x182A70u: goto label_182a70;
            case 0x182A88u: goto label_182a88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182A98u;
}
