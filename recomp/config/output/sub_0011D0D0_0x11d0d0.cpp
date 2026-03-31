#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011D0D0
// Address: 0x11d0d0 - 0x11d660
void sub_0011D0D0_0x11d0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11d0d0u;

label_11d0d0:
    // 0x11d0d0: 0x27bdffc0
    ctx->pc = 0x11d0d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_11d0d4:
    // 0x11d0d4: 0x3c040024
    ctx->pc = 0x11d0d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_11d0d8:
    // 0x11d0d8: 0xffb20020
    ctx->pc = 0x11d0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_11d0dc:
    // 0x11d0dc: 0x24848bd0
    ctx->pc = 0x11d0dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937552));
label_11d0e0:
    // 0x11d0e0: 0xffb10010
    ctx->pc = 0x11d0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_11d0e4:
    // 0x11d0e4: 0x3c120021
    ctx->pc = 0x11d0e4u;
    SET_GPR_U32(ctx, 18, ((uint32_t)33 << 16));
label_11d0e8:
    // 0x11d0e8: 0xffb00000
    ctx->pc = 0x11d0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11d0ec:
    // 0x11d0ec: 0xffbf0030
    ctx->pc = 0x11d0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_11d0f0:
    // 0x11d0f0: 0x2650a438
    ctx->pc = 0x11d0f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 4294943800));
label_11d0f4:
    // 0x11d0f4: 0x8e45a438
    ctx->pc = 0x11d0f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4294943800)));
label_11d0f8:
    // 0x11d0f8: 0x8e070004
    ctx->pc = 0x11d0f8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_11d0fc:
    // 0x11d0fc: 0x8e090008
    ctx->pc = 0x11d0fcu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_11d100:
    // 0x11d100: 0xa0302d
    ctx->pc = 0x11d100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11d104:
    // 0x11d104: 0xa73821
    ctx->pc = 0x11d104u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_11d108:
    // 0x11d108: 0xe94821
    ctx->pc = 0x11d108u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_11d10c:
    // 0x11d10c: 0xe0402d
    ctx->pc = 0x11d10cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_11d110:
    // 0x11d110: 0x24a5ffff
    ctx->pc = 0x11d110u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
label_11d114:
    // 0x11d114: 0x2529ffff
    ctx->pc = 0x11d114u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967295));
label_11d118:
    // 0x11d118: 0xc045a04
label_11d11c:
    if (ctx->pc == 0x11D11Cu) {
        ctx->pc = 0x11D11Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->pc = 0x11D120u;
        goto label_11d120;
    }
    ctx->pc = 0x11D118u;
    SET_GPR_U32(ctx, 31, 0x11D120u);
    ctx->pc = 0x11D11Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    ctx->pc = 0x116810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116810_0x116810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D120u; }
    }
    if (ctx->pc != 0x11D120u) { return; }
    ctx->pc = 0x11D120u;
label_11d120:
    // 0x11d120: 0x40803000
    ctx->pc = 0x11d120u;
    ctx->cop0_wired = GPR_U32(ctx, 0) & 0x3F; ctx->cop0_random = 47;
label_11d124:
    // 0x11d124: 0x40f
    ctx->pc = 0x11d124u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_11d128:
    // 0x11d128: 0x8e51a438
    ctx->pc = 0x11d128u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 4294943800)));
label_11d12c:
    // 0x11d12c: 0x2a220031
    ctx->pc = 0x11d12cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 49));
label_11d130:
    // 0x11d130: 0x14400006
label_11d134:
    if (ctx->pc == 0x11D134u) {
        ctx->pc = 0x11D134u;
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11D138u;
        goto label_11d138;
    }
    ctx->pc = 0x11D130u;
    {
        const bool branch_taken_0x11d130 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11D134u;
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11d130) {
            ctx->pc = 0x11D14Cu;
            goto label_11d14c;
        }
    }
    ctx->pc = 0x11D138u;
label_11d138:
    // 0x11d138: 0x3c040024
    ctx->pc = 0x11d138u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_11d13c:
    // 0x11d13c: 0xc045a04
label_11d140:
    if (ctx->pc == 0x11D140u) {
        ctx->pc = 0x11D140u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937608));
        ctx->pc = 0x11D144u;
        goto label_11d144;
    }
    ctx->pc = 0x11D13Cu;
    SET_GPR_U32(ctx, 31, 0x11D144u);
    ctx->pc = 0x11D140u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937608));
    ctx->pc = 0x116810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116810_0x116810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D144u; }
    }
    if (ctx->pc != 0x11D144u) { return; }
    ctx->pc = 0x11D144u;
label_11d144:
    // 0x11d144: 0xc047742
label_11d148:
    if (ctx->pc == 0x11D148u) {
        ctx->pc = 0x11D148u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x11D14Cu;
        goto label_11d14c;
    }
    ctx->pc = 0x11D144u;
    SET_GPR_U32(ctx, 31, 0x11D14Cu);
    ctx->pc = 0x11D148u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x11DD08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD08_0x11dd08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D14Cu; }
    }
    if (ctx->pc != 0x11D14Cu) { return; }
    ctx->pc = 0x11D14Cu;
label_11d14c:
    // 0x11d14c: 0x331102a
    ctx->pc = 0x11d14cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 25), GPR_S32(ctx, 17)));
label_11d150:
    // 0x11d150: 0x1040000d
label_11d154:
    if (ctx->pc == 0x11D154u) {
        ctx->pc = 0x11D154u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x11D158u;
        goto label_11d158;
    }
    ctx->pc = 0x11D150u;
    {
        const bool branch_taken_0x11d150 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D154u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        if (branch_taken_0x11d150) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11D158u;
label_11d158:
    // 0x11d158: 0x8e050000
    ctx->pc = 0x11d158u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11d15c:
    // 0x11d15c: 0x0
    ctx->pc = 0x11d15cu;
    // NOP
label_11d160:
    // 0x11d160: 0x320202d
    ctx->pc = 0x11d160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_11d164:
    // 0x11d164: 0x8e060004
    ctx->pc = 0x11d164u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_11d168:
    // 0x11d168: 0x8e070008
    ctx->pc = 0x11d168u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_11d16c:
    // 0x11d16c: 0x8e08000c
    ctx->pc = 0x11d16cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11d170:
    // 0x11d170: 0xc0473fc
label_11d174:
    if (ctx->pc == 0x11D174u) {
        ctx->pc = 0x11D174u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x11D178u;
        goto label_11d178;
    }
    ctx->pc = 0x11D170u;
    SET_GPR_U32(ctx, 31, 0x11D178u);
    ctx->pc = 0x11D174u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x11CFF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011CFF0_0x11cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D178u; }
    }
    if (ctx->pc != 0x11D178u) { return; }
    ctx->pc = 0x11D178u;
label_11d178:
    // 0x11d178: 0x27390001
    ctx->pc = 0x11d178u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 25), 1));
label_11d17c:
    // 0x11d17c: 0x331102a
    ctx->pc = 0x11d17cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 25), GPR_S32(ctx, 17)));
label_11d180:
    // 0x11d180: 0x5440fff7
label_11d184:
    if (ctx->pc == 0x11D184u) {
        ctx->pc = 0x11D184u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x11D188u;
        goto label_11d188;
    }
    ctx->pc = 0x11D180u;
    {
        const bool branch_taken_0x11d180 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11d180) {
            ctx->pc = 0x11D184u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x11D160u;
            goto label_11d160;
        }
    }
    ctx->pc = 0x11D188u;
label_11d188:
    // 0x11d188: 0x2650a438
    ctx->pc = 0x11d188u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 4294943800));
label_11d18c:
    // 0x11d18c: 0x8e020004
    ctx->pc = 0x11d18cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_11d190:
    // 0x11d190: 0x3228821
    ctx->pc = 0x11d190u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_11d194:
    // 0x11d194: 0x2a230031
    ctx->pc = 0x11d194u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 49));
label_11d198:
    // 0x11d198: 0x14600007
label_11d19c:
    if (ctx->pc == 0x11D19Cu) {
        ctx->pc = 0x11D19Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 25), GPR_S32(ctx, 17)));
        ctx->pc = 0x11D1A0u;
        goto label_11d1a0;
    }
    ctx->pc = 0x11D198u;
    {
        const bool branch_taken_0x11d198 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x11D19Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 25), GPR_S32(ctx, 17)));
        if (branch_taken_0x11d198) {
            ctx->pc = 0x11D1B8u;
            goto label_11d1b8;
        }
    }
    ctx->pc = 0x11D1A0u;
label_11d1a0:
    // 0x11d1a0: 0x3c040024
    ctx->pc = 0x11d1a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_11d1a4:
    // 0x11d1a4: 0xc045a04
label_11d1a8:
    if (ctx->pc == 0x11D1A8u) {
        ctx->pc = 0x11D1A8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937632));
        ctx->pc = 0x11D1ACu;
        goto label_11d1ac;
    }
    ctx->pc = 0x11D1A4u;
    SET_GPR_U32(ctx, 31, 0x11D1ACu);
    ctx->pc = 0x11D1A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937632));
    ctx->pc = 0x116810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116810_0x116810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D1ACu; }
    }
    if (ctx->pc != 0x11D1ACu) { return; }
    ctx->pc = 0x11D1ACu;
label_11d1ac:
    // 0x11d1ac: 0xc047742
label_11d1b0:
    if (ctx->pc == 0x11D1B0u) {
        ctx->pc = 0x11D1B0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x11D1B4u;
        goto label_11d1b4;
    }
    ctx->pc = 0x11D1ACu;
    SET_GPR_U32(ctx, 31, 0x11D1B4u);
    ctx->pc = 0x11D1B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x11DD08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD08_0x11dd08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D1B4u; }
    }
    if (ctx->pc != 0x11D1B4u) { return; }
    ctx->pc = 0x11D1B4u;
label_11d1b4:
    // 0x11d1b4: 0x331102a
    ctx->pc = 0x11d1b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 25), GPR_S32(ctx, 17)));
label_11d1b8:
    // 0x11d1b8: 0x1040000d
label_11d1bc:
    if (ctx->pc == 0x11D1BCu) {
        ctx->pc = 0x11D1BCu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x11D1C0u;
        goto label_11d1c0;
    }
    ctx->pc = 0x11D1B8u;
    {
        const bool branch_taken_0x11d1b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D1BCu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        if (branch_taken_0x11d1b8) {
            ctx->pc = 0x11D1F0u;
            goto label_11d1f0;
        }
    }
    ctx->pc = 0x11D1C0u;
label_11d1c0:
    // 0x11d1c0: 0x8e050000
    ctx->pc = 0x11d1c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11d1c4:
    // 0x11d1c4: 0x0
    ctx->pc = 0x11d1c4u;
    // NOP
label_11d1c8:
    // 0x11d1c8: 0x320202d
    ctx->pc = 0x11d1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_11d1cc:
    // 0x11d1cc: 0x8e060004
    ctx->pc = 0x11d1ccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_11d1d0:
    // 0x11d1d0: 0x8e070008
    ctx->pc = 0x11d1d0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_11d1d4:
    // 0x11d1d4: 0x8e08000c
    ctx->pc = 0x11d1d4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11d1d8:
    // 0x11d1d8: 0xc0473fc
label_11d1dc:
    if (ctx->pc == 0x11D1DCu) {
        ctx->pc = 0x11D1DCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x11D1E0u;
        goto label_11d1e0;
    }
    ctx->pc = 0x11D1D8u;
    SET_GPR_U32(ctx, 31, 0x11D1E0u);
    ctx->pc = 0x11D1DCu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x11CFF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011CFF0_0x11cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D1E0u; }
    }
    if (ctx->pc != 0x11D1E0u) { return; }
    ctx->pc = 0x11D1E0u;
label_11d1e0:
    // 0x11d1e0: 0x27390001
    ctx->pc = 0x11d1e0u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 25), 1));
label_11d1e4:
    // 0x11d1e4: 0x331102a
    ctx->pc = 0x11d1e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 25), GPR_S32(ctx, 17)));
label_11d1e8:
    // 0x11d1e8: 0x5440fff7
label_11d1ec:
    if (ctx->pc == 0x11D1ECu) {
        ctx->pc = 0x11D1ECu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x11D1F0u;
        goto label_11d1f0;
    }
    ctx->pc = 0x11D1E8u;
    {
        const bool branch_taken_0x11d1e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11d1e8) {
            ctx->pc = 0x11D1ECu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x11D1C8u;
            goto label_11d1c8;
        }
    }
    ctx->pc = 0x11D1F0u;
label_11d1f0:
    // 0x11d1f0: 0x2650a438
    ctx->pc = 0x11d1f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 4294943800));
label_11d1f4:
    // 0x11d1f4: 0xae19000c
    ctx->pc = 0x11d1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 25));
label_11d1f8:
    // 0x11d1f8: 0x40993000
    ctx->pc = 0x11d1f8u;
    ctx->cop0_wired = GPR_U32(ctx, 25) & 0x3F; ctx->cop0_random = 47;
label_11d1fc:
    // 0x11d1fc: 0x40f
    ctx->pc = 0x11d1fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_11d200:
    // 0x11d200: 0x8e020008
    ctx->pc = 0x11d200u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_11d204:
    // 0x11d204: 0x58400019
label_11d208:
    if (ctx->pc == 0x11D208u) {
        ctx->pc = 0x11D208u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11D20Cu;
        goto label_11d20c;
    }
    ctx->pc = 0x11D204u;
    {
        const bool branch_taken_0x11d204 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11d204) {
            ctx->pc = 0x11D208u;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x11D26Cu;
            goto label_11d26c;
        }
    }
    ctx->pc = 0x11D20Cu;
