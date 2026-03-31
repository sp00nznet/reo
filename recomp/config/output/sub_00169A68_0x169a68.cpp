#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169A68
// Address: 0x169a68 - 0x169b28
void sub_00169A68_0x169a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169a68u;

    // 0x169a68: 0x27bdffe0
    ctx->pc = 0x169a68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169a6c: 0x282d
    ctx->pc = 0x169a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a70: 0xffb00000
    ctx->pc = 0x169a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169a74: 0x3c100023
    ctx->pc = 0x169a74u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x169a78: 0x2610ef88
    ctx->pc = 0x169a78u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294963080));
    // 0x169a7c: 0xffb10008
    ctx->pc = 0x169a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169a80: 0x24060089
    ctx->pc = 0x169a80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 137));
    // 0x169a84: 0x80882d
    ctx->pc = 0x169a84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a88: 0xffbf0010
    ctx->pc = 0x169a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169a8c: 0xc0558b4
    ctx->pc = 0x169A8Cu;
    SET_GPR_U32(ctx, 31, 0x169A94u);
    ctx->pc = 0x169A90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1562D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001562D0_0x1562d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169A94u; }
    }
    if (ctx->pc != 0x169A94u) { return; }
    ctx->pc = 0x169A94u;
    // 0x169a94: 0x3c050024
    ctx->pc = 0x169a94u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x169a98: 0x24060190
    ctx->pc = 0x169a98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 400));
    // 0x169a9c: 0x24a50930
    ctx->pc = 0x169a9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2352));
    // 0x169aa0: 0xc055798
    ctx->pc = 0x169AA0u;
    SET_GPR_U32(ctx, 31, 0x169AA8u);
    ctx->pc = 0x169AA4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x155E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00155E60_0x155e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169AA8u; }
    }
    if (ctx->pc != 0x169AA8u) { return; }
    ctx->pc = 0x169AA8u;
    // 0x169aa8: 0x6a220007
    ctx->pc = 0x169aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x169aac: 0x6e220000
    ctx->pc = 0x169aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x169ab0: 0xb2020197
    ctx->pc = 0x169ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 407); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x169ab4: 0xb6020190
    ctx->pc = 0x169ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 400); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x169ab8: 0xae000198
    ctx->pc = 0x169ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 0));
    // 0x169abc: 0xc05a6f8
    ctx->pc = 0x169ABCu;
    SET_GPR_U32(ctx, 31, 0x169AC4u);
    ctx->pc = 0x169AC0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 412));
    ctx->pc = 0x169BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169BE0_0x169be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169AC4u; }
    }
    if (ctx->pc != 0x169AC4u) { return; }
    ctx->pc = 0x169AC4u;
    // 0x169ac4: 0x260401b0
    ctx->pc = 0x169ac4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 432));
    // 0x169ac8: 0xc05d68e
    ctx->pc = 0x169AC8u;
    SET_GPR_U32(ctx, 31, 0x169AD0u);
    ctx->pc = 0x169ACCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x175A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175A38_0x175a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169AD0u; }
    }
    if (ctx->pc != 0x169AD0u) { return; }
    ctx->pc = 0x169AD0u;
    // 0x169ad0: 0xc0599c4
    ctx->pc = 0x169AD0u;
    SET_GPR_U32(ctx, 31, 0x169AD8u);
    ctx->pc = 0x169AD4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 444));
    ctx->pc = 0x166710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166710_0x166710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169AD8u; }
    }
    if (ctx->pc != 0x169AD8u) { return; }
    ctx->pc = 0x169AD8u;
    // 0x169ad8: 0xc05a6ca
    ctx->pc = 0x169AD8u;
    SET_GPR_U32(ctx, 31, 0x169AE0u);
    ctx->pc = 0x169ADCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169B28_0x169b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169AE0u; }
    }
    if (ctx->pc != 0x169AE0u) { return; }
    ctx->pc = 0x169AE0u;
    // 0x169ae0: 0x24020007
    ctx->pc = 0x169ae0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x169ae4: 0x26100220
    ctx->pc = 0x169ae4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 544));
label_169ae8:
    // 0x169ae8: 0x2442ffff
    ctx->pc = 0x169ae8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x169aec: 0xae000000
    ctx->pc = 0x169aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x169af0: 0x0
    ctx->pc = 0x169af0u;
    // NOP
    // 0x169af4: 0x0
    ctx->pc = 0x169af4u;
    // NOP
    // 0x169af8: 0x0
    ctx->pc = 0x169af8u;
    // NOP
    // 0x169afc: 0x441fffa
    ctx->pc = 0x169AFCu;
    {
        const bool branch_taken_0x169afc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x169B00u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967292));
        if (branch_taken_0x169afc) {
            ctx->pc = 0x169AE8u;
            goto label_169ae8;
        }
    }
    ctx->pc = 0x169B04u;
    // 0x169b04: 0x8e250000
    ctx->pc = 0x169b04u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x169b08: 0x3c040023
    ctx->pc = 0x169b08u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x169b0c: 0xc05dd2c
    ctx->pc = 0x169B0Cu;
    SET_GPR_U32(ctx, 31, 0x169B14u);
    ctx->pc = 0x169B10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963528));
    ctx->pc = 0x1774B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001774B0_0x1774b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B14u; }
    }
    if (ctx->pc != 0x169B14u) { return; }
    ctx->pc = 0x169B14u;
    // 0x169b14: 0xdfb00000
    ctx->pc = 0x169b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169b18: 0xdfb10008
    ctx->pc = 0x169b18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169b1c: 0xdfbf0010
    ctx->pc = 0x169b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169b20: 0x3e00008
    ctx->pc = 0x169B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169B24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169AE8u: goto label_169ae8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169B28u;
}
