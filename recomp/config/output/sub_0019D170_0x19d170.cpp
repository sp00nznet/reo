#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019D170
// Address: 0x19d170 - 0x19d2e0
void sub_0019D170_0x19d170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19d170u;

    // 0x19d170: 0x27bdffe0
    ctx->pc = 0x19d170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d174: 0x3c02ffff
    ctx->pc = 0x19d174u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x19d178: 0xffbf0010
    ctx->pc = 0x19d178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19d17c: 0xa21024
    ctx->pc = 0x19d17cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19d180: 0x22c02
    ctx->pc = 0x19d180u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 2), 16));
    // 0x19d184: 0x7fb00000
    ctx->pc = 0x19d184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d188: 0x8c820008
    ctx->pc = 0x19d188u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19d18c: 0x24a8ffff
    ctx->pc = 0x19d18cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x19d190: 0x838c0
    ctx->pc = 0x19d190u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 8), 3));
    // 0x19d194: 0x3c030029
    ctx->pc = 0x19d194u;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
    // 0x19d198: 0xe83823
    ctx->pc = 0x19d198u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x19d19c: 0x24634e80
    ctx->pc = 0x19d19cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20096));
    // 0x19d1a0: 0x738c0
    ctx->pc = 0x19d1a0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 3));
    // 0x19d1a4: 0x24050001
    ctx->pc = 0x19d1a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d1a8: 0x10450006
    ctx->pc = 0x19D1A8u;
    {
        const bool branch_taken_0x19d1a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x19D1ACu;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        if (branch_taken_0x19d1a8) {
            ctx->pc = 0x19D1C4u;
            goto label_19d1c4;
        }
    }
    ctx->pc = 0x19D1B0u;
    // 0x19d1b0: 0x3c040024
    ctx->pc = 0x19d1b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x19d1b4: 0xc0682b4
    ctx->pc = 0x19D1B4u;
    SET_GPR_U32(ctx, 31, 0x19D1BCu);
    ctx->pc = 0x19D1B8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7584));
    ctx->pc = 0x1A0AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0AD0_0x1a0ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D1BCu; }
    }
    if (ctx->pc != 0x19D1BCu) { return; }
    ctx->pc = 0x19D1BCu;
    // 0x19d1bc: 0x10000041
    ctx->pc = 0x19D1BCu;
    {
        const bool branch_taken_0x19d1bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D1C0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d1bc) {
            ctx->pc = 0x19D2C4u;
            goto label_19d2c4;
        }
    }
    ctx->pc = 0x19D1C4u;
label_19d1c4:
    // 0x19d1c4: 0x8c830014
    ctx->pc = 0x19d1c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x19d1c8: 0x24020004
    ctx->pc = 0x19d1c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x19d1cc: 0x10620012
    ctx->pc = 0x19D1CCu;
    {
        const bool branch_taken_0x19d1cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x19d1cc) {
            ctx->pc = 0x19D218u;
            goto label_19d218;
        }
    }
    ctx->pc = 0x19D1D4u;
    // 0x19d1d4: 0x24020003
    ctx->pc = 0x19d1d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x19d1d8: 0x1062000c
    ctx->pc = 0x19D1D8u;
    {
        const bool branch_taken_0x19d1d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x19d1d8) {
            ctx->pc = 0x19D20Cu;
            goto label_19d20c;
        }
    }
    ctx->pc = 0x19D1E0u;
    // 0x19d1e0: 0x24020002
    ctx->pc = 0x19d1e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d1e4: 0x10620006
    ctx->pc = 0x19D1E4u;
    {
        const bool branch_taken_0x19d1e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x19d1e4) {
            ctx->pc = 0x19D200u;
            goto label_19d200;
        }
    }
    ctx->pc = 0x19D1ECu;
    // 0x19d1ec: 0x3c040024
    ctx->pc = 0x19d1ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x19d1f0: 0xc0682b4
    ctx->pc = 0x19D1F0u;
    SET_GPR_U32(ctx, 31, 0x19D1F8u);
    ctx->pc = 0x19D1F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7648));
    ctx->pc = 0x1A0AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0AD0_0x1a0ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D1F8u; }
    }
    if (ctx->pc != 0x19D1F8u) { return; }
    ctx->pc = 0x19D1F8u;
    // 0x19d1f8: 0x10000032
    ctx->pc = 0x19D1F8u;
    {
        const bool branch_taken_0x19d1f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D1FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d1f8) {
            ctx->pc = 0x19D2C4u;
            goto label_19d2c4;
        }
    }
    ctx->pc = 0x19D200u;
label_19d200:
    // 0x19d200: 0xae020020
    ctx->pc = 0x19d200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x19d204: 0x10000006
    ctx->pc = 0x19D204u;
    {
        const bool branch_taken_0x19d204 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D208u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x19d204) {
            ctx->pc = 0x19D220u;
            goto label_19d220;
        }
    }
    ctx->pc = 0x19D20Cu;
label_19d20c:
    // 0x19d20c: 0xae050020
    ctx->pc = 0x19d20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
    // 0x19d210: 0x10000003
    ctx->pc = 0x19D210u;
    {
        const bool branch_taken_0x19d210 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D214u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x19d210) {
            ctx->pc = 0x19D220u;
            goto label_19d220;
        }
    }
    ctx->pc = 0x19D218u;
