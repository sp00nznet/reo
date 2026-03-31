#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C8EB0
// Address: 0x1c8eb0 - 0x1c9040
void sub_001C8EB0_0x1c8eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c8eb0u;

    // 0x1c8eb0: 0x27bdfff0
    ctx->pc = 0x1c8eb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8eb4: 0x3c040034
    ctx->pc = 0x1c8eb4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1c8eb8: 0xffbf0000
    ctx->pc = 0x1c8eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8ebc: 0x2484c6e0
    ctx->pc = 0x1c8ebcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952672));
    // 0x1c8ec0: 0x282d
    ctx->pc = 0x1c8ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ec4: 0xc041f1a
    ctx->pc = 0x1C8EC4u;
    SET_GPR_U32(ctx, 31, 0x1C8ECCu);
    ctx->pc = 0x1C8EC8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8ECCu; }
    }
    if (ctx->pc != 0x1C8ECCu) { return; }
    ctx->pc = 0x1C8ECCu;
    // 0x1c8ecc: 0x3c040034
    ctx->pc = 0x1c8eccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1c8ed0: 0x282d
    ctx->pc = 0x1c8ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ed4: 0x2484c6c0
    ctx->pc = 0x1c8ed4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952640));
    // 0x1c8ed8: 0xc041f1a
    ctx->pc = 0x1C8ED8u;
    SET_GPR_U32(ctx, 31, 0x1C8EE0u);
    ctx->pc = 0x1C8EDCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8EE0u; }
    }
    if (ctx->pc != 0x1C8EE0u) { return; }
    ctx->pc = 0x1C8EE0u;
    // 0x1c8ee0: 0x3c040034
    ctx->pc = 0x1c8ee0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1c8ee4: 0x282d
    ctx->pc = 0x1c8ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ee8: 0x2484b6c0
    ctx->pc = 0x1c8ee8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948544));
    // 0x1c8eec: 0xc041f1a
    ctx->pc = 0x1C8EECu;
    SET_GPR_U32(ctx, 31, 0x1C8EF4u);
    ctx->pc = 0x1C8EF0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4096));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8EF4u; }
    }
    if (ctx->pc != 0x1C8EF4u) { return; }
    ctx->pc = 0x1C8EF4u;
    // 0x1c8ef4: 0x3c040034
    ctx->pc = 0x1c8ef4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1c8ef8: 0x282d
    ctx->pc = 0x1c8ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8efc: 0x2484b670
    ctx->pc = 0x1c8efcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948464));
    // 0x1c8f00: 0xc041f1a
    ctx->pc = 0x1C8F00u;
    SET_GPR_U32(ctx, 31, 0x1C8F08u);
    ctx->pc = 0x1C8F04u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8F08u; }
    }
    if (ctx->pc != 0x1C8F08u) { return; }
    ctx->pc = 0x1C8F08u;
    // 0x1c8f08: 0x3c040034
    ctx->pc = 0x1c8f08u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1c8f0c: 0x282d
    ctx->pc = 0x1c8f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f10: 0x2484b690
    ctx->pc = 0x1c8f10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948496));
    // 0x1c8f14: 0xc041f1a
    ctx->pc = 0x1C8F14u;
    SET_GPR_U32(ctx, 31, 0x1C8F1Cu);
    ctx->pc = 0x1C8F18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 44));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8F1Cu; }
    }
    if (ctx->pc != 0x1C8F1Cu) { return; }
    ctx->pc = 0x1C8F1Cu;
    // 0x1c8f1c: 0x2403ffff
    ctx->pc = 0x1c8f1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8f20: 0x3c010034
    ctx->pc = 0x1c8f20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8f24: 0xac23b694
    ctx->pc = 0x1c8f24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948500), GPR_U32(ctx, 3));
    // 0x1c8f28: 0xdfbf0000
    ctx->pc = 0x1c8f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8f2c: 0x3e00008
    ctx->pc = 0x1C8F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8F30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8FA0u: goto label_1c8fa0;
            case 0x1C8FACu: goto label_1c8fac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8F34u;
    // 0x1c8f34: 0x0
    ctx->pc = 0x1c8f34u;
    // NOP
    // 0x1c8f38: 0x0
    ctx->pc = 0x1c8f38u;
    // NOP
    // 0x1c8f3c: 0x0
    ctx->pc = 0x1c8f3cu;
    // NOP
    // 0x1c8f40: 0x3e00008
    ctx->pc = 0x1C8F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8FA0u: goto label_1c8fa0;
            case 0x1C8FACu: goto label_1c8fac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8F48u;
    // 0x1c8f48: 0x0
    ctx->pc = 0x1c8f48u;
    // NOP
    // 0x1c8f4c: 0x0
    ctx->pc = 0x1c8f4cu;
    // NOP
    // 0x1c8f50: 0x27bdffd0
    ctx->pc = 0x1c8f50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c8f54: 0x3c030001
    ctx->pc = 0x1c8f54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x1c8f58: 0xffbf0020
    ctx->pc = 0x1c8f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c8f5c: 0x3c010034
    ctx->pc = 0x1c8f5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8f60: 0x7fb10010
    ctx->pc = 0x1c8f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c8f64: 0x3463863c
    ctx->pc = 0x1c8f64u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34364));
    // 0x1c8f68: 0x7fb00000
    ctx->pc = 0x1c8f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c8f6c: 0x80882d
    ctx->pc = 0x1c8f6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f70: 0x8c24d158
    ctx->pc = 0x1c8f70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294955352)));
    // 0x1c8f74: 0x3c010034
    ctx->pc = 0x1c8f74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8f78: 0xac23b678
    ctx->pc = 0x1c8f78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948472), GPR_U32(ctx, 3));
    // 0x1c8f7c: 0x8c840000
    ctx->pc = 0x1c8f7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c8f80: 0x24030003
    ctx->pc = 0x1c8f80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8f84: 0x10830006
    ctx->pc = 0x1C8F84u;
    {
        const bool branch_taken_0x1c8f84 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C8F88u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c8f84) {
            ctx->pc = 0x1C8FA0u;
            goto label_1c8fa0;
        }
    }
    ctx->pc = 0x1C8F8Cu;
    // 0x1c8f8c: 0x24030002
    ctx->pc = 0x1c8f8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8f90: 0x10830003
    ctx->pc = 0x1C8F90u;
    {
        const bool branch_taken_0x1c8f90 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c8f90) {
            ctx->pc = 0x1C8FA0u;
            goto label_1c8fa0;
        }
    }
    ctx->pc = 0x1C8F98u;
    // 0x1c8f98: 0x10000004
    ctx->pc = 0x1C8F98u;
    {
        const bool branch_taken_0x1c8f98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c8f98) {
            ctx->pc = 0x1C8FACu;
            goto label_1c8fac;
        }
    }
    ctx->pc = 0x1C8FA0u;
