#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169B38
// Address: 0x169b38 - 0x169be0
void sub_00169B38_0x169b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169b38u;

    // 0x169b38: 0x27bdffe0
    ctx->pc = 0x169b38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169b3c: 0x3c020023
    ctx->pc = 0x169b3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x169b40: 0xffbf0018
    ctx->pc = 0x169b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x169b44: 0xffb00000
    ctx->pc = 0x169b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169b48: 0x24100007
    ctx->pc = 0x169b48u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 7));
    // 0x169b4c: 0xffb10008
    ctx->pc = 0x169b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169b50: 0x2451f18c
    ctx->pc = 0x169b50u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294963596));
    // 0x169b54: 0xffb20010
    ctx->pc = 0x169b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x169b58: 0x902d
    ctx->pc = 0x169b58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b5c: 0x8e220000
    ctx->pc = 0x169b5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_169b60:
    // 0x169b60: 0x26310004
    ctx->pc = 0x169b60u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
    // 0x169b64: 0x10400004
    ctx->pc = 0x169B64u;
    {
        const bool branch_taken_0x169b64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x169B68u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x169b64) {
            ctx->pc = 0x169B78u;
            goto label_169b78;
        }
    }
    ctx->pc = 0x169B6Cu;
    // 0x169b6c: 0xc05ce6a
    ctx->pc = 0x169B6Cu;
    SET_GPR_U32(ctx, 31, 0x169B74u);
    ctx->pc = 0x1739A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001739A8_0x1739a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B74u; }
    }
    if (ctx->pc != 0x169B74u) { return; }
    ctx->pc = 0x169B74u;
    // 0x169b74: 0x40902d
    ctx->pc = 0x169b74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_169b78:
    // 0x169b78: 0x2610ffff
    ctx->pc = 0x169b78u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x169b7c: 0x603fff8
    ctx->pc = 0x169B7Cu;
    {
        const bool branch_taken_0x169b7c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x169b7c) {
            ctx->pc = 0x169B80u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x169B60u;
            goto label_169b60;
        }
    }
    ctx->pc = 0x169B84u;
    // 0x169b84: 0x3c100023
    ctx->pc = 0x169b84u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x169b88: 0x2610f138
    ctx->pc = 0x169b88u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294963512));
    // 0x169b8c: 0xc05d692
    ctx->pc = 0x169B8Cu;
    SET_GPR_U32(ctx, 31, 0x169B94u);
    ctx->pc = 0x169B90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175A48_0x175a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B94u; }
    }
    if (ctx->pc != 0x169B94u) { return; }
    ctx->pc = 0x169B94u;
    // 0x169b94: 0xc0599c6
    ctx->pc = 0x169B94u;
    SET_GPR_U32(ctx, 31, 0x169B9Cu);
    ctx->pc = 0x169B98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
    ctx->pc = 0x166718u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166718_0x166718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B9Cu; }
    }
    if (ctx->pc != 0x169B9Cu) { return; }
    ctx->pc = 0x169B9Cu;
    // 0x169b9c: 0xc05dd52
    ctx->pc = 0x169B9Cu;
    SET_GPR_U32(ctx, 31, 0x169BA4u);
    ctx->pc = 0x169BA0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x177548u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177548_0x177548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169BA4u; }
    }
    if (ctx->pc != 0x169BA4u) { return; }
    ctx->pc = 0x169BA4u;
    // 0x169ba4: 0xc05a7b0
    ctx->pc = 0x169BA4u;
    SET_GPR_U32(ctx, 31, 0x169BACu);
    ctx->pc = 0x169BA8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169EC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EC0_0x169ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169BACu; }
    }
    if (ctx->pc != 0x169BACu) { return; }
    ctx->pc = 0x169BACu;
    // 0x169bac: 0xc05a7a8
    ctx->pc = 0x169BACu;
    SET_GPR_U32(ctx, 31, 0x169BB4u);
    ctx->pc = 0x169EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EA0_0x169ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169BB4u; }
    }
    if (ctx->pc != 0x169BB4u) { return; }
    ctx->pc = 0x169BB4u;
    // 0x169bb4: 0xc05a79a
    ctx->pc = 0x169BB4u;
    SET_GPR_U32(ctx, 31, 0x169BBCu);
    ctx->pc = 0x169E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E68_0x169e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169BBCu; }
    }
    if (ctx->pc != 0x169BBCu) { return; }
    ctx->pc = 0x169BBCu;
    // 0x169bbc: 0x200102d
    ctx->pc = 0x169bbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169bc0: 0xdfb10008
    ctx->pc = 0x169bc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169bc4: 0x250100a
    ctx->pc = 0x169bc4u;
    if (GPR_U32(ctx, 16) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 18));
    // 0x169bc8: 0xdfb00000
    ctx->pc = 0x169bc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169bcc: 0xdfb20010
    ctx->pc = 0x169bccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169bd0: 0xdfbf0018
    ctx->pc = 0x169bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169bd4: 0x3e00008
    ctx->pc = 0x169BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169BD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169B60u: goto label_169b60;
            case 0x169B78u: goto label_169b78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169BDCu;
    // 0x169bdc: 0x0
    ctx->pc = 0x169bdcu;
    // NOP
}
