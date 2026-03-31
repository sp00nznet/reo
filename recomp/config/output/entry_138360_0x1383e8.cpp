#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_138360
// Address: 0x138360 - 0x1383e8
void entry_138360_0x1383e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x138360u;

    // 0x138360: 0x27bdffe0
    ctx->pc = 0x138360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x138364: 0x3c020022
    ctx->pc = 0x138364u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x138368: 0xffb20010
    ctx->pc = 0x138368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13836c: 0x2452bbc4
    ctx->pc = 0x13836cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294949828));
    // 0x138370: 0xffb00000
    ctx->pc = 0x138370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x138374: 0x80802d
    ctx->pc = 0x138374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138378: 0xffb10008
    ctx->pc = 0x138378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13837c: 0xffbf0018
    ctx->pc = 0x13837cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x138380: 0xc050864
    ctx->pc = 0x138380u;
    SET_GPR_U32(ctx, 31, 0x138388u);
    ctx->pc = 0x138384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x142190u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00142190_0x142190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138388u; }
    }
    if (ctx->pc != 0x138388u) { return; }
    ctx->pc = 0x138388u;
    // 0x138388: 0x882d
    ctx->pc = 0x138388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13838c: 0x1040000f
    ctx->pc = 0x13838Cu;
    {
        const bool branch_taken_0x13838c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x138390u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 38400));
        if (branch_taken_0x13838c) {
            ctx->pc = 0x1383CCu;
            goto label_1383cc;
        }
    }
    ctx->pc = 0x138394u;
    // 0x138394: 0xc04e082
    ctx->pc = 0x138394u;
    SET_GPR_U32(ctx, 31, 0x13839Cu);
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13839Cu; }
    }
    if (ctx->pc != 0x13839Cu) { return; }
    ctx->pc = 0x13839Cu;
    // 0x13839c: 0xc04065a
    ctx->pc = 0x13839Cu;
    SET_GPR_U32(ctx, 31, 0x1383A4u);
    ctx->pc = 0x1383A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x101968u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00101968_0x101968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1383A4u; }
    }
    if (ctx->pc != 0x1383A4u) { return; }
    ctx->pc = 0x1383A4u;
    // 0x1383a4: 0x34049601
    ctx->pc = 0x1383a4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 38401));
    // 0x1383a8: 0xc04e082
    ctx->pc = 0x1383A8u;
    SET_GPR_U32(ctx, 31, 0x1383B0u);
    ctx->pc = 0x1383ACu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1383B0u; }
    }
    if (ctx->pc != 0x1383B0u) { return; }
    ctx->pc = 0x1383B0u;
    // 0x1383b0: 0x56000005
    ctx->pc = 0x1383B0u;
    {
        const bool branch_taken_0x1383b0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x1383b0) {
            ctx->pc = 0x1383B4u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x1383C8u;
            goto label_1383c8;
        }
    }
    ctx->pc = 0x1383B8u;
    // 0x1383b8: 0xc0406ba
    ctx->pc = 0x1383B8u;
    SET_GPR_U32(ctx, 31, 0x1383C0u);
    ctx->pc = 0x101AE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00101AE8_0x101ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1383C0u; }
    }
    if (ctx->pc != 0x1383C0u) { return; }
    ctx->pc = 0x1383C0u;
    // 0x1383c0: 0x40882d
    ctx->pc = 0x1383c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1383c4: 0xae400000
    ctx->pc = 0x1383c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1383c8:
    // 0x1383c8: 0x220102d
    ctx->pc = 0x1383c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1383cc:
    // 0x1383cc: 0xdfb00000
    ctx->pc = 0x1383ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1383d0: 0xdfb10008
    ctx->pc = 0x1383d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1383d4: 0xdfb20010
    ctx->pc = 0x1383d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1383d8: 0xdfbf0018
    ctx->pc = 0x1383d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1383dc: 0x3e00008
    ctx->pc = 0x1383DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1383E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1383C8u: goto label_1383c8;
            case 0x1383CCu: goto label_1383cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1383E4u;
    // 0x1383e4: 0x0
    ctx->pc = 0x1383e4u;
    // NOP
}
