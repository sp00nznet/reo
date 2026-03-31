#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015B148
// Address: 0x15b148 - 0x15b1c0
void sub_0015B148_0x15b148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15b148u;

label_15b148:
    // 0x15b148: 0x3c020024
    ctx->pc = 0x15b148u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_15b14c:
    // 0x15b14c: 0x3c035a5a
    ctx->pc = 0x15b14cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)23130 << 16));
label_15b150:
    // 0x15b150: 0x8c44e650
    ctx->pc = 0x15b150u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294960720)));
label_15b154:
    // 0x15b154: 0x27bdfff0
    ctx->pc = 0x15b154u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_15b158:
    // 0x15b158: 0x34635a5a
    ctx->pc = 0x15b158u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 23130));
label_15b15c:
    // 0x15b15c: 0x10830008
label_15b160:
    if (ctx->pc == 0x15B160u) {
        ctx->pc = 0x15B160u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x15B164u;
        goto label_15b164;
    }
    ctx->pc = 0x15B15Cu;
    {
        const bool branch_taken_0x15b15c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x15B160u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x15b15c) {
            ctx->pc = 0x15B180u;
            goto label_15b180;
        }
    }
    ctx->pc = 0x15B164u;
label_15b164:
    // 0x15b164: 0x3c05ff03
    ctx->pc = 0x15b164u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
label_15b168:
    // 0x15b168: 0xdfbf0000
    ctx->pc = 0x15b168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15b16c:
    // 0x15b16c: 0x202d
    ctx->pc = 0x15b16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b170:
    // 0x15b170: 0x34a5ff02
    ctx->pc = 0x15b170u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65282));
label_15b174:
    // 0x15b174: 0x80563ce
label_15b178:
    if (ctx->pc == 0x15B178u) {
        ctx->pc = 0x15B178u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x15B17Cu;
        goto label_15b17c;
    }
    ctx->pc = 0x15B174u;
    ctx->pc = 0x15B178u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x158F38u;
    sub_00158F38_0x158f38(rdram, ctx, runtime); return;
    ctx->pc = 0x15B17Cu;
label_15b17c:
    // 0x15b17c: 0x0
    ctx->pc = 0x15b17cu;
    // NOP
label_15b180:
    // 0x15b180: 0x3c020024
    ctx->pc = 0x15b180u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_15b184:
    // 0x15b184: 0x24040004
    ctx->pc = 0x15b184u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
label_15b188:
    // 0x15b188: 0x9043e664
    ctx->pc = 0x15b188u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294960740)));
label_15b18c:
    // 0x15b18c: 0x10640008
label_15b190:
    if (ctx->pc == 0x15B190u) {
        ctx->pc = 0x15B190u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x15B194u;
        goto label_15b194;
    }
    ctx->pc = 0x15B18Cu;
    {
        const bool branch_taken_0x15b18c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x15B190u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x15b18c) {
            ctx->pc = 0x15B1B0u;
            goto label_15b1b0;
        }
    }
    ctx->pc = 0x15B194u;
label_15b194:
    // 0x15b194: 0x0
    ctx->pc = 0x15b194u;
    // NOP
label_15b198:
    // 0x15b198: 0x2401ffff
    ctx->pc = 0x15b198u;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 0), 4294967295));
label_15b19c:
    // 0x15b19c: 0x20f809
