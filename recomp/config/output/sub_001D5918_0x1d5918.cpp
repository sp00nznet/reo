#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D5918
// Address: 0x1d5918 - 0x1d59c8
void sub_001D5918_0x1d5918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d5918u;

    // 0x1d5918: 0x27bdffd0
    ctx->pc = 0x1d5918u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d591c: 0x80182d
    ctx->pc = 0x1d591cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5920: 0xffb10010
    ctx->pc = 0x1d5920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1d5924: 0x2402ffff
    ctx->pc = 0x1d5924u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5928: 0x3c110023
    ctx->pc = 0x1d5928u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x1d592c: 0xffb00000
    ctx->pc = 0x1d592cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5930: 0x8e246998
    ctx->pc = 0x1d5930u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 27032)));
    // 0x1d5934: 0xa0802d
    ctx->pc = 0x1d5934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5938: 0x1082001a
    ctx->pc = 0x1D5938u;
    {
        const bool branch_taken_0x1d5938 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D593Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        if (branch_taken_0x1d5938) {
            ctx->pc = 0x1D59A4u;
            goto label_1d59a4;
        }
    }
    ctx->pc = 0x1D5940u;
    // 0x1d5940: 0x10600006
    ctx->pc = 0x1D5940u;
    {
        const bool branch_taken_0x1d5940 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d5940) {
            ctx->pc = 0x1D595Cu;
            goto label_1d595c;
        }
    }
    ctx->pc = 0x1D5948u;
    // 0x1d5948: 0x24020001
    ctx->pc = 0x1d5948u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d594c: 0x1062000c
    ctx->pc = 0x1D594Cu;
    {
        const bool branch_taken_0x1d594c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D5950u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x1d594c) {
            ctx->pc = 0x1D5980u;
            goto label_1d5980;
        }
    }
    ctx->pc = 0x1D5954u;
    // 0x1d5954: 0x10000014
    ctx->pc = 0x1D5954u;
    {
        const bool branch_taken_0x1d5954 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5958u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1d5954) {
            ctx->pc = 0x1D59A8u;
            goto label_1d59a8;
        }
    }
    ctx->pc = 0x1D595Cu;
label_1d595c:
    // 0x1d595c: 0xc045198
    ctx->pc = 0x1D595Cu;
    SET_GPR_U32(ctx, 31, 0x1D5964u);
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5964u; }
    }
    if (ctx->pc != 0x1D5964u) { return; }
    ctx->pc = 0x1D5964u;
    // 0x1d5964: 0xc075672
    ctx->pc = 0x1D5964u;
    SET_GPR_U32(ctx, 31, 0x1D596Cu);
    ctx->pc = 0x1D59C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D59C8_0x1d59c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D596Cu; }
    }
    if (ctx->pc != 0x1D596Cu) { return; }
    ctx->pc = 0x1D596Cu;
    // 0x1d596c: 0xae020000
    ctx->pc = 0x1d596cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d5970: 0xc045190
    ctx->pc = 0x1D5970u;
    SET_GPR_U32(ctx, 31, 0x1D5978u);
    ctx->pc = 0x1D5974u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 27032)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5978u; }
    }
    if (ctx->pc != 0x1D5978u) { return; }
    ctx->pc = 0x1D5978u;
    // 0x1d5978: 0x1000000a
    ctx->pc = 0x1D5978u;
    {
        const bool branch_taken_0x1d5978 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D597Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d5978) {
            ctx->pc = 0x1D59A4u;
            goto label_1d59a4;
        }
    }
    ctx->pc = 0x1D5980u;
label_1d5980:
    // 0x1d5980: 0x3c040034
    ctx->pc = 0x1d5980u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1d5984: 0xc045ef8
    ctx->pc = 0x1D5984u;
    SET_GPR_U32(ctx, 31, 0x1D598Cu);
    ctx->pc = 0x1D5988u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10464));
    ctx->pc = 0x117BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117BE0_0x117be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D598Cu; }
    }
    if (ctx->pc != 0x1D598Cu) { return; }
    ctx->pc = 0x1D598Cu;
    // 0x1d598c: 0x54400005
    ctx->pc = 0x1D598Cu;
    {
        const bool branch_taken_0x1d598c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d598c) {
            ctx->pc = 0x1D5990u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x1D59A4u;
            goto label_1d59a4;
        }
    }
    ctx->pc = 0x1D5994u;
    // 0x1d5994: 0xc075672
    ctx->pc = 0x1D5994u;
    SET_GPR_U32(ctx, 31, 0x1D599Cu);
    ctx->pc = 0x1D59C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D59C8_0x1d59c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D599Cu; }
    }
    if (ctx->pc != 0x1D599Cu) { return; }
    ctx->pc = 0x1D599Cu;
    // 0x1d599c: 0xae020000
    ctx->pc = 0x1d599cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d59a0: 0x102d
    ctx->pc = 0x1d59a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d59a4:
    // 0x1d59a4: 0xdfbf0020
    ctx->pc = 0x1d59a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d59a8:
    // 0x1d59a8: 0xdfb10010
    ctx->pc = 0x1d59a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d59ac: 0xdfb00000
    ctx->pc = 0x1d59acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d59b0: 0x3e00008
    ctx->pc = 0x1D59B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D59B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D595Cu: goto label_1d595c;
            case 0x1D5980u: goto label_1d5980;
            case 0x1D59A4u: goto label_1d59a4;
            case 0x1D59A8u: goto label_1d59a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D59B8u;
    // 0x1d59b8: 0x3c020023
    ctx->pc = 0x1d59b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1d59bc: 0x8045194
    ctx->pc = 0x1D59BCu;
    ctx->pc = 0x1D59C0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 27032)));
    ctx->pc = 0x114650u;
    sub_00114650_0x114650(rdram, ctx, runtime); return;
    ctx->pc = 0x1D59C4u;
    // 0x1d59c4: 0x0
    ctx->pc = 0x1d59c4u;
    // NOP
}
