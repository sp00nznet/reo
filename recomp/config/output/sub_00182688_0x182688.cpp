#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00182688
// Address: 0x182688 - 0x182820
void sub_00182688_0x182688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x182688u;

    // 0x182688: 0x27bdffc0
    ctx->pc = 0x182688u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18268c: 0xffb00000
    ctx->pc = 0x18268cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182690: 0xa0802d
    ctx->pc = 0x182690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182694: 0xffb20010
    ctx->pc = 0x182694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x182698: 0x80902d
    ctx->pc = 0x182698u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18269c: 0x200202d
    ctx->pc = 0x18269cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1826a0: 0xffb10008
    ctx->pc = 0x1826a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1826a4: 0xffb30018
    ctx->pc = 0x1826a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1826a8: 0xffb40020
    ctx->pc = 0x1826a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1826ac: 0xffb50028
    ctx->pc = 0x1826acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1826b0: 0xffbf0030
    ctx->pc = 0x1826b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1826b4: 0xc042c56
    ctx->pc = 0x1826B4u;
    SET_GPR_U32(ctx, 31, 0x1826BCu);
    ctx->pc = 0x1826B8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1826BCu; }
    }
    if (ctx->pc != 0x1826BCu) { return; }
    ctx->pc = 0x1826BCu;
    // 0x1826bc: 0x2c430080
    ctx->pc = 0x1826bcu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 128));
    // 0x1826c0: 0x1060004d
    ctx->pc = 0x1826C0u;
    {
        const bool branch_taken_0x1826c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1826C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1826c0) {
            ctx->pc = 0x1827F8u;
            goto label_1827f8;
        }
    }
    ctx->pc = 0x1826C8u;
    // 0x1826c8: 0x24050898
    ctx->pc = 0x1826c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2200));
    // 0x1826cc: 0x2452818
    ctx->pc = 0x1826ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x1826d0: 0x3c010028
    ctx->pc = 0x1826d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)40 << 16));
    // 0x1826d4: 0x24216350
    ctx->pc = 0x1826d4u;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 1), 25424));
    // 0x1826d8: 0x252821
    ctx->pc = 0x1826d8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x1826dc: 0xc042bf0
    ctx->pc = 0x1826DCu;
    SET_GPR_U32(ctx, 31, 0x1826E4u);
    ctx->pc = 0x1826E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1826E4u; }
    }
    if (ctx->pc != 0x1826E4u) { return; }
    ctx->pc = 0x1826E4u;
    // 0x1826e4: 0x82030000
    ctx->pc = 0x1826e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1826e8: 0x2402002f
    ctx->pc = 0x1826e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 47));
    // 0x1826ec: 0x1462000a
    ctx->pc = 0x1826ECu;
    {
        const bool branch_taken_0x1826ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1826F0u;
        SET_GPR_U32(ctx, 19, ((uint32_t)36 << 16));
        if (branch_taken_0x1826ec) {
            ctx->pc = 0x182718u;
            goto label_182718;
        }
    }
    ctx->pc = 0x1826F4u;
    // 0x1826f4: 0x26040001
    ctx->pc = 0x1826f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1826f8: 0x266517c8
    ctx->pc = 0x1826f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 6088));
    // 0x1826fc: 0x80a20000
    ctx->pc = 0x1826fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x182700: 0x80a30001
    ctx->pc = 0x182700u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x182704: 0xa2220000
    ctx->pc = 0x182704u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x182708: 0xc060948
    ctx->pc = 0x182708u;
    SET_GPR_U32(ctx, 31, 0x182710u);
    ctx->pc = 0x18270Cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x182520u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182520_0x182520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182710u; }
    }
    if (ctx->pc != 0x182710u) { return; }
    ctx->pc = 0x182710u;
    // 0x182710: 0x10000005
    ctx->pc = 0x182710u;
    {
        const bool branch_taken_0x182710 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182714u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x182710) {
            ctx->pc = 0x182728u;
            goto label_182728;
        }
    }
    ctx->pc = 0x182718u;
