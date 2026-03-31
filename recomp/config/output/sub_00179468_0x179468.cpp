#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00179468
// Address: 0x179468 - 0x179538
void sub_00179468_0x179468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x179468u;

    // 0x179468: 0x27bdffe0
    ctx->pc = 0x179468u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17946c: 0x102d
    ctx->pc = 0x17946cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179470: 0xffb00000
    ctx->pc = 0x179470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179474: 0x30b000ff
    ctx->pc = 0x179474u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 5), 255));
    // 0x179478: 0xffb10008
    ctx->pc = 0x179478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17947c: 0x80882d
    ctx->pc = 0x17947cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179480: 0xffb20010
    ctx->pc = 0x179480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x179484: 0xc0902d
    ctx->pc = 0x179484u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179488: 0xffbf0018
    ctx->pc = 0x179488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17948c: 0x8e23000c
    ctx->pc = 0x17948cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x179490: 0x2863006e
    ctx->pc = 0x179490u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 110));
    // 0x179494: 0x14600022
    ctx->pc = 0x179494u;
    {
        const bool branch_taken_0x179494 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x179498u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179494) {
            ctx->pc = 0x179520u;
            goto label_179520;
        }
    }
    ctx->pc = 0x17949Cu;
    // 0x17949c: 0xc05e976
    ctx->pc = 0x17949Cu;
    SET_GPR_U32(ctx, 31, 0x1794A4u);
    ctx->pc = 0x17A5D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A5D8_0x17a5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1794A4u; }
    }
    if (ctx->pc != 0x1794A4u) { return; }
    ctx->pc = 0x1794A4u;
    // 0x1794a4: 0x240600e0
    ctx->pc = 0x1794a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x1794a8: 0x40182d
    ctx->pc = 0x1794a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1794ac: 0x240200c0
    ctx->pc = 0x1794acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 192));
    // 0x1794b0: 0x220202d
    ctx->pc = 0x1794b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1794b4: 0x10620006
    ctx->pc = 0x1794B4u;
    {
        const bool branch_taken_0x1794b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1794B8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1794b4) {
            ctx->pc = 0x1794D0u;
            goto label_1794d0;
        }
    }
    ctx->pc = 0x1794BCu;
    // 0x1794bc: 0x1066000e
    ctx->pc = 0x1794BCu;
    {
        const bool branch_taken_0x1794bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 6));
        ctx->pc = 0x1794C0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1794bc) {
            ctx->pc = 0x1794F8u;
            goto label_1794f8;
        }
    }
    ctx->pc = 0x1794C4u;
    // 0x1794c4: 0x10000017
    ctx->pc = 0x1794C4u;
    {
        const bool branch_taken_0x1794c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1794C8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1794c4) {
            ctx->pc = 0x179524u;
            goto label_179524;
        }
    }
    ctx->pc = 0x1794CCu;
    // 0x1794cc: 0x0
    ctx->pc = 0x1794ccu;
    // NOP
label_1794d0:
    // 0x1794d0: 0xc05e756
    ctx->pc = 0x1794D0u;
    SET_GPR_U32(ctx, 31, 0x1794D8u);
    ctx->pc = 0x179D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179D58_0x179d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1794D8u; }
    }
    if (ctx->pc != 0x1794D8u) { return; }
    ctx->pc = 0x1794D8u;
    // 0x1794d8: 0x200202d
    ctx->pc = 0x1794d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1794dc: 0x40182d
    ctx->pc = 0x1794dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1794e0: 0x1060000f
    ctx->pc = 0x1794E0u;
    {
        const bool branch_taken_0x1794e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1794E4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1794e0) {
            ctx->pc = 0x179520u;
            goto label_179520;
        }
    }
    ctx->pc = 0x1794E8u;
    // 0x1794e8: 0xc05e956
    ctx->pc = 0x1794E8u;
    SET_GPR_U32(ctx, 31, 0x1794F0u);
    ctx->pc = 0x17A558u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A558_0x17a558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1794F0u; }
    }
    if (ctx->pc != 0x1794F0u) { return; }
    ctx->pc = 0x1794F0u;
    // 0x1794f0: 0x1000000a
    ctx->pc = 0x1794F0u;
    {
        const bool branch_taken_0x1794f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1794F4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1794f0) {
            ctx->pc = 0x17951Cu;
            goto label_17951c;
        }
    }
    ctx->pc = 0x1794F8u;
label_1794f8:
    // 0x1794f8: 0xc05e756
    ctx->pc = 0x1794F8u;
    SET_GPR_U32(ctx, 31, 0x179500u);
    ctx->pc = 0x1794FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179D58_0x179d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179500u; }
    }
    if (ctx->pc != 0x179500u) { return; }
    ctx->pc = 0x179500u;
    // 0x179500: 0x200202d
    ctx->pc = 0x179500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179504: 0x40182d
    ctx->pc = 0x179504u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179508: 0x10600005
    ctx->pc = 0x179508u;
    {
        const bool branch_taken_0x179508 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x17950Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179508) {
            ctx->pc = 0x179520u;
            goto label_179520;
        }
    }
    ctx->pc = 0x179510u;
    // 0x179510: 0xc05e966
    ctx->pc = 0x179510u;
    SET_GPR_U32(ctx, 31, 0x179518u);
    ctx->pc = 0x17A598u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A598_0x17a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179518u; }
    }
    if (ctx->pc != 0x179518u) { return; }
    ctx->pc = 0x179518u;
    // 0x179518: 0xae420000
    ctx->pc = 0x179518u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_17951c:
    // 0x17951c: 0x24020001
    ctx->pc = 0x17951cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_179520:
    // 0x179520: 0xdfb00000
    ctx->pc = 0x179520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179524:
    // 0x179524: 0xdfb10008
    ctx->pc = 0x179524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179528: 0xdfb20010
    ctx->pc = 0x179528u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17952c: 0xdfbf0018
    ctx->pc = 0x17952cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179530: 0x3e00008
    ctx->pc = 0x179530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179534u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1794D0u: goto label_1794d0;
            case 0x1794F8u: goto label_1794f8;
            case 0x17951Cu: goto label_17951c;
            case 0x179520u: goto label_179520;
            case 0x179524u: goto label_179524;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179538u;
}
