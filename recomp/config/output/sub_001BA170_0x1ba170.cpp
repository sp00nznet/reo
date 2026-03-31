#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BA170
// Address: 0x1ba170 - 0x1ba440
void sub_001BA170_0x1ba170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ba170u;

label_1ba170:
    // 0x1ba170: 0x27bdffc0
    ctx->pc = 0x1ba170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ba174:
    // 0x1ba174: 0x3c02004c
    ctx->pc = 0x1ba174u;
    SET_GPR_U32(ctx, 2, ((uint32_t)76 << 16));
label_1ba178:
    // 0x1ba178: 0xffbf0030
    ctx->pc = 0x1ba178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1ba17c:
    // 0x1ba17c: 0x41880
    ctx->pc = 0x1ba17cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_1ba180:
    // 0x1ba180: 0x7fb20020
    ctx->pc = 0x1ba180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ba184:
    // 0x1ba184: 0x2442ae24
    ctx->pc = 0x1ba184u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294946340));
label_1ba188:
    // 0x1ba188: 0x7fb10010
    ctx->pc = 0x1ba188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ba18c:
    // 0x1ba18c: 0x431821
    ctx->pc = 0x1ba18cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ba190:
    // 0x1ba190: 0x7fb00000
    ctx->pc = 0x1ba190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ba194:
    // 0x1ba194: 0xa0882d
    ctx->pc = 0x1ba194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ba198:
    // 0x1ba198: 0x8c620000
    ctx->pc = 0x1ba198u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ba19c:
    // 0x1ba19c: 0x80902d
    ctx->pc = 0x1ba19cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ba1a0:
    // 0x1ba1a0: 0x10510005
label_1ba1a4:
    if (ctx->pc == 0x1BA1A4u) {
        ctx->pc = 0x1BA1A4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA1A8u;
        goto label_1ba1a8;
    }
    ctx->pc = 0x1BA1A0u;
    {
        const bool branch_taken_0x1ba1a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x1BA1A4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ba1a0) {
            ctx->pc = 0x1BA1B8u;
            goto label_1ba1b8;
        }
    }
    ctx->pc = 0x1BA1A8u;
label_1ba1a8:
    // 0x1ba1a8: 0xc06b688
label_1ba1ac:
    if (ctx->pc == 0x1BA1ACu) {
        ctx->pc = 0x1BA1ACu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->pc = 0x1BA1B0u;
        goto label_1ba1b0;
    }
    ctx->pc = 0x1BA1A8u;
    SET_GPR_U32(ctx, 31, 0x1BA1B0u);
    ctx->pc = 0x1BA1ACu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    ctx->pc = 0x1ADA20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADA20_0x1ada20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1B0u; }
    }
    if (ctx->pc != 0x1BA1B0u) { return; }
    ctx->pc = 0x1BA1B0u;
label_1ba1b0:
    // 0x1ba1b0: 0x1000001e
label_1ba1b4:
    if (ctx->pc == 0x1BA1B4u) {
        ctx->pc = 0x1BA1B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA1B8u;
        goto label_1ba1b8;
    }
    ctx->pc = 0x1BA1B0u;
    {
        const bool branch_taken_0x1ba1b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BA1B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ba1b0) {
            ctx->pc = 0x1BA22Cu;
            goto label_1ba22c;
        }
    }
    ctx->pc = 0x1BA1B8u;
label_1ba1b8:
    // 0x1ba1b8: 0xc06b8b8
label_1ba1bc:
    if (ctx->pc == 0x1BA1BCu) {
        ctx->pc = 0x1BA1BCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1BA1C0u;
        goto label_1ba1c0;
    }
    ctx->pc = 0x1BA1B8u;
    SET_GPR_U32(ctx, 31, 0x1BA1C0u);
    ctx->pc = 0x1BA1BCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1AE2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE2E0_0x1ae2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1C0u; }
    }
    if (ctx->pc != 0x1BA1C0u) { return; }
    ctx->pc = 0x1BA1C0u;
label_1ba1c0:
    // 0x1ba1c0: 0x10400016
label_1ba1c4:
    if (ctx->pc == 0x1BA1C4u) {
        ctx->pc = 0x1BA1C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA1C8u;
        goto label_1ba1c8;
    }
    ctx->pc = 0x1BA1C0u;
    {
        const bool branch_taken_0x1ba1c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BA1C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ba1c0) {
            ctx->pc = 0x1BA21Cu;
            goto label_1ba21c;
        }
    }
    ctx->pc = 0x1BA1C8u;
label_1ba1c8:
    // 0x1ba1c8: 0x240202d
    ctx->pc = 0x1ba1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ba1cc:
    // 0x1ba1cc: 0xc06b8b8
label_1ba1d0:
    if (ctx->pc == 0x1BA1D0u) {
        ctx->pc = 0x1BA1D0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA1D4u;
        goto label_1ba1d4;
    }
    ctx->pc = 0x1BA1CCu;
    SET_GPR_U32(ctx, 31, 0x1BA1D4u);
    ctx->pc = 0x1BA1D0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AE2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE2E0_0x1ae2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1D4u; }
    }
    if (ctx->pc != 0x1BA1D4u) { return; }
    ctx->pc = 0x1BA1D4u;
label_1ba1d4:
    // 0x1ba1d4: 0x10400004
label_1ba1d8:
    if (ctx->pc == 0x1BA1D8u) {
        ctx->pc = 0x1BA1D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA1DCu;
        goto label_1ba1dc;
    }
    ctx->pc = 0x1BA1D4u;
    {
        const bool branch_taken_0x1ba1d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BA1D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ba1d4) {
            ctx->pc = 0x1BA1E8u;
            goto label_1ba1e8;
        }
    }
    ctx->pc = 0x1BA1DCu;
label_1ba1dc:
    // 0x1ba1dc: 0x24030005
    ctx->pc = 0x1ba1dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
label_1ba1e0:
    // 0x1ba1e0: 0x14430006
label_1ba1e4:
    if (ctx->pc == 0x1BA1E4u) {
        ctx->pc = 0x1BA1E8u;
        goto label_1ba1e8;
    }
    ctx->pc = 0x1BA1E0u;
    {
        const bool branch_taken_0x1ba1e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1ba1e0) {
            ctx->pc = 0x1BA1FCu;
            goto label_1ba1fc;
        }
    }
    ctx->pc = 0x1BA1E8u;
label_1ba1e8:
    // 0x1ba1e8: 0x220282d
    ctx->pc = 0x1ba1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ba1ec:
    // 0x1ba1ec: 0xc06b688
label_1ba1f0:
    if (ctx->pc == 0x1BA1F0u) {
        ctx->pc = 0x1BA1F0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA1F4u;
        goto label_1ba1f4;
    }
    ctx->pc = 0x1BA1ECu;
    SET_GPR_U32(ctx, 31, 0x1BA1F4u);
    ctx->pc = 0x1BA1F0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ADA20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADA20_0x1ada20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1F4u; }
    }
    if (ctx->pc != 0x1BA1F4u) { return; }
    ctx->pc = 0x1BA1F4u;
label_1ba1f4:
    // 0x1ba1f4: 0x1000000c
label_1ba1f8:
    if (ctx->pc == 0x1BA1F8u) {
        ctx->pc = 0x1BA1FCu;
        goto label_1ba1fc;
    }
    ctx->pc = 0x1BA1F4u;
    {
        const bool branch_taken_0x1ba1f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ba1f4) {
            ctx->pc = 0x1BA228u;
            goto label_1ba228;
        }
    }
    ctx->pc = 0x1BA1FCu;
label_1ba1fc:
    // 0x1ba1fc: 0xc06b7d4
label_1ba200:
    if (ctx->pc == 0x1BA200u) {
        ctx->pc = 0x1BA200u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA204u;
        goto label_1ba204;
    }
    ctx->pc = 0x1BA1FCu;
    SET_GPR_U32(ctx, 31, 0x1BA204u);
    ctx->pc = 0x1BA200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ADF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADF50_0x1adf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA204u; }
    }
    if (ctx->pc != 0x1BA204u) { return; }
    ctx->pc = 0x1BA204u;
label_1ba204:
    // 0x1ba204: 0x240202d
    ctx->pc = 0x1ba204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ba208:
    // 0x1ba208: 0x2405007f
    ctx->pc = 0x1ba208u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 127));
label_1ba20c:
    // 0x1ba20c: 0xc06b8fc
label_1ba210:
    if (ctx->pc == 0x1BA210u) {
        ctx->pc = 0x1BA210u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x1BA214u;
        goto label_1ba214;
    }
    ctx->pc = 0x1BA20Cu;
    SET_GPR_U32(ctx, 31, 0x1BA214u);
    ctx->pc = 0x1BA210u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 60));
    ctx->pc = 0x1AE3F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE3F0_0x1ae3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA214u; }
    }
    if (ctx->pc != 0x1BA214u) { return; }
    ctx->pc = 0x1BA214u;
label_1ba214:
    // 0x1ba214: 0x10000005
label_1ba218:
    if (ctx->pc == 0x1BA218u) {
        ctx->pc = 0x1BA218u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BA21Cu;
        goto label_1ba21c;
    }
    ctx->pc = 0x1BA214u;
    {
        const bool branch_taken_0x1ba214 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BA218u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ba214) {
            ctx->pc = 0x1BA22Cu;
            goto label_1ba22c;
        }
    }
    ctx->pc = 0x1BA21Cu;
label_1ba21c:
    // 0x1ba21c: 0x220282d
    ctx->pc = 0x1ba21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ba220:
    // 0x1ba220: 0xc06b688
label_1ba224:
    if (ctx->pc == 0x1BA224u) {
        ctx->pc = 0x1BA224u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA228u;
        goto label_1ba228;
    }
    ctx->pc = 0x1BA220u;
    SET_GPR_U32(ctx, 31, 0x1BA228u);
    ctx->pc = 0x1BA224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ADA20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADA20_0x1ada20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA228u; }
    }
    if (ctx->pc != 0x1BA228u) { return; }
    ctx->pc = 0x1BA228u;
label_1ba228:
    // 0x1ba228: 0x102d
    ctx->pc = 0x1ba228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba22c:
    // 0x1ba22c: 0xdfbf0030
    ctx->pc = 0x1ba22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ba230:
    // 0x1ba230: 0x7bb20020
    ctx->pc = 0x1ba230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ba234:
    // 0x1ba234: 0x7bb10010
    ctx->pc = 0x1ba234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ba238:
    // 0x1ba238: 0x7bb00000
    ctx->pc = 0x1ba238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba23c:
    // 0x1ba23c: 0x3e00008