label_11d20c:
    // 0x11d20c: 0x3228821
    ctx->pc = 0x11d20cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_11d210:
    // 0x11d210: 0x2a220031
    ctx->pc = 0x11d210u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 49));
label_11d214:
    // 0x11d214: 0x14400007
label_11d218:
    if (ctx->pc == 0x11D218u) {
        ctx->pc = 0x11D218u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 25), GPR_S32(ctx, 17)));
        ctx->pc = 0x11D21Cu;
        goto label_11d21c;
    }
    ctx->pc = 0x11D214u;
    {
        const bool branch_taken_0x11d214 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11D218u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 25), GPR_S32(ctx, 17)));
        if (branch_taken_0x11d214) {
            ctx->pc = 0x11D234u;
            goto label_11d234;
        }
    }
    ctx->pc = 0x11D21Cu;
label_11d21c:
    // 0x11d21c: 0x3c040024
    ctx->pc = 0x11d21cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_11d220:
    // 0x11d220: 0xc045a04
label_11d224:
    if (ctx->pc == 0x11D224u) {
        ctx->pc = 0x11D224u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937656));
        ctx->pc = 0x11D228u;
        goto label_11d228;
    }
    ctx->pc = 0x11D220u;
    SET_GPR_U32(ctx, 31, 0x11D228u);
    ctx->pc = 0x11D224u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937656));
    ctx->pc = 0x116810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116810_0x116810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D228u; }
    }
    if (ctx->pc != 0x11D228u) { return; }
    ctx->pc = 0x11D228u;
label_11d228:
    // 0x11d228: 0xc047742
label_11d22c:
    if (ctx->pc == 0x11D22Cu) {
        ctx->pc = 0x11D22Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x11D230u;
        goto label_11d230;
    }
    ctx->pc = 0x11D228u;
    SET_GPR_U32(ctx, 31, 0x11D230u);
    ctx->pc = 0x11D22Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x11DD08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD08_0x11dd08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D230u; }
    }
    if (ctx->pc != 0x11D230u) { return; }
    ctx->pc = 0x11D230u;
label_11d230:
    // 0x11d230: 0x331102a
    ctx->pc = 0x11d230u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 25), GPR_S32(ctx, 17)));
label_11d234:
    // 0x11d234: 0x1040000c
label_11d238:
    if (ctx->pc == 0x11D238u) {
        ctx->pc = 0x11D238u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->pc = 0x11D23Cu;
        goto label_11d23c;
    }
    ctx->pc = 0x11D234u;
    {
        const bool branch_taken_0x11d234 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D238u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 24)));
        if (branch_taken_0x11d234) {
            ctx->pc = 0x11D268u;
            goto label_11d268;
        }
    }
    ctx->pc = 0x11D23Cu;
label_11d23c:
    // 0x11d23c: 0x8e050000
    ctx->pc = 0x11d23cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11d240:
    // 0x11d240: 0x320202d
    ctx->pc = 0x11d240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_11d244:
    // 0x11d244: 0x8e060004
    ctx->pc = 0x11d244u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_11d248:
    // 0x11d248: 0x8e070008
    ctx->pc = 0x11d248u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_11d24c:
    // 0x11d24c: 0x8e08000c
    ctx->pc = 0x11d24cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11d250:
    // 0x11d250: 0xc0473fc
label_11d254:
    if (ctx->pc == 0x11D254u) {
        ctx->pc = 0x11D254u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x11D258u;
        goto label_11d258;
    }
    ctx->pc = 0x11D250u;
    SET_GPR_U32(ctx, 31, 0x11D258u);
    ctx->pc = 0x11D254u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x11CFF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011CFF0_0x11cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D258u; }
    }
    if (ctx->pc != 0x11D258u) { return; }
    ctx->pc = 0x11D258u;
label_11d258:
    // 0x11d258: 0x27390001
    ctx->pc = 0x11d258u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 25), 1));
label_11d25c:
    // 0x11d25c: 0x331102a
    ctx->pc = 0x11d25cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 25), GPR_S32(ctx, 17)));
label_11d260:
    // 0x11d260: 0x5440fff7
label_11d264:
    if (ctx->pc == 0x11D264u) {
        ctx->pc = 0x11D264u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x11D268u;
        goto label_11d268;
    }
    ctx->pc = 0x11D260u;
    {
        const bool branch_taken_0x11d260 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11d260) {
            ctx->pc = 0x11D264u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x11D240u;
            goto label_11d240;
        }
    }
    ctx->pc = 0x11D268u;
label_11d268:
    // 0x11d268: 0x320802d
    ctx->pc = 0x11d268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_11d26c:
    // 0x11d26c: 0x2a020030
    ctx->pc = 0x11d26cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 48));
label_11d270:
    // 0x11d270: 0x1040000d
label_11d274:
    if (ctx->pc == 0x11D274u) {
        ctx->pc = 0x11D274u;
        SET_GPR_U32(ctx, 25, SLL32(GPR_U32(ctx, 25), 13));
        ctx->pc = 0x11D278u;
        goto label_11d278;
    }
    ctx->pc = 0x11D270u;
    {
        const bool branch_taken_0x11d270 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D274u;
        SET_GPR_U32(ctx, 25, SLL32(GPR_U32(ctx, 25), 13));
        if (branch_taken_0x11d270) {
            ctx->pc = 0x11D2A8u;
            goto label_11d2a8;
        }
    }
    ctx->pc = 0x11D278u;
label_11d278:
    // 0x11d278: 0x3c02e000
    ctx->pc = 0x11d278u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57344 << 16));
label_11d27c:
    // 0x11d27c: 0x3228821
    ctx->pc = 0x11d27cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_11d280:
    // 0x11d280: 0x200202d
    ctx->pc = 0x11d280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11d284:
    // 0x11d284: 0x220302d
    ctx->pc = 0x11d284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11d288:
    // 0x11d288: 0x282d
    ctx->pc = 0x11d288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11d28c:
    // 0x11d28c: 0x382d
    ctx->pc = 0x11d28cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11d290:
    // 0x11d290: 0x402d
    ctx->pc = 0x11d290u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11d294:
    // 0x11d294: 0xc0473fc
label_11d298:
    if (ctx->pc == 0x11D298u) {
        ctx->pc = 0x11D298u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x11D29Cu;
        goto label_11d29c;
    }
    ctx->pc = 0x11D294u;
    SET_GPR_U32(ctx, 31, 0x11D29Cu);
    ctx->pc = 0x11D298u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x11CFF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011CFF0_0x11cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D29Cu; }
    }
    if (ctx->pc != 0x11D29Cu) { return; }
    ctx->pc = 0x11D29Cu;
label_11d29c:
    // 0x11d29c: 0x2a020030
    ctx->pc = 0x11d29cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 48));
label_11d2a0:
    // 0x11d2a0: 0x1440fff7
label_11d2a4:
    if (ctx->pc == 0x11D2A4u) {
        ctx->pc = 0x11D2A4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8192));
        ctx->pc = 0x11D2A8u;
        goto label_11d2a8;
    }
    ctx->pc = 0x11D2A0u;
    {
        const bool branch_taken_0x11d2a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11D2A4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8192));
        if (branch_taken_0x11d2a0) {
            ctx->pc = 0x11D280u;
            goto label_11d280;
        }
    }
    ctx->pc = 0x11D2A8u;
label_11d2a8:
    // 0x11d2a8: 0xdfbf0030
    ctx->pc = 0x11d2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_11d2ac:
    // 0x11d2ac: 0x320102d
    ctx->pc = 0x11d2acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_11d2b0:
    // 0x11d2b0: 0xdfb20020
    ctx->pc = 0x11d2b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11d2b4:
    // 0x11d2b4: 0xdfb10010
    ctx->pc = 0x11d2b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11d2b8:
    // 0x11d2b8: 0xdfb00000
    ctx->pc = 0x11d2b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11d2bc:
    // 0x11d2bc: 0x3e00008
