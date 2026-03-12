#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_003751E0
// Address: 0x3751e0 - 0x375330
void sub_003751E0_0x3751e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3751e0u;

    // 0x3751e0: 0x27bdffe0
    ctx->pc = 0x3751e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3751e4: 0xffbf0010
    ctx->pc = 0x3751e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3751e8: 0x7fb00000
    ctx->pc = 0x3751e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3751ec: 0x80850000
    ctx->pc = 0x3751ecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3751f0: 0x80830001
    ctx->pc = 0x3751f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3751f4: 0xa31824
    ctx->pc = 0x3751f4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3751f8: 0x10600046
    ctx->pc = 0x3751F8u;
    {
        const bool branch_taken_0x3751f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x3751FCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3751f8) {
            ctx->pc = 0x375314u;
            goto label_375314;
        }
    }
    ctx->pc = 0x375200u;
    // 0x375200: 0x92030553
    ctx->pc = 0x375200u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1363)));
    // 0x375204: 0x10600043
    ctx->pc = 0x375204u;
    {
        const bool branch_taken_0x375204 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x375208u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x375204) {
            ctx->pc = 0x375314u;
            goto label_375314;
        }
    }
    ctx->pc = 0x37520Cu;
    // 0x37520c: 0xc06e0a8
    ctx->pc = 0x37520Cu;
    SET_GPR_U32(ctx, 31, 0x375214u);
    ctx->pc = 0x1B82A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B82A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375214u; }
        if (ctx->pc != 0x375214u) { return; }
    }
    ctx->pc = 0x375214u;
    // 0x375214: 0x10400004
    ctx->pc = 0x375214u;
    {
        const bool branch_taken_0x375214 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x375218u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 21));
        if (branch_taken_0x375214) {
            ctx->pc = 0x375228u;
            goto label_375228;
        }
    }
    ctx->pc = 0x37521Cu;
    // 0x37521c: 0x92030003
    ctx->pc = 0x37521cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x375220: 0x1060003c
    ctx->pc = 0x375220u;
    {
        const bool branch_taken_0x375220 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x375220) {
            ctx->pc = 0x375314u;
            goto label_375314;
        }
    }
    ctx->pc = 0x375228u;
label_375228:
    // 0x375228: 0xc06e0a8
    ctx->pc = 0x375228u;
    SET_GPR_U32(ctx, 31, 0x375230u);
    ctx->pc = 0x1B82A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B82A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375230u; }
        if (ctx->pc != 0x375230u) { return; }
    }
    ctx->pc = 0x375230u;
    // 0x375230: 0x10400006
    ctx->pc = 0x375230u;
    {
        const bool branch_taken_0x375230 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x375234u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25));
        if (branch_taken_0x375230) {
            ctx->pc = 0x37524Cu;
            goto label_37524c;
        }
    }
    ctx->pc = 0x375238u;
    // 0x375238: 0x92040003
    ctx->pc = 0x375238u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x37523c: 0x24030001
    ctx->pc = 0x37523cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x375240: 0x10830034
    ctx->pc = 0x375240u;
    {
        const bool branch_taken_0x375240 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x375240) {
            ctx->pc = 0x375314u;
            goto label_375314;
        }
    }
    ctx->pc = 0x375248u;
    // 0x375248: 0x24040019
    ctx->pc = 0x375248u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25));
label_37524c:
    // 0x37524c: 0xc06e0a8
    ctx->pc = 0x37524Cu;
    SET_GPR_U32(ctx, 31, 0x375254u);
    ctx->pc = 0x1B82A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B82A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375254u; }
        if (ctx->pc != 0x375254u) { return; }
    }
    ctx->pc = 0x375254u;
    // 0x375254: 0x10400006
    ctx->pc = 0x375254u;
    {
        const bool branch_taken_0x375254 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x375258u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26));
        if (branch_taken_0x375254) {
            ctx->pc = 0x375270u;
            goto label_375270;
        }
    }
    ctx->pc = 0x37525Cu;
    // 0x37525c: 0x92040003
    ctx->pc = 0x37525cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x375260: 0x24030002
    ctx->pc = 0x375260u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x375264: 0x1083002b
    ctx->pc = 0x375264u;
    {
        const bool branch_taken_0x375264 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x375264) {
            ctx->pc = 0x375314u;
            goto label_375314;
        }
    }
    ctx->pc = 0x37526Cu;
    // 0x37526c: 0x2404001a
    ctx->pc = 0x37526cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26));
label_375270:
    // 0x375270: 0xc06e0a8
    ctx->pc = 0x375270u;
    SET_GPR_U32(ctx, 31, 0x375278u);
    ctx->pc = 0x1B82A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B82A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375278u; }
        if (ctx->pc != 0x375278u) { return; }
    }
    ctx->pc = 0x375278u;
    // 0x375278: 0x10400005
    ctx->pc = 0x375278u;
    {
        const bool branch_taken_0x375278 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x375278) {
            ctx->pc = 0x375290u;
            goto label_375290;
        }
    }
    ctx->pc = 0x375280u;
    // 0x375280: 0x92040003
    ctx->pc = 0x375280u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x375284: 0x24030003
    ctx->pc = 0x375284u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x375288: 0x10830022
    ctx->pc = 0x375288u;
    {
        const bool branch_taken_0x375288 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x375288) {
            ctx->pc = 0x375314u;
            goto label_375314;
        }
    }
    ctx->pc = 0x375290u;
