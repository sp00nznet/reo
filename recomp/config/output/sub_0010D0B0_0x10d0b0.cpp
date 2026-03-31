#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010D0B0
// Address: 0x10d0b0 - 0x10d168
void sub_0010D0B0_0x10d0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10d0b0u;

    // 0x10d0b0: 0x27bdfb80
    ctx->pc = 0x10d0b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966144));
    // 0x10d0b4: 0x240a0400
    ctx->pc = 0x10d0b4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x10d0b8: 0xffb00460
    ctx->pc = 0x10d0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 16));
    // 0x10d0bc: 0x80802d
    ctx->pc = 0x10d0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d0c0: 0xffb10468
    ctx->pc = 0x10d0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1128), GPR_U64(ctx, 17));
    // 0x10d0c4: 0x27ab0060
    ctx->pc = 0x10d0c4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 29), 96));
    // 0x10d0c8: 0xffbf0470
    ctx->pc = 0x10d0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 31));
    // 0x10d0cc: 0x3a0202d
    ctx->pc = 0x10d0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d0d0: 0xafab0010
    ctx->pc = 0x10d0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x10d0d4: 0x9602000c
    ctx->pc = 0x10d0d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10d0d8: 0x9609000e
    ctx->pc = 0x10d0d8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x10d0dc: 0x8e080054
    ctx->pc = 0x10d0dcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x10d0e0: 0x3042fffd
    ctx->pc = 0x10d0e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65533));
    // 0x10d0e4: 0x8e03001c
    ctx->pc = 0x10d0e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10d0e8: 0x8e070024
    ctx->pc = 0x10d0e8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10d0ec: 0xafa80054
    ctx->pc = 0x10d0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    // 0x10d0f0: 0xa7a2000c
    ctx->pc = 0x10d0f0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x10d0f4: 0xa7a9000e
    ctx->pc = 0x10d0f4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 9));
    // 0x10d0f8: 0xafa3001c
    ctx->pc = 0x10d0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x10d0fc: 0xafa70024
    ctx->pc = 0x10d0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x10d100: 0xafaa0014
    ctx->pc = 0x10d100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x10d104: 0xafab0000
    ctx->pc = 0x10d104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x10d108: 0xafaa0008
    ctx->pc = 0x10d108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x10d10c: 0xc04345a
    ctx->pc = 0x10D10Cu;
    SET_GPR_U32(ctx, 31, 0x10D114u);
    ctx->pc = 0x10D110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->pc = 0x10D168u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D168_0x10d168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D114u; }
    }
    if (ctx->pc != 0x10D114u) { return; }
    ctx->pc = 0x10D114u;
    // 0x10d114: 0x40882d
    ctx->pc = 0x10d114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d118: 0x6200005
    ctx->pc = 0x10D118u;
    {
        const bool branch_taken_0x10d118 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x10D11Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10d118) {
            ctx->pc = 0x10D130u;
            goto label_10d130;
        }
    }
    ctx->pc = 0x10D120u;
    // 0x10d120: 0xc04142c
    ctx->pc = 0x10D120u;
    SET_GPR_U32(ctx, 31, 0x10D128u);
    ctx->pc = 0x1050B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001050B0_0x1050b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D128u; }
    }
    if (ctx->pc != 0x10D128u) { return; }
    ctx->pc = 0x10D128u;
    // 0x10d128: 0x2403ffff
    ctx->pc = 0x10d128u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10d12c: 0x62880b
    ctx->pc = 0x10d12cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
label_10d130:
    // 0x10d130: 0x97a2000c
    ctx->pc = 0x10d130u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x10d134: 0x30420040
    ctx->pc = 0x10d134u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x10d138: 0x10400005
    ctx->pc = 0x10D138u;
    {
        const bool branch_taken_0x10d138 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10D13Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10d138) {
            ctx->pc = 0x10D150u;
            goto label_10d150;
        }
    }
    ctx->pc = 0x10D140u;
    // 0x10d140: 0x9602000c
    ctx->pc = 0x10d140u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10d144: 0x34420040
    ctx->pc = 0x10d144u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64));
    // 0x10d148: 0xa602000c
    ctx->pc = 0x10d148u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x10d14c: 0x220102d
    ctx->pc = 0x10d14cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10d150:
    // 0x10d150: 0xdfb00460
    ctx->pc = 0x10d150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x10d154: 0xdfb10468
    ctx->pc = 0x10d154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1128)));
    // 0x10d158: 0xdfbf0470
    ctx->pc = 0x10d158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x10d15c: 0x3e00008
    ctx->pc = 0x10D15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D160u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 1152));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10D130u: goto label_10d130;
            case 0x10D150u: goto label_10d150;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10D164u;
    // 0x10d164: 0x0
    ctx->pc = 0x10d164u;
    // NOP
}