label_1ba240:
    if (ctx->pc == 0x1BA240u) {
        ctx->pc = 0x1BA240u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1BA244u;
        goto label_1ba244;
    }
    ctx->pc = 0x1BA23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA240u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BA170u: goto label_1ba170;
            case 0x1BA174u: goto label_1ba174;
            case 0x1BA178u: goto label_1ba178;
            case 0x1BA17Cu: goto label_1ba17c;
            case 0x1BA180u: goto label_1ba180;
            case 0x1BA184u: goto label_1ba184;
            case 0x1BA188u: goto label_1ba188;
            case 0x1BA18Cu: goto label_1ba18c;
            case 0x1BA190u: goto label_1ba190;
            case 0x1BA194u: goto label_1ba194;
            case 0x1BA198u: goto label_1ba198;
            case 0x1BA19Cu: goto label_1ba19c;
            case 0x1BA1A0u: goto label_1ba1a0;
            case 0x1BA1A4u: goto label_1ba1a4;
            case 0x1BA1A8u: goto label_1ba1a8;
            case 0x1BA1ACu: goto label_1ba1ac;
            case 0x1BA1B0u: goto label_1ba1b0;
            case 0x1BA1B4u: goto label_1ba1b4;
            case 0x1BA1B8u: goto label_1ba1b8;
            case 0x1BA1BCu: goto label_1ba1bc;
            case 0x1BA1C0u: goto label_1ba1c0;
            case 0x1BA1C4u: goto label_1ba1c4;
            case 0x1BA1C8u: goto label_1ba1c8;
            case 0x1BA1CCu: goto label_1ba1cc;
            case 0x1BA1D0u: goto label_1ba1d0;
            case 0x1BA1D4u: goto label_1ba1d4;
            case 0x1BA1D8u: goto label_1ba1d8;
            case 0x1BA1DCu: goto label_1ba1dc;
            case 0x1BA1E0u: goto label_1ba1e0;
            case 0x1BA1E4u: goto label_1ba1e4;
            case 0x1BA1E8u: goto label_1ba1e8;
            case 0x1BA1ECu: goto label_1ba1ec;
            case 0x1BA1F0u: goto label_1ba1f0;
            case 0x1BA1F4u: goto label_1ba1f4;
            case 0x1BA1F8u: goto label_1ba1f8;
            case 0x1BA1FCu: goto label_1ba1fc;
            case 0x1BA200u: goto label_1ba200;
            case 0x1BA204u: goto label_1ba204;
            case 0x1BA208u: goto label_1ba208;
            case 0x1BA20Cu: goto label_1ba20c;
            case 0x1BA210u: goto label_1ba210;
            case 0x1BA214u: goto label_1ba214;
            case 0x1BA218u: goto label_1ba218;
            case 0x1BA21Cu: goto label_1ba21c;
            case 0x1BA220u: goto label_1ba220;
            case 0x1BA224u: goto label_1ba224;
            case 0x1BA228u: goto label_1ba228;
            case 0x1BA22Cu: goto label_1ba22c;
            case 0x1BA230u: goto label_1ba230;
            case 0x1BA234u: goto label_1ba234;
            case 0x1BA238u: goto label_1ba238;
            case 0x1BA23Cu: goto label_1ba23c;
            case 0x1BA240u: goto label_1ba240;
            case 0x1BA244u: goto label_1ba244;
            case 0x1BA248u: goto label_1ba248;
            case 0x1BA24Cu: goto label_1ba24c;
            case 0x1BA250u: goto label_1ba250;
            case 0x1BA254u: goto label_1ba254;
            case 0x1BA258u: goto label_1ba258;
            case 0x1BA25Cu: goto label_1ba25c;
            case 0x1BA260u: goto label_1ba260;
            case 0x1BA264u: goto label_1ba264;
            case 0x1BA268u: goto label_1ba268;
            case 0x1BA26Cu: goto label_1ba26c;
            case 0x1BA270u: goto label_1ba270;
            case 0x1BA274u: goto label_1ba274;
            case 0x1BA278u: goto label_1ba278;
            case 0x1BA27Cu: goto label_1ba27c;
            case 0x1BA280u: goto label_1ba280;
            case 0x1BA284u: goto label_1ba284;
            case 0x1BA288u: goto label_1ba288;
            case 0x1BA28Cu: goto label_1ba28c;
            case 0x1BA290u: goto label_1ba290;
            case 0x1BA294u: goto label_1ba294;
            case 0x1BA298u: goto label_1ba298;
            case 0x1BA29Cu: goto label_1ba29c;
            case 0x1BA2A0u: goto label_1ba2a0;
            case 0x1BA2A4u: goto label_1ba2a4;
            case 0x1BA2A8u: goto label_1ba2a8;
            case 0x1BA2ACu: goto label_1ba2ac;
            case 0x1BA2B0u: goto label_1ba2b0;
            case 0x1BA2B4u: goto label_1ba2b4;
            case 0x1BA2B8u: goto label_1ba2b8;
            case 0x1BA2BCu: goto label_1ba2bc;
            case 0x1BA2C0u: goto label_1ba2c0;
            case 0x1BA2C4u: goto label_1ba2c4;
            case 0x1BA2C8u: goto label_1ba2c8;
            case 0x1BA2CCu: goto label_1ba2cc;
            case 0x1BA2D0u: goto label_1ba2d0;
            case 0x1BA2D4u: goto label_1ba2d4;
            case 0x1BA2D8u: goto label_1ba2d8;
            case 0x1BA2DCu: goto label_1ba2dc;
            case 0x1BA2E0u: goto label_1ba2e0;
            case 0x1BA2E4u: goto label_1ba2e4;
            case 0x1BA2E8u: goto label_1ba2e8;
            case 0x1BA2ECu: goto label_1ba2ec;
            case 0x1BA2F0u: goto label_1ba2f0;
            case 0x1BA2F4u: goto label_1ba2f4;
            case 0x1BA2F8u: goto label_1ba2f8;
            case 0x1BA2FCu: goto label_1ba2fc;
            case 0x1BA300u: goto label_1ba300;
            case 0x1BA304u: goto label_1ba304;
            case 0x1BA308u: goto label_1ba308;
            case 0x1BA30Cu: goto label_1ba30c;
            case 0x1BA310u: goto label_1ba310;
            case 0x1BA314u: goto label_1ba314;
            case 0x1BA318u: goto label_1ba318;
            case 0x1BA31Cu: goto label_1ba31c;
            case 0x1BA320u: goto label_1ba320;
            case 0x1BA324u: goto label_1ba324;
            case 0x1BA328u: goto label_1ba328;
            case 0x1BA32Cu: goto label_1ba32c;
            case 0x1BA330u: goto label_1ba330;
            case 0x1BA334u: goto label_1ba334;
            case 0x1BA338u: goto label_1ba338;
            case 0x1BA33Cu: goto label_1ba33c;
            case 0x1BA340u: goto label_1ba340;
            case 0x1BA344u: goto label_1ba344;
            case 0x1BA348u: goto label_1ba348;
            case 0x1BA34Cu: goto label_1ba34c;
            case 0x1BA350u: goto label_1ba350;
            case 0x1BA354u: goto label_1ba354;
            case 0x1BA358u: goto label_1ba358;
            case 0x1BA35Cu: goto label_1ba35c;
            case 0x1BA360u: goto label_1ba360;
            case 0x1BA364u: goto label_1ba364;
            case 0x1BA368u: goto label_1ba368;
            case 0x1BA36Cu: goto label_1ba36c;
            case 0x1BA370u: goto label_1ba370;
            case 0x1BA374u: goto label_1ba374;
            case 0x1BA378u: goto label_1ba378;
            case 0x1BA37Cu: goto label_1ba37c;
            case 0x1BA380u: goto label_1ba380;
            case 0x1BA384u: goto label_1ba384;
            case 0x1BA388u: goto label_1ba388;
            case 0x1BA38Cu: goto label_1ba38c;
            case 0x1BA390u: goto label_1ba390;
            case 0x1BA394u: goto label_1ba394;
            case 0x1BA398u: goto label_1ba398;
            case 0x1BA39Cu: goto label_1ba39c;
            case 0x1BA3A0u: goto label_1ba3a0;
            case 0x1BA3A4u: goto label_1ba3a4;
            case 0x1BA3A8u: goto label_1ba3a8;
            case 0x1BA3ACu: goto label_1ba3ac;
            case 0x1BA3B0u: goto label_1ba3b0;
            case 0x1BA3B4u: goto label_1ba3b4;
            case 0x1BA3B8u: goto label_1ba3b8;
            case 0x1BA3BCu: goto label_1ba3bc;
            case 0x1BA3C0u: goto label_1ba3c0;
            case 0x1BA3C4u: goto label_1ba3c4;
            case 0x1BA3C8u: goto label_1ba3c8;
            case 0x1BA3CCu: goto label_1ba3cc;
            case 0x1BA3D0u: goto label_1ba3d0;
            case 0x1BA3D4u: goto label_1ba3d4;
            case 0x1BA3D8u: goto label_1ba3d8;
            case 0x1BA3DCu: goto label_1ba3dc;
            case 0x1BA3E0u: goto label_1ba3e0;
            case 0x1BA3E4u: goto label_1ba3e4;
            case 0x1BA3E8u: goto label_1ba3e8;
            case 0x1BA3ECu: goto label_1ba3ec;
            case 0x1BA3F0u: goto label_1ba3f0;
            case 0x1BA3F4u: goto label_1ba3f4;
            case 0x1BA3F8u: goto label_1ba3f8;
            case 0x1BA3FCu: goto label_1ba3fc;
            case 0x1BA400u: goto label_1ba400;
            case 0x1BA404u: goto label_1ba404;
            case 0x1BA408u: goto label_1ba408;
            case 0x1BA40Cu: goto label_1ba40c;
            case 0x1BA410u: goto label_1ba410;
            case 0x1BA414u: goto label_1ba414;
            case 0x1BA418u: goto label_1ba418;
            case 0x1BA41Cu: goto label_1ba41c;
            case 0x1BA420u: goto label_1ba420;
            case 0x1BA424u: goto label_1ba424;
            case 0x1BA428u: goto label_1ba428;
            case 0x1BA42Cu: goto label_1ba42c;
            case 0x1BA430u: goto label_1ba430;
            case 0x1BA434u: goto label_1ba434;
            case 0x1BA438u: goto label_1ba438;
            case 0x1BA43Cu: goto label_1ba43c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BA244u;
label_1ba244:
    // 0x1ba244: 0x0
    ctx->pc = 0x1ba244u;
    // NOP
label_1ba248:
    // 0x1ba248: 0x0
    ctx->pc = 0x1ba248u;
    // NOP
label_1ba24c:
    // 0x1ba24c: 0x0
    ctx->pc = 0x1ba24cu;
    // NOP
