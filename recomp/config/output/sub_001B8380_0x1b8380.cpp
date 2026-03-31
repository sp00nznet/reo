#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B8380
// Address: 0x1b8380 - 0x1b86c0
void sub_001B8380_0x1b8380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b8380u;

    // 0x1b8380: 0x27bdfeb0
    ctx->pc = 0x1b8380u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1b8384: 0x3c010031
    ctx->pc = 0x1b8384u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1b8388: 0xffbf0040
    ctx->pc = 0x1b8388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b838c: 0x24020004
    ctx->pc = 0x1b838cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b8390: 0x7fb30030
    ctx->pc = 0x1b8390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b8394: 0x7fb20020
    ctx->pc = 0x1b8394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b8398: 0x7fb10010
    ctx->pc = 0x1b8398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b839c: 0x7fb00000
    ctx->pc = 0x1b839cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b83a0: 0x80236558
    ctx->pc = 0x1b83a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 25944)));
    // 0x1b83a4: 0x1062004b
    ctx->pc = 0x1B83A4u;
    {
        const bool branch_taken_0x1b83a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1B83A8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b83a4) {
            ctx->pc = 0x1B84D4u;
            goto label_1b84d4;
        }
    }
    ctx->pc = 0x1B83ACu;
    // 0x1b83ac: 0x24020003
    ctx->pc = 0x1b83acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b83b0: 0x10620049
    ctx->pc = 0x1B83B0u;
    {
        const bool branch_taken_0x1b83b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1B83B4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        if (branch_taken_0x1b83b0) {
            ctx->pc = 0x1B84D8u;
            goto label_1b84d8;
        }
    }
    ctx->pc = 0x1B83B8u;
    // 0x1b83b8: 0x24020002
    ctx->pc = 0x1b83b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b83bc: 0x10620045
    ctx->pc = 0x1B83BCu;
    {
        const bool branch_taken_0x1b83bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1B83C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b83bc) {
            ctx->pc = 0x1B84D4u;
            goto label_1b84d4;
        }
    }
    ctx->pc = 0x1B83C4u;
    // 0x1b83c4: 0x10620043
    ctx->pc = 0x1B83C4u;
    {
        const bool branch_taken_0x1b83c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1b83c4) {
            ctx->pc = 0x1B84D4u;
            goto label_1b84d4;
        }
    }
    ctx->pc = 0x1B83CCu;
    // 0x1b83cc: 0x10600003
    ctx->pc = 0x1B83CCu;
    {
        const bool branch_taken_0x1b83cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b83cc) {
            ctx->pc = 0x1B83DCu;
            goto label_1b83dc;
        }
    }
    ctx->pc = 0x1B83D4u;
    // 0x1b83d4: 0x100000b0
    ctx->pc = 0x1B83D4u;
    {
        const bool branch_taken_0x1b83d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B83D8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b83d4) {
            ctx->pc = 0x1B8698u;
            goto label_1b8698;
        }
    }
    ctx->pc = 0x1B83DCu;
label_1b83dc:
    // 0x1b83dc: 0x90820000
    ctx->pc = 0x1b83dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b83e0: 0x14400003
    ctx->pc = 0x1B83E0u;
    {
        const bool branch_taken_0x1b83e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B83E4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1b83e0) {
            ctx->pc = 0x1B83F0u;
            goto label_1b83f0;
        }
    }
    ctx->pc = 0x1B83E8u;
    // 0x1b83e8: 0x100000ac
    ctx->pc = 0x1B83E8u;
    {
        const bool branch_taken_0x1b83e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B83ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1b83e8) {
            ctx->pc = 0x1B869Cu;
            goto label_1b869c;
        }
    }
    ctx->pc = 0x1B83F0u;
