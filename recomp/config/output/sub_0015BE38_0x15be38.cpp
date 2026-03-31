#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015BE38
// Address: 0x15be38 - 0x15bef0
void sub_0015BE38_0x15be38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15be38u;

    // 0x15be38: 0x27bdffc0
    ctx->pc = 0x15be38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15be3c: 0x3a0282d
    ctx->pc = 0x15be3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be40: 0x27a60004
    ctx->pc = 0x15be40u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    // 0x15be44: 0x27a70008
    ctx->pc = 0x15be44u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 8));
    // 0x15be48: 0x27a8000c
    ctx->pc = 0x15be48u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 12));
    // 0x15be4c: 0x27a90010
    ctx->pc = 0x15be4cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 16));
    // 0x15be50: 0x27aa0014
    ctx->pc = 0x15be50u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 29), 20));
    // 0x15be54: 0xffb00030
    ctx->pc = 0x15be54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x15be58: 0xffbf0038
    ctx->pc = 0x15be58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x15be5c: 0xc056ee8
    ctx->pc = 0x15BE5Cu;
    SET_GPR_U32(ctx, 31, 0x15BE64u);
    ctx->pc = 0x15BE60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15BBA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BBA0_0x15bba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BE64u; }
    }
    if (ctx->pc != 0x15BE64u) { return; }
    ctx->pc = 0x15BE64u;
    // 0x15be64: 0x27a50018
    ctx->pc = 0x15be64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 24));
    // 0x15be68: 0x27a6001c
    ctx->pc = 0x15be68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 28));
    // 0x15be6c: 0xc056f36
    ctx->pc = 0x15BE6Cu;
    SET_GPR_U32(ctx, 31, 0x15BE74u);
    ctx->pc = 0x15BE70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15BCD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BCD8_0x15bcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BE74u; }
    }
    if (ctx->pc != 0x15BE74u) { return; }
    ctx->pc = 0x15BE74u;
    // 0x15be74: 0x200202d
    ctx->pc = 0x15be74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be78: 0x27a50020
    ctx->pc = 0x15be78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x15be7c: 0xc056f84
    ctx->pc = 0x15BE7Cu;
    SET_GPR_U32(ctx, 31, 0x15BE84u);
    ctx->pc = 0x15BE80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 36));
    ctx->pc = 0x15BE10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BE10_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BE84u; }
    }
    if (ctx->pc != 0x15BE84u) { return; }
    ctx->pc = 0x15BE84u;
    // 0x15be84: 0xc056f8c
    ctx->pc = 0x15BE84u;
    SET_GPR_U32(ctx, 31, 0x15BE8Cu);
    ctx->pc = 0x15BE88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15BE30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BE30_0x15be30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BE8Cu; }
    }
    if (ctx->pc != 0x15BE8Cu) { return; }
    ctx->pc = 0x15BE8Cu;
    // 0x15be8c: 0x8fa40008
    ctx->pc = 0x15be8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15be90: 0x8fa30004
    ctx->pc = 0x15be90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15be94: 0x8fa5000c
    ctx->pc = 0x15be94u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x15be98: 0x641821
    ctx->pc = 0x15be98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15be9c: 0x8fa40018
    ctx->pc = 0x15be9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15bea0: 0x8fa60000
    ctx->pc = 0x15bea0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bea4: 0x651821
    ctx->pc = 0x15bea4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15bea8: 0x8fa80010
    ctx->pc = 0x15bea8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15beac: 0x24630040
    ctx->pc = 0x15beacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 64));
    // 0x15beb0: 0x8fa5001c
    ctx->pc = 0x15beb0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x15beb4: 0x701821
    ctx->pc = 0x15beb4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15beb8: 0x8fa70014
    ctx->pc = 0x15beb8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x15bebc: 0xc83021
    ctx->pc = 0x15bebcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x15bec0: 0x24840040
    ctx->pc = 0x15bec0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 64));
    // 0x15bec4: 0x661821
    ctx->pc = 0x15bec4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15bec8: 0xa72821
    ctx->pc = 0x15bec8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x15becc: 0xdfb00030
    ctx->pc = 0x15beccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15bed0: 0x852021
    ctx->pc = 0x15bed0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15bed4: 0xdfbf0038
    ctx->pc = 0x15bed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15bed8: 0x641821
    ctx->pc = 0x15bed8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15bedc: 0x621821
    ctx->pc = 0x15bedcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15bee0: 0x24620800
    ctx->pc = 0x15bee0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2048));
    // 0x15bee4: 0x3e00008
    ctx->pc = 0x15BEE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BEE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BEECu;
    // 0x15beec: 0x0
    ctx->pc = 0x15beecu;
    // NOP
}
