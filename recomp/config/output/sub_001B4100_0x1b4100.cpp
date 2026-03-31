#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B4100
// Address: 0x1b4100 - 0x1b4450
void sub_001B4100_0x1b4100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b4100u;

    // 0x1b4100: 0x27bdfd10
    ctx->pc = 0x1b4100u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966544));
    // 0x1b4104: 0xffbf0090
    ctx->pc = 0x1b4104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1b4108: 0x7fbe0080
    ctx->pc = 0x1b4108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1b410c: 0x7fb70070
    ctx->pc = 0x1b410cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1b4110: 0x7fb60060
    ctx->pc = 0x1b4110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b4114: 0x80b82d
    ctx->pc = 0x1b4114u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4118: 0x7fb50050
    ctx->pc = 0x1b4118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b411c: 0x7fb40040
    ctx->pc = 0x1b411cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b4120: 0xa0a82d
    ctx->pc = 0x1b4120u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4124: 0x7fb30030
    ctx->pc = 0x1b4124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b4128: 0xc0a02d
    ctx->pc = 0x1b4128u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b412c: 0x7fb20020
    ctx->pc = 0x1b412cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b4130: 0xe0982d
    ctx->pc = 0x1b4130u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4134: 0x7fb10010
    ctx->pc = 0x1b4134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b4138: 0x100902d
    ctx->pc = 0x1b4138u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b413c: 0x126000b7
    ctx->pc = 0x1B413Cu;
    {
        const bool branch_taken_0x1b413c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B4140u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        if (branch_taken_0x1b413c) {
            ctx->pc = 0x1B441Cu;
            goto label_1b441c;
        }
    }
    ctx->pc = 0x1B4144u;
    // 0x1b4144: 0xc06d574
    ctx->pc = 0x1B4144u;
    SET_GPR_U32(ctx, 31, 0x1B414Cu);
    ctx->pc = 0x1B4148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B55D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B55D0_0x1b55d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B414Cu; }
    }
    if (ctx->pc != 0x1B414Cu) { return; }
    ctx->pc = 0x1B414Cu;
    // 0x1b414c: 0xc06d590
    ctx->pc = 0x1B414Cu;
    SET_GPR_U32(ctx, 31, 0x1B4154u);
    ctx->pc = 0x1B4150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B5640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5640_0x1b5640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4154u; }
    }
    if (ctx->pc != 0x1B4154u) { return; }
    ctx->pc = 0x1B4154u;
    // 0x1b4154: 0x24020007
    ctx->pc = 0x1b4154u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b4158: 0x280202d
    ctx->pc = 0x1b4158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b415c: 0xafa200c0
    ctx->pc = 0x1b415cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1b4160: 0x2e0802d
    ctx->pc = 0x1b4160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4164: 0xa3a000e0
    ctx->pc = 0x1b4164u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4168: 0x27b100e0
    ctx->pc = 0x1b4168u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b416c: 0xc06d574
    ctx->pc = 0x1B416Cu;
    SET_GPR_U32(ctx, 31, 0x1B4174u);
    ctx->pc = 0x1B4170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    ctx->pc = 0x1B55D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B55D0_0x1b55d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4174u; }
    }
    if (ctx->pc != 0x1B4174u) { return; }
    ctx->pc = 0x1B4174u;
    // 0x1b4174: 0xc06d590
    ctx->pc = 0x1B4174u;
    SET_GPR_U32(ctx, 31, 0x1B417Cu);
    ctx->pc = 0x1B4178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B5640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5640_0x1b5640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B417Cu; }
    }
    if (ctx->pc != 0x1B417Cu) { return; }
    ctx->pc = 0x1B417Cu;
    // 0x1b417c: 0x324200ff
    ctx->pc = 0x1b417cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 255));
    // 0x1b4180: 0x3c010023
    ctx->pc = 0x1b4180u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1b4184: 0x8c23449c
    ctx->pc = 0x1b4184u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 17564)));
    // 0x1b4188: 0x21600
    ctx->pc = 0x1b4188u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b418c: 0xafa200a0
    ctx->pc = 0x1b418cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1b4190: 0x8fa200a0
    ctx->pc = 0x1b4190u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b4194: 0x31a3c
    ctx->pc = 0x1b4194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x1b4198: 0x31a3e
    ctx->pc = 0x1b4198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x1b419c: 0xc06d594
    ctx->pc = 0x1B419Cu;
    SET_GPR_U32(ctx, 31, 0x1B41A4u);
    ctx->pc = 0x1B41A0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B5650u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5650_0x1b5650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B41A4u; }
    }
    if (ctx->pc != 0x1B41A4u) { return; }
    ctx->pc = 0x1B41A4u;
    // 0x1b41a4: 0x2e0202d
    ctx->pc = 0x1b41a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b41a8: 0xc06d57c
    ctx->pc = 0x1B41A8u;
    SET_GPR_U32(ctx, 31, 0x1B41B0u);
    ctx->pc = 0x1B41ACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B55F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B55F0_0x1b55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B41B0u; }
    }
    if (ctx->pc != 0x1B41B0u) { return; }
    ctx->pc = 0x1B41B0u;
    // 0x1b41b0: 0x141043
    ctx->pc = 0x1b41b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 1));
    // 0x1b41b4: 0xf02d
    ctx->pc = 0x1b41b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b41b8: 0x6810004
    ctx->pc = 0x1B41B8u;
    {
        const bool branch_taken_0x1b41b8 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1B41BCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        if (branch_taken_0x1b41b8) {
            ctx->pc = 0x1B41CCu;
            goto label_1b41cc;
        }
    }
    ctx->pc = 0x1B41C0u;
    // 0x1b41c0: 0x26820001
    ctx->pc = 0x1b41c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b41c4: 0x21043
    ctx->pc = 0x1b41c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1b41c8: 0xafa200b0
    ctx->pc = 0x1b41c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1b41cc:
    // 0x1b41cc: 0x17c00014
    ctx->pc = 0x1B41CCu;
    {
        const bool branch_taken_0x1b41cc = (GPR_U32(ctx, 30) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b41cc) {
            ctx->pc = 0x1B4220u;
            goto label_1b4220;
        }
    }
    ctx->pc = 0x1B41D4u;
    // 0x1b41d4: 0x8fa200d0
    ctx->pc = 0x1b41d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b41d8: 0x10400011
    ctx->pc = 0x1B41D8u;
    {
        const bool branch_taken_0x1b41d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B41DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b41d8) {
            ctx->pc = 0x1B4220u;
            goto label_1b4220;
        }
    }
    ctx->pc = 0x1B41E0u;
    // 0x1b41e0: 0xc06cfe8
    ctx->pc = 0x1B41E0u;
    SET_GPR_U32(ctx, 31, 0x1B41E8u);
    ctx->pc = 0x1B3FA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3FA0_0x1b3fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B41E8u; }
    }
    if (ctx->pc != 0x1B41E8u) { return; }
    ctx->pc = 0x1B41E8u;
    // 0x1b41e8: 0x1040008c
    ctx->pc = 0x1B41E8u;
    {
        const bool branch_taken_0x1b41e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b41e8) {
            ctx->pc = 0x1B441Cu;
            goto label_1b441c;
        }
    }
    ctx->pc = 0x1B41F0u;
    // 0x1b41f0: 0x8fa300b0
    ctx->pc = 0x1b41f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b41f4: 0x431018
    ctx->pc = 0x1b41f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1b41f8: 0x24030280
    ctx->pc = 0x1b41f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 640));
    // 0x1b41fc: 0x621023
    ctx->pc = 0x1b41fcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b4200: 0x4410003
    ctx->pc = 0x1B4200u;
    {
        const bool branch_taken_0x1b4200 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B4204u;
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x1b4200) {
            ctx->pc = 0x1B4210u;
            goto label_1b4210;
        }
    }
    ctx->pc = 0x1B4208u;
    // 0x1b4208: 0x24420001
    ctx->pc = 0x1b4208u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b420c: 0x28043
    ctx->pc = 0x1b420cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