label_11d2c0:
    if (ctx->pc == 0x11D2C0u) {
        ctx->pc = 0x11D2C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x11D2C4u;
        goto label_11d2c4;
    }
    ctx->pc = 0x11D2BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D2C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D0D0u: goto label_11d0d0;
            case 0x11D0D4u: goto label_11d0d4;
            case 0x11D0D8u: goto label_11d0d8;
            case 0x11D0DCu: goto label_11d0dc;
            case 0x11D0E0u: goto label_11d0e0;
            case 0x11D0E4u: goto label_11d0e4;
            case 0x11D0E8u: goto label_11d0e8;
            case 0x11D0ECu: goto label_11d0ec;
            case 0x11D0F0u: goto label_11d0f0;
            case 0x11D0F4u: goto label_11d0f4;
            case 0x11D0F8u: goto label_11d0f8;
            case 0x11D0FCu: goto label_11d0fc;
            case 0x11D100u: goto label_11d100;
            case 0x11D104u: goto label_11d104;
            case 0x11D108u: goto label_11d108;
            case 0x11D10Cu: goto label_11d10c;
            case 0x11D110u: goto label_11d110;
            case 0x11D114u: goto label_11d114;
            case 0x11D118u: goto label_11d118;
            case 0x11D11Cu: goto label_11d11c;
            case 0x11D120u: goto label_11d120;
            case 0x11D124u: goto label_11d124;
            case 0x11D128u: goto label_11d128;
            case 0x11D12Cu: goto label_11d12c;
            case 0x11D130u: goto label_11d130;
            case 0x11D134u: goto label_11d134;
            case 0x11D138u: goto label_11d138;
            case 0x11D13Cu: goto label_11d13c;
            case 0x11D140u: goto label_11d140;
            case 0x11D144u: goto label_11d144;
            case 0x11D148u: goto label_11d148;
            case 0x11D14Cu: goto label_11d14c;
            case 0x11D150u: goto label_11d150;
            case 0x11D154u: goto label_11d154;
            case 0x11D158u: goto label_11d158;
            case 0x11D15Cu: goto label_11d15c;
            case 0x11D160u: goto label_11d160;
            case 0x11D164u: goto label_11d164;
            case 0x11D168u: goto label_11d168;
            case 0x11D16Cu: goto label_11d16c;
            case 0x11D170u: goto label_11d170;
            case 0x11D174u: goto label_11d174;
            case 0x11D178u: goto label_11d178;
            case 0x11D17Cu: goto label_11d17c;
            case 0x11D180u: goto label_11d180;
            case 0x11D184u: goto label_11d184;
            case 0x11D188u: goto label_11d188;
            case 0x11D18Cu: goto label_11d18c;
            case 0x11D190u: goto label_11d190;
            case 0x11D194u: goto label_11d194;
            case 0x11D198u: goto label_11d198;
            case 0x11D19Cu: goto label_11d19c;
            case 0x11D1A0u: goto label_11d1a0;
            case 0x11D1A4u: goto label_11d1a4;
            case 0x11D1A8u: goto label_11d1a8;
            case 0x11D1ACu: goto label_11d1ac;
            case 0x11D1B0u: goto label_11d1b0;
            case 0x11D1B4u: goto label_11d1b4;
            case 0x11D1B8u: goto label_11d1b8;
            case 0x11D1BCu: goto label_11d1bc;
            case 0x11D1C0u: goto label_11d1c0;
            case 0x11D1C4u: goto label_11d1c4;
            case 0x11D1C8u: goto label_11d1c8;
            case 0x11D1CCu: goto label_11d1cc;
            case 0x11D1D0u: goto label_11d1d0;
            case 0x11D1D4u: goto label_11d1d4;
            case 0x11D1D8u: goto label_11d1d8;
            case 0x11D1DCu: goto label_11d1dc;
            case 0x11D1E0u: goto label_11d1e0;
            case 0x11D1E4u: goto label_11d1e4;
            case 0x11D1E8u: goto label_11d1e8;
            case 0x11D1ECu: goto label_11d1ec;
            case 0x11D1F0u: goto label_11d1f0;
            case 0x11D1F4u: goto label_11d1f4;
            case 0x11D1F8u: goto label_11d1f8;
            case 0x11D1FCu: goto label_11d1fc;
            case 0x11D200u: goto label_11d200;
            case 0x11D204u: goto label_11d204;
            case 0x11D208u: goto label_11d208;
            case 0x11D20Cu: goto label_11d20c;
            case 0x11D210u: goto label_11d210;
            case 0x11D214u: goto label_11d214;
            case 0x11D218u: goto label_11d218;
            case 0x11D21Cu: goto label_11d21c;
            case 0x11D220u: goto label_11d220;
            case 0x11D224u: goto label_11d224;
            case 0x11D228u: goto label_11d228;
            case 0x11D22Cu: goto label_11d22c;
            case 0x11D230u: goto label_11d230;
            case 0x11D234u: goto label_11d234;
            case 0x11D238u: goto label_11d238;
            case 0x11D23Cu: goto label_11d23c;
            case 0x11D240u: goto label_11d240;
            case 0x11D244u: goto label_11d244;
            case 0x11D248u: goto label_11d248;
            case 0x11D24Cu: goto label_11d24c;
            case 0x11D250u: goto label_11d250;
            case 0x11D254u: goto label_11d254;
            case 0x11D258u: goto label_11d258;
            case 0x11D25Cu: goto label_11d25c;
            case 0x11D260u: goto label_11d260;
            case 0x11D264u: goto label_11d264;
            case 0x11D268u: goto label_11d268;
            case 0x11D26Cu: goto label_11d26c;
            case 0x11D270u: goto label_11d270;
            case 0x11D274u: goto label_11d274;
            case 0x11D278u: goto label_11d278;
            case 0x11D27Cu: goto label_11d27c;
            case 0x11D280u: goto label_11d280;
            case 0x11D284u: goto label_11d284;
            case 0x11D288u: goto label_11d288;
            case 0x11D28Cu: goto label_11d28c;
            case 0x11D290u: goto label_11d290;
            case 0x11D294u: goto label_11d294;
            case 0x11D298u: goto label_11d298;
            case 0x11D29Cu: goto label_11d29c;
            case 0x11D2A0u: goto label_11d2a0;
            case 0x11D2A4u: goto label_11d2a4;
            case 0x11D2A8u: goto label_11d2a8;
            case 0x11D2ACu: goto label_11d2ac;
            case 0x11D2B0u: goto label_11d2b0;
            case 0x11D2B4u: goto label_11d2b4;
            case 0x11D2B8u: goto label_11d2b8;
            case 0x11D2BCu: goto label_11d2bc;
            case 0x11D2C0u: goto label_11d2c0;
            case 0x11D2C4u: goto label_11d2c4;
            case 0x11D2C8u: goto label_11d2c8;
            case 0x11D2CCu: goto label_11d2cc;
            case 0x11D2D0u: goto label_11d2d0;
            case 0x11D2D4u: goto label_11d2d4;
            case 0x11D2D8u: goto label_11d2d8;
            case 0x11D2DCu: goto label_11d2dc;
            case 0x11D2E0u: goto label_11d2e0;
            case 0x11D2E4u: goto label_11d2e4;
            case 0x11D2E8u: goto label_11d2e8;
            case 0x11D2ECu: goto label_11d2ec;
            case 0x11D2F0u: goto label_11d2f0;
            case 0x11D2F4u: goto label_11d2f4;
            case 0x11D2F8u: goto label_11d2f8;
            case 0x11D2FCu: goto label_11d2fc;
            case 0x11D300u: goto label_11d300;
            case 0x11D304u: goto label_11d304;
            case 0x11D308u: goto label_11d308;
            case 0x11D30Cu: goto label_11d30c;
            case 0x11D310u: goto label_11d310;
            case 0x11D314u: goto label_11d314;
            case 0x11D318u: goto label_11d318;
            case 0x11D31Cu: goto label_11d31c;
            case 0x11D320u: goto label_11d320;
            case 0x11D324u: goto label_11d324;
            case 0x11D328u: goto label_11d328;
            case 0x11D32Cu: goto label_11d32c;
            case 0x11D330u: goto label_11d330;
            case 0x11D334u: goto label_11d334;
            case 0x11D338u: goto label_11d338;
            case 0x11D33Cu: goto label_11d33c;
            case 0x11D340u: goto label_11d340;
            case 0x11D344u: goto label_11d344;
            case 0x11D348u: goto label_11d348;
            case 0x11D34Cu: goto label_11d34c;
            case 0x11D350u: goto label_11d350;
            case 0x11D354u: goto label_11d354;
            case 0x11D358u: goto label_11d358;
            case 0x11D35Cu: goto label_11d35c;
            case 0x11D360u: goto label_11d360;
            case 0x11D364u: goto label_11d364;
            case 0x11D368u: goto label_11d368;
            case 0x11D36Cu: goto label_11d36c;
            case 0x11D370u: goto label_11d370;
            case 0x11D374u: goto label_11d374;
            case 0x11D378u: goto label_11d378;
            case 0x11D37Cu: goto label_11d37c;
            case 0x11D380u: goto label_11d380;
            case 0x11D384u: goto label_11d384;
            case 0x11D388u: goto label_11d388;
            case 0x11D38Cu: goto label_11d38c;
            case 0x11D390u: goto label_11d390;
            case 0x11D394u: goto label_11d394;
            case 0x11D398u: goto label_11d398;
            case 0x11D39Cu: goto label_11d39c;
            case 0x11D3A0u: goto label_11d3a0;
            case 0x11D3A4u: goto label_11d3a4;
            case 0x11D3A8u: goto label_11d3a8;
            case 0x11D3ACu: goto label_11d3ac;
            case 0x11D3B0u: goto label_11d3b0;
            case 0x11D3B4u: goto label_11d3b4;
            case 0x11D3B8u: goto label_11d3b8;
            case 0x11D3BCu: goto label_11d3bc;
            case 0x11D3C0u: goto label_11d3c0;
            case 0x11D3C4u: goto label_11d3c4;
            case 0x11D3C8u: goto label_11d3c8;
            case 0x11D3CCu: goto label_11d3cc;
            case 0x11D3D0u: goto label_11d3d0;
            case 0x11D3D4u: goto label_11d3d4;
            case 0x11D3D8u: goto label_11d3d8;
            case 0x11D3DCu: goto label_11d3dc;
            case 0x11D3E0u: goto label_11d3e0;
            case 0x11D3E4u: goto label_11d3e4;
            case 0x11D3E8u: goto label_11d3e8;
            case 0x11D3ECu: goto label_11d3ec;
            case 0x11D3F0u: goto label_11d3f0;
            case 0x11D3F4u: goto label_11d3f4;
            case 0x11D3F8u: goto label_11d3f8;
            case 0x11D3FCu: goto label_11d3fc;
            case 0x11D400u: goto label_11d400;
            case 0x11D404u: goto label_11d404;
            case 0x11D408u: goto label_11d408;
            case 0x11D40Cu: goto label_11d40c;
            case 0x11D410u: goto label_11d410;
            case 0x11D414u: goto label_11d414;
            case 0x11D418u: goto label_11d418;
            case 0x11D41Cu: goto label_11d41c;
            case 0x11D420u: goto label_11d420;
            case 0x11D424u: goto label_11d424;
            case 0x11D428u: goto label_11d428;
            case 0x11D42Cu: goto label_11d42c;
            case 0x11D430u: goto label_11d430;
            case 0x11D434u: goto label_11d434;
            case 0x11D438u: goto label_11d438;
            case 0x11D43Cu: goto label_11d43c;
            case 0x11D440u: goto label_11d440;
            case 0x11D444u: goto label_11d444;
            case 0x11D448u: goto label_11d448;
            case 0x11D44Cu: goto label_11d44c;
            case 0x11D450u: goto label_11d450;
            case 0x11D454u: goto label_11d454;
            case 0x11D458u: goto label_11d458;
            case 0x11D45Cu: goto label_11d45c;
            case 0x11D460u: goto label_11d460;
            case 0x11D464u: goto label_11d464;
            case 0x11D468u: goto label_11d468;
            case 0x11D46Cu: goto label_11d46c;
            case 0x11D470u: goto label_11d470;
            case 0x11D474u: goto label_11d474;
            case 0x11D478u: goto label_11d478;
            case 0x11D47Cu: goto label_11d47c;
            case 0x11D480u: goto label_11d480;
            case 0x11D484u: goto label_11d484;
            case 0x11D488u: goto label_11d488;
            case 0x11D48Cu: goto label_11d48c;
            case 0x11D490u: goto label_11d490;
            case 0x11D494u: goto label_11d494;
            case 0x11D498u: goto label_11d498;
            case 0x11D49Cu: goto label_11d49c;
            case 0x11D4A0u: goto label_11d4a0;
            case 0x11D4A4u: goto label_11d4a4;
            case 0x11D4A8u: goto label_11d4a8;
            case 0x11D4ACu: goto label_11d4ac;
            case 0x11D4B0u: goto label_11d4b0;
            case 0x11D4B4u: goto label_11d4b4;
            case 0x11D4B8u: goto label_11d4b8;
            case 0x11D4BCu: goto label_11d4bc;
            case 0x11D4C0u: goto label_11d4c0;
            case 0x11D4C4u: goto label_11d4c4;
            case 0x11D4C8u: goto label_11d4c8;
            case 0x11D4CCu: goto label_11d4cc;
            case 0x11D4D0u: goto label_11d4d0;
            case 0x11D4D4u: goto label_11d4d4;
            case 0x11D4D8u: goto label_11d4d8;
            case 0x11D4DCu: goto label_11d4dc;
            case 0x11D4E0u: goto label_11d4e0;
            case 0x11D4E4u: goto label_11d4e4;
            case 0x11D4E8u: goto label_11d4e8;
            case 0x11D4ECu: goto label_11d4ec;
            case 0x11D4F0u: goto label_11d4f0;
            case 0x11D4F4u: goto label_11d4f4;
            case 0x11D4F8u: goto label_11d4f8;
            case 0x11D4FCu: goto label_11d4fc;
            case 0x11D500u: goto label_11d500;
            case 0x11D504u: goto label_11d504;
            case 0x11D508u: goto label_11d508;
            case 0x11D50Cu: goto label_11d50c;
            case 0x11D510u: goto label_11d510;
            case 0x11D514u: goto label_11d514;
            case 0x11D518u: goto label_11d518;
            case 0x11D51Cu: goto label_11d51c;
            case 0x11D520u: goto label_11d520;
            case 0x11D524u: goto label_11d524;
            case 0x11D528u: goto label_11d528;
            case 0x11D52Cu: goto label_11d52c;
            case 0x11D530u: goto label_11d530;
            case 0x11D534u: goto label_11d534;
            case 0x11D538u: goto label_11d538;
            case 0x11D53Cu: goto label_11d53c;
            case 0x11D540u: goto label_11d540;
            case 0x11D544u: goto label_11d544;
            case 0x11D548u: goto label_11d548;
            case 0x11D54Cu: goto label_11d54c;
            case 0x11D550u: goto label_11d550;
            case 0x11D554u: goto label_11d554;
            case 0x11D558u: goto label_11d558;
            case 0x11D55Cu: goto label_11d55c;
            case 0x11D560u: goto label_11d560;
            case 0x11D564u: goto label_11d564;
            case 0x11D568u: goto label_11d568;
            case 0x11D56Cu: goto label_11d56c;
            case 0x11D570u: goto label_11d570;
            case 0x11D574u: goto label_11d574;
            case 0x11D578u: goto label_11d578;
            case 0x11D57Cu: goto label_11d57c;
            case 0x11D580u: goto label_11d580;
            case 0x11D584u: goto label_11d584;
            case 0x11D588u: goto label_11d588;
            case 0x11D58Cu: goto label_11d58c;
            case 0x11D590u: goto label_11d590;
            case 0x11D594u: goto label_11d594;
            case 0x11D598u: goto label_11d598;
            case 0x11D59Cu: goto label_11d59c;
            case 0x11D5A0u: goto label_11d5a0;
            case 0x11D5A4u: goto label_11d5a4;
            case 0x11D5A8u: goto label_11d5a8;
            case 0x11D5ACu: goto label_11d5ac;
            case 0x11D5B0u: goto label_11d5b0;
            case 0x11D5B4u: goto label_11d5b4;
            case 0x11D5B8u: goto label_11d5b8;
            case 0x11D5BCu: goto label_11d5bc;
            case 0x11D5C0u: goto label_11d5c0;
            case 0x11D5C4u: goto label_11d5c4;
            case 0x11D5C8u: goto label_11d5c8;
            case 0x11D5CCu: goto label_11d5cc;
            case 0x11D5D0u: goto label_11d5d0;
            case 0x11D5D4u: goto label_11d5d4;
            case 0x11D5D8u: goto label_11d5d8;
            case 0x11D5DCu: goto label_11d5dc;
            case 0x11D5E0u: goto label_11d5e0;
            case 0x11D5E4u: goto label_11d5e4;
            case 0x11D5E8u: goto label_11d5e8;
            case 0x11D5ECu: goto label_11d5ec;
            case 0x11D5F0u: goto label_11d5f0;
            case 0x11D5F4u: goto label_11d5f4;
            case 0x11D5F8u: goto label_11d5f8;
            case 0x11D5FCu: goto label_11d5fc;
            case 0x11D600u: goto label_11d600;
            case 0x11D604u: goto label_11d604;
            case 0x11D608u: goto label_11d608;
            case 0x11D60Cu: goto label_11d60c;
            case 0x11D610u: goto label_11d610;
            case 0x11D614u: goto label_11d614;
            case 0x11D618u: goto label_11d618;
            case 0x11D61Cu: goto label_11d61c;
            case 0x11D620u: goto label_11d620;
            case 0x11D624u: goto label_11d624;
            case 0x11D628u: goto label_11d628;
            case 0x11D62Cu: goto label_11d62c;
            case 0x11D630u: goto label_11d630;
            case 0x11D634u: goto label_11d634;
            case 0x11D638u: goto label_11d638;
            case 0x11D63Cu: goto label_11d63c;
            case 0x11D640u: goto label_11d640;
            case 0x11D644u: goto label_11d644;
            case 0x11D648u: goto label_11d648;
            case 0x11D64Cu: goto label_11d64c;
            case 0x11D650u: goto label_11d650;
            case 0x11D654u: goto label_11d654;
            case 0x11D658u: goto label_11d658;
            case 0x11D65Cu: goto label_11d65c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D2C4u;
label_11d2c4:
    // 0x11d2c4: 0x0
    ctx->pc = 0x11d2c4u;
    // NOP
label_11d2c8:
    // 0x11d2c8: 0x0
    ctx->pc = 0x11d2c8u;
    // NOP
label_11d2cc:
    // 0x11d2cc: 0x0
    ctx->pc = 0x11d2ccu;
    // NOP
label_11d2d0:
    // 0x11d2d0: 0x0
    ctx->pc = 0x11d2d0u;
    // NOP
label_11d2d4:
    // 0x11d2d4: 0x0
    ctx->pc = 0x11d2d4u;
    // NOP
label_11d2d8:
    // 0x11d2d8: 0x0
    ctx->pc = 0x11d2d8u;
    // NOP
label_11d2dc:
    // 0x11d2dc: 0x0
    ctx->pc = 0x11d2dcu;
    // NOP
label_11d2e0:
    // 0x11d2e0: 0x0
    ctx->pc = 0x11d2e0u;
    // NOP
label_11d2e4:
    // 0x11d2e4: 0x0
    ctx->pc = 0x11d2e4u;
    // NOP
