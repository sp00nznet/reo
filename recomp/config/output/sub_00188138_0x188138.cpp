#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00188138
// Address: 0x188138 - 0x188348
void sub_00188138_0x188138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x188138u;

label_188138:
    // 0x188138: 0x27bdffa0
    ctx->pc = 0x188138u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18813c: 0x3c020029
    ctx->pc = 0x18813cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x188140: 0xffb40030
    ctx->pc = 0x188140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x188144: 0x80a02d
    ctx->pc = 0x188144u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188148: 0xffb60040
    ctx->pc = 0x188148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x18814c: 0x14b0c0
    ctx->pc = 0x18814cu;
    SET_GPR_U32(ctx, 22, SLL32(GPR_U32(ctx, 20), 3));
    // 0x188150: 0xffb30028
    ctx->pc = 0x188150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x188154: 0x2453b8c8
    ctx->pc = 0x188154u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294949064));
    // 0x188158: 0x2d41023
    ctx->pc = 0x188158u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x18815c: 0xffb20020
    ctx->pc = 0x18815cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x188160: 0xffb50038
    ctx->pc = 0x188160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x188164: 0xc0a82d
    ctx->pc = 0x188164u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188168: 0xffb70048
    ctx->pc = 0x188168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x18816c: 0xe0b82d
    ctx->pc = 0x18816cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188170: 0xffbe0050
    ctx->pc = 0x188170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x188174: 0x100f02d
    ctx->pc = 0x188174u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188178: 0xffb00010
    ctx->pc = 0x188178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x18817c: 0x29080
    ctx->pc = 0x18817cu;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 2), 2));
    // 0x188180: 0xffb10018
    ctx->pc = 0x188180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x188184: 0x2721021
    ctx->pc = 0x188184u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x188188: 0xffbf0058
    ctx->pc = 0x188188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x18818c: 0xafa50004
    ctx->pc = 0x18818cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x188190: 0xc0623b6
    ctx->pc = 0x188190u;
    SET_GPR_U32(ctx, 31, 0x188198u);
    ctx->pc = 0x188194u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x188ED8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188ED8_0x188ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188198u; }
    }
    if (ctx->pc != 0x188198u) { return; }
    ctx->pc = 0x188198u;
    // 0x188198: 0x24030003
    ctx->pc = 0x188198u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18819c: 0x54430004
    ctx->pc = 0x18819Cu;
    {
        const bool branch_taken_0x18819c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x18819c) {
            ctx->pc = 0x1881A0u;
            SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
            ctx->pc = 0x1881B0u;
            goto label_1881b0;
        }
    }
    ctx->pc = 0x1881A4u;
    // 0x1881a4: 0x10000050
    ctx->pc = 0x1881A4u;
    {
        const bool branch_taken_0x1881a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1881A8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1881a4) {
            ctx->pc = 0x1882E8u;
            goto label_1882e8;
        }
    }
    ctx->pc = 0x1881ACu;
    // 0x1881ac: 0x0
    ctx->pc = 0x1881acu;
    // NOP
