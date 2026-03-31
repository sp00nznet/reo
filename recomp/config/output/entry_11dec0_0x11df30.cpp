#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_11dec0
// Address: 0x11dec0 - 0x11df30
void entry_11dec0_0x11df30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11dec0u;

    // 0x11dec0: 0x40036000
    ctx->pc = 0x11dec0u;
    SET_GPR_U32(ctx, 3, ctx->cop0_status);
    // 0x11dec4: 0x3c020001
    ctx->pc = 0x11dec4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x11dec8: 0x621824
    ctx->pc = 0x11dec8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11decc: 0x1060000b
    ctx->pc = 0x11DECCu;
    {
        const bool branch_taken_0x11decc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x11DED0u;
        SET_GPR_U32(ctx, 6, ((uint32_t)1 << 16));
        if (branch_taken_0x11decc) {
            ctx->pc = 0x11DEFCu;
            goto label_11defc;
        }
    }
    ctx->pc = 0x11DED4u;
    // 0x11ded4: 0x0
    ctx->pc = 0x11ded4u;
    // NOP
label_11ded8:
    // 0x11ded8: 0x42000039
    ctx->pc = 0x11ded8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x11dedc: 0x40f
    ctx->pc = 0x11dedcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x11dee0: 0x40026000
    ctx->pc = 0x11dee0u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x11dee4: 0x461024
    ctx->pc = 0x11dee4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11dee8: 0x0
    ctx->pc = 0x11dee8u;
    // NOP
    // 0x11deec: 0x0
    ctx->pc = 0x11deecu;
    // NOP
    // 0x11def0: 0x0
    ctx->pc = 0x11def0u;
    // NOP
    // 0x11def4: 0x1440fff8
    ctx->pc = 0x11DEF4u;
    {
        const bool branch_taken_0x11def4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11def4) {
            ctx->pc = 0x11DED8u;
            goto label_11ded8;
        }
    }
    ctx->pc = 0x11DEFCu;
label_11defc:
    // 0x11defc: 0x40026000
    ctx->pc = 0x11defcu;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x11df00: 0x40f
    ctx->pc = 0x11df00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x11df04: 0x34420006
    ctx->pc = 0x11df04u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 6));
    // 0x11df08: 0x38420002
    ctx->pc = 0x11df08u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 2));
    // 0x11df0c: 0x431025
    ctx->pc = 0x11df0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11df10: 0x40826000
    ctx->pc = 0x11df10u;
    ctx->cop0_status = GPR_U32(ctx, 2) & 0xFF57FFFF;
    // 0x11df14: 0x40f
    ctx->pc = 0x11df14u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x11df18: 0xac850000
    ctx->pc = 0x11df18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x11df1c: 0x409ff000
    ctx->pc = 0x11df1cu;
    ctx->cop0_errorepc = GPR_U32(ctx, 31);
    // 0x11df20: 0x40f
    ctx->pc = 0x11df20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x11df24: 0x42000018
    ctx->pc = 0x11df24u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
    // 0x11df28: 0x3e00008
    ctx->pc = 0x11DF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DED8u: goto label_11ded8;
            case 0x11DEFCu: goto label_11defc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11DF30u;
}