label_375290:
    // 0x375290: 0x92030002
    ctx->pc = 0x375290u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x375294: 0x14600015
    ctx->pc = 0x375294u;
    {
        const bool branch_taken_0x375294 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x375298u;
        SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
        if (branch_taken_0x375294) {
            ctx->pc = 0x3752ECu;
            goto label_3752ec;
        }
    }
    ctx->pc = 0x37529Cu;
    // 0x37529c: 0x3c01003e
    ctx->pc = 0x37529cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)62 << 16));
    // 0x3752a0: 0x92040003
    ctx->pc = 0x3752a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3752a4: 0x9023ddd4
    ctx->pc = 0x3752a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294958548)));
    // 0x3752a8: 0x14830007
    ctx->pc = 0x3752A8u;
    {
        const bool branch_taken_0x3752a8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x3752ACu;
        SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
        if (branch_taken_0x3752a8) {
            ctx->pc = 0x3752C8u;
            goto label_3752c8;
        }
    }
    ctx->pc = 0x3752B0u;
    // 0x3752b0: 0x3c01004c
    ctx->pc = 0x3752b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x3752b4: 0x90239d10
    ctx->pc = 0x3752b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294941968)));
    // 0x3752b8: 0x10600014
    ctx->pc = 0x3752B8u;
    {
        const bool branch_taken_0x3752b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x3752BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3752b8) {
            ctx->pc = 0x37530Cu;
            goto label_37530c;
        }
    }
    ctx->pc = 0x3752C0u;
    // 0x3752c0: 0x10000015
    ctx->pc = 0x3752C0u;
    {
        const bool branch_taken_0x3752c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3752C4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x3752c0) {
            ctx->pc = 0x375318u;
            goto label_375318;
        }
    }
    ctx->pc = 0x3752C8u;
label_3752c8:
    // 0x3752c8: 0x90239d11
    ctx->pc = 0x3752c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294941969)));
    // 0x3752cc: 0x14600011
    ctx->pc = 0x3752CCu;
    {
        const bool branch_taken_0x3752cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x3752D0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 56));
        if (branch_taken_0x3752cc) {
            ctx->pc = 0x375314u;
            goto label_375314;
        }
    }
    ctx->pc = 0x3752D4u;
    // 0x3752d4: 0xc17021c
    ctx->pc = 0x3752D4u;
    SET_GPR_U32(ctx, 31, 0x3752DCu);
    ctx->pc = 0x3752D8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x5C0870u;
    {
        auto targetFn = runtime->lookupFunction(0x5C0870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3752DCu; }
        if (ctx->pc != 0x3752DCu) { return; }
    }
    ctx->pc = 0x3752DCu;
    // 0x3752dc: 0x1040000a
    ctx->pc = 0x3752DCu;
    {
        const bool branch_taken_0x3752dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x3752dc) {
            ctx->pc = 0x375308u;
            goto label_375308;
        }
    }
    ctx->pc = 0x3752E4u;
    // 0x3752e4: 0x1000000b
    ctx->pc = 0x3752E4u;
    {
        const bool branch_taken_0x3752e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x3752e4) {
            ctx->pc = 0x375314u;
            goto label_375314;
        }
    }
    ctx->pc = 0x3752ECu;
label_3752ec:
    // 0x3752ec: 0x90239d13
    ctx->pc = 0x3752ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294941971)));
    // 0x3752f0: 0x14600008
    ctx->pc = 0x3752F0u;
    {
        const bool branch_taken_0x3752f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x3752F4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 56));
        if (branch_taken_0x3752f0) {
            ctx->pc = 0x375314u;
            goto label_375314;
        }
    }
    ctx->pc = 0x3752F8u;
    // 0x3752f8: 0xc17021c
    ctx->pc = 0x3752F8u;
    SET_GPR_U32(ctx, 31, 0x375300u);
    ctx->pc = 0x3752FCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x5C0870u;
    {
        auto targetFn = runtime->lookupFunction(0x5C0870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375300u; }
        if (ctx->pc != 0x375300u) { return; }
    }
    ctx->pc = 0x375300u;
    // 0x375300: 0x14400004
    ctx->pc = 0x375300u;
    {
        const bool branch_taken_0x375300 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x375300) {
            ctx->pc = 0x375314u;
            goto label_375314;
        }
    }
    ctx->pc = 0x375308u;
label_375308:
    // 0x375308: 0x200202d
    ctx->pc = 0x375308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37530c:
    // 0x37530c: 0xc1aca38
    ctx->pc = 0x37530Cu;
    SET_GPR_U32(ctx, 31, 0x375314u);
    ctx->pc = 0x6B28E0u;
    {
        auto targetFn = runtime->lookupFunction(0x6B28E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375314u; }
        if (ctx->pc != 0x375314u) { return; }
    }
    ctx->pc = 0x375314u;
label_375314:
    // 0x375314: 0xdfbf0010
    ctx->pc = 0x375314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_375318:
    // 0x375318: 0x7bb00000
    ctx->pc = 0x375318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37531c: 0x3e00008
    ctx->pc = 0x37531Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375320u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x375228u: goto label_375228;
            case 0x37524Cu: goto label_37524c;
            case 0x375270u: goto label_375270;
            case 0x375290u: goto label_375290;
            case 0x3752C8u: goto label_3752c8;
            case 0x3752ECu: goto label_3752ec;
            case 0x375308u: goto label_375308;
            case 0x37530Cu: goto label_37530c;
            case 0x375314u: goto label_375314;
            case 0x375318u: goto label_375318;
            default: break;
        }
        return;
    }
    ctx->pc = 0x375324u;
    // 0x375324: 0x0
    ctx->pc = 0x375324u;
    // NOP
    // 0x375328: 0x0
    ctx->pc = 0x375328u;
    // NOP
    // 0x37532c: 0x0
    ctx->pc = 0x37532cu;
    // NOP
}
