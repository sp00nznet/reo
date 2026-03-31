#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7B00
// Address: 0x1d7b00 - 0x1d7b80
void sub_001D7B00_0x1d7b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7b00u;

    // 0x1d7b00: 0x27bdffc0
    ctx->pc = 0x1d7b00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d7b04: 0xffbf0030
    ctx->pc = 0x1d7b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d7b08: 0x7fb20020
    ctx->pc = 0x1d7b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d7b0c: 0x7fb10010
    ctx->pc = 0x1d7b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d7b10: 0x80902d
    ctx->pc = 0x1d7b10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b14: 0x7fb00000
    ctx->pc = 0x1d7b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7b18: 0xa0882d
    ctx->pc = 0x1d7b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b1c: 0xc075e38
    ctx->pc = 0x1D7B1Cu;
    SET_GPR_U32(ctx, 31, 0x1D7B24u);
    ctx->pc = 0x1D7B20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B24u; }
    }
    if (ctx->pc != 0x1D7B24u) { return; }
    ctx->pc = 0x1D7B24u;
    // 0x1d7b24: 0x3c020034
    ctx->pc = 0x1d7b24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1d7b28: 0x3c050034
    ctx->pc = 0x1d7b28u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d7b2c: 0x2442729c
    ctx->pc = 0x1d7b2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 29340));
    // 0x1d7b30: 0x3c070034
    ctx->pc = 0x1d7b30u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d7b34: 0xac520000
    ctx->pc = 0x1d7b34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1d7b38: 0x24040007
    ctx->pc = 0x1d7b38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d7b3c: 0xa4510004
    ctx->pc = 0x1d7b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x1d7b40: 0x24a57280
    ctx->pc = 0x1d7b40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d7b44: 0x24060028
    ctx->pc = 0x1d7b44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 40));
    // 0x1d7b48: 0xa4500006
    ctx->pc = 0x1d7b48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 16));
    // 0x1d7b4c: 0x24e76280
    ctx->pc = 0x1d7b4cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d7b50: 0xc075e40
    ctx->pc = 0x1D7B50u;
    SET_GPR_U32(ctx, 31, 0x1D7B58u);
    ctx->pc = 0x1D7B54u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B58u; }
    }
    if (ctx->pc != 0x1D7B58u) { return; }
    ctx->pc = 0x1D7B58u;
    // 0x1d7b58: 0x3c010034
    ctx->pc = 0x1d7b58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7b5c: 0xc075e3c
    ctx->pc = 0x1D7B5Cu;
    SET_GPR_U32(ctx, 31, 0x1D7B64u);
    ctx->pc = 0x1D7B60u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B64u; }
    }
    if (ctx->pc != 0x1D7B64u) { return; }
    ctx->pc = 0x1D7B64u;
    // 0x1d7b64: 0x200102d
    ctx->pc = 0x1d7b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b68: 0xdfbf0030
    ctx->pc = 0x1d7b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7b6c: 0x7bb20020
    ctx->pc = 0x1d7b6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7b70: 0x7bb10010
    ctx->pc = 0x1d7b70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7b74: 0x7bb00000
    ctx->pc = 0x1d7b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7b78: 0x3e00008
    ctx->pc = 0x1D7B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7B7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7B80u;
}
