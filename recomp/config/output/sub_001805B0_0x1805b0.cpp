#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001805B0
// Address: 0x1805b0 - 0x180680
void sub_001805B0_0x1805b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1805b0u;

    // 0x1805b0: 0x27bdffc0
    ctx->pc = 0x1805b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1805b4: 0xffb10010
    ctx->pc = 0x1805b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1805b8: 0xffb20020
    ctx->pc = 0x1805b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1805bc: 0x80882d
    ctx->pc = 0x1805bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1805c0: 0xffbf0030
    ctx->pc = 0x1805c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1805c4: 0xa0902d
    ctx->pc = 0x1805c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1805c8: 0xc0601a0
    ctx->pc = 0x1805C8u;
    SET_GPR_U32(ctx, 31, 0x1805D0u);
    ctx->pc = 0x1805CCu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x180680u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00180680_0x180680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1805D0u; }
    }
    if (ctx->pc != 0x1805D0u) { return; }
    ctx->pc = 0x1805D0u;
    // 0x1805d0: 0x24030334
    ctx->pc = 0x1805d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 820));
    // 0x1805d4: 0x3c020027
    ctx->pc = 0x1805d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1805d8: 0x2231818
    ctx->pc = 0x1805d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1805dc: 0x24426188
    ctx->pc = 0x1805dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 24968));
    // 0x1805e0: 0x431021
    ctx->pc = 0x1805e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1805e4: 0x8c440004
    ctx->pc = 0x1805e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1805e8: 0x14800005
    ctx->pc = 0x1805E8u;
    {
        const bool branch_taken_0x1805e8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x1805e8) {
            ctx->pc = 0x180600u;
            goto label_180600;
        }
    }
    ctx->pc = 0x1805F0u;
    // 0x1805f0: 0xc060246
    ctx->pc = 0x1805F0u;
    SET_GPR_U32(ctx, 31, 0x1805F8u);
    ctx->pc = 0x1805F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x180918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00180918_0x180918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1805F8u; }
    }
    if (ctx->pc != 0x1805F8u) { return; }
    ctx->pc = 0x1805F8u;
    // 0x1805f8: 0x440001b
    ctx->pc = 0x1805F8u;
    {
        const bool branch_taken_0x1805f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1805FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1805f8) {
            ctx->pc = 0x180668u;
            goto label_180668;
        }
    }
    ctx->pc = 0x180600u;
label_180600:
    // 0x180600: 0xc060276
    ctx->pc = 0x180600u;
    SET_GPR_U32(ctx, 31, 0x180608u);
    ctx->pc = 0x180604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1809D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001809D8_0x1809d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180608u; }
    }
    if (ctx->pc != 0x180608u) { return; }
    ctx->pc = 0x180608u;
    // 0x180608: 0x40802d
    ctx->pc = 0x180608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18060c: 0x92020003
    ctx->pc = 0x18060cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x180610: 0x10400011
    ctx->pc = 0x180610u;
    {
        const bool branch_taken_0x180610 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x180614u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 28));
        if (branch_taken_0x180610) {
            ctx->pc = 0x180658u;
            goto label_180658;
        }
    }
    ctx->pc = 0x180618u;
    // 0x180618: 0x1040000f
    ctx->pc = 0x180618u;
    {
        const bool branch_taken_0x180618 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18061Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x180618) {
            ctx->pc = 0x180658u;
            goto label_180658;
        }
    }
    ctx->pc = 0x180620u;
    // 0x180620: 0x92050002
    ctx->pc = 0x180620u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x180624: 0x92060003
    ctx->pc = 0x180624u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x180628: 0xb02821
    ctx->pc = 0x180628u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x18062c: 0xc041eac
    ctx->pc = 0x18062Cu;
    SET_GPR_U32(ctx, 31, 0x180634u);
    ctx->pc = 0x180630u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 28));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180634u; }
    }
    if (ctx->pc != 0x180634u) { return; }
    ctx->pc = 0x180634u;
    // 0x180634: 0x24030334
    ctx->pc = 0x180634u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 820));
    // 0x180638: 0x92040002
    ctx->pc = 0x180638u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x18063c: 0x2231818
    ctx->pc = 0x18063cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x180640: 0x3c050027
    ctx->pc = 0x180640u;
    SET_GPR_U32(ctx, 5, ((uint32_t)39 << 16));
    // 0x180644: 0x2484001c
    ctx->pc = 0x180644u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28));
    // 0x180648: 0x24a5619c
    ctx->pc = 0x180648u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24988));
    // 0x18064c: 0x2042021
    ctx->pc = 0x18064cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x180650: 0xc0602a8
    ctx->pc = 0x180650u;
    SET_GPR_U32(ctx, 31, 0x180658u);
    ctx->pc = 0x180654u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x180AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00180AA0_0x180aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180658u; }
    }
    if (ctx->pc != 0x180658u) { return; }
    ctx->pc = 0x180658u;
label_180658:
    // 0x180658: 0x8e020004
    ctx->pc = 0x180658u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18065c: 0x54400002
    ctx->pc = 0x18065Cu;
    {
        const bool branch_taken_0x18065c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x18065c) {
            ctx->pc = 0x180660u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->pc = 0x180668u;
            goto label_180668;
        }
    }
    ctx->pc = 0x180664u;
    // 0x180664: 0x2402ffff
    ctx->pc = 0x180664u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_180668:
    // 0x180668: 0xdfbf0030
    ctx->pc = 0x180668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18066c: 0xdfb20020
    ctx->pc = 0x18066cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180670: 0xdfb10010
    ctx->pc = 0x180670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180674: 0xdfb00000
    ctx->pc = 0x180674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180678: 0x3e00008
    ctx->pc = 0x180678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18067Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180600u: goto label_180600;
            case 0x180658u: goto label_180658;
            case 0x180668u: goto label_180668;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180680u;
}