label_1881b0:
    // 0x1881b0: 0x282d
    ctx->pc = 0x1881b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1881b4: 0x2450b900
    ctx->pc = 0x1881b4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294949120));
    // 0x1881b8: 0x24062080
    ctx->pc = 0x1881b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8320));
    // 0x1881bc: 0x200202d
    ctx->pc = 0x1881bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1881c0: 0xc041f1a
    ctx->pc = 0x1881C0u;
    SET_GPR_U32(ctx, 31, 0x1881C8u);
    ctx->pc = 0x1881C4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 8320));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881C8u; }
    }
    if (ctx->pc != 0x1881C8u) { return; }
    ctx->pc = 0x1881C8u;
    // 0x1881c8: 0xae150000
    ctx->pc = 0x1881c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x1881cc: 0x2722821
    ctx->pc = 0x1881ccu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1881d0: 0x3c120023
    ctx->pc = 0x1881d0u;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x1881d4: 0xa0102d
    ctx->pc = 0x1881d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1881d8: 0x3c040029
    ctx->pc = 0x1881d8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
    // 0x1881dc: 0x40182d
    ctx->pc = 0x1881dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1881e0: 0x8c470008
    ctx->pc = 0x1881e0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1881e4: 0x8c68000c
    ctx->pc = 0x1881e4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1881e8: 0x2484d980
    ctx->pc = 0x1881e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957440));
    // 0x1881ec: 0x8ca20010
    ctx->pc = 0x1881ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1881f0: 0x282d
    ctx->pc = 0x1881f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1881f4: 0xae1e0024
    ctx->pc = 0x1881f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 30));
    // 0x1881f8: 0x24060100
    ctx->pc = 0x1881f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x1881fc: 0xae070008
    ctx->pc = 0x1881fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x188200: 0xae08000c
    ctx->pc = 0x188200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
    // 0x188204: 0xae020010
    ctx->pc = 0x188204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x188208: 0xafb10000
    ctx->pc = 0x188208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x18820c: 0xae170004
    ctx->pc = 0x18820cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 23));
    // 0x188210: 0xae000014
    ctx->pc = 0x188210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x188214: 0xae000018
    ctx->pc = 0x188214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x188218: 0xae00001c
    ctx->pc = 0x188218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x18821c: 0xc041f1a
    ctx->pc = 0x18821Cu;
    SET_GPR_U32(ctx, 31, 0x188224u);
    ctx->pc = 0x188220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188224u; }
    }
    if (ctx->pc != 0x188224u) { return; }
    ctx->pc = 0x188224u;
    // 0x188224: 0x24030001
    ctx->pc = 0x188224u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x188228: 0xae43fd24
    ctx->pc = 0x188228u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294966564), GPR_U32(ctx, 3));
    // 0x18822c: 0x10000004
    ctx->pc = 0x18822Cu;
    {
        const bool branch_taken_0x18822c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x188230u;
        SET_GPR_U32(ctx, 17, ((uint32_t)24 << 16));
        if (branch_taken_0x18822c) {
            ctx->pc = 0x188240u;
            goto label_188240;
        }
    }
    ctx->pc = 0x188234u;
    // 0x188234: 0x0
    ctx->pc = 0x188234u;
    // NOP
label_188238:
    // 0x188238: 0xc045a12
    ctx->pc = 0x188238u;
    SET_GPR_U32(ctx, 31, 0x188240u);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188240u; }
    }
    if (ctx->pc != 0x188240u) { return; }
    ctx->pc = 0x188240u;
label_188240:
    // 0x188240: 0x3c020029
    ctx->pc = 0x188240u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x188244: 0x8e45fd24
    ctx->pc = 0x188244u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4294966564)));
    // 0x188248: 0x2443b8c8
    ctx->pc = 0x188248u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294949064));
    // 0x18824c: 0x2d41023
    ctx->pc = 0x18824cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x188250: 0x24630004
    ctx->pc = 0x188250u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x188254: 0x21080
    ctx->pc = 0x188254u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x188258: 0x438021
    ctx->pc = 0x188258u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18825c: 0x3c020029
    ctx->pc = 0x18825cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x188260: 0x2453b900
    ctx->pc = 0x188260u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294949120));
    // 0x188264: 0x8e040000
    ctx->pc = 0x188264u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x188268: 0x3a0302d
    ctx->pc = 0x188268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18826c: 0x260382d
    ctx->pc = 0x18826cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188270: 0xc062560
    ctx->pc = 0x188270u;
    SET_GPR_U32(ctx, 31, 0x188278u);
    ctx->pc = 0x188274u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 17), 30728));
    ctx->pc = 0x189580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00189580_0x189580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188278u; }
    }
    if (ctx->pc != 0x188278u) { return; }
    ctx->pc = 0x188278u;
    // 0x188278: 0x3c040024
    ctx->pc = 0x188278u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x18827c: 0x24030001
    ctx->pc = 0x18827cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x188280: 0x1443ffed
    ctx->pc = 0x188280u;
    {
        const bool branch_taken_0x188280 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x188284u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6200));
        if (branch_taken_0x188280) {
            ctx->pc = 0x188238u;
            goto label_188238;
        }
    }
    ctx->pc = 0x188288u;
    // 0x188288: 0xc061de6
    ctx->pc = 0x188288u;
    SET_GPR_U32(ctx, 31, 0x188290u);
    ctx->pc = 0x18828Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x187798u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187798_0x187798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188290u; }
    }
    if (ctx->pc != 0x188290u) { return; }
    ctx->pc = 0x188290u;
    // 0x188290: 0x8c430008
    ctx->pc = 0x188290u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x188294: 0x10600014
    ctx->pc = 0x188294u;
    {
        const bool branch_taken_0x188294 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x188298u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x188294) {
            ctx->pc = 0x1882E8u;
            goto label_1882e8;
        }
    }
    ctx->pc = 0x18829Cu;
    // 0x18829c: 0x3c020029
    ctx->pc = 0x18829cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x1882a0: 0x8fb20004
    ctx->pc = 0x1882a0u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1882a4: 0x1ae0000f
    ctx->pc = 0x1882A4u;
    {
        const bool branch_taken_0x1882a4 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x1882A8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294957568));
        if (branch_taken_0x1882a4) {
            ctx->pc = 0x1882E4u;
            goto label_1882e4;
        }
    }
    ctx->pc = 0x1882ACu;
    // 0x1882ac: 0x2e0802d
    ctx->pc = 0x1882acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1882b0:
    // 0x1882b0: 0x8e650008
    ctx->pc = 0x1882b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1882b4: 0x220202d
    ctx->pc = 0x1882b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1882b8: 0x2610ffff
    ctx->pc = 0x1882b8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1882bc: 0xc0453c6
    ctx->pc = 0x1882BCu;
    SET_GPR_U32(ctx, 31, 0x1882C4u);
    ctx->pc = 0x1882C0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->pc = 0x114F18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114F18_0x114f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882C4u; }
    }
    if (ctx->pc != 0x1882C4u) { return; }
    ctx->pc = 0x1882C4u;
    // 0x1882c4: 0x240202d
    ctx->pc = 0x1882c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1882c8: 0x8e660008
    ctx->pc = 0x1882c8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1882cc: 0xc041eac
    ctx->pc = 0x1882CCu;
    SET_GPR_U32(ctx, 31, 0x1882D4u);
    ctx->pc = 0x1882D0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882D4u; }
    }
    if (ctx->pc != 0x1882D4u) { return; }
    ctx->pc = 0x1882D4u;
    // 0x1882d4: 0x8e630008
    ctx->pc = 0x1882d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1882d8: 0x2439021
    ctx->pc = 0x1882d8u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1882dc: 0x1600fff4
    ctx->pc = 0x1882DCu;
    {
        const bool branch_taken_0x1882dc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1882E0u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        if (branch_taken_0x1882dc) {
            ctx->pc = 0x1882B0u;
            goto label_1882b0;
        }
    }
    ctx->pc = 0x1882E4u;
