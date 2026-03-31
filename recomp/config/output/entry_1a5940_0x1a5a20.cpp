#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1a5940
// Address: 0x1a5940 - 0x1a5a20
void entry_1a5940_0x1a5a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a5940u;

    // 0x1a5940: 0x27bdffd0
    ctx->pc = 0x1a5940u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a5944: 0xc0582d
    ctx->pc = 0x1a5944u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5948: 0xffbf0000
    ctx->pc = 0x1a5948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a594c: 0x80602d
    ctx->pc = 0x1a594cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5950: 0xc069630
    ctx->pc = 0x1A5950u;
    SET_GPR_U32(ctx, 31, 0x1A5958u);
    ctx->pc = 0x1A5954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A58C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A58C0_0x1a58c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5958u; }
    }
    if (ctx->pc != 0x1A5958u) { return; }
    ctx->pc = 0x1A5958u;
    // 0x1a5958: 0x90460011
    ctx->pc = 0x1a5958u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x1a595c: 0x40482d
    ctx->pc = 0x1a595cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5960: 0x120402d
    ctx->pc = 0x1a5960u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5964: 0x28c10002
    ctx->pc = 0x1a5964u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 6), 2));
    // 0x1a5968: 0x14200012
    ctx->pc = 0x1A5968u;
    {
        const bool branch_taken_0x1a5968 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A596Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x1a5968) {
            ctx->pc = 0x1A59B4u;
            goto label_1a59b4;
        }
    }
    ctx->pc = 0x1A5970u;
    // 0x1a5970: 0x502d
    ctx->pc = 0x1a5970u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5974: 0x24c7ffff
    ctx->pc = 0x1a5974u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1a5978: 0x10000006
    ctx->pc = 0x1A5978u;
    {
        const bool branch_taken_0x1a5978 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A597Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 9), 48));
        if (branch_taken_0x1a5978) {
            ctx->pc = 0x1A5994u;
            goto label_1a5994;
        }
    }
    ctx->pc = 0x1A5980u;
label_1a5980:
    // 0x1a5980: 0x821821
    ctx->pc = 0x1a5980u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a5984: 0x254a0001
    ctx->pc = 0x1a5984u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x1a5988: 0x5d1021
    ctx->pc = 0x1a5988u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a598c: 0x24630010
    ctx->pc = 0x1a598cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x1a5990: 0xac430010
    ctx->pc = 0x1a5990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_1a5994:
    // 0x1a5994: 0x147102a
    ctx->pc = 0x1a5994u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 7)));
    // 0x1a5998: 0x1440fff9
    ctx->pc = 0x1A5998u;
    {
        const bool branch_taken_0x1a5998 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A599Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 2));
        if (branch_taken_0x1a5998) {
            ctx->pc = 0x1A5980u;
            goto label_1a5980;
        }
    }
    ctx->pc = 0x1A59A0u;
    // 0x1a59a0: 0x28c10005
    ctx->pc = 0x1a59a0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 6), 5));
    // 0x1a59a4: 0x10200002
    ctx->pc = 0x1A59A4u;
    {
        const bool branch_taken_0x1a59a4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A59A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x1a59a4) {
            ctx->pc = 0x1A59B0u;
            goto label_1a59b0;
        }
    }
    ctx->pc = 0x1A59ACu;
    // 0x1a59ac: 0x24020020
    ctx->pc = 0x1a59acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_1a59b0:
    // 0x1a59b0: 0xa22821
    ctx->pc = 0x1a59b0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1a59b4:
    // 0x1a59b4: 0xc069614
    ctx->pc = 0x1A59B4u;
    SET_GPR_U32(ctx, 31, 0x1A59BCu);
    ctx->pc = 0x1A59B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A5850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5850_0x1a5850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A59BCu; }
    }
    if (ctx->pc != 0x1A59BCu) { return; }
    ctx->pc = 0x1A59BCu;
    // 0x1a59bc: 0x1224821
    ctx->pc = 0x1a59bcu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1a59c0: 0x91020011
    ctx->pc = 0x1a59c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 17)));
    // 0x1a59c4: 0x28410002
    ctx->pc = 0x1a59c4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 2));
    // 0x1a59c8: 0x1420000e
    ctx->pc = 0x1A59C8u;
    {
        const bool branch_taken_0x1a59c8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A59CCu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a59c8) {
            ctx->pc = 0x1A5A04u;
            goto label_1a5a04;
        }
    }
    ctx->pc = 0x1A59D0u;
    // 0x1a59d0: 0x10000008
    ctx->pc = 0x1A59D0u;
    {
        const bool branch_taken_0x1a59d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A59D4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a59d0) {
            ctx->pc = 0x1A59F4u;
            goto label_1a59f4;
        }
    }
    ctx->pc = 0x1A59D8u;
label_1a59d8:
    // 0x1a59d8: 0x5d1021
    ctx->pc = 0x1a59d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a59dc: 0x8c420010
    ctx->pc = 0x1a59dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a59e0: 0x8c450000
    ctx->pc = 0x1a59e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a59e4: 0xc069614
    ctx->pc = 0x1A59E4u;
    SET_GPR_U32(ctx, 31, 0x1A59ECu);
    ctx->pc = 0x1A59E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A5850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5850_0x1a5850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A59ECu; }
    }
    if (ctx->pc != 0x1A59ECu) { return; }
    ctx->pc = 0x1A59ECu;
    // 0x1a59ec: 0xe23821
    ctx->pc = 0x1a59ecu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a59f0: 0x24c60001
    ctx->pc = 0x1a59f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_1a59f4:
    // 0x1a59f4: 0xcb102a
    ctx->pc = 0x1a59f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 11)));
    // 0x1a59f8: 0x1440fff7
    ctx->pc = 0x1A59F8u;
    {
        const bool branch_taken_0x1a59f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A59FCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1a59f8) {
            ctx->pc = 0x1A59D8u;
            goto label_1a59d8;
        }
    }
    ctx->pc = 0x1A5A00u;
    // 0x1a5a00: 0x1274821
    ctx->pc = 0x1a5a00u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_1a5a04:
    // 0x1a5a04: 0xdfbf0000
    ctx->pc = 0x1a5a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5a08: 0x120102d
    ctx->pc = 0x1a5a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a0c: 0x3e00008
    ctx->pc = 0x1A5A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5A10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5980u: goto label_1a5980;
            case 0x1A5994u: goto label_1a5994;
            case 0x1A59B0u: goto label_1a59b0;
            case 0x1A59B4u: goto label_1a59b4;
            case 0x1A59D8u: goto label_1a59d8;
            case 0x1A59F4u: goto label_1a59f4;
            case 0x1A5A04u: goto label_1a5a04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5A14u;
    // 0x1a5a14: 0x0
    ctx->pc = 0x1a5a14u;
    // NOP
    // 0x1a5a18: 0x0
    ctx->pc = 0x1a5a18u;
    // NOP
    // 0x1a5a1c: 0x0
    ctx->pc = 0x1a5a1cu;
    // NOP
}
