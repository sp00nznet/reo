#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A7310
// Address: 0x1a7310 - 0x1a7430
void sub_001A7310_0x1a7310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a7310u;

    // 0x1a7310: 0x27bdfff0
    ctx->pc = 0x1a7310u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a7314: 0x3c03002b
    ctx->pc = 0x1a7314u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1a7318: 0xffbf0000
    ctx->pc = 0x1a7318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a731c: 0x3c01002b
    ctx->pc = 0x1a731cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7320: 0x8c290a68
    ctx->pc = 0x1a7320u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1a7324: 0x24630a80
    ctx->pc = 0x1a7324u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2688));
    // 0x1a7328: 0x91040
    ctx->pc = 0x1a7328u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 1));
    // 0x1a732c: 0x491021
    ctx->pc = 0x1a732cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1a7330: 0x21080
    ctx->pc = 0x1a7330u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7334: 0x621821
    ctx->pc = 0x1a7334u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7338: 0x8c690000
    ctx->pc = 0x1a7338u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a733c: 0x5200006
    ctx->pc = 0x1A733Cu;
    {
        const bool branch_taken_0x1a733c = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x1A7340u;
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) << (32 + 8));
        if (branch_taken_0x1a733c) {
            ctx->pc = 0x1A7358u;
            goto label_1a7358;
        }
    }
    ctx->pc = 0x1A7344u;
    // 0x1a7344: 0x3c040024
    ctx->pc = 0x1a7344u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a7348: 0xc0423b4
    ctx->pc = 0x1A7348u;
    SET_GPR_U32(ctx, 31, 0x1A7350u);
    ctx->pc = 0x1A734Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8384));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7350u; }
    }
    if (ctx->pc != 0x1A7350u) { return; }
    ctx->pc = 0x1A7350u;
    // 0x1a7350: 0x10000034
    ctx->pc = 0x1A7350u;
    {
        const bool branch_taken_0x1a7350 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7354u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a7350) {
            ctx->pc = 0x1A7424u;
            goto label_1a7424;
        }
    }
    ctx->pc = 0x1A7358u;
label_1a7358:
    // 0x1a7358: 0x3c01002b
    ctx->pc = 0x1a7358u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a735c: 0x6263c
    ctx->pc = 0x1a735cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 24));
    // 0x1a7360: 0xb5a3e
    ctx->pc = 0x1a7360u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 8));
    // 0x1a7364: 0x4263f
    ctx->pc = 0x1a7364u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1a7368: 0x80502a
    ctx->pc = 0x1a7368u;
    SET_GPR_U32(ctx, 10, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 0)));
    // 0x1a736c: 0x5263c
    ctx->pc = 0x1a736cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 24));
    // 0x1a7370: 0x394a0001
    ctx->pc = 0x1a7370u;
    SET_GPR_U32(ctx, 10, XOR32(GPR_U32(ctx, 10), 1));
    // 0x1a7374: 0x4263f
    ctx->pc = 0x1a7374u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1a7378: 0x80482a
    ctx->pc = 0x1a7378u;
    SET_GPR_U32(ctx, 9, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 0)));
    // 0x1a737c: 0x39290001
    ctx->pc = 0x1a737cu;
    SET_GPR_U32(ctx, 9, XOR32(GPR_U32(ctx, 9), 1));
    // 0x1a7380: 0x31440001
    ctx->pc = 0x1a7380u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 10), 1));
    // 0x1a7384: 0x31290001
    ctx->pc = 0x1a7384u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 9), 1));
    // 0x1a7388: 0x42040
    ctx->pc = 0x1a7388u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a738c: 0x1246025
    ctx->pc = 0x1a738cu;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1a7390: 0x7243c
    ctx->pc = 0x1a7390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
    // 0x1a7394: 0x4243f
    ctx->pc = 0x1a7394u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1a7398: 0x80482a
    ctx->pc = 0x1a7398u;
    SET_GPR_U32(ctx, 9, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 0)));
    // 0x1a739c: 0x39290001
    ctx->pc = 0x1a739cu;
    SET_GPR_U32(ctx, 9, XOR32(GPR_U32(ctx, 9), 1));
    // 0x1a73a0: 0x3c04002b
    ctx->pc = 0x1a73a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a73a4: 0x94880
    ctx->pc = 0x1a73a4u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 2));
    // 0x1a73a8: 0x24840a84
    ctx->pc = 0x1a73a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2692));
    // 0x1a73ac: 0x12c4825
    ctx->pc = 0x1a73acu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x1a73b0: 0x825021
    ctx->pc = 0x1a73b0u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a73b4: 0x9663c
    ctx->pc = 0x1a73b4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) << (32 + 24));
    // 0x1a73b8: 0x3c04002b
    ctx->pc = 0x1a73b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a73bc: 0xc663f
    ctx->pc = 0x1a73bcu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 24));
    // 0x1a73c0: 0x24840a85
    ctx->pc = 0x1a73c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2693));
    // 0x1a73c4: 0xc6600
    ctx->pc = 0x1a73c4u;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 12), 24));
    // 0x1a73c8: 0x824821
    ctx->pc = 0x1a73c8u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a73cc: 0x18b5825
    ctx->pc = 0x1a73ccu;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1a73d0: 0x3c04002b
    ctx->pc = 0x1a73d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a73d4: 0xac6b0000
    ctx->pc = 0x1a73d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
    // 0x1a73d8: 0x24840a86
    ctx->pc = 0x1a73d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2694));
    // 0x1a73dc: 0x3c03002b
    ctx->pc = 0x1a73dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x1a73e0: 0xa1450000
    ctx->pc = 0x1a73e0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a73e4: 0x822021
    ctx->pc = 0x1a73e4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a73e8: 0x24630a88
    ctx->pc = 0x1a73e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2696));
    // 0x1a73ec: 0xa1260000
    ctx->pc = 0x1a73ecu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a73f0: 0x621021
    ctx->pc = 0x1a73f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a73f4: 0xa4870000
    ctx->pc = 0x1a73f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x1a73f8: 0xa0480000
    ctx->pc = 0x1a73f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x1a73fc: 0x8c220a68
    ctx->pc = 0x1a73fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1a7400: 0x24430001
    ctx->pc = 0x1a7400u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a7404: 0x4610004
    ctx->pc = 0x1A7404u;
    {
        const bool branch_taken_0x1a7404 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A7408u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 31));
        if (branch_taken_0x1a7404) {
            ctx->pc = 0x1A7418u;
            goto label_1a7418;
        }
    }
    ctx->pc = 0x1A740Cu;
    // 0x1a740c: 0x10400002
    ctx->pc = 0x1A740Cu;
    {
        const bool branch_taken_0x1a740c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a740c) {
            ctx->pc = 0x1A7418u;
            goto label_1a7418;
        }
    }
    ctx->pc = 0x1A7414u;
    // 0x1a7414: 0x2442ffe0
    ctx->pc = 0x1a7414u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967264));
label_1a7418:
    // 0x1a7418: 0x3c01002b
    ctx->pc = 0x1a7418u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a741c: 0xac220a68
    ctx->pc = 0x1a741cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2664), GPR_U32(ctx, 2));
    // 0x1a7420: 0x102d
    ctx->pc = 0x1a7420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7424:
    // 0x1a7424: 0xdfbf0000
    ctx->pc = 0x1a7424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7428: 0x3e00008
    ctx->pc = 0x1A7428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A742Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7358u: goto label_1a7358;
            case 0x1A7418u: goto label_1a7418;
            case 0x1A7424u: goto label_1a7424;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7430u;
}
