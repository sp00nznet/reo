#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D8AB0
// Address: 0x1d8ab0 - 0x1d8b40
void sub_001D8AB0_0x1d8ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d8ab0u;

    // 0x1d8ab0: 0x27bdffc0
    ctx->pc = 0x1d8ab0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d8ab4: 0xffbf0030
    ctx->pc = 0x1d8ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d8ab8: 0x7fb20020
    ctx->pc = 0x1d8ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d8abc: 0x7fb10010
    ctx->pc = 0x1d8abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d8ac0: 0x80902d
    ctx->pc = 0x1d8ac0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ac4: 0x7fb00000
    ctx->pc = 0x1d8ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8ac8: 0xa0882d
    ctx->pc = 0x1d8ac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8acc: 0xc075e38
    ctx->pc = 0x1D8ACCu;
    SET_GPR_U32(ctx, 31, 0x1D8AD4u);
    ctx->pc = 0x1D8AD0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D78E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78E0_0x1d78e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8AD4u; }
    }
    if (ctx->pc != 0x1D8AD4u) { return; }
    ctx->pc = 0x1D8AD4u;
    // 0x1d8ad4: 0x3c020034
    ctx->pc = 0x1d8ad4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1d8ad8: 0x11343c
    ctx->pc = 0x1d8ad8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1d8adc: 0x2442729c
    ctx->pc = 0x1d8adcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 29340));
    // 0x1d8ae0: 0x200282d
    ctx->pc = 0x1d8ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ae4: 0xa4520000
    ctx->pc = 0x1d8ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x1d8ae8: 0x6343f
    ctx->pc = 0x1d8ae8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1d8aec: 0xa4510002
    ctx->pc = 0x1d8aecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x1d8af0: 0xc041eac
    ctx->pc = 0x1D8AF0u;
    SET_GPR_U32(ctx, 31, 0x1D8AF8u);
    ctx->pc = 0x1D8AF4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8AF8u; }
    }
    if (ctx->pc != 0x1D8AF8u) { return; }
    ctx->pc = 0x1D8AF8u;
    // 0x1d8af8: 0x3c050034
    ctx->pc = 0x1d8af8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x1d8afc: 0x3c070034
    ctx->pc = 0x1d8afcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d8b00: 0x24040025
    ctx->pc = 0x1d8b00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 37));
    // 0x1d8b04: 0x24a57280
    ctx->pc = 0x1d8b04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 29312));
    // 0x1d8b08: 0x24060124
    ctx->pc = 0x1d8b08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 292));
    // 0x1d8b0c: 0x24e76280
    ctx->pc = 0x1d8b0cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1d8b10: 0xc075e40
    ctx->pc = 0x1D8B10u;
    SET_GPR_U32(ctx, 31, 0x1D8B18u);
    ctx->pc = 0x1D8B14u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x1D7900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7900_0x1d7900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B18u; }
    }
    if (ctx->pc != 0x1D8B18u) { return; }
    ctx->pc = 0x1D8B18u;
    // 0x1d8b18: 0x3c010034
    ctx->pc = 0x1d8b18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d8b1c: 0xc075e3c
    ctx->pc = 0x1D8B1Cu;
    SET_GPR_U32(ctx, 31, 0x1D8B24u);
    ctx->pc = 0x1D8B20u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 25240)));
    ctx->pc = 0x1D78F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D78F0_0x1d78f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B24u; }
    }
    if (ctx->pc != 0x1D8B24u) { return; }
    ctx->pc = 0x1D8B24u;
    // 0x1d8b24: 0x200102d
    ctx->pc = 0x1d8b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8b28: 0xdfbf0030
    ctx->pc = 0x1d8b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8b2c: 0x7bb20020
    ctx->pc = 0x1d8b2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8b30: 0x7bb10010
    ctx->pc = 0x1d8b30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8b34: 0x7bb00000
    ctx->pc = 0x1d8b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8b38: 0x3e00008
    ctx->pc = 0x1D8B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8B3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8B40u;
}