label_11d2e8:
    // 0x11d2e8: 0x0
    ctx->pc = 0x11d2e8u;
    // NOP
label_11d2ec:
    // 0x11d2ec: 0x0
    ctx->pc = 0x11d2ecu;
    // NOP
label_11d2f0:
    // 0x11d2f0: 0x0
    ctx->pc = 0x11d2f0u;
    // NOP
label_11d2f4:
    // 0x11d2f4: 0x0
    ctx->pc = 0x11d2f4u;
    // NOP
label_11d2f8:
    // 0x11d2f8: 0x0
    ctx->pc = 0x11d2f8u;
    // NOP
label_11d2fc:
    // 0x11d2fc: 0x0
    ctx->pc = 0x11d2fcu;
    // NOP
label_11d300:
    // 0x11d300: 0x3c1a0026
    ctx->pc = 0x11d300u;
    SET_GPR_U32(ctx, 26, ((uint32_t)38 << 16));
label_11d304:
    // 0x11d304: 0x275af6c0
    ctx->pc = 0x11d304u;
    SET_GPR_S32(ctx, 26, ADD32(GPR_U32(ctx, 26), 4294964928));
label_11d308:
    // 0x11d308: 0x7f410010
    ctx->pc = 0x11d308u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16), GPR_VEC(ctx, 1));
label_11d30c:
    // 0x11d30c: 0x7f420020
    ctx->pc = 0x11d30cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32), GPR_VEC(ctx, 2));
label_11d310:
    // 0x11d310: 0x7f430030
    ctx->pc = 0x11d310u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 48), GPR_VEC(ctx, 3));
label_11d314:
    // 0x11d314: 0x7f440040
    ctx->pc = 0x11d314u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 64), GPR_VEC(ctx, 4));
label_11d318:
    // 0x11d318: 0x7f450050
    ctx->pc = 0x11d318u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 80), GPR_VEC(ctx, 5));
label_11d31c:
    // 0x11d31c: 0x7f460060
    ctx->pc = 0x11d31cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 96), GPR_VEC(ctx, 6));
label_11d320:
    // 0x11d320: 0x7f470070
    ctx->pc = 0x11d320u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 112), GPR_VEC(ctx, 7));
label_11d324:
    // 0x11d324: 0x7f480080
    ctx->pc = 0x11d324u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 128), GPR_VEC(ctx, 8));
label_11d328:
    // 0x11d328: 0x7f490090
    ctx->pc = 0x11d328u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 144), GPR_VEC(ctx, 9));
label_11d32c:
    // 0x11d32c: 0x7f4a00a0
    ctx->pc = 0x11d32cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 160), GPR_VEC(ctx, 10));
label_11d330:
    // 0x11d330: 0x7f4b00b0
    ctx->pc = 0x11d330u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 176), GPR_VEC(ctx, 11));
label_11d334:
    // 0x11d334: 0x7f4c00c0
    ctx->pc = 0x11d334u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 192), GPR_VEC(ctx, 12));
label_11d338:
    // 0x11d338: 0x7f4d00d0
    ctx->pc = 0x11d338u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 208), GPR_VEC(ctx, 13));
label_11d33c:
    // 0x11d33c: 0x7f4e00e0
    ctx->pc = 0x11d33cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 224), GPR_VEC(ctx, 14));
label_11d340:
    // 0x11d340: 0x7f4f00f0
    ctx->pc = 0x11d340u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 240), GPR_VEC(ctx, 15));
label_11d344:
    // 0x11d344: 0x7f500100
    ctx->pc = 0x11d344u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 256), GPR_VEC(ctx, 16));
label_11d348:
    // 0x11d348: 0x7f510110
    ctx->pc = 0x11d348u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 17));
label_11d34c:
    // 0x11d34c: 0x7f520120
    ctx->pc = 0x11d34cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 288), GPR_VEC(ctx, 18));
label_11d350:
    // 0x11d350: 0x7f530130
    ctx->pc = 0x11d350u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 304), GPR_VEC(ctx, 19));
label_11d354:
    // 0x11d354: 0x7f540140
    ctx->pc = 0x11d354u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 320), GPR_VEC(ctx, 20));
label_11d358:
    // 0x11d358: 0x7f550150
    ctx->pc = 0x11d358u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 336), GPR_VEC(ctx, 21));
label_11d35c:
    // 0x11d35c: 0x7f560160
    ctx->pc = 0x11d35cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 352), GPR_VEC(ctx, 22));
label_11d360:
    // 0x11d360: 0x7f570170
    ctx->pc = 0x11d360u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 368), GPR_VEC(ctx, 23));
label_11d364:
    // 0x11d364: 0x7f580180
    ctx->pc = 0x11d364u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 384), GPR_VEC(ctx, 24));
label_11d368:
    // 0x11d368: 0x7f590190
    ctx->pc = 0x11d368u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 400), GPR_VEC(ctx, 25));
label_11d36c:
    // 0x11d36c: 0x7f5c01c0
    ctx->pc = 0x11d36cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 448), GPR_VEC(ctx, 28));
label_11d370:
    // 0x11d370: 0x7f5d01d0
    ctx->pc = 0x11d370u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 464), GPR_VEC(ctx, 29));
label_11d374:
    // 0x11d374: 0x7f5e01e0
    ctx->pc = 0x11d374u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 480), GPR_VEC(ctx, 30));
label_11d378:
    // 0x11d378: 0x7f5f01f0
    ctx->pc = 0x11d378u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 496), GPR_VEC(ctx, 31));
label_11d37c:
    // 0x11d37c: 0x1010
    ctx->pc = 0x11d37cu;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_11d380:
    // 0x11d380: 0x3c010026
    ctx->pc = 0x11d380u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
label_11d384:
    // 0x11d384: 0xfc22f8c0
    ctx->pc = 0x11d384u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965440), GPR_U64(ctx, 2));
label_11d388:
    // 0x11d388: 0x70001010
    ctx->pc = 0x11d388u;
    SET_GPR_U32(ctx, 2, ctx->hi1);
label_11d38c:
    // 0x11d38c: 0x3c010026
    ctx->pc = 0x11d38cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
label_11d390:
    // 0x11d390: 0xfc22f8c8
    ctx->pc = 0x11d390u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965448), GPR_U64(ctx, 2));
label_11d394:
    // 0x11d394: 0x1012
    ctx->pc = 0x11d394u;
    SET_GPR_U32(ctx, 2, ctx->lo);
label_11d398:
    // 0x11d398: 0x3c010026
    ctx->pc = 0x11d398u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
label_11d39c:
    // 0x11d39c: 0xfc22f8d0
    ctx->pc = 0x11d39cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965456), GPR_U64(ctx, 2));
label_11d3a0:
    // 0x11d3a0: 0x70001012
    ctx->pc = 0x11d3a0u;
    SET_GPR_U32(ctx, 2, ctx->lo1);
label_11d3a4:
    // 0x11d3a4: 0x3c010026
    ctx->pc = 0x11d3a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
label_11d3a8:
    // 0x11d3a8: 0xfc22f8d8
    ctx->pc = 0x11d3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965464), GPR_U64(ctx, 2));
label_11d3ac:
    // 0x11d3ac: 0x1028
    ctx->pc = 0x11d3acu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_11d3b0:
    // 0x11d3b0: 0x3c010026
    ctx->pc = 0x11d3b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
label_11d3b4:
    // 0x11d3b4: 0xfc22f8e0
    ctx->pc = 0x11d3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965472), GPR_U64(ctx, 2));
label_11d3b8:
    // 0x11d3b8: 0x40046000
    ctx->pc = 0x11d3b8u;
    SET_GPR_U32(ctx, 4, ctx->cop0_status);
label_11d3bc:
    // 0x11d3bc: 0x40056800
    ctx->pc = 0x11d3bcu;
    SET_GPR_U32(ctx, 5, ctx->cop0_cause);
label_11d3c0:
    // 0x11d3c0: 0x40067000
    ctx->pc = 0x11d3c0u;
    SET_GPR_U32(ctx, 6, ctx->cop0_epc);
label_11d3c4:
    // 0x11d3c4: 0x40074000
    ctx->pc = 0x11d3c4u;
    SET_GPR_U32(ctx, 7, ctx->cop0_badvaddr);
label_11d3c8:
    // 0x11d3c8: 0x3c080026
    ctx->pc = 0x11d3c8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)38 << 16));
label_11d3cc:
    // 0x11d3cc: 0x2508f6c0
    ctx->pc = 0x11d3ccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294964928));
label_11d3d0:
    // 0x11d3d0: 0x3c010026
    ctx->pc = 0x11d3d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
label_11d3d4:
    // 0x11d3d4: 0xac26f8e8
    ctx->pc = 0x11d3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965480), GPR_U32(ctx, 6));
label_11d3d8:
    // 0x11d3d8: 0x3c010012
    ctx->pc = 0x11d3d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18 << 16));
label_11d3dc:
    // 0x11d3dc: 0x2421d400
    ctx->pc = 0x11d3dcu;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 1), 4294956032));
label_11d3e0:
    // 0x11d3e0: 0x40817000
    ctx->pc = 0x11d3e0u;
    ctx->cop0_epc = GPR_U32(ctx, 1);
label_11d3e4:
    // 0x11d3e4: 0x40f
    ctx->pc = 0x11d3e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_11d3e8:
    // 0x11d3e8: 0x40016000
    ctx->pc = 0x11d3e8u;
    SET_GPR_U32(ctx, 1, ctx->cop0_status);
label_11d3ec:
    // 0x11d3ec: 0x2402fffe
    ctx->pc = 0x11d3ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
