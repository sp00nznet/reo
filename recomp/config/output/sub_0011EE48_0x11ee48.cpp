#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011EE48
// Address: 0x11ee48 - 0x11ef08
void sub_0011EE48_0x11ee48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11ee48u;

label_11ee48:
    // 0x11ee48: 0x27bdffd0
    ctx->pc = 0x11ee48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11ee4c: 0x41282
    ctx->pc = 0x11ee4cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 10));
    // 0x11ee50: 0xffb10010
    ctx->pc = 0x11ee50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11ee54: 0xffbf0020
    ctx->pc = 0x11ee54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11ee58: 0x28980
    ctx->pc = 0x11ee58u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 2), 6));
    // 0x11ee5c: 0x4800005
    ctx->pc = 0x11EE5Cu;
    {
        const bool branch_taken_0x11ee5c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11EE60u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x11ee5c) {
            ctx->pc = 0x11EE74u;
            goto label_11ee74;
        }
    }
    ctx->pc = 0x11EE64u;
    // 0x11ee64: 0x8e230008
    ctx->pc = 0x11ee64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x11ee68: 0x308203ff
    ctx->pc = 0x11ee68u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1023));
    // 0x11ee6c: 0x50430003
    ctx->pc = 0x11EE6Cu;
    {
        const bool branch_taken_0x11ee6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x11ee6c) {
            ctx->pc = 0x11EE70u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->pc = 0x11EE7Cu;
            goto label_11ee7c;
        }
    }
    ctx->pc = 0x11EE74u;
label_11ee74:
    // 0x11ee74: 0x1000000a
    ctx->pc = 0x11EE74u;
    {
        const bool branch_taken_0x11ee74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11EE78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x11ee74) {
            ctx->pc = 0x11EEA0u;
            goto label_11eea0;
        }
    }
    ctx->pc = 0x11EE7Cu;
label_11ee7c:
    // 0x11ee7c: 0x30420001
    ctx->pc = 0x11ee7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x11ee80: 0x10400006
    ctx->pc = 0x11EE80u;
    {
        const bool branch_taken_0x11ee80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11EE84u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 17), 24)));
        if (branch_taken_0x11ee80) {
            ctx->pc = 0x11EE9Cu;
            goto label_11ee9c;
        }
    }
    ctx->pc = 0x11EE88u;
    // 0x11ee88: 0xc0479e8
    ctx->pc = 0x11EE88u;
    SET_GPR_U32(ctx, 31, 0x11EE90u);
    ctx->pc = 0x11E7A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E7A0_0x11e7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE90u; }
    }
    if (ctx->pc != 0x11EE90u) { return; }
    ctx->pc = 0x11EE90u;
    // 0x11ee90: 0xde230010
    ctx->pc = 0x11ee90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x11ee94: 0x43102f
    ctx->pc = 0x11ee94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x11ee98: 0x202802d
    ctx->pc = 0x11ee98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_11ee9c:
    // 0x11ee9c: 0x200102d
    ctx->pc = 0x11ee9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11eea0:
    // 0x11eea0: 0xdfbf0020
    ctx->pc = 0x11eea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11eea4: 0xdfb10010
    ctx->pc = 0x11eea4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11eea8: 0xdfb00000
    ctx->pc = 0x11eea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11eeac: 0x3e00008
    ctx->pc = 0x11EEACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EEB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EE48u: goto label_11ee48;
            case 0x11EE74u: goto label_11ee74;
            case 0x11EE7Cu: goto label_11ee7c;
            case 0x11EE9Cu: goto label_11ee9c;
            case 0x11EEA0u: goto label_11eea0;
            case 0x11EEDCu: goto label_11eedc;
            case 0x11EEECu: goto label_11eeec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11EEB4u;
    // 0x11eeb4: 0x0
    ctx->pc = 0x11eeb4u;
    // NOP
    // 0x11eeb8: 0x27bdffd0
    ctx->pc = 0x11eeb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11eebc: 0xffb00000
    ctx->pc = 0x11eebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11eec0: 0xffb10010
    ctx->pc = 0x11eec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11eec4: 0xffbf0020
    ctx->pc = 0x11eec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11eec8: 0xc047598
    ctx->pc = 0x11EEC8u;
    SET_GPR_U32(ctx, 31, 0x11EED0u);
    ctx->pc = 0x11EECCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EED0u; }
    }
    if (ctx->pc != 0x11EED0u) { return; }
    ctx->pc = 0x11EED0u;
    // 0x11eed0: 0x200202d
    ctx->pc = 0x11eed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eed4: 0xc047b92
    ctx->pc = 0x11EED4u;
    SET_GPR_U32(ctx, 31, 0x11EEDCu);
    ctx->pc = 0x11EED8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11EE48u;
    goto label_11ee48;
    ctx->pc = 0x11EEDCu;
label_11eedc:
    // 0x11eedc: 0x12200003
    ctx->pc = 0x11EEDCu;
    {
        const bool branch_taken_0x11eedc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x11EEE0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11eedc) {
            ctx->pc = 0x11EEECu;
            goto label_11eeec;
        }
    }
    ctx->pc = 0x11EEE4u;
    // 0x11eee4: 0xc0475ae
    ctx->pc = 0x11EEE4u;
    SET_GPR_U32(ctx, 31, 0x11EEECu);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EEECu; }
    }
    if (ctx->pc != 0x11EEECu) { return; }
    ctx->pc = 0x11EEECu;
label_11eeec:
    // 0x11eeec: 0x200102d
    ctx->pc = 0x11eeecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eef0: 0xdfbf0020
    ctx->pc = 0x11eef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11eef4: 0xdfb10010
    ctx->pc = 0x11eef4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11eef8: 0xdfb00000
    ctx->pc = 0x11eef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11eefc: 0x3e00008
    ctx->pc = 0x11EEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EF00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EE48u: goto label_11ee48;
            case 0x11EE74u: goto label_11ee74;
            case 0x11EE7Cu: goto label_11ee7c;
            case 0x11EE9Cu: goto label_11ee9c;
            case 0x11EEA0u: goto label_11eea0;
            case 0x11EEDCu: goto label_11eedc;
            case 0x11EEECu: goto label_11eeec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11EF04u;
    // 0x11ef04: 0x0
    ctx->pc = 0x11ef04u;
    // NOP
}
