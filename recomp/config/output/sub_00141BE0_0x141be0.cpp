#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00141BE0
// Address: 0x141be0 - 0x141c58
void sub_00141BE0_0x141be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x141be0u;

    // 0x141be0: 0x27bdffe0
    ctx->pc = 0x141be0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x141be4: 0xffb10008
    ctx->pc = 0x141be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x141be8: 0xa0882d
    ctx->pc = 0x141be8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141bec: 0x2e220006
    ctx->pc = 0x141becu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 6));
    // 0x141bf0: 0xffb00000
    ctx->pc = 0x141bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141bf4: 0xffbf0010
    ctx->pc = 0x141bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x141bf8: 0x14400004
    ctx->pc = 0x141BF8u;
    {
        const bool branch_taken_0x141bf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x141BFCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x141bf8) {
            ctx->pc = 0x141C0Cu;
            goto label_141c0c;
        }
    }
    ctx->pc = 0x141C00u;
    // 0x141c00: 0x3c040024
    ctx->pc = 0x141c00u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x141c04: 0xc05062a
    ctx->pc = 0x141C04u;
    SET_GPR_U32(ctx, 31, 0x141C0Cu);
    ctx->pc = 0x141C08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958120));
    ctx->pc = 0x1418A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001418A8_0x1418a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141C0Cu; }
    }
    if (ctx->pc != 0x141C0Cu) { return; }
    ctx->pc = 0x141C0Cu;
label_141c0c:
    // 0x141c0c: 0xc0505b4
    ctx->pc = 0x141C0Cu;
    SET_GPR_U32(ctx, 31, 0x141C14u);
    ctx->pc = 0x1416D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001416D0_0x1416d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141C14u; }
    }
    if (ctx->pc != 0x141C14u) { return; }
    ctx->pc = 0x141C14u;
    // 0x141c14: 0x3c020026
    ctx->pc = 0x141c14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x141c18: 0x101840
    ctx->pc = 0x141c18u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 1));
    // 0x141c1c: 0x24424820
    ctx->pc = 0x141c1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18464));
    // 0x141c20: 0x701821
    ctx->pc = 0x141c20u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x141c24: 0xdfb00000
    ctx->pc = 0x141c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141c28: 0x31840
    ctx->pc = 0x141c28u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x141c2c: 0xdfbf0010
    ctx->pc = 0x141c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141c30: 0x711821
    ctx->pc = 0x141c30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x141c34: 0xdfb10008
    ctx->pc = 0x141c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141c38: 0x318c0
    ctx->pc = 0x141c38u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x141c3c: 0x432021
    ctx->pc = 0x141c3cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x141c40: 0x621821
    ctx->pc = 0x141c40u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x141c44: 0xac600000
    ctx->pc = 0x141c44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x141c48: 0xac800004
    ctx->pc = 0x141c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x141c4c: 0x80505ba
    ctx->pc = 0x141C4Cu;
    ctx->pc = 0x141C50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1416E8u;
    sub_001416E8_0x1416e8(rdram, ctx, runtime); return;
    ctx->pc = 0x141C54u;
    // 0x141c54: 0x0
    ctx->pc = 0x141c54u;
    // NOP
}
