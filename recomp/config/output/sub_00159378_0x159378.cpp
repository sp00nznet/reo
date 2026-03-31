#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00159378
// Address: 0x159378 - 0x159440
void sub_00159378_0x159378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x159378u;

    // 0x159378: 0x27bdffd0
    ctx->pc = 0x159378u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15937c: 0xffb00000
    ctx->pc = 0x15937cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159380: 0x80802d
    ctx->pc = 0x159380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159384: 0xffb10008
    ctx->pc = 0x159384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x159388: 0xa0882d
    ctx->pc = 0x159388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15938c: 0xffb20010
    ctx->pc = 0x15938cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x159390: 0xc0902d
    ctx->pc = 0x159390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159394: 0xffb30018
    ctx->pc = 0x159394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x159398: 0xffbf0020
    ctx->pc = 0x159398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15939c: 0xc056dec
    ctx->pc = 0x15939Cu;
    SET_GPR_U32(ctx, 31, 0x1593A4u);
    ctx->pc = 0x1593A0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15B7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B7B0_0x15b7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1593A4u; }
    }
    if (ctx->pc != 0x1593A4u) { return; }
    ctx->pc = 0x1593A4u;
    // 0x1593a4: 0x3c05ff03
    ctx->pc = 0x1593a4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
    // 0x1593a8: 0x3c060003
    ctx->pc = 0x1593a8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)3 << 16));
    // 0x1593ac: 0x202d
    ctx->pc = 0x1593acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1593b0: 0x34a5020f
    ctx->pc = 0x1593b0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 527));
    // 0x1593b4: 0x10400008
    ctx->pc = 0x1593B4u;
    {
        const bool branch_taken_0x1593b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1593B8u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
        if (branch_taken_0x1593b4) {
            ctx->pc = 0x1593D8u;
            goto label_1593d8;
        }
    }
    ctx->pc = 0x1593BCu;
    // 0x1593bc: 0xdfb00000
    ctx->pc = 0x1593bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1593c0: 0xdfb10008
    ctx->pc = 0x1593c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1593c4: 0xdfb20010
    ctx->pc = 0x1593c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1593c8: 0xdfb30018
    ctx->pc = 0x1593c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1593cc: 0xdfbf0020
    ctx->pc = 0x1593ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1593d0: 0x80563ce
    ctx->pc = 0x1593D0u;
    ctx->pc = 0x1593D4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x158F38u;
    sub_00158F38_0x158f38(rdram, ctx, runtime); return;
    ctx->pc = 0x1593D8u;
label_1593d8:
    // 0x1593d8: 0x8e020280
    ctx->pc = 0x1593d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 640)));
    // 0x1593dc: 0x212c0
    ctx->pc = 0x1593dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x1593e0: 0xae220000
    ctx->pc = 0x1593e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1593e4: 0x8e030290
    ctx->pc = 0x1593e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 656)));
    // 0x1593e8: 0xae430000
    ctx->pc = 0x1593e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1593ec: 0x8e04027c
    ctx->pc = 0x1593ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 636)));
    // 0x1593f0: 0x54860003
    ctx->pc = 0x1593F0u;
    {
        const bool branch_taken_0x1593f0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 6));
        if (branch_taken_0x1593f0) {
            ctx->pc = 0x1593F4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 656)));
            ctx->pc = 0x159400u;
            goto label_159400;
        }
    }
    ctx->pc = 0x1593F8u;
    // 0x1593f8: 0x10000007
    ctx->pc = 0x1593F8u;
    {
        const bool branch_taken_0x1593f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1593FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1593f8) {
            ctx->pc = 0x159418u;
            goto label_159418;
        }
    }
    ctx->pc = 0x159400u;
label_159400:
    // 0x159400: 0x24030708
    ctx->pc = 0x159400u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1800));
    // 0x159404: 0x50600001
    ctx->pc = 0x159404u;
    {
        const bool branch_taken_0x159404 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x159404) {
            ctx->pc = 0x159408u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x15940Cu;
            goto label_15940c;
        }
    }
    ctx->pc = 0x15940Cu;
label_15940c:
    // 0x15940c: 0x441018
    ctx->pc = 0x15940cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x159410: 0x43001a
    ctx->pc = 0x159410u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x159414: 0x1012
    ctx->pc = 0x159414u;
    SET_GPR_U32(ctx, 2, ctx->lo);
label_159418:
    // 0x159418: 0xae620000
    ctx->pc = 0x159418u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x15941c: 0xdfb00000
    ctx->pc = 0x15941cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159420: 0x102d
    ctx->pc = 0x159420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159424: 0xdfb10008
    ctx->pc = 0x159424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x159428: 0xdfb20010
    ctx->pc = 0x159428u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15942c: 0xdfb30018
    ctx->pc = 0x15942cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x159430: 0xdfbf0020
    ctx->pc = 0x159430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159434: 0x3e00008
    ctx->pc = 0x159434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159438u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1593D8u: goto label_1593d8;
            case 0x159400u: goto label_159400;
            case 0x15940Cu: goto label_15940c;
            case 0x159418u: goto label_159418;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15943Cu;
    // 0x15943c: 0x0
    ctx->pc = 0x15943cu;
    // NOP
}
