#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019F430
// Address: 0x19f430 - 0x19f550
void sub_0019F430_0x19f430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19f430u;

    // 0x19f430: 0x27bdfff0
    ctx->pc = 0x19f430u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f434: 0x3c04002a
    ctx->pc = 0x19f434u;
    SET_GPR_U32(ctx, 4, ((uint32_t)42 << 16));
    // 0x19f438: 0xffbf0000
    ctx->pc = 0x19f438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f43c: 0x2484f9b0
    ctx->pc = 0x19f43cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965680));
    // 0x19f440: 0x282d
    ctx->pc = 0x19f440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f444: 0xc0636e0
    ctx->pc = 0x19F444u;
    SET_GPR_U32(ctx, 31, 0x19F44Cu);
    ctx->pc = 0x19F448u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1136));
    ctx->pc = 0x18DB80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DB80_0x18db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F44Cu; }
    }
    if (ctx->pc != 0x19F44Cu) { return; }
    ctx->pc = 0x19F44Cu;
    // 0x19f44c: 0xc067a98
    ctx->pc = 0x19F44Cu;
    SET_GPR_U32(ctx, 31, 0x19F454u);
    ctx->pc = 0x19EA60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EA60_0x19ea60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F454u; }
    }
    if (ctx->pc != 0x19F454u) { return; }
    ctx->pc = 0x19F454u;
    // 0x19f454: 0x3c020160
    ctx->pc = 0x19f454u;
    SET_GPR_U32(ctx, 2, ((uint32_t)352 << 16));
    // 0x19f458: 0xc041bb8
    ctx->pc = 0x19F458u;
    SET_GPR_U32(ctx, 31, 0x19F460u);
    ctx->pc = 0x19F45Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 63));
    ctx->pc = 0x106EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00106EE0_0x106ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F460u; }
    }
    if (ctx->pc != 0x19F460u) { return; }
    ctx->pc = 0x19F460u;
    // 0x19f460: 0x2443003f
    ctx->pc = 0x19f460u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 63));
    // 0x19f464: 0x2402ffc0
    ctx->pc = 0x19f464u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x19f468: 0x622824
    ctx->pc = 0x19f468u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19f46c: 0x14a00003
    ctx->pc = 0x19F46Cu;
    {
        const bool branch_taken_0x19f46c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x19F470u;
        SET_GPR_U32(ctx, 4, ((uint32_t)42 << 16));
        if (branch_taken_0x19f46c) {
            ctx->pc = 0x19F47Cu;
            goto label_19f47c;
        }
    }
    ctx->pc = 0x19F474u;
    // 0x19f474: 0x10000032
    ctx->pc = 0x19F474u;
    {
        const bool branch_taken_0x19f474 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F478u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19f474) {
            ctx->pc = 0x19F540u;
            goto label_19f540;
        }
    }
    ctx->pc = 0x19F47Cu;
