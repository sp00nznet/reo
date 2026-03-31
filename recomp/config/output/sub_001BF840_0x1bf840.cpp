#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BF840
// Address: 0x1bf840 - 0x1bfa50
void sub_001BF840_0x1bf840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bf840u;

    // 0x1bf840: 0x27bdffe0
    ctx->pc = 0x1bf840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bf844: 0x24020002
    ctx->pc = 0x1bf844u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf848: 0xffbf0010
    ctx->pc = 0x1bf848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bf84c: 0x7fb00000
    ctx->pc = 0x1bf84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf850: 0x8c830004
    ctx->pc = 0x1bf850u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bf854: 0x1062002f
    ctx->pc = 0x1BF854u;
    {
        const bool branch_taken_0x1bf854 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1BF858u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bf854) {
            ctx->pc = 0x1BF914u;
            goto label_1bf914;
        }
    }
    ctx->pc = 0x1BF85Cu;
    // 0x1bf85c: 0x24020001
    ctx->pc = 0x1bf85cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf860: 0x1062000e
    ctx->pc = 0x1BF860u;
    {
        const bool branch_taken_0x1bf860 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1bf860) {
            ctx->pc = 0x1BF89Cu;
            goto label_1bf89c;
        }
    }
    ctx->pc = 0x1BF868u;
    // 0x1bf868: 0x10600003
    ctx->pc = 0x1BF868u;
    {
        const bool branch_taken_0x1bf868 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bf868) {
            ctx->pc = 0x1BF878u;
            goto label_1bf878;
        }
    }
    ctx->pc = 0x1BF870u;
    // 0x1bf870: 0x10000070
    ctx->pc = 0x1BF870u;
    {
        const bool branch_taken_0x1bf870 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BF874u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1bf870) {
            ctx->pc = 0x1BFA34u;
            goto label_1bfa34;
        }
    }
    ctx->pc = 0x1BF878u;
label_1bf878:
    // 0x1bf878: 0xc06fe04
    ctx->pc = 0x1BF878u;
    SET_GPR_U32(ctx, 31, 0x1BF880u);
    ctx->pc = 0x1BF810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF810_0x1bf810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF880u; }
    }
    if (ctx->pc != 0x1BF880u) { return; }
    ctx->pc = 0x1BF880u;
    // 0x1bf880: 0x440006b
    ctx->pc = 0x1BF880u;
    {
        const bool branch_taken_0x1bf880 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1bf880) {
            ctx->pc = 0x1BFA30u;
            goto label_1bfa30;
        }
    }
    ctx->pc = 0x1BF888u;
    // 0x1bf888: 0x8e030004
    ctx->pc = 0x1bf888u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bf88c: 0x24020003
    ctx->pc = 0x1bf88cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf890: 0x24630001
    ctx->pc = 0x1bf890u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bf894: 0xae030004
    ctx->pc = 0x1bf894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1bf898: 0xae020020
    ctx->pc = 0x1bf898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1bf89c:
    // 0x1bf89c: 0x8e030014
    ctx->pc = 0x1bf89cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bf8a0: 0x3c020032
    ctx->pc = 0x1bf8a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x1bf8a4: 0x3c050032
    ctx->pc = 0x1bf8a4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x1bf8a8: 0x24426c40
    ctx->pc = 0x1bf8a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 27712));
    // 0x1bf8ac: 0x31880
    ctx->pc = 0x1bf8acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bf8b0: 0x431021
    ctx->pc = 0x1bf8b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf8b4: 0x8c440000
    ctx->pc = 0x1bf8b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bf8b8: 0xc060418
    ctx->pc = 0x1BF8B8u;
    SET_GPR_U32(ctx, 31, 0x1BF8C0u);
    ctx->pc = 0x1BF8BCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 27368));
    ctx->pc = 0x181060u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00181060_0x181060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF8C0u; }
    }
    if (ctx->pc != 0x1BF8C0u) { return; }
    ctx->pc = 0x1BF8C0u;
    // 0x1bf8c0: 0x4410010
    ctx->pc = 0x1BF8C0u;
    {
        const bool branch_taken_0x1bf8c0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1bf8c0) {
            ctx->pc = 0x1BF904u;
            goto label_1bf904;
        }
    }
    ctx->pc = 0x1BF8C8u;
    // 0x1bf8c8: 0x8e020020
    ctx->pc = 0x1bf8c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1bf8cc: 0x2442ffff
    ctx->pc = 0x1bf8ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bf8d0: 0x1c400057
    ctx->pc = 0x1BF8D0u;
    {
        const bool branch_taken_0x1bf8d0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1BF8D4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        if (branch_taken_0x1bf8d0) {
            ctx->pc = 0x1BFA30u;
            goto label_1bfa30;
        }
    }
    ctx->pc = 0x1BF8D8u;