label_1ba250:
    // 0x1ba250: 0x27bdffb0
    ctx->pc = 0x1ba250u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_1ba254:
    // 0x1ba254: 0xffbf0030
    ctx->pc = 0x1ba254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1ba258:
    // 0x1ba258: 0x7fb20020
    ctx->pc = 0x1ba258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ba25c:
    // 0x1ba25c: 0x7fb10010
    ctx->pc = 0x1ba25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ba260:
    // 0x1ba260: 0x80902d
    ctx->pc = 0x1ba260u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ba264:
    // 0x1ba264: 0xc0882d
    ctx->pc = 0x1ba264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ba268:
    // 0x1ba268: 0x6210003
label_1ba26c:
    if (ctx->pc == 0x1BA26Cu) {
        ctx->pc = 0x1BA26Cu;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1BA270u;
        goto label_1ba270;
    }
    ctx->pc = 0x1BA268u;
    {
        const bool branch_taken_0x1ba268 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1BA26Cu;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        if (branch_taken_0x1ba268) {
            ctx->pc = 0x1BA278u;
            goto label_1ba278;
        }
    }
    ctx->pc = 0x1BA270u;
label_1ba270:
    // 0x1ba270: 0x10000029
label_1ba274:
    if (ctx->pc == 0x1BA274u) {
        ctx->pc = 0x1BA274u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1BA278u;
        goto label_1ba278;
    }
    ctx->pc = 0x1BA270u;
    {
        const bool branch_taken_0x1ba270 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BA274u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1ba270) {
            ctx->pc = 0x1BA318u;
            goto label_1ba318;
        }
    }
    ctx->pc = 0x1BA278u;
label_1ba278:
    // 0x1ba278: 0x92420002
    ctx->pc = 0x1ba278u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_1ba27c:
    // 0x1ba27c: 0x14400002
label_1ba280:
    if (ctx->pc == 0x1BA280u) {
        ctx->pc = 0x1BA280u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1BA284u;
        goto label_1ba284;
    }
    ctx->pc = 0x1BA27Cu;
    {
        const bool branch_taken_0x1ba27c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BA280u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x1ba27c) {
            ctx->pc = 0x1BA288u;
            goto label_1ba288;
        }
    }
    ctx->pc = 0x1BA284u;
label_1ba284:
    // 0x1ba284: 0x92500003
    ctx->pc = 0x1ba284u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_1ba288:
    // 0x1ba288: 0x3c02004c
    ctx->pc = 0x1ba288u;
    SET_GPR_U32(ctx, 2, ((uint32_t)76 << 16));
label_1ba28c:
    // 0x1ba28c: 0x2442ae71
    ctx->pc = 0x1ba28cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294946417));
label_1ba290:
    // 0x1ba290: 0x501021
    ctx->pc = 0x1ba290u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1ba294:
    // 0x1ba294: 0x90420000
    ctx->pc = 0x1ba294u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ba298:
    // 0x1ba298: 0x14400003
label_1ba29c:
    if (ctx->pc == 0x1BA29Cu) {
        ctx->pc = 0x1BA29Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1BA2A0u;
        goto label_1ba2a0;
    }
    ctx->pc = 0x1BA298u;
    {
        const bool branch_taken_0x1ba298 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BA29Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1ba298) {
            ctx->pc = 0x1BA2A8u;
            goto label_1ba2a8;
        }
    }
    ctx->pc = 0x1BA2A0u;
label_1ba2a0:
    // 0x1ba2a0: 0x1000001d
label_1ba2a4:
    if (ctx->pc == 0x1BA2A4u) {
        ctx->pc = 0x1BA2A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1BA2A8u;
        goto label_1ba2a8;
    }
    ctx->pc = 0x1BA2A0u;
    {
        const bool branch_taken_0x1ba2a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BA2A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1ba2a0) {
            ctx->pc = 0x1BA318u;
            goto label_1ba318;
        }
    }
    ctx->pc = 0x1BA2A8u;
label_1ba2a8:
    // 0x1ba2a8: 0xc06b8b8
label_1ba2ac:
    if (ctx->pc == 0x1BA2ACu) {
        ctx->pc = 0x1BA2ACu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2B0u;
        goto label_1ba2b0;
    }
    ctx->pc = 0x1BA2A8u;
    SET_GPR_U32(ctx, 31, 0x1BA2B0u);
    ctx->pc = 0x1BA2ACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AE2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE2E0_0x1ae2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA2B0u; }
    }
    if (ctx->pc != 0x1BA2B0u) { return; }
    ctx->pc = 0x1BA2B0u;
label_1ba2b0:
    // 0x1ba2b0: 0x24030001
    ctx->pc = 0x1ba2b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1ba2b4:
    // 0x1ba2b4: 0x10430003
label_1ba2b8:
    if (ctx->pc == 0x1BA2B8u) {
        ctx->pc = 0x1BA2B8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1BA2BCu;
        goto label_1ba2bc;
    }
    ctx->pc = 0x1BA2B4u;
    {
        const bool branch_taken_0x1ba2b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1BA2B8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1ba2b4) {
            ctx->pc = 0x1BA2C4u;
            goto label_1ba2c4;
        }
    }
    ctx->pc = 0x1BA2BCu;
label_1ba2bc:
    // 0x1ba2bc: 0x14440003
label_1ba2c0:
    if (ctx->pc == 0x1BA2C0u) {
        ctx->pc = 0x1BA2C0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 5));
        ctx->pc = 0x1BA2C4u;
        goto label_1ba2c4;
    }
    ctx->pc = 0x1BA2BCu;
    {
        const bool branch_taken_0x1ba2bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x1BA2C0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 5));
        if (branch_taken_0x1ba2bc) {
            ctx->pc = 0x1BA2CCu;
            goto label_1ba2cc;
        }
    }
    ctx->pc = 0x1BA2C4u;
label_1ba2c4:
    // 0x1ba2c4: 0x10000014
label_1ba2c8:
    if (ctx->pc == 0x1BA2C8u) {
        ctx->pc = 0x1BA2C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1BA2CCu;
        goto label_1ba2cc;
    }
    ctx->pc = 0x1BA2C4u;
    {
        const bool branch_taken_0x1ba2c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BA2C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1ba2c4) {
            ctx->pc = 0x1BA318u;
            goto label_1ba318;
        }
    }
    ctx->pc = 0x1BA2CCu;
label_1ba2cc:
    // 0x1ba2cc: 0xc06e85c
label_1ba2d0:
    if (ctx->pc == 0x1BA2D0u) {
        ctx->pc = 0x1BA2D0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2D4u;
        goto label_1ba2d4;
    }
    ctx->pc = 0x1BA2CCu;
    SET_GPR_U32(ctx, 31, 0x1BA2D4u);
    ctx->pc = 0x1BA2D0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1BA170u;
    goto label_1ba170;
    ctx->pc = 0x1BA2D4u;
label_1ba2d4:
    // 0x1ba2d4: 0x1440000f
label_1ba2d8:
    if (ctx->pc == 0x1BA2D8u) {
        ctx->pc = 0x1BA2D8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
        ctx->pc = 0x1BA2DCu;
        goto label_1ba2dc;
    }
    ctx->pc = 0x1BA2D4u;
    {
        const bool branch_taken_0x1ba2d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BA2D8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
        if (branch_taken_0x1ba2d4) {
            ctx->pc = 0x1BA314u;
            goto label_1ba314;
        }
    }
    ctx->pc = 0x1BA2DCu;
label_1ba2dc:
    // 0x1ba2dc: 0x26440038
    ctx->pc = 0x1ba2dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 56));
label_1ba2e0:
    // 0x1ba2e0: 0x8c254bf4
    ctx->pc = 0x1ba2e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 19444)));
label_1ba2e4:
    // 0x1ba2e4: 0x27a6004c
    ctx->pc = 0x1ba2e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 76));
label_1ba2e8:
    // 0x1ba2e8: 0xc06e52c
label_1ba2ec:
    if (ctx->pc == 0x1BA2ECu) {
        ctx->pc = 0x1BA2ECu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 72));
        ctx->pc = 0x1BA2F0u;
        goto label_1ba2f0;
    }
    ctx->pc = 0x1BA2E8u;
    SET_GPR_U32(ctx, 31, 0x1BA2F0u);
    ctx->pc = 0x1BA2ECu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 72));
    ctx->pc = 0x1B94B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B94B0_0x1b94b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA2F0u; }
    }
    if (ctx->pc != 0x1BA2F0u) { return; }
    ctx->pc = 0x1BA2F0u;
label_1ba2f0:
    // 0x1ba2f0: 0x14400005
label_1ba2f4:
    if (ctx->pc == 0x1BA2F4u) {
        ctx->pc = 0x1BA2F4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1BA2F8u;
        goto label_1ba2f8;
    }
    ctx->pc = 0x1BA2F0u;
    {
        const bool branch_taken_0x1ba2f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BA2F4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1ba2f0) {
            ctx->pc = 0x1BA308u;
            goto label_1ba308;
        }
    }
    ctx->pc = 0x1BA2F8u;
label_1ba2f8:
    // 0x1ba2f8: 0xc06b7f4
label_1ba2fc:
    if (ctx->pc == 0x1BA2FCu) {
        ctx->pc = 0x1BA2FCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA300u;
        goto label_1ba300;
    }
    ctx->pc = 0x1BA2F8u;
    SET_GPR_U32(ctx, 31, 0x1BA300u);
    ctx->pc = 0x1BA2FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ADFD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADFD0_0x1adfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA300u; }
    }
    if (ctx->pc != 0x1BA300u) { return; }
    ctx->pc = 0x1BA300u;
label_1ba300:
    // 0x1ba300: 0x10000005
label_1ba304:
    if (ctx->pc == 0x1BA304u) {
        ctx->pc = 0x1BA304u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA308u;
        goto label_1ba308;
    }
    ctx->pc = 0x1BA300u;
    {
        const bool branch_taken_0x1ba300 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BA304u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ba300) {
            ctx->pc = 0x1BA318u;
            goto label_1ba318;
        }
    }
    ctx->pc = 0x1BA308u;
label_1ba308:
    // 0x1ba308: 0x8fa5004c
    ctx->pc = 0x1ba308u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1ba30c:
    // 0x1ba30c: 0xc06b7f4
label_1ba310:
    if (ctx->pc == 0x1BA310u) {
        ctx->pc = 0x1BA310u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1BA314u;
        goto label_1ba314;
    }
    ctx->pc = 0x1BA30Cu;
    SET_GPR_U32(ctx, 31, 0x1BA314u);
    ctx->pc = 0x1BA310u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1ADFD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADFD0_0x1adfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA314u; }
    }
    if (ctx->pc != 0x1BA314u) { return; }
    ctx->pc = 0x1BA314u;
