#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001936D0
// Address: 0x1936d0 - 0x193770
void sub_001936D0_0x1936d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1936d0u;

label_1936d0:
    // 0x1936d0: 0x27bdffc0
    ctx->pc = 0x1936d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1936d4: 0xffbf0030
    ctx->pc = 0x1936d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1936d8: 0x7fb20020
    ctx->pc = 0x1936d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1936dc: 0x7fb10010
    ctx->pc = 0x1936dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1936e0: 0x80902d
    ctx->pc = 0x1936e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1936e4: 0x7fb00000
    ctx->pc = 0x1936e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1936e8: 0xc0802d
    ctx->pc = 0x1936e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1936ec: 0x12000002
    ctx->pc = 0x1936ECu;
    {
        const bool branch_taken_0x1936ec = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1936F0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1936ec) {
            ctx->pc = 0x1936F8u;
            goto label_1936f8;
        }
    }
    ctx->pc = 0x1936F4u;
    // 0x1936f4: 0xae3000c8
    ctx->pc = 0x1936f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 16));
label_1936f8:
    // 0x1936f8: 0x86240182
    ctx->pc = 0x1936f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 386)));
    // 0x1936fc: 0x2403ffff
    ctx->pc = 0x1936fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193700: 0x10830009
    ctx->pc = 0x193700u;
    {
        const bool branch_taken_0x193700 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x193700) {
            ctx->pc = 0x193728u;
            goto label_193728;
        }
    }
    ctx->pc = 0x193708u;
    // 0x193708: 0x41080
    ctx->pc = 0x193708u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x19370c: 0x220302d
    ctx->pc = 0x19370cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193710: 0x2421021
    ctx->pc = 0x193710u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x193714: 0x8c420000
    ctx->pc = 0x193714u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x193718: 0xae2200d0
    ctx->pc = 0x193718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
    // 0x19371c: 0x8e2500d0
    ctx->pc = 0x19371cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x193720: 0xc064db4
    ctx->pc = 0x193720u;
    SET_GPR_U32(ctx, 31, 0x193728u);
    ctx->pc = 0x193724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1936D0u;
    goto label_1936d0;
    ctx->pc = 0x193728u;
label_193728:
    // 0x193728: 0x86240180
    ctx->pc = 0x193728u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x19372c: 0x2403ffff
    ctx->pc = 0x19372cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193730: 0x10830009
    ctx->pc = 0x193730u;
    {
        const bool branch_taken_0x193730 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x193730) {
            ctx->pc = 0x193758u;
            goto label_193758;
        }
    }
    ctx->pc = 0x193738u;
    // 0x193738: 0x41080
    ctx->pc = 0x193738u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x19373c: 0x200302d
    ctx->pc = 0x19373cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193740: 0x2421021
    ctx->pc = 0x193740u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x193744: 0x8c420000
    ctx->pc = 0x193744u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x193748: 0xae2200cc
    ctx->pc = 0x193748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
    // 0x19374c: 0x8e2500cc
    ctx->pc = 0x19374cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x193750: 0xc064db4
    ctx->pc = 0x193750u;
    SET_GPR_U32(ctx, 31, 0x193758u);
    ctx->pc = 0x193754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1936D0u;
    goto label_1936d0;
    ctx->pc = 0x193758u;
label_193758:
    // 0x193758: 0xdfbf0030
    ctx->pc = 0x193758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19375c: 0x7bb20020
    ctx->pc = 0x19375cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193760: 0x7bb10010
    ctx->pc = 0x193760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193764: 0x7bb00000
    ctx->pc = 0x193764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193768: 0x3e00008
    ctx->pc = 0x193768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19376Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1936D0u: goto label_1936d0;
            case 0x1936F8u: goto label_1936f8;
            case 0x193728u: goto label_193728;
            case 0x193758u: goto label_193758;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193770u;
}