label_11d3f0:
    // 0x11d3f0: 0x220824
    ctx->pc = 0x11d3f0u;
    SET_GPR_U32(ctx, 1, AND32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_11d3f4:
    // 0x11d3f4: 0x40816000
    ctx->pc = 0x11d3f4u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_11d3f8:
    // 0x11d3f8: 0x40f
    ctx->pc = 0x11d3f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_11d3fc:
    // 0x11d3fc: 0x42000018
    ctx->pc = 0x11d3fcu;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_11d400:
    // 0x11d400: 0x3c010021
    ctx->pc = 0x11d400u;
    SET_GPR_U32(ctx, 1, ((uint32_t)33 << 16));
label_11d404:
    // 0x11d404: 0x8c21a138
    ctx->pc = 0x11d404u;
    SET_GPR_U32(ctx, 1, READ32(ADD32(GPR_U32(ctx, 1), 4294943032)));
label_11d408:
    // 0x11d408: 0x3c1d0026
    ctx->pc = 0x11d408u;
    SET_GPR_U32(ctx, 29, ((uint32_t)38 << 16));
label_11d40c:
    // 0x11d40c: 0x20f809
label_11d410:
    if (ctx->pc == 0x11D410u) {
        ctx->pc = 0x11D410u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294964928));
        ctx->pc = 0x11D414u;
        goto label_11d414;
    }
    ctx->pc = 0x11D40Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x11D414u);
        ctx->pc = 0x11D410u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294964928));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D0D0u: goto label_11d0d0;
            case 0x11D0D4u: goto label_11d0d4;
            case 0x11D0D8u: goto label_11d0d8;
            case 0x11D0DCu: goto label_11d0dc;
            case 0x11D0E0u: goto label_11d0e0;
            case 0x11D0E4u: goto label_11d0e4;
            case 0x11D0E8u: goto label_11d0e8;
            case 0x11D0ECu: goto label_11d0ec;
            case 0x11D0F0u: goto label_11d0f0;
            case 0x11D0F4u: goto label_11d0f4;
            case 0x11D0F8u: goto label_11d0f8;
            case 0x11D0FCu: goto label_11d0fc;
            case 0x11D100u: goto label_11d100;
            case 0x11D104u: goto label_11d104;
            case 0x11D108u: goto label_11d108;
            case 0x11D10Cu: goto label_11d10c;
            case 0x11D110u: goto label_11d110;
            case 0x11D114u: goto label_11d114;
            case 0x11D118u: goto label_11d118;
            case 0x11D11Cu: goto label_11d11c;
            case 0x11D120u: goto label_11d120;
            case 0x11D124u: goto label_11d124;
            case 0x11D128u: goto label_11d128;
            case 0x11D12Cu: goto label_11d12c;
            case 0x11D130u: goto label_11d130;
            case 0x11D134u: goto label_11d134;
            case 0x11D138u: goto label_11d138;
            case 0x11D13Cu: goto label_11d13c;
            case 0x11D140u: goto label_11d140;
            case 0x11D144u: goto label_11d144;
            case 0x11D148u: goto label_11d148;
            case 0x11D14Cu: goto label_11d14c;
            case 0x11D150u: goto label_11d150;
            case 0x11D154u: goto label_11d154;
            case 0x11D158u: goto label_11d158;
            case 0x11D15Cu: goto label_11d15c;
            case 0x11D160u: goto label_11d160;
            case 0x11D164u: goto label_11d164;
            case 0x11D168u: goto label_11d168;
            case 0x11D16Cu: goto label_11d16c;
            case 0x11D170u: goto label_11d170;
            case 0x11D174u: goto label_11d174;
            case 0x11D178u: goto label_11d178;
            case 0x11D17Cu: goto label_11d17c;
            case 0x11D180u: goto label_11d180;
            case 0x11D184u: goto label_11d184;
            case 0x11D188u: goto label_11d188;
            case 0x11D18Cu: goto label_11d18c;
            case 0x11D190u: goto label_11d190;
            case 0x11D194u: goto label_11d194;
            case 0x11D198u: goto label_11d198;
            case 0x11D19Cu: goto label_11d19c;
            case 0x11D1A0u: goto label_11d1a0;
            case 0x11D1A4u: goto label_11d1a4;
            case 0x11D1A8u: goto label_11d1a8;
            case 0x11D1ACu: goto label_11d1ac;
            case 0x11D1B0u: goto label_11d1b0;
            case 0x11D1B4u: goto label_11d1b4;
            case 0x11D1B8u: goto label_11d1b8;
            case 0x11D1BCu: goto label_11d1bc;
            case 0x11D1C0u: goto label_11d1c0;
            case 0x11D1C4u: goto label_11d1c4;
            case 0x11D1C8u: goto label_11d1c8;
            case 0x11D1CCu: goto label_11d1cc;
            case 0x11D1D0u: goto label_11d1d0;
            case 0x11D1D4u: goto label_11d1d4;
            case 0x11D1D8u: goto label_11d1d8;
            case 0x11D1DCu: goto label_11d1dc;
            case 0x11D1E0u: goto label_11d1e0;
            case 0x11D1E4u: goto label_11d1e4;
            case 0x11D1E8u: goto label_11d1e8;
            case 0x11D1ECu: goto label_11d1ec;
            case 0x11D1F0u: goto label_11d1f0;
            case 0x11D1F4u: goto label_11d1f4;
            case 0x11D1F8u: goto label_11d1f8;
            case 0x11D1FCu: goto label_11d1fc;
            case 0x11D200u: goto label_11d200;
            case 0x11D204u: goto label_11d204;
            case 0x11D208u: goto label_11d208;
            case 0x11D20Cu: goto label_11d20c;
            case 0x11D210u: goto label_11d210;
            case 0x11D214u: goto label_11d214;
            case 0x11D218u: goto label_11d218;
            case 0x11D21Cu: goto label_11d21c;
            case 0x11D220u: goto label_11d220;
            case 0x11D224u: goto label_11d224;
            case 0x11D228u: goto label_11d228;
            case 0x11D22Cu: goto label_11d22c;
            case 0x11D230u: goto label_11d230;
            case 0x11D234u: goto label_11d234;
            case 0x11D238u: goto label_11d238;
            case 0x11D23Cu: goto label_11d23c;
            case 0x11D240u: goto label_11d240;
            case 0x11D244u: goto label_11d244;
            case 0x11D248u: goto label_11d248;
            case 0x11D24Cu: goto label_11d24c;
            case 0x11D250u: goto label_11d250;
            case 0x11D254u: goto label_11d254;
            case 0x11D258u: goto label_11d258;
            case 0x11D25Cu: goto label_11d25c;
            case 0x11D260u: goto label_11d260;
            case 0x11D264u: goto label_11d264;
            case 0x11D268u: goto label_11d268;
            case 0x11D26Cu: goto label_11d26c;
            case 0x11D270u: goto label_11d270;
            case 0x11D274u: goto label_11d274;
            case 0x11D278u: goto label_11d278;
            case 0x11D27Cu: goto label_11d27c;
            case 0x11D280u: goto label_11d280;
            case 0x11D284u: goto label_11d284;
            case 0x11D288u: goto label_11d288;
            case 0x11D28Cu: goto label_11d28c;
            case 0x11D290u: goto label_11d290;
            case 0x11D294u: goto label_11d294;
            case 0x11D298u: goto label_11d298;
            case 0x11D29Cu: goto label_11d29c;
            case 0x11D2A0u: goto label_11d2a0;
            case 0x11D2A4u: goto label_11d2a4;
            case 0x11D2A8u: goto label_11d2a8;
            case 0x11D2ACu: goto label_11d2ac;
            case 0x11D2B0u: goto label_11d2b0;
            case 0x11D2B4u: goto label_11d2b4;
            case 0x11D2B8u: goto label_11d2b8;
            case 0x11D2BCu: goto label_11d2bc;
            case 0x11D2C0u: goto label_11d2c0;
            case 0x11D2C4u: goto label_11d2c4;
            case 0x11D2C8u: goto label_11d2c8;
            case 0x11D2CCu: goto label_11d2cc;
            case 0x11D2D0u: goto label_11d2d0;
            case 0x11D2D4u: goto label_11d2d4;
            case 0x11D2D8u: goto label_11d2d8;
            case 0x11D2DCu: goto label_11d2dc;
            case 0x11D2E0u: goto label_11d2e0;
            case 0x11D2E4u: goto label_11d2e4;
            case 0x11D2E8u: goto label_11d2e8;
            case 0x11D2ECu: goto label_11d2ec;
            case 0x11D2F0u: goto label_11d2f0;
            case 0x11D2F4u: goto label_11d2f4;
            case 0x11D2F8u: goto label_11d2f8;
            case 0x11D2FCu: goto label_11d2fc;
            case 0x11D300u: goto label_11d300;
            case 0x11D304u: goto label_11d304;
            case 0x11D308u: goto label_11d308;
            case 0x11D30Cu: goto label_11d30c;
            case 0x11D310u: goto label_11d310;
            case 0x11D314u: goto label_11d314;
            case 0x11D318u: goto label_11d318;
            case 0x11D31Cu: goto label_11d31c;
            case 0x11D320u: goto label_11d320;
            case 0x11D324u: goto label_11d324;
            case 0x11D328u: goto label_11d328;
            case 0x11D32Cu: goto label_11d32c;
            case 0x11D330u: goto label_11d330;
            case 0x11D334u: goto label_11d334;
            case 0x11D338u: goto label_11d338;
            case 0x11D33Cu: goto label_11d33c;
            case 0x11D340u: goto label_11d340;
            case 0x11D344u: goto label_11d344;
            case 0x11D348u: goto label_11d348;
            case 0x11D34Cu: goto label_11d34c;
            case 0x11D350u: goto label_11d350;
            case 0x11D354u: goto label_11d354;
            case 0x11D358u: goto label_11d358;
            case 0x11D35Cu: goto label_11d35c;
            case 0x11D360u: goto label_11d360;
            case 0x11D364u: goto label_11d364;
            case 0x11D368u: goto label_11d368;
            case 0x11D36Cu: goto label_11d36c;
            case 0x11D370u: goto label_11d370;
            case 0x11D374u: goto label_11d374;
            case 0x11D378u: goto label_11d378;
            case 0x11D37Cu: goto label_11d37c;
            case 0x11D380u: goto label_11d380;
            case 0x11D384u: goto label_11d384;
            case 0x11D388u: goto label_11d388;
            case 0x11D38Cu: goto label_11d38c;
            case 0x11D390u: goto label_11d390;
            case 0x11D394u: goto label_11d394;
            case 0x11D398u: goto label_11d398;
            case 0x11D39Cu: goto label_11d39c;
            case 0x11D3A0u: goto label_11d3a0;
            case 0x11D3A4u: goto label_11d3a4;
            case 0x11D3A8u: goto label_11d3a8;
            case 0x11D3ACu: goto label_11d3ac;
            case 0x11D3B0u: goto label_11d3b0;
            case 0x11D3B4u: goto label_11d3b4;
            case 0x11D3B8u: goto label_11d3b8;
            case 0x11D3BCu: goto label_11d3bc;
            case 0x11D3C0u: goto label_11d3c0;
            case 0x11D3C4u: goto label_11d3c4;
            case 0x11D3C8u: goto label_11d3c8;
            case 0x11D3CCu: goto label_11d3cc;
            case 0x11D3D0u: goto label_11d3d0;
            case 0x11D3D4u: goto label_11d3d4;
            case 0x11D3D8u: goto label_11d3d8;
            case 0x11D3DCu: goto label_11d3dc;
            case 0x11D3E0u: goto label_11d3e0;
            case 0x11D3E4u: goto label_11d3e4;
            case 0x11D3E8u: goto label_11d3e8;
            case 0x11D3ECu: goto label_11d3ec;
            case 0x11D3F0u: goto label_11d3f0;
            case 0x11D3F4u: goto label_11d3f4;
            case 0x11D3F8u: goto label_11d3f8;
            case 0x11D3FCu: goto label_11d3fc;
            case 0x11D400u: goto label_11d400;
            case 0x11D404u: goto label_11d404;
            case 0x11D408u: goto label_11d408;
            case 0x11D40Cu: goto label_11d40c;
            case 0x11D410u: goto label_11d410;
            case 0x11D414u: goto label_11d414;
            case 0x11D418u: goto label_11d418;
            case 0x11D41Cu: goto label_11d41c;
            case 0x11D420u: goto label_11d420;
            case 0x11D424u: goto label_11d424;
            case 0x11D428u: goto label_11d428;
            case 0x11D42Cu: goto label_11d42c;
            case 0x11D430u: goto label_11d430;
            case 0x11D434u: goto label_11d434;
            case 0x11D438u: goto label_11d438;
            case 0x11D43Cu: goto label_11d43c;
            case 0x11D440u: goto label_11d440;
            case 0x11D444u: goto label_11d444;
            case 0x11D448u: goto label_11d448;
            case 0x11D44Cu: goto label_11d44c;
            case 0x11D450u: goto label_11d450;
            case 0x11D454u: goto label_11d454;
            case 0x11D458u: goto label_11d458;
            case 0x11D45Cu: goto label_11d45c;
            case 0x11D460u: goto label_11d460;
            case 0x11D464u: goto label_11d464;
            case 0x11D468u: goto label_11d468;
            case 0x11D46Cu: goto label_11d46c;
            case 0x11D470u: goto label_11d470;
            case 0x11D474u: goto label_11d474;
            case 0x11D478u: goto label_11d478;
            case 0x11D47Cu: goto label_11d47c;
            case 0x11D480u: goto label_11d480;
            case 0x11D484u: goto label_11d484;
            case 0x11D488u: goto label_11d488;
            case 0x11D48Cu: goto label_11d48c;
            case 0x11D490u: goto label_11d490;
            case 0x11D494u: goto label_11d494;
            case 0x11D498u: goto label_11d498;
            case 0x11D49Cu: goto label_11d49c;
            case 0x11D4A0u: goto label_11d4a0;
            case 0x11D4A4u: goto label_11d4a4;
            case 0x11D4A8u: goto label_11d4a8;
            case 0x11D4ACu: goto label_11d4ac;
            case 0x11D4B0u: goto label_11d4b0;
            case 0x11D4B4u: goto label_11d4b4;
            case 0x11D4B8u: goto label_11d4b8;
            case 0x11D4BCu: goto label_11d4bc;
            case 0x11D4C0u: goto label_11d4c0;
            case 0x11D4C4u: goto label_11d4c4;
            case 0x11D4C8u: goto label_11d4c8;
            case 0x11D4CCu: goto label_11d4cc;
            case 0x11D4D0u: goto label_11d4d0;
            case 0x11D4D4u: goto label_11d4d4;
            case 0x11D4D8u: goto label_11d4d8;
            case 0x11D4DCu: goto label_11d4dc;
            case 0x11D4E0u: goto label_11d4e0;
            case 0x11D4E4u: goto label_11d4e4;
            case 0x11D4E8u: goto label_11d4e8;
            case 0x11D4ECu: goto label_11d4ec;
            case 0x11D4F0u: goto label_11d4f0;
            case 0x11D4F4u: goto label_11d4f4;
            case 0x11D4F8u: goto label_11d4f8;
            case 0x11D4FCu: goto label_11d4fc;
            case 0x11D500u: goto label_11d500;
            case 0x11D504u: goto label_11d504;
            case 0x11D508u: goto label_11d508;
            case 0x11D50Cu: goto label_11d50c;
            case 0x11D510u: goto label_11d510;
            case 0x11D514u: goto label_11d514;
            case 0x11D518u: goto label_11d518;
            case 0x11D51Cu: goto label_11d51c;
            case 0x11D520u: goto label_11d520;
            case 0x11D524u: goto label_11d524;
            case 0x11D528u: goto label_11d528;
            case 0x11D52Cu: goto label_11d52c;
            case 0x11D530u: goto label_11d530;
            case 0x11D534u: goto label_11d534;
            case 0x11D538u: goto label_11d538;
            case 0x11D53Cu: goto label_11d53c;
            case 0x11D540u: goto label_11d540;
            case 0x11D544u: goto label_11d544;
            case 0x11D548u: goto label_11d548;
            case 0x11D54Cu: goto label_11d54c;
            case 0x11D550u: goto label_11d550;
            case 0x11D554u: goto label_11d554;
            case 0x11D558u: goto label_11d558;
            case 0x11D55Cu: goto label_11d55c;
            case 0x11D560u: goto label_11d560;
            case 0x11D564u: goto label_11d564;
            case 0x11D568u: goto label_11d568;
            case 0x11D56Cu: goto label_11d56c;
            case 0x11D570u: goto label_11d570;
            case 0x11D574u: goto label_11d574;
            case 0x11D578u: goto label_11d578;
            case 0x11D57Cu: goto label_11d57c;
            case 0x11D580u: goto label_11d580;
            case 0x11D584u: goto label_11d584;
            case 0x11D588u: goto label_11d588;
            case 0x11D58Cu: goto label_11d58c;
            case 0x11D590u: goto label_11d590;
            case 0x11D594u: goto label_11d594;
            case 0x11D598u: goto label_11d598;
            case 0x11D59Cu: goto label_11d59c;
            case 0x11D5A0u: goto label_11d5a0;
            case 0x11D5A4u: goto label_11d5a4;
            case 0x11D5A8u: goto label_11d5a8;
            case 0x11D5ACu: goto label_11d5ac;
            case 0x11D5B0u: goto label_11d5b0;
            case 0x11D5B4u: goto label_11d5b4;
            case 0x11D5B8u: goto label_11d5b8;
            case 0x11D5BCu: goto label_11d5bc;
            case 0x11D5C0u: goto label_11d5c0;
            case 0x11D5C4u: goto label_11d5c4;
            case 0x11D5C8u: goto label_11d5c8;
            case 0x11D5CCu: goto label_11d5cc;
            case 0x11D5D0u: goto label_11d5d0;
            case 0x11D5D4u: goto label_11d5d4;
            case 0x11D5D8u: goto label_11d5d8;
            case 0x11D5DCu: goto label_11d5dc;
            case 0x11D5E0u: goto label_11d5e0;
            case 0x11D5E4u: goto label_11d5e4;
            case 0x11D5E8u: goto label_11d5e8;
            case 0x11D5ECu: goto label_11d5ec;
            case 0x11D5F0u: goto label_11d5f0;
            case 0x11D5F4u: goto label_11d5f4;
            case 0x11D5F8u: goto label_11d5f8;
            case 0x11D5FCu: goto label_11d5fc;
            case 0x11D600u: goto label_11d600;
            case 0x11D604u: goto label_11d604;
            case 0x11D608u: goto label_11d608;
            case 0x11D60Cu: goto label_11d60c;
            case 0x11D610u: goto label_11d610;
            case 0x11D614u: goto label_11d614;
            case 0x11D618u: goto label_11d618;
            case 0x11D61Cu: goto label_11d61c;
            case 0x11D620u: goto label_11d620;
            case 0x11D624u: goto label_11d624;
            case 0x11D628u: goto label_11d628;
            case 0x11D62Cu: goto label_11d62c;
            case 0x11D630u: goto label_11d630;
            case 0x11D634u: goto label_11d634;
            case 0x11D638u: goto label_11d638;
            case 0x11D63Cu: goto label_11d63c;
            case 0x11D640u: goto label_11d640;
            case 0x11D644u: goto label_11d644;
            case 0x11D648u: goto label_11d648;
            case 0x11D64Cu: goto label_11d64c;
            case 0x11D650u: goto label_11d650;
            case 0x11D654u: goto label_11d654;
            case 0x11D658u: goto label_11d658;
            case 0x11D65Cu: goto label_11d65c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11D414u; }
            if (ctx->pc != 0x11D414u) { return; }
        }
    }
    ctx->pc = 0x11D414u;
