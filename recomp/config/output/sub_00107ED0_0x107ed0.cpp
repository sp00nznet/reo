#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00107ED0
// Address: 0x107ed0 - 0x107fd8
void sub_00107ED0_0x107ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x107ed0u;

    // 0x107ed0: 0x27bdffd0
    ctx->pc = 0x107ed0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x107ed4: 0xc0402d
    ctx->pc = 0x107ed4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ed8: 0xffb10008
    ctx->pc = 0x107ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x107edc: 0xa0882d
    ctx->pc = 0x107edcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ee0: 0xffb30018
    ctx->pc = 0x107ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x107ee4: 0xe0982d
    ctx->pc = 0x107ee4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ee8: 0xffb40020
    ctx->pc = 0x107ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x107eec: 0x80a02d
    ctx->pc = 0x107eecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ef0: 0xffb00000
    ctx->pc = 0x107ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x107ef4: 0x26270014
    ctx->pc = 0x107ef4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 20));
    // 0x107ef8: 0xffb20010
    ctx->pc = 0x107ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x107efc: 0x482d
    ctx->pc = 0x107efcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f00: 0xffbf0028
    ctx->pc = 0x107f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x107f04: 0x8e320010
    ctx->pc = 0x107f04u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_107f08:
    // 0x107f08: 0x8ce30000
    ctx->pc = 0x107f08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x107f0c: 0x25290001
    ctx->pc = 0x107f0cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x107f10: 0x132302a
    ctx->pc = 0x107f10u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 18)));
    // 0x107f14: 0x3064ffff
    ctx->pc = 0x107f14u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 65535));
    // 0x107f18: 0x31c02
    ctx->pc = 0x107f18u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 16));
    // 0x107f1c: 0x881018
    ctx->pc = 0x107f1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x107f20: 0x681818
    ctx->pc = 0x107f20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x107f24: 0x532021
    ctx->pc = 0x107f24u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x107f28: 0x42c02
    ctx->pc = 0x107f28u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 4), 16));
    // 0x107f2c: 0x3084ffff
    ctx->pc = 0x107f2cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x107f30: 0x651821
    ctx->pc = 0x107f30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x107f34: 0x31400
    ctx->pc = 0x107f34u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 16));
    // 0x107f38: 0x39c02
    ctx->pc = 0x107f38u;
    SET_GPR_U32(ctx, 19, SRL32(GPR_U32(ctx, 3), 16));
    // 0x107f3c: 0x441021
    ctx->pc = 0x107f3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x107f40: 0xace20000
    ctx->pc = 0x107f40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x107f44: 0x14c0fff0
    ctx->pc = 0x107F44u;
    {
        const bool branch_taken_0x107f44 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x107F48u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x107f44) {
            ctx->pc = 0x107F08u;
            goto label_107f08;
        }
    }
    ctx->pc = 0x107F4Cu;
    // 0x107f4c: 0x1260001a
    ctx->pc = 0x107F4Cu;
    {
        const bool branch_taken_0x107f4c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x107F50u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x107f4c) {
            ctx->pc = 0x107FB8u;
            goto label_107fb8;
        }
    }
    ctx->pc = 0x107F54u;
    // 0x107f54: 0x8e220008
    ctx->pc = 0x107f54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x107f58: 0x242102a
    ctx->pc = 0x107f58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x107f5c: 0x14400011
    ctx->pc = 0x107F5Cu;
    {
        const bool branch_taken_0x107f5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x107F60u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x107f5c) {
            ctx->pc = 0x107FA4u;
            goto label_107fa4;
        }
    }
    ctx->pc = 0x107F64u;
    // 0x107f64: 0x8e250004
    ctx->pc = 0x107f64u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x107f68: 0x280202d
    ctx->pc = 0x107f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f6c: 0xc041f7e
    ctx->pc = 0x107F6Cu;
    SET_GPR_U32(ctx, 31, 0x107F74u);
    ctx->pc = 0x107F70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x107DF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107DF8_0x107df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107F74u; }
    }
    if (ctx->pc != 0x107F74u) { return; }
    ctx->pc = 0x107F74u;
    // 0x107f74: 0x8e260010
    ctx->pc = 0x107f74u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x107f78: 0x40802d
    ctx->pc = 0x107f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f7c: 0x2625000c
    ctx->pc = 0x107f7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 12));
    // 0x107f80: 0x63080
    ctx->pc = 0x107f80u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x107f84: 0x2604000c
    ctx->pc = 0x107f84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
    // 0x107f88: 0xc041eac
    ctx->pc = 0x107F88u;
    SET_GPR_U32(ctx, 31, 0x107F90u);
    ctx->pc = 0x107F8Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107F90u; }
    }
    if (ctx->pc != 0x107F90u) { return; }
    ctx->pc = 0x107F90u;
    // 0x107f90: 0x280202d
    ctx->pc = 0x107f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f94: 0x220282d
    ctx->pc = 0x107f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f98: 0xc041fa8
    ctx->pc = 0x107F98u;
    SET_GPR_U32(ctx, 31, 0x107FA0u);
    ctx->pc = 0x107F9Cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107EA0_0x107ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107FA0u; }
    }
    if (ctx->pc != 0x107FA0u) { return; }
    ctx->pc = 0x107FA0u;
    // 0x107fa0: 0x121080
    ctx->pc = 0x107fa0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_107fa4:
    // 0x107fa4: 0x26520001
    ctx->pc = 0x107fa4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x107fa8: 0x511021
    ctx->pc = 0x107fa8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x107fac: 0xac530014
    ctx->pc = 0x107facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
    // 0x107fb0: 0xae320010
    ctx->pc = 0x107fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x107fb4: 0x220102d
    ctx->pc = 0x107fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_107fb8:
    // 0x107fb8: 0xdfb00000
    ctx->pc = 0x107fb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107fbc: 0xdfb10008
    ctx->pc = 0x107fbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x107fc0: 0xdfb20010
    ctx->pc = 0x107fc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107fc4: 0xdfb30018
    ctx->pc = 0x107fc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x107fc8: 0xdfb40020
    ctx->pc = 0x107fc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107fcc: 0xdfbf0028
    ctx->pc = 0x107fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x107fd0: 0x3e00008
    ctx->pc = 0x107FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107FD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107F08u: goto label_107f08;
            case 0x107FA4u: goto label_107fa4;
            case 0x107FB8u: goto label_107fb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107FD8u;
}
