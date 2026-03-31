#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001118F8
// Address: 0x1118f8 - 0x1119d0
void sub_001118F8_0x1118f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1118f8u;

    // 0x1118f8: 0x8c830000
    ctx->pc = 0x1118f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1118fc: 0x382d
    ctx->pc = 0x1118fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111900: 0xdc850010
    ctx->pc = 0x111900u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x111904: 0x2c620002
    ctx->pc = 0x111904u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x111908: 0x10400007
    ctx->pc = 0x111908u;
    {
        const bool branch_taken_0x111908 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11190Cu;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        if (branch_taken_0x111908) {
            ctx->pc = 0x111928u;
            goto label_111928;
        }
    }
    ctx->pc = 0x111910u;
    // 0x111910: 0x34028000
    ctx->pc = 0x111910u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
    // 0x111914: 0x2113c
    ctx->pc = 0x111914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x111918: 0x240707ff
    ctx->pc = 0x111918u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2047));
    // 0x11191c: 0x10000015
    ctx->pc = 0x11191Cu;
    {
        const bool branch_taken_0x11191c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x111920u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        if (branch_taken_0x11191c) {
            ctx->pc = 0x111974u;
            goto label_111974;
        }
    }
    ctx->pc = 0x111924u;
    // 0x111924: 0x0
    ctx->pc = 0x111924u;
    // NOP
label_111928:
    // 0x111928: 0x38620004
    ctx->pc = 0x111928u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
    // 0x11192c: 0x5040000e
    ctx->pc = 0x11192Cu;
    {
        const bool branch_taken_0x11192c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11192c) {
            ctx->pc = 0x111930u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2047));
            ctx->pc = 0x111968u;
            goto label_111968;
        }
    }
    ctx->pc = 0x111934u;
    // 0x111934: 0x38620002
    ctx->pc = 0x111934u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
    // 0x111938: 0x5040000e
    ctx->pc = 0x111938u;
    {
        const bool branch_taken_0x111938 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x111938) {
            ctx->pc = 0x11193Cu;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x111974u;
            goto label_111974;
        }
    }
    ctx->pc = 0x111940u;
    // 0x111940: 0x10a0000c
    ctx->pc = 0x111940u;
    {
        const bool branch_taken_0x111940 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x111940) {
            ctx->pc = 0x111974u;
            goto label_111974;
        }
    }
    ctx->pc = 0x111948u;
    // 0x111948: 0x8c840008
    ctx->pc = 0x111948u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11194c: 0x2882fc02
    ctx->pc = 0x11194cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4294966274));
    // 0x111950: 0x54400008
    ctx->pc = 0x111950u;
    {
        const bool branch_taken_0x111950 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x111950) {
            ctx->pc = 0x111954u;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x111974u;
            goto label_111974;
        }
    }
    ctx->pc = 0x111958u;
    // 0x111958: 0x28820400
    ctx->pc = 0x111958u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 1024));
    // 0x11195c: 0x54400004
    ctx->pc = 0x11195Cu;
    {
        const bool branch_taken_0x11195c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11195c) {
            ctx->pc = 0x111960u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 1023));
            ctx->pc = 0x111970u;
            goto label_111970;
        }
    }
    ctx->pc = 0x111964u;
    // 0x111964: 0x240707ff
    ctx->pc = 0x111964u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2047));
label_111968:
    // 0x111968: 0x10000002
    ctx->pc = 0x111968u;
    {
        const bool branch_taken_0x111968 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11196Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x111968) {
            ctx->pc = 0x111974u;
            goto label_111974;
        }
    }
    ctx->pc = 0x111970u;
label_111970:
    // 0x111970: 0x52a3a
    ctx->pc = 0x111970u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
label_111974:
    // 0x111974: 0x3403fff0
    ctx->pc = 0x111974u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 65520));
    // 0x111978: 0x31c3c
    ctx->pc = 0x111978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x11197c: 0x2402ffff
    ctx->pc = 0x11197cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111980: 0x2133a
    ctx->pc = 0x111980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x111984: 0xa21024
    ctx->pc = 0x111984u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x111988: 0xc33024
    ctx->pc = 0x111988u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x11198c: 0xc23025
    ctx->pc = 0x11198cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x111990: 0x3c02800f
    ctx->pc = 0x111990u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32783 << 16));
    // 0x111994: 0x3442ffff
    ctx->pc = 0x111994u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x111998: 0x21438
    ctx->pc = 0x111998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x11199c: 0x3442ffff
    ctx->pc = 0x11199cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1119a0: 0x21438
    ctx->pc = 0x1119a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1119a4: 0x3442ffff
    ctx->pc = 0x1119a4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1119a8: 0x30e307ff
    ctx->pc = 0x1119a8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 7), 2047));
    // 0x1119ac: 0xc23024
    ctx->pc = 0x1119acu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1119b0: 0x31d3c
    ctx->pc = 0x1119b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 20));
    // 0x1119b4: 0x2404ffff
    ctx->pc = 0x1119b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1119b8: 0x4207a
    ctx->pc = 0x1119b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x1119bc: 0xc33025
    ctx->pc = 0x1119bcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1119c0: 0x817fc
    ctx->pc = 0x1119c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 31));
    // 0x1119c4: 0xc43024
    ctx->pc = 0x1119c4u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1119c8: 0x3e00008
    ctx->pc = 0x1119C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1119CCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111928u: goto label_111928;
            case 0x111968u: goto label_111968;
            case 0x111970u: goto label_111970;
            case 0x111974u: goto label_111974;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1119D0u;
}
