#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015C8C0
// Address: 0x15c8c0 - 0x15ca20
void sub_0015C8C0_0x15c8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15c8c0u;

label_15c8c0:
    // 0x15c8c0: 0x27bdffd0
    ctx->pc = 0x15c8c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15c8c4: 0xffb00000
    ctx->pc = 0x15c8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15c8c8: 0x80802d
    ctx->pc = 0x15c8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c8cc: 0xffb10008
    ctx->pc = 0x15c8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15c8d0: 0xffb20010
    ctx->pc = 0x15c8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15c8d4: 0xffb30018
    ctx->pc = 0x15c8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15c8d8: 0xffbf0020
    ctx->pc = 0x15c8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15c8dc: 0x8e0500d4
    ctx->pc = 0x15c8dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x15c8e0: 0x54a0000b
    ctx->pc = 0x15C8E0u;
    {
        const bool branch_taken_0x15c8e0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x15c8e0) {
            ctx->pc = 0x15C8E4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->pc = 0x15C910u;
            goto label_15c910;
        }
    }
    ctx->pc = 0x15C8E8u;
    // 0x15c8e8: 0x3c040024
    ctx->pc = 0x15c8e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15c8ec: 0xdfb00000
    ctx->pc = 0x15c8ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c8f0: 0xdfb10008
    ctx->pc = 0x15c8f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15c8f4: 0x2484e810
    ctx->pc = 0x15c8f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961168));
    // 0x15c8f8: 0xdfb20010
    ctx->pc = 0x15c8f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c8fc: 0xdfb30018
    ctx->pc = 0x15c8fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15c900: 0xdfbf0020
    ctx->pc = 0x15c900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c904: 0x8058dd4
    ctx->pc = 0x15C904u;
    ctx->pc = 0x15C908u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x15C90Cu;
    // 0x15c90c: 0x0
    ctx->pc = 0x15c90cu;
    // NOP
label_15c910:
    // 0x15c910: 0x8cb30008
    ctx->pc = 0x15c910u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x15c914: 0x24720004
    ctx->pc = 0x15c914u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 4));
    // 0x15c918: 0x8ca20004
    ctx->pc = 0x15c918u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x15c91c: 0x2531818
    ctx->pc = 0x15c91cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x15c920: 0x43102a
    ctx->pc = 0x15c920u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x15c924: 0x1040000a
    ctx->pc = 0x15C924u;
    {
        const bool branch_taken_0x15c924 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15C928u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x15c924) {
            ctx->pc = 0x15C950u;
            goto label_15c950;
        }
    }
    ctx->pc = 0x15C92Cu;
    // 0x15c92c: 0x3c040024
    ctx->pc = 0x15c92cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15c930: 0xdfb00000
    ctx->pc = 0x15c930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c934: 0xdfb10008
    ctx->pc = 0x15c934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15c938: 0x2484e848
    ctx->pc = 0x15c938u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961224));
    // 0x15c93c: 0xdfb20010
    ctx->pc = 0x15c93cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c940: 0xdfb30018
    ctx->pc = 0x15c940u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15c944: 0xdfbf0020
    ctx->pc = 0x15c944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c948: 0x8058dd4
    ctx->pc = 0x15C948u;
    ctx->pc = 0x15C94Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x15C950u;
label_15c950:
    // 0x15c950: 0xc057a4c
    ctx->pc = 0x15C950u;
    SET_GPR_U32(ctx, 31, 0x15C958u);
    ctx->pc = 0x15E930u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E930_0x15e930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C958u; }
    }
    if (ctx->pc != 0x15C958u) { return; }
    ctx->pc = 0x15C958u;
    // 0x15c958: 0x24030001
    ctx->pc = 0x15c958u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c95c: 0x5443000c
    ctx->pc = 0x15C95Cu;
    {
        const bool branch_taken_0x15c95c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x15c95c) {
            ctx->pc = 0x15C960u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x15C990u;
            goto label_15c990;
        }
    }
    ctx->pc = 0x15C964u;
    // 0x15c964: 0x8e040040
    ctx->pc = 0x15c964u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x15c968: 0x220282d
    ctx->pc = 0x15c968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c96c: 0x240302d
    ctx->pc = 0x15c96cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c970: 0xdfb20010
    ctx->pc = 0x15c970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c974: 0x260382d
    ctx->pc = 0x15c974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c978: 0xdfb30018
    ctx->pc = 0x15c978u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15c97c: 0xdfb00000
    ctx->pc = 0x15c97cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c980: 0xdfb10008
    ctx->pc = 0x15c980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15c984: 0xdfbf0020
    ctx->pc = 0x15c984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c988: 0x805b03a
    ctx->pc = 0x15C988u;
    ctx->pc = 0x15C98Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x16C0E8u;
    entry_16c0e8_0x16c308(rdram, ctx, runtime); return;
    ctx->pc = 0x15C990u;
