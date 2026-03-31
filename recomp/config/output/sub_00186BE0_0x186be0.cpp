#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00186BE0
// Address: 0x186be0 - 0x186c10
void sub_00186BE0_0x186be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x186be0u;

    // 0x186be0: 0x27bdfff0
    ctx->pc = 0x186be0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186be4: 0xffbf0000
    ctx->pc = 0x186be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186be8: 0xdfbf0000
    ctx->pc = 0x186be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186bec: 0x8061edc
    ctx->pc = 0x186BECu;
    ctx->pc = 0x186BF0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x187B70u;
    entry_187b70_0x187d38(rdram, ctx, runtime); return;
    ctx->pc = 0x186BF4u;
    // 0x186bf4: 0x0
    ctx->pc = 0x186bf4u;
    // NOP
    // 0x186bf8: 0x27bdfff0
    ctx->pc = 0x186bf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186bfc: 0xffbf0000
    ctx->pc = 0x186bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186c00: 0xdfbf0000
    ctx->pc = 0x186c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186c04: 0x8061f4e
    ctx->pc = 0x186C04u;
    ctx->pc = 0x186C08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x187D38u;
    sub_00187D38_0x187d38(rdram, ctx, runtime); return;
    ctx->pc = 0x186C0Cu;
    // 0x186c0c: 0x0
    ctx->pc = 0x186c0cu;
    // NOP
}