label_1b83f0:
    // 0x1b83f0: 0x2403ffc0
    ctx->pc = 0x1b83f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1b83f4: 0x8c22440c
    ctx->pc = 0x1b83f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x1b83f8: 0x3c010008
    ctx->pc = 0x1b83f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)8 << 16));
    // 0x1b83fc: 0x412021
    ctx->pc = 0x1b83fcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1b8400: 0x3c01000c
    ctx->pc = 0x1b8400u;
    SET_GPR_U32(ctx, 1, ((uint32_t)12 << 16));
    // 0x1b8404: 0x2484003f
    ctx->pc = 0x1b8404u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 63));
    // 0x1b8408: 0x411021
    ctx->pc = 0x1b8408u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1b840c: 0x832024
    ctx->pc = 0x1b840cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b8410: 0x2442003f
    ctx->pc = 0x1b8410u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 63));
    // 0x1b8414: 0xc06b52c
    ctx->pc = 0x1B8414u;
    SET_GPR_U32(ctx, 31, 0x1B841Cu);
    ctx->pc = 0x1B8418u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1AD4B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD4B0_0x1ad4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B841Cu; }
    }
    if (ctx->pc != 0x1B841Cu) { return; }
    ctx->pc = 0x1B841Cu;
    // 0x1b841c: 0x3c050025
    ctx->pc = 0x1b841cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1b8420: 0x3c060025
    ctx->pc = 0x1b8420u;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1b8424: 0x27a40050
    ctx->pc = 0x1b8424u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b8428: 0x24a50148
    ctx->pc = 0x1b8428u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 328));
    // 0x1b842c: 0xc042a0c
    ctx->pc = 0x1B842Cu;
    SET_GPR_U32(ctx, 31, 0x1B8434u);
    ctx->pc = 0x1B8430u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 352));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8434u; }
    }
    if (ctx->pc != 0x1B8434u) { return; }
    ctx->pc = 0x1B8434u;
    // 0x1b8434: 0x3c010032
    ctx->pc = 0x1b8434u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b8438: 0x27b10050
    ctx->pc = 0x1b8438u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b843c: 0x8c23440c
    ctx->pc = 0x1b843cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x1b8440: 0x2402ffc0
    ctx->pc = 0x1b8440u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1b8444: 0x24060001
    ctx->pc = 0x1b8444u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8448: 0x220202d
    ctx->pc = 0x1b8448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b844c: 0x382d
    ctx->pc = 0x1b844cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8450: 0x24634000
    ctx->pc = 0x1b8450u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16384));
    // 0x1b8454: 0x2463003f
    ctx->pc = 0x1b8454u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x1b8458: 0x629024
    ctx->pc = 0x1b8458u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b845c: 0xc07323c
    ctx->pc = 0x1B845Cu;
    SET_GPR_U32(ctx, 31, 0x1B8464u);
    ctx->pc = 0x1B8460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8F0_0x1cc8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8464u; }
    }
    if (ctx->pc != 0x1B8464u) { return; }
    ctx->pc = 0x1B8464u;
    // 0x1b8464: 0x40982d
    ctx->pc = 0x1b8464u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8468: 0x1e600003
    ctx->pc = 0x1B8468u;
    {
        const bool branch_taken_0x1b8468 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x1B846Cu;
        SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
        if (branch_taken_0x1b8468) {
            ctx->pc = 0x1B8478u;
            goto label_1b8478;
        }
    }
    ctx->pc = 0x1B8470u;
    // 0x1b8470: 0x1000008a
    ctx->pc = 0x1B8470u;
    {
        const bool branch_taken_0x1b8470 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B8474u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1b8470) {
            ctx->pc = 0x1B869Cu;
            goto label_1b869c;
        }
    }
    ctx->pc = 0x1B8478u;