label_1b4210:
    // 0x1b4210: 0x200202d
    ctx->pc = 0x1b4210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4214: 0xc06d57c
    ctx->pc = 0x1B4214u;
    SET_GPR_U32(ctx, 31, 0x1B421Cu);
    ctx->pc = 0x1B4218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B55F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B55F0_0x1b55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B421Cu; }
    }
    if (ctx->pc != 0x1B421Cu) { return; }
    ctx->pc = 0x1B421Cu;
    // 0x1b421c: 0x241e0001
    ctx->pc = 0x1b421cu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 1));
label_1b4220:
    // 0x1b4220: 0x92720000
    ctx->pc = 0x1b4220u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b4224: 0x12400076
    ctx->pc = 0x1B4224u;
    {
        const bool branch_taken_0x1b4224 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B4228u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x1b4224) {
            ctx->pc = 0x1B4400u;
            goto label_1b4400;
        }
    }
    ctx->pc = 0x1B422Cu;
    // 0x1b422c: 0x2402000d
    ctx->pc = 0x1b422cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b4230: 0x12420074
    ctx->pc = 0x1B4230u;
    {
        const bool branch_taken_0x1b4230 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x1B4234u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 224));
        if (branch_taken_0x1b4230) {
            ctx->pc = 0x1B4404u;
            goto label_1b4404;
        }
    }
    ctx->pc = 0x1B4238u;
    // 0x1b4238: 0x2402000a
    ctx->pc = 0x1b4238u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b423c: 0x16420005
    ctx->pc = 0x1B423Cu;
    {
        const bool branch_taken_0x1b423c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x1B4240u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 128));
        if (branch_taken_0x1b423c) {
            ctx->pc = 0x1B4254u;
            goto label_1b4254;
        }
    }
    ctx->pc = 0x1B4244u;
    // 0x1b4244: 0x2e0802d
    ctx->pc = 0x1b4244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4248: 0x2b4a821
    ctx->pc = 0x1b4248u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x1b424c: 0x10000050
    ctx->pc = 0x1B424Cu;
    {
        const bool branch_taken_0x1b424c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B4250u;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b424c) {
            ctx->pc = 0x1B4390u;
            goto label_1b4390;
        }
    }
    ctx->pc = 0x1B4254u;