label_11d414:
    // 0x11d414: 0x2403ffac
    ctx->pc = 0x11d414u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967212));
label_11d418:
    // 0x11d418: 0xc
    ctx->pc = 0x11d418u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
label_11d41c:
    // 0x11d41c: 0x0
    ctx->pc = 0x11d41cu;
    // NOP
label_11d420:
    // 0x11d420: 0x0
    ctx->pc = 0x11d420u;
    // NOP
label_11d424:
    // 0x11d424: 0x0
    ctx->pc = 0x11d424u;
    // NOP
label_11d428:
    // 0x11d428: 0x0
    ctx->pc = 0x11d428u;
    // NOP
label_11d42c:
    // 0x11d42c: 0x0
    ctx->pc = 0x11d42cu;
    // NOP
label_11d430:
    // 0x11d430: 0x0
    ctx->pc = 0x11d430u;
    // NOP
label_11d434:
    // 0x11d434: 0x0
    ctx->pc = 0x11d434u;
    // NOP
label_11d438:
    // 0x11d438: 0x0
    ctx->pc = 0x11d438u;
    // NOP
label_11d43c:
    // 0x11d43c: 0x0
    ctx->pc = 0x11d43cu;
    // NOP
label_11d440:
    // 0x11d440: 0x40016000
    ctx->pc = 0x11d440u;
    SET_GPR_U32(ctx, 1, ctx->cop0_status);
label_11d444:
    // 0x11d444: 0x241affe4
    ctx->pc = 0x11d444u;
    SET_GPR_S32(ctx, 26, ADD32(GPR_U32(ctx, 0), 4294967268));
label_11d448:
    // 0x11d448: 0x3a0824
    ctx->pc = 0x11d448u;
    SET_GPR_U32(ctx, 1, AND32(GPR_U32(ctx, 1), GPR_U32(ctx, 26)));
label_11d44c:
    // 0x11d44c: 0x40816000
    ctx->pc = 0x11d44cu;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_11d450:
    // 0x11d450: 0x40f
    ctx->pc = 0x11d450u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_11d454:
    // 0x11d454: 0x3c020026
    ctx->pc = 0x11d454u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_11d458:
    // 0x11d458: 0x8c42f8e8
    ctx->pc = 0x11d458u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965480)));
label_11d45c:
    // 0x11d45c: 0x40827000
    ctx->pc = 0x11d45cu;
    ctx->cop0_epc = GPR_U32(ctx, 2);
label_11d460:
    // 0x11d460: 0x40f
    ctx->pc = 0x11d460u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_11d464:
    // 0x11d464: 0x3c020026
    ctx->pc = 0x11d464u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_11d468:
    // 0x11d468: 0xdc42f8c0
    ctx->pc = 0x11d468u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294965440)));
label_11d46c:
    // 0x11d46c: 0x400011
    ctx->pc = 0x11d46cu;
    ctx->hi = GPR_U32(ctx, 2);
label_11d470:
    // 0x11d470: 0x3c020026
    ctx->pc = 0x11d470u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_11d474:
    // 0x11d474: 0xdc42f8c8
    ctx->pc = 0x11d474u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294965448)));
label_11d478:
    // 0x11d478: 0x70400011
    ctx->pc = 0x11d478u;
    ctx->hi1 = GPR_U32(ctx, 2);
label_11d47c:
    // 0x11d47c: 0x3c020026
    ctx->pc = 0x11d47cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_11d480:
    // 0x11d480: 0xdc42f8d0
    ctx->pc = 0x11d480u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294965456)));
label_11d484:
    // 0x11d484: 0x400013
    ctx->pc = 0x11d484u;
    ctx->lo = GPR_U32(ctx, 2);
label_11d488:
    // 0x11d488: 0x3c020026
    ctx->pc = 0x11d488u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_11d48c:
    // 0x11d48c: 0xdc42f8d8
    ctx->pc = 0x11d48cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294965464)));
label_11d490:
    // 0x11d490: 0x70400013
    ctx->pc = 0x11d490u;
    ctx->lo1 = GPR_U32(ctx, 2);
label_11d494:
    // 0x11d494: 0x3c020026
    ctx->pc = 0x11d494u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_11d498:
    // 0x11d498: 0xdc42f8e0
    ctx->pc = 0x11d498u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294965472)));
label_11d49c:
    // 0x11d49c: 0x400029
    ctx->pc = 0x11d49cu;
    ctx->sa = GPR_U32(ctx, 2) & 0x1F;
label_11d4a0:
    // 0x11d4a0: 0x40f
    ctx->pc = 0x11d4a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_11d4a4:
    // 0x11d4a4: 0x3c1a0026
    ctx->pc = 0x11d4a4u;
    SET_GPR_U32(ctx, 26, ((uint32_t)38 << 16));
label_11d4a8:
    // 0x11d4a8: 0x275af6c0
    ctx->pc = 0x11d4a8u;
    SET_GPR_S32(ctx, 26, ADD32(GPR_U32(ctx, 26), 4294964928));
label_11d4ac:
    // 0x11d4ac: 0x7b410010
    ctx->pc = 0x11d4acu;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 26), 16)));
label_11d4b0:
    // 0x11d4b0: 0x7b420020
    ctx->pc = 0x11d4b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 26), 32)));
label_11d4b4:
    // 0x11d4b4: 0x7b430030
    ctx->pc = 0x11d4b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 26), 48)));
label_11d4b8:
    // 0x11d4b8: 0x7b440040
    ctx->pc = 0x11d4b8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 26), 64)));
label_11d4bc:
    // 0x11d4bc: 0x7b450050
    ctx->pc = 0x11d4bcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 26), 80)));
label_11d4c0:
    // 0x11d4c0: 0x7b460060
    ctx->pc = 0x11d4c0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 26), 96)));
label_11d4c4:
    // 0x11d4c4: 0x7b470070
    ctx->pc = 0x11d4c4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 26), 112)));
label_11d4c8:
    // 0x11d4c8: 0x7b480080
    ctx->pc = 0x11d4c8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 26), 128)));
label_11d4cc:
    // 0x11d4cc: 0x7b490090
    ctx->pc = 0x11d4ccu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 26), 144)));
label_11d4d0:
    // 0x11d4d0: 0x7b4a00a0
    ctx->pc = 0x11d4d0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 26), 160)));
label_11d4d4:
    // 0x11d4d4: 0x7b4b00b0
    ctx->pc = 0x11d4d4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 26), 176)));
label_11d4d8:
    // 0x11d4d8: 0x7b4c00c0
    ctx->pc = 0x11d4d8u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 26), 192)));
label_11d4dc:
    // 0x11d4dc: 0x7b4d00d0
    ctx->pc = 0x11d4dcu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 26), 208)));
label_11d4e0:
    // 0x11d4e0: 0x7b4e00e0
    ctx->pc = 0x11d4e0u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 26), 224)));
label_11d4e4:
    // 0x11d4e4: 0x7b4f00f0
    ctx->pc = 0x11d4e4u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 26), 240)));
label_11d4e8:
    // 0x11d4e8: 0x7b500100
    ctx->pc = 0x11d4e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 26), 256)));
label_11d4ec:
    // 0x11d4ec: 0x7b510110
    ctx->pc = 0x11d4ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 26), 272)));
label_11d4f0:
    // 0x11d4f0: 0x7b520120
    ctx->pc = 0x11d4f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 26), 288)));
label_11d4f4:
    // 0x11d4f4: 0x7b530130
    ctx->pc = 0x11d4f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 26), 304)));
label_11d4f8:
    // 0x11d4f8: 0x7b540140
    ctx->pc = 0x11d4f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 26), 320)));
label_11d4fc:
    // 0x11d4fc: 0x7b550150
    ctx->pc = 0x11d4fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 26), 336)));
label_11d500:
    // 0x11d500: 0x7b560160
    ctx->pc = 0x11d500u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 26), 352)));
label_11d504:
    // 0x11d504: 0x7b570170
    ctx->pc = 0x11d504u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 26), 368)));
label_11d508:
    // 0x11d508: 0x7b580180
    ctx->pc = 0x11d508u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 26), 384)));
label_11d50c:
    // 0x11d50c: 0x7b590190
    ctx->pc = 0x11d50cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 26), 400)));
label_11d510:
    // 0x11d510: 0x7b5c01c0
    ctx->pc = 0x11d510u;
    SET_GPR_VEC(ctx, 28, READ128(ADD32(GPR_U32(ctx, 26), 448)));
label_11d514:
    // 0x11d514: 0x7b5d01d0
    ctx->pc = 0x11d514u;
    SET_GPR_VEC(ctx, 29, READ128(ADD32(GPR_U32(ctx, 26), 464)));
label_11d518:
    // 0x11d518: 0x7b5e01e0
    ctx->pc = 0x11d518u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 26), 480)));
label_11d51c:
    // 0x11d51c: 0x7b5f01f0
    ctx->pc = 0x11d51cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 26), 496)));
label_11d520:
    // 0x11d520: 0x401a6000
    ctx->pc = 0x11d520u;
    SET_GPR_U32(ctx, 26, ctx->cop0_status);
label_11d524:
    // 0x11d524: 0x375a0013
    ctx->pc = 0x11d524u;
    SET_GPR_U32(ctx, 26, OR32(GPR_U32(ctx, 26), 19));
label_11d528:
    // 0x11d528: 0x409a6000
    ctx->pc = 0x11d528u;
    ctx->cop0_status = GPR_U32(ctx, 26) & 0xFF57FFFF;
label_11d52c:
    // 0x11d52c: 0x40f
    ctx->pc = 0x11d52cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_11d530:
    // 0x11d530: 0x42000018
    ctx->pc = 0x11d530u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_11d534:
    // 0x11d534: 0x0
    ctx->pc = 0x11d534u;
    // NOP
label_11d538:
    // 0x11d538: 0x0
    ctx->pc = 0x11d538u;
    // NOP
label_11d53c:
    // 0x11d53c: 0x0
    ctx->pc = 0x11d53cu;
    // NOP
label_11d540:
    // 0x11d540: 0x3c1a0026
    ctx->pc = 0x11d540u;
    SET_GPR_U32(ctx, 26, ((uint32_t)38 << 16));
label_11d544:
    // 0x11d544: 0x275af6c0
    ctx->pc = 0x11d544u;
    SET_GPR_S32(ctx, 26, ADD32(GPR_U32(ctx, 26), 4294964928));
label_11d548:
    // 0x11d548: 0x7f410010
    ctx->pc = 0x11d548u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16), GPR_VEC(ctx, 1));
label_11d54c:
    // 0x11d54c: 0x7f420020
    ctx->pc = 0x11d54cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32), GPR_VEC(ctx, 2));
label_11d550:
    // 0x11d550: 0x7f430030
    ctx->pc = 0x11d550u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 48), GPR_VEC(ctx, 3));
label_11d554:
    // 0x11d554: 0x7f440040
    ctx->pc = 0x11d554u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 64), GPR_VEC(ctx, 4));
label_11d558:
    // 0x11d558: 0x7f450050
    ctx->pc = 0x11d558u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 80), GPR_VEC(ctx, 5));
label_11d55c:
    // 0x11d55c: 0x7f460060
    ctx->pc = 0x11d55cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 96), GPR_VEC(ctx, 6));
label_11d560:
    // 0x11d560: 0x7f470070
    ctx->pc = 0x11d560u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 112), GPR_VEC(ctx, 7));
label_11d564:
    // 0x11d564: 0x7f480080
    ctx->pc = 0x11d564u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 128), GPR_VEC(ctx, 8));
label_11d568:
    // 0x11d568: 0x7f490090
    ctx->pc = 0x11d568u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 144), GPR_VEC(ctx, 9));
