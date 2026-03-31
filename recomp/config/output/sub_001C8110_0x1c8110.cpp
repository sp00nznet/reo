#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C8110
// Address: 0x1c8110 - 0x1c82d0
void sub_001C8110_0x1c8110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c8110u;

label_1c8110:
    // 0x1c8110: 0x27bdfff0
    ctx->pc = 0x1c8110u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8114: 0xffbf0000
    ctx->pc = 0x1c8114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8118: 0xc0759a4
    ctx->pc = 0x1C8118u;
    SET_GPR_U32(ctx, 31, 0x1C8120u);
    ctx->pc = 0x1D6690u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6690_0x1d6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8120u; }
    }
    if (ctx->pc != 0x1C8120u) { return; }
    ctx->pc = 0x1C8120u;
    // 0x1c8120: 0xdfbf0000
    ctx->pc = 0x1c8120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8124: 0x102d
    ctx->pc = 0x1c8124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8128: 0x3e00008
    ctx->pc = 0x1C8128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C812Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8110u: goto label_1c8110;
            case 0x1C81FCu: goto label_1c81fc;
            case 0x1C82BCu: goto label_1c82bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8130u;
    // 0x1c8130: 0x27bdfff0
    ctx->pc = 0x1c8130u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8134: 0xffbf0000
    ctx->pc = 0x1c8134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8138: 0xc072358
    ctx->pc = 0x1C8138u;
    SET_GPR_U32(ctx, 31, 0x1C8140u);
    ctx->pc = 0x1C8D60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8D60_0x1c8d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8140u; }
    }
    if (ctx->pc != 0x1C8140u) { return; }
    ctx->pc = 0x1C8140u;
    // 0x1c8140: 0xc072020
    ctx->pc = 0x1C8140u;
    SET_GPR_U32(ctx, 31, 0x1C8148u);
    ctx->pc = 0x1C8080u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8080_0x1c8080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8148u; }
    }
    if (ctx->pc != 0x1C8148u) { return; }
    ctx->pc = 0x1C8148u;
    // 0x1c8148: 0x3c010033
    ctx->pc = 0x1c8148u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c814c: 0x3c060025
    ctx->pc = 0x1c814cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1c8150: 0xac2051f0
    ctx->pc = 0x1c8150u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20976), GPR_U32(ctx, 0));
    // 0x1c8154: 0x24050001
    ctx->pc = 0x1c8154u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8158: 0x3c010033
    ctx->pc = 0x1c8158u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c815c: 0x24c62db0
    ctx->pc = 0x1c815cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 11696));
    // 0x1c8160: 0xac2051f8
    ctx->pc = 0x1c8160u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20984), GPR_U32(ctx, 0));
    // 0x1c8164: 0x382d
    ctx->pc = 0x1c8164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8168: 0x3c010081
    ctx->pc = 0x1c8168u;
    SET_GPR_U32(ctx, 1, ((uint32_t)129 << 16));
    // 0x1c816c: 0x8c244848
    ctx->pc = 0x1c816cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 18504)));
    // 0x1c8170: 0xc071fb4
    ctx->pc = 0x1C8170u;
    SET_GPR_U32(ctx, 31, 0x1C8178u);
    ctx->pc = 0x1C8174u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C7ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7ED0_0x1c7ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8178u; }
    }
    if (ctx->pc != 0x1C8178u) { return; }
    ctx->pc = 0x1C8178u;
    // 0x1c8178: 0x3c040025
    ctx->pc = 0x1c8178u;
    SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
    // 0x1c817c: 0xc0470f8
    ctx->pc = 0x1C817Cu;
    SET_GPR_U32(ctx, 31, 0x1C8184u);
    ctx->pc = 0x1C8180u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11704));
    ctx->pc = 0x11C3E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C3E0_0x11c3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8184u; }
    }
    if (ctx->pc != 0x1C8184u) { return; }
    ctx->pc = 0x1C8184u;
    // 0x1c8184: 0x40082a
    ctx->pc = 0x1c8184u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 0)));
    // 0x1c8188: 0x1420001c
    ctx->pc = 0x1C8188u;
    {
        const bool branch_taken_0x1c8188 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c8188) {
            ctx->pc = 0x1C81FCu;
            goto label_1c81fc;
        }
    }
    ctx->pc = 0x1C8190u;
    // 0x1c8190: 0x3c010023
    ctx->pc = 0x1c8190u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1c8194: 0x24020021
    ctx->pc = 0x1c8194u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 33));
    // 0x1c8198: 0x8c275fa0
    ctx->pc = 0x1c8198u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 24480)));
    // 0x1c819c: 0x3c010034
    ctx->pc = 0x1c819cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c81a0: 0xac22d148
    ctx->pc = 0x1c81a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955336), GPR_U32(ctx, 2));
    // 0x1c81a4: 0x3c010023
    ctx->pc = 0x1c81a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1c81a8: 0x8c265fa4
    ctx->pc = 0x1c81a8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 24484)));
    // 0x1c81ac: 0x3c010023
    ctx->pc = 0x1c81acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1c81b0: 0x8c255fa8
    ctx->pc = 0x1c81b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 24488)));
    // 0x1c81b4: 0x3c010023
    ctx->pc = 0x1c81b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1c81b8: 0x8c245fac
    ctx->pc = 0x1c81b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 24492)));
    // 0x1c81bc: 0x3c010023
    ctx->pc = 0x1c81bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1c81c0: 0x8c235fb4
    ctx->pc = 0x1c81c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 24500)));
    // 0x1c81c4: 0x3c010034
    ctx->pc = 0x1c81c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c81c8: 0xac27d138
    ctx->pc = 0x1c81c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955320), GPR_U32(ctx, 7));
    // 0x1c81cc: 0x3c010023
    ctx->pc = 0x1c81ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1c81d0: 0x8c225fb8
    ctx->pc = 0x1c81d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 24504)));
    // 0x1c81d4: 0x3c010034
    ctx->pc = 0x1c81d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c81d8: 0xac26d13c
    ctx->pc = 0x1c81d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955324), GPR_U32(ctx, 6));
    // 0x1c81dc: 0x3c010034
    ctx->pc = 0x1c81dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c81e0: 0xac25d140
    ctx->pc = 0x1c81e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955328), GPR_U32(ctx, 5));
    // 0x1c81e4: 0x3c010034
    ctx->pc = 0x1c81e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c81e8: 0xac24d144
    ctx->pc = 0x1c81e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955332), GPR_U32(ctx, 4));
    // 0x1c81ec: 0x3c010034
    ctx->pc = 0x1c81ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c81f0: 0xac23d14c
    ctx->pc = 0x1c81f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955340), GPR_U32(ctx, 3));
    // 0x1c81f4: 0x3c010034
    ctx->pc = 0x1c81f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c81f8: 0xac22d150
    ctx->pc = 0x1c81f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955344), GPR_U32(ctx, 2));
