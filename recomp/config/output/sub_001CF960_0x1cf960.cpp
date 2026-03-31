#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CF960
// Address: 0x1cf960 - 0x1cf9d0
void sub_001CF960_0x1cf960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cf960u;

    // 0x1cf960: 0x27bdffd0
    ctx->pc = 0x1cf960u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cf964: 0xffbf0020
    ctx->pc = 0x1cf964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cf968: 0x7fb10010
    ctx->pc = 0x1cf968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cf96c: 0xe0882d
    ctx->pc = 0x1cf96cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf970: 0x7fb00000
    ctx->pc = 0x1cf970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cf974: 0x80382d
    ctx->pc = 0x1cf974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf978: 0xa0202d
    ctx->pc = 0x1cf978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf97c: 0xc073e40
    ctx->pc = 0x1CF97Cu;
    SET_GPR_U32(ctx, 31, 0x1CF984u);
    ctx->pc = 0x1CF980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CF900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF900_0x1cf900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF984u; }
    }
    if (ctx->pc != 0x1CF984u) { return; }
    ctx->pc = 0x1CF984u;
    // 0x1cf984: 0x40802d
    ctx->pc = 0x1cf984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf988: 0x16000003
    ctx->pc = 0x1CF988u;
    {
        const bool branch_taken_0x1cf988 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cf988) {
            ctx->pc = 0x1CF998u;
            goto label_1cf998;
        }
    }
    ctx->pc = 0x1CF990u;
    // 0x1cf990: 0x10000007
    ctx->pc = 0x1CF990u;
    {
        const bool branch_taken_0x1cf990 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF994u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cf990) {
            ctx->pc = 0x1CF9B0u;
            goto label_1cf9b0;
        }
    }
    ctx->pc = 0x1CF998u;
label_1cf998:
    // 0x1cf998: 0x8e050004
    ctx->pc = 0x1cf998u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cf99c: 0xe0202d
    ctx->pc = 0x1cf99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf9a0: 0xc041eac
    ctx->pc = 0x1CF9A0u;
    SET_GPR_U32(ctx, 31, 0x1CF9A8u);
    ctx->pc = 0x1CF9A4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3204));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9A8u; }
    }
    if (ctx->pc != 0x1CF9A8u) { return; }
    ctx->pc = 0x1CF9A8u;
    // 0x1cf9a8: 0xa611000a
    ctx->pc = 0x1cf9a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 17));
    // 0x1cf9ac: 0x24020001
    ctx->pc = 0x1cf9acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1cf9b0:
    // 0x1cf9b0: 0xdfbf0020
    ctx->pc = 0x1cf9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf9b4: 0x7bb10010
    ctx->pc = 0x1cf9b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf9b8: 0x7bb00000
    ctx->pc = 0x1cf9b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf9bc: 0x3e00008
    ctx->pc = 0x1CF9BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF9C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CF998u: goto label_1cf998;
            case 0x1CF9B0u: goto label_1cf9b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CF9C4u;
    // 0x1cf9c4: 0x0
    ctx->pc = 0x1cf9c4u;
    // NOP
    // 0x1cf9c8: 0x0
    ctx->pc = 0x1cf9c8u;
    // NOP
    // 0x1cf9cc: 0x0
    ctx->pc = 0x1cf9ccu;
    // NOP
}
