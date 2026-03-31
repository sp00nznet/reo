#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015F900
// Address: 0x15f900 - 0x15f968
void sub_0015F900_0x15f900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15f900u;

    // 0x15f900: 0x27bdffe0
    ctx->pc = 0x15f900u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15f904: 0xffb00000
    ctx->pc = 0x15f904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15f908: 0xa0802d
    ctx->pc = 0x15f908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f90c: 0xffb10008
    ctx->pc = 0x15f90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15f910: 0x80882d
    ctx->pc = 0x15f910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f914: 0x24040008
    ctx->pc = 0x15f914u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x15f918: 0xffb20010
    ctx->pc = 0x15f918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15f91c: 0xffbf0018
    ctx->pc = 0x15f91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x15f920: 0xc040c18
    ctx->pc = 0x15F920u;
    SET_GPR_U32(ctx, 31, 0x15F928u);
    ctx->pc = 0x15F924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x103060u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103060_0x103060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F928u; }
    }
    if (ctx->pc != 0x15F928u) { return; }
    ctx->pc = 0x15F928u;
    // 0x15f928: 0x2604000f
    ctx->pc = 0x15f928u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 15));
    // 0x15f92c: 0x2a030000
    ctx->pc = 0x15f92cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 0));
    // 0x15f930: 0xac510080
    ctx->pc = 0x15f930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 17));
    // 0x15f934: 0x83800b
    ctx->pc = 0x15f934u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 4));
    // 0x15f938: 0x40202d
    ctx->pc = 0x15f938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f93c: 0x240282d
    ctx->pc = 0x15f93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f940: 0xc040d4c
    ctx->pc = 0x15F940u;
    SET_GPR_U32(ctx, 31, 0x15F948u);
    ctx->pc = 0x15F944u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 16), 4));
    ctx->pc = 0x103530u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103530_0x103530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F948u; }
    }
    if (ctx->pc != 0x15F948u) { return; }
    ctx->pc = 0x15F948u;
    // 0x15f948: 0x102d
    ctx->pc = 0x15f948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f94c: 0xdfb00000
    ctx->pc = 0x15f94cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f950: 0xdfb10008
    ctx->pc = 0x15f950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15f954: 0xdfb20010
    ctx->pc = 0x15f954u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f958: 0xdfbf0018
    ctx->pc = 0x15f958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15f95c: 0x3e00008
    ctx->pc = 0x15F95Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F960u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15F964u;
    // 0x15f964: 0x0
    ctx->pc = 0x15f964u;
    // NOP
}
