#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013BE80
// Address: 0x13be80 - 0x13bf98
void sub_0013BE80_0x13be80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13be80u;

    // 0x13be80: 0x27bdffe0
    ctx->pc = 0x13be80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13be84: 0xffb10008
    ctx->pc = 0x13be84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13be88: 0xa0882d
    ctx->pc = 0x13be88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13be8c: 0xffb20010
    ctx->pc = 0x13be8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13be90: 0x80902d
    ctx->pc = 0x13be90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13be94: 0xffb00000
    ctx->pc = 0x13be94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13be98: 0xffbf0018
    ctx->pc = 0x13be98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13be9c: 0xc04ef6e
    ctx->pc = 0x13BE9Cu;
    SET_GPR_U32(ctx, 31, 0x13BEA4u);
    ctx->pc = 0x13BEA0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x13BDB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013BDB8_0x13bdb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BEA4u; }
    }
    if (ctx->pc != 0x13BEA4u) { return; }
    ctx->pc = 0x13BEA4u;
    // 0x13bea4: 0x14400004
    ctx->pc = 0x13BEA4u;
    {
        const bool branch_taken_0x13bea4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13BEA8u;
        SET_GPR_U32(ctx, 5, ((uint32_t)34 << 16));
        if (branch_taken_0x13bea4) {
            ctx->pc = 0x13BEB8u;
            goto label_13beb8;
        }
    }
    ctx->pc = 0x13BEACu;
    // 0x13beac: 0x220202d
    ctx->pc = 0x13beacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13beb0: 0xc042bf0
    ctx->pc = 0x13BEB0u;
    SET_GPR_U32(ctx, 31, 0x13BEB8u);
    ctx->pc = 0x13BEB4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959024));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BEB8u; }
    }
    if (ctx->pc != 0x13BEB8u) { return; }
    ctx->pc = 0x13BEB8u;
label_13beb8:
    // 0x13beb8: 0xc04ef8a
    ctx->pc = 0x13BEB8u;
    SET_GPR_U32(ctx, 31, 0x13BEC0u);
    ctx->pc = 0x13BEBCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13BE28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013BE28_0x13be28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BEC0u; }
    }
    if (ctx->pc != 0x13BEC0u) { return; }
    ctx->pc = 0x13BEC0u;
    // 0x13bec0: 0x24030001
    ctx->pc = 0x13bec0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bec4: 0x5443001a
    ctx->pc = 0x13BEC4u;
    {
        const bool branch_taken_0x13bec4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x13bec4) {
            ctx->pc = 0x13BEC8u;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x13BF30u;
            goto label_13bf30;
        }
    }
    ctx->pc = 0x13BECCu;
    // 0x13becc: 0x3c100022
    ctx->pc = 0x13beccu;
    SET_GPR_U32(ctx, 16, ((uint32_t)34 << 16));
    // 0x13bed0: 0x220202d
    ctx->pc = 0x13bed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bed4: 0x2610dea8
    ctx->pc = 0x13bed4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294958760));
    // 0x13bed8: 0xc042aee
    ctx->pc = 0x13BED8u;
    SET_GPR_U32(ctx, 31, 0x13BEE0u);
    ctx->pc = 0x13BEDCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BEE0u; }
    }
    if (ctx->pc != 0x13BEE0u) { return; }
    ctx->pc = 0x13BEE0u;
    // 0x13bee0: 0xc042c56
    ctx->pc = 0x13BEE0u;
    SET_GPR_U32(ctx, 31, 0x13BEE8u);
    ctx->pc = 0x13BEE4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BEE8u; }
    }
    if (ctx->pc != 0x13BEE8u) { return; }
    ctx->pc = 0x13BEE8u;
    // 0x13bee8: 0x2404005c
    ctx->pc = 0x13bee8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 92));
    // 0x13beec: 0x501021
    ctx->pc = 0x13beecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x13bef0: 0x8042ffff
    ctx->pc = 0x13bef0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x13bef4: 0x1044000d
    ctx->pc = 0x13BEF4u;
    {
        const bool branch_taken_0x13bef4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x13BEF8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 47));
        if (branch_taken_0x13bef4) {
            ctx->pc = 0x13BF2Cu;
            goto label_13bf2c;
        }
    }
    ctx->pc = 0x13BEFCu;
    // 0x13befc: 0x1043000c
    ctx->pc = 0x13BEFCu;
    {
        const bool branch_taken_0x13befc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x13BF00u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13befc) {
            ctx->pc = 0x13BF30u;
            goto label_13bf30;
        }
    }
    ctx->pc = 0x13BF04u;
    // 0x13bf04: 0x1040000a
    ctx->pc = 0x13BF04u;
    {
        const bool branch_taken_0x13bf04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x13bf04) {
            ctx->pc = 0x13BF30u;
            goto label_13bf30;
        }
    }
    ctx->pc = 0x13BF0Cu;
    // 0x13bf0c: 0x82420000
    ctx->pc = 0x13bf0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13bf10: 0x10440007
    ctx->pc = 0x13BF10u;
    {
        const bool branch_taken_0x13bf10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x13bf10) {
            ctx->pc = 0x13BF30u;
            goto label_13bf30;
        }
    }
    ctx->pc = 0x13BF18u;
    // 0x13bf18: 0x10430004
    ctx->pc = 0x13BF18u;
    {
        const bool branch_taken_0x13bf18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x13BF1Cu;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x13bf18) {
            ctx->pc = 0x13BF2Cu;
            goto label_13bf2c;
        }
    }
    ctx->pc = 0x13BF20u;
    // 0x13bf20: 0x220202d
    ctx->pc = 0x13bf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bf24: 0xc042aee
    ctx->pc = 0x13BF24u;
    SET_GPR_U32(ctx, 31, 0x13BF2Cu);
    ctx->pc = 0x13BF28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955344));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BF2Cu; }
    }
    if (ctx->pc != 0x13BF2Cu) { return; }
    ctx->pc = 0x13BF2Cu;