label_1b8478:
    // 0x1b8478: 0x3c060025
    ctx->pc = 0x1b8478u;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1b847c: 0x220202d
    ctx->pc = 0x1b847cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8480: 0x24a50178
    ctx->pc = 0x1b8480u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 376));
    // 0x1b8484: 0xc042a0c
    ctx->pc = 0x1B8484u;
    SET_GPR_U32(ctx, 31, 0x1B848Cu);
    ctx->pc = 0x1B8488u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 352));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B848Cu; }
    }
    if (ctx->pc != 0x1B848Cu) { return; }
    ctx->pc = 0x1B848Cu;
    // 0x1b848c: 0x220202d
    ctx->pc = 0x1b848cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8490: 0x2532821
    ctx->pc = 0x1b8490u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1b8494: 0x24060001
    ctx->pc = 0x1b8494u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8498: 0xc07323c
    ctx->pc = 0x1B8498u;
    SET_GPR_U32(ctx, 31, 0x1B84A0u);
    ctx->pc = 0x1B849Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8F0_0x1cc8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B84A0u; }
    }
    if (ctx->pc != 0x1B84A0u) { return; }
    ctx->pc = 0x1B84A0u;
    // 0x1b84a0: 0x1c400003
    ctx->pc = 0x1B84A0u;
    {
        const bool branch_taken_0x1b84a0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1B84A4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b84a0) {
            ctx->pc = 0x1B84B0u;
            goto label_1b84b0;
        }
    }
    ctx->pc = 0x1B84A8u;
    // 0x1b84a8: 0x1000007c
    ctx->pc = 0x1B84A8u;
    {
        const bool branch_taken_0x1b84a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B84ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1b84a8) {
            ctx->pc = 0x1B869Cu;
            goto label_1b869c;
        }
    }
    ctx->pc = 0x1B84B0u;
label_1b84b0:
    // 0x1b84b0: 0x260282d
    ctx->pc = 0x1b84b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84b4: 0xc06b504
    ctx->pc = 0x1B84B4u;
    SET_GPR_U32(ctx, 31, 0x1B84BCu);
    ctx->pc = 0x1B84B8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AD410u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD410_0x1ad410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B84BCu; }
    }
    if (ctx->pc != 0x1B84BCu) { return; }
    ctx->pc = 0x1B84BCu;
    // 0x1b84bc: 0x3c010031
    ctx->pc = 0x1b84bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1b84c0: 0x80226558
    ctx->pc = 0x1b84c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 25944)));
    // 0x1b84c4: 0x24420001
    ctx->pc = 0x1b84c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b84c8: 0x3c010031
    ctx->pc = 0x1b84c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1b84cc: 0x10000072
    ctx->pc = 0x1B84CCu;
    {
        const bool branch_taken_0x1b84cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B84D0u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 25944), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1b84cc) {
            ctx->pc = 0x1B8698u;
            goto label_1b8698;
        }
    }
    ctx->pc = 0x1B84D4u;
label_1b84d4:
    // 0x1b84d4: 0x641021
    ctx->pc = 0x1b84d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b84d8:
    // 0x1b84d8: 0x9043ffff
    ctx->pc = 0x1b84d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x1b84dc: 0x14600007
    ctx->pc = 0x1B84DCu;
    {
        const bool branch_taken_0x1b84dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B84E0u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 58));
        if (branch_taken_0x1b84dc) {
            ctx->pc = 0x1B84FCu;
            goto label_1b84fc;
        }
    }
    ctx->pc = 0x1B84E4u;
    // 0x1b84e4: 0x3c010031
    ctx->pc = 0x1b84e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1b84e8: 0x80226558
    ctx->pc = 0x1b84e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 25944)));
    // 0x1b84ec: 0x24420001
    ctx->pc = 0x1b84ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b84f0: 0x3c010031
    ctx->pc = 0x1b84f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1b84f4: 0x10000068
    ctx->pc = 0x1B84F4u;
    {
        const bool branch_taken_0x1b84f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B84F8u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 25944), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1b84f4) {
            ctx->pc = 0x1B8698u;
            goto label_1b8698;
        }
    }
    ctx->pc = 0x1B84FCu;
label_1b84fc:
    // 0x1b84fc: 0x1440000e
    ctx->pc = 0x1B84FCu;
    {
        const bool branch_taken_0x1b84fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b84fc) {
            ctx->pc = 0x1B8538u;
            goto label_1b8538;
        }
    }
    ctx->pc = 0x1B8504u;
    // 0x1b8504: 0x3c020039
    ctx->pc = 0x1b8504u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x1b8508: 0x3c050025
    ctx->pc = 0x1b8508u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1b850c: 0x31880
    ctx->pc = 0x1b850cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b8510: 0x24428be4
    ctx->pc = 0x1b8510u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937572));
    // 0x1b8514: 0x431021
    ctx->pc = 0x1b8514u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8518: 0x3c060025
    ctx->pc = 0x1b8518u;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1b851c: 0x8c470000
    ctx->pc = 0x1b851cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8520: 0x27a40050
    ctx->pc = 0x1b8520u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b8524: 0x24a50188
    ctx->pc = 0x1b8524u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 392));
    // 0x1b8528: 0xc042a0c
    ctx->pc = 0x1B8528u;
    SET_GPR_U32(ctx, 31, 0x1B8530u);
    ctx->pc = 0x1B852Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 352));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8530u; }
    }
    if (ctx->pc != 0x1B8530u) { return; }
    ctx->pc = 0x1B8530u;
    // 0x1b8530: 0x10000046
    ctx->pc = 0x1B8530u;
    {
        const bool branch_taken_0x1b8530 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b8530) {
            ctx->pc = 0x1B864Cu;
            goto label_1b864c;
        }
    }
    ctx->pc = 0x1B8538u;