label_1ba314:
    // 0x1ba314: 0x102d
    ctx->pc = 0x1ba314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba318:
    // 0x1ba318: 0xdfbf0030
    ctx->pc = 0x1ba318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ba31c:
    // 0x1ba31c: 0x7bb20020
    ctx->pc = 0x1ba31cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ba320:
    // 0x1ba320: 0x7bb10010
    ctx->pc = 0x1ba320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ba324:
    // 0x1ba324: 0x7bb00000
    ctx->pc = 0x1ba324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba328:
    // 0x1ba328: 0x3e00008
label_1ba32c:
    if (ctx->pc == 0x1BA32Cu) {
        ctx->pc = 0x1BA32Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1BA330u;
        goto label_1ba330;
    }
    ctx->pc = 0x1BA328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA32Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BA170u: goto label_1ba170;
            case 0x1BA174u: goto label_1ba174;
            case 0x1BA178u: goto label_1ba178;
            case 0x1BA17Cu: goto label_1ba17c;
            case 0x1BA180u: goto label_1ba180;
            case 0x1BA184u: goto label_1ba184;
            case 0x1BA188u: goto label_1ba188;
            case 0x1BA18Cu: goto label_1ba18c;
            case 0x1BA190u: goto label_1ba190;
            case 0x1BA194u: goto label_1ba194;
            case 0x1BA198u: goto label_1ba198;
            case 0x1BA19Cu: goto label_1ba19c;
            case 0x1BA1A0u: goto label_1ba1a0;
            case 0x1BA1A4u: goto label_1ba1a4;
            case 0x1BA1A8u: goto label_1ba1a8;
            case 0x1BA1ACu: goto label_1ba1ac;
            case 0x1BA1B0u: goto label_1ba1b0;
            case 0x1BA1B4u: goto label_1ba1b4;
            case 0x1BA1B8u: goto label_1ba1b8;
            case 0x1BA1BCu: goto label_1ba1bc;
            case 0x1BA1C0u: goto label_1ba1c0;
            case 0x1BA1C4u: goto label_1ba1c4;
            case 0x1BA1C8u: goto label_1ba1c8;
            case 0x1BA1CCu: goto label_1ba1cc;
            case 0x1BA1D0u: goto label_1ba1d0;
            case 0x1BA1D4u: goto label_1ba1d4;
            case 0x1BA1D8u: goto label_1ba1d8;
            case 0x1BA1DCu: goto label_1ba1dc;
            case 0x1BA1E0u: goto label_1ba1e0;
            case 0x1BA1E4u: goto label_1ba1e4;
            case 0x1BA1E8u: goto label_1ba1e8;
            case 0x1BA1ECu: goto label_1ba1ec;
            case 0x1BA1F0u: goto label_1ba1f0;
            case 0x1BA1F4u: goto label_1ba1f4;
            case 0x1BA1F8u: goto label_1ba1f8;
            case 0x1BA1FCu: goto label_1ba1fc;
            case 0x1BA200u: goto label_1ba200;
            case 0x1BA204u: goto label_1ba204;
            case 0x1BA208u: goto label_1ba208;
            case 0x1BA20Cu: goto label_1ba20c;
            case 0x1BA210u: goto label_1ba210;
            case 0x1BA214u: goto label_1ba214;
            case 0x1BA218u: goto label_1ba218;
            case 0x1BA21Cu: goto label_1ba21c;
            case 0x1BA220u: goto label_1ba220;
            case 0x1BA224u: goto label_1ba224;
            case 0x1BA228u: goto label_1ba228;
            case 0x1BA22Cu: goto label_1ba22c;
            case 0x1BA230u: goto label_1ba230;
            case 0x1BA234u: goto label_1ba234;
            case 0x1BA238u: goto label_1ba238;
            case 0x1BA23Cu: goto label_1ba23c;
            case 0x1BA240u: goto label_1ba240;
            case 0x1BA244u: goto label_1ba244;
            case 0x1BA248u: goto label_1ba248;
            case 0x1BA24Cu: goto label_1ba24c;
            case 0x1BA250u: goto label_1ba250;
            case 0x1BA254u: goto label_1ba254;
            case 0x1BA258u: goto label_1ba258;
            case 0x1BA25Cu: goto label_1ba25c;
            case 0x1BA260u: goto label_1ba260;
            case 0x1BA264u: goto label_1ba264;
            case 0x1BA268u: goto label_1ba268;
            case 0x1BA26Cu: goto label_1ba26c;
            case 0x1BA270u: goto label_1ba270;
            case 0x1BA274u: goto label_1ba274;
            case 0x1BA278u: goto label_1ba278;
            case 0x1BA27Cu: goto label_1ba27c;
            case 0x1BA280u: goto label_1ba280;
            case 0x1BA284u: goto label_1ba284;
            case 0x1BA288u: goto label_1ba288;
            case 0x1BA28Cu: goto label_1ba28c;
            case 0x1BA290u: goto label_1ba290;
            case 0x1BA294u: goto label_1ba294;
            case 0x1BA298u: goto label_1ba298;
            case 0x1BA29Cu: goto label_1ba29c;
            case 0x1BA2A0u: goto label_1ba2a0;
            case 0x1BA2A4u: goto label_1ba2a4;
            case 0x1BA2A8u: goto label_1ba2a8;
            case 0x1BA2ACu: goto label_1ba2ac;
            case 0x1BA2B0u: goto label_1ba2b0;
            case 0x1BA2B4u: goto label_1ba2b4;
            case 0x1BA2B8u: goto label_1ba2b8;
            case 0x1BA2BCu: goto label_1ba2bc;
            case 0x1BA2C0u: goto label_1ba2c0;
            case 0x1BA2C4u: goto label_1ba2c4;
            case 0x1BA2C8u: goto label_1ba2c8;
            case 0x1BA2CCu: goto label_1ba2cc;
            case 0x1BA2D0u: goto label_1ba2d0;
            case 0x1BA2D4u: goto label_1ba2d4;
            case 0x1BA2D8u: goto label_1ba2d8;
            case 0x1BA2DCu: goto label_1ba2dc;
            case 0x1BA2E0u: goto label_1ba2e0;
            case 0x1BA2E4u: goto label_1ba2e4;
            case 0x1BA2E8u: goto label_1ba2e8;
            case 0x1BA2ECu: goto label_1ba2ec;
            case 0x1BA2F0u: goto label_1ba2f0;
            case 0x1BA2F4u: goto label_1ba2f4;
            case 0x1BA2F8u: goto label_1ba2f8;
            case 0x1BA2FCu: goto label_1ba2fc;
            case 0x1BA300u: goto label_1ba300;
            case 0x1BA304u: goto label_1ba304;
            case 0x1BA308u: goto label_1ba308;
            case 0x1BA30Cu: goto label_1ba30c;
            case 0x1BA310u: goto label_1ba310;
            case 0x1BA314u: goto label_1ba314;
            case 0x1BA318u: goto label_1ba318;
            case 0x1BA31Cu: goto label_1ba31c;
            case 0x1BA320u: goto label_1ba320;
            case 0x1BA324u: goto label_1ba324;
            case 0x1BA328u: goto label_1ba328;
            case 0x1BA32Cu: goto label_1ba32c;
            case 0x1BA330u: goto label_1ba330;
            case 0x1BA334u: goto label_1ba334;
            case 0x1BA338u: goto label_1ba338;
            case 0x1BA33Cu: goto label_1ba33c;
            case 0x1BA340u: goto label_1ba340;
            case 0x1BA344u: goto label_1ba344;
            case 0x1BA348u: goto label_1ba348;
            case 0x1BA34Cu: goto label_1ba34c;
            case 0x1BA350u: goto label_1ba350;
            case 0x1BA354u: goto label_1ba354;
            case 0x1BA358u: goto label_1ba358;
            case 0x1BA35Cu: goto label_1ba35c;
            case 0x1BA360u: goto label_1ba360;
            case 0x1BA364u: goto label_1ba364;
            case 0x1BA368u: goto label_1ba368;
            case 0x1BA36Cu: goto label_1ba36c;
            case 0x1BA370u: goto label_1ba370;
            case 0x1BA374u: goto label_1ba374;
            case 0x1BA378u: goto label_1ba378;
            case 0x1BA37Cu: goto label_1ba37c;
            case 0x1BA380u: goto label_1ba380;
            case 0x1BA384u: goto label_1ba384;
            case 0x1BA388u: goto label_1ba388;
            case 0x1BA38Cu: goto label_1ba38c;
            case 0x1BA390u: goto label_1ba390;
            case 0x1BA394u: goto label_1ba394;
            case 0x1BA398u: goto label_1ba398;
            case 0x1BA39Cu: goto label_1ba39c;
            case 0x1BA3A0u: goto label_1ba3a0;
            case 0x1BA3A4u: goto label_1ba3a4;
            case 0x1BA3A8u: goto label_1ba3a8;
            case 0x1BA3ACu: goto label_1ba3ac;
            case 0x1BA3B0u: goto label_1ba3b0;
            case 0x1BA3B4u: goto label_1ba3b4;
            case 0x1BA3B8u: goto label_1ba3b8;
            case 0x1BA3BCu: goto label_1ba3bc;
            case 0x1BA3C0u: goto label_1ba3c0;
            case 0x1BA3C4u: goto label_1ba3c4;
            case 0x1BA3C8u: goto label_1ba3c8;
            case 0x1BA3CCu: goto label_1ba3cc;
            case 0x1BA3D0u: goto label_1ba3d0;
            case 0x1BA3D4u: goto label_1ba3d4;
            case 0x1BA3D8u: goto label_1ba3d8;
            case 0x1BA3DCu: goto label_1ba3dc;
            case 0x1BA3E0u: goto label_1ba3e0;
            case 0x1BA3E4u: goto label_1ba3e4;
            case 0x1BA3E8u: goto label_1ba3e8;
            case 0x1BA3ECu: goto label_1ba3ec;
            case 0x1BA3F0u: goto label_1ba3f0;
            case 0x1BA3F4u: goto label_1ba3f4;
            case 0x1BA3F8u: goto label_1ba3f8;
            case 0x1BA3FCu: goto label_1ba3fc;
            case 0x1BA400u: goto label_1ba400;
            case 0x1BA404u: goto label_1ba404;
            case 0x1BA408u: goto label_1ba408;
            case 0x1BA40Cu: goto label_1ba40c;
            case 0x1BA410u: goto label_1ba410;
            case 0x1BA414u: goto label_1ba414;
            case 0x1BA418u: goto label_1ba418;
            case 0x1BA41Cu: goto label_1ba41c;
            case 0x1BA420u: goto label_1ba420;
            case 0x1BA424u: goto label_1ba424;
            case 0x1BA428u: goto label_1ba428;
            case 0x1BA42Cu: goto label_1ba42c;
            case 0x1BA430u: goto label_1ba430;
            case 0x1BA434u: goto label_1ba434;
            case 0x1BA438u: goto label_1ba438;
            case 0x1BA43Cu: goto label_1ba43c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BA330u;
