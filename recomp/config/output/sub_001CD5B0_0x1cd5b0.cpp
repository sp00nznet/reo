#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CD5B0
// Address: 0x1cd5b0 - 0x1cd630
void sub_001CD5B0_0x1cd5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cd5b0u;

    // 0x1cd5b0: 0x27bdffe0
    ctx->pc = 0x1cd5b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cd5b4: 0x80382d
    ctx->pc = 0x1cd5b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd5b8: 0xffbf0010
    ctx->pc = 0x1cd5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cd5bc: 0x3c030023
    ctx->pc = 0x1cd5bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1cd5c0: 0x7fb00000
    ctx->pc = 0x1cd5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cd5c4: 0x62080
    ctx->pc = 0x1cd5c4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cd5c8: 0x246366d0
    ctx->pc = 0x1cd5c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 26320));
    // 0x1cd5cc: 0xc0802d
    ctx->pc = 0x1cd5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd5d0: 0x641821
    ctx->pc = 0x1cd5d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cd5d4: 0x51202
    ctx->pc = 0x1cd5d4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 8));
    // 0x1cd5d8: 0x8c660000
    ctx->pc = 0x1cd5d8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cd5dc: 0x30aa00ff
    ctx->pc = 0x1cd5dcu;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 5), 255));
    // 0x1cd5e0: 0x3c040034
    ctx->pc = 0x1cd5e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1cd5e4: 0x3c050025
    ctx->pc = 0x1cd5e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1cd5e8: 0x304900ff
    ctx->pc = 0x1cd5e8u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 2), 255));
    // 0x1cd5ec: 0x24840af0
    ctx->pc = 0x1cd5ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2800));
    // 0x1cd5f0: 0x24a55ff0
    ctx->pc = 0x1cd5f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24560));
    // 0x1cd5f4: 0xc042a0c
    ctx->pc = 0x1CD5F4u;
    SET_GPR_U32(ctx, 31, 0x1CD5FCu);
    ctx->pc = 0x1CD5F8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5FCu; }
    }
    if (ctx->pc != 0x1CD5FCu) { return; }
    ctx->pc = 0x1CD5FCu;
    // 0x1cd5fc: 0x16000005
    ctx->pc = 0x1CD5FCu;
    {
        const bool branch_taken_0x1cd5fc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD600u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x1cd5fc) {
            ctx->pc = 0x1CD614u;
            goto label_1cd614;
        }
    }
    ctx->pc = 0x1CD604u;
    // 0x1cd604: 0x3c050025
    ctx->pc = 0x1cd604u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1cd608: 0x24840af0
    ctx->pc = 0x1cd608u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2800));
    // 0x1cd60c: 0xc042aee
    ctx->pc = 0x1CD60Cu;
    SET_GPR_U32(ctx, 31, 0x1CD614u);
    ctx->pc = 0x1CD610u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24480));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD614u; }
    }
    if (ctx->pc != 0x1CD614u) { return; }
    ctx->pc = 0x1CD614u;
label_1cd614:
    // 0x1cd614: 0xdfbf0010
    ctx->pc = 0x1cd614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd618: 0x3c020034
    ctx->pc = 0x1cd618u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1cd61c: 0x7bb00000
    ctx->pc = 0x1cd61cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd620: 0x24420af0
    ctx->pc = 0x1cd620u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2800));
    // 0x1cd624: 0x3e00008
    ctx->pc = 0x1CD624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD628u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD614u: goto label_1cd614;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CD62Cu;
    // 0x1cd62c: 0x0
    ctx->pc = 0x1cd62cu;
    // NOP
}
