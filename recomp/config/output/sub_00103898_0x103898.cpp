#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00103898
// Address: 0x103898 - 0x103938
void sub_00103898_0x103898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x103898u;

    // 0x103898: 0x10a0000a
    ctx->pc = 0x103898u;
    {
        const bool branch_taken_0x103898 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x10389Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
        if (branch_taken_0x103898) {
            ctx->pc = 0x1038C4u;
            goto label_1038c4;
        }
    }
    ctx->pc = 0x1038A0u;
    // 0x1038a0: 0x2403ffff
    ctx->pc = 0x1038a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1038a4: 0x0
    ctx->pc = 0x1038a4u;
    // NOP
label_1038a8:
    // 0x1038a8: 0x2442ffff
    ctx->pc = 0x1038a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1038ac: 0xa0800000
    ctx->pc = 0x1038acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1038b0: 0x0
    ctx->pc = 0x1038b0u;
    // NOP
    // 0x1038b4: 0x0
    ctx->pc = 0x1038b4u;
    // NOP
    // 0x1038b8: 0x0
    ctx->pc = 0x1038b8u;
    // NOP
    // 0x1038bc: 0x1443fffa
    ctx->pc = 0x1038BCu;
    {
        const bool branch_taken_0x1038bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1038C0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x1038bc) {
            ctx->pc = 0x1038A8u;
            goto label_1038a8;
        }
    }
    ctx->pc = 0x1038C4u;
label_1038c4:
    // 0x1038c4: 0x3e00008
    ctx->pc = 0x1038C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1038A8u: goto label_1038a8;
            case 0x1038C4u: goto label_1038c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1038CCu;
    // 0x1038cc: 0x0
    ctx->pc = 0x1038ccu;
    // NOP
    // 0x1038d0: 0x27bdffe0
    ctx->pc = 0x1038d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1038d4: 0xffb00000
    ctx->pc = 0x1038d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1038d8: 0x3c100021
    ctx->pc = 0x1038d8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)33 << 16));
    // 0x1038dc: 0xffb10008
    ctx->pc = 0x1038dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1038e0: 0xa0882d
    ctx->pc = 0x1038e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1038e4: 0xffb20010
    ctx->pc = 0x1038e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1038e8: 0x80902d
    ctx->pc = 0x1038e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1038ec: 0xffbf0018
    ctx->pc = 0x1038ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1038f0: 0x261097f0
    ctx->pc = 0x1038f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294940656));
    // 0x1038f4: 0xc041f4a
    ctx->pc = 0x1038F4u;
    SET_GPR_U32(ctx, 31, 0x1038FCu);
    ctx->pc = 0x1038F8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x107D28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107D28_0x107d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1038FCu; }
    }
    if (ctx->pc != 0x1038FCu) { return; }
    ctx->pc = 0x1038FCu;
    // 0x1038fc: 0x8e040000
    ctx->pc = 0x1038fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103900: 0x240282d
    ctx->pc = 0x103900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103904: 0xc040e4e
    ctx->pc = 0x103904u;
    SET_GPR_U32(ctx, 31, 0x10390Cu);
    ctx->pc = 0x103908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x103938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103938_0x103938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10390Cu; }
    }
    if (ctx->pc != 0x10390Cu) { return; }
    ctx->pc = 0x10390Cu;
    // 0x10390c: 0x8e040000
    ctx->pc = 0x10390cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103910: 0xc041f6a
    ctx->pc = 0x103910u;
    SET_GPR_U32(ctx, 31, 0x103918u);
    ctx->pc = 0x103914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107DA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107DA8_0x107da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103918u; }
    }
    if (ctx->pc != 0x103918u) { return; }
    ctx->pc = 0x103918u;
    // 0x103918: 0x220102d
    ctx->pc = 0x103918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10391c: 0xdfb00000
    ctx->pc = 0x10391cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103920: 0xdfb10008
    ctx->pc = 0x103920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x103924: 0xdfb20010
    ctx->pc = 0x103924u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103928: 0xdfbf0018
    ctx->pc = 0x103928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10392c: 0x3e00008
    ctx->pc = 0x10392Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103930u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1038A8u: goto label_1038a8;
            case 0x1038C4u: goto label_1038c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103934u;
    // 0x103934: 0x0
    ctx->pc = 0x103934u;
    // NOP
}
