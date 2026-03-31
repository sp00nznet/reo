#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001828E8
// Address: 0x1828e8 - 0x182a10
void sub_001828E8_0x1828e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1828e8u;

    // 0x1828e8: 0x27bdffc0
    ctx->pc = 0x1828e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1828ec: 0x240a0898
    ctx->pc = 0x1828ecu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 2200));
    // 0x1828f0: 0xffb20010
    ctx->pc = 0x1828f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1828f4: 0x80902d
    ctx->pc = 0x1828f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828f8: 0x24a5018
    ctx->pc = 0x1828f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)(uint32_t)result); }
    // 0x1828fc: 0xffb50028
    ctx->pc = 0x1828fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x182900: 0x3c150028
    ctx->pc = 0x182900u;
    SET_GPR_U32(ctx, 21, ((uint32_t)40 << 16));
    // 0x182904: 0xa0182d
    ctx->pc = 0x182904u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182908: 0x123840
    ctx->pc = 0x182908u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 18), 1));
    // 0x18290c: 0x26a55b48
    ctx->pc = 0x18290cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 23368));
    // 0x182910: 0x28690000
    ctx->pc = 0x182910u;
    SET_GPR_U32(ctx, 9, SLT32(GPR_S32(ctx, 3), 0));
    // 0x182914: 0xffb00000
    ctx->pc = 0x182914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182918: 0x1451021
    ctx->pc = 0x182918u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x18291c: 0x1452821
    ctx->pc = 0x18291cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x182920: 0xffb10008
    ctx->pc = 0x182920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x182924: 0xc0882d
    ctx->pc = 0x182924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182928: 0xffb30018
    ctx->pc = 0x182928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x18292c: 0x340bffff
    ctx->pc = 0x18292cu;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 0), 65535));
    // 0x182930: 0x1635821
    ctx->pc = 0x182930u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x182934: 0xffb40020
    ctx->pc = 0x182934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x182938: 0x24540804
    ctx->pc = 0x182938u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 2052));
    // 0x18293c: 0x60402d
    ctx->pc = 0x18293cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182940: 0xffbf0030
    ctx->pc = 0x182940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x182944: 0xf23821
    ctx->pc = 0x182944u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x182948: 0x169400b
    ctx->pc = 0x182948u;
    if (GPR_U32(ctx, 9) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 11));
    // 0x18294c: 0x28620000
    ctx->pc = 0x18294cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 0));
    // 0x182950: 0x73940
    ctx->pc = 0x182950u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 5));
    // 0x182954: 0x246900ff
    ctx->pc = 0x182954u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 3), 255));
    // 0x182958: 0x88403
    ctx->pc = 0x182958u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 8), 16));
    // 0x18295c: 0x122180b
    ctx->pc = 0x18295cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 9));
    // 0x182960: 0xf23821
    ctx->pc = 0x182960u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x182964: 0x8e880000
    ctx->pc = 0x182964u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x182968: 0x101200
    ctx->pc = 0x182968u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 8));
    // 0x18296c: 0x73880
    ctx->pc = 0x18296cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x182970: 0x31a03
    ctx->pc = 0x182970u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x182974: 0x629823
    ctx->pc = 0x182974u;
    SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x182978: 0x3c020023
    ctx->pc = 0x182978u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x18297c: 0x2442fa18
    ctx->pc = 0x18297cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965784));
    // 0x182980: 0x471021
    ctx->pc = 0x182980u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x182984: 0x1110000b
    ctx->pc = 0x182984u;
    {
        const bool branch_taken_0x182984 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 16));
        ctx->pc = 0x182988u;
        SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x182984) {
            ctx->pc = 0x1829B4u;
            goto label_1829b4;
        }
    }
    ctx->pc = 0x18298Cu;
    // 0x18298c: 0x1221021
    ctx->pc = 0x18298cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x182990: 0x24070001
    ctx->pc = 0x182990u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x182994: 0xc061b98
    ctx->pc = 0x182994u;
    SET_GPR_U32(ctx, 31, 0x18299Cu);
    ctx->pc = 0x182998u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->pc = 0x186E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00186E60_0x186e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18299Cu; }
    }
    if (ctx->pc != 0x18299Cu) { return; }
    ctx->pc = 0x18299Cu;
    // 0x18299c: 0x3c038101
    ctx->pc = 0x18299cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33025 << 16));
    // 0x1829a0: 0x14400003
    ctx->pc = 0x1829A0u;
    {
        const bool branch_taken_0x1829a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1829A4u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 111));
        if (branch_taken_0x1829a0) {
            ctx->pc = 0x1829B0u;
            goto label_1829b0;
        }
    }
    ctx->pc = 0x1829A8u;
    // 0x1829a8: 0x1000000f
    ctx->pc = 0x1829A8u;
    {
        const bool branch_taken_0x1829a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1829ACu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1829a8) {
            ctx->pc = 0x1829E8u;
            goto label_1829e8;
        }
    }
    ctx->pc = 0x1829B0u;
label_1829b0:
    // 0x1829b0: 0xae900000
    ctx->pc = 0x1829b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
label_1829b4:
    // 0x1829b4: 0x24020226
    ctx->pc = 0x1829b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 550));
    // 0x1829b8: 0x26a35b48
    ctx->pc = 0x1829b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 23368));
    // 0x1829bc: 0x2422018
    ctx->pc = 0x1829bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1829c0: 0x931021
    ctx->pc = 0x1829c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1829c4: 0x21080
    ctx->pc = 0x1829c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1829c8: 0x431021
    ctx->pc = 0x1829c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1829cc: 0x8c420000
    ctx->pc = 0x1829ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1829d0: 0x4430005
    ctx->pc = 0x1829D0u;
    {
        const bool branch_taken_0x1829d0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1829d0) {
            ctx->pc = 0x1829D4u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x1829E8u;
            goto label_1829e8;
        }
    }
    ctx->pc = 0x1829D8u;
    // 0x1829d8: 0x3c038101
    ctx->pc = 0x1829d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33025 << 16));
    // 0x1829dc: 0x102d
    ctx->pc = 0x1829dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829e0: 0x34639001
    ctx->pc = 0x1829e0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 36865));
    // 0x1829e4: 0xae230000
    ctx->pc = 0x1829e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1829e8:
    // 0x1829e8: 0xdfb00000
    ctx->pc = 0x1829e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1829ec: 0xdfb10008
    ctx->pc = 0x1829ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1829f0: 0xdfb20010
    ctx->pc = 0x1829f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1829f4: 0xdfb30018
    ctx->pc = 0x1829f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1829f8: 0xdfb40020
    ctx->pc = 0x1829f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1829fc: 0xdfb50028
    ctx->pc = 0x1829fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x182a00: 0xdfbf0030
    ctx->pc = 0x182a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182a04: 0x3e00008
    ctx->pc = 0x182A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182A08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1829B0u: goto label_1829b0;
            case 0x1829B4u: goto label_1829b4;
            case 0x1829E8u: goto label_1829e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182A0Cu;
    // 0x182a0c: 0x0
    ctx->pc = 0x182a0cu;
    // NOP
}
