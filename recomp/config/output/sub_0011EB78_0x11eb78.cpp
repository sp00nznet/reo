#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011EB78
// Address: 0x11eb78 - 0x11ebc8
void sub_0011EB78_0x11eb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11eb78u;

    // 0x11eb78: 0x27bdffd0
    ctx->pc = 0x11eb78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11eb7c: 0xffb00000
    ctx->pc = 0x11eb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11eb80: 0xffb10010
    ctx->pc = 0x11eb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11eb84: 0xffbf0020
    ctx->pc = 0x11eb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11eb88: 0xc047598
    ctx->pc = 0x11EB88u;
    SET_GPR_U32(ctx, 31, 0x11EB90u);
    ctx->pc = 0x11EB8Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB90u; }
    }
    if (ctx->pc != 0x11EB90u) { return; }
    ctx->pc = 0x11EB90u;
    // 0x11eb90: 0x200202d
    ctx->pc = 0x11eb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb94: 0xc047ab2
    ctx->pc = 0x11EB94u;
    SET_GPR_U32(ctx, 31, 0x11EB9Cu);
    ctx->pc = 0x11EB98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11EAC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EAC8_0x11eac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB9Cu; }
    }
    if (ctx->pc != 0x11EB9Cu) { return; }
    ctx->pc = 0x11EB9Cu;
    // 0x11eb9c: 0x12200003
    ctx->pc = 0x11EB9Cu;
    {
        const bool branch_taken_0x11eb9c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x11EBA0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11eb9c) {
            ctx->pc = 0x11EBACu;
            goto label_11ebac;
        }
    }
    ctx->pc = 0x11EBA4u;
    // 0x11eba4: 0xc0475ae
    ctx->pc = 0x11EBA4u;
    SET_GPR_U32(ctx, 31, 0x11EBACu);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EBACu; }
    }
    if (ctx->pc != 0x11EBACu) { return; }
    ctx->pc = 0x11EBACu;
label_11ebac:
    // 0x11ebac: 0x200102d
    ctx->pc = 0x11ebacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebb0: 0xdfbf0020
    ctx->pc = 0x11ebb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ebb4: 0xdfb10010
    ctx->pc = 0x11ebb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ebb8: 0xdfb00000
    ctx->pc = 0x11ebb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ebbc: 0x3e00008
    ctx->pc = 0x11EBBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EBC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EBACu: goto label_11ebac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11EBC4u;
    // 0x11ebc4: 0x0
    ctx->pc = 0x11ebc4u;
    // NOP
}
