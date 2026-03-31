#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F1910
// Address: 0x1f1910 - 0x1f19c0
void sub_001F1910_0x1f1910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f1910u;

    // 0x1f1910: 0x27bdffe0
    ctx->pc = 0x1f1910u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f1914: 0xffbe0010
    ctx->pc = 0x1f1914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1f1918: 0xffbf0018
    ctx->pc = 0x1f1918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f191c: 0x3a0f02d
    ctx->pc = 0x1f191cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1920: 0xafc40000
    ctx->pc = 0x1f1920u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1f1924: 0xafc50004
    ctx->pc = 0x1f1924u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1f1928: 0xc0102d
    ctx->pc = 0x1f1928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f192c: 0xe0182d
    ctx->pc = 0x1f192cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1930: 0xa7c20008
    ctx->pc = 0x1f1930u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f1934: 0xa7c3000a
    ctx->pc = 0x1f1934u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f1938: 0xafc0000c
    ctx->pc = 0x1f1938u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
    // 0x1f193c: 0x97c20008
    ctx->pc = 0x1f193cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f1940: 0x97c3000a
    ctx->pc = 0x1f1940u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x1f1944: 0x8fc40004
    ctx->pc = 0x1f1944u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f1948: 0x40282d
    ctx->pc = 0x1f1948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f194c: 0x60302d
    ctx->pc = 0x1f194cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1950: 0xc07c61c
    ctx->pc = 0x1F1950u;
    SET_GPR_U32(ctx, 31, 0x1F1958u);
    ctx->pc = 0x1F1870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1870_0x1f1870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1958u; }
    }
    if (ctx->pc != 0x1F1958u) { return; }
    ctx->pc = 0x1F1958u;
    // 0x1f1958: 0xafc2000c
    ctx->pc = 0x1f1958u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1f195c: 0x8fc2000c
    ctx->pc = 0x1f195cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f1960: 0x10400004
    ctx->pc = 0x1F1960u;
    {
        const bool branch_taken_0x1f1960 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1960) {
            ctx->pc = 0x1F1974u;
            goto label_1f1974;
        }
    }
    ctx->pc = 0x1F1968u;
    // 0x1f1968: 0x8fc2000c
    ctx->pc = 0x1f1968u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f196c: 0x1000000e
    ctx->pc = 0x1F196Cu;
    {
        const bool branch_taken_0x1f196c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f196c) {
            ctx->pc = 0x1F19A8u;
            goto label_1f19a8;
        }
    }
    ctx->pc = 0x1F1974u;
label_1f1974:
    // 0x1f1974: 0x8fc20004
    ctx->pc = 0x1f1974u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f1978: 0x8fc40000
    ctx->pc = 0x1f1978u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f197c: 0x8c450000
    ctx->pc = 0x1f197cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1980: 0xc07c47a
    ctx->pc = 0x1F1980u;
    SET_GPR_U32(ctx, 31, 0x1F1988u);
    ctx->pc = 0x1F11E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F11E8_0x1f11e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1988u; }
    }
    if (ctx->pc != 0x1F1988u) { return; }
    ctx->pc = 0x1F1988u;
    // 0x1f1988: 0xafc2000c
    ctx->pc = 0x1f1988u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1f198c: 0x8fc2000c
    ctx->pc = 0x1f198cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f1990: 0x10400004
    ctx->pc = 0x1F1990u;
    {
        const bool branch_taken_0x1f1990 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1990) {
            ctx->pc = 0x1F19A4u;
            goto label_1f19a4;
        }
    }
    ctx->pc = 0x1F1998u;
    // 0x1f1998: 0x8fc2000c
    ctx->pc = 0x1f1998u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f199c: 0x10000002
    ctx->pc = 0x1F199Cu;
    {
        const bool branch_taken_0x1f199c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f199c) {
            ctx->pc = 0x1F19A8u;
            goto label_1f19a8;
        }
    }
    ctx->pc = 0x1F19A4u;
label_1f19a4:
    // 0x1f19a4: 0x8fc2000c
    ctx->pc = 0x1f19a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1f19a8:
    // 0x1f19a8: 0x3c0e82d
    ctx->pc = 0x1f19a8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f19ac: 0xdfbe0010
    ctx->pc = 0x1f19acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f19b0: 0xdfbf0018
    ctx->pc = 0x1f19b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f19b4: 0x27bd0020
    ctx->pc = 0x1f19b4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f19b8: 0x3e00008
    ctx->pc = 0x1F19B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F1974u: goto label_1f1974;
            case 0x1F19A4u: goto label_1f19a4;
            case 0x1F19A8u: goto label_1f19a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F19C0u;
}
