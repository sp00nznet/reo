#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_12d590
// Address: 0x12d590 - 0x12d638
void entry_12d590_0x12d638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d590u;

    // 0x12d590: 0x27bdffe0
    ctx->pc = 0x12d590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12d594: 0xffb10008
    ctx->pc = 0x12d594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12d598: 0x80882d
    ctx->pc = 0x12d598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d59c: 0xffb00000
    ctx->pc = 0x12d59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12d5a0: 0xffbf0010
    ctx->pc = 0x12d5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12d5a4: 0x8e300004
    ctx->pc = 0x12d5a4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12d5a8: 0xc049468
    ctx->pc = 0x12D5A8u;
    SET_GPR_U32(ctx, 31, 0x12D5B0u);
    ctx->pc = 0x12D5ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1251A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001251A0_0x1251a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D5B0u; }
    }
    if (ctx->pc != 0x12D5B0u) { return; }
    ctx->pc = 0x12D5B0u;
    // 0x12d5b0: 0x14400003
    ctx->pc = 0x12D5B0u;
    {
        const bool branch_taken_0x12d5b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D5B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12d5b0) {
            ctx->pc = 0x12D5C0u;
            goto label_12d5c0;
        }
    }
    ctx->pc = 0x12D5B8u;
    // 0x12d5b8: 0xc04b3f6
    ctx->pc = 0x12D5B8u;
    SET_GPR_U32(ctx, 31, 0x12D5C0u);
    ctx->pc = 0x12CFD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012CFD8_0x12cfd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D5C0u; }
    }
    if (ctx->pc != 0x12D5C0u) { return; }
    ctx->pc = 0x12D5C0u;
label_12d5c0:
    // 0x12d5c0: 0xc0495da
    ctx->pc = 0x12D5C0u;
    SET_GPR_U32(ctx, 31, 0x12D5C8u);
    ctx->pc = 0x12D5C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125768u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00125768_0x125768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D5C8u; }
    }
    if (ctx->pc != 0x12D5C8u) { return; }
    ctx->pc = 0x12D5C8u;
    // 0x12d5c8: 0xc049468
    ctx->pc = 0x12D5C8u;
    SET_GPR_U32(ctx, 31, 0x12D5D0u);
    ctx->pc = 0x12D5CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1251A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001251A0_0x1251a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D5D0u; }
    }
    if (ctx->pc != 0x12D5D0u) { return; }
    ctx->pc = 0x12D5D0u;
    // 0x12d5d0: 0x24030003
    ctx->pc = 0x12d5d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x12d5d4: 0x14430003
    ctx->pc = 0x12D5D4u;
    {
        const bool branch_taken_0x12d5d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x12D5D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12d5d4) {
            ctx->pc = 0x12D5E4u;
            goto label_12d5e4;
        }
    }
    ctx->pc = 0x12D5DCu;
    // 0x12d5dc: 0xc04b4ce
    ctx->pc = 0x12D5DCu;
    SET_GPR_U32(ctx, 31, 0x12D5E4u);
    ctx->pc = 0x12D338u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D338_0x12d338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D5E4u; }
    }
    if (ctx->pc != 0x12D5E4u) { return; }
    ctx->pc = 0x12D5E4u;
label_12d5e4:
    // 0x12d5e4: 0x86040098
    ctx->pc = 0x12d5e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x12d5e8: 0x2402000a
    ctx->pc = 0x12d5e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x12d5ec: 0x10820007
    ctx->pc = 0x12D5ECu;
    {
        const bool branch_taken_0x12d5ec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x12D5F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x12d5ec) {
            ctx->pc = 0x12D60Cu;
            goto label_12d60c;
        }
    }
    ctx->pc = 0x12D5F4u;
    // 0x12d5f4: 0x10820005
    ctx->pc = 0x12D5F4u;
    {
        const bool branch_taken_0x12d5f4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x12D5F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
        if (branch_taken_0x12d5f4) {
            ctx->pc = 0x12D60Cu;
            goto label_12d60c;
        }
    }
    ctx->pc = 0x12D5FCu;
    // 0x12d5fc: 0x10820003
    ctx->pc = 0x12D5FCu;
    {
        const bool branch_taken_0x12d5fc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x12D600u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x12d5fc) {
            ctx->pc = 0x12D60Cu;
            goto label_12d60c;
        }
    }
    ctx->pc = 0x12D604u;
    // 0x12d604: 0x14820008
    ctx->pc = 0x12D604u;
    {
        const bool branch_taken_0x12d604 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x12D608u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x12d604) {
            ctx->pc = 0x12D628u;
            goto label_12d628;
        }
    }
    ctx->pc = 0x12D60Cu;
label_12d60c:
    // 0x12d60c: 0x220202d
    ctx->pc = 0x12d60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d610: 0xdfb10008
    ctx->pc = 0x12d610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d614: 0xdfb00000
    ctx->pc = 0x12d614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d618: 0xdfbf0010
    ctx->pc = 0x12d618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d61c: 0x804b540
    ctx->pc = 0x12D61Cu;
    ctx->pc = 0x12D620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x12D500u;
    entry_12d500_0x12d590(rdram, ctx, runtime); return;
    ctx->pc = 0x12D624u;
    // 0x12d624: 0x0
    ctx->pc = 0x12d624u;
    // NOP
label_12d628:
    // 0x12d628: 0xdfb10008
    ctx->pc = 0x12d628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d62c: 0xdfbf0010
    ctx->pc = 0x12d62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d630: 0x3e00008
    ctx->pc = 0x12D630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D634u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D5C0u: goto label_12d5c0;
            case 0x12D5E4u: goto label_12d5e4;
            case 0x12D60Cu: goto label_12d60c;
            case 0x12D628u: goto label_12d628;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12D638u;
}
