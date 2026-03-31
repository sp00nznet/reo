#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00155A88
// Address: 0x155a88 - 0x155b28
void sub_00155A88_0x155a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x155a88u;

    // 0x155a88: 0x27bdffe0
    ctx->pc = 0x155a88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x155a8c: 0xc0382d
    ctx->pc = 0x155a8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155a90: 0xffb00000
    ctx->pc = 0x155a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x155a94: 0x80802d
    ctx->pc = 0x155a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155a98: 0x1030c0
    ctx->pc = 0x155a98u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 16), 3));
    // 0x155a9c: 0xffb10008
    ctx->pc = 0x155a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x155aa0: 0xd01023
    ctx->pc = 0x155aa0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x155aa4: 0xffbf0010
    ctx->pc = 0x155aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x155aa8: 0x21200
    ctx->pc = 0x155aa8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x155aac: 0x24420040
    ctx->pc = 0x155aacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 64));
    // 0x155ab0: 0xe2182b
    ctx->pc = 0x155ab0u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x155ab4: 0x1060000b
    ctx->pc = 0x155AB4u;
    {
        const bool branch_taken_0x155ab4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x155AB8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x155ab4) {
            ctx->pc = 0x155AE4u;
            goto label_155ae4;
        }
    }
    ctx->pc = 0x155ABCu;
    // 0x155abc: 0x40202d
    ctx->pc = 0x155abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ac0: 0xc0182d
    ctx->pc = 0x155ac0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ac4: 0x0
    ctx->pc = 0x155ac4u;
    // NOP
label_155ac8:
    // 0x155ac8: 0x2484f900
    ctx->pc = 0x155ac8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965504));
    // 0x155acc: 0x2463fff8
    ctx->pc = 0x155accu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x155ad0: 0xe4102b
    ctx->pc = 0x155ad0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x155ad4: 0x2610ffff
    ctx->pc = 0x155ad4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x155ad8: 0x0
    ctx->pc = 0x155ad8u;
    // NOP
    // 0x155adc: 0x1440fffa
    ctx->pc = 0x155ADCu;
    {
        const bool branch_taken_0x155adc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x155AE0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x155adc) {
            ctx->pc = 0x155AC8u;
            goto label_155ac8;
        }
    }
    ctx->pc = 0x155AE4u;
label_155ae4:
    // 0x155ae4: 0x2623003f
    ctx->pc = 0x155ae4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 63));
    // 0x155ae8: 0x2402ffc0
    ctx->pc = 0x155ae8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x155aec: 0x628824
    ctx->pc = 0x155aecu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x155af0: 0xd03023
    ctx->pc = 0x155af0u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x155af4: 0x220202d
    ctx->pc = 0x155af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155af8: 0x63200
    ctx->pc = 0x155af8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x155afc: 0xc041f1a
    ctx->pc = 0x155AFCu;
    SET_GPR_U32(ctx, 31, 0x155B04u);
    ctx->pc = 0x155B00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155B04u; }
    }
    if (ctx->pc != 0x155B04u) { return; }
    ctx->pc = 0x155B04u;
    // 0x155b04: 0x3c030026
    ctx->pc = 0x155b04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x155b08: 0x24634c10
    ctx->pc = 0x155b08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 19472));
    // 0x155b0c: 0xdfbf0010
    ctx->pc = 0x155b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155b10: 0xac710044
    ctx->pc = 0x155b10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 17));
    // 0x155b14: 0xac700040
    ctx->pc = 0x155b14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 16));
    // 0x155b18: 0xdfb10008
    ctx->pc = 0x155b18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155b1c: 0xdfb00000
    ctx->pc = 0x155b1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155b20: 0x3e00008
    ctx->pc = 0x155B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155B24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155AC8u: goto label_155ac8;
            case 0x155AE4u: goto label_155ae4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155B28u;
}
