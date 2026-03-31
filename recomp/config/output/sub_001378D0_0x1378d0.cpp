#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001378D0
// Address: 0x1378d0 - 0x1379d0
void sub_001378D0_0x1378d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1378d0u;

    // 0x1378d0: 0x27bdffe0
    ctx->pc = 0x1378d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1378d4: 0x3c030022
    ctx->pc = 0x1378d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x1378d8: 0xffb10008
    ctx->pc = 0x1378d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1378dc: 0x80882d
    ctx->pc = 0x1378dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1378e0: 0xffb00000
    ctx->pc = 0x1378e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1378e4: 0x2463bbd4
    ctx->pc = 0x1378e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294949844));
    // 0x1378e8: 0xffb20010
    ctx->pc = 0x1378e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1378ec: 0x102d
    ctx->pc = 0x1378ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1378f0: 0xffbf0018
    ctx->pc = 0x1378f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1378f4: 0x8c640000
    ctx->pc = 0x1378f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1378f8: 0x1080002e
    ctx->pc = 0x1378F8u;
    {
        const bool branch_taken_0x1378f8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1378FCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1378f8) {
            ctx->pc = 0x1379B4u;
            goto label_1379b4;
        }
    }
    ctx->pc = 0x137900u;
    // 0x137900: 0x82240002
    ctx->pc = 0x137900u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x137904: 0x5483002c
    ctx->pc = 0x137904u;
    {
        const bool branch_taken_0x137904 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x137904) {
            ctx->pc = 0x137908u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1379B8u;
            goto label_1379b8;
        }
    }
    ctx->pc = 0x13790Cu;
    // 0x13790c: 0x3c120022
    ctx->pc = 0x13790cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)34 << 16));
    // 0x137910: 0x24050001
    ctx->pc = 0x137910u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x137914: 0x2644bbdc
    ctx->pc = 0x137914u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 4294949852));
    // 0x137918: 0x3c020022
    ctx->pc = 0x137918u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13791c: 0xac850000
    ctx->pc = 0x13791cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x137920: 0x2442bbd0
    ctx->pc = 0x137920u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949840));
    // 0x137924: 0x8c430000
    ctx->pc = 0x137924u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137928: 0x1465000f
    ctx->pc = 0x137928u;
    {
        const bool branch_taken_0x137928 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        if (branch_taken_0x137928) {
            ctx->pc = 0x137968u;
            goto label_137968;
        }
    }
    ctx->pc = 0x137930u;
    // 0x137930: 0xc0505cc
    ctx->pc = 0x137930u;
    SET_GPR_U32(ctx, 31, 0x137938u);
    ctx->pc = 0x141730u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141730_0x141730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137938u; }
    }
    if (ctx->pc != 0x137938u) { return; }
    ctx->pc = 0x137938u;
    // 0x137938: 0xc04e082
    ctx->pc = 0x137938u;
    SET_GPR_U32(ctx, 31, 0x137940u);
    ctx->pc = 0x13793Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5120));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137940u; }
    }
    if (ctx->pc != 0x137940u) { return; }
    ctx->pc = 0x137940u;
    // 0x137940: 0xc0406ba
    ctx->pc = 0x137940u;
    SET_GPR_U32(ctx, 31, 0x137948u);
    ctx->pc = 0x101AE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00101AE8_0x101ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137948u; }
    }
    if (ctx->pc != 0x137948u) { return; }
    ctx->pc = 0x137948u;
    // 0x137948: 0x24041401
    ctx->pc = 0x137948u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5121));
    // 0x13794c: 0xc04e082
    ctx->pc = 0x13794Cu;
    SET_GPR_U32(ctx, 31, 0x137954u);
    ctx->pc = 0x137950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137954u; }
    }
    if (ctx->pc != 0x137954u) { return; }
    ctx->pc = 0x137954u;
    // 0x137954: 0xc0505ea
    ctx->pc = 0x137954u;
    SET_GPR_U32(ctx, 31, 0x13795Cu);
    ctx->pc = 0x1417A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001417A8_0x1417a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13795Cu; }
    }
    if (ctx->pc != 0x13795Cu) { return; }
    ctx->pc = 0x13795Cu;
    // 0x13795c: 0x1000000a
    ctx->pc = 0x13795Cu;
    {
        const bool branch_taken_0x13795c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x137960u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x13795c) {
            ctx->pc = 0x137988u;
            goto label_137988;
        }
    }
    ctx->pc = 0x137964u;
    // 0x137964: 0x0
    ctx->pc = 0x137964u;
    // NOP
label_137968:
    // 0x137968: 0xc04e082
    ctx->pc = 0x137968u;
    SET_GPR_U32(ctx, 31, 0x137970u);
    ctx->pc = 0x13796Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5376));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137970u; }
    }
    if (ctx->pc != 0x137970u) { return; }
    ctx->pc = 0x137970u;
    // 0x137970: 0xc0406ba
    ctx->pc = 0x137970u;
    SET_GPR_U32(ctx, 31, 0x137978u);
    ctx->pc = 0x101AE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00101AE8_0x101ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137978u; }
    }
    if (ctx->pc != 0x137978u) { return; }
    ctx->pc = 0x137978u;
    // 0x137978: 0x24041501
    ctx->pc = 0x137978u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5377));
    // 0x13797c: 0xc04e082
    ctx->pc = 0x13797Cu;
    SET_GPR_U32(ctx, 31, 0x137984u);
    ctx->pc = 0x137980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137984u; }
    }
    if (ctx->pc != 0x137984u) { return; }
    ctx->pc = 0x137984u;
    // 0x137984: 0x26020001
    ctx->pc = 0x137984u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
label_137988:
    // 0x137988: 0x2643bbdc
    ctx->pc = 0x137988u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 4294949852));
    // 0x13798c: 0x2c420002
    ctx->pc = 0x13798cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x137990: 0xac600000
    ctx->pc = 0x137990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x137994: 0x54400007
    ctx->pc = 0x137994u;
    {
        const bool branch_taken_0x137994 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x137994) {
            ctx->pc = 0x137998u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x1379B4u;
            goto label_1379b4;
        }
    }
    ctx->pc = 0x13799Cu;
    // 0x13799c: 0xae300034
    ctx->pc = 0x13799cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x1379a0: 0x3c040024
    ctx->pc = 0x1379a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1379a4: 0x200282d
    ctx->pc = 0x1379a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1379a8: 0xc045a12
    ctx->pc = 0x1379A8u;
    SET_GPR_U32(ctx, 31, 0x1379B0u);
    ctx->pc = 0x1379ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952224));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1379B0u; }
    }
    if (ctx->pc != 0x1379B0u) { return; }
    ctx->pc = 0x1379B0u;
    // 0x1379b0: 0x24020001
    ctx->pc = 0x1379b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1379b4:
    // 0x1379b4: 0xdfb00000
    ctx->pc = 0x1379b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1379b8:
    // 0x1379b8: 0xdfb10008
    ctx->pc = 0x1379b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1379bc: 0xdfb20010
    ctx->pc = 0x1379bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1379c0: 0xdfbf0018
    ctx->pc = 0x1379c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1379c4: 0x3e00008
    ctx->pc = 0x1379C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1379C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x137968u: goto label_137968;
            case 0x137988u: goto label_137988;
            case 0x1379B4u: goto label_1379b4;
            case 0x1379B8u: goto label_1379b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1379CCu;
    // 0x1379cc: 0x0
    ctx->pc = 0x1379ccu;
    // NOP
}
