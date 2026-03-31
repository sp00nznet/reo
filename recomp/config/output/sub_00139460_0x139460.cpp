#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00139460
// Address: 0x139460 - 0x139568
void sub_00139460_0x139460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x139460u;

    // 0x139460: 0x27bdffb0
    ctx->pc = 0x139460u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x139464: 0xffb00010
    ctx->pc = 0x139464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x139468: 0xc0802d
    ctx->pc = 0x139468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13946c: 0xffb10018
    ctx->pc = 0x13946cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x139470: 0x100882d
    ctx->pc = 0x139470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139474: 0xffb20020
    ctx->pc = 0x139474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x139478: 0xa0902d
    ctx->pc = 0x139478u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13947c: 0xffb30028
    ctx->pc = 0x13947cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x139480: 0x80982d
    ctx->pc = 0x139480u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139484: 0xffb40030
    ctx->pc = 0x139484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x139488: 0xffb50038
    ctx->pc = 0x139488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x13948c: 0xffbf0040
    ctx->pc = 0x13948cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x139490: 0xc0505b4
    ctx->pc = 0x139490u;
    SET_GPR_U32(ctx, 31, 0x139498u);
    ctx->pc = 0x139494u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1416D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001416D0_0x1416d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139498u; }
    }
    if (ctx->pc != 0x139498u) { return; }
    ctx->pc = 0x139498u;
    // 0x139498: 0x1a00000d
    ctx->pc = 0x139498u;
    {
        const bool branch_taken_0x139498 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x13949Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x139498) {
            ctx->pc = 0x1394D0u;
            goto label_1394d0;
        }
    }
    ctx->pc = 0x1394A0u;
    // 0x1394a0: 0x3c070026
    ctx->pc = 0x1394a0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)38 << 16));
    // 0x1394a4: 0x24e823c0
    ctx->pc = 0x1394a4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 7), 9152));
label_1394a8:
    // 0x1394a8: 0x61080
    ctx->pc = 0x1394a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1394ac: 0x24c60001
    ctx->pc = 0x1394acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1394b0: 0x521821
    ctx->pc = 0x1394b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1394b4: 0x481021
    ctx->pc = 0x1394b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1394b8: 0x8c640000
    ctx->pc = 0x1394b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1394bc: 0xd0282a
    ctx->pc = 0x1394bcu;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 16)));
    // 0x1394c0: 0x14a0fff9
    ctx->pc = 0x1394C0u;
    {
        const bool branch_taken_0x1394c0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1394C4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x1394c0) {
            ctx->pc = 0x1394A8u;
            goto label_1394a8;
        }
    }
    ctx->pc = 0x1394C8u;
    // 0x1394c8: 0x10000003
    ctx->pc = 0x1394C8u;
    {
        const bool branch_taken_0x1394c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1394CCu;
        SET_GPR_U32(ctx, 21, ((uint32_t)38 << 16));
        if (branch_taken_0x1394c8) {
            ctx->pc = 0x1394D8u;
            goto label_1394d8;
        }
    }
    ctx->pc = 0x1394D0u;
label_1394d0:
    // 0x1394d0: 0x3c070026
    ctx->pc = 0x1394d0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)38 << 16));
    // 0x1394d4: 0x3c150026
    ctx->pc = 0x1394d4u;
    SET_GPR_U32(ctx, 21, ((uint32_t)38 << 16));
label_1394d8:
    // 0x1394d8: 0x3c040022
    ctx->pc = 0x1394d8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)34 << 16));
    // 0x1394dc: 0x26b224c0
    ctx->pc = 0x1394dcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 21), 9408));
    // 0x1394e0: 0x302d
    ctx->pc = 0x1394e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1394e4: 0x2484c870
    ctx->pc = 0x1394e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953072));
    // 0x1394e8: 0x26650400
    ctx->pc = 0x1394e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 1024));
    // 0x1394ec: 0x24e723c0
    ctx->pc = 0x1394ecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 9152));
    // 0x1394f0: 0x104080
    ctx->pc = 0x1394f0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1394f4: 0x240482d
    ctx->pc = 0x1394f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1394f8: 0x115080
    ctx->pc = 0x1394f8u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 17), 2));
    // 0x1394fc: 0x582d
    ctx->pc = 0x1394fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139500: 0xc045e7a
    ctx->pc = 0x139500u;
    SET_GPR_U32(ctx, 31, 0x139508u);
    ctx->pc = 0x139504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139508u; }
    }
    if (ctx->pc != 0x139508u) { return; }
    ctx->pc = 0x139508u;
    // 0x139508: 0x1a20000b
    ctx->pc = 0x139508u;
    {
        const bool branch_taken_0x139508 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x13950Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x139508) {
            ctx->pc = 0x139538u;
            goto label_139538;
        }
    }
    ctx->pc = 0x139510u;
    // 0x139510: 0x240482d
    ctx->pc = 0x139510u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139514: 0x0
    ctx->pc = 0x139514u;
    // NOP
label_139518:
    // 0x139518: 0x61080
    ctx->pc = 0x139518u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x13951c: 0x24c60001
    ctx->pc = 0x13951cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x139520: 0x491821
    ctx->pc = 0x139520u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x139524: 0x541021
    ctx->pc = 0x139524u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x139528: 0x8c640000
    ctx->pc = 0x139528u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13952c: 0xd1282a
    ctx->pc = 0x13952cu;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 17)));
    // 0x139530: 0x14a0fff9
    ctx->pc = 0x139530u;
    {
        const bool branch_taken_0x139530 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x139534u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x139530) {
            ctx->pc = 0x139518u;
            goto label_139518;
        }
    }
    ctx->pc = 0x139538u;
label_139538:
    // 0x139538: 0xc0505ba
    ctx->pc = 0x139538u;
    SET_GPR_U32(ctx, 31, 0x139540u);
    ctx->pc = 0x1416E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001416E8_0x1416e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139540u; }
    }
    if (ctx->pc != 0x139540u) { return; }
    ctx->pc = 0x139540u;
    // 0x139540: 0x8ea224c0
    ctx->pc = 0x139540u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 9408)));
    // 0x139544: 0xdfb00010
    ctx->pc = 0x139544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139548: 0xdfb10018
    ctx->pc = 0x139548u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13954c: 0xdfb20020
    ctx->pc = 0x13954cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139550: 0xdfb30028
    ctx->pc = 0x139550u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x139554: 0xdfb40030
    ctx->pc = 0x139554u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139558: 0xdfb50038
    ctx->pc = 0x139558u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13955c: 0xdfbf0040
    ctx->pc = 0x13955cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139560: 0x3e00008
    ctx->pc = 0x139560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139564u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1394A8u: goto label_1394a8;
            case 0x1394D0u: goto label_1394d0;
            case 0x1394D8u: goto label_1394d8;
            case 0x139518u: goto label_139518;
            case 0x139538u: goto label_139538;
            default: break;
        }
        return;
    }
    ctx->pc = 0x139568u;
}
