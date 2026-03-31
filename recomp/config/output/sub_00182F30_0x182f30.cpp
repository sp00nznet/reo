#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00182F30
// Address: 0x182f30 - 0x183008
void sub_00182F30_0x182f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x182f30u;

    // 0x182f30: 0x27bdffc0
    ctx->pc = 0x182f30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x182f34: 0x24020898
    ctx->pc = 0x182f34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2200));
    // 0x182f38: 0xffb30018
    ctx->pc = 0x182f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x182f3c: 0x80982d
    ctx->pc = 0x182f3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f40: 0x131840
    ctx->pc = 0x182f40u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 1));
    // 0x182f44: 0x2621018
    ctx->pc = 0x182f44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x182f48: 0x731821
    ctx->pc = 0x182f48u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x182f4c: 0xffb20010
    ctx->pc = 0x182f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x182f50: 0x31940
    ctx->pc = 0x182f50u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x182f54: 0xa0902d
    ctx->pc = 0x182f54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f58: 0x731821
    ctx->pc = 0x182f58u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x182f5c: 0xffb00000
    ctx->pc = 0x182f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182f60: 0xffb10008
    ctx->pc = 0x182f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x182f64: 0xffb40020
    ctx->pc = 0x182f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x182f68: 0x31880
    ctx->pc = 0x182f68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x182f6c: 0xffb50028
    ctx->pc = 0x182f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x182f70: 0x3c140023
    ctx->pc = 0x182f70u;
    SET_GPR_U32(ctx, 20, ((uint32_t)35 << 16));
    // 0x182f74: 0x2694fa18
    ctx->pc = 0x182f74u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294965784));
    // 0x182f78: 0x283a021
    ctx->pc = 0x182f78u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x182f7c: 0xffbf0030
    ctx->pc = 0x182f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x182f80: 0xae400000
    ctx->pc = 0x182f80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x182f84: 0x3c100028
    ctx->pc = 0x182f84u;
    SET_GPR_U32(ctx, 16, ((uint32_t)40 << 16));
    // 0x182f88: 0x2028021
    ctx->pc = 0x182f88u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x182f8c: 0x8e1063d8
    ctx->pc = 0x182f8cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 25560)));
    // 0x182f90: 0x8e820170
    ctx->pc = 0x182f90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 368)));
    // 0x182f94: 0x202102a
    ctx->pc = 0x182f94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x182f98: 0x10400011
    ctx->pc = 0x182F98u;
    {
        const bool branch_taken_0x182f98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x182F9Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x182f98) {
            ctx->pc = 0x182FE0u;
            goto label_182fe0;
        }
    }
    ctx->pc = 0x182FA0u;
    // 0x182fa0: 0x3c158000
    ctx->pc = 0x182fa0u;
    SET_GPR_U32(ctx, 21, ((uint32_t)32768 << 16));
    // 0x182fa4: 0x200282d
    ctx->pc = 0x182fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_182fa8:
    // 0x182fa8: 0x26100001
    ctx->pc = 0x182fa8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x182fac: 0x260202d
    ctx->pc = 0x182facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182fb0: 0xc060aa6
    ctx->pc = 0x182FB0u;
    SET_GPR_U32(ctx, 31, 0x182FB8u);
    ctx->pc = 0x182FB4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182A98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182A98_0x182a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182FB8u; }
    }
    if (ctx->pc != 0x182FB8u) { return; }
    ctx->pc = 0x182FB8u;
    // 0x182fb8: 0x26230001
    ctx->pc = 0x182fb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
    // 0x182fbc: 0x8e440000
    ctx->pc = 0x182fbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x182fc0: 0x551024
    ctx->pc = 0x182fc0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x182fc4: 0x62880a
    ctx->pc = 0x182fc4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
    // 0x182fc8: 0x14800006
    ctx->pc = 0x182FC8u;
    {
        const bool branch_taken_0x182fc8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x182FCCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x182fc8) {
            ctx->pc = 0x182FE4u;
            goto label_182fe4;
        }
    }
    ctx->pc = 0x182FD0u;
    // 0x182fd0: 0x8e820170
    ctx->pc = 0x182fd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 368)));
    // 0x182fd4: 0x202102a
    ctx->pc = 0x182fd4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x182fd8: 0x1440fff3
    ctx->pc = 0x182FD8u;
    {
        const bool branch_taken_0x182fd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x182FDCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x182fd8) {
            ctx->pc = 0x182FA8u;
            goto label_182fa8;
        }
    }
    ctx->pc = 0x182FE0u;
label_182fe0:
    // 0x182fe0: 0x220102d
    ctx->pc = 0x182fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_182fe4:
    // 0x182fe4: 0xdfb00000
    ctx->pc = 0x182fe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182fe8: 0xdfb10008
    ctx->pc = 0x182fe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182fec: 0xdfb20010
    ctx->pc = 0x182fecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182ff0: 0xdfb30018
    ctx->pc = 0x182ff0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x182ff4: 0xdfb40020
    ctx->pc = 0x182ff4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182ff8: 0xdfb50028
    ctx->pc = 0x182ff8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x182ffc: 0xdfbf0030
    ctx->pc = 0x182ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183000: 0x3e00008
    ctx->pc = 0x183000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183004u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182FA8u: goto label_182fa8;
            case 0x182FE0u: goto label_182fe0;
            case 0x182FE4u: goto label_182fe4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x183008u;
}