label_1ba330:
    // 0x1ba330: 0x3c01004c
    ctx->pc = 0x1ba330u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
label_1ba334:
    // 0x1ba334: 0xa020ae71
    ctx->pc = 0x1ba334u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946417), (uint8_t)GPR_U32(ctx, 0));
label_1ba338:
    // 0x1ba338: 0x3c01004c
    ctx->pc = 0x1ba338u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
label_1ba33c:
    // 0x1ba33c: 0xa020ae72
    ctx->pc = 0x1ba33cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946418), (uint8_t)GPR_U32(ctx, 0));
label_1ba340:
    // 0x1ba340: 0x3c01004c
    ctx->pc = 0x1ba340u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
label_1ba344:
    // 0x1ba344: 0xa020ae73
    ctx->pc = 0x1ba344u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946419), (uint8_t)GPR_U32(ctx, 0));
label_1ba348:
    // 0x1ba348: 0x3c01004c
    ctx->pc = 0x1ba348u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
label_1ba34c:
    // 0x1ba34c: 0xa020ae74
    ctx->pc = 0x1ba34cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946420), (uint8_t)GPR_U32(ctx, 0));
label_1ba350:
    // 0x1ba350: 0x3c01004c
    ctx->pc = 0x1ba350u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
label_1ba354:
    // 0x1ba354: 0x3e00008
label_1ba358:
    if (ctx->pc == 0x1BA358u) {
        ctx->pc = 0x1BA358u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294946421), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1BA35Cu;
        goto label_1ba35c;
    }
    ctx->pc = 0x1BA354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA358u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294946421), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BA170u: goto label_1ba170;
            case 0x1BA174u: goto label_1ba174;
            case 0x1BA178u: goto label_1ba178;
            case 0x1BA17Cu: goto label_1ba17c;
            case 0x1BA180u: goto label_1ba180;
            case 0x1BA184u: goto label_1ba184;
            case 0x1BA188u: goto label_1ba188;
            case 0x1BA18Cu: goto label_1ba18c;
            case 0x1BA190u: goto label_1ba190;
            case 0x1BA194u: goto label_1ba194;
            case 0x1BA198u: goto label_1ba198;
            case 0x1BA19Cu: goto label_1ba19c;
            case 0x1BA1A0u: goto label_1ba1a0;
            case 0x1BA1A4u: goto label_1ba1a4;
            case 0x1BA1A8u: goto label_1ba1a8;
            case 0x1BA1ACu: goto label_1ba1ac;
            case 0x1BA1B0u: goto label_1ba1b0;
            case 0x1BA1B4u: goto label_1ba1b4;
            case 0x1BA1B8u: goto label_1ba1b8;
            case 0x1BA1BCu: goto label_1ba1bc;
            case 0x1BA1C0u: goto label_1ba1c0;
            case 0x1BA1C4u: goto label_1ba1c4;
            case 0x1BA1C8u: goto label_1ba1c8;
            case 0x1BA1CCu: goto label_1ba1cc;
            case 0x1BA1D0u: goto label_1ba1d0;
            case 0x1BA1D4u: goto label_1ba1d4;
            case 0x1BA1D8u: goto label_1ba1d8;
            case 0x1BA1DCu: goto label_1ba1dc;
            case 0x1BA1E0u: goto label_1ba1e0;
            case 0x1BA1E4u: goto label_1ba1e4;
            case 0x1BA1E8u: goto label_1ba1e8;
            case 0x1BA1ECu: goto label_1ba1ec;
            case 0x1BA1F0u: goto label_1ba1f0;
            case 0x1BA1F4u: goto label_1ba1f4;
            case 0x1BA1F8u: goto label_1ba1f8;
            case 0x1BA1FCu: goto label_1ba1fc;
            case 0x1BA200u: goto label_1ba200;
            case 0x1BA204u: goto label_1ba204;
            case 0x1BA208u: goto label_1ba208;
            case 0x1BA20Cu: goto label_1ba20c;
            case 0x1BA210u: goto label_1ba210;
            case 0x1BA214u: goto label_1ba214;
            case 0x1BA218u: goto label_1ba218;
            case 0x1BA21Cu: goto label_1ba21c;
            case 0x1BA220u: goto label_1ba220;
            case 0x1BA224u: goto label_1ba224;
            case 0x1BA228u: goto label_1ba228;
            case 0x1BA22Cu: goto label_1ba22c;
            case 0x1BA230u: goto label_1ba230;
            case 0x1BA234u: goto label_1ba234;
            case 0x1BA238u: goto label_1ba238;
            case 0x1BA23Cu: goto label_1ba23c;
            case 0x1BA240u: goto label_1ba240;
            case 0x1BA244u: goto label_1ba244;
            case 0x1BA248u: goto label_1ba248;
            case 0x1BA24Cu: goto label_1ba24c;
            case 0x1BA250u: goto label_1ba250;
            case 0x1BA254u: goto label_1ba254;
            case 0x1BA258u: goto label_1ba258;
            case 0x1BA25Cu: goto label_1ba25c;
            case 0x1BA260u: goto label_1ba260;
            case 0x1BA264u: goto label_1ba264;
            case 0x1BA268u: goto label_1ba268;
            case 0x1BA26Cu: goto label_1ba26c;
            case 0x1BA270u: goto label_1ba270;
            case 0x1BA274u: goto label_1ba274;
            case 0x1BA278u: goto label_1ba278;
            case 0x1BA27Cu: goto label_1ba27c;
            case 0x1BA280u: goto label_1ba280;
            case 0x1BA284u: goto label_1ba284;
            case 0x1BA288u: goto label_1ba288;
            case 0x1BA28Cu: goto label_1ba28c;
            case 0x1BA290u: goto label_1ba290;
            case 0x1BA294u: goto label_1ba294;
            case 0x1BA298u: goto label_1ba298;
            case 0x1BA29Cu: goto label_1ba29c;
            case 0x1BA2A0u: goto label_1ba2a0;
            case 0x1BA2A4u: goto label_1ba2a4;
            case 0x1BA2A8u: goto label_1ba2a8;
            case 0x1BA2ACu: goto label_1ba2ac;
            case 0x1BA2B0u: goto label_1ba2b0;
            case 0x1BA2B4u: goto label_1ba2b4;
            case 0x1BA2B8u: goto label_1ba2b8;
            case 0x1BA2BCu: goto label_1ba2bc;
            case 0x1BA2C0u: goto label_1ba2c0;
            case 0x1BA2C4u: goto label_1ba2c4;
            case 0x1BA2C8u: goto label_1ba2c8;
            case 0x1BA2CCu: goto label_1ba2cc;
            case 0x1BA2D0u: goto label_1ba2d0;
            case 0x1BA2D4u: goto label_1ba2d4;
            case 0x1BA2D8u: goto label_1ba2d8;
            case 0x1BA2DCu: goto label_1ba2dc;
            case 0x1BA2E0u: goto label_1ba2e0;
            case 0x1BA2E4u: goto label_1ba2e4;
            case 0x1BA2E8u: goto label_1ba2e8;
            case 0x1BA2ECu: goto label_1ba2ec;
            case 0x1BA2F0u: goto label_1ba2f0;
            case 0x1BA2F4u: goto label_1ba2f4;
            case 0x1BA2F8u: goto label_1ba2f8;
            case 0x1BA2FCu: goto label_1ba2fc;
            case 0x1BA300u: goto label_1ba300;
            case 0x1BA304u: goto label_1ba304;
            case 0x1BA308u: goto label_1ba308;
            case 0x1BA30Cu: goto label_1ba30c;
            case 0x1BA310u: goto label_1ba310;
            case 0x1BA314u: goto label_1ba314;
            case 0x1BA318u: goto label_1ba318;
            case 0x1BA31Cu: goto label_1ba31c;
            case 0x1BA320u: goto label_1ba320;
            case 0x1BA324u: goto label_1ba324;
            case 0x1BA328u: goto label_1ba328;
            case 0x1BA32Cu: goto label_1ba32c;
            case 0x1BA330u: goto label_1ba330;
            case 0x1BA334u: goto label_1ba334;
            case 0x1BA338u: goto label_1ba338;
            case 0x1BA33Cu: goto label_1ba33c;
            case 0x1BA340u: goto label_1ba340;
            case 0x1BA344u: goto label_1ba344;
            case 0x1BA348u: goto label_1ba348;
            case 0x1BA34Cu: goto label_1ba34c;
            case 0x1BA350u: goto label_1ba350;
            case 0x1BA354u: goto label_1ba354;
            case 0x1BA358u: goto label_1ba358;
            case 0x1BA35Cu: goto label_1ba35c;
            case 0x1BA360u: goto label_1ba360;
            case 0x1BA364u: goto label_1ba364;
            case 0x1BA368u: goto label_1ba368;
            case 0x1BA36Cu: goto label_1ba36c;
            case 0x1BA370u: goto label_1ba370;
            case 0x1BA374u: goto label_1ba374;
            case 0x1BA378u: goto label_1ba378;
            case 0x1BA37Cu: goto label_1ba37c;
            case 0x1BA380u: goto label_1ba380;
            case 0x1BA384u: goto label_1ba384;
            case 0x1BA388u: goto label_1ba388;
            case 0x1BA38Cu: goto label_1ba38c;
            case 0x1BA390u: goto label_1ba390;
            case 0x1BA394u: goto label_1ba394;
            case 0x1BA398u: goto label_1ba398;
            case 0x1BA39Cu: goto label_1ba39c;
            case 0x1BA3A0u: goto label_1ba3a0;
            case 0x1BA3A4u: goto label_1ba3a4;
            case 0x1BA3A8u: goto label_1ba3a8;
            case 0x1BA3ACu: goto label_1ba3ac;
            case 0x1BA3B0u: goto label_1ba3b0;
            case 0x1BA3B4u: goto label_1ba3b4;
            case 0x1BA3B8u: goto label_1ba3b8;
            case 0x1BA3BCu: goto label_1ba3bc;
            case 0x1BA3C0u: goto label_1ba3c0;
            case 0x1BA3C4u: goto label_1ba3c4;
            case 0x1BA3C8u: goto label_1ba3c8;
            case 0x1BA3CCu: goto label_1ba3cc;
            case 0x1BA3D0u: goto label_1ba3d0;
            case 0x1BA3D4u: goto label_1ba3d4;
            case 0x1BA3D8u: goto label_1ba3d8;
            case 0x1BA3DCu: goto label_1ba3dc;
            case 0x1BA3E0u: goto label_1ba3e0;
            case 0x1BA3E4u: goto label_1ba3e4;
            case 0x1BA3E8u: goto label_1ba3e8;
            case 0x1BA3ECu: goto label_1ba3ec;
            case 0x1BA3F0u: goto label_1ba3f0;
            case 0x1BA3F4u: goto label_1ba3f4;
            case 0x1BA3F8u: goto label_1ba3f8;
            case 0x1BA3FCu: goto label_1ba3fc;
            case 0x1BA400u: goto label_1ba400;
            case 0x1BA404u: goto label_1ba404;
            case 0x1BA408u: goto label_1ba408;
            case 0x1BA40Cu: goto label_1ba40c;
            case 0x1BA410u: goto label_1ba410;
            case 0x1BA414u: goto label_1ba414;
            case 0x1BA418u: goto label_1ba418;
            case 0x1BA41Cu: goto label_1ba41c;
            case 0x1BA420u: goto label_1ba420;
            case 0x1BA424u: goto label_1ba424;
            case 0x1BA428u: goto label_1ba428;
            case 0x1BA42Cu: goto label_1ba42c;
            case 0x1BA430u: goto label_1ba430;
            case 0x1BA434u: goto label_1ba434;
            case 0x1BA438u: goto label_1ba438;
            case 0x1BA43Cu: goto label_1ba43c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BA35Cu;
