#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018F880
// Address: 0x18f880 - 0x18f970
void sub_0018F880_0x18f880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18f880u;

    // 0x18f880: 0x27bdffb0
    ctx->pc = 0x18f880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18f884: 0x3c017000
    ctx->pc = 0x18f884u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x18f888: 0xffbf0040
    ctx->pc = 0x18f888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18f88c: 0x41180
    ctx->pc = 0x18f88cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 6));
    // 0x18f890: 0x7fb30030
    ctx->pc = 0x18f890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18f894: 0x34213700
    ctx->pc = 0x18f894u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 14080));
    // 0x18f898: 0x7fb20020
    ctx->pc = 0x18f898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18f89c: 0xa0982d
    ctx->pc = 0x18f89cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f8a0: 0x7fb10010
    ctx->pc = 0x18f8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f8a4: 0xc0902d
    ctx->pc = 0x18f8a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f8a8: 0x7fb00000
    ctx->pc = 0x18f8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f8ac: 0xe0882d
    ctx->pc = 0x18f8acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f8b0: 0x100802d
    ctx->pc = 0x18f8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f8b4: 0xc063e5c
    ctx->pc = 0x18F8B4u;
    SET_GPR_U32(ctx, 31, 0x18F8BCu);
    ctx->pc = 0x18F8B8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->pc = 0x18F970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F970_0x18f970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F8BCu; }
    }
    if (ctx->pc != 0x18F8BCu) { return; }
    ctx->pc = 0x18F8BCu;
    // 0x18f8bc: 0x3c027000
    ctx->pc = 0x18f8bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
    // 0x18f8c0: 0xc063df8
    ctx->pc = 0x18F8C0u;
    SET_GPR_U32(ctx, 31, 0x18F8C8u);
    ctx->pc = 0x18F8C4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 16128));
    ctx->pc = 0x18F7E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F7E0_0x18f7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F8C8u; }
    }
    if (ctx->pc != 0x18F8C8u) { return; }
    ctx->pc = 0x18F8C8u;
    // 0x18f8c8: 0x3c027000
    ctx->pc = 0x18f8c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
    // 0x18f8cc: 0x3c040029
    ctx->pc = 0x18f8ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
    // 0x18f8d0: 0x24844d40
    ctx->pc = 0x18f8d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19776));
    // 0x18f8d4: 0x34453f00
    ctx->pc = 0x18f8d4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 16128));
    // 0x18f8d8: 0xc0644a0
    ctx->pc = 0x18F8D8u;
    SET_GPR_U32(ctx, 31, 0x18F8E0u);
    ctx->pc = 0x18F8DCu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 16256));
    ctx->pc = 0x191280u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191280_0x191280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F8E0u; }
    }
    if (ctx->pc != 0x18F8E0u) { return; }
    ctx->pc = 0x18F8E0u;
    // 0x18f8e0: 0x3c040029
    ctx->pc = 0x18f8e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
    // 0x18f8e4: 0x3c027000
    ctx->pc = 0x18f8e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
    // 0x18f8e8: 0x3c060029
    ctx->pc = 0x18f8e8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)41 << 16));
    // 0x18f8ec: 0x24844d80
    ctx->pc = 0x18f8ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19840));
    // 0x18f8f0: 0x34453f00
    ctx->pc = 0x18f8f0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 16128));
    // 0x18f8f4: 0xc0644a0
    ctx->pc = 0x18F8F4u;
    SET_GPR_U32(ctx, 31, 0x18F8FCu);
    ctx->pc = 0x18F8F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 19904));
    ctx->pc = 0x191280u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191280_0x191280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F8FCu; }
    }
    if (ctx->pc != 0x18F8FCu) { return; }
    ctx->pc = 0x18F8FCu;
    // 0x18f8fc: 0x3c01002a
    ctx->pc = 0x18f8fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x18f900: 0x8c22f9b4
    ctx->pc = 0x18f900u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294965684)));
    // 0x18f904: 0x1440000c
    ctx->pc = 0x18F904u;
    {
        const bool branch_taken_0x18f904 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18F908u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18f904) {
            ctx->pc = 0x18F938u;
            goto label_18f938;
        }
    }
    ctx->pc = 0x18F90Cu;
    // 0x18f90c: 0x6410003
    ctx->pc = 0x18F90Cu;
    {
        const bool branch_taken_0x18f90c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x18F910u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
        if (branch_taken_0x18f90c) {
            ctx->pc = 0x18F91Cu;
            goto label_18f91c;
        }
    }
    ctx->pc = 0x18F914u;
    // 0x18f914: 0x26420001
    ctx->pc = 0x18f914u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 1));
    // 0x18f918: 0x21043
    ctx->pc = 0x18f918u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_18f91c:
    // 0x18f91c: 0x40902d
    ctx->pc = 0x18f91cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f920: 0x6010003
    ctx->pc = 0x18F920u;
    {
        const bool branch_taken_0x18f920 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x18F924u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
        if (branch_taken_0x18f920) {
            ctx->pc = 0x18F930u;
            goto label_18f930;
        }
    }
    ctx->pc = 0x18F928u;
    // 0x18f928: 0x26020001
    ctx->pc = 0x18f928u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
    // 0x18f92c: 0x21043
    ctx->pc = 0x18f92cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_18f930:
    // 0x18f930: 0x40802d
    ctx->pc = 0x18f930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f934: 0x260202d
    ctx->pc = 0x18f934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18f938:
    // 0x18f938: 0x240282d
    ctx->pc = 0x18f938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f93c: 0x220302d
    ctx->pc = 0x18f93cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f940: 0x200382d
    ctx->pc = 0x18f940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f944: 0xc065d24
    ctx->pc = 0x18F944u;
    SET_GPR_U32(ctx, 31, 0x18F94Cu);
    ctx->pc = 0x18F948u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x197490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00197490_0x197490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F94Cu; }
    }
    if (ctx->pc != 0x18F94Cu) { return; }
    ctx->pc = 0x18F94Cu;
    // 0x18f94c: 0xdfbf0040
    ctx->pc = 0x18f94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f950: 0x7bb30030
    ctx->pc = 0x18f950u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f954: 0x7bb20020
    ctx->pc = 0x18f954u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f958: 0x7bb10010
    ctx->pc = 0x18f958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f95c: 0x7bb00000
    ctx->pc = 0x18f95cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f960: 0x3e00008
    ctx->pc = 0x18F960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F964u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F91Cu: goto label_18f91c;
            case 0x18F930u: goto label_18f930;
            case 0x18F938u: goto label_18f938;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18F968u;
    // 0x18f968: 0x0
    ctx->pc = 0x18f968u;
    // NOP
    // 0x18f96c: 0x0
    ctx->pc = 0x18f96cu;
    // NOP
}
