#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F3190
// Address: 0x1f3190 - 0x1f3224
void sub_001F3190_0x1f3190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f3190u;

    // 0x1f3190: 0x27bdffc0
    ctx->pc = 0x1f3190u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f3194: 0xffb00010
    ctx->pc = 0x1f3194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f3198: 0xffb10018
    ctx->pc = 0x1f3198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f319c: 0xffb20020
    ctx->pc = 0x1f319cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f31a0: 0xffbe0028
    ctx->pc = 0x1f31a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 30));
    // 0x1f31a4: 0xffbf0030
    ctx->pc = 0x1f31a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f31a8: 0x3a0f02d
    ctx->pc = 0x1f31a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f31ac: 0x80882d
    ctx->pc = 0x1f31acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f31b0: 0xa0102d
    ctx->pc = 0x1f31b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f31b4: 0x3042ffff
    ctx->pc = 0x1f31b4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1f31b8: 0x40902d
    ctx->pc = 0x1f31b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f31bc: 0x220202d
    ctx->pc = 0x1f31bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f31c0: 0xc07c6b6
    ctx->pc = 0x1F31C0u;
    SET_GPR_U32(ctx, 31, 0x1F31C8u);
    ctx->pc = 0x1F1AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1AD8_0x1f1ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F31C8u; }
    }
    if (ctx->pc != 0x1F31C8u) { return; }
    ctx->pc = 0x1F31C8u;
    // 0x1f31c8: 0x40802d
    ctx->pc = 0x1f31c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f31cc: 0x220202d
    ctx->pc = 0x1f31ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f31d0: 0xc07c6cd
    ctx->pc = 0x1F31D0u;
    SET_GPR_U32(ctx, 31, 0x1F31D8u);
    ctx->pc = 0x1F1B34u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1B34_0x1f1b34(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F31D8u; }
    }
    if (ctx->pc != 0x1F31D8u) { return; }
    ctx->pc = 0x1F31D8u;
    // 0x1f31d8: 0xafd00000
    ctx->pc = 0x1f31d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 16));
    // 0x1f31dc: 0x8fc30000
    ctx->pc = 0x1f31dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f31e0: 0x721821
    ctx->pc = 0x1f31e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1f31e4: 0xafc30000
    ctx->pc = 0x1f31e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x1f31e8: 0x2442ffd4
    ctx->pc = 0x1f31e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967252));
    // 0x1f31ec: 0x8fc30000
    ctx->pc = 0x1f31ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f31f0: 0x43102b
    ctx->pc = 0x1f31f0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f31f4: 0x38420001
    ctx->pc = 0x1f31f4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x1f31f8: 0xafc20000
    ctx->pc = 0x1f31f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1f31fc: 0x8fc20000
    ctx->pc = 0x1f31fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f3200: 0x3c0e82d
    ctx->pc = 0x1f3200u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3204: 0xdfb00010
    ctx->pc = 0x1f3204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3208: 0xdfb10018
    ctx->pc = 0x1f3208u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f320c: 0xdfb20020
    ctx->pc = 0x1f320cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3210: 0xdfbe0028
    ctx->pc = 0x1f3210u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f3214: 0xdfbf0030
    ctx->pc = 0x1f3214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3218: 0x27bd0040
    ctx->pc = 0x1f3218u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f321c: 0x3e00008
    ctx->pc = 0x1F321Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F3224u;
}