label_19f47c:
    // 0x19f47c: 0x3c060160
    ctx->pc = 0x19f47cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)352 << 16));
    // 0x19f480: 0x2484fe50
    ctx->pc = 0x19f480u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966864));
    // 0x19f484: 0xc06265c
    ctx->pc = 0x19F484u;
    SET_GPR_U32(ctx, 31, 0x19F48Cu);
    ctx->pc = 0x19F488u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x189970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00189970_0x189970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F48Cu; }
    }
    if (ctx->pc != 0x19F48Cu) { return; }
    ctx->pc = 0x19F48Cu;
    // 0x19f48c: 0x3c0200e0
    ctx->pc = 0x19f48cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)224 << 16));
    // 0x19f490: 0x3c01002a
    ctx->pc = 0x19f490u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19f494: 0xac22fdac
    ctx->pc = 0x19f494u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966700), GPR_U32(ctx, 2));
    // 0x19f498: 0x3c01002a
    ctx->pc = 0x19f498u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19f49c: 0xc06370c
    ctx->pc = 0x19F49Cu;
    SET_GPR_U32(ctx, 31, 0x19F4A4u);
    ctx->pc = 0x19F4A0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966700)));
    ctx->pc = 0x18DC30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC30_0x18dc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F4A4u; }
    }
    if (ctx->pc != 0x19F4A4u) { return; }
    ctx->pc = 0x19F4A4u;
    // 0x19f4a4: 0x3c01002a
    ctx->pc = 0x19f4a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19f4a8: 0x40202d
    ctx->pc = 0x19f4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4ac: 0xac22fda8
    ctx->pc = 0x19f4acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966696), GPR_U32(ctx, 2));
    // 0x19f4b0: 0x3c01002a
    ctx->pc = 0x19f4b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19f4b4: 0x8c25fdac
    ctx->pc = 0x19f4b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294966700)));
    // 0x19f4b8: 0xc068344
    ctx->pc = 0x19F4B8u;
    SET_GPR_U32(ctx, 31, 0x19F4C0u);
    ctx->pc = 0x19F4BCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x1A0D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0D10_0x1a0d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F4C0u; }
    }
    if (ctx->pc != 0x19F4C0u) { return; }
    ctx->pc = 0x19F4C0u;
    // 0x19f4c0: 0x3c01002a
    ctx->pc = 0x19f4c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19f4c4: 0x3c020019
    ctx->pc = 0x19f4c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)25 << 16));
    // 0x19f4c8: 0xac20fda0
    ctx->pc = 0x19f4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966688), GPR_U32(ctx, 0));
    // 0x19f4cc: 0x2442dbe0
    ctx->pc = 0x19f4ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958048));
    // 0x19f4d0: 0x3c01002b
    ctx->pc = 0x19f4d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x19f4d4: 0xac22fff8
    ctx->pc = 0x19f4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967288), GPR_U32(ctx, 2));
    // 0x19f4d8: 0x3c020010
    ctx->pc = 0x19f4d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x19f4dc: 0x3c01002b
    ctx->pc = 0x19f4dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x19f4e0: 0x24426f38
    ctx->pc = 0x19f4e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28472));
    // 0x19f4e4: 0xac22fff0
    ctx->pc = 0x19f4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967280), GPR_U32(ctx, 2));
    // 0x19f4e8: 0x24020064
    ctx->pc = 0x19f4e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
    // 0x19f4ec: 0x3c01002a
    ctx->pc = 0x19f4ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19f4f0: 0xac22fe78
    ctx->pc = 0x19f4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966904), GPR_U32(ctx, 2));
    // 0x19f4f4: 0x2402ffff
    ctx->pc = 0x19f4f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19f4f8: 0x3c01002a
    ctx->pc = 0x19f4f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19f4fc: 0xac22fd9c
    ctx->pc = 0x19f4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966684), GPR_U32(ctx, 2));
    // 0x19f500: 0x24020202
    ctx->pc = 0x19f500u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 514));
    // 0x19f504: 0x3c01002a
    ctx->pc = 0x19f504u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19f508: 0xac22fe70
    ctx->pc = 0x19f508u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966896), GPR_U32(ctx, 2));
    // 0x19f50c: 0x3c01002a
    ctx->pc = 0x19f50cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19f510: 0x3c020138
    ctx->pc = 0x19f510u;
    SET_GPR_U32(ctx, 2, ((uint32_t)312 << 16));
    // 0x19f514: 0xac20fee0
    ctx->pc = 0x19f514u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967008), GPR_U32(ctx, 0));
    // 0x19f518: 0x3442b032
    ctx->pc = 0x19f518u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45106));
    // 0x19f51c: 0x3c01002a
    ctx->pc = 0x19f51cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19f520: 0xac22fe68
    ctx->pc = 0x19f520u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966888), GPR_U32(ctx, 2));
    // 0x19f524: 0x3c01002a
    ctx->pc = 0x19f524u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19f528: 0x24020001
    ctx->pc = 0x19f528u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f52c: 0xac20bec0
    ctx->pc = 0x19f52cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294950592), GPR_U32(ctx, 0));
    // 0x19f530: 0x3c010029
    ctx->pc = 0x19f530u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x19f534: 0xac204198
    ctx->pc = 0x19f534u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16792), GPR_U32(ctx, 0));
    // 0x19f538: 0x3c010029
    ctx->pc = 0x19f538u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x19f53c: 0xac204178
    ctx->pc = 0x19f53cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16760), GPR_U32(ctx, 0));
label_19f540:
    // 0x19f540: 0xdfbf0000
    ctx->pc = 0x19f540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f544: 0x3e00008
    ctx->pc = 0x19F544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F548u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F47Cu: goto label_19f47c;
            case 0x19F540u: goto label_19f540;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F54Cu;
    // 0x19f54c: 0x0
    ctx->pc = 0x19f54cu;
    // NOP
}