label_1b4254:
    // 0x1b4254: 0x14400003
    ctx->pc = 0x1B4254u;
    {
        const bool branch_taken_0x1b4254 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B4258u;
        SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 18), 160));
        if (branch_taken_0x1b4254) {
            ctx->pc = 0x1B4264u;
            goto label_1b4264;
        }
    }
    ctx->pc = 0x1B425Cu;
    // 0x1b425c: 0x14200007
    ctx->pc = 0x1B425Cu;
    {
        const bool branch_taken_0x1b425c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b425c) {
            ctx->pc = 0x1B427Cu;
            goto label_1b427c;
        }
    }
    ctx->pc = 0x1B4264u;
label_1b4264:
    // 0x1b4264: 0x2e4200e0
    ctx->pc = 0x1b4264u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 224));
    // 0x1b4268: 0x1440000d
    ctx->pc = 0x1B4268u;
    {
        const bool branch_taken_0x1b4268 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B426Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
        if (branch_taken_0x1b4268) {
            ctx->pc = 0x1B42A0u;
            goto label_1b42a0;
        }
    }
    ctx->pc = 0x1B4270u;
    // 0x1b4270: 0x2e410100
    ctx->pc = 0x1b4270u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 18), 256));
    // 0x1b4274: 0x1020000a
    ctx->pc = 0x1B4274u;
    {
        const bool branch_taken_0x1b4274 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b4274) {
            ctx->pc = 0x1B42A0u;
            goto label_1b42a0;
        }
    }
    ctx->pc = 0x1B427Cu;
