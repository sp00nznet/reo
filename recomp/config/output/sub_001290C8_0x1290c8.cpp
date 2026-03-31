#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001290C8
// Address: 0x1290c8 - 0x129168
void sub_001290C8_0x1290c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1290c8u;

    // 0x1290c8: 0x27bdffe0
    ctx->pc = 0x1290c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1290cc: 0x2408ffff
    ctx->pc = 0x1290ccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1290d0: 0xffb10008
    ctx->pc = 0x1290d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1290d4: 0xa0882d
    ctx->pc = 0x1290d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1290d8: 0xffb20010
    ctx->pc = 0x1290d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1290dc: 0x80902d
    ctx->pc = 0x1290dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1290e0: 0x282d
    ctx->pc = 0x1290e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1290e4: 0x240302d
    ctx->pc = 0x1290e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1290e8: 0x24040001
    ctx->pc = 0x1290e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1290ec: 0xffb00000
    ctx->pc = 0x1290ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1290f0: 0xffbf0018
    ctx->pc = 0x1290f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1290f4: 0xc04a13e
    ctx->pc = 0x1290F4u;
    SET_GPR_U32(ctx, 31, 0x1290FCu);
    ctx->pc = 0x1290F8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1284F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001284F8_0x1284f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1290FCu; }
    }
    if (ctx->pc != 0x1290FCu) { return; }
    ctx->pc = 0x1290FCu;
    // 0x1290fc: 0xc04a3e0
    ctx->pc = 0x1290FCu;
    SET_GPR_U32(ctx, 31, 0x129104u);
    ctx->pc = 0x128F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128F80_0x128f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129104u; }
    }
    if (ctx->pc != 0x129104u) { return; }
    ctx->pc = 0x129104u;
    // 0x129104: 0x240282d
    ctx->pc = 0x129104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129108: 0x40802d
    ctx->pc = 0x129108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12910c: 0x220302d
    ctx->pc = 0x12910cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129110: 0x12000008
    ctx->pc = 0x129110u;
    {
        const bool branch_taken_0x129110 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x129114u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x129110) {
            ctx->pc = 0x129134u;
            goto label_129134;
        }
    }
    ctx->pc = 0x129118u;
    // 0x129118: 0xc04a404
    ctx->pc = 0x129118u;
    SET_GPR_U32(ctx, 31, 0x129120u);
    ctx->pc = 0x129010u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129010_0x129010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129120u; }
    }
    if (ctx->pc != 0x129120u) { return; }
    ctx->pc = 0x129120u;
    // 0x129120: 0x4410005
    ctx->pc = 0x129120u;
    {
        const bool branch_taken_0x129120 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x129124u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x129120) {
            ctx->pc = 0x129138u;
            goto label_129138;
        }
    }
    ctx->pc = 0x129128u;
    // 0x129128: 0x200202d
    ctx->pc = 0x129128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12912c: 0xc04a4d4
    ctx->pc = 0x12912Cu;
    SET_GPR_U32(ctx, 31, 0x129134u);
    ctx->pc = 0x129130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129350u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129350_0x129350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129134u; }
    }
    if (ctx->pc != 0x129134u) { return; }
    ctx->pc = 0x129134u;
label_129134:
    // 0x129134: 0x240302d
    ctx->pc = 0x129134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_129138:
    // 0x129138: 0x220382d
    ctx->pc = 0x129138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12913c: 0x24040001
    ctx->pc = 0x12913cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x129140: 0x24050001
    ctx->pc = 0x129140u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x129144: 0xc04a13e
    ctx->pc = 0x129144u;
    SET_GPR_U32(ctx, 31, 0x12914Cu);
    ctx->pc = 0x129148u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1284F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001284F8_0x1284f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12914Cu; }
    }
    if (ctx->pc != 0x12914Cu) { return; }
    ctx->pc = 0x12914Cu;
    // 0x12914c: 0x200102d
    ctx->pc = 0x12914cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129150: 0xdfb10008
    ctx->pc = 0x129150u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129154: 0xdfb00000
    ctx->pc = 0x129154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129158: 0xdfb20010
    ctx->pc = 0x129158u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12915c: 0xdfbf0018
    ctx->pc = 0x12915cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x129160: 0x3e00008
    ctx->pc = 0x129160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129164u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129134u: goto label_129134;
            case 0x129138u: goto label_129138;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129168u;
}