label_1bf8d8:
    // 0x1bf8d8: 0xae000004
    ctx->pc = 0x1bf8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1bf8dc: 0x102d
    ctx->pc = 0x1bf8dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8e0: 0x8e030014
    ctx->pc = 0x1bf8e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bf8e4: 0x31880
    ctx->pc = 0x1bf8e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bf8e8: 0x701821
    ctx->pc = 0x1bf8e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bf8ec: 0xac600028
    ctx->pc = 0x1bf8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x1bf8f0: 0x8e030014
    ctx->pc = 0x1bf8f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bf8f4: 0x31880
    ctx->pc = 0x1bf8f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bf8f8: 0x701821
    ctx->pc = 0x1bf8f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bf8fc: 0x1000004d
    ctx->pc = 0x1BF8FCu;
    {
        const bool branch_taken_0x1bf8fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BF900u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
        if (branch_taken_0x1bf8fc) {
            ctx->pc = 0x1BFA34u;
            goto label_1bfa34;
        }
    }
    ctx->pc = 0x1BF904u;
label_1bf904:
    // 0x1bf904: 0x8e020004
    ctx->pc = 0x1bf904u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bf908: 0x24420001
    ctx->pc = 0x1bf908u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bf90c: 0x10000048
    ctx->pc = 0x1BF90Cu;
    {
        const bool branch_taken_0x1bf90c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BF910u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x1bf90c) {
            ctx->pc = 0x1BFA30u;
            goto label_1bfa30;
        }
    }
    ctx->pc = 0x1BF914u;
label_1bf914:
    // 0x1bf914: 0xc06fe04
    ctx->pc = 0x1BF914u;
    SET_GPR_U32(ctx, 31, 0x1BF91Cu);
    ctx->pc = 0x1BF810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF810_0x1bf810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF91Cu; }
    }
    if (ctx->pc != 0x1BF91Cu) { return; }
    ctx->pc = 0x1BF91Cu;
    // 0x1bf91c: 0x4400044
    ctx->pc = 0x1BF91Cu;
    {
        const bool branch_taken_0x1bf91c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1bf91c) {
            ctx->pc = 0x1BFA30u;
            goto label_1bfa30;
        }
    }
    ctx->pc = 0x1BF924u;
    // 0x1bf924: 0x9603001c
    ctx->pc = 0x1bf924u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1bf928: 0x2402002f
    ctx->pc = 0x1bf928u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 47));
    // 0x1bf92c: 0x10620022
    ctx->pc = 0x1BF92Cu;
    {
        const bool branch_taken_0x1bf92c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1BF930u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 36867));
        if (branch_taken_0x1bf92c) {
            ctx->pc = 0x1BF9B8u;
            goto label_1bf9b8;
        }
    }
    ctx->pc = 0x1BF934u;
    // 0x1bf934: 0x10620018
    ctx->pc = 0x1BF934u;
    {
        const bool branch_taken_0x1bf934 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1bf934) {
            ctx->pc = 0x1BF998u;
            goto label_1bf998;
        }
    }
    ctx->pc = 0x1BF93Cu;
    // 0x1bf93c: 0x10600003
    ctx->pc = 0x1BF93Cu;
    {
        const bool branch_taken_0x1bf93c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BF940u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1bf93c) {
            ctx->pc = 0x1BF94Cu;
            goto label_1bf94c;
        }
    }
    ctx->pc = 0x1BF944u;
    // 0x1bf944: 0x1000002f
    ctx->pc = 0x1BF944u;
    {
        const bool branch_taken_0x1bf944 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BF948u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
        if (branch_taken_0x1bf944) {
            ctx->pc = 0x1BFA04u;
            goto label_1bfa04;
        }
    }
    ctx->pc = 0x1BF94Cu;