label_1b8538:
    // 0x1b8538: 0x24020002
    ctx->pc = 0x1b8538u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b853c: 0x14620012
    ctx->pc = 0x1B853Cu;
    {
        const bool branch_taken_0x1b853c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1B8540u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1b853c) {
            ctx->pc = 0x1B8588u;
            goto label_1b8588;
        }
    }
    ctx->pc = 0x1B8544u;
    // 0x1b8544: 0xc06bb20
    ctx->pc = 0x1B8544u;
    SET_GPR_U32(ctx, 31, 0x1B854Cu);
    ctx->pc = 0x1B8548u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AEC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC80_0x1aec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B854Cu; }
    }
    if (ctx->pc != 0x1B854Cu) { return; }
    ctx->pc = 0x1B854Cu;
    // 0x1b854c: 0x3043ffff
    ctx->pc = 0x1b854cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1b8550: 0x3c050025
    ctx->pc = 0x1b8550u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1b8554: 0x3c020039
    ctx->pc = 0x1b8554u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x1b8558: 0x30630001
    ctx->pc = 0x1b8558u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x1b855c: 0x24428cc4
    ctx->pc = 0x1b855cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937796));
    // 0x1b8560: 0x31880
    ctx->pc = 0x1b8560u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b8564: 0x431021
    ctx->pc = 0x1b8564u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8568: 0x3c060025
    ctx->pc = 0x1b8568u;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1b856c: 0x8c470000
    ctx->pc = 0x1b856cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8570: 0x27a40050
    ctx->pc = 0x1b8570u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b8574: 0x24a50188
    ctx->pc = 0x1b8574u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 392));
    // 0x1b8578: 0xc042a0c
    ctx->pc = 0x1B8578u;
    SET_GPR_U32(ctx, 31, 0x1B8580u);
    ctx->pc = 0x1B857Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 352));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8580u; }
    }
    if (ctx->pc != 0x1B8580u) { return; }
    ctx->pc = 0x1B8580u;
    // 0x1b8580: 0x10000032
    ctx->pc = 0x1B8580u;
    {
        const bool branch_taken_0x1b8580 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b8580) {
            ctx->pc = 0x1B864Cu;
            goto label_1b864c;
        }
    }
    ctx->pc = 0x1B8588u;
label_1b8588:
    // 0x1b8588: 0x14620012
    ctx->pc = 0x1B8588u;
    {
        const bool branch_taken_0x1b8588 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1B858Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b8588) {
            ctx->pc = 0x1B85D4u;
            goto label_1b85d4;
        }
    }
    ctx->pc = 0x1B8590u;
    // 0x1b8590: 0xc06bb20
    ctx->pc = 0x1B8590u;
    SET_GPR_U32(ctx, 31, 0x1B8598u);
    ctx->pc = 0x1AEC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC80_0x1aec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8598u; }
    }
    if (ctx->pc != 0x1B8598u) { return; }
    ctx->pc = 0x1B8598u;
    // 0x1b8598: 0x3043ffff
    ctx->pc = 0x1b8598u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1b859c: 0x3c050025
    ctx->pc = 0x1b859cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1b85a0: 0x3c020039
    ctx->pc = 0x1b85a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x1b85a4: 0x30630001
    ctx->pc = 0x1b85a4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x1b85a8: 0x24428cb4
    ctx->pc = 0x1b85a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937780));
    // 0x1b85ac: 0x31880
    ctx->pc = 0x1b85acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b85b0: 0x431021
    ctx->pc = 0x1b85b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b85b4: 0x3c060025
    ctx->pc = 0x1b85b4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1b85b8: 0x8c470000
    ctx->pc = 0x1b85b8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b85bc: 0x27a40050
    ctx->pc = 0x1b85bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b85c0: 0x24a50188
    ctx->pc = 0x1b85c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 392));
    // 0x1b85c4: 0xc042a0c
    ctx->pc = 0x1B85C4u;
    SET_GPR_U32(ctx, 31, 0x1B85CCu);
    ctx->pc = 0x1B85C8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 352));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B85CCu; }
    }
    if (ctx->pc != 0x1B85CCu) { return; }
    ctx->pc = 0x1B85CCu;
    // 0x1b85cc: 0x1000001f
    ctx->pc = 0x1B85CCu;
    {
        const bool branch_taken_0x1b85cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b85cc) {
            ctx->pc = 0x1B864Cu;
            goto label_1b864c;
        }
    }
    ctx->pc = 0x1B85D4u;
