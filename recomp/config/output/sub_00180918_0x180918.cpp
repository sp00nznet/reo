#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00180918
// Address: 0x180918 - 0x180970
void sub_00180918_0x180918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x180918u;

    // 0x180918: 0x27bdffe0
    ctx->pc = 0x180918u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18091c: 0xffb00000
    ctx->pc = 0x18091cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180920: 0xffbf0010
    ctx->pc = 0x180920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x180924: 0xc062364
    ctx->pc = 0x180924u;
    SET_GPR_U32(ctx, 31, 0x18092Cu);
    ctx->pc = 0x180928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188D90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188D90_0x188d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18092Cu; }
    }
    if (ctx->pc != 0x18092Cu) { return; }
    ctx->pc = 0x18092Cu;
    // 0x18092c: 0x40382d
    ctx->pc = 0x18092cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180930: 0x4e0000a
    ctx->pc = 0x180930u;
    {
        const bool branch_taken_0x180930 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x180934u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 820));
        if (branch_taken_0x180930) {
            ctx->pc = 0x18095Cu;
            goto label_18095c;
        }
    }
    ctx->pc = 0x180938u;
    // 0x180938: 0x3c030027
    ctx->pc = 0x180938u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x18093c: 0x2042018
    ctx->pc = 0x18093cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x180940: 0x24636188
    ctx->pc = 0x180940u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 24968));
    // 0x180944: 0x24060001
    ctx->pc = 0x180944u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x180948: 0xe0102d
    ctx->pc = 0x180948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18094c: 0x642821
    ctx->pc = 0x18094cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x180950: 0xa0182d
    ctx->pc = 0x180950u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180954: 0xaca7000c
    ctx->pc = 0x180954u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
    // 0x180958: 0xac660004
    ctx->pc = 0x180958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
label_18095c:
    // 0x18095c: 0xdfbf0010
    ctx->pc = 0x18095cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180960: 0xdfb00000
    ctx->pc = 0x180960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180964: 0x3e00008
    ctx->pc = 0x180964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180968u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18095Cu: goto label_18095c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18096Cu;
    // 0x18096c: 0x0
    ctx->pc = 0x18096cu;
    // NOP
}
