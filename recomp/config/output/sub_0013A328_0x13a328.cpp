#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013A328
// Address: 0x13a328 - 0x13a380
void sub_0013A328_0x13a328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13a328u;

    // 0x13a328: 0x27bdffe0
    ctx->pc = 0x13a328u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13a32c: 0x42600
    ctx->pc = 0x13a32cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
    // 0x13a330: 0xffb10008
    ctx->pc = 0x13a330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13a334: 0x58e00
    ctx->pc = 0x13a334u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 5), 24));
    // 0x13a338: 0x118e03
    ctx->pc = 0x13a338u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x13a33c: 0xffb00000
    ctx->pc = 0x13a33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13a340: 0xffbf0010
    ctx->pc = 0x13a340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13a344: 0xc04e8bc
    ctx->pc = 0x13A344u;
    SET_GPR_U32(ctx, 31, 0x13A34Cu);
    ctx->pc = 0x13A348u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    ctx->pc = 0x13A2F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A2F0_0x13a2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A34Cu; }
    }
    if (ctx->pc != 0x13A34Cu) { return; }
    ctx->pc = 0x13A34Cu;
    // 0x13a34c: 0x220202d
    ctx->pc = 0x13a34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a350: 0xc04e8bc
    ctx->pc = 0x13A350u;
    SET_GPR_U32(ctx, 31, 0x13A358u);
    ctx->pc = 0x13A354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13A2F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A2F0_0x13a2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A358u; }
    }
    if (ctx->pc != 0x13A358u) { return; }
    ctx->pc = 0x13A358u;
    // 0x13a358: 0x2403ffff
    ctx->pc = 0x13a358u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13a35c: 0x2028026
    ctx->pc = 0x13a35cu;
    SET_GPR_U32(ctx, 16, XOR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13a360: 0x102d
    ctx->pc = 0x13a360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a364: 0x70100b
    ctx->pc = 0x13a364u;
    if (GPR_U32(ctx, 16) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x13a368: 0xdfb00000
    ctx->pc = 0x13a368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a36c: 0xdfb10008
    ctx->pc = 0x13a36cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13a370: 0xdfbf0010
    ctx->pc = 0x13a370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a374: 0x3e00008
    ctx->pc = 0x13A374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A378u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A37Cu;
    // 0x13a37c: 0x0
    ctx->pc = 0x13a37cu;
    // NOP
}
