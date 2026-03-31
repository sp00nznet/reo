#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F2028
// Address: 0x1f2028 - 0x1f2810
void sub_001F2028_0x1f2028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f2028u;

    // 0x1f2028: 0x27bdffa0
    ctx->pc = 0x1f2028u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f202c: 0xffbe0050
    ctx->pc = 0x1f202cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1f2030: 0xffbf0058
    ctx->pc = 0x1f2030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1f2034: 0x3a0f02d
    ctx->pc = 0x1f2034u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2038: 0xafc40000
    ctx->pc = 0x1f2038u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1f203c: 0xafc50004
    ctx->pc = 0x1f203cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1f2040: 0xc0102d
    ctx->pc = 0x1f2040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2044: 0xafc7000c
    ctx->pc = 0x1f2044u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x1f2048: 0xafc80010
    ctx->pc = 0x1f2048u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x1f204c: 0xa7c20008
    ctx->pc = 0x1f204cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f2050: 0x2402e0c4
    ctx->pc = 0x1f2050u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294959300));
    // 0x1f2054: 0xafc20014
    ctx->pc = 0x1f2054u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x1f2058: 0x8fc20004
    ctx->pc = 0x1f2058u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f205c: 0xac400000
    ctx->pc = 0x1f205cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1f2060: 0x8fc2000c
    ctx->pc = 0x1f2060u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1f2064: 0x104000f3
    ctx->pc = 0x1F2064u;
    {
        const bool branch_taken_0x1f2064 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2064) {
            ctx->pc = 0x1F2434u;
            goto label_1f2434;
        }
    }
    ctx->pc = 0x1F206Cu;
    // 0x1f206c: 0x97c30008
    ctx->pc = 0x1f206cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f2070: 0x8fc20000
    ctx->pc = 0x1f2070u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2074: 0x9442005e
    ctx->pc = 0x1f2074u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 94)));
    // 0x1f2078: 0x2442ffd4
    ctx->pc = 0x1f2078u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967252));
    // 0x1f207c: 0x43102b
    ctx->pc = 0x1f207cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f2080: 0x14400042
    ctx->pc = 0x1F2080u;
    {
        const bool branch_taken_0x1f2080 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f2080) {
            ctx->pc = 0x1F218Cu;
            goto label_1f218c;
        }
    }
    ctx->pc = 0x1F2088u;
    // 0x1f2088: 0x8fc40000
    ctx->pc = 0x1f2088u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f208c: 0x24050001
    ctx->pc = 0x1f208cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2090: 0xc07c44b
    ctx->pc = 0x1F2090u;
    SET_GPR_U32(ctx, 31, 0x1F2098u);
    ctx->pc = 0x1F112Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F112C_0x1f112c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2098u; }
    }
    if (ctx->pc != 0x1F2098u) { return; }
    ctx->pc = 0x1F2098u;
    // 0x1f2098: 0x10400004
    ctx->pc = 0x1F2098u;
    {
        const bool branch_taken_0x1f2098 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2098) {
            ctx->pc = 0x1F20ACu;
            goto label_1f20ac;
        }
    }
    ctx->pc = 0x1F20A0u;
    // 0x1f20a0: 0x8fc20010
    ctx->pc = 0x1f20a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1f20a4: 0x14400034
    ctx->pc = 0x1F20A4u;
    {
        const bool branch_taken_0x1f20a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f20a4) {
            ctx->pc = 0x1F2178u;
            goto label_1f2178;
        }
    }
    ctx->pc = 0x1F20ACu;
label_1f20ac:
    // 0x1f20ac: 0x8fc40000
    ctx->pc = 0x1f20acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f20b0: 0x8fc50004
    ctx->pc = 0x1f20b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f20b4: 0xc07c499
    ctx->pc = 0x1F20B4u;
    SET_GPR_U32(ctx, 31, 0x1F20BCu);
    ctx->pc = 0x1F1264u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1264_0x1f1264(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F20BCu; }
    }
    if (ctx->pc != 0x1F20BCu) { return; }
    ctx->pc = 0x1F20BCu;
    // 0x1f20bc: 0xafc20014
    ctx->pc = 0x1f20bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x1f20c0: 0x8fc20014
    ctx->pc = 0x1f20c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f20c4: 0x14400025
    ctx->pc = 0x1F20C4u;
    {
        const bool branch_taken_0x1f20c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f20c4) {
            ctx->pc = 0x1F215Cu;
            goto label_1f215c;
        }
    }
    ctx->pc = 0x1F20CCu;
    // 0x1f20cc: 0x8fc30000
    ctx->pc = 0x1f20ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f20d0: 0x8fc20000
    ctx->pc = 0x1f20d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f20d4: 0x8c42003c
    ctx->pc = 0x1f20d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1f20d8: 0x24420001
    ctx->pc = 0x1f20d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f20dc: 0xac62003c
    ctx->pc = 0x1f20dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
    // 0x1f20e0: 0x8fc40000
    ctx->pc = 0x1f20e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f20e4: 0xc07c441
    ctx->pc = 0x1F20E4u;
    SET_GPR_U32(ctx, 31, 0x1F20ECu);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F20ECu; }
    }
    if (ctx->pc != 0x1F20ECu) { return; }
    ctx->pc = 0x1F20ECu;
    // 0x1f20ec: 0x40182d
    ctx->pc = 0x1f20ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f20f0: 0x8fc20000
    ctx->pc = 0x1f20f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f20f4: 0x94420060
    ctx->pc = 0x1f20f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1f20f8: 0x62102b
    ctx->pc = 0x1f20f8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f20fc: 0x10400007
    ctx->pc = 0x1F20FCu;
    {
        const bool branch_taken_0x1f20fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f20fc) {
            ctx->pc = 0x1F211Cu;
            goto label_1f211c;
        }
    }
    ctx->pc = 0x1F2104u;
    // 0x1f2104: 0x8fc40000
    ctx->pc = 0x1f2104u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2108: 0xc07c441
    ctx->pc = 0x1F2108u;
    SET_GPR_U32(ctx, 31, 0x1F2110u);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2110u; }
    }
    if (ctx->pc != 0x1F2110u) { return; }
    ctx->pc = 0x1F2110u;
    // 0x1f2110: 0x40182d
    ctx->pc = 0x1f2110u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2114: 0x8fc20000
    ctx->pc = 0x1f2114u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2118: 0xa4430060
    ctx->pc = 0x1f2118u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 96), (uint16_t)GPR_U32(ctx, 3));