label_1b427c:
    // 0x1b427c: 0xa2320000
    ctx->pc = 0x1b427cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x1b4280: 0x92620000
    ctx->pc = 0x1b4280u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b4284: 0x26310001
    ctx->pc = 0x1b4284u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b4288: 0x1040005d
    ctx->pc = 0x1B4288u;
    {
        const bool branch_taken_0x1b4288 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B428Cu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x1b4288) {
            ctx->pc = 0x1B4400u;
            goto label_1b4400;
        }
    }
    ctx->pc = 0x1B4290u;
    // 0x1b4290: 0xa2220000
    ctx->pc = 0x1b4290u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4294: 0x102d
    ctx->pc = 0x1b4294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4298: 0x10000056
    ctx->pc = 0x1B4298u;
    {
        const bool branch_taken_0x1b4298 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B429Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1b4298) {
            ctx->pc = 0x1B43F4u;
            goto label_1b43f4;
        }
    }
    ctx->pc = 0x1B42A0u;
label_1b42a0:
    // 0x1b42a0: 0x16420037
    ctx->pc = 0x1B42A0u;
    {
        const bool branch_taken_0x1b42a0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x1b42a0) {
            ctx->pc = 0x1B4380u;
            goto label_1b4380;
        }
    }
    ctx->pc = 0x1B42A8u;
    // 0x1b42a8: 0xa3b202e8
    ctx->pc = 0x1b42a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 744), (uint8_t)GPR_U32(ctx, 18));
    // 0x1b42ac: 0x24050001
    ctx->pc = 0x1b42acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b42b0: 0x2e440080
    ctx->pc = 0x1b42b0u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 18), 128));
    // 0x1b42b4: 0x10000012
    ctx->pc = 0x1B42B4u;
    {
        const bool branch_taken_0x1b42b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B42B8u;
        SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 18), 224));
        if (branch_taken_0x1b42b4) {
            ctx->pc = 0x1B4300u;
            goto label_1b4300;
        }
    }
    ctx->pc = 0x1B42BCu;
label_1b42bc:
    // 0x1b42bc: 0x8042ffff
    ctx->pc = 0x1b42bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x1b42c0: 0x10400013
    ctx->pc = 0x1B42C0u;
    {
        const bool branch_taken_0x1b42c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B42C4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
        if (branch_taken_0x1b42c0) {
            ctx->pc = 0x1B4310u;
            goto label_1b4310;
        }
    }
    ctx->pc = 0x1B42C8u;
    // 0x1b42c8: 0x24a2ffff
    ctx->pc = 0x1b42c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1b42cc: 0x2621021
    ctx->pc = 0x1b42ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b42d0: 0x14800004
    ctx->pc = 0x1B42D0u;
    {
        const bool branch_taken_0x1b42d0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B42D4u;
        SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1b42d0) {
            ctx->pc = 0x1B42E4u;
            goto label_1b42e4;
        }
    }
    ctx->pc = 0x1B42D8u;
    // 0x1b42d8: 0x2e4100a0
    ctx->pc = 0x1b42d8u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 18), 160));
    // 0x1b42dc: 0x1420000b
    ctx->pc = 0x1B42DCu;
    {
        const bool branch_taken_0x1b42dc = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b42dc) {
            ctx->pc = 0x1B430Cu;
            goto label_1b430c;
        }
    }
    ctx->pc = 0x1B42E4u;
label_1b42e4:
    // 0x1b42e4: 0x14600004
    ctx->pc = 0x1B42E4u;
    {
        const bool branch_taken_0x1b42e4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B42E8u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
        if (branch_taken_0x1b42e4) {
            ctx->pc = 0x1B42F8u;
            goto label_1b42f8;
        }
    }
    ctx->pc = 0x1B42ECu;
    // 0x1b42ec: 0x2e410100
    ctx->pc = 0x1b42ecu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 18), 256));
    // 0x1b42f0: 0x14200006
    ctx->pc = 0x1B42F0u;
    {
        const bool branch_taken_0x1b42f0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b42f0) {
            ctx->pc = 0x1B430Cu;
            goto label_1b430c;
        }
    }
    ctx->pc = 0x1B42F8u;
