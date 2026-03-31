#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015BAF0
// Address: 0x15baf0 - 0x15bba0
void sub_0015BAF0_0x15baf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15baf0u;

    // 0x15baf0: 0x27bdffe0
    ctx->pc = 0x15baf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15baf4: 0x80182d
    ctx->pc = 0x15baf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15baf8: 0xffb20010
    ctx->pc = 0x15baf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15bafc: 0xc0902d
    ctx->pc = 0x15bafcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bb00: 0xffb10008
    ctx->pc = 0x15bb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15bb04: 0xa0882d
    ctx->pc = 0x15bb04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bb08: 0xffb00000
    ctx->pc = 0x15bb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15bb0c: 0x16400008
    ctx->pc = 0x15BB0Cu;
    {
        const bool branch_taken_0x15bb0c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x15BB10u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x15bb0c) {
            ctx->pc = 0x15BB30u;
            goto label_15bb30;
        }
    }
    ctx->pc = 0x15BB14u;
    // 0x15bb14: 0x711826
    ctx->pc = 0x15bb14u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x15bb18: 0x3c027fff
    ctx->pc = 0x15bb18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x15bb1c: 0x28630000
    ctx->pc = 0x15bb1cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 0));
    // 0x15bb20: 0x3c048000
    ctx->pc = 0x15bb20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x15bb24: 0x3442ffff
    ctx->pc = 0x15bb24u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x15bb28: 0x10000017
    ctx->pc = 0x15BB28u;
    {
        const bool branch_taken_0x15bb28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15BB2Cu;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
        if (branch_taken_0x15bb28) {
            ctx->pc = 0x15BB88u;
            goto label_15bb88;
        }
    }
    ctx->pc = 0x15BB30u;
label_15bb30:
    // 0x15bb30: 0xc0448ba
    ctx->pc = 0x15BB30u;
    SET_GPR_U32(ctx, 31, 0x15BB38u);
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB38u; }
    }
    if (ctx->pc != 0x15BB38u) { return; }
    ctx->pc = 0x15BB38u;
    // 0x15bb38: 0x40802d
    ctx->pc = 0x15bb38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bb3c: 0xc0448ba
    ctx->pc = 0x15BB3Cu;
    SET_GPR_U32(ctx, 31, 0x15BB44u);
    ctx->pc = 0x15BB40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB44u; }
    }
    if (ctx->pc != 0x15BB44u) { return; }
    ctx->pc = 0x15BB44u;
    // 0x15bb44: 0x40282d
    ctx->pc = 0x15bb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bb48: 0xc04476c
    ctx->pc = 0x15BB48u;
    SET_GPR_U32(ctx, 31, 0x15BB50u);
    ctx->pc = 0x15BB4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB50u; }
    }
    if (ctx->pc != 0x15BB50u) { return; }
    ctx->pc = 0x15BB50u;
    // 0x15bb50: 0x40802d
    ctx->pc = 0x15bb50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bb54: 0xc0448ba
    ctx->pc = 0x15BB54u;
    SET_GPR_U32(ctx, 31, 0x15BB5Cu);
    ctx->pc = 0x15BB58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB5Cu; }
    }
    if (ctx->pc != 0x15BB5Cu) { return; }
    ctx->pc = 0x15BB5Cu;
    // 0x15bb5c: 0x40282d
    ctx->pc = 0x15bb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bb60: 0xc04480e
    ctx->pc = 0x15BB60u;
    SET_GPR_U32(ctx, 31, 0x15BB68u);
    ctx->pc = 0x15BB64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112038_0x112038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB68u; }
    }
    if (ctx->pc != 0x15BB68u) { return; }
    ctx->pc = 0x15BB68u;
    // 0x15bb68: 0x3405ff80
    ctx->pc = 0x15bb68u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
    // 0x15bb6c: 0x52bbc
    ctx->pc = 0x15bb6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x15bb70: 0xc04473c
    ctx->pc = 0x15BB70u;
    SET_GPR_U32(ctx, 31, 0x15BB78u);
    ctx->pc = 0x15BB74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB78u; }
    }
    if (ctx->pc != 0x15BB78u) { return; }
    ctx->pc = 0x15BB78u;
    // 0x15bb78: 0xc0487ca
    ctx->pc = 0x15BB78u;
    SET_GPR_U32(ctx, 31, 0x15BB80u);
    ctx->pc = 0x15BB7Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x121F28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00121F28_0x121f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB80u; }
    }
    if (ctx->pc != 0x15BB80u) { return; }
    ctx->pc = 0x15BB80u;
    // 0x15bb80: 0xc0448e8
    ctx->pc = 0x15BB80u;
    SET_GPR_U32(ctx, 31, 0x15BB88u);
    ctx->pc = 0x15BB84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB88u; }
    }
    if (ctx->pc != 0x15BB88u) { return; }
    ctx->pc = 0x15BB88u;
label_15bb88:
    // 0x15bb88: 0xdfb00000
    ctx->pc = 0x15bb88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bb8c: 0xdfb10008
    ctx->pc = 0x15bb8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15bb90: 0xdfb20010
    ctx->pc = 0x15bb90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bb94: 0xdfbf0018
    ctx->pc = 0x15bb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15bb98: 0x3e00008
    ctx->pc = 0x15BB98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BB9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15BB30u: goto label_15bb30;
            case 0x15BB88u: goto label_15bb88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15BBA0u;
}
