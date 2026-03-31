#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00195E50
// Address: 0x195e50 - 0x196010
void sub_00195E50_0x195e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x195e50u;

    // 0x195e50: 0x27bdfff0
    ctx->pc = 0x195e50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195e54: 0xffbf0000
    ctx->pc = 0x195e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195e58: 0xc068334
    ctx->pc = 0x195E58u;
    SET_GPR_U32(ctx, 31, 0x195E60u);
    ctx->pc = 0x1A0CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0CD0_0x1a0cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E60u; }
    }
    if (ctx->pc != 0x195E60u) { return; }
    ctx->pc = 0x195E60u;
    // 0x195e60: 0x3c01002a
    ctx->pc = 0x195e60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x195e64: 0x8c24fe68
    ctx->pc = 0x195e64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
    // 0x195e68: 0xc065eec
    ctx->pc = 0x195E68u;
    SET_GPR_U32(ctx, 31, 0x195E70u);
    ctx->pc = 0x195E6Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x197BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00197BB0_0x197bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E70u; }
    }
    if (ctx->pc != 0x195E70u) { return; }
    ctx->pc = 0x195E70u;
    // 0x195e70: 0x3c01002a
    ctx->pc = 0x195e70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x195e74: 0x8c24fe68
    ctx->pc = 0x195e74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
    // 0x195e78: 0xc065e40
    ctx->pc = 0x195E78u;
    SET_GPR_U32(ctx, 31, 0x195E80u);
    ctx->pc = 0x195E7Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x197900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00197900_0x197900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E80u; }
    }
    if (ctx->pc != 0x195E80u) { return; }
    ctx->pc = 0x195E80u;
    // 0x195e80: 0x3c01002a
    ctx->pc = 0x195e80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x195e84: 0x8c24fe68
    ctx->pc = 0x195e84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
    // 0x195e88: 0xc065de0
    ctx->pc = 0x195E88u;
    SET_GPR_U32(ctx, 31, 0x195E90u);
    ctx->pc = 0x195E8Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x197780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00197780_0x197780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E90u; }
    }
    if (ctx->pc != 0x195E90u) { return; }
    ctx->pc = 0x195E90u;
    // 0x195e90: 0x3c01002a
    ctx->pc = 0x195e90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x195e94: 0x202d
    ctx->pc = 0x195e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e98: 0x8c26fed8
    ctx->pc = 0x195e98u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294967000)));
    // 0x195e9c: 0x282d
    ctx->pc = 0x195e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ea0: 0x3c01002a
    ctx->pc = 0x195ea0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x195ea4: 0x8c27fed0
    ctx->pc = 0x195ea4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 4294966992)));
    // 0x195ea8: 0xc065d24
    ctx->pc = 0x195EA8u;
    SET_GPR_U32(ctx, 31, 0x195EB0u);
    ctx->pc = 0x195EACu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x197490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00197490_0x197490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195EB0u; }
    }
    if (ctx->pc != 0x195EB0u) { return; }
    ctx->pc = 0x195EB0u;
    // 0x195eb0: 0x3c01002a
    ctx->pc = 0x195eb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x195eb4: 0xc0660b4
    ctx->pc = 0x195EB4u;
    SET_GPR_U32(ctx, 31, 0x195EBCu);
    ctx->pc = 0x195EB8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966840)));
    ctx->pc = 0x1982D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001982D0_0x1982d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195EBCu; }
    }
    if (ctx->pc != 0x195EBCu) { return; }
    ctx->pc = 0x195EBCu;
    // 0x195ebc: 0x3c01002a
    ctx->pc = 0x195ebcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x195ec0: 0x8c24fe68
    ctx->pc = 0x195ec0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
    // 0x195ec4: 0xc0660e4
    ctx->pc = 0x195EC4u;
    SET_GPR_U32(ctx, 31, 0x195ECCu);
    ctx->pc = 0x195EC8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198390u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198390_0x198390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195ECCu; }
    }
    if (ctx->pc != 0x195ECCu) { return; }
    ctx->pc = 0x195ECCu;
    // 0x195ecc: 0x3c010029
    ctx->pc = 0x195eccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x195ed0: 0xc068338
    ctx->pc = 0x195ED0u;
    SET_GPR_U32(ctx, 31, 0x195ED8u);
    ctx->pc = 0x195ED4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16784), GPR_U32(ctx, 0));
    ctx->pc = 0x1A0CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0CE0_0x1a0ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195ED8u; }
    }
    if (ctx->pc != 0x195ED8u) { return; }
    ctx->pc = 0x195ED8u;
    // 0x195ed8: 0x3c01002a
    ctx->pc = 0x195ed8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x195edc: 0x282d
    ctx->pc = 0x195edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ee0: 0x8c23fed8
    ctx->pc = 0x195ee0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294967000)));
    // 0x195ee4: 0x10000002
    ctx->pc = 0x195EE4u;
    {
        const bool branch_taken_0x195ee4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x195EE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x195ee4) {
            ctx->pc = 0x195EF0u;
            goto label_195ef0;
        }
    }
    ctx->pc = 0x195EECu;
