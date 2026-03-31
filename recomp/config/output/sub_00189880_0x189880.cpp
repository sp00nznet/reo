#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00189880
// Address: 0x189880 - 0x189970
void sub_00189880_0x189880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x189880u;

    // 0x189880: 0x27bdff60
    ctx->pc = 0x189880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x189884: 0x2402c000
    ctx->pc = 0x189884u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x189888: 0xffb40080
    ctx->pc = 0x189888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x18988c: 0x2403000b
    ctx->pc = 0x18988cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11));
    // 0x189890: 0x282a024
    ctx->pc = 0x189890u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x189894: 0x3c09ffff
    ctx->pc = 0x189894u;
    SET_GPR_U32(ctx, 9, ((uint32_t)65535 << 16));
    // 0x189898: 0x35293fff
    ctx->pc = 0x189898u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 16383));
    // 0x18989c: 0x283a025
    ctx->pc = 0x18989cu;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1898a0: 0x24024000
    ctx->pc = 0x1898a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1898a4: 0x289a024
    ctx->pc = 0x1898a4u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x1898a8: 0x3c03ff00
    ctx->pc = 0x1898a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65280 << 16));
    // 0x1898ac: 0x3463ffff
    ctx->pc = 0x1898acu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x1898b0: 0x282a025
    ctx->pc = 0x1898b0u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1898b4: 0x3c090003
    ctx->pc = 0x1898b4u;
    SET_GPR_U32(ctx, 9, ((uint32_t)3 << 16));
    // 0x1898b8: 0x283a024
    ctx->pc = 0x1898b8u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1898bc: 0x2402ffff
    ctx->pc = 0x1898bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1898c0: 0x21438
    ctx->pc = 0x1898c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1898c4: 0x344200ff
    ctx->pc = 0x1898c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 255));
    // 0x1898c8: 0x21438
    ctx->pc = 0x1898c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1898cc: 0x3442ffff
    ctx->pc = 0x1898ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1898d0: 0x289a025
    ctx->pc = 0x1898d0u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x1898d4: 0xffb30070
    ctx->pc = 0x1898d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1898d8: 0x282a024
    ctx->pc = 0x1898d8u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1898dc: 0xffb20060
    ctx->pc = 0x1898dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1898e0: 0xffb10050
    ctx->pc = 0x1898e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1898e4: 0x80982d
    ctx->pc = 0x1898e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1898e8: 0xffb00040
    ctx->pc = 0x1898e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1898ec: 0xa0882d
    ctx->pc = 0x1898ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1898f0: 0xe0802d
    ctx->pc = 0x1898f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1898f4: 0xc0902d
    ctx->pc = 0x1898f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1898f8: 0x24030028
    ctx->pc = 0x1898f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 40));
    // 0x1898fc: 0x3c020100
    ctx->pc = 0x1898fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)256 << 16));
    // 0x189900: 0x282a025
    ctx->pc = 0x189900u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x189904: 0xafb00004
    ctx->pc = 0x189904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x189908: 0x200302d
    ctx->pc = 0x189908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18990c: 0xffbf0090
    ctx->pc = 0x18990cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x189910: 0xafa30030
    ctx->pc = 0x189910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x189914: 0x100282d
    ctx->pc = 0x189914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189918: 0xc041eac
    ctx->pc = 0x189918u;
    SET_GPR_U32(ctx, 31, 0x189920u);
    ctx->pc = 0x18991Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189920u; }
    }
    if (ctx->pc != 0x189920u) { return; }
    ctx->pc = 0x189920u;
    // 0x189920: 0x21d8021
    ctx->pc = 0x189920u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x189924: 0x240282d
    ctx->pc = 0x189924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189928: 0x26040008
    ctx->pc = 0x189928u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 8));
    // 0x18992c: 0x220302d
    ctx->pc = 0x18992cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189930: 0xc041eac
    ctx->pc = 0x189930u;
    SET_GPR_U32(ctx, 31, 0x189938u);
    ctx->pc = 0x189934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189938u; }
    }
    if (ctx->pc != 0x189938u) { return; }
    ctx->pc = 0x189938u;
    // 0x189938: 0x260202d
    ctx->pc = 0x189938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18993c: 0x280282d
    ctx->pc = 0x18993cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189940: 0x27a60030
    ctx->pc = 0x189940u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 48));
    // 0x189944: 0xc062508
    ctx->pc = 0x189944u;
    SET_GPR_U32(ctx, 31, 0x18994Cu);
    ctx->pc = 0x189948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x189420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00189420_0x189420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18994Cu; }
    }
    if (ctx->pc != 0x18994Cu) { return; }
    ctx->pc = 0x18994Cu;
    // 0x18994c: 0xdfbf0090
    ctx->pc = 0x18994cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x189950: 0xdfb40080
    ctx->pc = 0x189950u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x189954: 0xdfb30070
    ctx->pc = 0x189954u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x189958: 0xdfb20060
    ctx->pc = 0x189958u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18995c: 0xdfb10050
    ctx->pc = 0x18995cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x189960: 0xdfb00040
    ctx->pc = 0x189960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189964: 0x3e00008
    ctx->pc = 0x189964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189968u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18996Cu;
    // 0x18996c: 0x0
    ctx->pc = 0x18996cu;
    // NOP
}