label_1f211c:
    // 0x1f211c: 0x8fc40000
    ctx->pc = 0x1f211cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2120: 0xc07c441
    ctx->pc = 0x1F2120u;
    SET_GPR_U32(ctx, 31, 0x1F2128u);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2128u; }
    }
    if (ctx->pc != 0x1F2128u) { return; }
    ctx->pc = 0x1F2128u;
    // 0x1f2128: 0x40182d
    ctx->pc = 0x1f2128u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f212c: 0x8fc20000
    ctx->pc = 0x1f212cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2130: 0x94420070
    ctx->pc = 0x1f2130u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1f2134: 0x62102b
    ctx->pc = 0x1f2134u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f2138: 0x10400005
    ctx->pc = 0x1F2138u;
    {
        const bool branch_taken_0x1f2138 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2138) {
            ctx->pc = 0x1F2150u;
            goto label_1f2150;
        }
    }
    ctx->pc = 0x1F2140u;
    // 0x1f2140: 0x8fc40000
    ctx->pc = 0x1f2140u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2144: 0x24050001
    ctx->pc = 0x1f2144u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2148: 0xc07c45b
    ctx->pc = 0x1F2148u;
    SET_GPR_U32(ctx, 31, 0x1F2150u);
    ctx->pc = 0x1F116Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F116C_0x1f116c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2150u; }
    }
    if (ctx->pc != 0x1F2150u) { return; }
    ctx->pc = 0x1F2150u;
label_1f2150:
    // 0x1f2150: 0x8fc20014
    ctx->pc = 0x1f2150u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f2154: 0x100001a8
    ctx->pc = 0x1F2154u;
    {
        const bool branch_taken_0x1f2154 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2154) {
            ctx->pc = 0x1F27F8u;
            goto label_1f27f8;
        }
    }
    ctx->pc = 0x1F215Cu;
label_1f215c:
    // 0x1f215c: 0x8fc30014
    ctx->pc = 0x1f215cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f2160: 0x2402e4aa
    ctx->pc = 0x1f2160u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294960298));
    // 0x1f2164: 0x10620004
    ctx->pc = 0x1F2164u;
    {
        const bool branch_taken_0x1f2164 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1f2164) {
            ctx->pc = 0x1F2178u;
            goto label_1f2178;
        }
    }
    ctx->pc = 0x1F216Cu;
    // 0x1f216c: 0x8fc20014
    ctx->pc = 0x1f216cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f2170: 0x100001a1
    ctx->pc = 0x1F2170u;
    {
        const bool branch_taken_0x1f2170 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2170) {
            ctx->pc = 0x1F27F8u;
            goto label_1f27f8;
        }
    }
    ctx->pc = 0x1F2178u;
label_1f2178:
    // 0x1f2178: 0x8fc30000
    ctx->pc = 0x1f2178u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f217c: 0x8fc20000
    ctx->pc = 0x1f217cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2180: 0x8c420058
    ctx->pc = 0x1f2180u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f2184: 0x24420001
    ctx->pc = 0x1f2184u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f2188: 0xac620058
    ctx->pc = 0x1f2188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_1f218c:
    // 0x1f218c: 0x97c30008
    ctx->pc = 0x1f218cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f2190: 0x8fc20000
    ctx->pc = 0x1f2190u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2194: 0x94420064
    ctx->pc = 0x1f2194u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1f2198: 0x2442ffd4
    ctx->pc = 0x1f2198u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967252));
    // 0x1f219c: 0x43102b
    ctx->pc = 0x1f219cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f21a0: 0x1440004e
    ctx->pc = 0x1F21A0u;
    {
        const bool branch_taken_0x1f21a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f21a0) {
            ctx->pc = 0x1F22DCu;
            goto label_1f22dc;
        }
    }
    ctx->pc = 0x1F21A8u;
    // 0x1f21a8: 0x8fc20000
    ctx->pc = 0x1f21a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f21ac: 0x24420014
    ctx->pc = 0x1f21acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x1f21b0: 0x40202d
    ctx->pc = 0x1f21b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f21b4: 0x24050001
    ctx->pc = 0x1f21b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f21b8: 0xc07c44b
    ctx->pc = 0x1F21B8u;
    SET_GPR_U32(ctx, 31, 0x1F21C0u);
    ctx->pc = 0x1F112Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F112C_0x1f112c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F21C0u; }
    }
    if (ctx->pc != 0x1F21C0u) { return; }
    ctx->pc = 0x1F21C0u;
    // 0x1f21c0: 0x10400004
    ctx->pc = 0x1F21C0u;
    {
        const bool branch_taken_0x1f21c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f21c0) {
            ctx->pc = 0x1F21D4u;
            goto label_1f21d4;
        }
    }
    ctx->pc = 0x1F21C8u;
    // 0x1f21c8: 0x8fc20010
    ctx->pc = 0x1f21c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1f21cc: 0x1440003e
    ctx->pc = 0x1F21CCu;
    {
        const bool branch_taken_0x1f21cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f21cc) {
            ctx->pc = 0x1F22C8u;
            goto label_1f22c8;
        }
    }
    ctx->pc = 0x1F21D4u;
label_1f21d4:
    // 0x1f21d4: 0x8fc20000
    ctx->pc = 0x1f21d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f21d8: 0x24420014
    ctx->pc = 0x1f21d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x1f21dc: 0x40202d
    ctx->pc = 0x1f21dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f21e0: 0x8fc50004
    ctx->pc = 0x1f21e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f21e4: 0xc07c499
    ctx->pc = 0x1F21E4u;
    SET_GPR_U32(ctx, 31, 0x1F21ECu);
    ctx->pc = 0x1F1264u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1264_0x1f1264(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F21ECu; }
    }
    if (ctx->pc != 0x1F21ECu) { return; }
    ctx->pc = 0x1F21ECu;
    // 0x1f21ec: 0xafc20014
    ctx->pc = 0x1f21ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x1f21f0: 0x8fc20014
    ctx->pc = 0x1f21f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f21f4: 0x1440002d
    ctx->pc = 0x1F21F4u;
    {
        const bool branch_taken_0x1f21f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f21f4) {
            ctx->pc = 0x1F22ACu;
            goto label_1f22ac;
        }
    }
    ctx->pc = 0x1F21FCu;
    // 0x1f21fc: 0x8fc30000
    ctx->pc = 0x1f21fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2200: 0x8fc20000
    ctx->pc = 0x1f2200u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2204: 0x8c420044
    ctx->pc = 0x1f2204u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1f2208: 0x24420001
    ctx->pc = 0x1f2208u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f220c: 0xac620044
    ctx->pc = 0x1f220cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    // 0x1f2210: 0x8fc20000
    ctx->pc = 0x1f2210u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2214: 0x24420014
    ctx->pc = 0x1f2214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x1f2218: 0x40202d
    ctx->pc = 0x1f2218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f221c: 0xc07c441
    ctx->pc = 0x1F221Cu;
    SET_GPR_U32(ctx, 31, 0x1F2224u);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2224u; }
    }
    if (ctx->pc != 0x1F2224u) { return; }
    ctx->pc = 0x1F2224u;
    // 0x1f2224: 0x40182d
    ctx->pc = 0x1f2224u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2228: 0x8fc20000
    ctx->pc = 0x1f2228u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f222c: 0x94420066
    ctx->pc = 0x1f222cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 102)));
    // 0x1f2230: 0x62102b
    ctx->pc = 0x1f2230u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f2234: 0x10400009
    ctx->pc = 0x1F2234u;
    {
        const bool branch_taken_0x1f2234 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2234) {
            ctx->pc = 0x1F225Cu;
            goto label_1f225c;
        }
    }
    ctx->pc = 0x1F223Cu;
    // 0x1f223c: 0x8fc20000
    ctx->pc = 0x1f223cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2240: 0x24420014
    ctx->pc = 0x1f2240u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x1f2244: 0x40202d
    ctx->pc = 0x1f2244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2248: 0xc07c441
    ctx->pc = 0x1F2248u;
    SET_GPR_U32(ctx, 31, 0x1F2250u);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2250u; }
    }
    if (ctx->pc != 0x1F2250u) { return; }
    ctx->pc = 0x1F2250u;
    // 0x1f2250: 0x40182d
    ctx->pc = 0x1f2250u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2254: 0x8fc20000
    ctx->pc = 0x1f2254u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2258: 0xa4430066
    ctx->pc = 0x1f2258u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 102), (uint16_t)GPR_U32(ctx, 3));
