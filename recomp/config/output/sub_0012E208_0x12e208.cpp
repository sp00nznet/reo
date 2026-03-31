#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012E208
// Address: 0x12e208 - 0x12e280
void sub_0012E208_0x12e208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12e208u;

    // 0x12e208: 0x52c00
    ctx->pc = 0x12e208u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x12e20c: 0x80302d
    ctx->pc = 0x12e20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e210: 0x10c00019
    ctx->pc = 0x12E210u;
    {
        const bool branch_taken_0x12e210 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E214u;
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 16));
        if (branch_taken_0x12e210) {
            ctx->pc = 0x12E278u;
            goto label_12e278;
        }
    }
    ctx->pc = 0x12E218u;
    // 0x12e218: 0x84c40008
    ctx->pc = 0x12e218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x12e21c: 0x84c5000a
    ctx->pc = 0x12e21cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x12e220: 0x84c20004
    ctx->pc = 0x12e220u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x12e224: 0x84c30006
    ctx->pc = 0x12e224u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x12e228: 0x441018
    ctx->pc = 0x12e228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x12e22c: 0x94c40008
    ctx->pc = 0x12e22cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x12e230: 0x651818
    ctx->pc = 0x12e230u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x12e234: 0x431021
    ctx->pc = 0x12e234u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12e238: 0x21303
    ctx->pc = 0x12e238u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x12e23c: 0x472821
    ctx->pc = 0x12e23cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x12e240: 0x28a27fff
    ctx->pc = 0x12e240u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32767));
    // 0x12e244: 0x10400006
    ctx->pc = 0x12E244u;
    {
        const bool branch_taken_0x12e244 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E248u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 4294934528));
        if (branch_taken_0x12e244) {
            ctx->pc = 0x12E260u;
            goto label_12e260;
        }
    }
    ctx->pc = 0x12E24Cu;
    // 0x12e24c: 0x24028000
    ctx->pc = 0x12e24cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x12e250: 0xa3100a
    ctx->pc = 0x12e250u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x12e254: 0x21400
    ctx->pc = 0x12e254u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x12e258: 0x10000002
    ctx->pc = 0x12E258u;
    {
        const bool branch_taken_0x12e258 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12E25Cu;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
        if (branch_taken_0x12e258) {
            ctx->pc = 0x12E264u;
            goto label_12e264;
        }
    }
    ctx->pc = 0x12E260u;
label_12e260:
    // 0x12e260: 0x24037fff
    ctx->pc = 0x12e260u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32767));
label_12e264:
    // 0x12e264: 0xa4c4000a
    ctx->pc = 0x12e264u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x12e268: 0x60102d
    ctx->pc = 0x12e268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e26c: 0x3e00008
    ctx->pc = 0x12E26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E270u;
        WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E260u: goto label_12e260;
            case 0x12E264u: goto label_12e264;
            case 0x12E278u: goto label_12e278;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12E274u;
    // 0x12e274: 0x0
    ctx->pc = 0x12e274u;
    // NOP
label_12e278:
    // 0x12e278: 0x3e00008
    ctx->pc = 0x12E278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E27Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E260u: goto label_12e260;
            case 0x12E264u: goto label_12e264;
            case 0x12E278u: goto label_12e278;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12E280u;
}
