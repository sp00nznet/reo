#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012E3D0
// Address: 0x12e3d0 - 0x12e4b8
void sub_0012E3D0_0x12e3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12e3d0u;

    // 0x12e3d0: 0x63400
    ctx->pc = 0x12e3d0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 16));
    // 0x12e3d4: 0x80402d
    ctx->pc = 0x12e3d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3d8: 0x14a0000f
    ctx->pc = 0x12E3D8u;
    {
        const bool branch_taken_0x12e3d8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x12E3DCu;
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 6), 16));
        if (branch_taken_0x12e3d8) {
            ctx->pc = 0x12E418u;
            goto label_12e418;
        }
    }
    ctx->pc = 0x12E3E0u;
    // 0x12e3e0: 0x8d030014
    ctx->pc = 0x12e3e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x12e3e4: 0xa3102a
    ctx->pc = 0x12e3e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x12e3e8: 0x5040000b
    ctx->pc = 0x12E3E8u;
    {
        const bool branch_taken_0x12e3e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x12e3e8) {
            ctx->pc = 0x12E3ECu;
            WRITE32(ADD32(GPR_U32(ctx, 8), 120), GPR_U32(ctx, 0));
            ctx->pc = 0x12E418u;
            goto label_12e418;
        }
    }
    ctx->pc = 0x12E3F0u;
    // 0x12e3f0: 0x25020018
    ctx->pc = 0x12e3f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 24));
    // 0x12e3f4: 0x0
    ctx->pc = 0x12e3f4u;
    // NOP
label_12e3f8:
    // 0x12e3f8: 0x2463ffff
    ctx->pc = 0x12e3f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12e3fc: 0xa4400000
    ctx->pc = 0x12e3fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x12e400: 0x0
    ctx->pc = 0x12e400u;
    // NOP
    // 0x12e404: 0x0
    ctx->pc = 0x12e404u;
    // NOP
    // 0x12e408: 0x0
    ctx->pc = 0x12e408u;
    // NOP
    // 0x12e40c: 0x1460fffa
    ctx->pc = 0x12E40Cu;
    {
        const bool branch_taken_0x12e40c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x12E410u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x12e40c) {
            ctx->pc = 0x12E3F8u;
            goto label_12e3f8;
        }
    }
    ctx->pc = 0x12E414u;
    // 0x12e414: 0xad000078
    ctx->pc = 0x12e414u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 120), GPR_U32(ctx, 0));
label_12e418:
    // 0x12e418: 0x11000024
    ctx->pc = 0x12E418u;
    {
        const bool branch_taken_0x12e418 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        if (branch_taken_0x12e418) {
            ctx->pc = 0x12E4ACu;
            goto label_12e4ac;
        }
    }
    ctx->pc = 0x12E420u;
    // 0x12e420: 0x85020004
    ctx->pc = 0x12e420u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x12e424: 0x52040
    ctx->pc = 0x12e424u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x12e428: 0x85070008
    ctx->pc = 0x12e428u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x12e42c: 0x24057fff
    ctx->pc = 0x12e42cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32767));
    // 0x12e430: 0x8506000a
    ctx->pc = 0x12e430u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x12e434: 0x882021
    ctx->pc = 0x12e434u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x12e438: 0x85030006
    ctx->pc = 0x12e438u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x12e43c: 0x471018
    ctx->pc = 0x12e43cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x12e440: 0x661818
    ctx->pc = 0x12e440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x12e444: 0x21303
    ctx->pc = 0x12e444u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x12e448: 0x1221023
    ctx->pc = 0x12e448u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x12e44c: 0x31b03
    ctx->pc = 0x12e44cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x12e450: 0x433023
    ctx->pc = 0x12e450u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12e454: 0xa6282a
    ctx->pc = 0x12e454u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x12e458: 0x14a00007
    ctx->pc = 0x12E458u;
    {
        const bool branch_taken_0x12e458 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x12E45Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24));
        if (branch_taken_0x12e458) {
            ctx->pc = 0x12E478u;
            goto label_12e478;
        }
    }
    ctx->pc = 0x12E460u;
    // 0x12e460: 0x24028000
    ctx->pc = 0x12e460u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x12e464: 0x28c38000
    ctx->pc = 0x12e464u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 4294934528));
    // 0x12e468: 0x40282d
    ctx->pc = 0x12e468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e46c: 0x10000003
    ctx->pc = 0x12E46Cu;
    {
        const bool branch_taken_0x12e46c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E470u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 6));
        if (branch_taken_0x12e46c) {
            ctx->pc = 0x12E47Cu;
            goto label_12e47c;
        }
    }
    ctx->pc = 0x12E474u;
    // 0x12e474: 0x0
    ctx->pc = 0x12e474u;
    // NOP
label_12e478:
    // 0x12e478: 0x24057fff
    ctx->pc = 0x12e478u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32767));
label_12e47c:
    // 0x12e47c: 0x51400
    ctx->pc = 0x12e47cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 16));
    // 0x12e480: 0x8d030078
    ctx->pc = 0x12e480u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 120)));
    // 0x12e484: 0x21403
    ctx->pc = 0x12e484u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x12e488: 0x4420001
    ctx->pc = 0x12E488u;
    {
        const bool branch_taken_0x12e488 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x12e488) {
            ctx->pc = 0x12E48Cu;
            SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->pc = 0x12E490u;
            goto label_12e490;
        }
    }
    ctx->pc = 0x12E490u;
label_12e490:
    // 0x12e490: 0x62182a
    ctx->pc = 0x12e490u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x12e494: 0x10600002
    ctx->pc = 0x12E494u;
    {
        const bool branch_taken_0x12e494 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E498u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
        if (branch_taken_0x12e494) {
            ctx->pc = 0x12E4A0u;
            goto label_12e4a0;
        }
    }
    ctx->pc = 0x12E49Cu;
    // 0x12e49c: 0xad020078
    ctx->pc = 0x12e49cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 120), GPR_U32(ctx, 2));
label_12e4a0:
    // 0x12e4a0: 0x95020008
    ctx->pc = 0x12e4a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x12e4a4: 0xa5090008
    ctx->pc = 0x12e4a4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 9));
    // 0x12e4a8: 0xa502000a
    ctx->pc = 0x12e4a8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 10), (uint16_t)GPR_U32(ctx, 2));
label_12e4ac:
    // 0x12e4ac: 0x3e00008
    ctx->pc = 0x12E4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E3F8u: goto label_12e3f8;
            case 0x12E418u: goto label_12e418;
            case 0x12E478u: goto label_12e478;
            case 0x12E47Cu: goto label_12e47c;
            case 0x12E490u: goto label_12e490;
            case 0x12E4A0u: goto label_12e4a0;
            case 0x12E4ACu: goto label_12e4ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12E4B4u;
    // 0x12e4b4: 0x0
    ctx->pc = 0x12e4b4u;
    // NOP
}