label_13bf2c:
    // 0x13bf2c: 0x240282d
    ctx->pc = 0x13bf2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13bf30:
    // 0x13bf30: 0xc042aee
    ctx->pc = 0x13BF30u;
    SET_GPR_U32(ctx, 31, 0x13BF38u);
    ctx->pc = 0x13BF34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BF38u; }
    }
    if (ctx->pc != 0x13BF38u) { return; }
    ctx->pc = 0x13BF38u;
    // 0x13bf38: 0xc042c56
    ctx->pc = 0x13BF38u;
    SET_GPR_U32(ctx, 31, 0x13BF40u);
    ctx->pc = 0x13BF3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BF40u; }
    }
    if (ctx->pc != 0x13BF40u) { return; }
    ctx->pc = 0x13BF40u;
    // 0x13bf40: 0x40302d
    ctx->pc = 0x13bf40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bf44: 0x18c0000d
    ctx->pc = 0x13BF44u;
    {
        const bool branch_taken_0x13bf44 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x13BF48u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13bf44) {
            ctx->pc = 0x13BF7Cu;
            goto label_13bf7c;
        }
    }
    ctx->pc = 0x13BF4Cu;
    // 0x13bf4c: 0x2408005c
    ctx->pc = 0x13bf4cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 92));
    // 0x13bf50: 0x2407002f
    ctx->pc = 0x13bf50u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 47));
    // 0x13bf54: 0x2252021
    ctx->pc = 0x13bf54u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_13bf58:
    // 0x13bf58: 0x24a50001
    ctx->pc = 0x13bf58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x13bf5c: 0x80820000
    ctx->pc = 0x13bf5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13bf60: 0x14480002
    ctx->pc = 0x13BF60u;
    {
        const bool branch_taken_0x13bf60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 8));
        ctx->pc = 0x13BF64u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
        if (branch_taken_0x13bf60) {
            ctx->pc = 0x13BF6Cu;
            goto label_13bf6c;
        }
    }
    ctx->pc = 0x13BF68u;
    // 0x13bf68: 0xa0870000
    ctx->pc = 0x13bf68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
label_13bf6c:
    // 0x13bf6c: 0x0
    ctx->pc = 0x13bf6cu;
    // NOP
    // 0x13bf70: 0x0
    ctx->pc = 0x13bf70u;
    // NOP
    // 0x13bf74: 0x1460fff8
    ctx->pc = 0x13BF74u;
    {
        const bool branch_taken_0x13bf74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x13BF78u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        if (branch_taken_0x13bf74) {
            ctx->pc = 0x13BF58u;
            goto label_13bf58;
        }
    }
    ctx->pc = 0x13BF7Cu;
label_13bf7c:
    // 0x13bf7c: 0xdfb00000
    ctx->pc = 0x13bf7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bf80: 0xdfb10008
    ctx->pc = 0x13bf80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13bf84: 0xdfb20010
    ctx->pc = 0x13bf84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bf88: 0xdfbf0018
    ctx->pc = 0x13bf88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13bf8c: 0x3e00008
    ctx->pc = 0x13BF8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BF90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13BEB8u: goto label_13beb8;
            case 0x13BF2Cu: goto label_13bf2c;
            case 0x13BF30u: goto label_13bf30;
            case 0x13BF58u: goto label_13bf58;
            case 0x13BF6Cu: goto label_13bf6c;
            case 0x13BF7Cu: goto label_13bf7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13BF94u;
    // 0x13bf94: 0x0
    ctx->pc = 0x13bf94u;
    // NOP
}