label_1f225c:
    // 0x1f225c: 0x8fc20000
    ctx->pc = 0x1f225cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2260: 0x24420014
    ctx->pc = 0x1f2260u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x1f2264: 0x40202d
    ctx->pc = 0x1f2264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2268: 0xc07c441
    ctx->pc = 0x1F2268u;
    SET_GPR_U32(ctx, 31, 0x1F2270u);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2270u; }
    }
    if (ctx->pc != 0x1F2270u) { return; }
    ctx->pc = 0x1F2270u;
    // 0x1f2270: 0x40182d
    ctx->pc = 0x1f2270u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2274: 0x8fc20000
    ctx->pc = 0x1f2274u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2278: 0x94420072
    ctx->pc = 0x1f2278u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 114)));
    // 0x1f227c: 0x62102b
    ctx->pc = 0x1f227cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f2280: 0x10400007
    ctx->pc = 0x1F2280u;
    {
        const bool branch_taken_0x1f2280 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2280) {
            ctx->pc = 0x1F22A0u;
            goto label_1f22a0;
        }
    }
    ctx->pc = 0x1F2288u;
    // 0x1f2288: 0x8fc20000
    ctx->pc = 0x1f2288u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f228c: 0x24420014
    ctx->pc = 0x1f228cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x1f2290: 0x40202d
    ctx->pc = 0x1f2290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2294: 0x24050001
    ctx->pc = 0x1f2294u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2298: 0xc07c45b
    ctx->pc = 0x1F2298u;
    SET_GPR_U32(ctx, 31, 0x1F22A0u);
    ctx->pc = 0x1F116Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F116C_0x1f116c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F22A0u; }
    }
    if (ctx->pc != 0x1F22A0u) { return; }
    ctx->pc = 0x1F22A0u;
label_1f22a0:
    // 0x1f22a0: 0x8fc20014
    ctx->pc = 0x1f22a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f22a4: 0x10000154
    ctx->pc = 0x1F22A4u;
    {
        const bool branch_taken_0x1f22a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f22a4) {
            ctx->pc = 0x1F27F8u;
            goto label_1f27f8;
        }
    }
    ctx->pc = 0x1F22ACu;
label_1f22ac:
    // 0x1f22ac: 0x8fc30014
    ctx->pc = 0x1f22acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f22b0: 0x2402e4aa
    ctx->pc = 0x1f22b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294960298));
    // 0x1f22b4: 0x10620004
    ctx->pc = 0x1F22B4u;
    {
        const bool branch_taken_0x1f22b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1f22b4) {
            ctx->pc = 0x1F22C8u;
            goto label_1f22c8;
        }
    }
    ctx->pc = 0x1F22BCu;
    // 0x1f22bc: 0x8fc20014
    ctx->pc = 0x1f22bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f22c0: 0x1000014d
    ctx->pc = 0x1F22C0u;
    {
        const bool branch_taken_0x1f22c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f22c0) {
            ctx->pc = 0x1F27F8u;
            goto label_1f27f8;
        }
    }
    ctx->pc = 0x1F22C8u;
label_1f22c8:
    // 0x1f22c8: 0x8fc30000
    ctx->pc = 0x1f22c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f22cc: 0x8fc20000
    ctx->pc = 0x1f22ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f22d0: 0x8c420058
    ctx->pc = 0x1f22d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f22d4: 0x24420001
    ctx->pc = 0x1f22d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f22d8: 0xac620058
    ctx->pc = 0x1f22d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_1f22dc:
    // 0x1f22dc: 0x97c30008
    ctx->pc = 0x1f22dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f22e0: 0x8fc20000
    ctx->pc = 0x1f22e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f22e4: 0x9442006a
    ctx->pc = 0x1f22e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 106)));
    // 0x1f22e8: 0x2442ffd4
    ctx->pc = 0x1f22e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967252));
    // 0x1f22ec: 0x43102b
    ctx->pc = 0x1f22ecu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f22f0: 0x14400140
    ctx->pc = 0x1F22F0u;
    {
        const bool branch_taken_0x1f22f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f22f0) {
            ctx->pc = 0x1F27F4u;
            goto label_1f27f4;
        }
    }
    ctx->pc = 0x1F22F8u;
    // 0x1f22f8: 0x8fc20000
    ctx->pc = 0x1f22f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f22fc: 0x24420028
    ctx->pc = 0x1f22fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x1f2300: 0x40202d
    ctx->pc = 0x1f2300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2304: 0x24050001
    ctx->pc = 0x1f2304u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2308: 0xc07c44b
    ctx->pc = 0x1F2308u;
    SET_GPR_U32(ctx, 31, 0x1F2310u);
    ctx->pc = 0x1F112Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F112C_0x1f112c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2310u; }
    }
    if (ctx->pc != 0x1F2310u) { return; }
    ctx->pc = 0x1F2310u;
    // 0x1f2310: 0x10400004
    ctx->pc = 0x1F2310u;
    {
        const bool branch_taken_0x1f2310 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2310) {
            ctx->pc = 0x1F2324u;
            goto label_1f2324;
        }
    }
    ctx->pc = 0x1F2318u;
    // 0x1f2318: 0x8fc20010
    ctx->pc = 0x1f2318u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1f231c: 0x1440003e
    ctx->pc = 0x1F231Cu;
    {
        const bool branch_taken_0x1f231c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f231c) {
            ctx->pc = 0x1F2418u;
            goto label_1f2418;
        }
    }
    ctx->pc = 0x1F2324u;
