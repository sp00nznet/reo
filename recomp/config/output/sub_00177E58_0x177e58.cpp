#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00177E58
// Address: 0x177e58 - 0x177eb0
void sub_00177E58_0x177e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x177e58u;

    // 0x177e58: 0x27bdffe0
    ctx->pc = 0x177e58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177e5c: 0xffb00000
    ctx->pc = 0x177e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177e60: 0x80802d
    ctx->pc = 0x177e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e64: 0xffb10008
    ctx->pc = 0x177e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177e68: 0xffbf0010
    ctx->pc = 0x177e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x177e6c: 0x8e02000c
    ctx->pc = 0x177e6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x177e70: 0x1440000a
    ctx->pc = 0x177E70u;
    {
        const bool branch_taken_0x177e70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x177E74u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x177e70) {
            ctx->pc = 0x177E9Cu;
            goto label_177e9c;
        }
    }
    ctx->pc = 0x177E78u;
    // 0x177e78: 0xde250000
    ctx->pc = 0x177e78u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x177e7c: 0xc043ea8
    ctx->pc = 0x177E7Cu;
    SET_GPR_U32(ctx, 31, 0x177E84u);
    ctx->pc = 0x177E80u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 304)));
    ctx->pc = 0x10FAA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FAA0_0x10faa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177E84u; }
    }
    if (ctx->pc != 0x177E84u) { return; }
    ctx->pc = 0x177E84u;
    // 0x177e84: 0xde250008
    ctx->pc = 0x177e84u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x177e88: 0xc043ec6
    ctx->pc = 0x177E88u;
    SET_GPR_U32(ctx, 31, 0x177E90u);
    ctx->pc = 0x177E8Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10FB18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FB18_0x10fb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177E90u; }
    }
    if (ctx->pc != 0x177E90u) { return; }
    ctx->pc = 0x177E90u;
    // 0x177e90: 0xde030128
    ctx->pc = 0x177e90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x177e94: 0x62182d
    ctx->pc = 0x177e94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x177e98: 0xfe030128
    ctx->pc = 0x177e98u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 296), GPR_U64(ctx, 3));
label_177e9c:
    // 0x177e9c: 0xdfb00000
    ctx->pc = 0x177e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177ea0: 0xdfb10008
    ctx->pc = 0x177ea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177ea4: 0xdfbf0010
    ctx->pc = 0x177ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177ea8: 0x3e00008
    ctx->pc = 0x177EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177EACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177E9Cu: goto label_177e9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x177EB0u;
}
