#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1661e8
// Address: 0x1661e8 - 0x166260
void entry_1661e8_0x166260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1661e8u;

label_1661e8:
    // 0x1661e8: 0x27bdffe0
    ctx->pc = 0x1661e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1661ec:
    // 0x1661ec: 0xffb00000
    ctx->pc = 0x1661ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1661f0:
    // 0x1661f0: 0x80802d
    ctx->pc = 0x1661f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1661f4:
    // 0x1661f4: 0xffb10008
    ctx->pc = 0x1661f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1661f8:
    // 0x1661f8: 0xffbf0010
    ctx->pc = 0x1661f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1661fc:
    // 0x1661fc: 0xc05a78c
label_166200:
    if (ctx->pc == 0x166200u) {
        ctx->pc = 0x166200u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166204u;
        goto label_166204;
    }
    ctx->pc = 0x1661FCu;
    SET_GPR_U32(ctx, 31, 0x166204u);
    ctx->pc = 0x166200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166204u; }
    }
    if (ctx->pc != 0x166204u) { return; }
    ctx->pc = 0x166204u;
label_166204:
    // 0x166204: 0x3c05ff00
    ctx->pc = 0x166204u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
label_166208:
    // 0x166208: 0x10400007
label_16620c:
    if (ctx->pc == 0x16620Cu) {
        ctx->pc = 0x16620Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166210u;
        goto label_166210;
    }
    ctx->pc = 0x166208u;
    {
        const bool branch_taken_0x166208 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16620Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x166208) {
            ctx->pc = 0x166228u;
            goto label_166228;
        }
    }
    ctx->pc = 0x166210u;
label_166210:
    // 0x166210: 0x202d
    ctx->pc = 0x166210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166214:
    // 0x166214: 0xc05a704
label_166218:
    if (ctx->pc == 0x166218u) {
        ctx->pc = 0x166218u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 418));
        ctx->pc = 0x16621Cu;
        goto label_16621c;
    }
    ctx->pc = 0x166214u;
    SET_GPR_U32(ctx, 31, 0x16621Cu);
    ctx->pc = 0x166218u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 418));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16621Cu; }
    }
    if (ctx->pc != 0x16621Cu) { return; }
    ctx->pc = 0x16621Cu;
label_16621c:
    // 0x16621c: 0x1000000b
label_166220:
    if (ctx->pc == 0x166220u) {
        ctx->pc = 0x166220u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166224u;
        goto label_166224;
    }
    ctx->pc = 0x16621Cu;
    {
        const bool branch_taken_0x16621c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x166220u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16621c) {
            ctx->pc = 0x16624Cu;
            goto label_16624c;
        }
    }
    ctx->pc = 0x166224u;
label_166224:
    // 0x166224: 0x0
    ctx->pc = 0x166224u;
    // NOP
label_166228:
    // 0x166228: 0xc05d58a
label_16622c:
    if (ctx->pc == 0x16622Cu) {
        ctx->pc = 0x16622Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x166230u;
        goto label_166230;
    }
    ctx->pc = 0x166228u;
    SET_GPR_U32(ctx, 31, 0x166230u);
    ctx->pc = 0x16622Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166230u; }
    }
    if (ctx->pc != 0x166230u) { return; }
    ctx->pc = 0x166230u;
label_166230:
    // 0x166230: 0x200202d
    ctx->pc = 0x166230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166234:
    // 0x166234: 0x10400005
label_166238:
    if (ctx->pc == 0x166238u) {
        ctx->pc = 0x166238u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16623Cu;
        goto label_16623c;
    }
    ctx->pc = 0x166234u;
    {
        const bool branch_taken_0x166234 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x166238u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x166234) {
            ctx->pc = 0x16624Cu;
            goto label_16624c;
        }
    }
    ctx->pc = 0x16623Cu;
label_16623c:
    // 0x16623c: 0x8e031c84
    ctx->pc = 0x16623cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7300)));