label_1f2324:
    // 0x1f2324: 0x8fc20000
    ctx->pc = 0x1f2324u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2328: 0x24420028
    ctx->pc = 0x1f2328u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x1f232c: 0x40202d
    ctx->pc = 0x1f232cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2330: 0x8fc50004
    ctx->pc = 0x1f2330u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f2334: 0xc07c499
    ctx->pc = 0x1F2334u;
    SET_GPR_U32(ctx, 31, 0x1F233Cu);
    ctx->pc = 0x1F1264u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1264_0x1f1264(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F233Cu; }
    }
    if (ctx->pc != 0x1F233Cu) { return; }
    ctx->pc = 0x1F233Cu;
    // 0x1f233c: 0xafc20014
    ctx->pc = 0x1f233cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x1f2340: 0x8fc20014
    ctx->pc = 0x1f2340u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f2344: 0x1440002d
    ctx->pc = 0x1F2344u;
    {
        const bool branch_taken_0x1f2344 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f2344) {
            ctx->pc = 0x1F23FCu;
            goto label_1f23fc;
        }
    }
    ctx->pc = 0x1F234Cu;
    // 0x1f234c: 0x8fc30000
    ctx->pc = 0x1f234cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2350: 0x8fc20000
    ctx->pc = 0x1f2350u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2354: 0x8c42004c
    ctx->pc = 0x1f2354u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1f2358: 0x24420001
    ctx->pc = 0x1f2358u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f235c: 0xac62004c
    ctx->pc = 0x1f235cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1f2360: 0x8fc20000
    ctx->pc = 0x1f2360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2364: 0x24420028
    ctx->pc = 0x1f2364u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x1f2368: 0x40202d
    ctx->pc = 0x1f2368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f236c: 0xc07c441
    ctx->pc = 0x1F236Cu;
    SET_GPR_U32(ctx, 31, 0x1F2374u);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2374u; }
    }
    if (ctx->pc != 0x1F2374u) { return; }
    ctx->pc = 0x1F2374u;
    // 0x1f2374: 0x40182d
    ctx->pc = 0x1f2374u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2378: 0x8fc20000
    ctx->pc = 0x1f2378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f237c: 0x9442006c
    ctx->pc = 0x1f237cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1f2380: 0x62102b
    ctx->pc = 0x1f2380u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f2384: 0x10400009
    ctx->pc = 0x1F2384u;
    {
        const bool branch_taken_0x1f2384 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2384) {
            ctx->pc = 0x1F23ACu;
            goto label_1f23ac;
        }
    }
    ctx->pc = 0x1F238Cu;
    // 0x1f238c: 0x8fc20000
    ctx->pc = 0x1f238cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2390: 0x24420028
    ctx->pc = 0x1f2390u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x1f2394: 0x40202d
    ctx->pc = 0x1f2394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2398: 0xc07c441
    ctx->pc = 0x1F2398u;
    SET_GPR_U32(ctx, 31, 0x1F23A0u);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F23A0u; }
    }
    if (ctx->pc != 0x1F23A0u) { return; }
    ctx->pc = 0x1F23A0u;
    // 0x1f23a0: 0x40182d
    ctx->pc = 0x1f23a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23a4: 0x8fc20000
    ctx->pc = 0x1f23a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f23a8: 0xa443006c
    ctx->pc = 0x1f23a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 108), (uint16_t)GPR_U32(ctx, 3));
label_1f23ac:
    // 0x1f23ac: 0x8fc20000
    ctx->pc = 0x1f23acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f23b0: 0x24420028
    ctx->pc = 0x1f23b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x1f23b4: 0x40202d
    ctx->pc = 0x1f23b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23b8: 0xc07c441
    ctx->pc = 0x1F23B8u;
    SET_GPR_U32(ctx, 31, 0x1F23C0u);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F23C0u; }
    }
    if (ctx->pc != 0x1F23C0u) { return; }
    ctx->pc = 0x1F23C0u;
    // 0x1f23c0: 0x40182d
    ctx->pc = 0x1f23c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23c4: 0x8fc20000
    ctx->pc = 0x1f23c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f23c8: 0x94420074
    ctx->pc = 0x1f23c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1f23cc: 0x62102b
    ctx->pc = 0x1f23ccu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f23d0: 0x10400007
    ctx->pc = 0x1F23D0u;
    {
        const bool branch_taken_0x1f23d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f23d0) {
            ctx->pc = 0x1F23F0u;
            goto label_1f23f0;
        }
    }
    ctx->pc = 0x1F23D8u;
    // 0x1f23d8: 0x8fc20000
    ctx->pc = 0x1f23d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f23dc: 0x24420028
    ctx->pc = 0x1f23dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x1f23e0: 0x40202d
    ctx->pc = 0x1f23e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23e4: 0x24050001
    ctx->pc = 0x1f23e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f23e8: 0xc07c45b
    ctx->pc = 0x1F23E8u;
    SET_GPR_U32(ctx, 31, 0x1F23F0u);
    ctx->pc = 0x1F116Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F116C_0x1f116c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F23F0u; }
    }
    if (ctx->pc != 0x1F23F0u) { return; }
    ctx->pc = 0x1F23F0u;
label_1f23f0:
    // 0x1f23f0: 0x8fc20014
    ctx->pc = 0x1f23f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f23f4: 0x10000100
    ctx->pc = 0x1F23F4u;
    {
        const bool branch_taken_0x1f23f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f23f4) {
            ctx->pc = 0x1F27F8u;
            goto label_1f27f8;
        }
    }
    ctx->pc = 0x1F23FCu;
label_1f23fc:
    // 0x1f23fc: 0x8fc30014
    ctx->pc = 0x1f23fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f2400: 0x2402e4aa
    ctx->pc = 0x1f2400u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294960298));
    // 0x1f2404: 0x10620004
    ctx->pc = 0x1F2404u;
    {
        const bool branch_taken_0x1f2404 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1f2404) {
            ctx->pc = 0x1F2418u;
            goto label_1f2418;
        }
    }
    ctx->pc = 0x1F240Cu;
    // 0x1f240c: 0x8fc20014
    ctx->pc = 0x1f240cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f2410: 0x100000f9
    ctx->pc = 0x1F2410u;
    {
        const bool branch_taken_0x1f2410 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2410) {
            ctx->pc = 0x1F27F8u;
            goto label_1f27f8;
        }
    }
    ctx->pc = 0x1F2418u;
label_1f2418:
    // 0x1f2418: 0x8fc30000
    ctx->pc = 0x1f2418u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f241c: 0x8fc20000
    ctx->pc = 0x1f241cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2420: 0x8c420058
    ctx->pc = 0x1f2420u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f2424: 0x24420001
    ctx->pc = 0x1f2424u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f2428: 0xac620058
    ctx->pc = 0x1f2428u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
    // 0x1f242c: 0x100000f1
    ctx->pc = 0x1F242Cu;
    {
        const bool branch_taken_0x1f242c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f242c) {
            ctx->pc = 0x1F27F4u;
            goto label_1f27f4;
        }
    }
    ctx->pc = 0x1F2434u;
