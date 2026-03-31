#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00138518
// Address: 0x138518 - 0x138580
void sub_00138518_0x138518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x138518u;

    // 0x138518: 0x27bdffe0
    ctx->pc = 0x138518u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13851c: 0xffb00000
    ctx->pc = 0x13851cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x138520: 0x80802d
    ctx->pc = 0x138520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138524: 0xffb10008
    ctx->pc = 0x138524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x138528: 0xffbf0010
    ctx->pc = 0x138528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13852c: 0xc04e0bc
    ctx->pc = 0x13852Cu;
    SET_GPR_U32(ctx, 31, 0x138534u);
    ctx->pc = 0x138530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1382F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001382F0_0x1382f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138534u; }
    }
    if (ctx->pc != 0x138534u) { return; }
    ctx->pc = 0x138534u;
    // 0x138534: 0x200202d
    ctx->pc = 0x138534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138538: 0xc04629c
    ctx->pc = 0x138538u;
    SET_GPR_U32(ctx, 31, 0x138540u);
    ctx->pc = 0x13853Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118A70_0x118a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138540u; }
    }
    if (ctx->pc != 0x138540u) { return; }
    ctx->pc = 0x138540u;
    // 0x138540: 0x3c040024
    ctx->pc = 0x138540u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x138544: 0x40802d
    ctx->pc = 0x138544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138548: 0x2484c760
    ctx->pc = 0x138548u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952800));
    // 0x13854c: 0x6010003
    ctx->pc = 0x13854Cu;
    {
        const bool branch_taken_0x13854c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x138550u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13854c) {
            ctx->pc = 0x13855Cu;
            goto label_13855c;
        }
    }
    ctx->pc = 0x138554u;
    // 0x138554: 0xc045a12
    ctx->pc = 0x138554u;
    SET_GPR_U32(ctx, 31, 0x13855Cu);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13855Cu; }
    }
    if (ctx->pc != 0x13855Cu) { return; }
    ctx->pc = 0x13855Cu;
label_13855c:
    // 0x13855c: 0xc04e0ca
    ctx->pc = 0x13855Cu;
    SET_GPR_U32(ctx, 31, 0x138564u);
    ctx->pc = 0x138328u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138328_0x138328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138564u; }
    }
    if (ctx->pc != 0x138564u) { return; }
    ctx->pc = 0x138564u;
    // 0x138564: 0x200102d
    ctx->pc = 0x138564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138568: 0xdfb10008
    ctx->pc = 0x138568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13856c: 0xdfb00000
    ctx->pc = 0x13856cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138570: 0xdfbf0010
    ctx->pc = 0x138570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138574: 0x3e00008
    ctx->pc = 0x138574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138578u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13855Cu: goto label_13855c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13857Cu;
    // 0x13857c: 0x0
    ctx->pc = 0x13857cu;
    // NOP
}
