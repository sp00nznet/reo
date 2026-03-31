#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001E820C
// Address: 0x1e820c - 0x1e8254
void sub_001E820C_0x1e820c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1e820cu;

    // 0x1e820c: 0x27bdfff0
    ctx->pc = 0x1e820cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e8210: 0xffbe0000
    ctx->pc = 0x1e8210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x1e8214: 0x3a0f02d
    ctx->pc = 0x1e8214u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8218: 0x80102d
    ctx->pc = 0x1e8218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e821c: 0x3042ffff
    ctx->pc = 0x1e821cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1e8220: 0x40182d
    ctx->pc = 0x1e8220u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8224: 0x3062ffff
    ctx->pc = 0x1e8224u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 65535));
    // 0x1e8228: 0x21202
    ctx->pc = 0x1e8228u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x1e822c: 0x31a00
    ctx->pc = 0x1e822cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1e8230: 0x40202d
    ctx->pc = 0x1e8230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8234: 0x60102d
    ctx->pc = 0x1e8234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8238: 0x821025
    ctx->pc = 0x1e8238u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1e823c: 0x3042ffff
    ctx->pc = 0x1e823cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1e8240: 0x3c0e82d
    ctx->pc = 0x1e8240u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8244: 0xdfbe0000
    ctx->pc = 0x1e8244u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8248: 0x27bd0010
    ctx->pc = 0x1e8248u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e824c: 0x3e00008
    ctx->pc = 0x1E824Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8254u;
}