label_166240:
    // 0x166240: 0x8c620008
    ctx->pc = 0x166240u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_166244:
    // 0x166244: 0x40f809
label_166248:
    if (ctx->pc == 0x166248u) {
        ctx->pc = 0x16624Cu;
        goto label_16624c;
    }
    ctx->pc = 0x166244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16624Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1661E8u: goto label_1661e8;
            case 0x1661ECu: goto label_1661ec;
            case 0x1661F0u: goto label_1661f0;
            case 0x1661F4u: goto label_1661f4;
            case 0x1661F8u: goto label_1661f8;
            case 0x1661FCu: goto label_1661fc;
            case 0x166200u: goto label_166200;
            case 0x166204u: goto label_166204;
            case 0x166208u: goto label_166208;
            case 0x16620Cu: goto label_16620c;
            case 0x166210u: goto label_166210;
            case 0x166214u: goto label_166214;
            case 0x166218u: goto label_166218;
            case 0x16621Cu: goto label_16621c;
            case 0x166220u: goto label_166220;
            case 0x166224u: goto label_166224;
            case 0x166228u: goto label_166228;
            case 0x16622Cu: goto label_16622c;
            case 0x166230u: goto label_166230;
            case 0x166234u: goto label_166234;
            case 0x166238u: goto label_166238;
            case 0x16623Cu: goto label_16623c;
            case 0x166240u: goto label_166240;
            case 0x166244u: goto label_166244;
            case 0x166248u: goto label_166248;
            case 0x16624Cu: goto label_16624c;
            case 0x166250u: goto label_166250;
            case 0x166254u: goto label_166254;
            case 0x166258u: goto label_166258;
            case 0x16625Cu: goto label_16625c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16624Cu; }
            if (ctx->pc != 0x16624Cu) { return; }
        }
    }
    ctx->pc = 0x16624Cu;
label_16624c:
    // 0x16624c: 0xdfb00000
    ctx->pc = 0x16624cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_166250:
    // 0x166250: 0xdfb10008
    ctx->pc = 0x166250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_166254:
    // 0x166254: 0xdfbf0010
    ctx->pc = 0x166254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_166258:
    // 0x166258: 0x3e00008
label_16625c:
    if (ctx->pc == 0x16625Cu) {
        ctx->pc = 0x16625Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x166260u;
        goto label_fallthrough_0x166258;
    }
    ctx->pc = 0x166258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16625Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1661E8u: goto label_1661e8;
            case 0x1661ECu: goto label_1661ec;
            case 0x1661F0u: goto label_1661f0;
            case 0x1661F4u: goto label_1661f4;
            case 0x1661F8u: goto label_1661f8;
            case 0x1661FCu: goto label_1661fc;
            case 0x166200u: goto label_166200;
            case 0x166204u: goto label_166204;
            case 0x166208u: goto label_166208;
            case 0x16620Cu: goto label_16620c;
            case 0x166210u: goto label_166210;
            case 0x166214u: goto label_166214;
            case 0x166218u: goto label_166218;
            case 0x16621Cu: goto label_16621c;
            case 0x166220u: goto label_166220;
            case 0x166224u: goto label_166224;
            case 0x166228u: goto label_166228;
            case 0x16622Cu: goto label_16622c;
            case 0x166230u: goto label_166230;
            case 0x166234u: goto label_166234;
            case 0x166238u: goto label_166238;
            case 0x16623Cu: goto label_16623c;
            case 0x166240u: goto label_166240;
            case 0x166244u: goto label_166244;
            case 0x166248u: goto label_166248;
            case 0x16624Cu: goto label_16624c;
            case 0x166250u: goto label_166250;
            case 0x166254u: goto label_166254;
            case 0x166258u: goto label_166258;
            case 0x16625Cu: goto label_16625c;
            default: break;
        }
        return;
    }
label_fallthrough_0x166258:
    ctx->pc = 0x166260u;
}
