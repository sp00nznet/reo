#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00156548
// Address: 0x156548 - 0x156638
void sub_00156548_0x156548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x156548u;

    // 0x156548: 0x27bdffd0
    ctx->pc = 0x156548u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15654c: 0xffb30018
    ctx->pc = 0x15654cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x156550: 0xe0982d
    ctx->pc = 0x156550u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156554: 0xffb00000
    ctx->pc = 0x156554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x156558: 0x100802d
    ctx->pc = 0x156558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15655c: 0xffb10008
    ctx->pc = 0x15655cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x156560: 0x80882d
    ctx->pc = 0x156560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156564: 0xffb20010
    ctx->pc = 0x156564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x156568: 0xa0902d
    ctx->pc = 0x156568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15656c: 0xffbf0020
    ctx->pc = 0x15656cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x156570: 0x240202d
    ctx->pc = 0x156570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156574: 0xc055f50
    ctx->pc = 0x156574u;
    SET_GPR_U32(ctx, 31, 0x15657Cu);
    ctx->pc = 0x156578u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x157D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00157D40_0x157d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15657Cu; }
    }
    if (ctx->pc != 0x15657Cu) { return; }
    ctx->pc = 0x15657Cu;
    // 0x15657c: 0x26240020
    ctx->pc = 0x15657cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 32));
    // 0x156580: 0x40182d
    ctx->pc = 0x156580u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156584: 0x3c020002
    ctx->pc = 0x156584u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x156588: 0xae030000
    ctx->pc = 0x156588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x15658c: 0x802d
    ctx->pc = 0x15658cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156590: 0x240282d
    ctx->pc = 0x156590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156594: 0x260302d
    ctx->pc = 0x156594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156598: 0x10620015
    ctx->pc = 0x156598u;
    {
        const bool branch_taken_0x156598 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x15659Cu;
        SET_GPR_U32(ctx, 7, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x156598) {
            ctx->pc = 0x1565F0u;
            goto label_1565f0;
        }
    }
    ctx->pc = 0x1565A0u;
    // 0x1565a0: 0x14e00007
    ctx->pc = 0x1565A0u;
    {
        const bool branch_taken_0x1565a0 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x1565A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4 << 16));
        if (branch_taken_0x1565a0) {
            ctx->pc = 0x1565C0u;
            goto label_1565c0;
        }
    }
    ctx->pc = 0x1565A8u;
    // 0x1565a8: 0x3c020001
    ctx->pc = 0x1565a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x1565ac: 0x10620008
    ctx->pc = 0x1565ACu;
    {
        const bool branch_taken_0x1565ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1565B0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1565ac) {
            ctx->pc = 0x1565D0u;
            goto label_1565d0;
        }
    }
    ctx->pc = 0x1565B4u;
    // 0x1565b4: 0x10000019
    ctx->pc = 0x1565B4u;
    {
        const bool branch_taken_0x1565b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1565B8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1565b4) {
            ctx->pc = 0x15661Cu;
            goto label_15661c;
        }
    }
    ctx->pc = 0x1565BCu;
    // 0x1565bc: 0x0
    ctx->pc = 0x1565bcu;
    // NOP
label_1565c0:
    // 0x1565c0: 0x1062000f
    ctx->pc = 0x1565C0u;
    {
        const bool branch_taken_0x1565c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1565C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1565c0) {
            ctx->pc = 0x156600u;
            goto label_156600;
        }
    }
    ctx->pc = 0x1565C8u;
    // 0x1565c8: 0x10000014
    ctx->pc = 0x1565C8u;
    {
        const bool branch_taken_0x1565c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1565CCu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1565c8) {
            ctx->pc = 0x15661Cu;
            goto label_15661c;
        }
    }
    ctx->pc = 0x1565D0u;
label_1565d0:
    // 0x1565d0: 0x26240014
    ctx->pc = 0x1565d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 20));
    // 0x1565d4: 0x240282d
    ctx->pc = 0x1565d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1565d8: 0x260302d
    ctx->pc = 0x1565d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1565dc: 0xc05598e
    ctx->pc = 0x1565DCu;
    SET_GPR_U32(ctx, 31, 0x1565E4u);
    ctx->pc = 0x1565E0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x156638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00156638_0x156638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565E4u; }
    }
    if (ctx->pc != 0x1565E4u) { return; }
    ctx->pc = 0x1565E4u;
    // 0x1565e4: 0x1000000c
    ctx->pc = 0x1565E4u;
    {
        const bool branch_taken_0x1565e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1565E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1565e4) {
            ctx->pc = 0x156618u;
            goto label_156618;
        }
    }
    ctx->pc = 0x1565ECu;
    // 0x1565ec: 0x0
    ctx->pc = 0x1565ecu;
    // NOP
label_1565f0:
    // 0x1565f0: 0xc055aa6
    ctx->pc = 0x1565F0u;
    SET_GPR_U32(ctx, 31, 0x1565F8u);
    ctx->pc = 0x1565F4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x156A98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00156A98_0x156a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565F8u; }
    }
    if (ctx->pc != 0x1565F8u) { return; }
    ctx->pc = 0x1565F8u;
    // 0x1565f8: 0x10000007
    ctx->pc = 0x1565F8u;
    {
        const bool branch_taken_0x1565f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1565FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1565f8) {
            ctx->pc = 0x156618u;
            goto label_156618;
        }
    }
    ctx->pc = 0x156600u;
label_156600:
    // 0x156600: 0x8e270010
    ctx->pc = 0x156600u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x156604: 0x240282d
    ctx->pc = 0x156604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156608: 0x260302d
    ctx->pc = 0x156608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15660c: 0xc055c36
    ctx->pc = 0x15660Cu;
    SET_GPR_U32(ctx, 31, 0x156614u);
    ctx->pc = 0x156610u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 160));
    ctx->pc = 0x1570D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001570D8_0x1570d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156614u; }
    }
    if (ctx->pc != 0x156614u) { return; }
    ctx->pc = 0x156614u;
    // 0x156614: 0x200102d
    ctx->pc = 0x156614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_156618:
    // 0x156618: 0xdfb00000
    ctx->pc = 0x156618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15661c:
    // 0x15661c: 0xdfb10008
    ctx->pc = 0x15661cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156620: 0xdfb20010
    ctx->pc = 0x156620u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156624: 0xdfb30018
    ctx->pc = 0x156624u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x156628: 0xdfbf0020
    ctx->pc = 0x156628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15662c: 0x3e00008
    ctx->pc = 0x15662Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156630u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1565C0u: goto label_1565c0;
            case 0x1565D0u: goto label_1565d0;
            case 0x1565F0u: goto label_1565f0;
            case 0x156600u: goto label_156600;
            case 0x156618u: goto label_156618;
            case 0x15661Cu: goto label_15661c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x156634u;
    // 0x156634: 0x0
    ctx->pc = 0x156634u;
    // NOP
}
