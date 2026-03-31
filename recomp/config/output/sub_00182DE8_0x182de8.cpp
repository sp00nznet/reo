#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00182DE8
// Address: 0x182de8 - 0x182f30
void sub_00182DE8_0x182de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x182de8u;

    // 0x182de8: 0x27bdffa0
    ctx->pc = 0x182de8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x182dec: 0x3c030028
    ctx->pc = 0x182decu;
    SET_GPR_U32(ctx, 3, ((uint32_t)40 << 16));
    // 0x182df0: 0xffb20020
    ctx->pc = 0x182df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x182df4: 0x80902d
    ctx->pc = 0x182df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182df8: 0x24040898
    ctx->pc = 0x182df8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2200));
    // 0x182dfc: 0x121040
    ctx->pc = 0x182dfcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 1));
    // 0x182e00: 0x2442018
    ctx->pc = 0x182e00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x182e04: 0x521021
    ctx->pc = 0x182e04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x182e08: 0x21140
    ctx->pc = 0x182e08u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x182e0c: 0xffb10018
    ctx->pc = 0x182e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x182e10: 0x521021
    ctx->pc = 0x182e10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x182e14: 0xa0882d
    ctx->pc = 0x182e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e18: 0xffb30028
    ctx->pc = 0x182e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x182e1c: 0x21080
    ctx->pc = 0x182e1cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x182e20: 0xffb40030
    ctx->pc = 0x182e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x182e24: 0x3c140023
    ctx->pc = 0x182e24u;
    SET_GPR_U32(ctx, 20, ((uint32_t)35 << 16));
    // 0x182e28: 0x2694fa18
    ctx->pc = 0x182e28u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294965784));
    // 0x182e2c: 0x282a021
    ctx->pc = 0x182e2cu;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x182e30: 0xffb70048
    ctx->pc = 0x182e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x182e34: 0x24775b48
    ctx->pc = 0x182e34u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 3), 23368));
    // 0x182e38: 0xffbe0050
    ctx->pc = 0x182e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x182e3c: 0x24930890
    ctx->pc = 0x182e3cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 4), 2192));
    // 0x182e40: 0xffb00010
    ctx->pc = 0x182e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x182e44: 0x2771021
    ctx->pc = 0x182e44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x182e48: 0xffb50038
    ctx->pc = 0x182e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x182e4c: 0x260f02d
    ctx->pc = 0x182e4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e50: 0xffb60040
    ctx->pc = 0x182e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x182e54: 0xffbf0058
    ctx->pc = 0x182e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x182e58: 0xae200000
    ctx->pc = 0x182e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x182e5c: 0xafa20000
    ctx->pc = 0x182e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x182e60: 0x8e830170
    ctx->pc = 0x182e60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 368)));
    // 0x182e64: 0x0
    ctx->pc = 0x182e64u;
    // NOP