label_1f2434:
    // 0x1f2434: 0x97c30008
    ctx->pc = 0x1f2434u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f2438: 0x8fc20000
    ctx->pc = 0x1f2438u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f243c: 0x9442006a
    ctx->pc = 0x1f243cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 106)));
    // 0x1f2440: 0x2442ffd4
    ctx->pc = 0x1f2440u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967252));
    // 0x1f2444: 0x43102b
    ctx->pc = 0x1f2444u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f2448: 0x1440004e
    ctx->pc = 0x1F2448u;
    {
        const bool branch_taken_0x1f2448 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f2448) {
            ctx->pc = 0x1F2584u;
            goto label_1f2584;
        }
    }
    ctx->pc = 0x1F2450u;
    // 0x1f2450: 0x8fc20000
    ctx->pc = 0x1f2450u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2454: 0x24420028
    ctx->pc = 0x1f2454u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x1f2458: 0x40202d
    ctx->pc = 0x1f2458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f245c: 0x24050001
    ctx->pc = 0x1f245cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2460: 0xc07c44b
    ctx->pc = 0x1F2460u;
    SET_GPR_U32(ctx, 31, 0x1F2468u);
    ctx->pc = 0x1F112Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F112C_0x1f112c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2468u; }
    }
    if (ctx->pc != 0x1F2468u) { return; }
    ctx->pc = 0x1F2468u;
    // 0x1f2468: 0x10400004
    ctx->pc = 0x1F2468u;
    {
        const bool branch_taken_0x1f2468 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2468) {
            ctx->pc = 0x1F247Cu;
            goto label_1f247c;
        }
    }
    ctx->pc = 0x1F2470u;
    // 0x1f2470: 0x8fc20010
    ctx->pc = 0x1f2470u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1f2474: 0x1440003e
    ctx->pc = 0x1F2474u;
    {
        const bool branch_taken_0x1f2474 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f2474) {
            ctx->pc = 0x1F2570u;
            goto label_1f2570;
        }
    }
    ctx->pc = 0x1F247Cu;
label_1f247c:
    // 0x1f247c: 0x8fc20000
    ctx->pc = 0x1f247cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2480: 0x24420028
    ctx->pc = 0x1f2480u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x1f2484: 0x40202d
    ctx->pc = 0x1f2484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2488: 0x8fc50004
    ctx->pc = 0x1f2488u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f248c: 0xc07c499
    ctx->pc = 0x1F248Cu;
    SET_GPR_U32(ctx, 31, 0x1F2494u);
    ctx->pc = 0x1F1264u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1264_0x1f1264(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2494u; }
    }
    if (ctx->pc != 0x1F2494u) { return; }
    ctx->pc = 0x1F2494u;
    // 0x1f2494: 0xafc20014
    ctx->pc = 0x1f2494u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x1f2498: 0x8fc20014
    ctx->pc = 0x1f2498u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f249c: 0x1440002d
    ctx->pc = 0x1F249Cu;
    {
        const bool branch_taken_0x1f249c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f249c) {
            ctx->pc = 0x1F2554u;
            goto label_1f2554;
        }
    }
    ctx->pc = 0x1F24A4u;
    // 0x1f24a4: 0x8fc30000
    ctx->pc = 0x1f24a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f24a8: 0x8fc20000
    ctx->pc = 0x1f24a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f24ac: 0x8c42004c
    ctx->pc = 0x1f24acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1f24b0: 0x24420001
    ctx->pc = 0x1f24b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f24b4: 0xac62004c
    ctx->pc = 0x1f24b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1f24b8: 0x8fc20000
    ctx->pc = 0x1f24b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f24bc: 0x24420028
    ctx->pc = 0x1f24bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x1f24c0: 0x40202d
    ctx->pc = 0x1f24c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f24c4: 0xc07c441
    ctx->pc = 0x1F24C4u;
    SET_GPR_U32(ctx, 31, 0x1F24CCu);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F24CCu; }
    }
    if (ctx->pc != 0x1F24CCu) { return; }
    ctx->pc = 0x1F24CCu;
    // 0x1f24cc: 0x40182d
    ctx->pc = 0x1f24ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f24d0: 0x8fc20000
    ctx->pc = 0x1f24d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f24d4: 0x9442006c
    ctx->pc = 0x1f24d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1f24d8: 0x62102b
    ctx->pc = 0x1f24d8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f24dc: 0x10400009
    ctx->pc = 0x1F24DCu;
    {
        const bool branch_taken_0x1f24dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f24dc) {
            ctx->pc = 0x1F2504u;
            goto label_1f2504;
        }
    }
    ctx->pc = 0x1F24E4u;
    // 0x1f24e4: 0x8fc20000
    ctx->pc = 0x1f24e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f24e8: 0x24420028
    ctx->pc = 0x1f24e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x1f24ec: 0x40202d
    ctx->pc = 0x1f24ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f24f0: 0xc07c441
    ctx->pc = 0x1F24F0u;
    SET_GPR_U32(ctx, 31, 0x1F24F8u);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F24F8u; }
    }
    if (ctx->pc != 0x1F24F8u) { return; }
    ctx->pc = 0x1F24F8u;
    // 0x1f24f8: 0x40182d
    ctx->pc = 0x1f24f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f24fc: 0x8fc20000
    ctx->pc = 0x1f24fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2500: 0xa443006c
    ctx->pc = 0x1f2500u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 108), (uint16_t)GPR_U32(ctx, 3));
label_1f2504:
    // 0x1f2504: 0x8fc20000
    ctx->pc = 0x1f2504u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2508: 0x24420028
    ctx->pc = 0x1f2508u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x1f250c: 0x40202d
    ctx->pc = 0x1f250cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2510: 0xc07c441
    ctx->pc = 0x1F2510u;
    SET_GPR_U32(ctx, 31, 0x1F2518u);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2518u; }
    }
    if (ctx->pc != 0x1F2518u) { return; }
    ctx->pc = 0x1F2518u;
    // 0x1f2518: 0x40182d
    ctx->pc = 0x1f2518u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f251c: 0x8fc20000
    ctx->pc = 0x1f251cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2520: 0x94420074
    ctx->pc = 0x1f2520u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1f2524: 0x62102b
    ctx->pc = 0x1f2524u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f2528: 0x10400007
    ctx->pc = 0x1F2528u;
    {
        const bool branch_taken_0x1f2528 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2528) {
            ctx->pc = 0x1F2548u;
            goto label_1f2548;
        }
    }
    ctx->pc = 0x1F2530u;
    // 0x1f2530: 0x8fc20000
    ctx->pc = 0x1f2530u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2534: 0x24420028
    ctx->pc = 0x1f2534u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x1f2538: 0x40202d
    ctx->pc = 0x1f2538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f253c: 0x24050001
    ctx->pc = 0x1f253cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2540: 0xc07c45b
    ctx->pc = 0x1F2540u;
    SET_GPR_U32(ctx, 31, 0x1F2548u);
    ctx->pc = 0x1F116Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F116C_0x1f116c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2548u; }
    }
    if (ctx->pc != 0x1F2548u) { return; }
    ctx->pc = 0x1F2548u;
