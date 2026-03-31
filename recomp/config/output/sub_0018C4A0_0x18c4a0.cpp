#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018C4A0
// Address: 0x18c4a0 - 0x18c5f0
void sub_0018C4A0_0x18c4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18c4a0u;

    // 0x18c4a0: 0x27bdffe0
    ctx->pc = 0x18c4a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18c4a4: 0x2485ffff
    ctx->pc = 0x18c4a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18c4a8: 0xffbf0010
    ctx->pc = 0x18c4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18c4ac: 0x51840
    ctx->pc = 0x18c4acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x18c4b0: 0x7fb00000
    ctx->pc = 0x18c4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18c4b4: 0x3c010029
    ctx->pc = 0x18c4b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18c4b8: 0x8c2241a0
    ctx->pc = 0x18c4b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 16800)));
    // 0x18c4bc: 0x651821
    ctx->pc = 0x18c4bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18c4c0: 0x319c0
    ctx->pc = 0x18c4c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 7));
    // 0x18c4c4: 0x14800003
    ctx->pc = 0x18C4C4u;
    {
        const bool branch_taken_0x18c4c4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x18C4C8u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x18c4c4) {
            ctx->pc = 0x18C4D4u;
            goto label_18c4d4;
        }
    }
    ctx->pc = 0x18C4CCu;
    // 0x18c4cc: 0x10000022
    ctx->pc = 0x18C4CCu;
    {
        const bool branch_taken_0x18c4cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18C4D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18c4cc) {
            ctx->pc = 0x18C558u;
            goto label_18c558;
        }
    }
    ctx->pc = 0x18C4D4u;
label_18c4d4:
    // 0x18c4d4: 0x2c810281
    ctx->pc = 0x18c4d4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), 641));
    // 0x18c4d8: 0x14200003
    ctx->pc = 0x18C4D8u;
    {
        const bool branch_taken_0x18c4d8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x18C4DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18c4d8) {
            ctx->pc = 0x18C4E8u;
            goto label_18c4e8;
        }
    }
    ctx->pc = 0x18C4E0u;
    // 0x18c4e0: 0x1000001e
    ctx->pc = 0x18C4E0u;
    {
        const bool branch_taken_0x18c4e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18C4E4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x18c4e0) {
            ctx->pc = 0x18C55Cu;
            goto label_18c55c;
        }
    }
    ctx->pc = 0x18C4E8u;
label_18c4e8:
    // 0x18c4e8: 0x8e020004
    ctx->pc = 0x18c4e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18c4ec: 0x14400003
    ctx->pc = 0x18C4ECu;
    {
        const bool branch_taken_0x18c4ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18C4F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18c4ec) {
            ctx->pc = 0x18C4FCu;
            goto label_18c4fc;
        }
    }
    ctx->pc = 0x18C4F4u;
    // 0x18c4f4: 0x10000018
    ctx->pc = 0x18C4F4u;
    {
        const bool branch_taken_0x18c4f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x18c4f4) {
            ctx->pc = 0x18C558u;
            goto label_18c558;
        }
    }
    ctx->pc = 0x18C4FCu;
label_18c4fc:
    // 0x18c4fc: 0xc0635b0
    ctx->pc = 0x18C4FCu;
    SET_GPR_U32(ctx, 31, 0x18C504u);
    ctx->pc = 0x18D6C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D6C0_0x18d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C504u; }
    }
    if (ctx->pc != 0x18C504u) { return; }
    ctx->pc = 0x18C504u;
    // 0x18c504: 0xae000004
    ctx->pc = 0x18c504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x18c508: 0x8e040014
    ctx->pc = 0x18c508u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x18c50c: 0x10800003
    ctx->pc = 0x18C50Cu;
    {
        const bool branch_taken_0x18c50c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x18c50c) {
            ctx->pc = 0x18C51Cu;
            goto label_18c51c;
        }
    }
    ctx->pc = 0x18C514u;
    // 0x18c514: 0xc063724
    ctx->pc = 0x18C514u;
    SET_GPR_U32(ctx, 31, 0x18C51Cu);
    ctx->pc = 0x18DC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC90_0x18dc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C51Cu; }
    }
    if (ctx->pc != 0x18C51Cu) { return; }
    ctx->pc = 0x18C51Cu;
label_18c51c:
    // 0x18c51c: 0x8e04001c
    ctx->pc = 0x18c51cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x18c520: 0x10800003
    ctx->pc = 0x18C520u;
    {
        const bool branch_taken_0x18c520 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x18c520) {
            ctx->pc = 0x18C530u;
            goto label_18c530;
        }
    }
    ctx->pc = 0x18C528u;
    // 0x18c528: 0xc063724
    ctx->pc = 0x18C528u;
    SET_GPR_U32(ctx, 31, 0x18C530u);
    ctx->pc = 0x18DC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DC90_0x18dc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C530u; }
    }
    if (ctx->pc != 0x18C530u) { return; }
    ctx->pc = 0x18C530u;
label_18c530:
    // 0x18c530: 0x200202d
    ctx->pc = 0x18c530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c534: 0x282d
    ctx->pc = 0x18c534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c538: 0xc0636e0
    ctx->pc = 0x18C538u;
    SET_GPR_U32(ctx, 31, 0x18C540u);
    ctx->pc = 0x18C53Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 384));
    ctx->pc = 0x18DB80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DB80_0x18db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C540u; }
    }
    if (ctx->pc != 0x18C540u) { return; }
    ctx->pc = 0x18C540u;
    // 0x18c540: 0x3c010029
    ctx->pc = 0x18c540u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18c544: 0x24020001
    ctx->pc = 0x18c544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c548: 0x8c234198
    ctx->pc = 0x18c548u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 16792)));
    // 0x18c54c: 0x2463ffff
    ctx->pc = 0x18c54cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18c550: 0x3c010029
    ctx->pc = 0x18c550u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18c554: 0xac234198
    ctx->pc = 0x18c554u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16792), GPR_U32(ctx, 3));
