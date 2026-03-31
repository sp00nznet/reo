#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001158C8
// Address: 0x1158c8 - 0x115980
void sub_001158C8_0x1158c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1158c8u;

    // 0x1158c8: 0x27bdffe0
    ctx->pc = 0x1158c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1158cc: 0xa0102d
    ctx->pc = 0x1158ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1158d0: 0x30c6ffff
    ctx->pc = 0x1158d0u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 65535));
    // 0x1158d4: 0xafa40000
    ctx->pc = 0x1158d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1158d8: 0xffbf0010
    ctx->pc = 0x1158d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1158dc: 0x3a0282d
    ctx->pc = 0x1158dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1158e0: 0xafa20004
    ctx->pc = 0x1158e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1158e4: 0x2404fffa
    ctx->pc = 0x1158e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x1158e8: 0xc045294
    ctx->pc = 0x1158E8u;
    SET_GPR_U32(ctx, 31, 0x1158F0u);
    ctx->pc = 0x1158ECu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->pc = 0x114A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A50_0x114a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1158F0u; }
    }
    if (ctx->pc != 0x1158F0u) { return; }
    ctx->pc = 0x1158F0u;
    // 0x1158f0: 0xdfbf0010
    ctx->pc = 0x1158f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1158f4: 0x3e00008
    ctx->pc = 0x1158F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1158F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1158FCu;
    // 0x1158fc: 0x0
    ctx->pc = 0x1158fcu;
    // NOP
    // 0x115900: 0x52e00
    ctx->pc = 0x115900u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x115904: 0x27bdffe0
    ctx->pc = 0x115904u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x115908: 0x52e03
    ctx->pc = 0x115908u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x11590c: 0xafa40000
    ctx->pc = 0x11590cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x115910: 0xafa50004
    ctx->pc = 0x115910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x115914: 0x2404fff9
    ctx->pc = 0x115914u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x115918: 0xffbf0010
    ctx->pc = 0x115918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11591c: 0xc045294
    ctx->pc = 0x11591Cu;
    SET_GPR_U32(ctx, 31, 0x115924u);
    ctx->pc = 0x115920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A50_0x114a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115924u; }
    }
    if (ctx->pc != 0x115924u) { return; }
    ctx->pc = 0x115924u;
    // 0x115924: 0xdfbf0010
    ctx->pc = 0x115924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115928: 0x3e00008
    ctx->pc = 0x115928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11592Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115930u;
    // 0x115930: 0x27bdffe0
    ctx->pc = 0x115930u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x115934: 0xafa40000
    ctx->pc = 0x115934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x115938: 0x3a0282d
    ctx->pc = 0x115938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11593c: 0xffbf0010
    ctx->pc = 0x11593cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x115940: 0xc045294
    ctx->pc = 0x115940u;
    SET_GPR_U32(ctx, 31, 0x115948u);
    ctx->pc = 0x115944u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967288));
    ctx->pc = 0x114A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A50_0x114a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115948u; }
    }
    if (ctx->pc != 0x115948u) { return; }
    ctx->pc = 0x115948u;
    // 0x115948: 0xdfbf0010
    ctx->pc = 0x115948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11594c: 0x3e00008
    ctx->pc = 0x11594Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115950u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115954u;
    // 0x115954: 0x0
    ctx->pc = 0x115954u;
    // NOP
    // 0x115958: 0x27bdffe0
    ctx->pc = 0x115958u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11595c: 0xafa40000
    ctx->pc = 0x11595cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x115960: 0x3a0282d
    ctx->pc = 0x115960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115964: 0xffbf0010
    ctx->pc = 0x115964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x115968: 0xc045294
    ctx->pc = 0x115968u;
    SET_GPR_U32(ctx, 31, 0x115970u);
    ctx->pc = 0x11596Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967287));
    ctx->pc = 0x114A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A50_0x114a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115970u; }
    }
    if (ctx->pc != 0x115970u) { return; }
    ctx->pc = 0x115970u;
    // 0x115970: 0xdfbf0010
    ctx->pc = 0x115970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115974: 0x3e00008
    ctx->pc = 0x115974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115978u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11597Cu;
    // 0x11597c: 0x0
    ctx->pc = 0x11597cu;
    // NOP
}
