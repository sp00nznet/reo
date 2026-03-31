#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001033F8
// Address: 0x1033f8 - 0x103530
void sub_001033F8_0x1033f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1033f8u;

    // 0x1033f8: 0x27bdffc0
    ctx->pc = 0x1033f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1033fc: 0xffb00000
    ctx->pc = 0x1033fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103400: 0x80802d
    ctx->pc = 0x103400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103404: 0xffb20020
    ctx->pc = 0x103404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x103408: 0xffb10010
    ctx->pc = 0x103408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10340c: 0xc0902d
    ctx->pc = 0x10340cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103410: 0xffbf0030
    ctx->pc = 0x103410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x103414: 0xc040c00
    ctx->pc = 0x103414u;
    SET_GPR_U32(ctx, 31, 0x10341Cu);
    ctx->pc = 0x103418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x103000u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103000_0x103000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10341Cu; }
    }
    if (ctx->pc != 0x10341Cu) { return; }
    ctx->pc = 0x10341Cu;
    // 0x10341c: 0x40882d
    ctx->pc = 0x10341cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103420: 0xc040bc2
    ctx->pc = 0x103420u;
    SET_GPR_U32(ctx, 31, 0x103428u);
    ctx->pc = 0x103424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x102F08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00102F08_0x102f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103428u; }
    }
    if (ctx->pc != 0x103428u) { return; }
    ctx->pc = 0x103428u;
    // 0x103428: 0x3c02ffff
    ctx->pc = 0x103428u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x10342c: 0x8e030010
    ctx->pc = 0x10342cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x103430: 0x3442ffff
    ctx->pc = 0x103430u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x103434: 0x54620001
    ctx->pc = 0x103434u;
    {
        const bool branch_taken_0x103434 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x103434) {
            ctx->pc = 0x103438u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
            ctx->pc = 0x10343Cu;
            goto label_10343c;
        }
    }
    ctx->pc = 0x10343Cu;
label_10343c:
    // 0x10343c: 0x8e020000
    ctx->pc = 0x10343cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103440: 0x2403fff3
    ctx->pc = 0x103440u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x103444: 0xae120020
    ctx->pc = 0x103444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x103448: 0x431024
    ctx->pc = 0x103448u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10344c: 0xdfbf0030
    ctx->pc = 0x10344cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103450: 0x34420101
    ctx->pc = 0x103450u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 257));
    // 0x103454: 0xdfb20020
    ctx->pc = 0x103454u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103458: 0xae020000
    ctx->pc = 0x103458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10345c: 0xdfb10010
    ctx->pc = 0x10345cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103460: 0xdfb00000
    ctx->pc = 0x103460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103464: 0x3e00008
    ctx->pc = 0x103464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103468u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10343Cu: goto label_10343c;
            case 0x1034B4u: goto label_1034b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10346Cu;
    // 0x10346c: 0x0
    ctx->pc = 0x10346cu;
    // NOP
    // 0x103470: 0x27bdffc0
    ctx->pc = 0x103470u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x103474: 0xffb00000
    ctx->pc = 0x103474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103478: 0x80802d
    ctx->pc = 0x103478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10347c: 0xffb20020
    ctx->pc = 0x10347cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x103480: 0xffb10010
    ctx->pc = 0x103480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103484: 0xc0902d
    ctx->pc = 0x103484u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103488: 0xffbf0030
    ctx->pc = 0x103488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10348c: 0xc040c00
    ctx->pc = 0x10348Cu;
    SET_GPR_U32(ctx, 31, 0x103494u);
    ctx->pc = 0x103490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x103000u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103000_0x103000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103494u; }
    }
    if (ctx->pc != 0x103494u) { return; }
    ctx->pc = 0x103494u;
    // 0x103494: 0x40882d
    ctx->pc = 0x103494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103498: 0xc040bc2
    ctx->pc = 0x103498u;
    SET_GPR_U32(ctx, 31, 0x1034A0u);
    ctx->pc = 0x10349Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x102F08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00102F08_0x102f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1034A0u; }
    }
    if (ctx->pc != 0x1034A0u) { return; }
    ctx->pc = 0x1034A0u;
    // 0x1034a0: 0x3c02ffff
    ctx->pc = 0x1034a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x1034a4: 0x8e030010
    ctx->pc = 0x1034a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1034a8: 0x3442ffff
    ctx->pc = 0x1034a8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1034ac: 0x54620001
    ctx->pc = 0x1034ACu;
    {
        const bool branch_taken_0x1034ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1034ac) {
            ctx->pc = 0x1034B0u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
            ctx->pc = 0x1034B4u;
            goto label_1034b4;
        }
    }
    ctx->pc = 0x1034B4u;
label_1034b4:
    // 0x1034b4: 0x8e020000
    ctx->pc = 0x1034b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1034b8: 0x2403fff3
    ctx->pc = 0x1034b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1034bc: 0xae120020
    ctx->pc = 0x1034bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x1034c0: 0x431024
    ctx->pc = 0x1034c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1034c4: 0xdfbf0030
    ctx->pc = 0x1034c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1034c8: 0x34420109
    ctx->pc = 0x1034c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 265));
    // 0x1034cc: 0xdfb20020
    ctx->pc = 0x1034ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1034d0: 0xae020000
    ctx->pc = 0x1034d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1034d4: 0xdfb10010
    ctx->pc = 0x1034d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1034d8: 0xdfb00000
    ctx->pc = 0x1034d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1034dc: 0x3e00008
    ctx->pc = 0x1034DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1034E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10343Cu: goto label_10343c;
            case 0x1034B4u: goto label_1034b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1034E4u;
    // 0x1034e4: 0x0
    ctx->pc = 0x1034e4u;
    // NOP
    // 0x1034e8: 0x27bdffe0
    ctx->pc = 0x1034e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1034ec: 0xffb00000
    ctx->pc = 0x1034ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1034f0: 0xffbf0010
    ctx->pc = 0x1034f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1034f4: 0xc040bc2
    ctx->pc = 0x1034F4u;
    SET_GPR_U32(ctx, 31, 0x1034FCu);
    ctx->pc = 0x1034F8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x102F08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00102F08_0x102f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1034FCu; }
    }
    if (ctx->pc != 0x1034FCu) { return; }
    ctx->pc = 0x1034FCu;
    // 0x1034fc: 0x8e020000
    ctx->pc = 0x1034fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103500: 0x2403fff3
    ctx->pc = 0x103500u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x103504: 0x2404fffe
    ctx->pc = 0x103504u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x103508: 0xae000020
    ctx->pc = 0x103508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x10350c: 0x431024
    ctx->pc = 0x10350cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x103510: 0xdfbf0010
    ctx->pc = 0x103510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103514: 0x34420004
    ctx->pc = 0x103514u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4));
    // 0x103518: 0x441024
    ctx->pc = 0x103518u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10351c: 0x34420100
    ctx->pc = 0x10351cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 256));
    // 0x103520: 0xae020000
    ctx->pc = 0x103520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x103524: 0xdfb00000
    ctx->pc = 0x103524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103528: 0x3e00008
    ctx->pc = 0x103528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10352Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10343Cu: goto label_10343c;
            case 0x1034B4u: goto label_1034b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103530u;
}