label_18c558:
    // 0x18c558: 0xdfbf0010
    ctx->pc = 0x18c558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18c55c:
    // 0x18c55c: 0x7bb00000
    ctx->pc = 0x18c55cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c560: 0x3e00008
    ctx->pc = 0x18C560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C564u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C4D4u: goto label_18c4d4;
            case 0x18C4E8u: goto label_18c4e8;
            case 0x18C4FCu: goto label_18c4fc;
            case 0x18C51Cu: goto label_18c51c;
            case 0x18C530u: goto label_18c530;
            case 0x18C558u: goto label_18c558;
            case 0x18C55Cu: goto label_18c55c;
            case 0x18C58Cu: goto label_18c58c;
            case 0x18C5A8u: goto label_18c5a8;
            case 0x18C5E8u: goto label_18c5e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18C568u;
    // 0x18c568: 0x0
    ctx->pc = 0x18c568u;
    // NOP
    // 0x18c56c: 0x0
    ctx->pc = 0x18c56cu;
    // NOP
    // 0x18c570: 0x1080001d
    ctx->pc = 0x18C570u;
    {
        const bool branch_taken_0x18c570 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x18c570) {
            ctx->pc = 0x18C5E8u;
            goto label_18c5e8;
        }
    }
    ctx->pc = 0x18C578u;
    // 0x18c578: 0x2c810281
    ctx->pc = 0x18c578u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), 641));
    // 0x18c57c: 0x14200003
    ctx->pc = 0x18C57Cu;
    {
        const bool branch_taken_0x18c57c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x18c57c) {
            ctx->pc = 0x18C58Cu;
            goto label_18c58c;
        }
    }
    ctx->pc = 0x18C584u;
    // 0x18c584: 0x10000018
    ctx->pc = 0x18C584u;
    {
        const bool branch_taken_0x18c584 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x18c584) {
            ctx->pc = 0x18C5E8u;
            goto label_18c5e8;
        }
    }
    ctx->pc = 0x18C58Cu;
label_18c58c:
    // 0x18c58c: 0x4a00016
    ctx->pc = 0x18C58Cu;
    {
        const bool branch_taken_0x18c58c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x18c58c) {
            ctx->pc = 0x18C5E8u;
            goto label_18c5e8;
        }
    }
    ctx->pc = 0x18C594u;
    // 0x18c594: 0x28a30020
    ctx->pc = 0x18c594u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 32));
    // 0x18c598: 0x14600003
    ctx->pc = 0x18C598u;
    {
        const bool branch_taken_0x18c598 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x18c598) {
            ctx->pc = 0x18C5A8u;
            goto label_18c5a8;
        }
    }
    ctx->pc = 0x18C5A0u;
    // 0x18c5a0: 0x10000011
    ctx->pc = 0x18C5A0u;
    {
        const bool branch_taken_0x18c5a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x18c5a0) {
            ctx->pc = 0x18C5E8u;
            goto label_18c5e8;
        }
    }
    ctx->pc = 0x18C5A8u;
label_18c5a8:
    // 0x18c5a8: 0x10c0000f
    ctx->pc = 0x18C5A8u;
    {
        const bool branch_taken_0x18c5a8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x18c5a8) {
            ctx->pc = 0x18C5E8u;
            goto label_18c5e8;
        }
    }
    ctx->pc = 0x18C5B0u;
    // 0x18c5b0: 0x3c010029
    ctx->pc = 0x18c5b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18c5b4: 0x2487ffff
    ctx->pc = 0x18c5b4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18c5b8: 0x8c2341a0
    ctx->pc = 0x18c5b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 16800)));
    // 0x18c5bc: 0x72040
    ctx->pc = 0x18c5bcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 7), 1));
    // 0x18c5c0: 0x872021
    ctx->pc = 0x18c5c0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x18c5c4: 0x52880
    ctx->pc = 0x18c5c4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x18c5c8: 0x421c0
    ctx->pc = 0x18c5c8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 7));
    // 0x18c5cc: 0x641821
    ctx->pc = 0x18c5ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18c5d0: 0xa32021
    ctx->pc = 0x18c5d0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x18c5d4: 0x8c830080
    ctx->pc = 0x18c5d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x18c5d8: 0x10660003
    ctx->pc = 0x18C5D8u;
    {
        const bool branch_taken_0x18c5d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 6));
        ctx->pc = 0x18C5DCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 128));
        if (branch_taken_0x18c5d8) {
            ctx->pc = 0x18C5E8u;
            goto label_18c5e8;
        }
    }
    ctx->pc = 0x18C5E0u;
    // 0x18c5e0: 0xaca60000
    ctx->pc = 0x18c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x18c5e4: 0xac860100
    ctx->pc = 0x18c5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 6));
label_18c5e8:
    // 0x18c5e8: 0x3e00008
    ctx->pc = 0x18C5E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C4D4u: goto label_18c4d4;
            case 0x18C4E8u: goto label_18c4e8;
            case 0x18C4FCu: goto label_18c4fc;
            case 0x18C51Cu: goto label_18c51c;
            case 0x18C530u: goto label_18c530;
            case 0x18C558u: goto label_18c558;
            case 0x18C55Cu: goto label_18c55c;
            case 0x18C58Cu: goto label_18c58c;
            case 0x18C5A8u: goto label_18c5a8;
            case 0x18C5E8u: goto label_18c5e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18C5F0u;
}