label_195eec:
    // 0x195eec: 0x24a50001
    ctx->pc = 0x195eecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_195ef0:
    // 0x195ef0: 0xa22004
    ctx->pc = 0x195ef0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x195ef4: 0x83082a
    ctx->pc = 0x195ef4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x195ef8: 0x0
    ctx->pc = 0x195ef8u;
    // NOP
    // 0x195efc: 0x0
    ctx->pc = 0x195efcu;
    // NOP
    // 0x195f00: 0x1420fffa
    ctx->pc = 0x195F00u;
    {
        const bool branch_taken_0x195f00 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x195f00) {
            ctx->pc = 0x195EECu;
            goto label_195eec;
        }
    }
    ctx->pc = 0x195F08u;
    // 0x195f08: 0x44830800
    ctx->pc = 0x195f08u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x195f0c: 0x3c01002a
    ctx->pc = 0x195f0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x195f10: 0x44840000
    ctx->pc = 0x195f10u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x195f14: 0x8c25fed0
    ctx->pc = 0x195f14u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294966992)));
    // 0x195f18: 0x46800860
    ctx->pc = 0x195f18u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x195f1c: 0x182d
    ctx->pc = 0x195f1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f20: 0x24020001
    ctx->pc = 0x195f20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x195f24: 0x46800020
    ctx->pc = 0x195f24u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x195f28: 0x46000803
    ctx->pc = 0x195f28u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x195f2c: 0x0
    ctx->pc = 0x195f2cu;
    // NOP
    // 0x195f30: 0x3c010029
    ctx->pc = 0x195f30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x195f34: 0x10000002
    ctx->pc = 0x195F34u;
    {
        const bool branch_taken_0x195f34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x195F38u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16776), bits); }
        if (branch_taken_0x195f34) {
            ctx->pc = 0x195F40u;
            goto label_195f40;
        }
    }
    ctx->pc = 0x195F3Cu;