label_1c81fc:
    // 0x1c81fc: 0x3c010034
    ctx->pc = 0x1c81fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8200: 0x2402ffff
    ctx->pc = 0x1c8200u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8204: 0x8c23d138
    ctx->pc = 0x1c8204u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294955320)));
    // 0x1c8208: 0x1062002c
    ctx->pc = 0x1C8208u;
    {
        const bool branch_taken_0x1c8208 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C820Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)129 << 16));
        if (branch_taken_0x1c8208) {
            ctx->pc = 0x1C82BCu;
            goto label_1c82bc;
        }
    }
    ctx->pc = 0x1C8210u;
    // 0x1c8210: 0x3c020034
    ctx->pc = 0x1c8210u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1c8214: 0x8c244868
    ctx->pc = 0x1c8214u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 18536)));
    // 0x1c8218: 0x3c060025
    ctx->pc = 0x1c8218u;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1c821c: 0x2442d138
    ctx->pc = 0x1c821cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955320));
    // 0x1c8220: 0x24050001
    ctx->pc = 0x1c8220u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8224: 0x24c62db0
    ctx->pc = 0x1c8224u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 11696));
    // 0x1c8228: 0x382d
    ctx->pc = 0x1c8228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c822c: 0x402d
    ctx->pc = 0x1c822cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8230: 0x3c010034
    ctx->pc = 0x1c8230u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8234: 0xc071fb4
    ctx->pc = 0x1C8234u;
    SET_GPR_U32(ctx, 31, 0x1C823Cu);
    ctx->pc = 0x1C8238u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955352), GPR_U32(ctx, 2));
    ctx->pc = 0x1C7ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7ED0_0x1c7ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C823Cu; }
    }
    if (ctx->pc != 0x1C823Cu) { return; }
    ctx->pc = 0x1C823Cu;
    // 0x1c823c: 0x3c010081
    ctx->pc = 0x1c823cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)129 << 16));
    // 0x1c8240: 0x282d
    ctx->pc = 0x1c8240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8244: 0x8c244860
    ctx->pc = 0x1c8244u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 18528)));
    // 0x1c8248: 0x302d
    ctx->pc = 0x1c8248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c824c: 0x382d
    ctx->pc = 0x1c824cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8250: 0xc071fb4
    ctx->pc = 0x1C8250u;
    SET_GPR_U32(ctx, 31, 0x1C8258u);
    ctx->pc = 0x1C8254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C7ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7ED0_0x1c7ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8258u; }
    }
    if (ctx->pc != 0x1C8258u) { return; }
    ctx->pc = 0x1C8258u;
    // 0x1c8258: 0x3c010081
    ctx->pc = 0x1c8258u;
    SET_GPR_U32(ctx, 1, ((uint32_t)129 << 16));
    // 0x1c825c: 0x3c060025
    ctx->pc = 0x1c825cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1c8260: 0x8c244850
    ctx->pc = 0x1c8260u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 18512)));
    // 0x1c8264: 0x24050001
    ctx->pc = 0x1c8264u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8268: 0x24c62db0
    ctx->pc = 0x1c8268u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 11696));
    // 0x1c826c: 0x382d
    ctx->pc = 0x1c826cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8270: 0xc071fb4
    ctx->pc = 0x1C8270u;
    SET_GPR_U32(ctx, 31, 0x1C8278u);
    ctx->pc = 0x1C8274u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C7ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7ED0_0x1c7ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8278u; }
    }
    if (ctx->pc != 0x1C8278u) { return; }
    ctx->pc = 0x1C8278u;
    // 0x1c8278: 0x3c010081
    ctx->pc = 0x1c8278u;
    SET_GPR_U32(ctx, 1, ((uint32_t)129 << 16));
    // 0x1c827c: 0x3c060025
    ctx->pc = 0x1c827cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1c8280: 0x8c244870
    ctx->pc = 0x1c8280u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 18544)));
    // 0x1c8284: 0x24050009
    ctx->pc = 0x1c8284u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c8288: 0x24c62dc0
    ctx->pc = 0x1c8288u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 11712));
    // 0x1c828c: 0x382d
    ctx->pc = 0x1c828cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8290: 0xc071fb4
    ctx->pc = 0x1C8290u;
    SET_GPR_U32(ctx, 31, 0x1C8298u);
    ctx->pc = 0x1C8294u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C7ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7ED0_0x1c7ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8298u; }
    }
    if (ctx->pc != 0x1C8298u) { return; }
    ctx->pc = 0x1C8298u;
    // 0x1c8298: 0x3c010081
    ctx->pc = 0x1c8298u;
    SET_GPR_U32(ctx, 1, ((uint32_t)129 << 16));
    // 0x1c829c: 0x282d
    ctx->pc = 0x1c829cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82a0: 0x8c244858
    ctx->pc = 0x1c82a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 18520)));
    // 0x1c82a4: 0x302d
    ctx->pc = 0x1c82a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82a8: 0x382d
    ctx->pc = 0x1c82a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82ac: 0xc071fb4
    ctx->pc = 0x1C82ACu;
    SET_GPR_U32(ctx, 31, 0x1C82B4u);
    ctx->pc = 0x1C82B0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C7ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7ED0_0x1c7ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C82B4u; }
    }
    if (ctx->pc != 0x1C82B4u) { return; }
    ctx->pc = 0x1C82B4u;
    // 0x1c82b4: 0xc072044
    ctx->pc = 0x1C82B4u;
    SET_GPR_U32(ctx, 31, 0x1C82BCu);
    ctx->pc = 0x1C8110u;
    goto label_1c8110;
    ctx->pc = 0x1C82BCu;
label_1c82bc:
    // 0x1c82bc: 0xdfbf0000
    ctx->pc = 0x1c82bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c82c0: 0x102d
    ctx->pc = 0x1c82c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82c4: 0x3e00008
    ctx->pc = 0x1C82C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C82C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8110u: goto label_1c8110;
            case 0x1C81FCu: goto label_1c81fc;
            case 0x1C82BCu: goto label_1c82bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C82CCu;
    // 0x1c82cc: 0x0
    ctx->pc = 0x1c82ccu;
    // NOP
}
