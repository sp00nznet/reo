#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_10a730
// Address: 0x10a730 - 0x10a790
void entry_10a730_0x10a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10a730u;

    // 0x10a730: 0x27bdffe0
    ctx->pc = 0x10a730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a734: 0x3c020037
    ctx->pc = 0x10a734u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x10a738: 0xffb00000
    ctx->pc = 0x10a738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a73c: 0x80802d
    ctx->pc = 0x10a73cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a740: 0xffb10008
    ctx->pc = 0x10a740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10a744: 0x2451f0dc
    ctx->pc = 0x10a744u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294963420));
    // 0x10a748: 0xa0202d
    ctx->pc = 0x10a748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a74c: 0xc0282d
    ctx->pc = 0x10a74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a750: 0xffbf0010
    ctx->pc = 0x10a750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10a754: 0xc04537e
    ctx->pc = 0x10A754u;
    SET_GPR_U32(ctx, 31, 0x10A75Cu);
    ctx->pc = 0x10A758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x114DF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114DF8_0x114df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A75Cu; }
    }
    if (ctx->pc != 0x10A75Cu) { return; }
    ctx->pc = 0x10A75Cu;
    // 0x10a75c: 0x40182d
    ctx->pc = 0x10a75cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a760: 0x2404ffff
    ctx->pc = 0x10a760u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10a764: 0x54640005
    ctx->pc = 0x10A764u;
    {
        const bool branch_taken_0x10a764 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x10a764) {
            ctx->pc = 0x10A768u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x10A77Cu;
            goto label_10a77c;
        }
    }
    ctx->pc = 0x10A76Cu;
    // 0x10a76c: 0x8e230000
    ctx->pc = 0x10a76cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10a770: 0x54600001
    ctx->pc = 0x10A770u;
    {
        const bool branch_taken_0x10a770 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x10a770) {
            ctx->pc = 0x10A774u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->pc = 0x10A778u;
            goto label_10a778;
        }
    }
    ctx->pc = 0x10A778u;
label_10a778:
    // 0x10a778: 0xdfb00000
    ctx->pc = 0x10a778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10a77c:
    // 0x10a77c: 0xdfb10008
    ctx->pc = 0x10a77cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a780: 0xdfbf0010
    ctx->pc = 0x10a780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a784: 0x3e00008
    ctx->pc = 0x10A784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A788u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A778u: goto label_10a778;
            case 0x10A77Cu: goto label_10a77c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A78Cu;
    // 0x10a78c: 0x0
    ctx->pc = 0x10a78cu;
    // NOP
}
