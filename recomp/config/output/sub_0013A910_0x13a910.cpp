#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013A910
// Address: 0x13a910 - 0x13a9d8
void sub_0013A910_0x13a910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13a910u;

    // 0x13a910: 0x27bdffc0
    ctx->pc = 0x13a910u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13a914: 0xffb40020
    ctx->pc = 0x13a914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13a918: 0xe0a02d
    ctx->pc = 0x13a918u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a91c: 0xffb00000
    ctx->pc = 0x13a91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13a920: 0x802d
    ctx->pc = 0x13a920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a924: 0xffb20010
    ctx->pc = 0x13a924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13a928: 0xc0902d
    ctx->pc = 0x13a928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a92c: 0xffb30018
    ctx->pc = 0x13a92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13a930: 0x80982d
    ctx->pc = 0x13a930u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a934: 0xffb60030
    ctx->pc = 0x13a934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x13a938: 0xa0b02d
    ctx->pc = 0x13a938u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a93c: 0xffb10008
    ctx->pc = 0x13a93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13a940: 0xffb50028
    ctx->pc = 0x13a940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x13a944: 0x1a800018
    ctx->pc = 0x13A944u;
    {
        const bool branch_taken_0x13a944 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x13A948u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        if (branch_taken_0x13a944) {
            ctx->pc = 0x13A9A8u;
            goto label_13a9a8;
        }
    }
    ctx->pc = 0x13A94Cu;
    // 0x13a94c: 0x3c020022
    ctx->pc = 0x13a94cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13a950: 0x240882d
    ctx->pc = 0x13a950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a954: 0x2455d8d0
    ctx->pc = 0x13a954u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294957264));
label_13a958:
    // 0x13a958: 0x8ea2000c
    ctx->pc = 0x13a958u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x13a95c: 0x2c0202d
    ctx->pc = 0x13a95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a960: 0x8ea50008
    ctx->pc = 0x13a960u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x13a964: 0x501818
    ctx->pc = 0x13a964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x13a968: 0x528c0
    ctx->pc = 0x13a968u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x13a96c: 0x701021
    ctx->pc = 0x13a96cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13a970: 0x26100001
    ctx->pc = 0x13a970u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x13a974: 0xa22821
    ctx->pc = 0x13a974u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13a978: 0xc04e8e0
    ctx->pc = 0x13A978u;
    SET_GPR_U32(ctx, 31, 0x13A980u);
    ctx->pc = 0x13A97Cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->pc = 0x13A380u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A380_0x13a380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A980u; }
    }
    if (ctx->pc != 0x13A980u) { return; }
    ctx->pc = 0x13A980u;
    // 0x13a980: 0x14400007
    ctx->pc = 0x13A980u;
    {
        const bool branch_taken_0x13a980 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13A984u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 20)));
        if (branch_taken_0x13a980) {
            ctx->pc = 0x13A9A0u;
            goto label_13a9a0;
        }
    }
    ctx->pc = 0x13A988u;
    // 0x13a988: 0x8e220000
    ctx->pc = 0x13a988u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13a98c: 0xae620000
    ctx->pc = 0x13a98cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x13a990: 0x8e230004
    ctx->pc = 0x13a990u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13a994: 0x10000006
    ctx->pc = 0x13A994u;
    {
        const bool branch_taken_0x13a994 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13A998u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x13a994) {
            ctx->pc = 0x13A9B0u;
            goto label_13a9b0;
        }
    }
    ctx->pc = 0x13A99Cu;
    // 0x13a99c: 0x0
    ctx->pc = 0x13a99cu;
    // NOP
label_13a9a0:
    // 0x13a9a0: 0x1460ffed
    ctx->pc = 0x13A9A0u;
    {
        const bool branch_taken_0x13a9a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x13A9A4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x13a9a0) {
            ctx->pc = 0x13A958u;
            goto label_13a958;
        }
    }
    ctx->pc = 0x13A9A8u;
label_13a9a8:
    // 0x13a9a8: 0xae600004
    ctx->pc = 0x13a9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x13a9ac: 0xae600000
    ctx->pc = 0x13a9acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_13a9b0:
    // 0x13a9b0: 0xdfb00000
    ctx->pc = 0x13a9b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a9b4: 0xdfb10008
    ctx->pc = 0x13a9b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13a9b8: 0xdfb20010
    ctx->pc = 0x13a9b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a9bc: 0xdfb30018
    ctx->pc = 0x13a9bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13a9c0: 0xdfb40020
    ctx->pc = 0x13a9c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a9c4: 0xdfb50028
    ctx->pc = 0x13a9c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13a9c8: 0xdfb60030
    ctx->pc = 0x13a9c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a9cc: 0xdfbf0038
    ctx->pc = 0x13a9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13a9d0: 0x3e00008
    ctx->pc = 0x13A9D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A9D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13A958u: goto label_13a958;
            case 0x13A9A0u: goto label_13a9a0;
            case 0x13A9A8u: goto label_13a9a8;
            case 0x13A9B0u: goto label_13a9b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13A9D8u;
}