label_1f2548:
    // 0x1f2548: 0x8fc20014
    ctx->pc = 0x1f2548u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f254c: 0x100000aa
    ctx->pc = 0x1F254Cu;
    {
        const bool branch_taken_0x1f254c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f254c) {
            ctx->pc = 0x1F27F8u;
            goto label_1f27f8;
        }
    }
    ctx->pc = 0x1F2554u;
label_1f2554:
    // 0x1f2554: 0x8fc30014
    ctx->pc = 0x1f2554u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f2558: 0x2402e4aa
    ctx->pc = 0x1f2558u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294960298));
    // 0x1f255c: 0x10620004
    ctx->pc = 0x1F255Cu;
    {
        const bool branch_taken_0x1f255c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1f255c) {
            ctx->pc = 0x1F2570u;
            goto label_1f2570;
        }
    }
    ctx->pc = 0x1F2564u;
    // 0x1f2564: 0x8fc20014
    ctx->pc = 0x1f2564u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f2568: 0x100000a3
    ctx->pc = 0x1F2568u;
    {
        const bool branch_taken_0x1f2568 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2568) {
            ctx->pc = 0x1F27F8u;
            goto label_1f27f8;
        }
    }
    ctx->pc = 0x1F2570u;
label_1f2570:
    // 0x1f2570: 0x8fc30000
    ctx->pc = 0x1f2570u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2574: 0x8fc20000
    ctx->pc = 0x1f2574u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2578: 0x8c420054
    ctx->pc = 0x1f2578u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1f257c: 0x24420001
    ctx->pc = 0x1f257cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f2580: 0xac620054
    ctx->pc = 0x1f2580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1f2584:
    // 0x1f2584: 0x97c30008
    ctx->pc = 0x1f2584u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f2588: 0x8fc20000
    ctx->pc = 0x1f2588u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f258c: 0x94420064
    ctx->pc = 0x1f258cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1f2590: 0x2442ffd4
    ctx->pc = 0x1f2590u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967252));
    // 0x1f2594: 0x43102b
    ctx->pc = 0x1f2594u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f2598: 0x1440004e
    ctx->pc = 0x1F2598u;
    {
        const bool branch_taken_0x1f2598 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f2598) {
            ctx->pc = 0x1F26D4u;
            goto label_1f26d4;
        }
    }
    ctx->pc = 0x1F25A0u;
    // 0x1f25a0: 0x8fc20000
    ctx->pc = 0x1f25a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f25a4: 0x24420014
    ctx->pc = 0x1f25a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x1f25a8: 0x40202d
    ctx->pc = 0x1f25a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25ac: 0x24050001
    ctx->pc = 0x1f25acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f25b0: 0xc07c44b
    ctx->pc = 0x1F25B0u;
    SET_GPR_U32(ctx, 31, 0x1F25B8u);
    ctx->pc = 0x1F112Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F112C_0x1f112c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F25B8u; }
    }
    if (ctx->pc != 0x1F25B8u) { return; }
    ctx->pc = 0x1F25B8u;
    // 0x1f25b8: 0x10400004
    ctx->pc = 0x1F25B8u;
    {
        const bool branch_taken_0x1f25b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f25b8) {
            ctx->pc = 0x1F25CCu;
            goto label_1f25cc;
        }
    }
    ctx->pc = 0x1F25C0u;
    // 0x1f25c0: 0x8fc20010
    ctx->pc = 0x1f25c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1f25c4: 0x1440003e
    ctx->pc = 0x1F25C4u;
    {
        const bool branch_taken_0x1f25c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f25c4) {
            ctx->pc = 0x1F26C0u;
            goto label_1f26c0;
        }
    }
    ctx->pc = 0x1F25CCu;
label_1f25cc:
    // 0x1f25cc: 0x8fc20000
    ctx->pc = 0x1f25ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f25d0: 0x24420014
    ctx->pc = 0x1f25d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x1f25d4: 0x40202d
    ctx->pc = 0x1f25d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25d8: 0x8fc50004
    ctx->pc = 0x1f25d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f25dc: 0xc07c499
    ctx->pc = 0x1F25DCu;
    SET_GPR_U32(ctx, 31, 0x1F25E4u);
    ctx->pc = 0x1F1264u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1264_0x1f1264(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F25E4u; }
    }
    if (ctx->pc != 0x1F25E4u) { return; }
    ctx->pc = 0x1F25E4u;
    // 0x1f25e4: 0xafc20014
    ctx->pc = 0x1f25e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x1f25e8: 0x8fc20014
    ctx->pc = 0x1f25e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f25ec: 0x1440002d
    ctx->pc = 0x1F25ECu;
    {
        const bool branch_taken_0x1f25ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f25ec) {
            ctx->pc = 0x1F26A4u;
            goto label_1f26a4;
        }
    }
    ctx->pc = 0x1F25F4u;
    // 0x1f25f4: 0x8fc30000
    ctx->pc = 0x1f25f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f25f8: 0x8fc20000
    ctx->pc = 0x1f25f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f25fc: 0x8c420044
    ctx->pc = 0x1f25fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1f2600: 0x24420001
    ctx->pc = 0x1f2600u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f2604: 0xac620044
    ctx->pc = 0x1f2604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    // 0x1f2608: 0x8fc20000
    ctx->pc = 0x1f2608u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f260c: 0x24420014
    ctx->pc = 0x1f260cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x1f2610: 0x40202d
    ctx->pc = 0x1f2610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2614: 0xc07c441
    ctx->pc = 0x1F2614u;
    SET_GPR_U32(ctx, 31, 0x1F261Cu);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F261Cu; }
    }
    if (ctx->pc != 0x1F261Cu) { return; }
    ctx->pc = 0x1F261Cu;
    // 0x1f261c: 0x40182d
    ctx->pc = 0x1f261cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2620: 0x8fc20000
    ctx->pc = 0x1f2620u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2624: 0x94420066
    ctx->pc = 0x1f2624u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 102)));
    // 0x1f2628: 0x62102b
    ctx->pc = 0x1f2628u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f262c: 0x10400009
    ctx->pc = 0x1F262Cu;
    {
        const bool branch_taken_0x1f262c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f262c) {
            ctx->pc = 0x1F2654u;
            goto label_1f2654;
        }
    }
    ctx->pc = 0x1F2634u;
    // 0x1f2634: 0x8fc20000
    ctx->pc = 0x1f2634u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2638: 0x24420014
    ctx->pc = 0x1f2638u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x1f263c: 0x40202d
    ctx->pc = 0x1f263cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2640: 0xc07c441
    ctx->pc = 0x1F2640u;
    SET_GPR_U32(ctx, 31, 0x1F2648u);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2648u; }
    }
    if (ctx->pc != 0x1F2648u) { return; }
    ctx->pc = 0x1F2648u;
    // 0x1f2648: 0x40182d
    ctx->pc = 0x1f2648u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f264c: 0x8fc20000
    ctx->pc = 0x1f264cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2650: 0xa4430066
    ctx->pc = 0x1f2650u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 102), (uint16_t)GPR_U32(ctx, 3));
