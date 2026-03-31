#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F1870
// Address: 0x1f1870 - 0x1f1910
void sub_001F1870_0x1f1870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f1870u;

    // 0x1f1870: 0x27bdffe0
    ctx->pc = 0x1f1870u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f1874: 0xffbe0010
    ctx->pc = 0x1f1874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1f1878: 0xffbf0018
    ctx->pc = 0x1f1878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f187c: 0x3a0f02d
    ctx->pc = 0x1f187cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1880: 0xafc40000
    ctx->pc = 0x1f1880u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1f1884: 0xa0102d
    ctx->pc = 0x1f1884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1888: 0xc0182d
    ctx->pc = 0x1f1888u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f188c: 0xa7c20004
    ctx->pc = 0x1f188cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f1890: 0xa7c30006
    ctx->pc = 0x1f1890u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f1894: 0x97c20004
    ctx->pc = 0x1f1894u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f1898: 0x40202d
    ctx->pc = 0x1f1898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f189c: 0xc079f1f
    ctx->pc = 0x1F189Cu;
    SET_GPR_U32(ctx, 31, 0x1F18A4u);
    ctx->pc = 0x1E7C7Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7C7C_0x1e7c7c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F18A4u; }
    }
    if (ctx->pc != 0x1F18A4u) { return; }
    ctx->pc = 0x1F18A4u;
    // 0x1f18a4: 0xafc20008
    ctx->pc = 0x1f18a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1f18a8: 0x8fc20008
    ctx->pc = 0x1f18a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f18ac: 0x14400004
    ctx->pc = 0x1F18ACu;
    {
        const bool branch_taken_0x1f18ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f18ac) {
            ctx->pc = 0x1F18C0u;
            goto label_1f18c0;
        }
    }
    ctx->pc = 0x1F18B4u;
    // 0x1f18b4: 0x2402e4a9
    ctx->pc = 0x1f18b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294960297));
    // 0x1f18b8: 0x1000000f
    ctx->pc = 0x1F18B8u;
    {
        const bool branch_taken_0x1f18b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f18b8) {
            ctx->pc = 0x1F18F8u;
            goto label_1f18f8;
        }
    }
    ctx->pc = 0x1F18C0u;
label_1f18c0:
    // 0x1f18c0: 0x8fc30008
    ctx->pc = 0x1f18c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f18c4: 0x97c20004
    ctx->pc = 0x1f18c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f18c8: 0xa4620008
    ctx->pc = 0x1f18c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f18cc: 0x8fc30008
    ctx->pc = 0x1f18ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f18d0: 0x97c20006
    ctx->pc = 0x1f18d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 6)));
    // 0x1f18d4: 0xa462000a
    ctx->pc = 0x1f18d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f18d8: 0x8fc20008
    ctx->pc = 0x1f18d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f18dc: 0xa440000e
    ctx->pc = 0x1f18dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f18e0: 0x8fc20008
    ctx->pc = 0x1f18e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f18e4: 0xa440000c
    ctx->pc = 0x1f18e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f18e8: 0x8fc30000
    ctx->pc = 0x1f18e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f18ec: 0x8fc20008
    ctx->pc = 0x1f18ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f18f0: 0xac620000
    ctx->pc = 0x1f18f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1f18f4: 0x102d
    ctx->pc = 0x1f18f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f18f8:
    // 0x1f18f8: 0x3c0e82d
    ctx->pc = 0x1f18f8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f18fc: 0xdfbe0010
    ctx->pc = 0x1f18fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1900: 0xdfbf0018
    ctx->pc = 0x1f1900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f1904: 0x27bd0020
    ctx->pc = 0x1f1904u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f1908: 0x3e00008
    ctx->pc = 0x1F1908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F18C0u: goto label_1f18c0;
            case 0x1F18F8u: goto label_1f18f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F1910u;
}
