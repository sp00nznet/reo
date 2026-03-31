#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011F000
// Address: 0x11f000 - 0x11f128
void sub_0011F000_0x11f000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11f000u;

    // 0x11f000: 0x27bdffa0
    ctx->pc = 0x11f000u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11f004: 0xffb30030
    ctx->pc = 0x11f004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11f008: 0xffb20020
    ctx->pc = 0x11f008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11f00c: 0xe0982d
    ctx->pc = 0x11f00cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f010: 0xffb10010
    ctx->pc = 0x11f010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11f014: 0xc0902d
    ctx->pc = 0x11f014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f018: 0xffb00000
    ctx->pc = 0x11f018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11f01c: 0xa0882d
    ctx->pc = 0x11f01cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f020: 0xffb40040
    ctx->pc = 0x11f020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11f024: 0xffbf0050
    ctx->pc = 0x11f024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11f028: 0xc047598
    ctx->pc = 0x11F028u;
    SET_GPR_U32(ctx, 31, 0x11F030u);
    ctx->pc = 0x11F02Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F030u; }
    }
    if (ctx->pc != 0x11F030u) { return; }
    ctx->pc = 0x11F030u;
    // 0x11f030: 0x200202d
    ctx->pc = 0x11f030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f034: 0x40a02d
    ctx->pc = 0x11f034u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f038: 0x220282d
    ctx->pc = 0x11f038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f03c: 0x240302d
    ctx->pc = 0x11f03cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f040: 0xc047bc2
    ctx->pc = 0x11F040u;
    SET_GPR_U32(ctx, 31, 0x11F048u);
    ctx->pc = 0x11F044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11EF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EF08_0x11ef08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F048u; }
    }
    if (ctx->pc != 0x11F048u) { return; }
    ctx->pc = 0x11F048u;
    // 0x11f048: 0x12800003
    ctx->pc = 0x11F048u;
    {
        const bool branch_taken_0x11f048 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F04Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11f048) {
            ctx->pc = 0x11F058u;
            goto label_11f058;
        }
    }
    ctx->pc = 0x11F050u;
    // 0x11f050: 0xc0475ae
    ctx->pc = 0x11F050u;
    SET_GPR_U32(ctx, 31, 0x11F058u);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F058u; }
    }
    if (ctx->pc != 0x11F058u) { return; }
    ctx->pc = 0x11F058u;
label_11f058:
    // 0x11f058: 0x200102d
    ctx->pc = 0x11f058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f05c: 0xdfbf0050
    ctx->pc = 0x11f05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11f060: 0xdfb40040
    ctx->pc = 0x11f060u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f064: 0xdfb30030
    ctx->pc = 0x11f064u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f068: 0xdfb20020
    ctx->pc = 0x11f068u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f06c: 0xdfb10010
    ctx->pc = 0x11f06cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f070: 0xdfb00000
    ctx->pc = 0x11f070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f074: 0x3e00008
    ctx->pc = 0x11F074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F078u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F058u: goto label_11f058;
            case 0x11F0B8u: goto label_11f0b8;
            case 0x11F110u: goto label_11f110;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F07Cu;
    // 0x11f07c: 0x0
    ctx->pc = 0x11f07cu;
    // NOP
    // 0x11f080: 0x27bdffc0
    ctx->pc = 0x11f080u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11f084: 0xffb10010
    ctx->pc = 0x11f084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11f088: 0xffb00000
    ctx->pc = 0x11f088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11f08c: 0x80882d
    ctx->pc = 0x11f08cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f090: 0xffb20020
    ctx->pc = 0x11f090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11f094: 0xa0802d
    ctx->pc = 0x11f094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f098: 0xffbf0030
    ctx->pc = 0x11f098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11f09c: 0xc0902d
    ctx->pc = 0x11f09cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f0a0: 0xc044210
    ctx->pc = 0x11F0A0u;
    SET_GPR_U32(ctx, 31, 0x11F0A8u);
    ctx->pc = 0x11F0A4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)2250 << 16));
    ctx->pc = 0x110840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00110840_0x110840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F0A8u; }
    }
    if (ctx->pc != 0x11F0A8u) { return; }
    ctx->pc = 0x11F0A8u;
    // 0x11f0a8: 0x2103c
    ctx->pc = 0x11f0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11f0ac: 0x2103f
    ctx->pc = 0x11f0acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11f0b0: 0x56000001
    ctx->pc = 0x11F0B0u;
    {
        const bool branch_taken_0x11f0b0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x11f0b0) {
            ctx->pc = 0x11F0B4u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->pc = 0x11F0B8u;
            goto label_11f0b8;
        }
    }
    ctx->pc = 0x11F0B8u;
label_11f0b8:
    // 0x11f0b8: 0x12400015
    ctx->pc = 0x11F0B8u;
    {
        const bool branch_taken_0x11f0b8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F0BCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)2250 << 16));
        if (branch_taken_0x11f0b8) {
            ctx->pc = 0x11F110u;
            goto label_11f110;
        }
    }
    ctx->pc = 0x11F0C0u;
    // 0x11f0c0: 0x3c0508ca
    ctx->pc = 0x11f0c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)2250 << 16));
    // 0x11f0c4: 0x430019
    ctx->pc = 0x11f0c4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_U32(ctx, 0, (uint32_t)result); }
    // 0x11f0c8: 0x3012
    ctx->pc = 0x11f0c8u;
    SET_GPR_U32(ctx, 6, ctx->lo);
    // 0x11f0cc: 0x1810
    ctx->pc = 0x11f0ccu;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x11f0d0: 0x6303c
    ctx->pc = 0x11f0d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11f0d4: 0x3183c
    ctx->pc = 0x11f0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11f0d8: 0x6303e
    ctx->pc = 0x11f0d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x11f0dc: 0x661825
    ctx->pc = 0x11f0dcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11f0e0: 0x223182f
    ctx->pc = 0x11f0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) - GPR_U64(ctx, 3));
    // 0x11f0e4: 0x31178
    ctx->pc = 0x11f0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 5);
    // 0x11f0e8: 0x43102f
    ctx->pc = 0x11f0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x11f0ec: 0x221b8
    ctx->pc = 0x11f0ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 6);
    // 0x11f0f0: 0x82202f
    ctx->pc = 0x11f0f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x11f0f4: 0x420f8
    ctx->pc = 0x11f0f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 3);
    // 0x11f0f8: 0x83202d
    ctx->pc = 0x11f0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x11f0fc: 0xc044210
    ctx->pc = 0x11F0FCu;
    SET_GPR_U32(ctx, 31, 0x11F104u);
    ctx->pc = 0x11F100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
    ctx->pc = 0x110840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00110840_0x110840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F104u; }
    }
    if (ctx->pc != 0x11F104u) { return; }
    ctx->pc = 0x11F104u;
    // 0x11f104: 0x2103c
    ctx->pc = 0x11f104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11f108: 0x2103f
    ctx->pc = 0x11f108u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11f10c: 0xae420000
    ctx->pc = 0x11f10cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_11f110:
    // 0x11f110: 0xdfbf0030
    ctx->pc = 0x11f110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f114: 0xdfb20020
    ctx->pc = 0x11f114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f118: 0xdfb10010
    ctx->pc = 0x11f118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f11c: 0xdfb00000
    ctx->pc = 0x11f11cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f120: 0x3e00008
    ctx->pc = 0x11F120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F124u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F058u: goto label_11f058;
            case 0x11F0B8u: goto label_11f0b8;
            case 0x11F110u: goto label_11f110;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F128u;
}
