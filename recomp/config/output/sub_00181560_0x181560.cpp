#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00181560
// Address: 0x181560 - 0x181650
void sub_00181560_0x181560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x181560u;

    // 0x181560: 0x3c030023
    ctx->pc = 0x181560u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x181564: 0x27bdffc0
    ctx->pc = 0x181564u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x181568: 0x8c6afa10
    ctx->pc = 0x181568u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 3), 4294965776)));
    // 0x18156c: 0x3c028101
    ctx->pc = 0x18156cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181570: 0xffb10008
    ctx->pc = 0x181570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x181574: 0xa0882d
    ctx->pc = 0x181574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181578: 0xffb20010
    ctx->pc = 0x181578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18157c: 0x80902d
    ctx->pc = 0x18157cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181580: 0xffb30018
    ctx->pc = 0x181580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x181584: 0x120982d
    ctx->pc = 0x181584u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181588: 0xffb40020
    ctx->pc = 0x181588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x18158c: 0xc0a02d
    ctx->pc = 0x18158cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181590: 0xffb50028
    ctx->pc = 0x181590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x181594: 0xe0a82d
    ctx->pc = 0x181594u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181598: 0xffb60030
    ctx->pc = 0x181598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x18159c: 0x100b02d
    ctx->pc = 0x18159cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815a0: 0xffb00000
    ctx->pc = 0x1815a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1815a4: 0x34428001
    ctx->pc = 0x1815a4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32769));
    // 0x1815a8: 0x1140001f
    ctx->pc = 0x1815A8u;
    {
        const bool branch_taken_0x1815a8 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x1815ACu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        if (branch_taken_0x1815a8) {
            ctx->pc = 0x181628u;
            goto label_181628;
        }
    }
    ctx->pc = 0x1815B0u;
    // 0x1815b0: 0xc061e90
    ctx->pc = 0x1815B0u;
    SET_GPR_U32(ctx, 31, 0x1815B8u);
    ctx->pc = 0x187A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187A40_0x187a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815B8u; }
    }
    if (ctx->pc != 0x1815B8u) { return; }
    ctx->pc = 0x1815B8u;
    // 0x1815b8: 0x3c030028
    ctx->pc = 0x1815b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)40 << 16));
    // 0x1815bc: 0x14400004
    ctx->pc = 0x1815BCu;
    {
        const bool branch_taken_0x1815bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1815C0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294939904));
        if (branch_taken_0x1815bc) {
            ctx->pc = 0x1815D0u;
            goto label_1815d0;
        }
    }
    ctx->pc = 0x1815C4u;
    // 0x1815c4: 0x3c028101
    ctx->pc = 0x1815c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1815c8: 0x10000017
    ctx->pc = 0x1815C8u;
    {
        const bool branch_taken_0x1815c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1815CCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32770));
        if (branch_taken_0x1815c8) {
            ctx->pc = 0x181628u;
            goto label_181628;
        }
    }
    ctx->pc = 0x1815D0u;
label_1815d0:
    // 0x1815d0: 0x8e030004
    ctx->pc = 0x1815d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1815d4: 0x3c028101
    ctx->pc = 0x1815d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1815d8: 0x14600013
    ctx->pc = 0x1815D8u;
    {
        const bool branch_taken_0x1815d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1815DCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x1815d8) {
            ctx->pc = 0x181628u;
            goto label_181628;
        }
    }
    ctx->pc = 0x1815E0u;
    // 0x1815e0: 0xc042c56
    ctx->pc = 0x1815E0u;
    SET_GPR_U32(ctx, 31, 0x1815E8u);
    ctx->pc = 0x1815E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815E8u; }
    }
    if (ctx->pc != 0x1815E8u) { return; }
    ctx->pc = 0x1815E8u;
    // 0x1815e8: 0x220282d
    ctx->pc = 0x1815e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815ec: 0x2c430080
    ctx->pc = 0x1815ecu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 128));
    // 0x1815f0: 0x3c028101
    ctx->pc = 0x1815f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1815f4: 0x2604041c
    ctx->pc = 0x1815f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1052));
    // 0x1815f8: 0x1060000b
    ctx->pc = 0x1815F8u;
    {
        const bool branch_taken_0x1815f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1815FCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 91));
        if (branch_taken_0x1815f8) {
            ctx->pc = 0x181628u;
            goto label_181628;
        }
    }
    ctx->pc = 0x181600u;
    // 0x181600: 0x2402000a
    ctx->pc = 0x181600u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x181604: 0xae120000
    ctx->pc = 0x181604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x181608: 0xc042bf0
    ctx->pc = 0x181608u;
    SET_GPR_U32(ctx, 31, 0x181610u);
    ctx->pc = 0x18160Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181610u; }
    }
    if (ctx->pc != 0x181610u) { return; }
    ctx->pc = 0x181610u;
    // 0x181610: 0xae14000c
    ctx->pc = 0x181610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x181614: 0xae130018
    ctx->pc = 0x181614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x181618: 0xae150010
    ctx->pc = 0x181618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
    // 0x18161c: 0xc062228
    ctx->pc = 0x18161Cu;
    SET_GPR_U32(ctx, 31, 0x181624u);
    ctx->pc = 0x181620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 22));
    ctx->pc = 0x1888A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001888A0_0x1888a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181624u; }
    }
    if (ctx->pc != 0x181624u) { return; }
    ctx->pc = 0x181624u;
    // 0x181624: 0x102d
    ctx->pc = 0x181624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181628:
    // 0x181628: 0xdfb00000
    ctx->pc = 0x181628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18162c: 0xdfb10008
    ctx->pc = 0x18162cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181630: 0xdfb20010
    ctx->pc = 0x181630u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181634: 0xdfb30018
    ctx->pc = 0x181634u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x181638: 0xdfb40020
    ctx->pc = 0x181638u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18163c: 0xdfb50028
    ctx->pc = 0x18163cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x181640: 0xdfb60030
    ctx->pc = 0x181640u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181644: 0xdfbf0038
    ctx->pc = 0x181644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x181648: 0x3e00008
    ctx->pc = 0x181648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18164Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1815D0u: goto label_1815d0;
            case 0x181628u: goto label_181628;
            default: break;
        }
        return;
    }
    ctx->pc = 0x181650u;
}
