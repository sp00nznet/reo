#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00193140
// Address: 0x193140 - 0x193240
void sub_00193140_0x193140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x193140u;

label_193140:
    // 0x193140: 0x27bdffc0
    ctx->pc = 0x193140u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x193144: 0xffbf0030
    ctx->pc = 0x193144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x193148: 0x7fb10020
    ctx->pc = 0x193148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19314c: 0x7fb00010
    ctx->pc = 0x19314cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x193150: 0x80882d
    ctx->pc = 0x193150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193154: 0xe7b40000
    ctx->pc = 0x193154u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x193158: 0xa0802d
    ctx->pc = 0x193158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19315c: 0x8c8400d4
    ctx->pc = 0x19315cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x193160: 0xc064914
    ctx->pc = 0x193160u;
    SET_GPR_U32(ctx, 31, 0x193168u);
    ctx->pc = 0x193164u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x192450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192450_0x192450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193168u; }
    }
    if (ctx->pc != 0x193168u) { return; }
    ctx->pc = 0x193168u;
    // 0x193168: 0x962300c6
    ctx->pc = 0x193168u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 198)));
    // 0x19316c: 0x3202ffff
    ctx->pc = 0x19316cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 65535));
    // 0x193170: 0x1462001c
    ctx->pc = 0x193170u;
    {
        const bool branch_taken_0x193170 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x193174u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x193170) {
            ctx->pc = 0x1931E4u;
            goto label_1931e4;
        }
    }
    ctx->pc = 0x193178u;
label_193178:
    // 0x193178: 0x41080
    ctx->pc = 0x193178u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x19317c: 0x2221821
    ctx->pc = 0x19317cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x193180: 0x24840001
    ctx->pc = 0x193180u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x193184: 0xc46000dc
    ctx->pc = 0x193184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193188: 0x2882000a
    ctx->pc = 0x193188u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 10));
    // 0x19318c: 0x1440fffa
    ctx->pc = 0x19318Cu;
    {
        const bool branch_taken_0x19318c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x193190u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
        if (branch_taken_0x19318c) {
            ctx->pc = 0x193178u;
            goto label_193178;
        }
    }
    ctx->pc = 0x193194u;
    // 0x193194: 0x8e2200d4
    ctx->pc = 0x193194u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x193198: 0x1040000b
    ctx->pc = 0x193198u;
    {
        const bool branch_taken_0x193198 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19319Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 64));
        if (branch_taken_0x193198) {
            ctx->pc = 0x1931C8u;
            goto label_1931c8;
        }
    }
    ctx->pc = 0x1931A0u;
    // 0x1931a0: 0x3c010029
    ctx->pc = 0x1931a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x1931a4: 0x8e2300d8
    ctx->pc = 0x1931a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x1931a8: 0x8c224168
    ctx->pc = 0x1931a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 16744)));
    // 0x1931ac: 0x262500dc
    ctx->pc = 0x1931acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 220));
    // 0x1931b0: 0x26260104
    ctx->pc = 0x1931b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 260));
    // 0x1931b4: 0x2627015c
    ctx->pc = 0x1931b4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 348));
    // 0x1931b8: 0x4600a306
    ctx->pc = 0x1931b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1931bc: 0xc064f20
    ctx->pc = 0x1931BCu;
    SET_GPR_U32(ctx, 31, 0x1931C4u);
    ctx->pc = 0x1931C0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x193C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193C80_0x193c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1931C4u; }
    }
    if (ctx->pc != 0x1931C4u) { return; }
    ctx->pc = 0x1931C4u;
    // 0x1931c4: 0x26240040
    ctx->pc = 0x1931c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 64));
label_1931c8:
    // 0x1931c8: 0xc064e68
    ctx->pc = 0x1931C8u;
    SET_GPR_U32(ctx, 31, 0x1931D0u);
    ctx->pc = 0x1931CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 260));
    ctx->pc = 0x1939A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001939A0_0x1939a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1931D0u; }
    }
    if (ctx->pc != 0x1931D0u) { return; }
    ctx->pc = 0x1931D0u;
    // 0x1931d0: 0x8e2400d0
    ctx->pc = 0x1931d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x1931d4: 0x10800003
    ctx->pc = 0x1931D4u;
    {
        const bool branch_taken_0x1931d4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1931D8u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x1931d4) {
            ctx->pc = 0x1931E4u;
            goto label_1931e4;
        }
    }
    ctx->pc = 0x1931DCu;
    // 0x1931dc: 0xc064c50
    ctx->pc = 0x1931DCu;
    SET_GPR_U32(ctx, 31, 0x1931E4u);
    ctx->pc = 0x1931E0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193140u;
    goto label_193140;
    ctx->pc = 0x1931E4u;
label_1931e4:
    // 0x1931e4: 0x8e2400cc
    ctx->pc = 0x1931e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x1931e8: 0x10800003
    ctx->pc = 0x1931E8u;
    {
        const bool branch_taken_0x1931e8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1931ECu;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x1931e8) {
            ctx->pc = 0x1931F8u;
            goto label_1931f8;
        }
    }
    ctx->pc = 0x1931F0u;
    // 0x1931f0: 0xc064c50
    ctx->pc = 0x1931F0u;
    SET_GPR_U32(ctx, 31, 0x1931F8u);
    ctx->pc = 0x1931F4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193140u;
    goto label_193140;
    ctx->pc = 0x1931F8u;
label_1931f8:
    // 0x1931f8: 0xdfbf0030
    ctx->pc = 0x1931f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1931fc: 0xc7b40000
    ctx->pc = 0x1931fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x193200: 0x7bb10020
    ctx->pc = 0x193200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193204: 0x24020001
    ctx->pc = 0x193204u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x193208: 0x7bb00010
    ctx->pc = 0x193208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19320c: 0x3e00008
    ctx->pc = 0x19320Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193210u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193140u: goto label_193140;
            case 0x193178u: goto label_193178;
            case 0x1931C8u: goto label_1931c8;
            case 0x1931E4u: goto label_1931e4;
            case 0x1931F8u: goto label_1931f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193214u;
    // 0x193214: 0x0
    ctx->pc = 0x193214u;
    // NOP
    // 0x193218: 0x0
    ctx->pc = 0x193218u;
    // NOP
    // 0x19321c: 0x0
    ctx->pc = 0x19321cu;
    // NOP
    // 0x193220: 0x8064c0c
    ctx->pc = 0x193220u;
    ctx->pc = 0x193030u;
    sub_00193030_0x193030(rdram, ctx, runtime); return;
    ctx->pc = 0x193228u;
    // 0x193228: 0x0
    ctx->pc = 0x193228u;
    // NOP
    // 0x19322c: 0x0
    ctx->pc = 0x19322cu;
    // NOP
    // 0x193230: 0x8064c3c
    ctx->pc = 0x193230u;
    ctx->pc = 0x1930F0u;
    entry_1930f0_0x193140(rdram, ctx, runtime); return;
    ctx->pc = 0x193238u;
    // 0x193238: 0x0
    ctx->pc = 0x193238u;
    // NOP
    // 0x19323c: 0x0
    ctx->pc = 0x19323cu;
    // NOP
}