label_1f2654:
    // 0x1f2654: 0x8fc20000
    ctx->pc = 0x1f2654u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2658: 0x24420014
    ctx->pc = 0x1f2658u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x1f265c: 0x40202d
    ctx->pc = 0x1f265cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2660: 0xc07c441
    ctx->pc = 0x1F2660u;
    SET_GPR_U32(ctx, 31, 0x1F2668u);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2668u; }
    }
    if (ctx->pc != 0x1F2668u) { return; }
    ctx->pc = 0x1F2668u;
    // 0x1f2668: 0x40182d
    ctx->pc = 0x1f2668u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f266c: 0x8fc20000
    ctx->pc = 0x1f266cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2670: 0x94420072
    ctx->pc = 0x1f2670u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 114)));
    // 0x1f2674: 0x62102b
    ctx->pc = 0x1f2674u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f2678: 0x10400007
    ctx->pc = 0x1F2678u;
    {
        const bool branch_taken_0x1f2678 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2678) {
            ctx->pc = 0x1F2698u;
            goto label_1f2698;
        }
    }
    ctx->pc = 0x1F2680u;
    // 0x1f2680: 0x8fc20000
    ctx->pc = 0x1f2680u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2684: 0x24420014
    ctx->pc = 0x1f2684u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x1f2688: 0x40202d
    ctx->pc = 0x1f2688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f268c: 0x24050001
    ctx->pc = 0x1f268cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2690: 0xc07c45b
    ctx->pc = 0x1F2690u;
    SET_GPR_U32(ctx, 31, 0x1F2698u);
    ctx->pc = 0x1F116Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F116C_0x1f116c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2698u; }
    }
    if (ctx->pc != 0x1F2698u) { return; }
    ctx->pc = 0x1F2698u;
label_1f2698:
    // 0x1f2698: 0x8fc20014
    ctx->pc = 0x1f2698u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f269c: 0x10000056
    ctx->pc = 0x1F269Cu;
    {
        const bool branch_taken_0x1f269c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f269c) {
            ctx->pc = 0x1F27F8u;
            goto label_1f27f8;
        }
    }
    ctx->pc = 0x1F26A4u;
label_1f26a4:
    // 0x1f26a4: 0x8fc30014
    ctx->pc = 0x1f26a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f26a8: 0x2402e4aa
    ctx->pc = 0x1f26a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294960298));
    // 0x1f26ac: 0x10620004
    ctx->pc = 0x1F26ACu;
    {
        const bool branch_taken_0x1f26ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1f26ac) {
            ctx->pc = 0x1F26C0u;
            goto label_1f26c0;
        }
    }
    ctx->pc = 0x1F26B4u;
    // 0x1f26b4: 0x8fc20014
    ctx->pc = 0x1f26b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f26b8: 0x1000004f
    ctx->pc = 0x1F26B8u;
    {
        const bool branch_taken_0x1f26b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f26b8) {
            ctx->pc = 0x1F27F8u;
            goto label_1f27f8;
        }
    }
    ctx->pc = 0x1F26C0u;
label_1f26c0:
    // 0x1f26c0: 0x8fc30000
    ctx->pc = 0x1f26c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f26c4: 0x8fc20000
    ctx->pc = 0x1f26c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f26c8: 0x8c420054
    ctx->pc = 0x1f26c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1f26cc: 0x24420001
    ctx->pc = 0x1f26ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f26d0: 0xac620054
    ctx->pc = 0x1f26d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1f26d4:
    // 0x1f26d4: 0x97c30008
    ctx->pc = 0x1f26d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1f26d8: 0x8fc20000
    ctx->pc = 0x1f26d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f26dc: 0x9442005e
    ctx->pc = 0x1f26dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 94)));
    // 0x1f26e0: 0x2442ffd4
    ctx->pc = 0x1f26e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967252));
    // 0x1f26e4: 0x43102b
    ctx->pc = 0x1f26e4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f26e8: 0x14400042
    ctx->pc = 0x1F26E8u;
    {
        const bool branch_taken_0x1f26e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f26e8) {
            ctx->pc = 0x1F27F4u;
            goto label_1f27f4;
        }
    }
    ctx->pc = 0x1F26F0u;
    // 0x1f26f0: 0x8fc40000
    ctx->pc = 0x1f26f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f26f4: 0x24050001
    ctx->pc = 0x1f26f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f26f8: 0xc07c44b
    ctx->pc = 0x1F26F8u;
    SET_GPR_U32(ctx, 31, 0x1F2700u);
    ctx->pc = 0x1F112Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F112C_0x1f112c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2700u; }
    }
    if (ctx->pc != 0x1F2700u) { return; }
    ctx->pc = 0x1F2700u;
    // 0x1f2700: 0x10400004
    ctx->pc = 0x1F2700u;
    {
        const bool branch_taken_0x1f2700 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2700) {
            ctx->pc = 0x1F2714u;
            goto label_1f2714;
        }
    }
    ctx->pc = 0x1F2708u;
    // 0x1f2708: 0x8fc20010
    ctx->pc = 0x1f2708u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1f270c: 0x14400034
    ctx->pc = 0x1F270Cu;
    {
        const bool branch_taken_0x1f270c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f270c) {
            ctx->pc = 0x1F27E0u;
            goto label_1f27e0;
        }
    }
    ctx->pc = 0x1F2714u;
label_1f2714:
    // 0x1f2714: 0x8fc40000
    ctx->pc = 0x1f2714u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2718: 0x8fc50004
    ctx->pc = 0x1f2718u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f271c: 0xc07c499
    ctx->pc = 0x1F271Cu;
    SET_GPR_U32(ctx, 31, 0x1F2724u);
    ctx->pc = 0x1F1264u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1264_0x1f1264(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2724u; }
    }
    if (ctx->pc != 0x1F2724u) { return; }
    ctx->pc = 0x1F2724u;
    // 0x1f2724: 0xafc20014
    ctx->pc = 0x1f2724u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x1f2728: 0x8fc20014
    ctx->pc = 0x1f2728u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f272c: 0x14400025
    ctx->pc = 0x1F272Cu;
    {
        const bool branch_taken_0x1f272c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f272c) {
            ctx->pc = 0x1F27C4u;
            goto label_1f27c4;
        }
    }
    ctx->pc = 0x1F2734u;
    // 0x1f2734: 0x8fc30000
    ctx->pc = 0x1f2734u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2738: 0x8fc20000
    ctx->pc = 0x1f2738u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f273c: 0x8c42003c
    ctx->pc = 0x1f273cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1f2740: 0x24420001
    ctx->pc = 0x1f2740u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f2744: 0xac62003c
    ctx->pc = 0x1f2744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
    // 0x1f2748: 0x8fc40000
    ctx->pc = 0x1f2748u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f274c: 0xc07c441
    ctx->pc = 0x1F274Cu;
    SET_GPR_U32(ctx, 31, 0x1F2754u);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2754u; }
    }
    if (ctx->pc != 0x1F2754u) { return; }
    ctx->pc = 0x1F2754u;
    // 0x1f2754: 0x40182d
    ctx->pc = 0x1f2754u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2758: 0x8fc20000
    ctx->pc = 0x1f2758u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f275c: 0x94420060
    ctx->pc = 0x1f275cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1f2760: 0x62102b
    ctx->pc = 0x1f2760u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f2764: 0x10400007
    ctx->pc = 0x1F2764u;
    {
        const bool branch_taken_0x1f2764 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2764) {
            ctx->pc = 0x1F2784u;
            goto label_1f2784;
        }
    }
    ctx->pc = 0x1F276Cu;
    // 0x1f276c: 0x8fc40000
    ctx->pc = 0x1f276cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2770: 0xc07c441
    ctx->pc = 0x1F2770u;
    SET_GPR_U32(ctx, 31, 0x1F2778u);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2778u; }
    }
    if (ctx->pc != 0x1F2778u) { return; }
    ctx->pc = 0x1F2778u;
    // 0x1f2778: 0x40182d
    ctx->pc = 0x1f2778u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f277c: 0x8fc20000
    ctx->pc = 0x1f277cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2780: 0xa4430060
    ctx->pc = 0x1f2780u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 96), (uint16_t)GPR_U32(ctx, 3));