label_1bf94c:
    // 0x1bf94c: 0x3c010032
    ctx->pc = 0x1bf94cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf950: 0x24020002
    ctx->pc = 0x1bf950u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf954: 0x8c236ae8
    ctx->pc = 0x1bf954u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 27368)));
    // 0x1bf958: 0x1462ffdf
    ctx->pc = 0x1BF958u;
    {
        const bool branch_taken_0x1bf958 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1BF95Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1bf958) {
            ctx->pc = 0x1BF8D8u;
            goto label_1bf8d8;
        }
    }
    ctx->pc = 0x1BF960u;
    // 0x1bf960: 0x8c226aec
    ctx->pc = 0x1bf960u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 27372)));
    // 0x1bf964: 0x10400014
    ctx->pc = 0x1BF964u;
    {
        const bool branch_taken_0x1bf964 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bf964) {
            ctx->pc = 0x1BF9B8u;
            goto label_1bf9b8;
        }
    }
    ctx->pc = 0x1BF96Cu;
    // 0x1bf96c: 0x8e020014
    ctx->pc = 0x1bf96cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bf970: 0x3c010032
    ctx->pc = 0x1bf970u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf974: 0x21080
    ctx->pc = 0x1bf974u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bf978: 0x501021
    ctx->pc = 0x1bf978u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bf97c: 0xac450028
    ctx->pc = 0x1bf97cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
    // 0x1bf980: 0x8e020014
    ctx->pc = 0x1bf980u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bf984: 0x8c236af0
    ctx->pc = 0x1bf984u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 27376)));
    // 0x1bf988: 0x21080
    ctx->pc = 0x1bf988u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bf98c: 0x501021
    ctx->pc = 0x1bf98cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bf990: 0x10000021
    ctx->pc = 0x1BF990u;
    {
        const bool branch_taken_0x1bf990 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BF994u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
        if (branch_taken_0x1bf990) {
            ctx->pc = 0x1BFA18u;
            goto label_1bfa18;
        }
    }
    ctx->pc = 0x1BF998u;
label_1bf998:
    // 0x1bf998: 0x8e030014
    ctx->pc = 0x1bf998u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bf99c: 0x24040001
    ctx->pc = 0x1bf99cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf9a0: 0x8e020040
    ctx->pc = 0x1bf9a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1bf9a4: 0x24050002
    ctx->pc = 0x1bf9a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf9a8: 0x641804
    ctx->pc = 0x1bf9a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x1bf9ac: 0x431025
    ctx->pc = 0x1bf9acu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf9b0: 0x1000ffe6
    ctx->pc = 0x1BF9B0u;
    {
        const bool branch_taken_0x1bf9b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BF9B4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        if (branch_taken_0x1bf9b0) {
            ctx->pc = 0x1BF94Cu;
            goto label_1bf94c;
        }
    }
    ctx->pc = 0x1BF9B8u;
label_1bf9b8:
    // 0x1bf9b8: 0x8e020020
    ctx->pc = 0x1bf9b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1bf9bc: 0x2442ffff
    ctx->pc = 0x1bf9bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bf9c0: 0x18400005
    ctx->pc = 0x1BF9C0u;
    {
        const bool branch_taken_0x1bf9c0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BF9C4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        if (branch_taken_0x1bf9c0) {
            ctx->pc = 0x1BF9D8u;
            goto label_1bf9d8;
        }
    }
    ctx->pc = 0x1BF9C8u;
    // 0x1bf9c8: 0x24030001
    ctx->pc = 0x1bf9c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1bf9cc:
    // 0x1bf9cc: 0x2402ffff
    ctx->pc = 0x1bf9ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bf9d0: 0x10000018
    ctx->pc = 0x1BF9D0u;
    {
        const bool branch_taken_0x1bf9d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BF9D4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1bf9d0) {
            ctx->pc = 0x1BFA34u;
            goto label_1bfa34;
        }
    }
    ctx->pc = 0x1BF9D8u;
