#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D6370
// Address: 0x1d6370 - 0x1d64c8
void sub_001D6370_0x1d6370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d6370u;

    // 0x1d6370: 0x27bdffb0
    ctx->pc = 0x1d6370u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d6374: 0x24020001
    ctx->pc = 0x1d6374u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6378: 0xffb10010
    ctx->pc = 0x1d6378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1d637c: 0xffb30030
    ctx->pc = 0x1d637cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1d6380: 0x30b10022
    ctx->pc = 0x1d6380u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 5), 34));
    // 0x1d6384: 0xffb20020
    ctx->pc = 0x1d6384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1d6388: 0xc0982d
    ctx->pc = 0x1d6388u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d638c: 0xffb00000
    ctx->pc = 0x1d638cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d6390: 0x902d
    ctx->pc = 0x1d6390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6394: 0xffbf0040
    ctx->pc = 0x1d6394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d6398: 0x30f0ffff
    ctx->pc = 0x1d6398u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 7), 65535));
    // 0x1d639c: 0x10820011
    ctx->pc = 0x1D639Cu;
    {
        const bool branch_taken_0x1d639c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D63A0u;
        SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
        if (branch_taken_0x1d639c) {
            ctx->pc = 0x1D63E4u;
            goto label_1d63e4;
        }
    }
    ctx->pc = 0x1D63A4u;
    // 0x1d63a4: 0x28820002
    ctx->pc = 0x1d63a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 2));
    // 0x1d63a8: 0x50400005
    ctx->pc = 0x1D63A8u;
    {
        const bool branch_taken_0x1d63a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d63a8) {
            ctx->pc = 0x1D63ACu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x1D63C0u;
            goto label_1d63c0;
        }
    }
    ctx->pc = 0x1D63B0u;
    // 0x1d63b0: 0x10800007
    ctx->pc = 0x1D63B0u;
    {
        const bool branch_taken_0x1d63b0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D63B4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
        if (branch_taken_0x1d63b0) {
            ctx->pc = 0x1D63D0u;
            goto label_1d63d0;
        }
    }
    ctx->pc = 0x1D63B8u;
    // 0x1d63b8: 0x10000014
    ctx->pc = 0x1D63B8u;
    {
        const bool branch_taken_0x1d63b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d63b8) {
            ctx->pc = 0x1D640Cu;
            goto label_1d640c;
        }
    }
    ctx->pc = 0x1D63C0u;
label_1d63c0:
    // 0x1d63c0: 0x1082000d
    ctx->pc = 0x1D63C0u;
    {
        const bool branch_taken_0x1d63c0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D63C4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
        if (branch_taken_0x1d63c0) {
            ctx->pc = 0x1D63F8u;
            goto label_1d63f8;
        }
    }
    ctx->pc = 0x1D63C8u;
    // 0x1d63c8: 0x10000010
    ctx->pc = 0x1D63C8u;
    {
        const bool branch_taken_0x1d63c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d63c8) {
            ctx->pc = 0x1D640Cu;
            goto label_1d640c;
        }
    }
    ctx->pc = 0x1D63D0u;
label_1d63d0:
    // 0x1d63d0: 0x3c020025
    ctx->pc = 0x1d63d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)37 << 16));
    // 0x1d63d4: 0x111a40
    ctx->pc = 0x1d63d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 9));
    // 0x1d63d8: 0x24426f58
    ctx->pc = 0x1d63d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28504));
    // 0x1d63dc: 0x1000000d
    ctx->pc = 0x1D63DCu;
    {
        const bool branch_taken_0x1d63dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D63E0u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1d63dc) {
            ctx->pc = 0x1D6414u;
            goto label_1d6414;
        }
    }
    ctx->pc = 0x1D63E4u;
