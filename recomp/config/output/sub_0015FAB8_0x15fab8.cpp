#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015FAB8
// Address: 0x15fab8 - 0x15fb20
void sub_0015FAB8_0x15fab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15fab8u;

    // 0x15fab8: 0x3e00008
    ctx->pc = 0x15FAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FB08u: goto label_15fb08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15FAC0u;
    // 0x15fac0: 0x27bdffe0
    ctx->pc = 0x15fac0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15fac4: 0xffb00000
    ctx->pc = 0x15fac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15fac8: 0xa0802d
    ctx->pc = 0x15fac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15facc: 0xffb10008
    ctx->pc = 0x15faccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15fad0: 0xffbf0010
    ctx->pc = 0x15fad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15fad4: 0xc057ff0
    ctx->pc = 0x15FAD4u;
    SET_GPR_U32(ctx, 31, 0x15FADCu);
    ctx->pc = 0x15FAD8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FADCu; }
    }
    if (ctx->pc != 0x15FADCu) { return; }
    ctx->pc = 0x15FADCu;
    // 0x15fadc: 0x3c040024
    ctx->pc = 0x15fadcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15fae0: 0x200302d
    ctx->pc = 0x15fae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fae4: 0x2484f2a8
    ctx->pc = 0x15fae4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963880));
    // 0x15fae8: 0x14400007
    ctx->pc = 0x15FAE8u;
    {
        const bool branch_taken_0x15fae8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15FAECu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x15fae8) {
            ctx->pc = 0x15FB08u;
            goto label_15fb08;
        }
    }
    ctx->pc = 0x15FAF0u;
    // 0x15faf0: 0xdfb00000
    ctx->pc = 0x15faf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15faf4: 0xdfb10008
    ctx->pc = 0x15faf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15faf8: 0xdfbf0010
    ctx->pc = 0x15faf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fafc: 0x8058dd4
    ctx->pc = 0x15FAFCu;
    ctx->pc = 0x15FB00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x15FB04u;
    // 0x15fb04: 0x0
    ctx->pc = 0x15fb04u;
    // NOP
label_15fb08:
    // 0x15fb08: 0x8e240040
    ctx->pc = 0x15fb08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x15fb0c: 0xdfb00000
    ctx->pc = 0x15fb0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fb10: 0xdfb10008
    ctx->pc = 0x15fb10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15fb14: 0xdfbf0010
    ctx->pc = 0x15fb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fb18: 0x805d4ce
    ctx->pc = 0x15FB18u;
    ctx->pc = 0x15FB1Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x175338u;
    sub_00175338_0x175338(rdram, ctx, runtime); return;
    ctx->pc = 0x15FB20u;
}
