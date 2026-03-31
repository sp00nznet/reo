#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016B538
// Address: 0x16b538 - 0x16b5e8
void sub_0016B538_0x16b538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16b538u;

    // 0x16b538: 0x27bdffa0
    ctx->pc = 0x16b538u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16b53c: 0xffb00020
    ctx->pc = 0x16b53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x16b540: 0x802d
    ctx->pc = 0x16b540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b544: 0xffb10028
    ctx->pc = 0x16b544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x16b548: 0x882d
    ctx->pc = 0x16b548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b54c: 0xffb20030
    ctx->pc = 0x16b54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x16b550: 0x902d
    ctx->pc = 0x16b550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b554: 0xffb50048
    ctx->pc = 0x16b554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x16b558: 0xa0a82d
    ctx->pc = 0x16b558u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b55c: 0xffb60050
    ctx->pc = 0x16b55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x16b560: 0xc0b02d
    ctx->pc = 0x16b560u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b564: 0xffb30038
    ctx->pc = 0x16b564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x16b568: 0xffb40040
    ctx->pc = 0x16b568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x16b56c: 0xffbf0058
    ctx->pc = 0x16b56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x16b570: 0x8c931aec
    ctx->pc = 0x16b570u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 4), 6892)));
    // 0x16b574: 0x8e740000
    ctx->pc = 0x16b574u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16b578:
    // 0x16b578: 0x200302d
    ctx->pc = 0x16b578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b57c: 0x26100001
    ctx->pc = 0x16b57cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x16b580: 0x280202d
    ctx->pc = 0x16b580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b584: 0xc055f90
    ctx->pc = 0x16B584u;
    SET_GPR_U32(ctx, 31, 0x16B58Cu);
    ctx->pc = 0x16B588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x157E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00157E40_0x157e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B58Cu; }
    }
    if (ctx->pc != 0x16B58Cu) { return; }
    ctx->pc = 0x16B58Cu;
    // 0x16b58c: 0x2a060003
    ctx->pc = 0x16b58cu;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 16), 3));
    // 0x16b590: 0x8fa40008
    ctx->pc = 0x16b590u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b594: 0x8fa5000c
    ctx->pc = 0x16b594u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16b598: 0x92102a
    ctx->pc = 0x16b598u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 18)));
    // 0x16b59c: 0xb1182a
    ctx->pc = 0x16b59cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 17)));
    // 0x16b5a0: 0x82900a
    ctx->pc = 0x16b5a0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 4));
    // 0x16b5a4: 0x14c0fff4
    ctx->pc = 0x16B5A4u;
    {
        const bool branch_taken_0x16b5a4 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x16B5A8u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 5));
        if (branch_taken_0x16b5a4) {
            ctx->pc = 0x16B578u;
            goto label_16b578;
        }
    }
    ctx->pc = 0x16B5ACu;
    // 0x16b5ac: 0xae710004
    ctx->pc = 0x16b5acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x16b5b0: 0xae720008
    ctx->pc = 0x16b5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 18));
    // 0x16b5b4: 0xaeb20000
    ctx->pc = 0x16b5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
    // 0x16b5b8: 0xdfb00020
    ctx->pc = 0x16b5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b5bc: 0x8e620004
    ctx->pc = 0x16b5bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x16b5c0: 0xdfb10028
    ctx->pc = 0x16b5c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16b5c4: 0xaec20000
    ctx->pc = 0x16b5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x16b5c8: 0xdfb20030
    ctx->pc = 0x16b5c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b5cc: 0xdfb30038
    ctx->pc = 0x16b5ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16b5d0: 0xdfb40040
    ctx->pc = 0x16b5d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b5d4: 0xdfb50048
    ctx->pc = 0x16b5d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16b5d8: 0xdfb60050
    ctx->pc = 0x16b5d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16b5dc: 0xdfbf0058
    ctx->pc = 0x16b5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x16b5e0: 0x3e00008
    ctx->pc = 0x16B5E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B5E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B578u: goto label_16b578;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B5E8u;
}