label_1ba35c:
    // 0x1ba35c: 0x0
    ctx->pc = 0x1ba35cu;
    // NOP
label_1ba360:
    // 0x1ba360: 0x27bdffe0
    ctx->pc = 0x1ba360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ba364:
    // 0x1ba364: 0x3c020059
    ctx->pc = 0x1ba364u;
    SET_GPR_U32(ctx, 2, ((uint32_t)89 << 16));
label_1ba368:
    // 0x1ba368: 0xffbf0010
    ctx->pc = 0x1ba368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ba36c:
    // 0x1ba36c: 0x41880
    ctx->pc = 0x1ba36cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_1ba370:
    // 0x1ba370: 0x7fb00000
    ctx->pc = 0x1ba370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ba374:
    // 0x1ba374: 0x2442ed70
    ctx->pc = 0x1ba374u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962544));
label_1ba378:
    // 0x1ba378: 0xc06b3dc
label_1ba37c:
    if (ctx->pc == 0x1BA37Cu) {
        ctx->pc = 0x1BA37Cu;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1BA380u;
        goto label_1ba380;
    }
    ctx->pc = 0x1BA378u;
    SET_GPR_U32(ctx, 31, 0x1BA380u);
    ctx->pc = 0x1BA37Cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1ACF70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACF70_0x1acf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA380u; }
    }
    if (ctx->pc != 0x1BA380u) { return; }
    ctx->pc = 0x1BA380u;
label_1ba380:
    // 0x1ba380: 0xc06b878
label_1ba384:
    if (ctx->pc == 0x1BA384u) {
        ctx->pc = 0x1BA388u;
        goto label_1ba388;
    }
    ctx->pc = 0x1BA380u;
    SET_GPR_U32(ctx, 31, 0x1BA388u);
    ctx->pc = 0x1AE1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE1E0_0x1ae1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA388u; }
    }
    if (ctx->pc != 0x1BA388u) { return; }
    ctx->pc = 0x1BA388u;
label_1ba388:
    // 0x1ba388: 0x86040000
    ctx->pc = 0x1ba388u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ba38c:
    // 0x1ba38c: 0x2c81000c
    ctx->pc = 0x1ba38cu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), 12));
label_1ba390:
    // 0x1ba390: 0x1020001e
label_1ba394:
    if (ctx->pc == 0x1BA394u) {
        ctx->pc = 0x1BA394u;
        SET_GPR_U32(ctx, 3, ((uint32_t)37 << 16));
        ctx->pc = 0x1BA398u;
        goto label_1ba398;
    }
    ctx->pc = 0x1BA390u;
    {
        const bool branch_taken_0x1ba390 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BA394u;
        SET_GPR_U32(ctx, 3, ((uint32_t)37 << 16));
        if (branch_taken_0x1ba390) {
            ctx->pc = 0x1BA40Cu;
            goto label_1ba40c;
        }
    }
    ctx->pc = 0x1BA398u;
label_1ba398:
    // 0x1ba398: 0x41080
    ctx->pc = 0x1ba398u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
label_1ba39c:
    // 0x1ba39c: 0x246301f0
    ctx->pc = 0x1ba39cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 496));
label_1ba3a0:
    // 0x1ba3a0: 0x431021
    ctx->pc = 0x1ba3a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ba3a4:
    // 0x1ba3a4: 0x8c420000
    ctx->pc = 0x1ba3a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ba3a8:
    // 0x1ba3a8: 0x400008
label_1ba3ac:
    if (ctx->pc == 0x1BA3ACu) {
        ctx->pc = 0x1BA3B0u;
        goto label_1ba3b0;
    }
    ctx->pc = 0x1BA3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BA170u: goto label_1ba170;
            case 0x1BA174u: goto label_1ba174;
            case 0x1BA178u: goto label_1ba178;
            case 0x1BA17Cu: goto label_1ba17c;
            case 0x1BA180u: goto label_1ba180;
            case 0x1BA184u: goto label_1ba184;
            case 0x1BA188u: goto label_1ba188;
            case 0x1BA18Cu: goto label_1ba18c;
            case 0x1BA190u: goto label_1ba190;
            case 0x1BA194u: goto label_1ba194;
            case 0x1BA198u: goto label_1ba198;
            case 0x1BA19Cu: goto label_1ba19c;
            case 0x1BA1A0u: goto label_1ba1a0;
            case 0x1BA1A4u: goto label_1ba1a4;
            case 0x1BA1A8u: goto label_1ba1a8;
            case 0x1BA1ACu: goto label_1ba1ac;
            case 0x1BA1B0u: goto label_1ba1b0;
            case 0x1BA1B4u: goto label_1ba1b4;
            case 0x1BA1B8u: goto label_1ba1b8;
            case 0x1BA1BCu: goto label_1ba1bc;
            case 0x1BA1C0u: goto label_1ba1c0;
            case 0x1BA1C4u: goto label_1ba1c4;
            case 0x1BA1C8u: goto label_1ba1c8;
            case 0x1BA1CCu: goto label_1ba1cc;
            case 0x1BA1D0u: goto label_1ba1d0;
            case 0x1BA1D4u: goto label_1ba1d4;
            case 0x1BA1D8u: goto label_1ba1d8;
            case 0x1BA1DCu: goto label_1ba1dc;
            case 0x1BA1E0u: goto label_1ba1e0;
            case 0x1BA1E4u: goto label_1ba1e4;
            case 0x1BA1E8u: goto label_1ba1e8;
            case 0x1BA1ECu: goto label_1ba1ec;
            case 0x1BA1F0u: goto label_1ba1f0;
            case 0x1BA1F4u: goto label_1ba1f4;
            case 0x1BA1F8u: goto label_1ba1f8;
            case 0x1BA1FCu: goto label_1ba1fc;
            case 0x1BA200u: goto label_1ba200;
            case 0x1BA204u: goto label_1ba204;
            case 0x1BA208u: goto label_1ba208;
            case 0x1BA20Cu: goto label_1ba20c;
            case 0x1BA210u: goto label_1ba210;
            case 0x1BA214u: goto label_1ba214;
            case 0x1BA218u: goto label_1ba218;
            case 0x1BA21Cu: goto label_1ba21c;
            case 0x1BA220u: goto label_1ba220;
            case 0x1BA224u: goto label_1ba224;
            case 0x1BA228u: goto label_1ba228;
            case 0x1BA22Cu: goto label_1ba22c;
            case 0x1BA230u: goto label_1ba230;
            case 0x1BA234u: goto label_1ba234;
            case 0x1BA238u: goto label_1ba238;
            case 0x1BA23Cu: goto label_1ba23c;
            case 0x1BA240u: goto label_1ba240;
            case 0x1BA244u: goto label_1ba244;
            case 0x1BA248u: goto label_1ba248;
            case 0x1BA24Cu: goto label_1ba24c;
            case 0x1BA250u: goto label_1ba250;
            case 0x1BA254u: goto label_1ba254;
            case 0x1BA258u: goto label_1ba258;
            case 0x1BA25Cu: goto label_1ba25c;
            case 0x1BA260u: goto label_1ba260;
            case 0x1BA264u: goto label_1ba264;
            case 0x1BA268u: goto label_1ba268;
            case 0x1BA26Cu: goto label_1ba26c;
            case 0x1BA270u: goto label_1ba270;
            case 0x1BA274u: goto label_1ba274;
            case 0x1BA278u: goto label_1ba278;
            case 0x1BA27Cu: goto label_1ba27c;
            case 0x1BA280u: goto label_1ba280;
            case 0x1BA284u: goto label_1ba284;
            case 0x1BA288u: goto label_1ba288;
            case 0x1BA28Cu: goto label_1ba28c;
            case 0x1BA290u: goto label_1ba290;
            case 0x1BA294u: goto label_1ba294;
            case 0x1BA298u: goto label_1ba298;
            case 0x1BA29Cu: goto label_1ba29c;
            case 0x1BA2A0u: goto label_1ba2a0;
            case 0x1BA2A4u: goto label_1ba2a4;
            case 0x1BA2A8u: goto label_1ba2a8;
            case 0x1BA2ACu: goto label_1ba2ac;
            case 0x1BA2B0u: goto label_1ba2b0;
            case 0x1BA2B4u: goto label_1ba2b4;
            case 0x1BA2B8u: goto label_1ba2b8;
            case 0x1BA2BCu: goto label_1ba2bc;
            case 0x1BA2C0u: goto label_1ba2c0;
            case 0x1BA2C4u: goto label_1ba2c4;
            case 0x1BA2C8u: goto label_1ba2c8;
            case 0x1BA2CCu: goto label_1ba2cc;
            case 0x1BA2D0u: goto label_1ba2d0;
            case 0x1BA2D4u: goto label_1ba2d4;
            case 0x1BA2D8u: goto label_1ba2d8;
            case 0x1BA2DCu: goto label_1ba2dc;
            case 0x1BA2E0u: goto label_1ba2e0;
            case 0x1BA2E4u: goto label_1ba2e4;
            case 0x1BA2E8u: goto label_1ba2e8;
            case 0x1BA2ECu: goto label_1ba2ec;
            case 0x1BA2F0u: goto label_1ba2f0;
            case 0x1BA2F4u: goto label_1ba2f4;
            case 0x1BA2F8u: goto label_1ba2f8;
            case 0x1BA2FCu: goto label_1ba2fc;
            case 0x1BA300u: goto label_1ba300;
            case 0x1BA304u: goto label_1ba304;
            case 0x1BA308u: goto label_1ba308;
            case 0x1BA30Cu: goto label_1ba30c;
            case 0x1BA310u: goto label_1ba310;
            case 0x1BA314u: goto label_1ba314;
            case 0x1BA318u: goto label_1ba318;
            case 0x1BA31Cu: goto label_1ba31c;
            case 0x1BA320u: goto label_1ba320;
            case 0x1BA324u: goto label_1ba324;
            case 0x1BA328u: goto label_1ba328;
            case 0x1BA32Cu: goto label_1ba32c;
            case 0x1BA330u: goto label_1ba330;
            case 0x1BA334u: goto label_1ba334;
            case 0x1BA338u: goto label_1ba338;
            case 0x1BA33Cu: goto label_1ba33c;
            case 0x1BA340u: goto label_1ba340;
            case 0x1BA344u: goto label_1ba344;
            case 0x1BA348u: goto label_1ba348;
            case 0x1BA34Cu: goto label_1ba34c;
            case 0x1BA350u: goto label_1ba350;
            case 0x1BA354u: goto label_1ba354;
            case 0x1BA358u: goto label_1ba358;
            case 0x1BA35Cu: goto label_1ba35c;
            case 0x1BA360u: goto label_1ba360;
            case 0x1BA364u: goto label_1ba364;
            case 0x1BA368u: goto label_1ba368;
            case 0x1BA36Cu: goto label_1ba36c;
            case 0x1BA370u: goto label_1ba370;
            case 0x1BA374u: goto label_1ba374;
            case 0x1BA378u: goto label_1ba378;
            case 0x1BA37Cu: goto label_1ba37c;
            case 0x1BA380u: goto label_1ba380;
            case 0x1BA384u: goto label_1ba384;
            case 0x1BA388u: goto label_1ba388;
            case 0x1BA38Cu: goto label_1ba38c;
            case 0x1BA390u: goto label_1ba390;
            case 0x1BA394u: goto label_1ba394;
            case 0x1BA398u: goto label_1ba398;
            case 0x1BA39Cu: goto label_1ba39c;
            case 0x1BA3A0u: goto label_1ba3a0;
            case 0x1BA3A4u: goto label_1ba3a4;
            case 0x1BA3A8u: goto label_1ba3a8;
            case 0x1BA3ACu: goto label_1ba3ac;
            case 0x1BA3B0u: goto label_1ba3b0;
            case 0x1BA3B4u: goto label_1ba3b4;
            case 0x1BA3B8u: goto label_1ba3b8;
            case 0x1BA3BCu: goto label_1ba3bc;
            case 0x1BA3C0u: goto label_1ba3c0;
            case 0x1BA3C4u: goto label_1ba3c4;
            case 0x1BA3C8u: goto label_1ba3c8;
            case 0x1BA3CCu: goto label_1ba3cc;
            case 0x1BA3D0u: goto label_1ba3d0;
            case 0x1BA3D4u: goto label_1ba3d4;
            case 0x1BA3D8u: goto label_1ba3d8;
            case 0x1BA3DCu: goto label_1ba3dc;
            case 0x1BA3E0u: goto label_1ba3e0;
            case 0x1BA3E4u: goto label_1ba3e4;
            case 0x1BA3E8u: goto label_1ba3e8;
            case 0x1BA3ECu: goto label_1ba3ec;
            case 0x1BA3F0u: goto label_1ba3f0;
            case 0x1BA3F4u: goto label_1ba3f4;
            case 0x1BA3F8u: goto label_1ba3f8;
            case 0x1BA3FCu: goto label_1ba3fc;
            case 0x1BA400u: goto label_1ba400;
            case 0x1BA404u: goto label_1ba404;
            case 0x1BA408u: goto label_1ba408;
            case 0x1BA40Cu: goto label_1ba40c;
            case 0x1BA410u: goto label_1ba410;
            case 0x1BA414u: goto label_1ba414;
            case 0x1BA418u: goto label_1ba418;
            case 0x1BA41Cu: goto label_1ba41c;
            case 0x1BA420u: goto label_1ba420;
            case 0x1BA424u: goto label_1ba424;
            case 0x1BA428u: goto label_1ba428;
            case 0x1BA42Cu: goto label_1ba42c;
            case 0x1BA430u: goto label_1ba430;
            case 0x1BA434u: goto label_1ba434;
            case 0x1BA438u: goto label_1ba438;
            case 0x1BA43Cu: goto label_1ba43c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BA3B0u;