label_1b42f8:
    // 0x1b42f8: 0xa05602e8
    ctx->pc = 0x1b42f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 744), (uint8_t)GPR_U32(ctx, 22));
    // 0x1b42fc: 0x24a50001
    ctx->pc = 0x1b42fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_1b4300:
    // 0x1b4300: 0x28a20004
    ctx->pc = 0x1b4300u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x1b4304: 0x1440ffed
    ctx->pc = 0x1B4304u;
    {
        const bool branch_taken_0x1b4304 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B4308u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        if (branch_taken_0x1b4304) {
            ctx->pc = 0x1B42BCu;
            goto label_1b42bc;
        }
    }
    ctx->pc = 0x1B430Cu;
label_1b430c:
    // 0x1b430c: 0xbd1021
    ctx->pc = 0x1b430cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_1b4310:
    // 0x1b4310: 0xa04002e8
    ctx->pc = 0x1b4310u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 744), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4314: 0x27a202ea
    ctx->pc = 0x1b4314u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 746));
    // 0x1b4318: 0x80420000
    ctx->pc = 0x1b4318u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b431c: 0x10400005
    ctx->pc = 0x1B431Cu;
    {
        const bool branch_taken_0x1b431c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b431c) {
            ctx->pc = 0x1B4334u;
            goto label_1b4334;
        }
    }
    ctx->pc = 0x1B4324u;
    // 0x1b4324: 0x40b02d
    ctx->pc = 0x1b4324u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4328: 0x24030020
    ctx->pc = 0x1b4328u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b432c: 0x27a202ea
    ctx->pc = 0x1b432cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 746));
    // 0x1b4330: 0xa0430000
    ctx->pc = 0x1b4330u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1b4334:
    // 0x1b4334: 0x3c050025
    ctx->pc = 0x1b4334u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1b4338: 0x27a402e8
    ctx->pc = 0x1b4338u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 744));
    // 0x1b433c: 0xc042b9e
    ctx->pc = 0x1B433Cu;
    SET_GPR_U32(ctx, 31, 0x1B4344u);
    ctx->pc = 0x1B4340u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967056));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4344u; }
    }
    if (ctx->pc != 0x1B4344u) { return; }
    ctx->pc = 0x1B4344u;
    // 0x1b4344: 0x14400005
    ctx->pc = 0x1B4344u;
    {
        const bool branch_taken_0x1b4344 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B4348u;
        SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
        if (branch_taken_0x1b4344) {
            ctx->pc = 0x1B435Cu;
            goto label_1b435c;
        }
    }
    ctx->pc = 0x1B434Cu;
    // 0x1b434c: 0x26c2ffd0
    ctx->pc = 0x1b434cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294967248));
    // 0x1b4350: 0x26730003
    ctx->pc = 0x1b4350u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 3));
    // 0x1b4354: 0x1000000e
    ctx->pc = 0x1B4354u;
    {
        const bool branch_taken_0x1b4354 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B4358u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        if (branch_taken_0x1b4354) {
            ctx->pc = 0x1B4390u;
            goto label_1b4390;
        }
    }
    ctx->pc = 0x1B435Cu;
label_1b435c:
    // 0x1b435c: 0x27a402e8
    ctx->pc = 0x1b435cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 744));
    // 0x1b4360: 0xc042b9e
    ctx->pc = 0x1B4360u;
    SET_GPR_U32(ctx, 31, 0x1B4368u);
    ctx->pc = 0x1B4364u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967064));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4368u; }
    }
    if (ctx->pc != 0x1B4368u) { return; }
    ctx->pc = 0x1B4368u;
    // 0x1b4368: 0x14400005
    ctx->pc = 0x1B4368u;
    {
        const bool branch_taken_0x1b4368 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b4368) {
            ctx->pc = 0x1B4380u;
            goto label_1b4380;
        }
    }
    ctx->pc = 0x1B4370u;
    // 0x1b4370: 0x26c2ffd0
    ctx->pc = 0x1b4370u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294967248));
    // 0x1b4374: 0x26730003
    ctx->pc = 0x1b4374u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 3));
    // 0x1b4378: 0x10000005
    ctx->pc = 0x1B4378u;
    {
        const bool branch_taken_0x1b4378 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B437Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        if (branch_taken_0x1b4378) {
            ctx->pc = 0x1B4390u;
            goto label_1b4390;
        }
    }
    ctx->pc = 0x1B4380u;