label_1882e4:
    // 0x1882e4: 0x2e0102d
    ctx->pc = 0x1882e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1882e8:
    // 0x1882e8: 0xdfb00010
    ctx->pc = 0x1882e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1882ec: 0xdfb10018
    ctx->pc = 0x1882ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1882f0: 0xdfb20020
    ctx->pc = 0x1882f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1882f4: 0xdfb30028
    ctx->pc = 0x1882f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1882f8: 0xdfb40030
    ctx->pc = 0x1882f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1882fc: 0xdfb50038
    ctx->pc = 0x1882fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x188300: 0xdfb60040
    ctx->pc = 0x188300u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188304: 0xdfb70048
    ctx->pc = 0x188304u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x188308: 0xdfbe0050
    ctx->pc = 0x188308u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18830c: 0xdfbf0058
    ctx->pc = 0x18830cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x188310: 0x3e00008
    ctx->pc = 0x188310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188314u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188138u: goto label_188138;
            case 0x1881B0u: goto label_1881b0;
            case 0x188238u: goto label_188238;
            case 0x188240u: goto label_188240;
            case 0x1882B0u: goto label_1882b0;
            case 0x1882E4u: goto label_1882e4;
            case 0x1882E8u: goto label_1882e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188318u;
    // 0x188318: 0x27bdfff0
    ctx->pc = 0x188318u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18831c: 0x410c0
    ctx->pc = 0x18831cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
    // 0x188320: 0xffbf0000
    ctx->pc = 0x188320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188324: 0x441023
    ctx->pc = 0x188324u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x188328: 0x21080
    ctx->pc = 0x188328u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x18832c: 0x3c080029
    ctx->pc = 0x18832cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)41 << 16));
    // 0x188330: 0x1024021
    ctx->pc = 0x188330u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x188334: 0x8d08b8dc
    ctx->pc = 0x188334u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 8), 4294949084)));
    // 0x188338: 0xdfbf0000
    ctx->pc = 0x188338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18833c: 0x806204e
    ctx->pc = 0x18833Cu;
    ctx->pc = 0x188340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x188138u;
    goto label_188138;
    ctx->pc = 0x188344u;
    // 0x188344: 0x0
    ctx->pc = 0x188344u;
    // NOP
}
