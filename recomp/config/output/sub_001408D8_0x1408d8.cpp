#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001408D8
// Address: 0x1408d8 - 0x1409e8
void sub_001408D8_0x1408d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1408d8u;

    // 0x1408d8: 0x80820000
    ctx->pc = 0x1408d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1408dc: 0x3c060023
    ctx->pc = 0x1408dcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x1408e0: 0x80830001
    ctx->pc = 0x1408e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1408e4: 0x24c698b0
    ctx->pc = 0x1408e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294940848));
    // 0x1408e8: 0x21080
    ctx->pc = 0x1408e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1408ec: 0x80850002
    ctx->pc = 0x1408ecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1408f0: 0x461021
    ctx->pc = 0x1408f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1408f4: 0x31880
    ctx->pc = 0x1408f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1408f8: 0x8c490000
    ctx->pc = 0x1408f8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1408fc: 0x661821
    ctx->pc = 0x1408fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x140900: 0x8c670000
    ctx->pc = 0x140900u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140904: 0x52880
    ctx->pc = 0x140904u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x140908: 0x80820003
    ctx->pc = 0x140908u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x14090c: 0x91900
    ctx->pc = 0x14090cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 9), 4));
    // 0x140910: 0xa62821
    ctx->pc = 0x140910u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x140914: 0x674821
    ctx->pc = 0x140914u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x140918: 0x8ca80000
    ctx->pc = 0x140918u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14091c: 0x92900
    ctx->pc = 0x14091cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 9), 4));
    // 0x140920: 0x80830004
    ctx->pc = 0x140920u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x140924: 0x21080
    ctx->pc = 0x140924u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x140928: 0x461021
    ctx->pc = 0x140928u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14092c: 0xa84821
    ctx->pc = 0x14092cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x140930: 0x8c470000
    ctx->pc = 0x140930u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140934: 0x31880
    ctx->pc = 0x140934u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x140938: 0x80820005
    ctx->pc = 0x140938u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x14093c: 0x92900
    ctx->pc = 0x14093cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 9), 4));
    // 0x140940: 0x661821
    ctx->pc = 0x140940u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x140944: 0xa74821
    ctx->pc = 0x140944u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x140948: 0x8c680000
    ctx->pc = 0x140948u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14094c: 0x21080
    ctx->pc = 0x14094cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x140950: 0x80830006
    ctx->pc = 0x140950u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x140954: 0x92100
    ctx->pc = 0x140954u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 9), 4));
    // 0x140958: 0x461021
    ctx->pc = 0x140958u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14095c: 0x884821
    ctx->pc = 0x14095cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x140960: 0x8c450000
    ctx->pc = 0x140960u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140964: 0x91100
    ctx->pc = 0x140964u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 4));
    // 0x140968: 0x31880
    ctx->pc = 0x140968u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x14096c: 0x661821
    ctx->pc = 0x14096cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x140970: 0x454821
    ctx->pc = 0x140970u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x140974: 0x8c640000
    ctx->pc = 0x140974u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140978: 0x91100
    ctx->pc = 0x140978u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 4));
    // 0x14097c: 0x3e00008
    ctx->pc = 0x14097Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140980u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x140984u;
    // 0x140984: 0x0
    ctx->pc = 0x140984u;
    // NOP
    // 0x140988: 0x27bdffe0
    ctx->pc = 0x140988u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14098c: 0xffb00000
    ctx->pc = 0x14098cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x140990: 0x80802d
    ctx->pc = 0x140990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140994: 0xffb10008
    ctx->pc = 0x140994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x140998: 0xa0882d
    ctx->pc = 0x140998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14099c: 0xffbf0010
    ctx->pc = 0x14099cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1409a0: 0x282d
    ctx->pc = 0x1409a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1409a4: 0x8e040000
    ctx->pc = 0x1409a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1409a8: 0xc041f1a
    ctx->pc = 0x1409A8u;
    SET_GPR_U32(ctx, 31, 0x1409B0u);
    ctx->pc = 0x1409ACu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1409B0u; }
    }
    if (ctx->pc != 0x1409B0u) { return; }
    ctx->pc = 0x1409B0u;
    // 0x1409b0: 0x8e040000
    ctx->pc = 0x1409b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1409b4: 0x220282d
    ctx->pc = 0x1409b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1409b8: 0xc042d7e
    ctx->pc = 0x1409B8u;
    SET_GPR_U32(ctx, 31, 0x1409C0u);
    ctx->pc = 0x1409BCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x10B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B5F8_0x10b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1409C0u; }
    }
    if (ctx->pc != 0x1409C0u) { return; }
    ctx->pc = 0x1409C0u;
    // 0x1409c0: 0x8e040004
    ctx->pc = 0x1409c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1409c4: 0x8e050000
    ctx->pc = 0x1409c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1409c8: 0xdfb10008
    ctx->pc = 0x1409c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1409cc: 0x2484fff0
    ctx->pc = 0x1409ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x1409d0: 0xdfb00000
    ctx->pc = 0x1409d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1409d4: 0x24a50008
    ctx->pc = 0x1409d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x1409d8: 0xdfbf0010
    ctx->pc = 0x1409d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1409dc: 0x8050210
    ctx->pc = 0x1409DCu;
    ctx->pc = 0x1409E0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x140840u;
    entry_140840_0x1408d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1409E4u;
    // 0x1409e4: 0x0
    ctx->pc = 0x1409e4u;
    // NOP
}
