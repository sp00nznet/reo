#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_177ad0
// Address: 0x177ad0 - 0x177b10
void entry_177ad0_0x177b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x177ad0u;

    // 0x177ad0: 0x710c0
    ctx->pc = 0x177ad0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 3));
    // 0x177ad4: 0x51900
    ctx->pc = 0x177ad4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
    // 0x177ad8: 0x471023
    ctx->pc = 0x177ad8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x177adc: 0x651821
    ctx->pc = 0x177adcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x177ae0: 0x21080
    ctx->pc = 0x177ae0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x177ae4: 0x31880
    ctx->pc = 0x177ae4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x177ae8: 0x471021
    ctx->pc = 0x177ae8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x177aec: 0x831821
    ctx->pc = 0x177aecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x177af0: 0x63080
    ctx->pc = 0x177af0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x177af4: 0x21080
    ctx->pc = 0x177af4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x177af8: 0xc33021
    ctx->pc = 0x177af8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x177afc: 0x822021
    ctx->pc = 0x177afcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x177b00: 0xacc71ab4
    ctx->pc = 0x177b00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6836), GPR_U32(ctx, 7));
    // 0x177b04: 0x3e00008
    ctx->pc = 0x177B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177B08u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4492), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177B0Cu;
    // 0x177b0c: 0x0
    ctx->pc = 0x177b0cu;
    // NOP
}