label_1b4380:
    // 0x1b4380: 0xa2320000
    ctx->pc = 0x1b4380u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x1b4384: 0x24020001
    ctx->pc = 0x1b4384u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4388: 0x1000001a
    ctx->pc = 0x1B4388u;
    {
        const bool branch_taken_0x1b4388 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B438Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1b4388) {
            ctx->pc = 0x1B43F4u;
            goto label_1b43f4;
        }
    }
    ctx->pc = 0x1B4390u;
label_1b4390:
    // 0x1b4390: 0x27a400e0
    ctx->pc = 0x1b4390u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b4394: 0xc06db1c
    ctx->pc = 0x1B4394u;
    SET_GPR_U32(ctx, 31, 0x1B439Cu);
    ctx->pc = 0x1B4398u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1B6C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6C70_0x1b6c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B439Cu; }
    }
    if (ctx->pc != 0x1B439Cu) { return; }
    ctx->pc = 0x1B439Cu;
    // 0x1b439c: 0x10400005
    ctx->pc = 0x1B439Cu;
    {
        const bool branch_taken_0x1b439c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B43A0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 224));
        if (branch_taken_0x1b439c) {
            ctx->pc = 0x1B43B4u;
            goto label_1b43b4;
        }
    }
    ctx->pc = 0x1B43A4u;
    // 0x1b43a4: 0xc06d5a8
    ctx->pc = 0x1B43A4u;
    SET_GPR_U32(ctx, 31, 0x1B43ACu);
    ctx->pc = 0x1B56A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B56A0_0x1b56a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43ACu; }
    }
    if (ctx->pc != 0x1B43ACu) { return; }
    ctx->pc = 0x1B43ACu;
    // 0x1b43ac: 0xa3a000e0
    ctx->pc = 0x1b43acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b43b0: 0x27b100e0
    ctx->pc = 0x1b43b0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 224));
label_1b43b4:
    // 0x1b43b4: 0x8fa200c0
    ctx->pc = 0x1b43b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b43b8: 0x21880
    ctx->pc = 0x1b43b8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b43bc: 0x3c020023
    ctx->pc = 0x1b43bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1b43c0: 0x24424480
    ctx->pc = 0x1b43c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17536));
    // 0x1b43c4: 0x431021
    ctx->pc = 0x1b43c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b43c8: 0x8c420000
    ctx->pc = 0x1b43c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b43cc: 0x21a3c
    ctx->pc = 0x1b43ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x1b43d0: 0x8fa200a0
    ctx->pc = 0x1b43d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b43d4: 0x31a3e
    ctx->pc = 0x1b43d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x1b43d8: 0xc06d594
    ctx->pc = 0x1B43D8u;
    SET_GPR_U32(ctx, 31, 0x1B43E0u);
    ctx->pc = 0x1B43DCu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B5650u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5650_0x1b5650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43E0u; }
    }
    if (ctx->pc != 0x1B43E0u) { return; }
    ctx->pc = 0x1B43E0u;
    // 0x1b43e0: 0x200202d
    ctx->pc = 0x1b43e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43e4: 0xc06d57c
    ctx->pc = 0x1B43E4u;
    SET_GPR_U32(ctx, 31, 0x1B43ECu);
    ctx->pc = 0x1B43E8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B55F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B55F0_0x1b55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43ECu; }
    }
    if (ctx->pc != 0x1B43ECu) { return; }
    ctx->pc = 0x1B43ECu;
    // 0x1b43ec: 0x1000ff77
    ctx->pc = 0x1B43ECu;
    {
        const bool branch_taken_0x1b43ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b43ec) {
            ctx->pc = 0x1B41CCu;
            goto label_1b41cc;
        }
    }
    ctx->pc = 0x1B43F4u;