label_1d63e4:
    // 0x1d63e4: 0x3c020025
    ctx->pc = 0x1d63e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)37 << 16));
    // 0x1d63e8: 0x111a40
    ctx->pc = 0x1d63e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 9));
    // 0x1d63ec: 0x24427358
    ctx->pc = 0x1d63ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 29528));
    // 0x1d63f0: 0x10000008
    ctx->pc = 0x1D63F0u;
    {
        const bool branch_taken_0x1d63f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D63F4u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1d63f0) {
            ctx->pc = 0x1D6414u;
            goto label_1d6414;
        }
    }
    ctx->pc = 0x1D63F8u;
label_1d63f8:
    // 0x1d63f8: 0x3c020025
    ctx->pc = 0x1d63f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)37 << 16));
    // 0x1d63fc: 0x111a40
    ctx->pc = 0x1d63fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 9));
    // 0x1d6400: 0x24427758
    ctx->pc = 0x1d6400u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30552));
    // 0x1d6404: 0x10000003
    ctx->pc = 0x1D6404u;
    {
        const bool branch_taken_0x1d6404 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6408u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1d6404) {
            ctx->pc = 0x1D6414u;
            goto label_1d6414;
        }
    }
    ctx->pc = 0x1D640Cu;
label_1d640c:
    // 0x1d640c: 0xc045a12
    ctx->pc = 0x1D640Cu;
    SET_GPR_U32(ctx, 31, 0x1D6414u);
    ctx->pc = 0x1D6410u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28480));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6414u; }
    }
    if (ctx->pc != 0x1D6414u) { return; }
    ctx->pc = 0x1D6414u;
label_1d6414:
    // 0x1d6414: 0x12000025
    ctx->pc = 0x1D6414u;
    {
        const bool branch_taken_0x1d6414 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6418u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d6414) {
            ctx->pc = 0x1D64ACu;
            goto label_1d64ac;
        }
    }
    ctx->pc = 0x1D641Cu;
    // 0x1d641c: 0x2e020100
    ctx->pc = 0x1d641cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 256));
    // 0x1d6420: 0x14400003
    ctx->pc = 0x1D6420u;
    {
        const bool branch_taken_0x1d6420 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D6424u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x1d6420) {
            ctx->pc = 0x1D6430u;
            goto label_1d6430;
        }
    }
    ctx->pc = 0x1D6428u;
    // 0x1d6428: 0x10000020
    ctx->pc = 0x1D6428u;
    {
        const bool branch_taken_0x1d6428 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D642Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d6428) {
            ctx->pc = 0x1D64ACu;
            goto label_1d64ac;
        }
    }
    ctx->pc = 0x1D6430u;
label_1d6430:
    // 0x1d6430: 0x24034000
    ctx->pc = 0x1d6430u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1d6434: 0x521021
    ctx->pc = 0x1d6434u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d6438: 0x94450000
    ctx->pc = 0x1d6438u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d643c: 0x14a30006
    ctx->pc = 0x1D643Cu;
    {
        const bool branch_taken_0x1d643c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x1D6440u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
        if (branch_taken_0x1d643c) {
            ctx->pc = 0x1D6458u;
            goto label_1d6458;
        }
    }
    ctx->pc = 0x1D6444u;
    // 0x1d6444: 0x326400ff
    ctx->pc = 0x1d6444u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 19), 255));
    // 0x1d6448: 0xc075932
    ctx->pc = 0x1D6448u;
    SET_GPR_U32(ctx, 31, 0x1D6450u);
    ctx->pc = 0x1D644Cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 16), 255));
    ctx->pc = 0x1D64C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D64C8_0x1d64c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6450u; }
    }
    if (ctx->pc != 0x1D6450u) { return; }
    ctx->pc = 0x1D6450u;
    // 0x1d6450: 0x40282d
    ctx->pc = 0x1d6450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6454: 0x34028000
    ctx->pc = 0x1d6454u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
label_1d6458:
    // 0x1d6458: 0x50a20001
    ctx->pc = 0x1D6458u;
    {
        const bool branch_taken_0x1d6458 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x1d6458) {
            ctx->pc = 0x1D645Cu;
            SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 16), 32768));
            ctx->pc = 0x1D6460u;
            goto label_1d6460;
        }
    }
    ctx->pc = 0x1D6460u;