label_182718:
    // 0x182718: 0x200202d
    ctx->pc = 0x182718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18271c: 0xc060948
    ctx->pc = 0x18271Cu;
    SET_GPR_U32(ctx, 31, 0x182724u);
    ctx->pc = 0x182720u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 6088));
    ctx->pc = 0x182520u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182520_0x182520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182724u; }
    }
    if (ctx->pc != 0x182724u) { return; }
    ctx->pc = 0x182724u;
    // 0x182724: 0x40802d
    ctx->pc = 0x182724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_182728:
    // 0x182728: 0x1200002a
    ctx->pc = 0x182728u;
    {
        const bool branch_taken_0x182728 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x18272Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        if (branch_taken_0x182728) {
            ctx->pc = 0x1827D4u;
            goto label_1827d4;
        }
    }
    ctx->pc = 0x182730u;
    // 0x182730: 0x3c150024
    ctx->pc = 0x182730u;
    SET_GPR_U32(ctx, 21, ((uint32_t)36 << 16));
    // 0x182734: 0x245217c8
    ctx->pc = 0x182734u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 6088));
    // 0x182738: 0x3c140024
    ctx->pc = 0x182738u;
    SET_GPR_U32(ctx, 20, ((uint32_t)36 << 16));
    // 0x18273c: 0x200202d
    ctx->pc = 0x18273cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_182740:
    // 0x182740: 0xc042b9e
    ctx->pc = 0x182740u;
    SET_GPR_U32(ctx, 31, 0x182748u);
    ctx->pc = 0x182744u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 6064));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182748u; }
    }
    if (ctx->pc != 0x182748u) { return; }
    ctx->pc = 0x182748u;
    // 0x182748: 0x202d
    ctx->pc = 0x182748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18274c: 0x1040001a
    ctx->pc = 0x18274Cu;
    {
        const bool branch_taken_0x18274c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x182750u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 6072));
        if (branch_taken_0x18274c) {
            ctx->pc = 0x1827B8u;
            goto label_1827b8;
        }
    }
    ctx->pc = 0x182754u;
    // 0x182754: 0xc042b9e
    ctx->pc = 0x182754u;
    SET_GPR_U32(ctx, 31, 0x18275Cu);
    ctx->pc = 0x182758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18275Cu; }
    }
    if (ctx->pc != 0x18275Cu) { return; }
    ctx->pc = 0x18275Cu;
    // 0x18275c: 0x220202d
    ctx->pc = 0x18275cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182760: 0x1440000f
    ctx->pc = 0x182760u;
    {
        const bool branch_taken_0x182760 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x182764u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x182760) {
            ctx->pc = 0x1827A0u;
            goto label_1827a0;
        }
    }
    ctx->pc = 0x182768u;
    // 0x182768: 0xc042c56
    ctx->pc = 0x182768u;
    SET_GPR_U32(ctx, 31, 0x182770u);
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182770u; }
    }
    if (ctx->pc != 0x182770u) { return; }
    ctx->pc = 0x182770u;
    // 0x182770: 0x220202d
    ctx->pc = 0x182770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182774: 0x2221021
    ctx->pc = 0x182774u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x182778: 0x2405002f
    ctx->pc = 0x182778u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
    // 0x18277c: 0xc042dee
    ctx->pc = 0x18277Cu;
    SET_GPR_U32(ctx, 31, 0x182784u);
    ctx->pc = 0x182780u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x10B7B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B7B8_0x10b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182784u; }
    }
    if (ctx->pc != 0x182784u) { return; }
    ctx->pc = 0x182784u;
    // 0x182784: 0x202d
    ctx->pc = 0x182784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182788: 0x40182d
    ctx->pc = 0x182788u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18278c: 0x1060001a
    ctx->pc = 0x18278Cu;
    {
        const bool branch_taken_0x18278c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x182790u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 6088));
        if (branch_taken_0x18278c) {
            ctx->pc = 0x1827F8u;
            goto label_1827f8;
        }
    }
    ctx->pc = 0x182794u;
    // 0x182794: 0x1000000a
    ctx->pc = 0x182794u;
    {
        const bool branch_taken_0x182794 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182798u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x182794) {
            ctx->pc = 0x1827C0u;
            goto label_1827c0;
        }
    }
    ctx->pc = 0x18279Cu;
    // 0x18279c: 0x0
    ctx->pc = 0x18279cu;
    // NOP