label_15b1a0:
    if (ctx->pc == 0x15B1A0u) {
        ctx->pc = 0x15B1A4u;
        goto label_15b1a4;
    }
    ctx->pc = 0x15B19Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x15B1A4u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B148u: goto label_15b148;
            case 0x15B14Cu: goto label_15b14c;
            case 0x15B150u: goto label_15b150;
            case 0x15B154u: goto label_15b154;
            case 0x15B158u: goto label_15b158;
            case 0x15B15Cu: goto label_15b15c;
            case 0x15B160u: goto label_15b160;
            case 0x15B164u: goto label_15b164;
            case 0x15B168u: goto label_15b168;
            case 0x15B16Cu: goto label_15b16c;
            case 0x15B170u: goto label_15b170;
            case 0x15B174u: goto label_15b174;
            case 0x15B178u: goto label_15b178;
            case 0x15B17Cu: goto label_15b17c;
            case 0x15B180u: goto label_15b180;
            case 0x15B184u: goto label_15b184;
            case 0x15B188u: goto label_15b188;
            case 0x15B18Cu: goto label_15b18c;
            case 0x15B190u: goto label_15b190;
            case 0x15B194u: goto label_15b194;
            case 0x15B198u: goto label_15b198;
            case 0x15B19Cu: goto label_15b19c;
            case 0x15B1A0u: goto label_15b1a0;
            case 0x15B1A4u: goto label_15b1a4;
            case 0x15B1A8u: goto label_15b1a8;
            case 0x15B1ACu: goto label_15b1ac;
            case 0x15B1B0u: goto label_15b1b0;
            case 0x15B1B4u: goto label_15b1b4;
            case 0x15B1B8u: goto label_15b1b8;
            case 0x15B1BCu: goto label_15b1bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15B1A4u; }
            if (ctx->pc != 0x15B1A4u) { return; }
        }
    }
    ctx->pc = 0x15B1A4u;
label_15b1a4:
    // 0x15b1a4: 0x1000fffc
label_15b1a8:
    if (ctx->pc == 0x15B1A8u) {
        ctx->pc = 0x15B1ACu;
        goto label_15b1ac;
    }
    ctx->pc = 0x15B1A4u;
    {
        const bool branch_taken_0x15b1a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x15b1a4) {
            ctx->pc = 0x15B198u;
            goto label_15b198;
        }
    }
    ctx->pc = 0x15B1ACu;
label_15b1ac:
    // 0x15b1ac: 0x0
    ctx->pc = 0x15b1acu;
    // NOP
label_15b1b0:
    // 0x15b1b0: 0x102d
    ctx->pc = 0x15b1b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b1b4:
    // 0x15b1b4: 0x3e00008
label_15b1b8:
    if (ctx->pc == 0x15B1B8u) {
        ctx->pc = 0x15B1B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x15B1BCu;
        goto label_15b1bc;
    }
    ctx->pc = 0x15B1B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B1B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B148u: goto label_15b148;
            case 0x15B14Cu: goto label_15b14c;
            case 0x15B150u: goto label_15b150;
            case 0x15B154u: goto label_15b154;
            case 0x15B158u: goto label_15b158;
            case 0x15B15Cu: goto label_15b15c;
            case 0x15B160u: goto label_15b160;
            case 0x15B164u: goto label_15b164;
            case 0x15B168u: goto label_15b168;
            case 0x15B16Cu: goto label_15b16c;
            case 0x15B170u: goto label_15b170;
            case 0x15B174u: goto label_15b174;
            case 0x15B178u: goto label_15b178;
            case 0x15B17Cu: goto label_15b17c;
            case 0x15B180u: goto label_15b180;
            case 0x15B184u: goto label_15b184;
            case 0x15B188u: goto label_15b188;
            case 0x15B18Cu: goto label_15b18c;
            case 0x15B190u: goto label_15b190;
            case 0x15B194u: goto label_15b194;
            case 0x15B198u: goto label_15b198;
            case 0x15B19Cu: goto label_15b19c;
            case 0x15B1A0u: goto label_15b1a0;
            case 0x15B1A4u: goto label_15b1a4;
            case 0x15B1A8u: goto label_15b1a8;
            case 0x15B1ACu: goto label_15b1ac;
            case 0x15B1B0u: goto label_15b1b0;
            case 0x15B1B4u: goto label_15b1b4;
            case 0x15B1B8u: goto label_15b1b8;
            case 0x15B1BCu: goto label_15b1bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15B1BCu;
label_15b1bc:
    // 0x15b1bc: 0x0
    ctx->pc = 0x15b1bcu;
    // NOP
}