label_11d56c:
    // 0x11d56c: 0x7f4a00a0
    ctx->pc = 0x11d56cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 160), GPR_VEC(ctx, 10));
label_11d570:
    // 0x11d570: 0x7f4b00b0
    ctx->pc = 0x11d570u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 176), GPR_VEC(ctx, 11));
label_11d574:
    // 0x11d574: 0x7f4c00c0
    ctx->pc = 0x11d574u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 192), GPR_VEC(ctx, 12));
label_11d578:
    // 0x11d578: 0x7f4d00d0
    ctx->pc = 0x11d578u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 208), GPR_VEC(ctx, 13));
label_11d57c:
    // 0x11d57c: 0x7f4e00e0
    ctx->pc = 0x11d57cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 224), GPR_VEC(ctx, 14));
label_11d580:
    // 0x11d580: 0x7f4f00f0
    ctx->pc = 0x11d580u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 240), GPR_VEC(ctx, 15));
label_11d584:
    // 0x11d584: 0x7f500100
    ctx->pc = 0x11d584u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 256), GPR_VEC(ctx, 16));
label_11d588:
    // 0x11d588: 0x7f510110
    ctx->pc = 0x11d588u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 17));
label_11d58c:
    // 0x11d58c: 0x7f520120
    ctx->pc = 0x11d58cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 288), GPR_VEC(ctx, 18));
label_11d590:
    // 0x11d590: 0x7f530130
    ctx->pc = 0x11d590u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 304), GPR_VEC(ctx, 19));
label_11d594:
    // 0x11d594: 0x7f540140
    ctx->pc = 0x11d594u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 320), GPR_VEC(ctx, 20));
label_11d598:
    // 0x11d598: 0x7f550150
    ctx->pc = 0x11d598u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 336), GPR_VEC(ctx, 21));
label_11d59c:
    // 0x11d59c: 0x7f560160
    ctx->pc = 0x11d59cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 352), GPR_VEC(ctx, 22));
label_11d5a0:
    // 0x11d5a0: 0x7f570170
    ctx->pc = 0x11d5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 368), GPR_VEC(ctx, 23));
label_11d5a4:
    // 0x11d5a4: 0x7f580180
    ctx->pc = 0x11d5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 384), GPR_VEC(ctx, 24));
label_11d5a8:
    // 0x11d5a8: 0x7f590190
    ctx->pc = 0x11d5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 400), GPR_VEC(ctx, 25));
label_11d5ac:
    // 0x11d5ac: 0x7f5c01c0
    ctx->pc = 0x11d5acu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 448), GPR_VEC(ctx, 28));
label_11d5b0:
    // 0x11d5b0: 0x7f5d01d0
    ctx->pc = 0x11d5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 464), GPR_VEC(ctx, 29));
label_11d5b4:
    // 0x11d5b4: 0x7f5e01e0
    ctx->pc = 0x11d5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 480), GPR_VEC(ctx, 30));
label_11d5b8:
    // 0x11d5b8: 0x7f5f01f0
    ctx->pc = 0x11d5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 496), GPR_VEC(ctx, 31));
label_11d5bc:
    // 0x11d5bc: 0x1010
    ctx->pc = 0x11d5bcu;
    SET_GPR_U32(ctx, 2, ctx->hi);
label_11d5c0:
    // 0x11d5c0: 0x3c010026
    ctx->pc = 0x11d5c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
label_11d5c4:
    // 0x11d5c4: 0xfc22f8c0
    ctx->pc = 0x11d5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965440), GPR_U64(ctx, 2));
label_11d5c8:
    // 0x11d5c8: 0x70001010
    ctx->pc = 0x11d5c8u;
    SET_GPR_U32(ctx, 2, ctx->hi1);
label_11d5cc:
    // 0x11d5cc: 0x3c010026
    ctx->pc = 0x11d5ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
label_11d5d0:
    // 0x11d5d0: 0xfc22f8c8
    ctx->pc = 0x11d5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965448), GPR_U64(ctx, 2));
label_11d5d4:
    // 0x11d5d4: 0x1012
    ctx->pc = 0x11d5d4u;
    SET_GPR_U32(ctx, 2, ctx->lo);
label_11d5d8:
    // 0x11d5d8: 0x3c010026
    ctx->pc = 0x11d5d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
label_11d5dc:
    // 0x11d5dc: 0xfc22f8d0
    ctx->pc = 0x11d5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965456), GPR_U64(ctx, 2));
label_11d5e0:
    // 0x11d5e0: 0x70001012
    ctx->pc = 0x11d5e0u;
    SET_GPR_U32(ctx, 2, ctx->lo1);
label_11d5e4:
    // 0x11d5e4: 0x3c010026
    ctx->pc = 0x11d5e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
label_11d5e8:
    // 0x11d5e8: 0xfc22f8d8
    ctx->pc = 0x11d5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965464), GPR_U64(ctx, 2));
label_11d5ec:
    // 0x11d5ec: 0x1028
    ctx->pc = 0x11d5ecu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_11d5f0:
    // 0x11d5f0: 0x3c010026
    ctx->pc = 0x11d5f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
label_11d5f4:
    // 0x11d5f4: 0xfc22f8e0
    ctx->pc = 0x11d5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965472), GPR_U64(ctx, 2));
label_11d5f8:
    // 0x11d5f8: 0x40046000
    ctx->pc = 0x11d5f8u;
    SET_GPR_U32(ctx, 4, ctx->cop0_status);
label_11d5fc:
    // 0x11d5fc: 0x40056800
    ctx->pc = 0x11d5fcu;
    SET_GPR_U32(ctx, 5, ctx->cop0_cause);
label_11d600:
    // 0x11d600: 0x40067000
    ctx->pc = 0x11d600u;
    SET_GPR_U32(ctx, 6, ctx->cop0_epc);
label_11d604:
    // 0x11d604: 0x40074000
    ctx->pc = 0x11d604u;
    SET_GPR_U32(ctx, 7, ctx->cop0_badvaddr);
label_11d608:
    // 0x11d608: 0x4008b800
    ctx->pc = 0x11d608u;
    SET_GPR_U32(ctx, 8, ctx->cop0_badpaddr);
label_11d60c:
    // 0x11d60c: 0x3c090026
    ctx->pc = 0x11d60cu;
    SET_GPR_U32(ctx, 9, ((uint32_t)38 << 16));
label_11d610:
    // 0x11d610: 0x2529f6c0
    ctx->pc = 0x11d610u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294964928));
label_11d614:
    // 0x11d614: 0x3c010012
    ctx->pc = 0x11d614u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18 << 16));
label_11d618:
    // 0x11d618: 0x2421d63c
    ctx->pc = 0x11d618u;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 1), 4294956604));
label_11d61c:
    // 0x11d61c: 0x40817000
    ctx->pc = 0x11d61cu;
    ctx->cop0_epc = GPR_U32(ctx, 1);
label_11d620:
    // 0x11d620: 0x40f
    ctx->pc = 0x11d620u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_11d624:
    // 0x11d624: 0x40016000
    ctx->pc = 0x11d624u;
    SET_GPR_U32(ctx, 1, ctx->cop0_status);
label_11d628:
    // 0x11d628: 0x2402fffe
    ctx->pc = 0x11d628u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
label_11d62c:
    // 0x11d62c: 0x220824
    ctx->pc = 0x11d62cu;
    SET_GPR_U32(ctx, 1, AND32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_11d630:
    // 0x11d630: 0x40816000
    ctx->pc = 0x11d630u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_11d634:
    // 0x11d634: 0x40f
    ctx->pc = 0x11d634u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_11d638:
    // 0x11d638: 0x42000018
    ctx->pc = 0x11d638u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_11d63c:
    // 0x11d63c: 0x30a2007c
    ctx->pc = 0x11d63cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 124));
label_11d640:
    // 0x11d640: 0x3c010021
    ctx->pc = 0x11d640u;
    SET_GPR_U32(ctx, 1, ((uint32_t)33 << 16));
label_11d644:
    // 0x11d644: 0x220821
    ctx->pc = 0x11d644u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_11d648:
    // 0x11d648: 0x8c21a140
    ctx->pc = 0x11d648u;
    SET_GPR_U32(ctx, 1, READ32(ADD32(GPR_U32(ctx, 1), 4294943040)));
label_11d64c:
    // 0x11d64c: 0x3c1d0026
    ctx->pc = 0x11d64cu;
    SET_GPR_U32(ctx, 29, ((uint32_t)38 << 16));
label_11d650:
    // 0x11d650: 0x20f809