label_1b85d4:
    // 0x1b85d4: 0x24020004
    ctx->pc = 0x1b85d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b85d8: 0x14620012
    ctx->pc = 0x1B85D8u;
    {
        const bool branch_taken_0x1b85d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1B85DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
        if (branch_taken_0x1b85d8) {
            ctx->pc = 0x1B8624u;
            goto label_1b8624;
        }
    }
    ctx->pc = 0x1B85E0u;
    // 0x1b85e0: 0xc06bb20
    ctx->pc = 0x1B85E0u;
    SET_GPR_U32(ctx, 31, 0x1B85E8u);
    ctx->pc = 0x1B85E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AEC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC80_0x1aec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B85E8u; }
    }
    if (ctx->pc != 0x1B85E8u) { return; }
    ctx->pc = 0x1B85E8u;
    // 0x1b85e8: 0x3043ffff
    ctx->pc = 0x1b85e8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1b85ec: 0x3c050025
    ctx->pc = 0x1b85ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1b85f0: 0x3c020039
    ctx->pc = 0x1b85f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x1b85f4: 0x30630001
    ctx->pc = 0x1b85f4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x1b85f8: 0x24428cbc
    ctx->pc = 0x1b85f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937788));
    // 0x1b85fc: 0x31880
    ctx->pc = 0x1b85fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b8600: 0x431021
    ctx->pc = 0x1b8600u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8604: 0x3c060025
    ctx->pc = 0x1b8604u;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1b8608: 0x8c470000
    ctx->pc = 0x1b8608u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b860c: 0x27a40050
    ctx->pc = 0x1b860cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b8610: 0x24a50188
    ctx->pc = 0x1b8610u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 392));
    // 0x1b8614: 0xc042a0c
    ctx->pc = 0x1B8614u;
    SET_GPR_U32(ctx, 31, 0x1B861Cu);
    ctx->pc = 0x1B8618u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 352));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B861Cu; }
    }
    if (ctx->pc != 0x1B861Cu) { return; }
    ctx->pc = 0x1B861Cu;
    // 0x1b861c: 0x1000000b
    ctx->pc = 0x1B861Cu;
    {
        const bool branch_taken_0x1b861c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b861c) {
            ctx->pc = 0x1B864Cu;
            goto label_1b864c;
        }
    }
    ctx->pc = 0x1B8624u;
label_1b8624:
    // 0x1b8624: 0x3c050025
    ctx->pc = 0x1b8624u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1b8628: 0x31880
    ctx->pc = 0x1b8628u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b862c: 0x24428cac
    ctx->pc = 0x1b862cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937772));
    // 0x1b8630: 0x431021
    ctx->pc = 0x1b8630u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8634: 0x3c060025
    ctx->pc = 0x1b8634u;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1b8638: 0x8c470000
    ctx->pc = 0x1b8638u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b863c: 0x27a40050
    ctx->pc = 0x1b863cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b8640: 0x24a50188
    ctx->pc = 0x1b8640u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 392));
    // 0x1b8644: 0xc042a0c
    ctx->pc = 0x1B8644u;
    SET_GPR_U32(ctx, 31, 0x1B864Cu);
    ctx->pc = 0x1B8648u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 352));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B864Cu; }
    }
    if (ctx->pc != 0x1B864Cu) { return; }
    ctx->pc = 0x1B864Cu;
