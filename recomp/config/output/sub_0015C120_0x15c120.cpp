#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015C120
// Address: 0x15c120 - 0x15c210
void sub_0015C120_0x15c120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15c120u;

    // 0x15c120: 0x27bdffc0
    ctx->pc = 0x15c120u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15c124: 0xffb30018
    ctx->pc = 0x15c124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15c128: 0x982d
    ctx->pc = 0x15c128u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c12c: 0xffb50028
    ctx->pc = 0x15c12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x15c130: 0x80a82d
    ctx->pc = 0x15c130u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c134: 0xffb60030
    ctx->pc = 0x15c134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x15c138: 0xc0b02d
    ctx->pc = 0x15c138u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c13c: 0xffb00000
    ctx->pc = 0x15c13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15c140: 0xffb10008
    ctx->pc = 0x15c140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15c144: 0xffb20010
    ctx->pc = 0x15c144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15c148: 0xffb40020
    ctx->pc = 0x15c148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x15c14c: 0xffbf0038
    ctx->pc = 0x15c14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x15c150: 0x8cb10008
    ctx->pc = 0x15c150u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x15c154: 0x8cb0000c
    ctx->pc = 0x15c154u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x15c158: 0x8ca40024
    ctx->pc = 0x15c158u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x15c15c: 0xc056f70
    ctx->pc = 0x15C15Cu;
    SET_GPR_U32(ctx, 31, 0x15C164u);
    ctx->pc = 0x15C160u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    ctx->pc = 0x15BDC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BDC0_0x15bdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C164u; }
    }
    if (ctx->pc != 0x15C164u) { return; }
    ctx->pc = 0x15C164u;
    // 0x15c164: 0x2626000f
    ctx->pc = 0x15c164u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 15));
    // 0x15c168: 0x2a240000
    ctx->pc = 0x15c168u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 17), 0));
    // 0x15c16c: 0x2a030000
    ctx->pc = 0x15c16cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 0));
    // 0x15c170: 0x2605000f
    ctx->pc = 0x15c170u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 15));
    // 0x15c174: 0xc4880b
    ctx->pc = 0x15c174u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 6));
    // 0x15c178: 0xa3800b
    ctx->pc = 0x15c178u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 5));
    // 0x15c17c: 0x24040002
    ctx->pc = 0x15c17cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c180: 0x118903
    ctx->pc = 0x15c180u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 4));
    // 0x15c184: 0x14440004
    ctx->pc = 0x15C184u;
    {
        const bool branch_taken_0x15c184 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x15C188u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 4));
        if (branch_taken_0x15c184) {
            ctx->pc = 0x15C198u;
            goto label_15c198;
        }
    }
    ctx->pc = 0x15C18Cu;
    // 0x15c18c: 0x2231018
    ctx->pc = 0x15c18cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x15c190: 0x10000005
    ctx->pc = 0x15C190u;
    {
        const bool branch_taken_0x15c190 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15C194u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 10));
        if (branch_taken_0x15c190) {
            ctx->pc = 0x15C1A8u;
            goto label_15c1a8;
        }
    }
    ctx->pc = 0x15C198u;
label_15c198:
    // 0x15c198: 0x2231818
    ctx->pc = 0x15c198u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x15c19c: 0x31040
    ctx->pc = 0x15c19cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x15c1a0: 0x431021
    ctx->pc = 0x15c1a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c1a4: 0x211c0
    ctx->pc = 0x15c1a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 7));
label_15c1a8:
    // 0x15c1a8: 0x1a80000d
    ctx->pc = 0x15C1A8u;
    {
        const bool branch_taken_0x15c1a8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x15C1ACu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 64));
        if (branch_taken_0x15c1a8) {
            ctx->pc = 0x15C1E0u;
            goto label_15c1e0;
        }
    }
    ctx->pc = 0x15C1B0u;
    // 0x15c1b0: 0x280802d
    ctx->pc = 0x15c1b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c1b4: 0x2414ffff
    ctx->pc = 0x15c1b4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15c1b8: 0x2c0882d
    ctx->pc = 0x15c1b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c1bc: 0x0
    ctx->pc = 0x15c1bcu;
    // NOP
label_15c1c0:
    // 0x15c1c0: 0x2a0202d
    ctx->pc = 0x15c1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c1c4: 0xc057568
    ctx->pc = 0x15C1C4u;
    SET_GPR_U32(ctx, 31, 0x15C1CCu);
    ctx->pc = 0x15C1C8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15D5A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D5A0_0x15d5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C1CCu; }
    }
    if (ctx->pc != 0x15C1CCu) { return; }
    ctx->pc = 0x15C1CCu;
    // 0x15c1cc: 0x2610ffff
    ctx->pc = 0x15c1ccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x15c1d0: 0xae220000
    ctx->pc = 0x15c1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x15c1d4: 0x26310004
    ctx->pc = 0x15c1d4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
    // 0x15c1d8: 0x1600fff9
    ctx->pc = 0x15C1D8u;
    {
        const bool branch_taken_0x15c1d8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x15C1DCu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 20));
        if (branch_taken_0x15c1d8) {
            ctx->pc = 0x15C1C0u;
            goto label_15c1c0;
        }
    }
    ctx->pc = 0x15C1E0u;
label_15c1e0:
    // 0x15c1e0: 0x260102d
    ctx->pc = 0x15c1e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c1e4: 0xdfb00000
    ctx->pc = 0x15c1e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c1e8: 0xdfb10008
    ctx->pc = 0x15c1e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15c1ec: 0xdfb20010
    ctx->pc = 0x15c1ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c1f0: 0xdfb30018
    ctx->pc = 0x15c1f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15c1f4: 0xdfb40020
    ctx->pc = 0x15c1f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c1f8: 0xdfb50028
    ctx->pc = 0x15c1f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15c1fc: 0xdfb60030
    ctx->pc = 0x15c1fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c200: 0xdfbf0038
    ctx->pc = 0x15c200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15c204: 0x3e00008
    ctx->pc = 0x15C204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C208u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15C198u: goto label_15c198;
            case 0x15C1A8u: goto label_15c1a8;
            case 0x15C1C0u: goto label_15c1c0;
            case 0x15C1E0u: goto label_15c1e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15C20Cu;
    // 0x15c20c: 0x0
    ctx->pc = 0x15c20cu;
    // NOP
}