label_1b43f4:
    // 0x1b43f4: 0x541007
    ctx->pc = 0x1b43f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b43f8: 0x1000ff74
    ctx->pc = 0x1B43F8u;
    {
        const bool branch_taken_0x1b43f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B43FCu;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x1b43f8) {
            ctx->pc = 0x1B41CCu;
            goto label_1b41cc;
        }
    }
    ctx->pc = 0x1B4400u;
label_1b4400:
    // 0x1b4400: 0x27a400e0
    ctx->pc = 0x1b4400u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 224));
label_1b4404:
    // 0x1b4404: 0xc06db1c
    ctx->pc = 0x1B4404u;
    SET_GPR_U32(ctx, 31, 0x1B440Cu);
    ctx->pc = 0x1B4408u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1B6C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6C70_0x1b6c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B440Cu; }
    }
    if (ctx->pc != 0x1B440Cu) { return; }
    ctx->pc = 0x1B440Cu;
    // 0x1b440c: 0x10400003
    ctx->pc = 0x1B440Cu;
    {
        const bool branch_taken_0x1b440c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B4410u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 224));
        if (branch_taken_0x1b440c) {
            ctx->pc = 0x1B441Cu;
            goto label_1b441c;
        }
    }
    ctx->pc = 0x1B4414u;
    // 0x1b4414: 0xc06d5a8
    ctx->pc = 0x1B4414u;
    SET_GPR_U32(ctx, 31, 0x1B441Cu);
    ctx->pc = 0x1B56A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B56A0_0x1b56a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B441Cu; }
    }
    if (ctx->pc != 0x1B441Cu) { return; }
    ctx->pc = 0x1B441Cu;
label_1b441c:
    // 0x1b441c: 0xdfbf0090
    ctx->pc = 0x1b441cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b4420: 0x7bbe0080
    ctx->pc = 0x1b4420u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b4424: 0x7bb70070
    ctx->pc = 0x1b4424u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4428: 0x7bb60060
    ctx->pc = 0x1b4428u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b442c: 0x7bb50050
    ctx->pc = 0x1b442cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b4430: 0x7bb40040
    ctx->pc = 0x1b4430u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b4434: 0x7bb30030
    ctx->pc = 0x1b4434u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b4438: 0x7bb20020
    ctx->pc = 0x1b4438u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b443c: 0x7bb10010
    ctx->pc = 0x1b443cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4440: 0x7bb00000
    ctx->pc = 0x1b4440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4444: 0x3e00008
    ctx->pc = 0x1B4444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4448u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 752));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B41CCu: goto label_1b41cc;
            case 0x1B4210u: goto label_1b4210;
            case 0x1B4220u: goto label_1b4220;
            case 0x1B4254u: goto label_1b4254;
            case 0x1B4264u: goto label_1b4264;
            case 0x1B427Cu: goto label_1b427c;
            case 0x1B42A0u: goto label_1b42a0;
            case 0x1B42BCu: goto label_1b42bc;
            case 0x1B42E4u: goto label_1b42e4;
            case 0x1B42F8u: goto label_1b42f8;
            case 0x1B4300u: goto label_1b4300;
            case 0x1B430Cu: goto label_1b430c;
            case 0x1B4310u: goto label_1b4310;
            case 0x1B4334u: goto label_1b4334;
            case 0x1B435Cu: goto label_1b435c;
            case 0x1B4380u: goto label_1b4380;
            case 0x1B4390u: goto label_1b4390;
            case 0x1B43B4u: goto label_1b43b4;
            case 0x1B43F4u: goto label_1b43f4;
            case 0x1B4400u: goto label_1b4400;
            case 0x1B4404u: goto label_1b4404;
            case 0x1B441Cu: goto label_1b441c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B444Cu;
    // 0x1b444c: 0x0
    ctx->pc = 0x1b444cu;
    // NOP
}
