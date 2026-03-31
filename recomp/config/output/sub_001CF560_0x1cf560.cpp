#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CF560
// Address: 0x1cf560 - 0x1cf5f0
void sub_001CF560_0x1cf560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cf560u;

    // 0x1cf560: 0x27bdffb0
    ctx->pc = 0x1cf560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cf564: 0xffbf0040
    ctx->pc = 0x1cf564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cf568: 0x7fb30030
    ctx->pc = 0x1cf568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cf56c: 0x7fb20020
    ctx->pc = 0x1cf56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cf570: 0x80982d
    ctx->pc = 0x1cf570u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf574: 0x7fb10010
    ctx->pc = 0x1cf574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cf578: 0xa0902d
    ctx->pc = 0x1cf578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf57c: 0xc0882d
    ctx->pc = 0x1cf57cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf580: 0x7fb00000
    ctx->pc = 0x1cf580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cf584: 0xe0802d
    ctx->pc = 0x1cf584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf588: 0x100302d
    ctx->pc = 0x1cf588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf58c: 0xc07496c
    ctx->pc = 0x1CF58Cu;
    SET_GPR_U32(ctx, 31, 0x1CF594u);
    ctx->pc = 0x1CF590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D25B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D25B0_0x1d25b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF594u; }
    }
    if (ctx->pc != 0x1CF594u) { return; }
    ctx->pc = 0x1CF594u;
    // 0x1cf594: 0xc06cb34
    ctx->pc = 0x1CF594u;
    SET_GPR_U32(ctx, 31, 0x1CF59Cu);
    ctx->pc = 0x1CF598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B2CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2CD0_0x1b2cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF59Cu; }
    }
    if (ctx->pc != 0x1CF59Cu) { return; }
    ctx->pc = 0x1CF59Cu;
    // 0x1cf59c: 0x324600ff
    ctx->pc = 0x1cf59cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 18), 255));
    // 0x1cf5a0: 0x220282d
    ctx->pc = 0x1cf5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf5a4: 0xc0749f4
    ctx->pc = 0x1CF5A4u;
    SET_GPR_U32(ctx, 31, 0x1CF5ACu);
    ctx->pc = 0x1CF5A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D27D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D27D0_0x1d27d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF5ACu; }
    }
    if (ctx->pc != 0x1CF5ACu) { return; }
    ctx->pc = 0x1CF5ACu;
    // 0x1cf5ac: 0x16000003
    ctx->pc = 0x1CF5ACu;
    {
        const bool branch_taken_0x1cf5ac = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF5B0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
        if (branch_taken_0x1cf5ac) {
            ctx->pc = 0x1CF5BCu;
            goto label_1cf5bc;
        }
    }
    ctx->pc = 0x1CF5B4u;
    // 0x1cf5b4: 0x10000006
    ctx->pc = 0x1CF5B4u;
    {
        const bool branch_taken_0x1cf5b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF5B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1cf5b4) {
            ctx->pc = 0x1CF5D0u;
            goto label_1cf5d0;
        }
    }
    ctx->pc = 0x1CF5BCu;
label_1cf5bc:
    // 0x1cf5bc: 0x260282d
    ctx->pc = 0x1cf5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf5c0: 0x8c2466c8
    ctx->pc = 0x1cf5c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 26312)));
    // 0x1cf5c4: 0xc0737f8
    ctx->pc = 0x1CF5C4u;
    SET_GPR_U32(ctx, 31, 0x1CF5CCu);
    ctx->pc = 0x1CF5C8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CDFE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDFE0_0x1cdfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF5CCu; }
    }
    if (ctx->pc != 0x1CF5CCu) { return; }
    ctx->pc = 0x1CF5CCu;
    // 0x1cf5cc: 0x24020003
    ctx->pc = 0x1cf5ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1cf5d0:
    // 0x1cf5d0: 0xdfbf0040
    ctx->pc = 0x1cf5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cf5d4: 0x7bb30030
    ctx->pc = 0x1cf5d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cf5d8: 0x7bb20020
    ctx->pc = 0x1cf5d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf5dc: 0x7bb10010
    ctx->pc = 0x1cf5dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf5e0: 0x7bb00000
    ctx->pc = 0x1cf5e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf5e4: 0x3e00008
    ctx->pc = 0x1CF5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF5E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CF5BCu: goto label_1cf5bc;
            case 0x1CF5D0u: goto label_1cf5d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CF5ECu;
    // 0x1cf5ec: 0x0
    ctx->pc = 0x1cf5ecu;
    // NOP
}
