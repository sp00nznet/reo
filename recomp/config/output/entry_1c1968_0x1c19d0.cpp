#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1c1968
// Address: 0x1c1968 - 0x1c19d0
void entry_1c1968_0x1c19d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c1968u;

    // 0x1c1968: 0x27bdffe0
    ctx->pc = 0x1c1968u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c196c: 0xffb00000
    ctx->pc = 0x1c196cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1970: 0xffbf0010
    ctx->pc = 0x1c1970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c1974: 0x80802d
    ctx->pc = 0x1c1974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1978: 0xc07062c
    ctx->pc = 0x1C1978u;
    SET_GPR_U32(ctx, 31, 0x1C1980u);
    ctx->pc = 0x1C197Cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    ctx->pc = 0x1C18B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C18B0_0x1c18b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1980u; }
    }
    if (ctx->pc != 0x1C1980u) { return; }
    ctx->pc = 0x1C1980u;
    // 0x1c1980: 0x92040006
    ctx->pc = 0x1c1980u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1c1984: 0xc07062c
    ctx->pc = 0x1C1984u;
    SET_GPR_U32(ctx, 31, 0x1C198Cu);
    ctx->pc = 0x1C1988u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1C18B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C18B0_0x1c18b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C198Cu; }
    }
    if (ctx->pc != 0x1C198Cu) { return; }
    ctx->pc = 0x1C198Cu;
    // 0x1c198c: 0x92040005
    ctx->pc = 0x1c198cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x1c1990: 0xc07062c
    ctx->pc = 0x1C1990u;
    SET_GPR_U32(ctx, 31, 0x1C1998u);
    ctx->pc = 0x1C1994u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1C18B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C18B0_0x1c18b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1998u; }
    }
    if (ctx->pc != 0x1C1998u) { return; }
    ctx->pc = 0x1C1998u;
    // 0x1c1998: 0x92040003
    ctx->pc = 0x1c1998u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1c199c: 0xc07062c
    ctx->pc = 0x1C199Cu;
    SET_GPR_U32(ctx, 31, 0x1C19A4u);
    ctx->pc = 0x1C19A0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1C18B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C18B0_0x1c18b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C19A4u; }
    }
    if (ctx->pc != 0x1C19A4u) { return; }
    ctx->pc = 0x1C19A4u;
    // 0x1c19a4: 0x92040002
    ctx->pc = 0x1c19a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1c19a8: 0xc07062c
    ctx->pc = 0x1C19A8u;
    SET_GPR_U32(ctx, 31, 0x1C19B0u);
    ctx->pc = 0x1C19ACu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1C18B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C18B0_0x1c18b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C19B0u; }
    }
    if (ctx->pc != 0x1C19B0u) { return; }
    ctx->pc = 0x1C19B0u;
    // 0x1c19b0: 0x92040001
    ctx->pc = 0x1c19b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1c19b4: 0xc07062c
    ctx->pc = 0x1C19B4u;
    SET_GPR_U32(ctx, 31, 0x1C19BCu);
    ctx->pc = 0x1C19B8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1C18B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C18B0_0x1c18b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C19BCu; }
    }
    if (ctx->pc != 0x1C19BCu) { return; }
    ctx->pc = 0x1C19BCu;
    // 0x1c19bc: 0xa2020001
    ctx->pc = 0x1c19bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c19c0: 0xdfbf0010
    ctx->pc = 0x1c19c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c19c4: 0xdfb00000
    ctx->pc = 0x1c19c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c19c8: 0x3e00008
    ctx->pc = 0x1C19C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C19CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C19D0u;
}