label_195f3c:
    // 0x195f3c: 0x24630001
    ctx->pc = 0x195f3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_195f40:
    // 0x195f40: 0x622004
    ctx->pc = 0x195f40u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x195f44: 0x85082a
    ctx->pc = 0x195f44u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 5)));
    // 0x195f48: 0x0
    ctx->pc = 0x195f48u;
    // NOP
    // 0x195f4c: 0x0
    ctx->pc = 0x195f4cu;
    // NOP
    // 0x195f50: 0x1420fffa
    ctx->pc = 0x195F50u;
    {
        const bool branch_taken_0x195f50 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x195f50) {
            ctx->pc = 0x195F3Cu;
            goto label_195f3c;
        }
    }
    ctx->pc = 0x195F58u;
    // 0x195f58: 0x44850800
    ctx->pc = 0x195f58u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 5);
    // 0x195f5c: 0x3c010029
    ctx->pc = 0x195f5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x195f60: 0x44840000
    ctx->pc = 0x195f60u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x195f64: 0xac204e04
    ctx->pc = 0x195f64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19972), GPR_U32(ctx, 0));
    // 0x195f68: 0x46800860
    ctx->pc = 0x195f68u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x195f6c: 0x3c010029
    ctx->pc = 0x195f6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x195f70: 0xac204e08
    ctx->pc = 0x195f70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19976), GPR_U32(ctx, 0));
    // 0x195f74: 0x3c033f80
    ctx->pc = 0x195f74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x195f78: 0x3c010029
    ctx->pc = 0x195f78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x195f7c: 0xac204e0c
    ctx->pc = 0x195f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19980), GPR_U32(ctx, 0));
    // 0x195f80: 0x3c010029
    ctx->pc = 0x195f80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x195f84: 0xac204e10
    ctx->pc = 0x195f84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19984), GPR_U32(ctx, 0));
    // 0x195f88: 0x46800020
    ctx->pc = 0x195f88u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x195f8c: 0x3c010029
    ctx->pc = 0x195f8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x195f90: 0xac234e00
    ctx->pc = 0x195f90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19968), GPR_U32(ctx, 3));
    // 0x195f94: 0x3c010029
    ctx->pc = 0x195f94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x195f98: 0xac234e14
    ctx->pc = 0x195f98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19988), GPR_U32(ctx, 3));
    // 0x195f9c: 0x3c010029
    ctx->pc = 0x195f9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x195fa0: 0xac204e18
    ctx->pc = 0x195fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19992), GPR_U32(ctx, 0));
    // 0x195fa4: 0x46000803
    ctx->pc = 0x195fa4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x195fa8: 0x3c010029
    ctx->pc = 0x195fa8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x195fac: 0xac204e1c
    ctx->pc = 0x195facu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19996), GPR_U32(ctx, 0));
    // 0x195fb0: 0x3c010029
    ctx->pc = 0x195fb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x195fb4: 0xac204e20
    ctx->pc = 0x195fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20000), GPR_U32(ctx, 0));
    // 0x195fb8: 0x3c010029
    ctx->pc = 0x195fb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x195fbc: 0xac204e24
    ctx->pc = 0x195fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20004), GPR_U32(ctx, 0));
    // 0x195fc0: 0x3c010029
    ctx->pc = 0x195fc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x195fc4: 0xac234e28
    ctx->pc = 0x195fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20008), GPR_U32(ctx, 3));
    // 0x195fc8: 0x3c010029
    ctx->pc = 0x195fc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x195fcc: 0xac234e3c
    ctx->pc = 0x195fccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20028), GPR_U32(ctx, 3));
    // 0x195fd0: 0x3c010029
    ctx->pc = 0x195fd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x195fd4: 0xac204e2c
    ctx->pc = 0x195fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20012), GPR_U32(ctx, 0));
    // 0x195fd8: 0x3c010029
    ctx->pc = 0x195fd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x195fdc: 0xac204e30
    ctx->pc = 0x195fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20016), GPR_U32(ctx, 0));
    // 0x195fe0: 0x3c010029
    ctx->pc = 0x195fe0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x195fe4: 0xac204e34
    ctx->pc = 0x195fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20020), GPR_U32(ctx, 0));
    // 0x195fe8: 0x3c010029
    ctx->pc = 0x195fe8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x195fec: 0xac204e38
    ctx->pc = 0x195fecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20024), GPR_U32(ctx, 0));
    // 0x195ff0: 0x3c010029
    ctx->pc = 0x195ff0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x195ff4: 0xe4204180
    ctx->pc = 0x195ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16768), bits); }
    // 0x195ff8: 0xdfbf0000
    ctx->pc = 0x195ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195ffc: 0x3e00008
    ctx->pc = 0x195FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196000u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195EECu: goto label_195eec;
            case 0x195EF0u: goto label_195ef0;
            case 0x195F3Cu: goto label_195f3c;
            case 0x195F40u: goto label_195f40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196004u;
    // 0x196004: 0x0
    ctx->pc = 0x196004u;
    // NOP
    // 0x196008: 0x0
    ctx->pc = 0x196008u;
    // NOP
    // 0x19600c: 0x0
    ctx->pc = 0x19600cu;
    // NOP
}
