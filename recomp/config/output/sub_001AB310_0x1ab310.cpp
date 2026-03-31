#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AB310
// Address: 0x1ab310 - 0x1ab3c0
void sub_001AB310_0x1ab310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ab310u;

    // 0x1ab310: 0x80302d
    ctx->pc = 0x1ab310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab314: 0x240501a6
    ctx->pc = 0x1ab314u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 422));
    // 0x1ab318: 0x3c040023
    ctx->pc = 0x1ab318u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x1ab31c: 0x806ac14
    ctx->pc = 0x1AB31Cu;
    ctx->pc = 0x1AB320u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14272));
    ctx->pc = 0x1AB050u;
    sub_001AB050_0x1ab050(rdram, ctx, runtime); return;
    ctx->pc = 0x1AB324u;
    // 0x1ab324: 0x0
    ctx->pc = 0x1ab324u;
    // NOP
    // 0x1ab328: 0x0
    ctx->pc = 0x1ab328u;
    // NOP
    // 0x1ab32c: 0x0
    ctx->pc = 0x1ab32cu;
    // NOP
    // 0x1ab330: 0x27bdffe0
    ctx->pc = 0x1ab330u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ab334: 0x80302d
    ctx->pc = 0x1ab334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab338: 0x3c050025
    ctx->pc = 0x1ab338u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1ab33c: 0xffbf0000
    ctx->pc = 0x1ab33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab340: 0x27a40010
    ctx->pc = 0x1ab340u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ab344: 0xc042a0c
    ctx->pc = 0x1AB344u;
    SET_GPR_U32(ctx, 31, 0x1AB34Cu);
    ctx->pc = 0x1AB348u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294966488));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB34Cu; }
    }
    if (ctx->pc != 0x1AB34Cu) { return; }
    ctx->pc = 0x1AB34Cu;
    // 0x1ab34c: 0x3c05002b
    ctx->pc = 0x1ab34cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)43 << 16));
    // 0x1ab350: 0x27a40010
    ctx->pc = 0x1ab350u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ab354: 0x24a52970
    ctx->pc = 0x1ab354u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 10608));
    // 0x1ab358: 0x24060004
    ctx->pc = 0x1ab358u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ab35c: 0xc06a6b0
    ctx->pc = 0x1AB35Cu;
    SET_GPR_U32(ctx, 31, 0x1AB364u);
    ctx->pc = 0x1AB360u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A9AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9AC0_0x1a9ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB364u; }
    }
    if (ctx->pc != 0x1AB364u) { return; }
    ctx->pc = 0x1AB364u;
    // 0x1ab364: 0xdfbf0000
    ctx->pc = 0x1ab364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab368: 0x3e00008
    ctx->pc = 0x1AB368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB36Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB370u;
    // 0x1ab370: 0x27bdffe0
    ctx->pc = 0x1ab370u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ab374: 0x3c050025
    ctx->pc = 0x1ab374u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1ab378: 0xffbf0000
    ctx->pc = 0x1ab378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab37c: 0x3c010032
    ctx->pc = 0x1ab37cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1ab380: 0x942643da
    ctx->pc = 0x1ab380u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17370)));
    // 0x1ab384: 0x27a40010
    ctx->pc = 0x1ab384u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ab388: 0xc042a0c
    ctx->pc = 0x1AB388u;
    SET_GPR_U32(ctx, 31, 0x1AB390u);
    ctx->pc = 0x1AB38Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294966504));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB390u; }
    }
    if (ctx->pc != 0x1AB390u) { return; }
    ctx->pc = 0x1AB390u;
    // 0x1ab390: 0x3c050057
    ctx->pc = 0x1ab390u;
    SET_GPR_U32(ctx, 5, ((uint32_t)87 << 16));
    // 0x1ab394: 0x24060002
    ctx->pc = 0x1ab394u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ab398: 0x27a40010
    ctx->pc = 0x1ab398u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ab39c: 0x24a5ac40
    ctx->pc = 0x1ab39cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294945856));
    // 0x1ab3a0: 0xc06a6b0
    ctx->pc = 0x1AB3A0u;
    SET_GPR_U32(ctx, 31, 0x1AB3A8u);
    ctx->pc = 0x1AB3A4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A9AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9AC0_0x1a9ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3A8u; }
    }
    if (ctx->pc != 0x1AB3A8u) { return; }
    ctx->pc = 0x1AB3A8u;
    // 0x1ab3a8: 0xdfbf0000
    ctx->pc = 0x1ab3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab3ac: 0x3e00008
    ctx->pc = 0x1AB3ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB3B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB3B4u;
    // 0x1ab3b4: 0x0
    ctx->pc = 0x1ab3b4u;
    // NOP
    // 0x1ab3b8: 0x0
    ctx->pc = 0x1ab3b8u;
    // NOP
    // 0x1ab3bc: 0x0
    ctx->pc = 0x1ab3bcu;
    // NOP
}