label_1c8fa0:
    // 0x1c8fa0: 0x3c040034
    ctx->pc = 0x1c8fa0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1c8fa4: 0xc075c14
    ctx->pc = 0x1C8FA4u;
    SET_GPR_U32(ctx, 31, 0x1C8FACu);
    ctx->pc = 0x1C8FA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948464));
    ctx->pc = 0x1D7050u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7050_0x1d7050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8FACu; }
    }
    if (ctx->pc != 0x1C8FACu) { return; }
    ctx->pc = 0x1C8FACu;
label_1c8fac:
    // 0x1c8fac: 0x3c010034
    ctx->pc = 0x1c8facu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8fb0: 0x24030064
    ctx->pc = 0x1c8fb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 100));
    // 0x1c8fb4: 0xa031c6c0
    ctx->pc = 0x1c8fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294952640), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c8fb8: 0x3c010034
    ctx->pc = 0x1c8fb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8fbc: 0xa030c6c1
    ctx->pc = 0x1c8fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294952641), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c8fc0: 0x3c010034
    ctx->pc = 0x1c8fc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8fc4: 0xa020c6c2
    ctx->pc = 0x1c8fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294952642), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8fc8: 0x3c010034
    ctx->pc = 0x1c8fc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8fcc: 0xa020c6c3
    ctx->pc = 0x1c8fccu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294952643), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8fd0: 0x3c010034
    ctx->pc = 0x1c8fd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8fd4: 0xa420c6c4
    ctx->pc = 0x1c8fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294952644), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c8fd8: 0x3c010034
    ctx->pc = 0x1c8fd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8fdc: 0xa420c6c6
    ctx->pc = 0x1c8fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294952646), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c8fe0: 0x3c010034
    ctx->pc = 0x1c8fe0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8fe4: 0xa420c6c8
    ctx->pc = 0x1c8fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294952648), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c8fe8: 0x3c010034
    ctx->pc = 0x1c8fe8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8fec: 0xa420c6ca
    ctx->pc = 0x1c8fecu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294952650), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c8ff0: 0x3c010034
    ctx->pc = 0x1c8ff0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8ff4: 0xa420c6cc
    ctx->pc = 0x1c8ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294952652), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c8ff8: 0x3c010034
    ctx->pc = 0x1c8ff8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8ffc: 0xa420c6ce
    ctx->pc = 0x1c8ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294952654), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c9000: 0x3c010034
    ctx->pc = 0x1c9000u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c9004: 0xa420c6d0
    ctx->pc = 0x1c9004u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294952656), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c9008: 0x3c010034
    ctx->pc = 0x1c9008u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c900c: 0x8c24b678
    ctx->pc = 0x1c900cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294948472)));
    // 0x1c9010: 0x83001a
    ctx->pc = 0x1c9010u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1c9014: 0x3c010034
    ctx->pc = 0x1c9014u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c9018: 0x0
    ctx->pc = 0x1c9018u;
    // NOP
    // 0x1c901c: 0x1812
    ctx->pc = 0x1c901cu;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1c9020: 0xa423c6d2
    ctx->pc = 0x1c9020u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294952658), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c9024: 0xdfbf0020
    ctx->pc = 0x1c9024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9028: 0x7bb10010
    ctx->pc = 0x1c9028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c902c: 0x7bb00000
    ctx->pc = 0x1c902cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9030: 0x3e00008
    ctx->pc = 0x1C9030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9034u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8FA0u: goto label_1c8fa0;
            case 0x1C8FACu: goto label_1c8fac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C9038u;
    // 0x1c9038: 0x0
    ctx->pc = 0x1c9038u;
    // NOP
    // 0x1c903c: 0x0
    ctx->pc = 0x1c903cu;
    // NOP
}