label_15c990:
    // 0x15c990: 0xdfb10008
    ctx->pc = 0x15c990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15c994: 0xdfb20010
    ctx->pc = 0x15c994u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c998: 0xdfb30018
    ctx->pc = 0x15c998u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15c99c: 0xdfbf0020
    ctx->pc = 0x15c99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c9a0: 0x3e00008
    ctx->pc = 0x15C9A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C9A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15C8C0u: goto label_15c8c0;
            case 0x15C910u: goto label_15c910;
            case 0x15C950u: goto label_15c950;
            case 0x15C990u: goto label_15c990;
            case 0x15C9D8u: goto label_15c9d8;
            case 0x15CA08u: goto label_15ca08;
            case 0x15CA14u: goto label_15ca14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15C9A8u;
    // 0x15c9a8: 0x80402d
    ctx->pc = 0x15c9a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c9ac: 0x27bdfff0
    ctx->pc = 0x15c9acu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15c9b0: 0xffbf0000
    ctx->pc = 0x15c9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15c9b4: 0x250300c8
    ctx->pc = 0x15c9b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 8), 200));
    // 0x15c9b8: 0x14a00007
    ctx->pc = 0x15C9B8u;
    {
        const bool branch_taken_0x15c9b8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x15C9BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 188));
        if (branch_taken_0x15c9b8) {
            ctx->pc = 0x15C9D8u;
            goto label_15c9d8;
        }
    }
    ctx->pc = 0x15C9C0u;
    // 0x15c9c0: 0xac600008
    ctx->pc = 0x15c9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x15c9c4: 0xad0200d4
    ctx->pc = 0x15c9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 212), GPR_U32(ctx, 2));
    // 0x15c9c8: 0xac600000
    ctx->pc = 0x15c9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x15c9cc: 0x10000011
    ctx->pc = 0x15C9CCu;
    {
        const bool branch_taken_0x15c9cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15C9D0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x15c9cc) {
            ctx->pc = 0x15CA14u;
            goto label_15ca14;
        }
    }
    ctx->pc = 0x15C9D4u;
    // 0x15c9d4: 0x0
    ctx->pc = 0x15c9d4u;
    // NOP
label_15c9d8:
    // 0x15c9d8: 0x8d02001c
    ctx->pc = 0x15c9d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x15c9dc: 0x24420004
    ctx->pc = 0x15c9dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x15c9e0: 0x471018
    ctx->pc = 0x15c9e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x15c9e4: 0xc2102a
    ctx->pc = 0x15c9e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x15c9e8: 0x50400007
    ctx->pc = 0x15C9E8u;
    {
        const bool branch_taken_0x15c9e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x15c9e8) {
            ctx->pc = 0x15C9ECu;
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
            ctx->pc = 0x15CA08u;
            goto label_15ca08;
        }
    }
    ctx->pc = 0x15C9F0u;
    // 0x15c9f0: 0x3c040024
    ctx->pc = 0x15c9f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15c9f4: 0xdfbf0000
    ctx->pc = 0x15c9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c9f8: 0x2484e888
    ctx->pc = 0x15c9f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961288));
    // 0x15c9fc: 0x8058dd4
    ctx->pc = 0x15C9FCu;
    ctx->pc = 0x15CA00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x15CA04u;
    // 0x15ca04: 0x0
    ctx->pc = 0x15ca04u;
    // NOP
label_15ca08:
    // 0x15ca08: 0xac660004
    ctx->pc = 0x15ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x15ca0c: 0xac670008
    ctx->pc = 0x15ca0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x15ca10: 0xad0300d4
    ctx->pc = 0x15ca10u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 212), GPR_U32(ctx, 3));
label_15ca14:
    // 0x15ca14: 0xdfbf0000
    ctx->pc = 0x15ca14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ca18: 0x8057230
    ctx->pc = 0x15CA18u;
    ctx->pc = 0x15CA1Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x15C8C0u;
    goto label_15c8c0;
    ctx->pc = 0x15CA20u;
}
