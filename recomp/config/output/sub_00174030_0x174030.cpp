#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00174030
// Address: 0x174030 - 0x1740a0
void sub_00174030_0x174030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x174030u;

    // 0x174030: 0x27bdffe0
    ctx->pc = 0x174030u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174034: 0xffb00000
    ctx->pc = 0x174034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174038: 0xa0802d
    ctx->pc = 0x174038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17403c: 0xffb10008
    ctx->pc = 0x17403cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x174040: 0xffbf0010
    ctx->pc = 0x174040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x174044: 0xc05a78c
    ctx->pc = 0x174044u;
    SET_GPR_U32(ctx, 31, 0x17404Cu);
    ctx->pc = 0x174048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17404Cu; }
    }
    if (ctx->pc != 0x17404Cu) { return; }
    ctx->pc = 0x17404Cu;
    // 0x17404c: 0x3c05ff00
    ctx->pc = 0x17404cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x174050: 0x202d
    ctx->pc = 0x174050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174054: 0x200382d
    ctx->pc = 0x174054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174058: 0x34a50137
    ctx->pc = 0x174058u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 311));
    // 0x17405c: 0x2406000c
    ctx->pc = 0x17405cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
    // 0x174060: 0x10400007
    ctx->pc = 0x174060u;
    {
        const bool branch_taken_0x174060 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174064u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174060) {
            ctx->pc = 0x174080u;
            goto label_174080;
        }
    }
    ctx->pc = 0x174068u;
    // 0x174068: 0xdfb00000
    ctx->pc = 0x174068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17406c: 0xdfb10008
    ctx->pc = 0x17406cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174070: 0xdfbf0010
    ctx->pc = 0x174070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174074: 0x805a704
    ctx->pc = 0x174074u;
    ctx->pc = 0x174078u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x17407Cu;
    // 0x17407c: 0x0
    ctx->pc = 0x17407cu;
    // NOP
label_174080:
    // 0x174080: 0xae200960
    ctx->pc = 0x174080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2400), GPR_U32(ctx, 0));
    // 0x174084: 0x220202d
    ctx->pc = 0x174084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174088: 0xdfb00000
    ctx->pc = 0x174088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17408c: 0x24050006
    ctx->pc = 0x17408cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x174090: 0xdfb10008
    ctx->pc = 0x174090u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174094: 0xdfbf0010
    ctx->pc = 0x174094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174098: 0x805def8
    ctx->pc = 0x174098u;
    ctx->pc = 0x17409Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x177BE0u;
    sub_00177BE0_0x177be0(rdram, ctx, runtime); return;
    ctx->pc = 0x1740A0u;
}