label_1ba3b0:
    // 0x1ba3b0: 0xc06e214
label_1ba3b4:
    if (ctx->pc == 0x1BA3B4u) {
        ctx->pc = 0x1BA3B4u;
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->pc = 0x1BA3B8u;
        goto label_1ba3b8;
    }
    ctx->pc = 0x1BA3B0u;
    SET_GPR_U32(ctx, 31, 0x1BA3B8u);
    ctx->pc = 0x1BA3B4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->pc = 0x1B8850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8850_0x1b8850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA3B8u; }
    }
    if (ctx->pc != 0x1BA3B8u) { return; }
    ctx->pc = 0x1BA3B8u;
label_1ba3b8:
    // 0x1ba3b8: 0x10000015
label_1ba3bc:
    if (ctx->pc == 0x1BA3BCu) {
        ctx->pc = 0x1BA3BCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1BA3C0u;
        goto label_1ba3c0;
    }
    ctx->pc = 0x1BA3B8u;
    {
        const bool branch_taken_0x1ba3b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BA3BCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1ba3b8) {
            ctx->pc = 0x1BA410u;
            goto label_1ba410;
        }
    }
    ctx->pc = 0x1BA3C0u;
label_1ba3c0:
    // 0x1ba3c0: 0x86050002
    ctx->pc = 0x1ba3c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_1ba3c4:
    // 0x1ba3c4: 0x202d
    ctx->pc = 0x1ba3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba3c8:
    // 0x1ba3c8: 0xc06b688
label_1ba3cc:
    if (ctx->pc == 0x1BA3CCu) {
        ctx->pc = 0x1BA3CCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3D0u;
        goto label_1ba3d0;
    }
    ctx->pc = 0x1BA3C8u;
    SET_GPR_U32(ctx, 31, 0x1BA3D0u);
    ctx->pc = 0x1BA3CCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ADA20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADA20_0x1ada20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA3D0u; }
    }
    if (ctx->pc != 0x1BA3D0u) { return; }
    ctx->pc = 0x1BA3D0u;
label_1ba3d0:
    // 0x1ba3d0: 0x1000000e
label_1ba3d4:
    if (ctx->pc == 0x1BA3D4u) {
        ctx->pc = 0x1BA3D8u;
        goto label_1ba3d8;
    }
    ctx->pc = 0x1BA3D0u;
    {
        const bool branch_taken_0x1ba3d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ba3d0) {
            ctx->pc = 0x1BA40Cu;
            goto label_1ba40c;
        }
    }
    ctx->pc = 0x1BA3D8u;
label_1ba3d8:
    // 0x1ba3d8: 0x3c01004c
    ctx->pc = 0x1ba3d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
label_1ba3dc:
    // 0x1ba3dc: 0x9023ae71
    ctx->pc = 0x1ba3dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946417)));
label_1ba3e0:
    // 0x1ba3e0: 0x10600004
label_1ba3e4:
    if (ctx->pc == 0x1BA3E4u) {
        ctx->pc = 0x1BA3E4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x1BA3E8u;
        goto label_1ba3e8;
    }
    ctx->pc = 0x1BA3E0u;
    {
        const bool branch_taken_0x1ba3e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BA3E4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 4294967292));
        if (branch_taken_0x1ba3e0) {
            ctx->pc = 0x1BA3F4u;
            goto label_1ba3f4;
        }
    }
    ctx->pc = 0x1BA3E8u;
label_1ba3e8:
    // 0x1ba3e8: 0x2482fffd
    ctx->pc = 0x1ba3e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967293));
label_1ba3ec:
    // 0x1ba3ec: 0x10620003
label_1ba3f0:
    if (ctx->pc == 0x1BA3F0u) {
        ctx->pc = 0x1BA3F4u;
        goto label_1ba3f4;
    }
    ctx->pc = 0x1BA3ECu;
    {
        const bool branch_taken_0x1ba3ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1ba3ec) {
            ctx->pc = 0x1BA3FCu;
            goto label_1ba3fc;
        }
    }
    ctx->pc = 0x1BA3F4u;
label_1ba3f4:
    // 0x1ba3f4: 0xc06e910
label_1ba3f8:
    if (ctx->pc == 0x1BA3F8u) {
        ctx->pc = 0x1BA3F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3FCu;
        goto label_1ba3fc;
    }
    ctx->pc = 0x1BA3F4u;
    SET_GPR_U32(ctx, 31, 0x1BA3FCu);
    ctx->pc = 0x1BA3F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1BA440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA440_0x1ba440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA3FCu; }
    }
    if (ctx->pc != 0x1BA3FCu) { return; }
    ctx->pc = 0x1BA3FCu;
label_1ba3fc:
    // 0x1ba3fc: 0x86050002
    ctx->pc = 0x1ba3fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_1ba400:
    // 0x1ba400: 0x24040002
    ctx->pc = 0x1ba400u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_1ba404:
    // 0x1ba404: 0xc06b688
label_1ba408:
    if (ctx->pc == 0x1BA408u) {
        ctx->pc = 0x1BA408u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1BA40Cu;
        goto label_1ba40c;
    }
    ctx->pc = 0x1BA404u;
    SET_GPR_U32(ctx, 31, 0x1BA40Cu);
    ctx->pc = 0x1BA408u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1ADA20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADA20_0x1ada20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA40Cu; }
    }
    if (ctx->pc != 0x1BA40Cu) { return; }
    ctx->pc = 0x1BA40Cu;
label_1ba40c:
    // 0x1ba40c: 0xdfbf0010
    ctx->pc = 0x1ba40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ba410:
    // 0x1ba410: 0x102d
    ctx->pc = 0x1ba410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba414:
    // 0x1ba414: 0x7bb00000
    ctx->pc = 0x1ba414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba418:
    // 0x1ba418: 0x3e00008
