#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011DC48
// Address: 0x11dc48 - 0x11dd08
void sub_0011DC48_0x11dc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11dc48u;

label_11dc48:
    // 0x11dc48: 0x8047424
    ctx->pc = 0x11DC48u;
    ctx->pc = 0x11D090u;
    entry_11d090_0x11d0d0(rdram, ctx, runtime); return;
    ctx->pc = 0x11DC50u;
    // 0x11dc50: 0x27bdffc0
    ctx->pc = 0x11dc50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11dc54: 0xffb10010
    ctx->pc = 0x11dc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11dc58: 0x80882d
    ctx->pc = 0x11dc58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dc5c: 0xffb20020
    ctx->pc = 0x11dc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11dc60: 0xffb00000
    ctx->pc = 0x11dc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11dc64: 0xa0902d
    ctx->pc = 0x11dc64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dc68: 0xc0802d
    ctx->pc = 0x11dc68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dc6c: 0x3c040024
    ctx->pc = 0x11dc6cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x11dc70: 0x200282d
    ctx->pc = 0x11dc70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dc74: 0xffbf0030
    ctx->pc = 0x11dc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11dc78: 0x24848c50
    ctx->pc = 0x11dc78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937680));
    // 0x11dc7c: 0xc0476cc
    ctx->pc = 0x11DC7Cu;
    SET_GPR_U32(ctx, 31, 0x11DC84u);
    ctx->pc = 0x11DC80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11DB30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DB30_0x11db30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DC84u; }
    }
    if (ctx->pc != 0x11DC84u) { return; }
    ctx->pc = 0x11DC84u;
    // 0x11dc84: 0xc047712
    ctx->pc = 0x11DC84u;
    SET_GPR_U32(ctx, 31, 0x11DC8Cu);
    ctx->pc = 0x11DC48u;
    goto label_11dc48;
    ctx->pc = 0x11DC8Cu;
label_11dc8c:
    // 0x11dc8c: 0x3c020021
    ctx->pc = 0x11dc8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x11dc90: 0x220202d
    ctx->pc = 0x11dc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dc94: 0x8c47a180
    ctx->pc = 0x11dc94u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294943104)));
    // 0x11dc98: 0x240282d
    ctx->pc = 0x11dc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dc9c: 0x200302d
    ctx->pc = 0x11dc9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dca0: 0xc04509c
    ctx->pc = 0x11DCA0u;
    SET_GPR_U32(ctx, 31, 0x11DCA8u);
    ctx->pc = 0x11DCA4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
    ctx->pc = 0x114270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114270_0x114270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DCA8u; }
    }
    if (ctx->pc != 0x11DCA8u) { return; }
    ctx->pc = 0x11DCA8u;
    // 0x11dca8: 0xdfbf0030
    ctx->pc = 0x11dca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11dcac: 0xdfb20020
    ctx->pc = 0x11dcacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11dcb0: 0xdfb10010
    ctx->pc = 0x11dcb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dcb4: 0xdfb00000
    ctx->pc = 0x11dcb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dcb8: 0x3e00008
    ctx->pc = 0x11DCB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DCBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DC48u: goto label_11dc48;
            case 0x11DC8Cu: goto label_11dc8c;
            case 0x11DCE0u: goto label_11dce0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11DCC0u;
    // 0x11dcc0: 0x27bdffd0
    ctx->pc = 0x11dcc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11dcc4: 0xffb10010
    ctx->pc = 0x11dcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11dcc8: 0xffb00000
    ctx->pc = 0x11dcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11dccc: 0xffbf0020
    ctx->pc = 0x11dcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11dcd0: 0xc0476cc
    ctx->pc = 0x11DCD0u;
    SET_GPR_U32(ctx, 31, 0x11DCD8u);
    ctx->pc = 0x11DCD4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11DB30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DB30_0x11db30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DCD8u; }
    }
    if (ctx->pc != 0x11DCD8u) { return; }
    ctx->pc = 0x11DCD8u;
    // 0x11dcd8: 0xc047712
    ctx->pc = 0x11DCD8u;
    SET_GPR_U32(ctx, 31, 0x11DCE0u);
    ctx->pc = 0x11DCDCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11DC48u;
    goto label_11dc48;
    ctx->pc = 0x11DCE0u;
label_11dce0:
    // 0x11dce0: 0x3c020021
    ctx->pc = 0x11dce0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x11dce4: 0x200202d
    ctx->pc = 0x11dce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dce8: 0x8c46a180
    ctx->pc = 0x11dce8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294943104)));
    // 0x11dcec: 0x220282d
    ctx->pc = 0x11dcecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dcf0: 0xdfbf0020
    ctx->pc = 0x11dcf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11dcf4: 0xdfb10010
    ctx->pc = 0x11dcf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dcf8: 0x24c60004
    ctx->pc = 0x11dcf8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x11dcfc: 0xdfb00000
    ctx->pc = 0x11dcfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dd00: 0x8045098
    ctx->pc = 0x11DD00u;
    ctx->pc = 0x11DD04u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x114260u;
    entry_114260_0x114270(rdram, ctx, runtime); return;
    ctx->pc = 0x11DD08u;
}