label_1b864c:
    // 0x1b864c: 0x3c010032
    ctx->pc = 0x1b864cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b8650: 0x27a40050
    ctx->pc = 0x1b8650u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b8654: 0x8c22440c
    ctx->pc = 0x1b8654u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x1b8658: 0x24060001
    ctx->pc = 0x1b8658u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b865c: 0x382d
    ctx->pc = 0x1b865cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8660: 0x24514000
    ctx->pc = 0x1b8660u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 16384));
    // 0x1b8664: 0xc07323c
    ctx->pc = 0x1B8664u;
    SET_GPR_U32(ctx, 31, 0x1B866Cu);
    ctx->pc = 0x1B8668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8F0_0x1cc8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B866Cu; }
    }
    if (ctx->pc != 0x1B866Cu) { return; }
    ctx->pc = 0x1B866Cu;
    // 0x1b866c: 0x1c400003
    ctx->pc = 0x1B866Cu;
    {
        const bool branch_taken_0x1b866c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1B8670u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b866c) {
            ctx->pc = 0x1B867Cu;
            goto label_1b867c;
        }
    }
    ctx->pc = 0x1B8674u;
    // 0x1b8674: 0x10000009
    ctx->pc = 0x1B8674u;
    {
        const bool branch_taken_0x1b8674 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B8678u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1b8674) {
            ctx->pc = 0x1B869Cu;
            goto label_1b869c;
        }
    }
    ctx->pc = 0x1B867Cu;
label_1b867c:
    // 0x1b867c: 0xc06b538
    ctx->pc = 0x1B867Cu;
    SET_GPR_U32(ctx, 31, 0x1B8684u);
    ctx->pc = 0x1AD4E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD4E0_0x1ad4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8684u; }
    }
    if (ctx->pc != 0x1B8684u) { return; }
    ctx->pc = 0x1B8684u;
    // 0x1b8684: 0x3c010031
    ctx->pc = 0x1b8684u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1b8688: 0x80226558
    ctx->pc = 0x1b8688u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 25944)));
    // 0x1b868c: 0x24420001
    ctx->pc = 0x1b868cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b8690: 0x3c010031
    ctx->pc = 0x1b8690u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1b8694: 0xa0226558
    ctx->pc = 0x1b8694u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 25944), (uint8_t)GPR_U32(ctx, 2));
label_1b8698:
    // 0x1b8698: 0x200102d
    ctx->pc = 0x1b8698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b869c:
    // 0x1b869c: 0xdfbf0040
    ctx->pc = 0x1b869cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b86a0: 0x7bb30030
    ctx->pc = 0x1b86a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b86a4: 0x7bb20020
    ctx->pc = 0x1b86a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b86a8: 0x7bb10010
    ctx->pc = 0x1b86a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b86ac: 0x7bb00000
    ctx->pc = 0x1b86acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b86b0: 0x3e00008
    ctx->pc = 0x1B86B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B86B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B83DCu: goto label_1b83dc;
            case 0x1B83F0u: goto label_1b83f0;
            case 0x1B8478u: goto label_1b8478;
            case 0x1B84B0u: goto label_1b84b0;
            case 0x1B84D4u: goto label_1b84d4;
            case 0x1B84D8u: goto label_1b84d8;
            case 0x1B84FCu: goto label_1b84fc;
            case 0x1B8538u: goto label_1b8538;
            case 0x1B8588u: goto label_1b8588;
            case 0x1B85D4u: goto label_1b85d4;
            case 0x1B8624u: goto label_1b8624;
            case 0x1B864Cu: goto label_1b864c;
            case 0x1B867Cu: goto label_1b867c;
            case 0x1B8698u: goto label_1b8698;
            case 0x1B869Cu: goto label_1b869c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B86B8u;
    // 0x1b86b8: 0x0
    ctx->pc = 0x1b86b8u;
    // NOP
    // 0x1b86bc: 0x0
    ctx->pc = 0x1b86bcu;
    // NOP
}
