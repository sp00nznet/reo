#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016AB80
// Address: 0x16ab80 - 0x16aca8
void sub_0016AB80_0x16ab80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16ab80u;

    // 0x16ab80: 0x27bdffd0
    ctx->pc = 0x16ab80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16ab84: 0xffb10018
    ctx->pc = 0x16ab84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16ab88: 0xa0882d
    ctx->pc = 0x16ab88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab8c: 0x2405003b
    ctx->pc = 0x16ab8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 59));
    // 0x16ab90: 0xffb00010
    ctx->pc = 0x16ab90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16ab94: 0xffb20020
    ctx->pc = 0x16ab94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16ab98: 0xffbf0028
    ctx->pc = 0x16ab98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x16ab9c: 0xc05d58a
    ctx->pc = 0x16AB9Cu;
    SET_GPR_U32(ctx, 31, 0x16ABA4u);
    ctx->pc = 0x16ABA0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ABA4u; }
    }
    if (ctx->pc != 0x16ABA4u) { return; }
    ctx->pc = 0x16ABA4u;
    // 0x16aba4: 0x40802d
    ctx->pc = 0x16aba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aba8: 0x220102d
    ctx->pc = 0x16aba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16abac: 0x24030001
    ctx->pc = 0x16abacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16abb0: 0x1203000e
    ctx->pc = 0x16ABB0u;
    {
        const bool branch_taken_0x16abb0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x16ABB4u;
        SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 16), 2));
        if (branch_taken_0x16abb0) {
            ctx->pc = 0x16ABECu;
            goto label_16abec;
        }
    }
    ctx->pc = 0x16ABB8u;
    // 0x16abb8: 0x5480000d
    ctx->pc = 0x16ABB8u;
    {
        const bool branch_taken_0x16abb8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x16abb8) {
            ctx->pc = 0x16ABBCu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x16ABF0u;
            goto label_16abf0;
        }
    }
    ctx->pc = 0x16ABC0u;
    // 0x16abc0: 0x24020002
    ctx->pc = 0x16abc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16abc4: 0x56020009
    ctx->pc = 0x16ABC4u;
    {
        const bool branch_taken_0x16abc4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x16abc4) {
            ctx->pc = 0x16ABC8u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x16ABECu;
            goto label_16abec;
        }
    }
    ctx->pc = 0x16ABCCu;
    // 0x16abcc: 0x240202d
    ctx->pc = 0x16abccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16abd0: 0x3a0282d
    ctx->pc = 0x16abd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16abd4: 0xc05ad4e
    ctx->pc = 0x16ABD4u;
    SET_GPR_U32(ctx, 31, 0x16ABDCu);
    ctx->pc = 0x16ABD8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x16B538u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B538_0x16b538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ABDCu; }
    }
    if (ctx->pc != 0x16ABDCu) { return; }
    ctx->pc = 0x16ABDCu;
    // 0x16abdc: 0x200102d
    ctx->pc = 0x16abdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16abe0: 0x8fa30004
    ctx->pc = 0x16abe0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16abe4: 0x28630002
    ctx->pc = 0x16abe4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 2));
    // 0x16abe8: 0x223100b
    ctx->pc = 0x16abe8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 17));
