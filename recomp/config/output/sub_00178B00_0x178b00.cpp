#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00178B00
// Address: 0x178b00 - 0x178b80
void sub_00178B00_0x178b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x178b00u;

    // 0x178b00: 0x27bdffe0
    ctx->pc = 0x178b00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178b04: 0x24050008
    ctx->pc = 0x178b04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x178b08: 0xffb00000
    ctx->pc = 0x178b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178b0c: 0x80802d
    ctx->pc = 0x178b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b10: 0xffb10008
    ctx->pc = 0x178b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178b14: 0xffbf0010
    ctx->pc = 0x178b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x178b18: 0xc05df12
    ctx->pc = 0x178B18u;
    SET_GPR_U32(ctx, 31, 0x178B20u);
    ctx->pc = 0x178B1Cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x177C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C48_0x177c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B20u; }
    }
    if (ctx->pc != 0x178B20u) { return; }
    ctx->pc = 0x178B20u;
    // 0x178b20: 0x10510011
    ctx->pc = 0x178B20u;
    {
        const bool branch_taken_0x178b20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x178B24u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178b20) {
            ctx->pc = 0x178B68u;
            goto label_178b68;
        }
    }
    ctx->pc = 0x178B28u;
    // 0x178b28: 0xc059f30
    ctx->pc = 0x178B28u;
    SET_GPR_U32(ctx, 31, 0x178B30u);
    ctx->pc = 0x178B2Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 7376)));
    ctx->pc = 0x167CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167CC0_0x167cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B30u; }
    }
    if (ctx->pc != 0x178B30u) { return; }
    ctx->pc = 0x178B30u;
    // 0x178b30: 0x1451000d
    ctx->pc = 0x178B30u;
    {
        const bool branch_taken_0x178b30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x178B34u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178b30) {
            ctx->pc = 0x178B68u;
            goto label_178b68;
        }
    }
    ctx->pc = 0x178B38u;
    // 0x178b38: 0xc05e2e0
    ctx->pc = 0x178B38u;
    SET_GPR_U32(ctx, 31, 0x178B40u);
    ctx->pc = 0x178B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00178B80_0x178b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178B40u; }
    }
    if (ctx->pc != 0x178B40u) { return; }
    ctx->pc = 0x178B40u;
    // 0x178b40: 0x10400009
    ctx->pc = 0x178B40u;
    {
        const bool branch_taken_0x178b40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x178B44u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178b40) {
            ctx->pc = 0x178B68u;
            goto label_178b68;
        }
    }
    ctx->pc = 0x178B48u;
    // 0x178b48: 0xdfb00000
    ctx->pc = 0x178b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178b4c: 0xdfb10008
    ctx->pc = 0x178b4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178b50: 0x24050008
    ctx->pc = 0x178b50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x178b54: 0xdfbf0010
    ctx->pc = 0x178b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178b58: 0x24060001
    ctx->pc = 0x178b58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x178b5c: 0x805df0c
    ctx->pc = 0x178B5Cu;
    ctx->pc = 0x178B60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x177C30u;
    entry_177c30_0x177c48(rdram, ctx, runtime); return;
    ctx->pc = 0x178B64u;
    // 0x178b64: 0x0
    ctx->pc = 0x178b64u;
    // NOP
label_178b68:
    // 0x178b68: 0xdfb00000
    ctx->pc = 0x178b68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178b6c: 0xdfb10008
    ctx->pc = 0x178b6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178b70: 0xdfbf0010
    ctx->pc = 0x178b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178b74: 0x3e00008
    ctx->pc = 0x178B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178B78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178B68u: goto label_178b68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178B7Cu;
    // 0x178b7c: 0x0
    ctx->pc = 0x178b7cu;
    // NOP
}
