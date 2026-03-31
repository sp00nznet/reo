#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B1A90
// Address: 0x1b1a90 - 0x1b1b40
void sub_001B1A90_0x1b1a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b1a90u;

    // 0x1b1a90: 0x27bdffc0
    ctx->pc = 0x1b1a90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b1a94: 0xffbf0030
    ctx->pc = 0x1b1a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b1a98: 0x7fb20020
    ctx->pc = 0x1b1a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b1a9c: 0x7fb10010
    ctx->pc = 0x1b1a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b1aa0: 0x80902d
    ctx->pc = 0x1b1aa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1aa4: 0x7fb00000
    ctx->pc = 0x1b1aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b1aa8: 0x10000017
    ctx->pc = 0x1B1AA8u;
    {
        const bool branch_taken_0x1b1aa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B1AACu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b1aa8) {
            ctx->pc = 0x1B1B08u;
            goto label_1b1b08;
        }
    }
    ctx->pc = 0x1B1AB0u;
label_1b1ab0:
    // 0x1b1ab0: 0x111040
    ctx->pc = 0x1b1ab0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 1));
    // 0x1b1ab4: 0x3c03004f
    ctx->pc = 0x1b1ab4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)79 << 16));
    // 0x1b1ab8: 0x2423821
    ctx->pc = 0x1b1ab8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b1abc: 0x2463c910
    ctx->pc = 0x1b1abcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953232));
    // 0x1b1ac0: 0x94e40008
    ctx->pc = 0x1b1ac0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1b1ac4: 0x3c02004f
    ctx->pc = 0x1b1ac4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)79 << 16));
    // 0x1b1ac8: 0x2442dd90
    ctx->pc = 0x1b1ac8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958480));
    // 0x1b1acc: 0x24f00008
    ctx->pc = 0x1b1accu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 7), 8));
    // 0x1b1ad0: 0x282d
    ctx->pc = 0x1b1ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ad4: 0x2406004c
    ctx->pc = 0x1b1ad4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 76));
    // 0x1b1ad8: 0x641821
    ctx->pc = 0x1b1ad8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b1adc: 0xa0600000
    ctx->pc = 0x1b1adcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b1ae0: 0x94e40008
    ctx->pc = 0x1b1ae0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1b1ae4: 0x418c0
    ctx->pc = 0x1b1ae4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1b1ae8: 0x641821
    ctx->pc = 0x1b1ae8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b1aec: 0x31840
    ctx->pc = 0x1b1aecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b1af0: 0x641821
    ctx->pc = 0x1b1af0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b1af4: 0x31880
    ctx->pc = 0x1b1af4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b1af8: 0xc041f1a
    ctx->pc = 0x1B1AF8u;
    SET_GPR_U32(ctx, 31, 0x1B1B00u);
    ctx->pc = 0x1B1AFCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B00u; }
    }
    if (ctx->pc != 0x1B1B00u) { return; }
    ctx->pc = 0x1B1B00u;
    // 0x1b1b00: 0xa6000000
    ctx->pc = 0x1b1b00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b1b04: 0x26310001
    ctx->pc = 0x1b1b04u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1b1b08:
    // 0x1b1b08: 0x96430814
    ctx->pc = 0x1b1b08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2068)));
    // 0x1b1b0c: 0x223182a
    ctx->pc = 0x1b1b0cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1b1b10: 0x1460ffe7
    ctx->pc = 0x1B1B10u;
    {
        const bool branch_taken_0x1b1b10 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b1b10) {
            ctx->pc = 0x1B1AB0u;
            goto label_1b1ab0;
        }
    }
    ctx->pc = 0x1B1B18u;
    // 0x1b1b18: 0xa6400814
    ctx->pc = 0x1b1b18u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2068), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b1b1c: 0xdfbf0030
    ctx->pc = 0x1b1b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1b20: 0x7bb20020
    ctx->pc = 0x1b1b20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1b24: 0x7bb10010
    ctx->pc = 0x1b1b24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1b28: 0x7bb00000
    ctx->pc = 0x1b1b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1b2c: 0x3e00008
    ctx->pc = 0x1B1B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1B30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1AB0u: goto label_1b1ab0;
            case 0x1B1B08u: goto label_1b1b08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1B34u;
    // 0x1b1b34: 0x0
    ctx->pc = 0x1b1b34u;
    // NOP
    // 0x1b1b38: 0x0
    ctx->pc = 0x1b1b38u;
    // NOP
    // 0x1b1b3c: 0x0
    ctx->pc = 0x1b1b3cu;
    // NOP
}
