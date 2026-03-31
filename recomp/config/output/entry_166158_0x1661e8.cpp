#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_166158
// Address: 0x166158 - 0x1661e8
void entry_166158_0x1661e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x166158u;

label_166158:
    // 0x166158: 0x27bdffe0
    ctx->pc = 0x166158u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_16615c:
    // 0x16615c: 0xffb00000
    ctx->pc = 0x16615cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_166160:
    // 0x166160: 0x80802d
    ctx->pc = 0x166160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_166164:
    // 0x166164: 0xffb10008
    ctx->pc = 0x166164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_166168:
    // 0x166168: 0xa0882d
    ctx->pc = 0x166168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16616c:
    // 0x16616c: 0xffb20010
    ctx->pc = 0x16616cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_166170:
    // 0x166170: 0xffbf0018
    ctx->pc = 0x166170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_166174:
    // 0x166174: 0xc05a78c
label_166178:
    if (ctx->pc == 0x166178u) {
        ctx->pc = 0x166178u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16617Cu;
        goto label_16617c;
    }
    ctx->pc = 0x166174u;
    SET_GPR_U32(ctx, 31, 0x16617Cu);
    ctx->pc = 0x166178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16617Cu; }
    }
    if (ctx->pc != 0x16617Cu) { return; }
    ctx->pc = 0x16617Cu;
label_16617c:
    // 0x16617c: 0x3c05ff00
    ctx->pc = 0x16617cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
label_166180:
    // 0x166180: 0x200202d
    ctx->pc = 0x166180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166184:
    // 0x166184: 0x10400008
label_166188:
    if (ctx->pc == 0x166188u) {
        ctx->pc = 0x166188u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 417));
        ctx->pc = 0x16618Cu;
        goto label_16618c;
    }
    ctx->pc = 0x166184u;
    {
        const bool branch_taken_0x166184 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x166188u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 417));
        if (branch_taken_0x166184) {
            ctx->pc = 0x1661A8u;
            goto label_1661a8;
        }
    }
    ctx->pc = 0x16618Cu;
label_16618c:
    // 0x16618c: 0xdfb00000
    ctx->pc = 0x16618cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_166190:
    // 0x166190: 0x202d
    ctx->pc = 0x166190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166194:
    // 0x166194: 0xdfb10008
    ctx->pc = 0x166194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_166198:
    // 0x166198: 0xdfb20010
    ctx->pc = 0x166198u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16619c:
    // 0x16619c: 0xdfbf0018
    ctx->pc = 0x16619cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1661a0:
    // 0x1661a0: 0x805a704
label_1661a4:
    if (ctx->pc == 0x1661A4u) {
        ctx->pc = 0x1661A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1661A8u;
        goto label_1661a8;
    }
    ctx->pc = 0x1661A0u;
    ctx->pc = 0x1661A4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x1661A8u;
label_1661a8:
    // 0x1661a8: 0xc05d58a
label_1661ac:
    if (ctx->pc == 0x1661ACu) {
        ctx->pc = 0x1661ACu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1661B0u;
        goto label_1661b0;
    }
    ctx->pc = 0x1661A8u;
    SET_GPR_U32(ctx, 31, 0x1661B0u);
    ctx->pc = 0x1661ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1661B0u; }
    }
    if (ctx->pc != 0x1661B0u) { return; }
    ctx->pc = 0x1661B0u;
label_1661b0:
    // 0x1661b0: 0x200202d
    ctx->pc = 0x1661b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1661b4:
    // 0x1661b4: 0x220282d
    ctx->pc = 0x1661b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1661b8:
    // 0x1661b8: 0x10400005
label_1661bc:
    if (ctx->pc == 0x1661BCu) {
        ctx->pc = 0x1661BCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1661C0u;
        goto label_1661c0;
    }
    ctx->pc = 0x1661B8u;
    {
        const bool branch_taken_0x1661b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1661BCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1661b8) {
            ctx->pc = 0x1661D0u;
            goto label_1661d0;
        }
    }
    ctx->pc = 0x1661C0u;
label_1661c0:
    // 0x1661c0: 0x8e021c84
    ctx->pc = 0x1661c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7300)));
label_1661c4:
    // 0x1661c4: 0x8c430004
    ctx->pc = 0x1661c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1661c8:
    // 0x1661c8: 0x60f809
