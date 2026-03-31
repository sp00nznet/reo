#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_166260
// Address: 0x166260 - 0x1662e0
void entry_166260_0x1662e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x166260u;

label_166260:
    // 0x166260: 0x27bdffe0
    ctx->pc = 0x166260u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_166264:
    // 0x166264: 0xffb00000
    ctx->pc = 0x166264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_166268:
    // 0x166268: 0x80802d
    ctx->pc = 0x166268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16626c:
    // 0x16626c: 0xffb10008
    ctx->pc = 0x16626cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_166270:
    // 0x166270: 0xffbf0010
    ctx->pc = 0x166270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_166274:
    // 0x166274: 0xc05a78c
label_166278:
    if (ctx->pc == 0x166278u) {
        ctx->pc = 0x166278u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16627Cu;
        goto label_16627c;
    }
    ctx->pc = 0x166274u;
    SET_GPR_U32(ctx, 31, 0x16627Cu);
    ctx->pc = 0x166278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16627Cu; }
    }
    if (ctx->pc != 0x16627Cu) { return; }
    ctx->pc = 0x16627Cu;
label_16627c:
    // 0x16627c: 0x3c05ff00
    ctx->pc = 0x16627cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
label_166280:
    // 0x166280: 0x10400007
label_166284:
    if (ctx->pc == 0x166284u) {
        ctx->pc = 0x166284u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166288u;
        goto label_166288;
    }
    ctx->pc = 0x166280u;
    {
        const bool branch_taken_0x166280 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x166284u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x166280) {
            ctx->pc = 0x1662A0u;
            goto label_1662a0;
        }
    }
    ctx->pc = 0x166288u;
label_166288:
    // 0x166288: 0xdfb00000
    ctx->pc = 0x166288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16628c:
    // 0x16628c: 0x34a501a3
    ctx->pc = 0x16628cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 419));
label_166290:
    // 0x166290: 0xdfb10008
    ctx->pc = 0x166290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_166294:
    // 0x166294: 0xdfbf0010
    ctx->pc = 0x166294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_166298:
    // 0x166298: 0x805a704
label_16629c:
    if (ctx->pc == 0x16629Cu) {
        ctx->pc = 0x16629Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1662A0u;
        goto label_1662a0;
    }
    ctx->pc = 0x166298u;
    ctx->pc = 0x16629Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x1662A0u;
label_1662a0:
    // 0x1662a0: 0x200202d
    ctx->pc = 0x1662a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1662a4:
    // 0x1662a4: 0xc05d58a
label_1662a8:
    if (ctx->pc == 0x1662A8u) {
        ctx->pc = 0x1662A8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1662ACu;
        goto label_1662ac;
    }
    ctx->pc = 0x1662A4u;
    SET_GPR_U32(ctx, 31, 0x1662ACu);
    ctx->pc = 0x1662A8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662ACu; }
    }
    if (ctx->pc != 0x1662ACu) { return; }
    ctx->pc = 0x1662ACu;
label_1662ac:
    // 0x1662ac: 0x200202d
    ctx->pc = 0x1662acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1662b0:
    // 0x1662b0: 0x10400005
label_1662b4:
    if (ctx->pc == 0x1662B4u) {
        ctx->pc = 0x1662B4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1662B8u;
        goto label_1662b8;
    }
    ctx->pc = 0x1662B0u;
    {
        const bool branch_taken_0x1662b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1662B4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1662b0) {
            ctx->pc = 0x1662C8u;
            goto label_1662c8;
        }
    }
    ctx->pc = 0x1662B8u;
label_1662b8:
    // 0x1662b8: 0x8e021c84
    ctx->pc = 0x1662b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7300)));
label_1662bc:
    // 0x1662bc: 0x8c43000c
    ctx->pc = 0x1662bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1662c0:
    // 0x1662c0: 0x60f809
