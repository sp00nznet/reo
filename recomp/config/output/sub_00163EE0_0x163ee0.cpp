#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163EE0
// Address: 0x163ee0 - 0x163fd8
void sub_00163EE0_0x163ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163ee0u;

    // 0x163ee0: 0x27bdffe0
    ctx->pc = 0x163ee0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x163ee4: 0x3c050023
    ctx->pc = 0x163ee4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x163ee8: 0xffb10008
    ctx->pc = 0x163ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x163eec: 0x3c060023
    ctx->pc = 0x163eecu;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x163ef0: 0xffb20010
    ctx->pc = 0x163ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x163ef4: 0x24a5ef58
    ctx->pc = 0x163ef4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294963032));
    // 0x163ef8: 0xffb00000
    ctx->pc = 0x163ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x163efc: 0x24c6ef5c
    ctx->pc = 0x163efcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294963036));
    // 0x163f00: 0xffbf0018
    ctx->pc = 0x163f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x163f04: 0x3c040023
    ctx->pc = 0x163f04u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x163f08: 0x2492de54
    ctx->pc = 0x163f08u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 4), 4294958676));
    // 0x163f0c: 0x24040001
    ctx->pc = 0x163f0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x163f10: 0x8ca30000
    ctx->pc = 0x163f10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x163f14: 0x8cc20000
    ctx->pc = 0x163f14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x163f18: 0x8e510000
    ctx->pc = 0x163f18u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x163f1c: 0x24630001
    ctx->pc = 0x163f1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x163f20: 0x24420001
    ctx->pc = 0x163f20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x163f24: 0xaca30000
    ctx->pc = 0x163f24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x163f28: 0xacc20000
    ctx->pc = 0x163f28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x163f2c: 0x5624000f
    ctx->pc = 0x163F2Cu;
    {
        const bool branch_taken_0x163f2c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 4));
        if (branch_taken_0x163f2c) {
            ctx->pc = 0x163F30u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x163F6Cu;
            goto label_163f6c;
        }
    }
    ctx->pc = 0x163F34u;
    // 0x163f34: 0xc05799e
    ctx->pc = 0x163F34u;
    SET_GPR_U32(ctx, 31, 0x163F3Cu);
    ctx->pc = 0x15E678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E678_0x15e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F3Cu; }
    }
    if (ctx->pc != 0x163F3Cu) { return; }
    ctx->pc = 0x163F3Cu;
    // 0x163f3c: 0x24500058
    ctx->pc = 0x163f3cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 88));
    // 0x163f40: 0xc058dce
    ctx->pc = 0x163F40u;
    SET_GPR_U32(ctx, 31, 0x163F48u);
    ctx->pc = 0x163F44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163738u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163738_0x163738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F48u; }
    }
    if (ctx->pc != 0x163F48u) { return; }
    ctx->pc = 0x163F48u;
    // 0x163f48: 0x50400008
    ctx->pc = 0x163F48u;
    {
        const bool branch_taken_0x163f48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x163f48) {
            ctx->pc = 0x163F4Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x163F6Cu;
            goto label_163f6c;
        }
    }
    ctx->pc = 0x163F50u;
    // 0x163f50: 0x8e420000
    ctx->pc = 0x163f50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x163f54: 0x54510004
    ctx->pc = 0x163F54u;
    {
        const bool branch_taken_0x163f54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x163f54) {
            ctx->pc = 0x163F58u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x163F68u;
            goto label_163f68;
        }
    }
    ctx->pc = 0x163F5Cu;
    // 0x163f5c: 0xc05c920
    ctx->pc = 0x163F5Cu;
    SET_GPR_U32(ctx, 31, 0x163F64u);
    ctx->pc = 0x172480u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172480_0x172480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F64u; }
    }
    if (ctx->pc != 0x163F64u) { return; }
    ctx->pc = 0x163F64u;
    // 0x163f64: 0xae000000
    ctx->pc = 0x163f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_163f68:
    // 0x163f68: 0xdfb00000
    ctx->pc = 0x163f68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163f6c:
    // 0x163f6c: 0xdfb10008
    ctx->pc = 0x163f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x163f70: 0xdfb20010
    ctx->pc = 0x163f70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163f74: 0xdfbf0018
    ctx->pc = 0x163f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x163f78: 0x3e00008
    ctx->pc = 0x163F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163F7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163F68u: goto label_163f68;
            case 0x163F6Cu: goto label_163f6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163F80u;
    // 0x163f80: 0x27bdffd0
    ctx->pc = 0x163f80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x163f84: 0xffb00000
    ctx->pc = 0x163f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x163f88: 0xe0802d
    ctx->pc = 0x163f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f8c: 0xffb10008
    ctx->pc = 0x163f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x163f90: 0x80882d
    ctx->pc = 0x163f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f94: 0xffb20010
    ctx->pc = 0x163f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x163f98: 0xa0902d
    ctx->pc = 0x163f98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f9c: 0xffb30018
    ctx->pc = 0x163f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x163fa0: 0xffbf0020
    ctx->pc = 0x163fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x163fa4: 0xc05799e
    ctx->pc = 0x163FA4u;
    SET_GPR_U32(ctx, 31, 0x163FACu);
    ctx->pc = 0x163FA8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15E678u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E678_0x15e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163FACu; }
    }
    if (ctx->pc != 0x163FACu) { return; }
    ctx->pc = 0x163FACu;
    // 0x163fac: 0xac50004c
    ctx->pc = 0x163facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 16));
    // 0x163fb0: 0xac510040
    ctx->pc = 0x163fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 17));
    // 0x163fb4: 0xac520044
    ctx->pc = 0x163fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 18));
    // 0x163fb8: 0xac530048
    ctx->pc = 0x163fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 19));
    // 0x163fbc: 0xdfb00000
    ctx->pc = 0x163fbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163fc0: 0xdfb10008
    ctx->pc = 0x163fc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x163fc4: 0xdfb20010
    ctx->pc = 0x163fc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163fc8: 0xdfb30018
    ctx->pc = 0x163fc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x163fcc: 0xdfbf0020
    ctx->pc = 0x163fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163fd0: 0x3e00008
    ctx->pc = 0x163FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163FD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163F68u: goto label_163f68;
            case 0x163F6Cu: goto label_163f6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163FD8u;
}