label_19d218:
    // 0x19d218: 0xae000020
    ctx->pc = 0x19d218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x19d21c: 0xae02000c
    ctx->pc = 0x19d21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_19d220:
    // 0x19d220: 0x8c830004
    ctx->pc = 0x19d220u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19d224: 0x24020100
    ctx->pc = 0x19d224u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
    // 0x19d228: 0x14620006
    ctx->pc = 0x19D228u;
    {
        const bool branch_taken_0x19d228 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x19D22Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x19d228) {
            ctx->pc = 0x19D244u;
            goto label_19d244;
        }
    }
    ctx->pc = 0x19D230u;
    // 0x19d230: 0x24020010
    ctx->pc = 0x19d230u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x19d234: 0xa602001a
    ctx->pc = 0x19d234u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x19d238: 0x10000005
    ctx->pc = 0x19D238u;
    {
        const bool branch_taken_0x19d238 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D23Cu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x19d238) {
            ctx->pc = 0x19D250u;
            goto label_19d250;
        }
    }
    ctx->pc = 0x19D240u;
    // 0x19d240: 0x24030008
    ctx->pc = 0x19d240u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
label_19d244:
    // 0x19d244: 0x24020002
    ctx->pc = 0x19d244u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d248: 0xa603001a
    ctx->pc = 0x19d248u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x19d24c: 0xa602001c
    ctx->pc = 0x19d24cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
label_19d250:
    // 0x19d250: 0x8c830000
    ctx->pc = 0x19d250u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19d254: 0x24020001
    ctx->pc = 0x19d254u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d258: 0xae030004
    ctx->pc = 0x19d258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x19d25c: 0xae060000
    ctx->pc = 0x19d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x19d260: 0xa2020034
    ctx->pc = 0x19d260u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 2));
    // 0x19d264: 0xc0676b0
    ctx->pc = 0x19D264u;
    SET_GPR_U32(ctx, 31, 0x19D26Cu);
    ctx->pc = 0x19D268u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    ctx->pc = 0x19DAC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019DAC0_0x19dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D26Cu; }
    }
    if (ctx->pc != 0x19D26Cu) { return; }
    ctx->pc = 0x19D26Cu;
    // 0x19d26c: 0xa6020016
    ctx->pc = 0x19d26cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x19d270: 0xc0676b0
    ctx->pc = 0x19D270u;
    SET_GPR_U32(ctx, 31, 0x19D278u);
    ctx->pc = 0x19D274u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x19DAC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019DAC0_0x19dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D278u; }
    }
    if (ctx->pc != 0x19D278u) { return; }
    ctx->pc = 0x19D278u;
    // 0x19d278: 0xa6020018
    ctx->pc = 0x19d278u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x19d27c: 0x200202d
    ctx->pc = 0x19d27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d280: 0xa2000036
    ctx->pc = 0x19d280u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x19d284: 0x24020001
    ctx->pc = 0x19d284u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d288: 0xae000024
    ctx->pc = 0x19d288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x19d28c: 0xae00002c
    ctx->pc = 0x19d28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x19d290: 0xa2000037
    ctx->pc = 0x19d290u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 55), (uint8_t)GPR_U32(ctx, 0));
    // 0x19d294: 0xc067734
    ctx->pc = 0x19D294u;
    SET_GPR_U32(ctx, 31, 0x19D29Cu);
    ctx->pc = 0x19D298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x19DCD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019DCD0_0x19dcd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D29Cu; }
    }
    if (ctx->pc != 0x19D29Cu) { return; }
    ctx->pc = 0x19D29Cu;
    // 0x19d29c: 0xa6020010
    ctx->pc = 0x19d29cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x19d2a0: 0x24020001
    ctx->pc = 0x19d2a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d2a4: 0xa6020012
    ctx->pc = 0x19d2a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x19d2a8: 0x8606001c
    ctx->pc = 0x19d2a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x19d2ac: 0x8e070030
    ctx->pc = 0x19d2acu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19d2b0: 0x8e040020
    ctx->pc = 0x19d2b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x19d2b4: 0xc0676c4
    ctx->pc = 0x19D2B4u;
    SET_GPR_U32(ctx, 31, 0x19D2BCu);
    ctx->pc = 0x19D2B8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    ctx->pc = 0x19DB10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019DB10_0x19db10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D2BCu; }
    }
    if (ctx->pc != 0x19D2BCu) { return; }
    ctx->pc = 0x19D2BCu;
    // 0x19d2bc: 0xae020008
    ctx->pc = 0x19d2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x19d2c0: 0x24020001
    ctx->pc = 0x19d2c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_19d2c4:
    // 0x19d2c4: 0xdfbf0010
    ctx->pc = 0x19d2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d2c8: 0x7bb00000
    ctx->pc = 0x19d2c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d2cc: 0x3e00008
    ctx->pc = 0x19D2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D2D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D1C4u: goto label_19d1c4;
            case 0x19D200u: goto label_19d200;
            case 0x19D20Cu: goto label_19d20c;
            case 0x19D218u: goto label_19d218;
            case 0x19D220u: goto label_19d220;
            case 0x19D244u: goto label_19d244;
            case 0x19D250u: goto label_19d250;
            case 0x19D2C4u: goto label_19d2c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D2D4u;
    // 0x19d2d4: 0x0
    ctx->pc = 0x19d2d4u;
    // NOP
    // 0x19d2d8: 0x0
    ctx->pc = 0x19d2d8u;
    // NOP
    // 0x19d2dc: 0x0
    ctx->pc = 0x19d2dcu;
    // NOP
}