label_1d6460:
    // 0x1d6460: 0x24a2ff9f
    ctx->pc = 0x1d6460u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967199));
    // 0x1d6464: 0x3042ffff
    ctx->pc = 0x1d6464u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1d6468: 0x2c42001a
    ctx->pc = 0x1d6468u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 26));
    // 0x1d646c: 0x10400004
    ctx->pc = 0x1D646Cu;
    {
        const bool branch_taken_0x1d646c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6470u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 2));
        if (branch_taken_0x1d646c) {
            ctx->pc = 0x1D6480u;
            goto label_1d6480;
        }
    }
    ctx->pc = 0x1D6474u;
    // 0x1d6474: 0x10400002
    ctx->pc = 0x1D6474u;
    {
        const bool branch_taken_0x1d6474 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6478u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967264));
        if (branch_taken_0x1d6474) {
            ctx->pc = 0x1D6480u;
            goto label_1d6480;
        }
    }
    ctx->pc = 0x1D647Cu;
    // 0x1d647c: 0x3045ffff
    ctx->pc = 0x1d647cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), 65535));
label_1d6480:
    // 0x1d6480: 0x24a2ffbf
    ctx->pc = 0x1d6480u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967231));
    // 0x1d6484: 0x3042ffff
    ctx->pc = 0x1d6484u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1d6488: 0x2c42001a
    ctx->pc = 0x1d6488u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 26));
    // 0x1d648c: 0x10400006
    ctx->pc = 0x1D648Cu;
    {
        const bool branch_taken_0x1d648c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6490u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 2));
        if (branch_taken_0x1d648c) {
            ctx->pc = 0x1D64A8u;
            goto label_1d64a8;
        }
    }
    ctx->pc = 0x1D6494u;
    // 0x1d6494: 0x10400005
    ctx->pc = 0x1D6494u;
    {
        const bool branch_taken_0x1d6494 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6498u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d6494) {
            ctx->pc = 0x1D64ACu;
            goto label_1d64ac;
        }
    }
    ctx->pc = 0x1D649Cu;
    // 0x1d649c: 0x12200002
    ctx->pc = 0x1D649Cu;
    {
        const bool branch_taken_0x1d649c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D64A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 32));
        if (branch_taken_0x1d649c) {
            ctx->pc = 0x1D64A8u;
            goto label_1d64a8;
        }
    }
    ctx->pc = 0x1D64A4u;
    // 0x1d64a4: 0x3045ffff
    ctx->pc = 0x1d64a4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), 65535));
label_1d64a8:
    // 0x1d64a8: 0xa0102d
    ctx->pc = 0x1d64a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d64ac:
    // 0x1d64ac: 0xdfbf0040
    ctx->pc = 0x1d64acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d64b0: 0xdfb30030
    ctx->pc = 0x1d64b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d64b4: 0xdfb20020
    ctx->pc = 0x1d64b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d64b8: 0xdfb10010
    ctx->pc = 0x1d64b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d64bc: 0xdfb00000
    ctx->pc = 0x1d64bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d64c0: 0x3e00008
    ctx->pc = 0x1D64C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D64C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D63C0u: goto label_1d63c0;
            case 0x1D63D0u: goto label_1d63d0;
            case 0x1D63E4u: goto label_1d63e4;
            case 0x1D63F8u: goto label_1d63f8;
            case 0x1D640Cu: goto label_1d640c;
            case 0x1D6414u: goto label_1d6414;
            case 0x1D6430u: goto label_1d6430;
            case 0x1D6458u: goto label_1d6458;
            case 0x1D6460u: goto label_1d6460;
            case 0x1D6480u: goto label_1d6480;
            case 0x1D64A8u: goto label_1d64a8;
            case 0x1D64ACu: goto label_1d64ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D64C8u;
}