label_1661cc:
    if (ctx->pc == 0x1661CCu) {
        ctx->pc = 0x1661D0u;
        goto label_1661d0;
    }
    ctx->pc = 0x1661C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1661D0u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166158u: goto label_166158;
            case 0x16615Cu: goto label_16615c;
            case 0x166160u: goto label_166160;
            case 0x166164u: goto label_166164;
            case 0x166168u: goto label_166168;
            case 0x16616Cu: goto label_16616c;
            case 0x166170u: goto label_166170;
            case 0x166174u: goto label_166174;
            case 0x166178u: goto label_166178;
            case 0x16617Cu: goto label_16617c;
            case 0x166180u: goto label_166180;
            case 0x166184u: goto label_166184;
            case 0x166188u: goto label_166188;
            case 0x16618Cu: goto label_16618c;
            case 0x166190u: goto label_166190;
            case 0x166194u: goto label_166194;
            case 0x166198u: goto label_166198;
            case 0x16619Cu: goto label_16619c;
            case 0x1661A0u: goto label_1661a0;
            case 0x1661A4u: goto label_1661a4;
            case 0x1661A8u: goto label_1661a8;
            case 0x1661ACu: goto label_1661ac;
            case 0x1661B0u: goto label_1661b0;
            case 0x1661B4u: goto label_1661b4;
            case 0x1661B8u: goto label_1661b8;
            case 0x1661BCu: goto label_1661bc;
            case 0x1661C0u: goto label_1661c0;
            case 0x1661C4u: goto label_1661c4;
            case 0x1661C8u: goto label_1661c8;
            case 0x1661CCu: goto label_1661cc;
            case 0x1661D0u: goto label_1661d0;
            case 0x1661D4u: goto label_1661d4;
            case 0x1661D8u: goto label_1661d8;
            case 0x1661DCu: goto label_1661dc;
            case 0x1661E0u: goto label_1661e0;
            case 0x1661E4u: goto label_1661e4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1661D0u; }
            if (ctx->pc != 0x1661D0u) { return; }
        }
    }
    ctx->pc = 0x1661D0u;
label_1661d0:
    // 0x1661d0: 0xdfb00000
    ctx->pc = 0x1661d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1661d4:
    // 0x1661d4: 0xdfb10008
    ctx->pc = 0x1661d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1661d8:
    // 0x1661d8: 0xdfb20010
    ctx->pc = 0x1661d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1661dc:
    // 0x1661dc: 0xdfbf0018
    ctx->pc = 0x1661dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1661e0:
    // 0x1661e0: 0x3e00008
label_1661e4:
    if (ctx->pc == 0x1661E4u) {
        ctx->pc = 0x1661E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1661E8u;
        goto label_fallthrough_0x1661e0;
    }
    ctx->pc = 0x1661E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1661E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166158u: goto label_166158;
            case 0x16615Cu: goto label_16615c;
            case 0x166160u: goto label_166160;
            case 0x166164u: goto label_166164;
            case 0x166168u: goto label_166168;
            case 0x16616Cu: goto label_16616c;
            case 0x166170u: goto label_166170;
            case 0x166174u: goto label_166174;
            case 0x166178u: goto label_166178;
            case 0x16617Cu: goto label_16617c;
            case 0x166180u: goto label_166180;
            case 0x166184u: goto label_166184;
            case 0x166188u: goto label_166188;
            case 0x16618Cu: goto label_16618c;
            case 0x166190u: goto label_166190;
            case 0x166194u: goto label_166194;
            case 0x166198u: goto label_166198;
            case 0x16619Cu: goto label_16619c;
            case 0x1661A0u: goto label_1661a0;
            case 0x1661A4u: goto label_1661a4;
            case 0x1661A8u: goto label_1661a8;
            case 0x1661ACu: goto label_1661ac;
            case 0x1661B0u: goto label_1661b0;
            case 0x1661B4u: goto label_1661b4;
            case 0x1661B8u: goto label_1661b8;
            case 0x1661BCu: goto label_1661bc;
            case 0x1661C0u: goto label_1661c0;
            case 0x1661C4u: goto label_1661c4;
            case 0x1661C8u: goto label_1661c8;
            case 0x1661CCu: goto label_1661cc;
            case 0x1661D0u: goto label_1661d0;
            case 0x1661D4u: goto label_1661d4;
            case 0x1661D8u: goto label_1661d8;
            case 0x1661DCu: goto label_1661dc;
            case 0x1661E0u: goto label_1661e0;
            case 0x1661E4u: goto label_1661e4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1661e0:
    ctx->pc = 0x1661E8u;
}
