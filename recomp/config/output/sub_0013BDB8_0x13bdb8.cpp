#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013BDB8
// Address: 0x13bdb8 - 0x13be28
void sub_0013BDB8_0x13bdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13bdb8u;

    // 0x13bdb8: 0x27bdfff0
    ctx->pc = 0x13bdb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13bdbc: 0xffb00000
    ctx->pc = 0x13bdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13bdc0: 0xffbf0008
    ctx->pc = 0x13bdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13bdc4: 0xc042c56
    ctx->pc = 0x13BDC4u;
    SET_GPR_U32(ctx, 31, 0x13BDCCu);
    ctx->pc = 0x13BDC8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BDCCu; }
    }
    if (ctx->pc != 0x13BDCCu) { return; }
    ctx->pc = 0x13BDCCu;
    // 0x13bdcc: 0x40302d
    ctx->pc = 0x13bdccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bdd0: 0x24020010
    ctx->pc = 0x13bdd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x13bdd4: 0x2cc30011
    ctx->pc = 0x13bdd4u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 6), 17));
    // 0x13bdd8: 0x43300a
    ctx->pc = 0x13bdd8u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 2));
    // 0x13bddc: 0x10c0000d
    ctx->pc = 0x13BDDCu;
    {
        const bool branch_taken_0x13bddc = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x13BDE0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13bddc) {
            ctx->pc = 0x13BE14u;
            goto label_13be14;
        }
    }
    ctx->pc = 0x13BDE4u;
    // 0x13bde4: 0x2407003a
    ctx->pc = 0x13bde4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 58));
    // 0x13bde8: 0x2051021
    ctx->pc = 0x13bde8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x13bdec: 0x0
    ctx->pc = 0x13bdecu;
    // NOP
label_13bdf0:
    // 0x13bdf0: 0x24a50001
    ctx->pc = 0x13bdf0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x13bdf4: 0x80430000
    ctx->pc = 0x13bdf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13bdf8: 0x24020001
    ctx->pc = 0x13bdf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bdfc: 0x10670006
    ctx->pc = 0x13BDFCu;
    {
        const bool branch_taken_0x13bdfc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 7));
        ctx->pc = 0x13BE00u;
        SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        if (branch_taken_0x13bdfc) {
            ctx->pc = 0x13BE18u;
            goto label_13be18;
        }
    }
    ctx->pc = 0x13BE04u;
    // 0x13be04: 0x0
    ctx->pc = 0x13be04u;
    // NOP
    // 0x13be08: 0x0
    ctx->pc = 0x13be08u;
    // NOP
    // 0x13be0c: 0x1480fff8
    ctx->pc = 0x13BE0Cu;
    {
        const bool branch_taken_0x13be0c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x13BE10u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        if (branch_taken_0x13be0c) {
            ctx->pc = 0x13BDF0u;
            goto label_13bdf0;
        }
    }
    ctx->pc = 0x13BE14u;
label_13be14:
    // 0x13be14: 0x102d
    ctx->pc = 0x13be14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13be18:
    // 0x13be18: 0xdfb00000
    ctx->pc = 0x13be18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13be1c: 0xdfbf0008
    ctx->pc = 0x13be1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13be20: 0x3e00008
    ctx->pc = 0x13BE20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BE24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13BDF0u: goto label_13bdf0;
            case 0x13BE14u: goto label_13be14;
            case 0x13BE18u: goto label_13be18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13BE28u;
}