label_1662c4:
    if (ctx->pc == 0x1662C4u) {
        ctx->pc = 0x1662C8u;
        goto label_1662c8;
    }
    ctx->pc = 0x1662C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1662C8u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166260u: goto label_166260;
            case 0x166264u: goto label_166264;
            case 0x166268u: goto label_166268;
            case 0x16626Cu: goto label_16626c;
            case 0x166270u: goto label_166270;
            case 0x166274u: goto label_166274;
            case 0x166278u: goto label_166278;
            case 0x16627Cu: goto label_16627c;
            case 0x166280u: goto label_166280;
            case 0x166284u: goto label_166284;
            case 0x166288u: goto label_166288;
            case 0x16628Cu: goto label_16628c;
            case 0x166290u: goto label_166290;
            case 0x166294u: goto label_166294;
            case 0x166298u: goto label_166298;
            case 0x16629Cu: goto label_16629c;
            case 0x1662A0u: goto label_1662a0;
            case 0x1662A4u: goto label_1662a4;
            case 0x1662A8u: goto label_1662a8;
            case 0x1662ACu: goto label_1662ac;
            case 0x1662B0u: goto label_1662b0;
            case 0x1662B4u: goto label_1662b4;
            case 0x1662B8u: goto label_1662b8;
            case 0x1662BCu: goto label_1662bc;
            case 0x1662C0u: goto label_1662c0;
            case 0x1662C4u: goto label_1662c4;
            case 0x1662C8u: goto label_1662c8;
            case 0x1662CCu: goto label_1662cc;
            case 0x1662D0u: goto label_1662d0;
            case 0x1662D4u: goto label_1662d4;
            case 0x1662D8u: goto label_1662d8;
            case 0x1662DCu: goto label_1662dc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1662C8u; }
            if (ctx->pc != 0x1662C8u) { return; }
        }
    }
    ctx->pc = 0x1662C8u;
label_1662c8:
    // 0x1662c8: 0xdfb00000
    ctx->pc = 0x1662c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1662cc:
    // 0x1662cc: 0xdfb10008
    ctx->pc = 0x1662ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1662d0:
    // 0x1662d0: 0xdfbf0010
    ctx->pc = 0x1662d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1662d4:
    // 0x1662d4: 0x3e00008
label_1662d8:
    if (ctx->pc == 0x1662D8u) {
        ctx->pc = 0x1662D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1662DCu;
        goto label_1662dc;
    }
    ctx->pc = 0x1662D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1662D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166260u: goto label_166260;
            case 0x166264u: goto label_166264;
            case 0x166268u: goto label_166268;
            case 0x16626Cu: goto label_16626c;
            case 0x166270u: goto label_166270;
            case 0x166274u: goto label_166274;
            case 0x166278u: goto label_166278;
            case 0x16627Cu: goto label_16627c;
            case 0x166280u: goto label_166280;
            case 0x166284u: goto label_166284;
            case 0x166288u: goto label_166288;
            case 0x16628Cu: goto label_16628c;
            case 0x166290u: goto label_166290;
            case 0x166294u: goto label_166294;
            case 0x166298u: goto label_166298;
            case 0x16629Cu: goto label_16629c;
            case 0x1662A0u: goto label_1662a0;
            case 0x1662A4u: goto label_1662a4;
            case 0x1662A8u: goto label_1662a8;
            case 0x1662ACu: goto label_1662ac;
            case 0x1662B0u: goto label_1662b0;
            case 0x1662B4u: goto label_1662b4;
            case 0x1662B8u: goto label_1662b8;
            case 0x1662BCu: goto label_1662bc;
            case 0x1662C0u: goto label_1662c0;
            case 0x1662C4u: goto label_1662c4;
            case 0x1662C8u: goto label_1662c8;
            case 0x1662CCu: goto label_1662cc;
            case 0x1662D0u: goto label_1662d0;
            case 0x1662D4u: goto label_1662d4;
            case 0x1662D8u: goto label_1662d8;
            case 0x1662DCu: goto label_1662dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1662DCu;
label_1662dc:
    // 0x1662dc: 0x0
    ctx->pc = 0x1662dcu;
    // NOP
}