label_1bf9d8:
    // 0x1bf9d8: 0x8e020014
    ctx->pc = 0x1bf9d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bf9dc: 0x24040003
    ctx->pc = 0x1bf9dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf9e0: 0x24031f40
    ctx->pc = 0x1bf9e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8000));
    // 0x1bf9e4: 0x21080
    ctx->pc = 0x1bf9e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bf9e8: 0x501021
    ctx->pc = 0x1bf9e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bf9ec: 0xac440028
    ctx->pc = 0x1bf9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x1bf9f0: 0x8e020014
    ctx->pc = 0x1bf9f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bf9f4: 0x21080
    ctx->pc = 0x1bf9f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bf9f8: 0x501021
    ctx->pc = 0x1bf9f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bf9fc: 0x10000006
    ctx->pc = 0x1BF9FCu;
    {
        const bool branch_taken_0x1bf9fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BFA00u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
        if (branch_taken_0x1bf9fc) {
            ctx->pc = 0x1BFA18u;
            goto label_1bfa18;
        }
    }
    ctx->pc = 0x1BFA04u;
label_1bfa04:
    // 0x1bfa04: 0x2442ffff
    ctx->pc = 0x1bfa04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bfa08: 0x1840ffb3
    ctx->pc = 0x1BFA08u;
    {
        const bool branch_taken_0x1bfa08 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BFA0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        if (branch_taken_0x1bfa08) {
            ctx->pc = 0x1BF8D8u;
            goto label_1bf8d8;
        }
    }
    ctx->pc = 0x1BFA10u;
    // 0x1bfa10: 0x1000ffee
    ctx->pc = 0x1BFA10u;
    {
        const bool branch_taken_0x1bfa10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BFA14u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1bfa10) {
            ctx->pc = 0x1BF9CCu;
            goto label_1bf9cc;
        }
    }
    ctx->pc = 0x1BFA18u;
label_1bfa18:
    // 0x1bfa18: 0xae000004
    ctx->pc = 0x1bfa18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1bfa1c: 0x8e020014
    ctx->pc = 0x1bfa1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bfa20: 0x21080
    ctx->pc = 0x1bfa20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bfa24: 0x501021
    ctx->pc = 0x1bfa24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bfa28: 0x10000002
    ctx->pc = 0x1BFA28u;
    {
        const bool branch_taken_0x1bfa28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BFA2Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 40)));
        if (branch_taken_0x1bfa28) {
            ctx->pc = 0x1BFA34u;
            goto label_1bfa34;
        }
    }
    ctx->pc = 0x1BFA30u;
label_1bfa30:
    // 0x1bfa30: 0x2402ffff
    ctx->pc = 0x1bfa30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bfa34:
    // 0x1bfa34: 0xdfbf0010
    ctx->pc = 0x1bfa34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfa38: 0x7bb00000
    ctx->pc = 0x1bfa38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfa3c: 0x3e00008
    ctx->pc = 0x1BFA3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFA40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BF878u: goto label_1bf878;
            case 0x1BF89Cu: goto label_1bf89c;
            case 0x1BF8D8u: goto label_1bf8d8;
            case 0x1BF904u: goto label_1bf904;
            case 0x1BF914u: goto label_1bf914;
            case 0x1BF94Cu: goto label_1bf94c;
            case 0x1BF998u: goto label_1bf998;
            case 0x1BF9B8u: goto label_1bf9b8;
            case 0x1BF9CCu: goto label_1bf9cc;
            case 0x1BF9D8u: goto label_1bf9d8;
            case 0x1BFA04u: goto label_1bfa04;
            case 0x1BFA18u: goto label_1bfa18;
            case 0x1BFA30u: goto label_1bfa30;
            case 0x1BFA34u: goto label_1bfa34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BFA44u;
    // 0x1bfa44: 0x0
    ctx->pc = 0x1bfa44u;
    // NOP
    // 0x1bfa48: 0x0
    ctx->pc = 0x1bfa48u;
    // NOP
    // 0x1bfa4c: 0x0
    ctx->pc = 0x1bfa4cu;
    // NOP
}