label_182e68:
    // 0x182e68: 0x8fa20000
    ctx->pc = 0x182e68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182e6c: 0x8c500000
    ctx->pc = 0x182e6cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182e70: 0x203102a
    ctx->pc = 0x182e70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x182e74: 0x10400019
    ctx->pc = 0x182E74u;
    {
        const bool branch_taken_0x182e74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x182E78u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
        if (branch_taken_0x182e74) {
            ctx->pc = 0x182EDCu;
            goto label_182edc;
        }
    }
    ctx->pc = 0x182E7Cu;
    // 0x182e7c: 0x3c020028
    ctx->pc = 0x182e7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)40 << 16));
    // 0x182e80: 0x3c158000
    ctx->pc = 0x182e80u;
    SET_GPR_U32(ctx, 21, ((uint32_t)32768 << 16));
    // 0x182e84: 0x24425b48
    ctx->pc = 0x182e84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23368));
    // 0x182e88: 0x3c2b021
    ctx->pc = 0x182e88u;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x182e8c: 0x240202d
    ctx->pc = 0x182e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_182e90:
    // 0x182e90: 0x200282d
    ctx->pc = 0x182e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e94: 0xc060aa6
    ctx->pc = 0x182E94u;
    SET_GPR_U32(ctx, 31, 0x182E9Cu);
    ctx->pc = 0x182E98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182A98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182A98_0x182a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182E9Cu; }
    }
    if (ctx->pc != 0x182E9Cu) { return; }
    ctx->pc = 0x182E9Cu;
    // 0x182e9c: 0x8e230000
    ctx->pc = 0x182e9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x182ea0: 0x552024
    ctx->pc = 0x182ea0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x182ea4: 0x14600015
    ctx->pc = 0x182EA4u;
    {
        const bool branch_taken_0x182ea4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x182EA8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x182ea4) {
            ctx->pc = 0x182EFCu;
            goto label_182efc;
        }
    }
    ctx->pc = 0x182EACu;
    // 0x182eac: 0x54800006
    ctx->pc = 0x182EACu;
    {
        const bool branch_taken_0x182eac = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x182eac) {
            ctx->pc = 0x182EB0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 368)));
            ctx->pc = 0x182EC8u;
            goto label_182ec8;
        }
    }
    ctx->pc = 0x182EB4u;
    // 0x182eb4: 0xae200000
    ctx->pc = 0x182eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x182eb8: 0x200102d
    ctx->pc = 0x182eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ebc: 0x1000000f
    ctx->pc = 0x182EBCu;
    {
        const bool branch_taken_0x182ebc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182EC0u;
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        if (branch_taken_0x182ebc) {
            ctx->pc = 0x182EFCu;
            goto label_182efc;
        }
    }
    ctx->pc = 0x182EC4u;
    // 0x182ec4: 0x0
    ctx->pc = 0x182ec4u;
    // NOP
label_182ec8:
    // 0x182ec8: 0x26100001
    ctx->pc = 0x182ec8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x182ecc: 0x203102a
    ctx->pc = 0x182eccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x182ed0: 0x1440ffef
    ctx->pc = 0x182ED0u;
    {
        const bool branch_taken_0x182ed0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x182ED4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x182ed0) {
            ctx->pc = 0x182E90u;
            goto label_182e90;
        }
    }
    ctx->pc = 0x182ED8u;
    // 0x182ed8: 0x2772021
    ctx->pc = 0x182ed8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
label_182edc:
    // 0x182edc: 0x8c820000
    ctx->pc = 0x182edcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x182ee0: 0x10400003
    ctx->pc = 0x182EE0u;
    {
        const bool branch_taken_0x182ee0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x182EE4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x182ee0) {
            ctx->pc = 0x182EF0u;
            goto label_182ef0;
        }
    }
    ctx->pc = 0x182EE8u;
    // 0x182ee8: 0x1000ffdf
    ctx->pc = 0x182EE8u;
    {
        const bool branch_taken_0x182ee8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182EECu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x182ee8) {
            ctx->pc = 0x182E68u;
            goto label_182e68;
        }
    }
    ctx->pc = 0x182EF0u;
label_182ef0:
    // 0x182ef0: 0x3c038101
    ctx->pc = 0x182ef0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33025 << 16));
    // 0x182ef4: 0x3463001c
    ctx->pc = 0x182ef4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 28));
    // 0x182ef8: 0xae230000
    ctx->pc = 0x182ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_182efc:
    // 0x182efc: 0xdfb00010
    ctx->pc = 0x182efcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182f00: 0xdfb10018
    ctx->pc = 0x182f00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x182f04: 0xdfb20020
    ctx->pc = 0x182f04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182f08: 0xdfb30028
    ctx->pc = 0x182f08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x182f0c: 0xdfb40030
    ctx->pc = 0x182f0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182f10: 0xdfb50038
    ctx->pc = 0x182f10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x182f14: 0xdfb60040
    ctx->pc = 0x182f14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182f18: 0xdfb70048
    ctx->pc = 0x182f18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x182f1c: 0xdfbe0050
    ctx->pc = 0x182f1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182f20: 0xdfbf0058
    ctx->pc = 0x182f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x182f24: 0x3e00008
    ctx->pc = 0x182F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182F28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182E68u: goto label_182e68;
            case 0x182E90u: goto label_182e90;
            case 0x182EC8u: goto label_182ec8;
            case 0x182EDCu: goto label_182edc;
            case 0x182EF0u: goto label_182ef0;
            case 0x182EFCu: goto label_182efc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182F2Cu;
    // 0x182f2c: 0x0
    ctx->pc = 0x182f2cu;
    // NOP
}