label_11d654:
    if (ctx->pc == 0x11D654u) {
        ctx->pc = 0x11D654u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294964928));
        ctx->pc = 0x11D658u;
        goto label_11d658;
    }
    ctx->pc = 0x11D650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x11D658u);
        ctx->pc = 0x11D654u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294964928));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D0D0u: goto label_11d0d0;
            case 0x11D0D4u: goto label_11d0d4;
            case 0x11D0D8u: goto label_11d0d8;
            case 0x11D0DCu: goto label_11d0dc;
            case 0x11D0E0u: goto label_11d0e0;
            case 0x11D0E4u: goto label_11d0e4;
            case 0x11D0E8u: goto label_11d0e8;
            case 0x11D0ECu: goto label_11d0ec;
            case 0x11D0F0u: goto label_11d0f0;
            case 0x11D0F4u: goto label_11d0f4;
            case 0x11D0F8u: goto label_11d0f8;
            case 0x11D0FCu: goto label_11d0fc;
            case 0x11D100u: goto label_11d100;
            case 0x11D104u: goto label_11d104;
            case 0x11D108u: goto label_11d108;
            case 0x11D10Cu: goto label_11d10c;
            case 0x11D110u: goto label_11d110;
            case 0x11D114u: goto label_11d114;
            case 0x11D118u: goto label_11d118;
            case 0x11D11Cu: goto label_11d11c;
            case 0x11D120u: goto label_11d120;
            case 0x11D124u: goto label_11d124;
            case 0x11D128u: goto label_11d128;
            case 0x11D12Cu: goto label_11d12c;
            case 0x11D130u: goto label_11d130;
            case 0x11D134u: goto label_11d134;
            case 0x11D138u: goto label_11d138;
            case 0x11D13Cu: goto label_11d13c;
            case 0x11D140u: goto label_11d140;
            case 0x11D144u: goto label_11d144;
            case 0x11D148u: goto label_11d148;
            case 0x11D14Cu: goto label_11d14c;
            case 0x11D150u: goto label_11d150;
            case 0x11D154u: goto label_11d154;
            case 0x11D158u: goto label_11d158;
            case 0x11D15Cu: goto label_11d15c;
            case 0x11D160u: goto label_11d160;
            case 0x11D164u: goto label_11d164;
            case 0x11D168u: goto label_11d168;
            case 0x11D16Cu: goto label_11d16c;
            case 0x11D170u: goto label_11d170;
            case 0x11D174u: goto label_11d174;
            case 0x11D178u: goto label_11d178;
            case 0x11D17Cu: goto label_11d17c;
            case 0x11D180u: goto label_11d180;
            case 0x11D184u: goto label_11d184;
            case 0x11D188u: goto label_11d188;
            case 0x11D18Cu: goto label_11d18c;
            case 0x11D190u: goto label_11d190;
            case 0x11D194u: goto label_11d194;
            case 0x11D198u: goto label_11d198;
            case 0x11D19Cu: goto label_11d19c;
            case 0x11D1A0u: goto label_11d1a0;
            case 0x11D1A4u: goto label_11d1a4;
            case 0x11D1A8u: goto label_11d1a8;
            case 0x11D1ACu: goto label_11d1ac;
            case 0x11D1B0u: goto label_11d1b0;
            case 0x11D1B4u: goto label_11d1b4;
            case 0x11D1B8u: goto label_11d1b8;
            case 0x11D1BCu: goto label_11d1bc;
            case 0x11D1C0u: goto label_11d1c0;
            case 0x11D1C4u: goto label_11d1c4;
            case 0x11D1C8u: goto label_11d1c8;
            case 0x11D1CCu: goto label_11d1cc;
            case 0x11D1D0u: goto label_11d1d0;
            case 0x11D1D4u: goto label_11d1d4;
            case 0x11D1D8u: goto label_11d1d8;
            case 0x11D1DCu: goto label_11d1dc;
            case 0x11D1E0u: goto label_11d1e0;
            case 0x11D1E4u: goto label_11d1e4;
            case 0x11D1E8u: goto label_11d1e8;
            case 0x11D1ECu: goto label_11d1ec;
            case 0x11D1F0u: goto label_11d1f0;
            case 0x11D1F4u: goto label_11d1f4;
            case 0x11D1F8u: goto label_11d1f8;
            case 0x11D1FCu: goto label_11d1fc;
            case 0x11D200u: goto label_11d200;
            case 0x11D204u: goto label_11d204;
            case 0x11D208u: goto label_11d208;
            case 0x11D20Cu: goto label_11d20c;
            case 0x11D210u: goto label_11d210;
            case 0x11D214u: goto label_11d214;
            case 0x11D218u: goto label_11d218;
            case 0x11D21Cu: goto label_11d21c;
            case 0x11D220u: goto label_11d220;
            case 0x11D224u: goto label_11d224;
            case 0x11D228u: goto label_11d228;
            case 0x11D22Cu: goto label_11d22c;
            case 0x11D230u: goto label_11d230;
            case 0x11D234u: goto label_11d234;
            case 0x11D238u: goto label_11d238;
            case 0x11D23Cu: goto label_11d23c;
            case 0x11D240u: goto label_11d240;
            case 0x11D244u: goto label_11d244;
            case 0x11D248u: goto label_11d248;
            case 0x11D24Cu: goto label_11d24c;
            case 0x11D250u: goto label_11d250;
            case 0x11D254u: goto label_11d254;
            case 0x11D258u: goto label_11d258;
            case 0x11D25Cu: goto label_11d25c;
            case 0x11D260u: goto label_11d260;
            case 0x11D264u: goto label_11d264;
            case 0x11D268u: goto label_11d268;
            case 0x11D26Cu: goto label_11d26c;
            case 0x11D270u: goto label_11d270;
            case 0x11D274u: goto label_11d274;
            case 0x11D278u: goto label_11d278;
            case 0x11D27Cu: goto label_11d27c;
            case 0x11D280u: goto label_11d280;
            case 0x11D284u: goto label_11d284;
            case 0x11D288u: goto label_11d288;
            case 0x11D28Cu: goto label_11d28c;
            case 0x11D290u: goto label_11d290;
            case 0x11D294u: goto label_11d294;
            case 0x11D298u: goto label_11d298;
            case 0x11D29Cu: goto label_11d29c;
            case 0x11D2A0u: goto label_11d2a0;
            case 0x11D2A4u: goto label_11d2a4;
            case 0x11D2A8u: goto label_11d2a8;
            case 0x11D2ACu: goto label_11d2ac;
            case 0x11D2B0u: goto label_11d2b0;
            case 0x11D2B4u: goto label_11d2b4;
            case 0x11D2B8u: goto label_11d2b8;
            case 0x11D2BCu: goto label_11d2bc;
            case 0x11D2C0u: goto label_11d2c0;
            case 0x11D2C4u: goto label_11d2c4;
            case 0x11D2C8u: goto label_11d2c8;
            case 0x11D2CCu: goto label_11d2cc;
            case 0x11D2D0u: goto label_11d2d0;
            case 0x11D2D4u: goto label_11d2d4;
            case 0x11D2D8u: goto label_11d2d8;
            case 0x11D2DCu: goto label_11d2dc;
            case 0x11D2E0u: goto label_11d2e0;
            case 0x11D2E4u: goto label_11d2e4;
            case 0x11D2E8u: goto label_11d2e8;
            case 0x11D2ECu: goto label_11d2ec;
            case 0x11D2F0u: goto label_11d2f0;
            case 0x11D2F4u: goto label_11d2f4;
            case 0x11D2F8u: goto label_11d2f8;
            case 0x11D2FCu: goto label_11d2fc;
            case 0x11D300u: goto label_11d300;
            case 0x11D304u: goto label_11d304;
            case 0x11D308u: goto label_11d308;
            case 0x11D30Cu: goto label_11d30c;
            case 0x11D310u: goto label_11d310;
            case 0x11D314u: goto label_11d314;
            case 0x11D318u: goto label_11d318;
            case 0x11D31Cu: goto label_11d31c;
            case 0x11D320u: goto label_11d320;
            case 0x11D324u: goto label_11d324;
            case 0x11D328u: goto label_11d328;
            case 0x11D32Cu: goto label_11d32c;
            case 0x11D330u: goto label_11d330;
            case 0x11D334u: goto label_11d334;
            case 0x11D338u: goto label_11d338;
            case 0x11D33Cu: goto label_11d33c;
            case 0x11D340u: goto label_11d340;
            case 0x11D344u: goto label_11d344;
            case 0x11D348u: goto label_11d348;
            case 0x11D34Cu: goto label_11d34c;
            case 0x11D350u: goto label_11d350;
            case 0x11D354u: goto label_11d354;
            case 0x11D358u: goto label_11d358;
            case 0x11D35Cu: goto label_11d35c;
            case 0x11D360u: goto label_11d360;
            case 0x11D364u: goto label_11d364;
            case 0x11D368u: goto label_11d368;
            case 0x11D36Cu: goto label_11d36c;
            case 0x11D370u: goto label_11d370;
            case 0x11D374u: goto label_11d374;
            case 0x11D378u: goto label_11d378;
            case 0x11D37Cu: goto label_11d37c;
            case 0x11D380u: goto label_11d380;
            case 0x11D384u: goto label_11d384;
            case 0x11D388u: goto label_11d388;
            case 0x11D38Cu: goto label_11d38c;
            case 0x11D390u: goto label_11d390;
            case 0x11D394u: goto label_11d394;
            case 0x11D398u: goto label_11d398;
            case 0x11D39Cu: goto label_11d39c;
            case 0x11D3A0u: goto label_11d3a0;
            case 0x11D3A4u: goto label_11d3a4;
            case 0x11D3A8u: goto label_11d3a8;
            case 0x11D3ACu: goto label_11d3ac;
            case 0x11D3B0u: goto label_11d3b0;
            case 0x11D3B4u: goto label_11d3b4;
            case 0x11D3B8u: goto label_11d3b8;
            case 0x11D3BCu: goto label_11d3bc;
            case 0x11D3C0u: goto label_11d3c0;
            case 0x11D3C4u: goto label_11d3c4;
            case 0x11D3C8u: goto label_11d3c8;
            case 0x11D3CCu: goto label_11d3cc;
            case 0x11D3D0u: goto label_11d3d0;
            case 0x11D3D4u: goto label_11d3d4;
            case 0x11D3D8u: goto label_11d3d8;
            case 0x11D3DCu: goto label_11d3dc;
            case 0x11D3E0u: goto label_11d3e0;
            case 0x11D3E4u: goto label_11d3e4;
            case 0x11D3E8u: goto label_11d3e8;
            case 0x11D3ECu: goto label_11d3ec;
            case 0x11D3F0u: goto label_11d3f0;
            case 0x11D3F4u: goto label_11d3f4;
            case 0x11D3F8u: goto label_11d3f8;
            case 0x11D3FCu: goto label_11d3fc;
            case 0x11D400u: goto label_11d400;
            case 0x11D404u: goto label_11d404;
            case 0x11D408u: goto label_11d408;
            case 0x11D40Cu: goto label_11d40c;
            case 0x11D410u: goto label_11d410;
            case 0x11D414u: goto label_11d414;
            case 0x11D418u: goto label_11d418;
            case 0x11D41Cu: goto label_11d41c;
            case 0x11D420u: goto label_11d420;
            case 0x11D424u: goto label_11d424;
            case 0x11D428u: goto label_11d428;
            case 0x11D42Cu: goto label_11d42c;
            case 0x11D430u: goto label_11d430;
            case 0x11D434u: goto label_11d434;
            case 0x11D438u: goto label_11d438;
            case 0x11D43Cu: goto label_11d43c;
            case 0x11D440u: goto label_11d440;
            case 0x11D444u: goto label_11d444;
            case 0x11D448u: goto label_11d448;
            case 0x11D44Cu: goto label_11d44c;
            case 0x11D450u: goto label_11d450;
            case 0x11D454u: goto label_11d454;
            case 0x11D458u: goto label_11d458;
            case 0x11D45Cu: goto label_11d45c;
            case 0x11D460u: goto label_11d460;
            case 0x11D464u: goto label_11d464;
            case 0x11D468u: goto label_11d468;
            case 0x11D46Cu: goto label_11d46c;
            case 0x11D470u: goto label_11d470;
            case 0x11D474u: goto label_11d474;
            case 0x11D478u: goto label_11d478;
            case 0x11D47Cu: goto label_11d47c;
            case 0x11D480u: goto label_11d480;
            case 0x11D484u: goto label_11d484;
            case 0x11D488u: goto label_11d488;
            case 0x11D48Cu: goto label_11d48c;
            case 0x11D490u: goto label_11d490;
            case 0x11D494u: goto label_11d494;
            case 0x11D498u: goto label_11d498;
            case 0x11D49Cu: goto label_11d49c;
            case 0x11D4A0u: goto label_11d4a0;
            case 0x11D4A4u: goto label_11d4a4;
            case 0x11D4A8u: goto label_11d4a8;
            case 0x11D4ACu: goto label_11d4ac;
            case 0x11D4B0u: goto label_11d4b0;
            case 0x11D4B4u: goto label_11d4b4;
            case 0x11D4B8u: goto label_11d4b8;
            case 0x11D4BCu: goto label_11d4bc;
            case 0x11D4C0u: goto label_11d4c0;
            case 0x11D4C4u: goto label_11d4c4;
            case 0x11D4C8u: goto label_11d4c8;
            case 0x11D4CCu: goto label_11d4cc;
            case 0x11D4D0u: goto label_11d4d0;
            case 0x11D4D4u: goto label_11d4d4;
            case 0x11D4D8u: goto label_11d4d8;
            case 0x11D4DCu: goto label_11d4dc;
            case 0x11D4E0u: goto label_11d4e0;
            case 0x11D4E4u: goto label_11d4e4;
            case 0x11D4E8u: goto label_11d4e8;
            case 0x11D4ECu: goto label_11d4ec;
            case 0x11D4F0u: goto label_11d4f0;
            case 0x11D4F4u: goto label_11d4f4;
            case 0x11D4F8u: goto label_11d4f8;
            case 0x11D4FCu: goto label_11d4fc;
            case 0x11D500u: goto label_11d500;
            case 0x11D504u: goto label_11d504;
            case 0x11D508u: goto label_11d508;
            case 0x11D50Cu: goto label_11d50c;
            case 0x11D510u: goto label_11d510;
            case 0x11D514u: goto label_11d514;
            case 0x11D518u: goto label_11d518;
            case 0x11D51Cu: goto label_11d51c;
            case 0x11D520u: goto label_11d520;
            case 0x11D524u: goto label_11d524;
            case 0x11D528u: goto label_11d528;
            case 0x11D52Cu: goto label_11d52c;
            case 0x11D530u: goto label_11d530;
            case 0x11D534u: goto label_11d534;
            case 0x11D538u: goto label_11d538;
            case 0x11D53Cu: goto label_11d53c;
            case 0x11D540u: goto label_11d540;
            case 0x11D544u: goto label_11d544;
            case 0x11D548u: goto label_11d548;
            case 0x11D54Cu: goto label_11d54c;
            case 0x11D550u: goto label_11d550;
            case 0x11D554u: goto label_11d554;
            case 0x11D558u: goto label_11d558;
            case 0x11D55Cu: goto label_11d55c;
            case 0x11D560u: goto label_11d560;
            case 0x11D564u: goto label_11d564;
            case 0x11D568u: goto label_11d568;
            case 0x11D56Cu: goto label_11d56c;
            case 0x11D570u: goto label_11d570;
            case 0x11D574u: goto label_11d574;
            case 0x11D578u: goto label_11d578;
            case 0x11D57Cu: goto label_11d57c;
            case 0x11D580u: goto label_11d580;
            case 0x11D584u: goto label_11d584;
            case 0x11D588u: goto label_11d588;
            case 0x11D58Cu: goto label_11d58c;
            case 0x11D590u: goto label_11d590;
            case 0x11D594u: goto label_11d594;
            case 0x11D598u: goto label_11d598;
            case 0x11D59Cu: goto label_11d59c;
            case 0x11D5A0u: goto label_11d5a0;
            case 0x11D5A4u: goto label_11d5a4;
            case 0x11D5A8u: goto label_11d5a8;
            case 0x11D5ACu: goto label_11d5ac;
            case 0x11D5B0u: goto label_11d5b0;
            case 0x11D5B4u: goto label_11d5b4;
            case 0x11D5B8u: goto label_11d5b8;
            case 0x11D5BCu: goto label_11d5bc;
            case 0x11D5C0u: goto label_11d5c0;
            case 0x11D5C4u: goto label_11d5c4;
            case 0x11D5C8u: goto label_11d5c8;
            case 0x11D5CCu: goto label_11d5cc;
            case 0x11D5D0u: goto label_11d5d0;
            case 0x11D5D4u: goto label_11d5d4;
            case 0x11D5D8u: goto label_11d5d8;
            case 0x11D5DCu: goto label_11d5dc;
            case 0x11D5E0u: goto label_11d5e0;
            case 0x11D5E4u: goto label_11d5e4;
            case 0x11D5E8u: goto label_11d5e8;
            case 0x11D5ECu: goto label_11d5ec;
            case 0x11D5F0u: goto label_11d5f0;
            case 0x11D5F4u: goto label_11d5f4;
            case 0x11D5F8u: goto label_11d5f8;
            case 0x11D5FCu: goto label_11d5fc;
            case 0x11D600u: goto label_11d600;
            case 0x11D604u: goto label_11d604;
            case 0x11D608u: goto label_11d608;
            case 0x11D60Cu: goto label_11d60c;
            case 0x11D610u: goto label_11d610;
            case 0x11D614u: goto label_11d614;
            case 0x11D618u: goto label_11d618;
            case 0x11D61Cu: goto label_11d61c;
            case 0x11D620u: goto label_11d620;
            case 0x11D624u: goto label_11d624;
            case 0x11D628u: goto label_11d628;
            case 0x11D62Cu: goto label_11d62c;
            case 0x11D630u: goto label_11d630;
            case 0x11D634u: goto label_11d634;
            case 0x11D638u: goto label_11d638;
            case 0x11D63Cu: goto label_11d63c;
            case 0x11D640u: goto label_11d640;
            case 0x11D644u: goto label_11d644;
            case 0x11D648u: goto label_11d648;
            case 0x11D64Cu: goto label_11d64c;
            case 0x11D650u: goto label_11d650;
            case 0x11D654u: goto label_11d654;
            case 0x11D658u: goto label_11d658;
            case 0x11D65Cu: goto label_11d65c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11D658u; }
            if (ctx->pc != 0x11D658u) { return; }
        }
    }
    ctx->pc = 0x11D658u;
label_11d658:
    // 0x11d658: 0x3ffffcd
    ctx->pc = 0x11d658u;
    runtime->handleBreak(rdram, ctx);
label_11d65c:
    // 0x11d65c: 0x0
    ctx->pc = 0x11d65cu;
    // NOP
}