label_1827a0:
    // 0x1827a0: 0xc042aee
    ctx->pc = 0x1827A0u;
    SET_GPR_U32(ctx, 31, 0x1827A8u);
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1827A8u; }
    }
    if (ctx->pc != 0x1827A8u) { return; }
    ctx->pc = 0x1827A8u;
    // 0x1827a8: 0x220202d
    ctx->pc = 0x1827a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1827ac: 0xc042aee
    ctx->pc = 0x1827ACu;
    SET_GPR_U32(ctx, 31, 0x1827B4u);
    ctx->pc = 0x1827B0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1827B4u; }
    }
    if (ctx->pc != 0x1827B4u) { return; }
    ctx->pc = 0x1827B4u;
    // 0x1827b4: 0x202d
    ctx->pc = 0x1827b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1827b8:
    // 0x1827b8: 0x3c050024
    ctx->pc = 0x1827b8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x1827bc: 0x24a517c8
    ctx->pc = 0x1827bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 6088));
label_1827c0:
    // 0x1827c0: 0xc060948
    ctx->pc = 0x1827C0u;
    SET_GPR_U32(ctx, 31, 0x1827C8u);
    ctx->pc = 0x182520u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182520_0x182520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1827C8u; }
    }
    if (ctx->pc != 0x1827C8u) { return; }
    ctx->pc = 0x1827C8u;
    // 0x1827c8: 0x40802d
    ctx->pc = 0x1827c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1827cc: 0x5600ffdc
    ctx->pc = 0x1827CCu;
    {
        const bool branch_taken_0x1827cc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x1827cc) {
            ctx->pc = 0x1827D0u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x182740u;
            goto label_182740;
        }
    }
    ctx->pc = 0x1827D4u;
label_1827d4:
    // 0x1827d4: 0x266517c8
    ctx->pc = 0x1827d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 6088));
    // 0x1827d8: 0xc042b9e
    ctx->pc = 0x1827D8u;
    SET_GPR_U32(ctx, 31, 0x1827E0u);
    ctx->pc = 0x1827DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1827E0u; }
    }
    if (ctx->pc != 0x1827E0u) { return; }
    ctx->pc = 0x1827E0u;
    // 0x1827e0: 0x10400004
    ctx->pc = 0x1827E0u;
    {
        const bool branch_taken_0x1827e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1827E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1827e0) {
            ctx->pc = 0x1827F4u;
            goto label_1827f4;
        }
    }
    ctx->pc = 0x1827E8u;
    // 0x1827e8: 0xc042dee
    ctx->pc = 0x1827E8u;
    SET_GPR_U32(ctx, 31, 0x1827F0u);
    ctx->pc = 0x1827ECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
    ctx->pc = 0x10B7B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B7B8_0x10b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1827F0u; }
    }
    if (ctx->pc != 0x1827F0u) { return; }
    ctx->pc = 0x1827F0u;
    // 0x1827f0: 0xa0400000
    ctx->pc = 0x1827f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1827f4:
    // 0x1827f4: 0x24020001
    ctx->pc = 0x1827f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1827f8:
    // 0x1827f8: 0xdfb00000
    ctx->pc = 0x1827f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1827fc: 0xdfb10008
    ctx->pc = 0x1827fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182800: 0xdfb20010
    ctx->pc = 0x182800u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182804: 0xdfb30018
    ctx->pc = 0x182804u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x182808: 0xdfb40020
    ctx->pc = 0x182808u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18280c: 0xdfb50028
    ctx->pc = 0x18280cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x182810: 0xdfbf0030
    ctx->pc = 0x182810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182814: 0x3e00008
    ctx->pc = 0x182814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182818u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182718u: goto label_182718;
            case 0x182728u: goto label_182728;
            case 0x182740u: goto label_182740;
            case 0x1827A0u: goto label_1827a0;
            case 0x1827B8u: goto label_1827b8;
            case 0x1827C0u: goto label_1827c0;
            case 0x1827D4u: goto label_1827d4;
            case 0x1827F4u: goto label_1827f4;
            case 0x1827F8u: goto label_1827f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18281Cu;
    // 0x18281c: 0x0
    ctx->pc = 0x18281cu;
    // NOP
}