label_16abec:
    // 0x16abec: 0xdfb00010
    ctx->pc = 0x16abecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16abf0:
    // 0x16abf0: 0xdfb10018
    ctx->pc = 0x16abf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16abf4: 0xdfb20020
    ctx->pc = 0x16abf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16abf8: 0xdfbf0028
    ctx->pc = 0x16abf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16abfc: 0x3e00008
    ctx->pc = 0x16ABFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AC00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16ABECu: goto label_16abec;
            case 0x16ABF0u: goto label_16abf0;
            case 0x16AC74u: goto label_16ac74;
            case 0x16AC80u: goto label_16ac80;
            case 0x16AC88u: goto label_16ac88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16AC04u;
    // 0x16ac04: 0x0
    ctx->pc = 0x16ac04u;
    // NOP
    // 0x16ac08: 0x27bdffc0
    ctx->pc = 0x16ac08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16ac0c: 0x3a0402d
    ctx->pc = 0x16ac0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ac10: 0xffb00010
    ctx->pc = 0x16ac10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16ac14: 0xffb10018
    ctx->pc = 0x16ac14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16ac18: 0x80882d
    ctx->pc = 0x16ac18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ac1c: 0xffb20020
    ctx->pc = 0x16ac1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16ac20: 0xc0902d
    ctx->pc = 0x16ac20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ac24: 0xffb30028
    ctx->pc = 0x16ac24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x16ac28: 0xe0982d
    ctx->pc = 0x16ac28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ac2c: 0xffbf0030
    ctx->pc = 0x16ac2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16ac30: 0xc05a3e2
    ctx->pc = 0x16AC30u;
    SET_GPR_U32(ctx, 31, 0x16AC38u);
    ctx->pc = 0x16AC34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x168F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168F88_0x168f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC38u; }
    }
    if (ctx->pc != 0x16AC38u) { return; }
    ctx->pc = 0x16AC38u;
    // 0x16ac38: 0x220202d
    ctx->pc = 0x16ac38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ac3c: 0x200282d
    ctx->pc = 0x16ac3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ac40: 0x240302d
    ctx->pc = 0x16ac40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ac44: 0x1040000e
    ctx->pc = 0x16AC44u;
    {
        const bool branch_taken_0x16ac44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16AC48u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ac44) {
            ctx->pc = 0x16AC80u;
            goto label_16ac80;
        }
    }
    ctx->pc = 0x16AC4Cu;
    // 0x16ac4c: 0xc05aebc
    ctx->pc = 0x16AC4Cu;
    SET_GPR_U32(ctx, 31, 0x16AC54u);
    ctx->pc = 0x16BAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016BAF0_0x16baf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC54u; }
    }
    if (ctx->pc != 0x16AC54u) { return; }
    ctx->pc = 0x16AC54u;
    // 0x16ac54: 0x2646ffee
    ctx->pc = 0x16ac54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 4294967278));
    // 0x16ac58: 0x8fa20000
    ctx->pc = 0x16ac58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ac5c: 0x282d
    ctx->pc = 0x16ac5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ac60: 0x220202d
    ctx->pc = 0x16ac60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ac64: 0x10400003
    ctx->pc = 0x16AC64u;
    {
        const bool branch_taken_0x16ac64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16AC68u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 19), 18));
        if (branch_taken_0x16ac64) {
            ctx->pc = 0x16AC74u;
            goto label_16ac74;
        }
    }
    ctx->pc = 0x16AC6Cu;
    // 0x16ac6c: 0xc05ab2a
    ctx->pc = 0x16AC6Cu;
    SET_GPR_U32(ctx, 31, 0x16AC74u);
    ctx->pc = 0x16ACA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ACA8_0x16aca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC74u; }
    }
    if (ctx->pc != 0x16AC74u) { return; }
    ctx->pc = 0x16AC74u;
label_16ac74:
    // 0x16ac74: 0x10000004
    ctx->pc = 0x16AC74u;
    {
        const bool branch_taken_0x16ac74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16AC78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16ac74) {
            ctx->pc = 0x16AC88u;
            goto label_16ac88;
        }
    }
    ctx->pc = 0x16AC7Cu;
    // 0x16ac7c: 0x0
    ctx->pc = 0x16ac7cu;
    // NOP
label_16ac80:
    // 0x16ac80: 0xc05ab2a
    ctx->pc = 0x16AC80u;
    SET_GPR_U32(ctx, 31, 0x16AC88u);
    ctx->pc = 0x16AC84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16ACA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ACA8_0x16aca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC88u; }
    }
    if (ctx->pc != 0x16AC88u) { return; }
    ctx->pc = 0x16AC88u;
label_16ac88:
    // 0x16ac88: 0xdfb00010
    ctx->pc = 0x16ac88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ac8c: 0xdfb10018
    ctx->pc = 0x16ac8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ac90: 0xdfb20020
    ctx->pc = 0x16ac90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ac94: 0xdfb30028
    ctx->pc = 0x16ac94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16ac98: 0xdfbf0030
    ctx->pc = 0x16ac98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ac9c: 0x3e00008
    ctx->pc = 0x16AC9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16ACA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16ABECu: goto label_16abec;
            case 0x16ABF0u: goto label_16abf0;
            case 0x16AC74u: goto label_16ac74;
            case 0x16AC80u: goto label_16ac80;
            case 0x16AC88u: goto label_16ac88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16ACA4u;
    // 0x16aca4: 0x0
    ctx->pc = 0x16aca4u;
    // NOP
}
