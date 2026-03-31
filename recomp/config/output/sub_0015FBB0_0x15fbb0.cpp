#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015FBB0
// Address: 0x15fbb0 - 0x15fc18
void sub_0015FBB0_0x15fbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15fbb0u;

    // 0x15fbb0: 0x27bdffe0
    ctx->pc = 0x15fbb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15fbb4: 0xffb10008
    ctx->pc = 0x15fbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15fbb8: 0xffb00000
    ctx->pc = 0x15fbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15fbbc: 0xffbf0010
    ctx->pc = 0x15fbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15fbc0: 0xc057ff0
    ctx->pc = 0x15FBC0u;
    SET_GPR_U32(ctx, 31, 0x15FBC8u);
    ctx->pc = 0x15FBC4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FBC8u; }
    }
    if (ctx->pc != 0x15FBC8u) { return; }
    ctx->pc = 0x15FBC8u;
    // 0x15fbc8: 0x14400007
    ctx->pc = 0x15FBC8u;
    {
        const bool branch_taken_0x15fbc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15FBCCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15fbc8) {
            ctx->pc = 0x15FBE8u;
            goto label_15fbe8;
        }
    }
    ctx->pc = 0x15FBD0u;
    // 0x15fbd0: 0x3c040024
    ctx->pc = 0x15fbd0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15fbd4: 0xc058dd4
    ctx->pc = 0x15FBD4u;
    SET_GPR_U32(ctx, 31, 0x15FBDCu);
    ctx->pc = 0x15FBD8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964024));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FBDCu; }
    }
    if (ctx->pc != 0x15FBDCu) { return; }
    ctx->pc = 0x15FBDCu;
    // 0x15fbdc: 0x10000008
    ctx->pc = 0x15FBDCu;
    {
        const bool branch_taken_0x15fbdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15FBE0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15fbdc) {
            ctx->pc = 0x15FC00u;
            goto label_15fc00;
        }
    }
    ctx->pc = 0x15FBE4u;
    // 0x15fbe4: 0x0
    ctx->pc = 0x15fbe4u;
    // NOP
label_15fbe8:
    // 0x15fbe8: 0xc057f06
    ctx->pc = 0x15FBE8u;
    SET_GPR_U32(ctx, 31, 0x15FBF0u);
    ctx->pc = 0x15FC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FC18_0x15fc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FBF0u; }
    }
    if (ctx->pc != 0x15FBF0u) { return; }
    ctx->pc = 0x15FBF0u;
    // 0x15fbf0: 0x220202d
    ctx->pc = 0x15fbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fbf4: 0xc05791e
    ctx->pc = 0x15FBF4u;
    SET_GPR_U32(ctx, 31, 0x15FBFCu);
    ctx->pc = 0x15FBF8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15E478u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E478_0x15e478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FBFCu; }
    }
    if (ctx->pc != 0x15FBFCu) { return; }
    ctx->pc = 0x15FBFCu;
    // 0x15fbfc: 0x2021021
    ctx->pc = 0x15fbfcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_15fc00:
    // 0x15fc00: 0xdfb00000
    ctx->pc = 0x15fc00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fc04: 0xdfb10008
    ctx->pc = 0x15fc04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15fc08: 0xdfbf0010
    ctx->pc = 0x15fc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fc0c: 0x3e00008
    ctx->pc = 0x15FC0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FC10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FBE8u: goto label_15fbe8;
            case 0x15FC00u: goto label_15fc00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15FC14u;
    // 0x15fc14: 0x0
    ctx->pc = 0x15fc14u;
    // NOP
}
