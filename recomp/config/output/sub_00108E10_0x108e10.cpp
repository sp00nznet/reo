#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00108E10
// Address: 0x108e10 - 0x108ed0
void sub_00108E10_0x108e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108e10u;

    // 0x108e10: 0x27bdffe0
    ctx->pc = 0x108e10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108e14: 0x3c020037
    ctx->pc = 0x108e14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x108e18: 0xffb00000
    ctx->pc = 0x108e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108e1c: 0x80802d
    ctx->pc = 0x108e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e20: 0xffb10008
    ctx->pc = 0x108e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x108e24: 0x2451f0dc
    ctx->pc = 0x108e24u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294963420));
    // 0x108e28: 0xa0202d
    ctx->pc = 0x108e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e2c: 0xc0282d
    ctx->pc = 0x108e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e30: 0xe0302d
    ctx->pc = 0x108e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e34: 0xffbf0010
    ctx->pc = 0x108e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x108e38: 0xc045338
    ctx->pc = 0x108E38u;
    SET_GPR_U32(ctx, 31, 0x108E40u);
    ctx->pc = 0x108E3Cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x114CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114CE0_0x114ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E40u; }
    }
    if (ctx->pc != 0x108E40u) { return; }
    ctx->pc = 0x108E40u;
    // 0x108e40: 0x40202d
    ctx->pc = 0x108e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e44: 0x2403ffff
    ctx->pc = 0x108e44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x108e48: 0x54830005
    ctx->pc = 0x108E48u;
    {
        const bool branch_taken_0x108e48 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x108e48) {
            ctx->pc = 0x108E4Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x108E60u;
            goto label_108e60;
        }
    }
    ctx->pc = 0x108E50u;
    // 0x108e50: 0x8e230000
    ctx->pc = 0x108e50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x108e54: 0x54600001
    ctx->pc = 0x108E54u;
    {
        const bool branch_taken_0x108e54 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x108e54) {
            ctx->pc = 0x108E58u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->pc = 0x108E5Cu;
            goto label_108e5c;
        }
    }
    ctx->pc = 0x108E5Cu;
label_108e5c:
    // 0x108e5c: 0xdfb00000
    ctx->pc = 0x108e5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_108e60:
    // 0x108e60: 0xdfb10008
    ctx->pc = 0x108e60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x108e64: 0xdfbf0010
    ctx->pc = 0x108e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108e68: 0x3e00008
    ctx->pc = 0x108E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108E6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108E5Cu: goto label_108e5c;
            case 0x108E60u: goto label_108e60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108E70u;
    // 0x108e70: 0x27bdffa0
    ctx->pc = 0x108e70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x108e74: 0xffbf0000
    ctx->pc = 0x108e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x108e78: 0xffa60030
    ctx->pc = 0x108e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x108e7c: 0xa0302d
    ctx->pc = 0x108e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e80: 0xffa70038
    ctx->pc = 0x108e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 7));
    // 0x108e84: 0x27a70030
    ctx->pc = 0x108e84u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 48));
    // 0x108e88: 0xffa80040
    ctx->pc = 0x108e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 8));
    // 0x108e8c: 0xffa90048
    ctx->pc = 0x108e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 9));
    // 0x108e90: 0xffaa0050
    ctx->pc = 0x108e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 10));
    // 0x108e94: 0xffab0058
    ctx->pc = 0x108e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 11));
    // 0x108e98: 0xe7ac0010
    ctx->pc = 0x108e98u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x108e9c: 0xe7ad0014
    ctx->pc = 0x108e9cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x108ea0: 0xe7ae0018
    ctx->pc = 0x108ea0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x108ea4: 0xe7af001c
    ctx->pc = 0x108ea4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x108ea8: 0xe7b00020
    ctx->pc = 0x108ea8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x108eac: 0xe7b10024
    ctx->pc = 0x108eacu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x108eb0: 0xe7b20028
    ctx->pc = 0x108eb0u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x108eb4: 0xe7b3002c
    ctx->pc = 0x108eb4u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x108eb8: 0xc043478
    ctx->pc = 0x108EB8u;
    SET_GPR_U32(ctx, 31, 0x108EC0u);
    ctx->pc = 0x108EBCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->pc = 0x10D1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D1E0_0x10d1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108EC0u; }
    }
    if (ctx->pc != 0x108EC0u) { return; }
    ctx->pc = 0x108EC0u;
    // 0x108ec0: 0xdfbf0000
    ctx->pc = 0x108ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108ec4: 0x3e00008
    ctx->pc = 0x108EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108EC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108E5Cu: goto label_108e5c;
            case 0x108E60u: goto label_108e60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108ECCu;
    // 0x108ecc: 0x0
    ctx->pc = 0x108eccu;
    // NOP
}