label_1f2784:
    // 0x1f2784: 0x8fc40000
    ctx->pc = 0x1f2784u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2788: 0xc07c441
    ctx->pc = 0x1F2788u;
    SET_GPR_U32(ctx, 31, 0x1F2790u);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2790u; }
    }
    if (ctx->pc != 0x1F2790u) { return; }
    ctx->pc = 0x1F2790u;
    // 0x1f2790: 0x40182d
    ctx->pc = 0x1f2790u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2794: 0x8fc20000
    ctx->pc = 0x1f2794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2798: 0x94420070
    ctx->pc = 0x1f2798u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1f279c: 0x62102b
    ctx->pc = 0x1f279cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f27a0: 0x10400005
    ctx->pc = 0x1F27A0u;
    {
        const bool branch_taken_0x1f27a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f27a0) {
            ctx->pc = 0x1F27B8u;
            goto label_1f27b8;
        }
    }
    ctx->pc = 0x1F27A8u;
    // 0x1f27a8: 0x8fc40000
    ctx->pc = 0x1f27a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f27ac: 0x24050001
    ctx->pc = 0x1f27acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f27b0: 0xc07c45b
    ctx->pc = 0x1F27B0u;
    SET_GPR_U32(ctx, 31, 0x1F27B8u);
    ctx->pc = 0x1F116Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F116C_0x1f116c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F27B8u; }
    }
    if (ctx->pc != 0x1F27B8u) { return; }
    ctx->pc = 0x1F27B8u;
label_1f27b8:
    // 0x1f27b8: 0x8fc20014
    ctx->pc = 0x1f27b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f27bc: 0x1000000e
    ctx->pc = 0x1F27BCu;
    {
        const bool branch_taken_0x1f27bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f27bc) {
            ctx->pc = 0x1F27F8u;
            goto label_1f27f8;
        }
    }
    ctx->pc = 0x1F27C4u;
label_1f27c4:
    // 0x1f27c4: 0x8fc30014
    ctx->pc = 0x1f27c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f27c8: 0x2402e4aa
    ctx->pc = 0x1f27c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294960298));
    // 0x1f27cc: 0x10620004
    ctx->pc = 0x1F27CCu;
    {
        const bool branch_taken_0x1f27cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1f27cc) {
            ctx->pc = 0x1F27E0u;
            goto label_1f27e0;
        }
    }
    ctx->pc = 0x1F27D4u;
    // 0x1f27d4: 0x8fc20014
    ctx->pc = 0x1f27d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1f27d8: 0x10000007
    ctx->pc = 0x1F27D8u;
    {
        const bool branch_taken_0x1f27d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f27d8) {
            ctx->pc = 0x1F27F8u;
            goto label_1f27f8;
        }
    }
    ctx->pc = 0x1F27E0u;
label_1f27e0:
    // 0x1f27e0: 0x8fc30000
    ctx->pc = 0x1f27e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f27e4: 0x8fc20000
    ctx->pc = 0x1f27e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f27e8: 0x8c420054
    ctx->pc = 0x1f27e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1f27ec: 0x24420001
    ctx->pc = 0x1f27ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f27f0: 0xac620054
    ctx->pc = 0x1f27f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1f27f4:
    // 0x1f27f4: 0x8fc20014
    ctx->pc = 0x1f27f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_1f27f8:
    // 0x1f27f8: 0x3c0e82d
    ctx->pc = 0x1f27f8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27fc: 0xdfbe0050
    ctx->pc = 0x1f27fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f2800: 0xdfbf0058
    ctx->pc = 0x1f2800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f2804: 0x27bd0060
    ctx->pc = 0x1f2804u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f2808: 0x3e00008
    ctx->pc = 0x1F2808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F20ACu: goto label_1f20ac;
            case 0x1F211Cu: goto label_1f211c;
            case 0x1F2150u: goto label_1f2150;
            case 0x1F215Cu: goto label_1f215c;
            case 0x1F2178u: goto label_1f2178;
            case 0x1F218Cu: goto label_1f218c;
            case 0x1F21D4u: goto label_1f21d4;
            case 0x1F225Cu: goto label_1f225c;
            case 0x1F22A0u: goto label_1f22a0;
            case 0x1F22ACu: goto label_1f22ac;
            case 0x1F22C8u: goto label_1f22c8;
            case 0x1F22DCu: goto label_1f22dc;
            case 0x1F2324u: goto label_1f2324;
            case 0x1F23ACu: goto label_1f23ac;
            case 0x1F23F0u: goto label_1f23f0;
            case 0x1F23FCu: goto label_1f23fc;
            case 0x1F2418u: goto label_1f2418;
            case 0x1F2434u: goto label_1f2434;
            case 0x1F247Cu: goto label_1f247c;
            case 0x1F2504u: goto label_1f2504;
            case 0x1F2548u: goto label_1f2548;
            case 0x1F2554u: goto label_1f2554;
            case 0x1F2570u: goto label_1f2570;
            case 0x1F2584u: goto label_1f2584;
            case 0x1F25CCu: goto label_1f25cc;
            case 0x1F2654u: goto label_1f2654;
            case 0x1F2698u: goto label_1f2698;
            case 0x1F26A4u: goto label_1f26a4;
            case 0x1F26C0u: goto label_1f26c0;
            case 0x1F26D4u: goto label_1f26d4;
            case 0x1F2714u: goto label_1f2714;
            case 0x1F2784u: goto label_1f2784;
            case 0x1F27B8u: goto label_1f27b8;
            case 0x1F27C4u: goto label_1f27c4;
            case 0x1F27E0u: goto label_1f27e0;
            case 0x1F27F4u: goto label_1f27f4;
            case 0x1F27F8u: goto label_1f27f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F2810u;
}