label_1ba41c:
    if (ctx->pc == 0x1BA41Cu) {
        ctx->pc = 0x1BA41Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1BA420u;
        goto label_1ba420;
    }
    ctx->pc = 0x1BA418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA41Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BA170u: goto label_1ba170;
            case 0x1BA174u: goto label_1ba174;
            case 0x1BA178u: goto label_1ba178;
            case 0x1BA17Cu: goto label_1ba17c;
            case 0x1BA180u: goto label_1ba180;
            case 0x1BA184u: goto label_1ba184;
            case 0x1BA188u: goto label_1ba188;
            case 0x1BA18Cu: goto label_1ba18c;
            case 0x1BA190u: goto label_1ba190;
            case 0x1BA194u: goto label_1ba194;
            case 0x1BA198u: goto label_1ba198;
            case 0x1BA19Cu: goto label_1ba19c;
            case 0x1BA1A0u: goto label_1ba1a0;
            case 0x1BA1A4u: goto label_1ba1a4;
            case 0x1BA1A8u: goto label_1ba1a8;
            case 0x1BA1ACu: goto label_1ba1ac;
            case 0x1BA1B0u: goto label_1ba1b0;
            case 0x1BA1B4u: goto label_1ba1b4;
            case 0x1BA1B8u: goto label_1ba1b8;
            case 0x1BA1BCu: goto label_1ba1bc;
            case 0x1BA1C0u: goto label_1ba1c0;
            case 0x1BA1C4u: goto label_1ba1c4;
            case 0x1BA1C8u: goto label_1ba1c8;
            case 0x1BA1CCu: goto label_1ba1cc;
            case 0x1BA1D0u: goto label_1ba1d0;
            case 0x1BA1D4u: goto label_1ba1d4;
            case 0x1BA1D8u: goto label_1ba1d8;
            case 0x1BA1DCu: goto label_1ba1dc;
            case 0x1BA1E0u: goto label_1ba1e0;
            case 0x1BA1E4u: goto label_1ba1e4;
            case 0x1BA1E8u: goto label_1ba1e8;
            case 0x1BA1ECu: goto label_1ba1ec;
            case 0x1BA1F0u: goto label_1ba1f0;
            case 0x1BA1F4u: goto label_1ba1f4;
            case 0x1BA1F8u: goto label_1ba1f8;
            case 0x1BA1FCu: goto label_1ba1fc;
            case 0x1BA200u: goto label_1ba200;
            case 0x1BA204u: goto label_1ba204;
            case 0x1BA208u: goto label_1ba208;
            case 0x1BA20Cu: goto label_1ba20c;
            case 0x1BA210u: goto label_1ba210;
            case 0x1BA214u: goto label_1ba214;
            case 0x1BA218u: goto label_1ba218;
            case 0x1BA21Cu: goto label_1ba21c;
            case 0x1BA220u: goto label_1ba220;
            case 0x1BA224u: goto label_1ba224;
            case 0x1BA228u: goto label_1ba228;
            case 0x1BA22Cu: goto label_1ba22c;
            case 0x1BA230u: goto label_1ba230;
            case 0x1BA234u: goto label_1ba234;
            case 0x1BA238u: goto label_1ba238;
            case 0x1BA23Cu: goto label_1ba23c;
            case 0x1BA240u: goto label_1ba240;
            case 0x1BA244u: goto label_1ba244;
            case 0x1BA248u: goto label_1ba248;
            case 0x1BA24Cu: goto label_1ba24c;
            case 0x1BA250u: goto label_1ba250;
            case 0x1BA254u: goto label_1ba254;
            case 0x1BA258u: goto label_1ba258;
            case 0x1BA25Cu: goto label_1ba25c;
            case 0x1BA260u: goto label_1ba260;
            case 0x1BA264u: goto label_1ba264;
            case 0x1BA268u: goto label_1ba268;
            case 0x1BA26Cu: goto label_1ba26c;
            case 0x1BA270u: goto label_1ba270;
            case 0x1BA274u: goto label_1ba274;
            case 0x1BA278u: goto label_1ba278;
            case 0x1BA27Cu: goto label_1ba27c;
            case 0x1BA280u: goto label_1ba280;
            case 0x1BA284u: goto label_1ba284;
            case 0x1BA288u: goto label_1ba288;
            case 0x1BA28Cu: goto label_1ba28c;
            case 0x1BA290u: goto label_1ba290;
            case 0x1BA294u: goto label_1ba294;
            case 0x1BA298u: goto label_1ba298;
            case 0x1BA29Cu: goto label_1ba29c;
            case 0x1BA2A0u: goto label_1ba2a0;
            case 0x1BA2A4u: goto label_1ba2a4;
            case 0x1BA2A8u: goto label_1ba2a8;
            case 0x1BA2ACu: goto label_1ba2ac;
            case 0x1BA2B0u: goto label_1ba2b0;
            case 0x1BA2B4u: goto label_1ba2b4;
            case 0x1BA2B8u: goto label_1ba2b8;
            case 0x1BA2BCu: goto label_1ba2bc;
            case 0x1BA2C0u: goto label_1ba2c0;
            case 0x1BA2C4u: goto label_1ba2c4;
            case 0x1BA2C8u: goto label_1ba2c8;
            case 0x1BA2CCu: goto label_1ba2cc;
            case 0x1BA2D0u: goto label_1ba2d0;
            case 0x1BA2D4u: goto label_1ba2d4;
            case 0x1BA2D8u: goto label_1ba2d8;
            case 0x1BA2DCu: goto label_1ba2dc;
            case 0x1BA2E0u: goto label_1ba2e0;
            case 0x1BA2E4u: goto label_1ba2e4;
            case 0x1BA2E8u: goto label_1ba2e8;
            case 0x1BA2ECu: goto label_1ba2ec;
            case 0x1BA2F0u: goto label_1ba2f0;
            case 0x1BA2F4u: goto label_1ba2f4;
            case 0x1BA2F8u: goto label_1ba2f8;
            case 0x1BA2FCu: goto label_1ba2fc;
            case 0x1BA300u: goto label_1ba300;
            case 0x1BA304u: goto label_1ba304;
            case 0x1BA308u: goto label_1ba308;
            case 0x1BA30Cu: goto label_1ba30c;
            case 0x1BA310u: goto label_1ba310;
            case 0x1BA314u: goto label_1ba314;
            case 0x1BA318u: goto label_1ba318;
            case 0x1BA31Cu: goto label_1ba31c;
            case 0x1BA320u: goto label_1ba320;
            case 0x1BA324u: goto label_1ba324;
            case 0x1BA328u: goto label_1ba328;
            case 0x1BA32Cu: goto label_1ba32c;
            case 0x1BA330u: goto label_1ba330;
            case 0x1BA334u: goto label_1ba334;
            case 0x1BA338u: goto label_1ba338;
            case 0x1BA33Cu: goto label_1ba33c;
            case 0x1BA340u: goto label_1ba340;
            case 0x1BA344u: goto label_1ba344;
            case 0x1BA348u: goto label_1ba348;
            case 0x1BA34Cu: goto label_1ba34c;
            case 0x1BA350u: goto label_1ba350;
            case 0x1BA354u: goto label_1ba354;
            case 0x1BA358u: goto label_1ba358;
            case 0x1BA35Cu: goto label_1ba35c;
            case 0x1BA360u: goto label_1ba360;
            case 0x1BA364u: goto label_1ba364;
            case 0x1BA368u: goto label_1ba368;
            case 0x1BA36Cu: goto label_1ba36c;
            case 0x1BA370u: goto label_1ba370;
            case 0x1BA374u: goto label_1ba374;
            case 0x1BA378u: goto label_1ba378;
            case 0x1BA37Cu: goto label_1ba37c;
            case 0x1BA380u: goto label_1ba380;
            case 0x1BA384u: goto label_1ba384;
            case 0x1BA388u: goto label_1ba388;
            case 0x1BA38Cu: goto label_1ba38c;
            case 0x1BA390u: goto label_1ba390;
            case 0x1BA394u: goto label_1ba394;
            case 0x1BA398u: goto label_1ba398;
            case 0x1BA39Cu: goto label_1ba39c;
            case 0x1BA3A0u: goto label_1ba3a0;
            case 0x1BA3A4u: goto label_1ba3a4;
            case 0x1BA3A8u: goto label_1ba3a8;
            case 0x1BA3ACu: goto label_1ba3ac;
            case 0x1BA3B0u: goto label_1ba3b0;
            case 0x1BA3B4u: goto label_1ba3b4;
            case 0x1BA3B8u: goto label_1ba3b8;
            case 0x1BA3BCu: goto label_1ba3bc;
            case 0x1BA3C0u: goto label_1ba3c0;
            case 0x1BA3C4u: goto label_1ba3c4;
            case 0x1BA3C8u: goto label_1ba3c8;
            case 0x1BA3CCu: goto label_1ba3cc;
            case 0x1BA3D0u: goto label_1ba3d0;
            case 0x1BA3D4u: goto label_1ba3d4;
            case 0x1BA3D8u: goto label_1ba3d8;
            case 0x1BA3DCu: goto label_1ba3dc;
            case 0x1BA3E0u: goto label_1ba3e0;
            case 0x1BA3E4u: goto label_1ba3e4;
            case 0x1BA3E8u: goto label_1ba3e8;
            case 0x1BA3ECu: goto label_1ba3ec;
            case 0x1BA3F0u: goto label_1ba3f0;
            case 0x1BA3F4u: goto label_1ba3f4;
            case 0x1BA3F8u: goto label_1ba3f8;
            case 0x1BA3FCu: goto label_1ba3fc;
            case 0x1BA400u: goto label_1ba400;
            case 0x1BA404u: goto label_1ba404;
            case 0x1BA408u: goto label_1ba408;
            case 0x1BA40Cu: goto label_1ba40c;
            case 0x1BA410u: goto label_1ba410;
            case 0x1BA414u: goto label_1ba414;
            case 0x1BA418u: goto label_1ba418;
            case 0x1BA41Cu: goto label_1ba41c;
            case 0x1BA420u: goto label_1ba420;
            case 0x1BA424u: goto label_1ba424;
            case 0x1BA428u: goto label_1ba428;
            case 0x1BA42Cu: goto label_1ba42c;
            case 0x1BA430u: goto label_1ba430;
            case 0x1BA434u: goto label_1ba434;
            case 0x1BA438u: goto label_1ba438;
            case 0x1BA43Cu: goto label_1ba43c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BA420u;
label_1ba420:
    // 0x1ba420: 0x806b1cc
label_1ba424:
    if (ctx->pc == 0x1BA424u) {
        ctx->pc = 0x1BA424u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1BA428u;
        goto label_1ba428;
    }
    ctx->pc = 0x1BA420u;
    ctx->pc = 0x1BA424u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1AC730u;
    sub_001AC730_0x1ac730(rdram, ctx, runtime); return;
    ctx->pc = 0x1BA428u;
label_1ba428:
    // 0x1ba428: 0x0
    ctx->pc = 0x1ba428u;
    // NOP
label_1ba42c:
    // 0x1ba42c: 0x0
    ctx->pc = 0x1ba42cu;
    // NOP
label_1ba430:
    // 0x1ba430: 0x806b1cc
label_1ba434:
    if (ctx->pc == 0x1BA434u) {
        ctx->pc = 0x1BA434u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1BA438u;
        goto label_1ba438;
    }
    ctx->pc = 0x1BA430u;
    ctx->pc = 0x1BA434u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1AC730u;
    sub_001AC730_0x1ac730(rdram, ctx, runtime); return;
    ctx->pc = 0x1BA438u;
label_1ba438:
    // 0x1ba438: 0x0
    ctx->pc = 0x1ba438u;
    // NOP
label_1ba43c:
    // 0x1ba43c: 0x0
    ctx->pc = 0x1ba43cu;
    // NOP
}
