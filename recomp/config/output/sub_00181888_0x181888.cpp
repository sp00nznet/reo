#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00181888
// Address: 0x181888 - 0x181970
void sub_00181888_0x181888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x181888u;

    // 0x181888: 0x3c030023
    ctx->pc = 0x181888u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x18188c: 0x27bdffd0
    ctx->pc = 0x18188cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x181890: 0x8c67fa10
    ctx->pc = 0x181890u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 4294965776)));
    // 0x181894: 0x3c028101
    ctx->pc = 0x181894u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181898: 0xffb10008
    ctx->pc = 0x181898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18189c: 0xa0882d
    ctx->pc = 0x18189cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1818a0: 0xffb20010
    ctx->pc = 0x1818a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1818a4: 0xc0902d
    ctx->pc = 0x1818a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1818a8: 0xffb30018
    ctx->pc = 0x1818a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1818ac: 0x80982d
    ctx->pc = 0x1818acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1818b0: 0xffb00000
    ctx->pc = 0x1818b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1818b4: 0x34428001
    ctx->pc = 0x1818b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32769));
    // 0x1818b8: 0x10e00026
    ctx->pc = 0x1818B8u;
    {
        const bool branch_taken_0x1818b8 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x1818BCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        if (branch_taken_0x1818b8) {
            ctx->pc = 0x181954u;
            goto label_181954;
        }
    }
    ctx->pc = 0x1818C0u;
    // 0x1818c0: 0xc061e90
    ctx->pc = 0x1818C0u;
    SET_GPR_U32(ctx, 31, 0x1818C8u);
    ctx->pc = 0x187A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187A40_0x187a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1818C8u; }
    }
    if (ctx->pc != 0x1818C8u) { return; }
    ctx->pc = 0x1818C8u;
    // 0x1818c8: 0x3c030028
    ctx->pc = 0x1818c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)40 << 16));
    // 0x1818cc: 0x14400004
    ctx->pc = 0x1818CCu;
    {
        const bool branch_taken_0x1818cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1818D0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294939904));
        if (branch_taken_0x1818cc) {
            ctx->pc = 0x1818E0u;
            goto label_1818e0;
        }
    }
    ctx->pc = 0x1818D4u;
    // 0x1818d4: 0x3c028101
    ctx->pc = 0x1818d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1818d8: 0x1000001e
    ctx->pc = 0x1818D8u;
    {
        const bool branch_taken_0x1818d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1818DCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32770));
        if (branch_taken_0x1818d8) {
            ctx->pc = 0x181954u;
            goto label_181954;
        }
    }
    ctx->pc = 0x1818E0u;
label_1818e0:
    // 0x1818e0: 0x8e030004
    ctx->pc = 0x1818e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1818e4: 0x3c028101
    ctx->pc = 0x1818e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1818e8: 0x1460001a
    ctx->pc = 0x1818E8u;
    {
        const bool branch_taken_0x1818e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1818ECu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x1818e8) {
            ctx->pc = 0x181954u;
            goto label_181954;
        }
    }
    ctx->pc = 0x1818F0u;
    // 0x1818f0: 0xc042c56
    ctx->pc = 0x1818F0u;
    SET_GPR_U32(ctx, 31, 0x1818F8u);
    ctx->pc = 0x1818F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1818F8u; }
    }
    if (ctx->pc != 0x1818F8u) { return; }
    ctx->pc = 0x1818F8u;
    // 0x1818f8: 0x240202d
    ctx->pc = 0x1818f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1818fc: 0x2c430080
    ctx->pc = 0x1818fcu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 128));
    // 0x181900: 0x3c028101
    ctx->pc = 0x181900u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181904: 0x10600013
    ctx->pc = 0x181904u;
    {
        const bool branch_taken_0x181904 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x181908u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 91));
        if (branch_taken_0x181904) {
            ctx->pc = 0x181954u;
            goto label_181954;
        }
    }
    ctx->pc = 0x18190Cu;
    // 0x18190c: 0xc042c56
    ctx->pc = 0x18190Cu;
    SET_GPR_U32(ctx, 31, 0x181914u);
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181914u; }
    }
    if (ctx->pc != 0x181914u) { return; }
    ctx->pc = 0x181914u;
    // 0x181914: 0x220282d
    ctx->pc = 0x181914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181918: 0x2c430080
    ctx->pc = 0x181918u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 128));
    // 0x18191c: 0x3c028101
    ctx->pc = 0x18191cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181920: 0x3442005b
    ctx->pc = 0x181920u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 91));
    // 0x181924: 0x1060000b
    ctx->pc = 0x181924u;
    {
        const bool branch_taken_0x181924 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x181928u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1052));
        if (branch_taken_0x181924) {
            ctx->pc = 0x181954u;
            goto label_181954;
        }
    }
    ctx->pc = 0x18192Cu;
    // 0x18192c: 0x24020009
    ctx->pc = 0x18192cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x181930: 0xae130000
    ctx->pc = 0x181930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x181934: 0xc042bf0
    ctx->pc = 0x181934u;
    SET_GPR_U32(ctx, 31, 0x18193Cu);
    ctx->pc = 0x181938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18193Cu; }
    }
    if (ctx->pc != 0x18193Cu) { return; }
    ctx->pc = 0x18193Cu;
    // 0x18193c: 0x2604049c
    ctx->pc = 0x18193cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1180));
    // 0x181940: 0xc042bf0
    ctx->pc = 0x181940u;
    SET_GPR_U32(ctx, 31, 0x181948u);
    ctx->pc = 0x181944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181948u; }
    }
    if (ctx->pc != 0x181948u) { return; }
    ctx->pc = 0x181948u;
    // 0x181948: 0xc062228
    ctx->pc = 0x181948u;
    SET_GPR_U32(ctx, 31, 0x181950u);
    ctx->pc = 0x1888A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001888A0_0x1888a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181950u; }
    }
    if (ctx->pc != 0x181950u) { return; }
    ctx->pc = 0x181950u;
    // 0x181950: 0x102d
    ctx->pc = 0x181950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181954:
    // 0x181954: 0xdfb00000
    ctx->pc = 0x181954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181958: 0xdfb10008
    ctx->pc = 0x181958u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18195c: 0xdfb20010
    ctx->pc = 0x18195cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181960: 0xdfb30018
    ctx->pc = 0x181960u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x181964: 0xdfbf0020
    ctx->pc = 0x181964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181968: 0x3e00008
    ctx->pc = 0x181968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18196Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1818E0u: goto label_1818e0;
            case 0x181954u: goto label_181954;
            default: break;
        }
        return;
    }
    ctx->pc = 0x181970u;
}
