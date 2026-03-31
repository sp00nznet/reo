#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F5F70
// Address: 0x1f5f70 - 0x1f6350
void sub_001F5F70_0x1f5f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f5f70u;

    // 0x1f5f70: 0x27bdffe0
    ctx->pc = 0x1f5f70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f5f74: 0x3c010036
    ctx->pc = 0x1f5f74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f5f78: 0xffbf0010
    ctx->pc = 0x1f5f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f5f7c: 0x7fb00000
    ctx->pc = 0x1f5f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f5f80: 0x8c22eaf0
    ctx->pc = 0x1f5f80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294961904)));
    // 0x1f5f84: 0x10400043
    ctx->pc = 0x1F5F84u;
    {
        const bool branch_taken_0x1f5f84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F5F88u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f5f84) {
            ctx->pc = 0x1F6094u;
            goto label_1f6094;
        }
    }
    ctx->pc = 0x1F5F8Cu;
    // 0x1f5f8c: 0xae00006c
    ctx->pc = 0x1f5f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x1f5f90: 0x3c010035
    ctx->pc = 0x1f5f90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1f5f94: 0x8c2257c8
    ctx->pc = 0x1f5f94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 22472)));
    // 0x1f5f98: 0x1440000a
    ctx->pc = 0x1F5F98u;
    {
        const bool branch_taken_0x1f5f98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f5f98) {
            ctx->pc = 0x1F5FC4u;
            goto label_1f5fc4;
        }
    }
    ctx->pc = 0x1F5FA0u;
    // 0x1f5fa0: 0x3c040036
    ctx->pc = 0x1f5fa0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
    // 0x1f5fa4: 0x3c050026
    ctx->pc = 0x1f5fa4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
    // 0x1f5fa8: 0x2484ead0
    ctx->pc = 0x1f5fa8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961872));
    // 0x1f5fac: 0xc042bf0
    ctx->pc = 0x1F5FACu;
    SET_GPR_U32(ctx, 31, 0x1F5FB4u);
    ctx->pc = 0x1F5FB0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941472));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5FB4u; }
    }
    if (ctx->pc != 0x1F5FB4u) { return; }
    ctx->pc = 0x1F5FB4u;
    // 0x1f5fb4: 0x3c020036
    ctx->pc = 0x1f5fb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x1f5fb8: 0x3c010035
    ctx->pc = 0x1f5fb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1f5fbc: 0x2442ead0
    ctx->pc = 0x1f5fbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961872));
    // 0x1f5fc0: 0xac2257c8
    ctx->pc = 0x1f5fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 22472), GPR_U32(ctx, 2));
label_1f5fc4:
    // 0x1f5fc4: 0x3c010035
    ctx->pc = 0x1f5fc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1f5fc8: 0x8c2257c0
    ctx->pc = 0x1f5fc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 22464)));
    // 0x1f5fcc: 0x14400005
    ctx->pc = 0x1F5FCCu;
    {
        const bool branch_taken_0x1f5fcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f5fcc) {
            ctx->pc = 0x1F5FE4u;
            goto label_1f5fe4;
        }
    }
    ctx->pc = 0x1F5FD4u;
    // 0x1f5fd4: 0x3c020036
    ctx->pc = 0x1f5fd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x1f5fd8: 0x3c010035
    ctx->pc = 0x1f5fd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1f5fdc: 0x2442dad0
    ctx->pc = 0x1f5fdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957776));
    // 0x1f5fe0: 0xac2257c0
    ctx->pc = 0x1f5fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 22464), GPR_U32(ctx, 2));
label_1f5fe4:
    // 0x1f5fe4: 0x3c010035
    ctx->pc = 0x1f5fe4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1f5fe8: 0x8c2257c8
    ctx->pc = 0x1f5fe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 22472)));
    // 0x1f5fec: 0xae020070
    ctx->pc = 0x1f5fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x1f5ff0: 0xc042c56
    ctx->pc = 0x1F5FF0u;
    SET_GPR_U32(ctx, 31, 0x1F5FF8u);
    ctx->pc = 0x1F5FF4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5FF8u; }
    }
    if (ctx->pc != 0x1F5FF8u) { return; }
    ctx->pc = 0x1F5FF8u;
    // 0x1f5ff8: 0xae020074
    ctx->pc = 0x1f5ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x1f5ffc: 0x200202d
    ctx->pc = 0x1f5ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6000: 0x24050011
    ctx->pc = 0x1f6000u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 17));
    // 0x1f6004: 0x24060001
    ctx->pc = 0x1f6004u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6008: 0xc07d284
    ctx->pc = 0x1F6008u;
    SET_GPR_U32(ctx, 31, 0x1F6010u);
    ctx->pc = 0x1F600Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4A10_0x1f4a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6010u; }
    }
    if (ctx->pc != 0x1F6010u) { return; }
    ctx->pc = 0x1F6010u;
    // 0x1f6010: 0x8e05006c
    ctx->pc = 0x1f6010u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1f6014: 0xc07d308
    ctx->pc = 0x1F6014u;
    SET_GPR_U32(ctx, 31, 0x1F601Cu);
    ctx->pc = 0x1F6018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4C20_0x1f4c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F601Cu; }
    }
    if (ctx->pc != 0x1F601Cu) { return; }
    ctx->pc = 0x1F601Cu;
    // 0x1f601c: 0xc042c56
    ctx->pc = 0x1F601Cu;
    SET_GPR_U32(ctx, 31, 0x1F6024u);
    ctx->pc = 0x1F6020u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6024u; }
    }
    if (ctx->pc != 0x1F6024u) { return; }
    ctx->pc = 0x1F6024u;
    // 0x1f6024: 0x8e050070
    ctx->pc = 0x1f6024u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1f6028: 0x40302d
    ctx->pc = 0x1f6028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f602c: 0xc07d330
    ctx->pc = 0x1F602Cu;
    SET_GPR_U32(ctx, 31, 0x1F6034u);
    ctx->pc = 0x1F6030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F4CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4CC0_0x1f4cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6034u; }
    }
    if (ctx->pc != 0x1F6034u) { return; }
    ctx->pc = 0x1F6034u;
    // 0x1f6034: 0x9603002c
    ctx->pc = 0x1f6034u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1f6038: 0x8e02001c
    ctx->pc = 0x1f6038u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f603c: 0x32200
    ctx->pc = 0x1f603cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1f6040: 0x31a03
    ctx->pc = 0x1f6040u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1f6044: 0x3084ff00
    ctx->pc = 0x1f6044u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65280));
    // 0x1f6048: 0x306300ff
    ctx->pc = 0x1f6048u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x1f604c: 0x831825
    ctx->pc = 0x1f604cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f6050: 0xa4430000
    ctx->pc = 0x1f6050u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f6054: 0x8e02002c
    ctx->pc = 0x1f6054u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1f6058: 0x8e040010
    ctx->pc = 0x1f6058u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f605c: 0x8e05001c
    ctx->pc = 0x1f605cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f6060: 0x24420008
    ctx->pc = 0x1f6060u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f6064: 0x2343c
    ctx->pc = 0x1f6064u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f6068: 0xc075aa4
    ctx->pc = 0x1F6068u;
    SET_GPR_U32(ctx, 31, 0x1F6070u);
    ctx->pc = 0x1F606Cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->pc = 0x1D6A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6A90_0x1d6a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6070u; }
    }
    if (ctx->pc != 0x1F6070u) { return; }
    ctx->pc = 0x1F6070u;
    // 0x1f6070: 0xc07d16c
    ctx->pc = 0x1F6070u;
    SET_GPR_U32(ctx, 31, 0x1F6078u);
    ctx->pc = 0x1F6074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1F45B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F45B0_0x1f45b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6078u; }
    }
    if (ctx->pc != 0x1F6078u) { return; }
    ctx->pc = 0x1F6078u;
    // 0x1f6078: 0x2841ffff
    ctx->pc = 0x1f6078u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 4294967295));
    // 0x1f607c: 0x10200003
    ctx->pc = 0x1F607Cu;
    {
        const bool branch_taken_0x1f607c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f607c) {
            ctx->pc = 0x1F608Cu;
            goto label_1f608c;
        }
    }
    ctx->pc = 0x1F6084u;
    // 0x1f6084: 0x10000005
    ctx->pc = 0x1F6084u;
    {
        const bool branch_taken_0x1f6084 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6088u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1f6084) {
            ctx->pc = 0x1F609Cu;
            goto label_1f609c;
        }
    }
    ctx->pc = 0x1F608Cu;
label_1f608c:
    // 0x1f608c: 0x2402000d
    ctx->pc = 0x1f608cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1f6090: 0xa2020001
    ctx->pc = 0x1f6090u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1f6094:
    // 0x1f6094: 0x102d
    ctx->pc = 0x1f6094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6098: 0xdfbf0010
    ctx->pc = 0x1f6098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f609c:
    // 0x1f609c: 0x7bb00000
    ctx->pc = 0x1f609cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f60a0: 0x3e00008
    ctx->pc = 0x1F60A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F60A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F5FC4u: goto label_1f5fc4;
            case 0x1F5FE4u: goto label_1f5fe4;
            case 0x1F608Cu: goto label_1f608c;
            case 0x1F6094u: goto label_1f6094;
            case 0x1F609Cu: goto label_1f609c;
            case 0x1F6110u: goto label_1f6110;
            case 0x1F6140u: goto label_1f6140;
            case 0x1F618Cu: goto label_1f618c;
            case 0x1F61ACu: goto label_1f61ac;
            case 0x1F61D0u: goto label_1f61d0;
            case 0x1F61F4u: goto label_1f61f4;
            case 0x1F61FCu: goto label_1f61fc;
            case 0x1F6200u: goto label_1f6200;
            case 0x1F6248u: goto label_1f6248;
            case 0x1F6254u: goto label_1f6254;
            case 0x1F6294u: goto label_1f6294;
            case 0x1F62B8u: goto label_1f62b8;
            case 0x1F62CCu: goto label_1f62cc;
            case 0x1F6308u: goto label_1f6308;
            case 0x1F632Cu: goto label_1f632c;
            case 0x1F633Cu: goto label_1f633c;
            case 0x1F6340u: goto label_1f6340;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F60A8u;
    // 0x1f60a8: 0x0
    ctx->pc = 0x1f60a8u;
    // NOP
    // 0x1f60ac: 0x0
    ctx->pc = 0x1f60acu;
    // NOP
    // 0x1f60b0: 0x27bdffc0
    ctx->pc = 0x1f60b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f60b4: 0x3c010036
    ctx->pc = 0x1f60b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f60b8: 0xffbf0010
    ctx->pc = 0x1f60b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f60bc: 0x7fb00000
    ctx->pc = 0x1f60bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f60c0: 0x8c22eaf0
    ctx->pc = 0x1f60c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294961904)));
    // 0x1f60c4: 0x8c830024
    ctx->pc = 0x1f60c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1f60c8: 0x1040004c
    ctx->pc = 0x1F60C8u;
    {
        const bool branch_taken_0x1f60c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F60CCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f60c8) {
            ctx->pc = 0x1F61FCu;
            goto label_1f61fc;
        }
    }
    ctx->pc = 0x1F60D0u;
    // 0x1f60d0: 0x80630006
    ctx->pc = 0x1f60d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x1f60d4: 0x2402ffff
    ctx->pc = 0x1f60d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f60d8: 0x1462000d
    ctx->pc = 0x1F60D8u;
    {
        const bool branch_taken_0x1f60d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1F60DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x1f60d8) {
            ctx->pc = 0x1F6110u;
            goto label_1f6110;
        }
    }
    ctx->pc = 0x1F60E0u;
    // 0x1f60e0: 0x24030007
    ctx->pc = 0x1f60e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f60e4: 0xae02008c
    ctx->pc = 0x1f60e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x1f60e8: 0xa2030000
    ctx->pc = 0x1f60e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f60ec: 0x102d
    ctx->pc = 0x1f60ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f60f0: 0xa2000001
    ctx->pc = 0x1f60f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f60f4: 0xa2000002
    ctx->pc = 0x1f60f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f60f8: 0xa2000003
    ctx->pc = 0x1f60f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f60fc: 0xa6000004
    ctx->pc = 0x1f60fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6100: 0xa6000006
    ctx->pc = 0x1f6100u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6104: 0xa6000008
    ctx->pc = 0x1f6104u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6108: 0x1000003d
    ctx->pc = 0x1F6108u;
    {
        const bool branch_taken_0x1f6108 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F610Cu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1f6108) {
            ctx->pc = 0x1F6200u;
            goto label_1f6200;
        }
    }
    ctx->pc = 0x1F6110u;
label_1f6110:
    // 0x1f6110: 0xc07d1f8
    ctx->pc = 0x1F6110u;
    SET_GPR_U32(ctx, 31, 0x1F6118u);
    ctx->pc = 0x1F47E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F47E0_0x1f47e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6118u; }
    }
    if (ctx->pc != 0x1F6118u) { return; }
    ctx->pc = 0x1F6118u;
    // 0x1f6118: 0x304200ff
    ctx->pc = 0x1f6118u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1f611c: 0x14400008
    ctx->pc = 0x1F611Cu;
    {
        const bool branch_taken_0x1f611c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F6120u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f611c) {
            ctx->pc = 0x1F6140u;
            goto label_1f6140;
        }
    }
    ctx->pc = 0x1F6124u;
    // 0x1f6124: 0x3c010035
    ctx->pc = 0x1f6124u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1f6128: 0x24030012
    ctx->pc = 0x1f6128u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f612c: 0x8c2457c0
    ctx->pc = 0x1f612cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 22464)));
    // 0x1f6130: 0x2402ffc2
    ctx->pc = 0x1f6130u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967234));
    // 0x1f6134: 0xa0800000
    ctx->pc = 0x1f6134u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6138: 0x10000031
    ctx->pc = 0x1F6138u;
    {
        const bool branch_taken_0x1f6138 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F613Cu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1f6138) {
            ctx->pc = 0x1F6200u;
            goto label_1f6200;
        }
    }
    ctx->pc = 0x1F6140u;
label_1f6140:
    // 0x1f6140: 0xc07d224
    ctx->pc = 0x1F6140u;
    SET_GPR_U32(ctx, 31, 0x1F6148u);
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6148u; }
    }
    if (ctx->pc != 0x1F6148u) { return; }
    ctx->pc = 0x1F6148u;
    // 0x1f6148: 0xae020078
    ctx->pc = 0x1f6148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x1f614c: 0x200202d
    ctx->pc = 0x1f614cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6150: 0x8e060074
    ctx->pc = 0x1f6150u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1f6154: 0xc07d244
    ctx->pc = 0x1F6154u;
    SET_GPR_U32(ctx, 31, 0x1F615Cu);
    ctx->pc = 0x1F6158u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1F4910u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4910_0x1f4910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F615Cu; }
    }
    if (ctx->pc != 0x1F615Cu) { return; }
    ctx->pc = 0x1F615Cu;
    // 0x1f615c: 0x441000b
    ctx->pc = 0x1F615Cu;
    {
        const bool branch_taken_0x1f615c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F6160u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1f615c) {
            ctx->pc = 0x1F618Cu;
            goto label_1f618c;
        }
    }
    ctx->pc = 0x1F6164u;
    // 0x1f6164: 0x24020007
    ctx->pc = 0x1f6164u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f6168: 0xae03008c
    ctx->pc = 0x1f6168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    // 0x1f616c: 0xa2020000
    ctx->pc = 0x1f616cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f6170: 0xa2000001
    ctx->pc = 0x1f6170u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6174: 0xa2000002
    ctx->pc = 0x1f6174u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6178: 0xa2000003
    ctx->pc = 0x1f6178u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f617c: 0xa6000004
    ctx->pc = 0x1f617cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6180: 0xa6000006
    ctx->pc = 0x1f6180u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6184: 0xa6000008
    ctx->pc = 0x1f6184u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6188: 0xa600000a
    ctx->pc = 0x1f6188u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
label_1f618c:
    // 0x1f618c: 0x8e050070
    ctx->pc = 0x1f618cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1f6190: 0x8e060074
    ctx->pc = 0x1f6190u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1f6194: 0xc042d10
    ctx->pc = 0x1F6194u;
    SET_GPR_U32(ctx, 31, 0x1F619Cu);
    ctx->pc = 0x1F6198u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F619Cu; }
    }
    if (ctx->pc != 0x1F619Cu) { return; }
    ctx->pc = 0x1F619Cu;
    // 0x1f619c: 0x10400003
    ctx->pc = 0x1F619Cu;
    {
        const bool branch_taken_0x1f619c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F61A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f619c) {
            ctx->pc = 0x1F61ACu;
            goto label_1f61ac;
        }
    }
    ctx->pc = 0x1F61A4u;
    // 0x1f61a4: 0x10000016
    ctx->pc = 0x1F61A4u;
    {
        const bool branch_taken_0x1f61a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F61A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967235));
        if (branch_taken_0x1f61a4) {
            ctx->pc = 0x1F6200u;
            goto label_1f6200;
        }
    }
    ctx->pc = 0x1F61ACu;
label_1f61ac:
    // 0x1f61ac: 0xc07d224
    ctx->pc = 0x1F61ACu;
    SET_GPR_U32(ctx, 31, 0x1F61B4u);
    ctx->pc = 0x1F4890u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4890_0x1f4890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F61B4u; }
    }
    if (ctx->pc != 0x1F61B4u) { return; }
    ctx->pc = 0x1F61B4u;
    // 0x1f61b4: 0xae02007c
    ctx->pc = 0x1f61b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1f61b8: 0x8e02007c
    ctx->pc = 0x1f61b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1f61bc: 0x14400004
    ctx->pc = 0x1F61BCu;
    {
        const bool branch_taken_0x1f61bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f61bc) {
            ctx->pc = 0x1F61D0u;
            goto label_1f61d0;
        }
    }
    ctx->pc = 0x1F61C4u;
    // 0x1f61c4: 0x24020006
    ctx->pc = 0x1f61c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f61c8: 0x1000000a
    ctx->pc = 0x1F61C8u;
    {
        const bool branch_taken_0x1f61c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F61CCu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1f61c8) {
            ctx->pc = 0x1F61F4u;
            goto label_1f61f4;
        }
    }
    ctx->pc = 0x1F61D0u;
label_1f61d0:
    // 0x1f61d0: 0xae000084
    ctx->pc = 0x1f61d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x1f61d4: 0xc042c56
    ctx->pc = 0x1F61D4u;
    SET_GPR_U32(ctx, 31, 0x1F61DCu);
    ctx->pc = 0x1F61D8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F61DCu; }
    }
    if (ctx->pc != 0x1F61DCu) { return; }
    ctx->pc = 0x1F61DCu;
    // 0x1f61dc: 0x2443000c
    ctx->pc = 0x1f61dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 12));
    // 0x1f61e0: 0x240202fe
    ctx->pc = 0x1f61e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 766));
    // 0x1f61e4: 0x431823
    ctx->pc = 0x1f61e4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f61e8: 0x2402000e
    ctx->pc = 0x1f61e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1f61ec: 0xa6030080
    ctx->pc = 0x1f61ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f61f0: 0xa2020001
    ctx->pc = 0x1f61f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1f61f4:
    // 0x1f61f4: 0x10000002
    ctx->pc = 0x1F61F4u;
    {
        const bool branch_taken_0x1f61f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F61F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f61f4) {
            ctx->pc = 0x1F6200u;
            goto label_1f6200;
        }
    }
    ctx->pc = 0x1F61FCu;
label_1f61fc:
    // 0x1f61fc: 0x102d
    ctx->pc = 0x1f61fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6200:
    // 0x1f6200: 0xdfbf0010
    ctx->pc = 0x1f6200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6204: 0x7bb00000
    ctx->pc = 0x1f6204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6208: 0x3e00008
    ctx->pc = 0x1F6208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F620Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F5FC4u: goto label_1f5fc4;
            case 0x1F5FE4u: goto label_1f5fe4;
            case 0x1F608Cu: goto label_1f608c;
            case 0x1F6094u: goto label_1f6094;
            case 0x1F609Cu: goto label_1f609c;
            case 0x1F6110u: goto label_1f6110;
            case 0x1F6140u: goto label_1f6140;
            case 0x1F618Cu: goto label_1f618c;
            case 0x1F61ACu: goto label_1f61ac;
            case 0x1F61D0u: goto label_1f61d0;
            case 0x1F61F4u: goto label_1f61f4;
            case 0x1F61FCu: goto label_1f61fc;
            case 0x1F6200u: goto label_1f6200;
            case 0x1F6248u: goto label_1f6248;
            case 0x1F6254u: goto label_1f6254;
            case 0x1F6294u: goto label_1f6294;
            case 0x1F62B8u: goto label_1f62b8;
            case 0x1F62CCu: goto label_1f62cc;
            case 0x1F6308u: goto label_1f6308;
            case 0x1F632Cu: goto label_1f632c;
            case 0x1F633Cu: goto label_1f633c;
            case 0x1F6340u: goto label_1f6340;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F6210u;
    // 0x1f6210: 0x27bdfbe0
    ctx->pc = 0x1f6210u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966240));
    // 0x1f6214: 0x3c010036
    ctx->pc = 0x1f6214u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
    // 0x1f6218: 0xffbf0010
    ctx->pc = 0x1f6218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f621c: 0x7fb00000
    ctx->pc = 0x1f621cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f6220: 0x8c22eaf0
    ctx->pc = 0x1f6220u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294961904)));
    // 0x1f6224: 0x10400045
    ctx->pc = 0x1F6224u;
    {
        const bool branch_taken_0x1f6224 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6228u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f6224) {
            ctx->pc = 0x1F633Cu;
            goto label_1f633c;
        }
    }
    ctx->pc = 0x1F622Cu;
    // 0x1f622c: 0xc07d20c
    ctx->pc = 0x1F622Cu;
    SET_GPR_U32(ctx, 31, 0x1F6234u);
    ctx->pc = 0x1F4830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4830_0x1f4830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6234u; }
    }
    if (ctx->pc != 0x1F6234u) { return; }
    ctx->pc = 0x1F6234u;
    // 0x1f6234: 0x3042ffff
    ctx->pc = 0x1f6234u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1f6238: 0x10400003
    ctx->pc = 0x1F6238u;
    {
        const bool branch_taken_0x1f6238 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F623Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
        if (branch_taken_0x1f6238) {
            ctx->pc = 0x1F6248u;
            goto label_1f6248;
        }
    }
    ctx->pc = 0x1F6240u;
    // 0x1f6240: 0x10000004
    ctx->pc = 0x1F6240u;
    {
        const bool branch_taken_0x1f6240 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6244u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294952952), GPR_U32(ctx, 2));
        if (branch_taken_0x1f6240) {
            ctx->pc = 0x1F6254u;
            goto label_1f6254;
        }
    }
    ctx->pc = 0x1F6248u;
label_1f6248:
    // 0x1f6248: 0x24020064
    ctx->pc = 0x1f6248u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
    // 0x1f624c: 0x3c010034
    ctx->pc = 0x1f624cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1f6250: 0xac22c7f8
    ctx->pc = 0x1f6250u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952952), GPR_U32(ctx, 2));
label_1f6254:
    // 0x1f6254: 0x200202d
    ctx->pc = 0x1f6254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6258: 0x27a50020
    ctx->pc = 0x1f6258u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f625c: 0xc07d244
    ctx->pc = 0x1F625Cu;
    SET_GPR_U32(ctx, 31, 0x1F6264u);
    ctx->pc = 0x1F6260u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x1F4910u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4910_0x1f4910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6264u; }
    }
    if (ctx->pc != 0x1F6264u) { return; }
    ctx->pc = 0x1F6264u;
    // 0x1f6264: 0x441000b
    ctx->pc = 0x1F6264u;
    {
        const bool branch_taken_0x1f6264 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F6268u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1f6264) {
            ctx->pc = 0x1F6294u;
            goto label_1f6294;
        }
    }
    ctx->pc = 0x1F626Cu;
    // 0x1f626c: 0x24030007
    ctx->pc = 0x1f626cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f6270: 0xae04008c
    ctx->pc = 0x1f6270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 4));
    // 0x1f6274: 0xa2030000
    ctx->pc = 0x1f6274u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f6278: 0xa2000001
    ctx->pc = 0x1f6278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f627c: 0xa2000002
    ctx->pc = 0x1f627cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6280: 0xa2000003
    ctx->pc = 0x1f6280u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6284: 0xa6000004
    ctx->pc = 0x1f6284u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6288: 0xa6000006
    ctx->pc = 0x1f6288u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f628c: 0xa6000008
    ctx->pc = 0x1f628cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6290: 0xa600000a
    ctx->pc = 0x1f6290u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
label_1f6294:
    // 0x1f6294: 0x10400008
    ctx->pc = 0x1F6294u;
    {
        const bool branch_taken_0x1f6294 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6298u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x1f6294) {
            ctx->pc = 0x1F62B8u;
            goto label_1f62b8;
        }
    }
    ctx->pc = 0x1F629Cu;
    // 0x1f629c: 0x3c040034
    ctx->pc = 0x1f629cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1f62a0: 0x27a50020
    ctx->pc = 0x1f62a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f62a4: 0x2484c6f0
    ctx->pc = 0x1f62a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952688));
    // 0x1f62a8: 0xc042d7e
    ctx->pc = 0x1F62A8u;
    SET_GPR_U32(ctx, 31, 0x1F62B0u);
    ctx->pc = 0x1F62ACu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x10B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B5F8_0x10b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F62B0u; }
    }
    if (ctx->pc != 0x1F62B0u) { return; }
    ctx->pc = 0x1F62B0u;
    // 0x1f62b0: 0x10000006
    ctx->pc = 0x1F62B0u;
    {
        const bool branch_taken_0x1f62b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F62B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f62b0) {
            ctx->pc = 0x1F62CCu;
            goto label_1f62cc;
        }
    }
    ctx->pc = 0x1F62B8u;
label_1f62b8:
    // 0x1f62b8: 0x3c050026
    ctx->pc = 0x1f62b8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
    // 0x1f62bc: 0x2484c6f0
    ctx->pc = 0x1f62bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952688));
    // 0x1f62c0: 0xc042bf0
    ctx->pc = 0x1F62C0u;
    SET_GPR_U32(ctx, 31, 0x1F62C8u);
    ctx->pc = 0x1F62C4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941504));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F62C8u; }
    }
    if (ctx->pc != 0x1F62C8u) { return; }
    ctx->pc = 0x1F62C8u;
    // 0x1f62c8: 0x200202d
    ctx->pc = 0x1f62c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f62cc:
    // 0x1f62cc: 0x27a50020
    ctx->pc = 0x1f62ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f62d0: 0xc07d244
    ctx->pc = 0x1F62D0u;
    SET_GPR_U32(ctx, 31, 0x1F62D8u);
    ctx->pc = 0x1F62D4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x1F4910u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4910_0x1f4910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F62D8u; }
    }
    if (ctx->pc != 0x1F62D8u) { return; }
    ctx->pc = 0x1F62D8u;
    // 0x1f62d8: 0x441000b
    ctx->pc = 0x1F62D8u;
    {
        const bool branch_taken_0x1f62d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F62DCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1f62d8) {
            ctx->pc = 0x1F6308u;
            goto label_1f6308;
        }
    }
    ctx->pc = 0x1F62E0u;
    // 0x1f62e0: 0x24030007
    ctx->pc = 0x1f62e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f62e4: 0xae04008c
    ctx->pc = 0x1f62e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 4));
    // 0x1f62e8: 0xa2030000
    ctx->pc = 0x1f62e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f62ec: 0xa2000001
    ctx->pc = 0x1f62ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f62f0: 0xa2000002
    ctx->pc = 0x1f62f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f62f4: 0xa2000003
    ctx->pc = 0x1f62f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f62f8: 0xa6000004
    ctx->pc = 0x1f62f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f62fc: 0xa6000006
    ctx->pc = 0x1f62fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6300: 0xa6000008
    ctx->pc = 0x1f6300u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6304: 0xa600000a
    ctx->pc = 0x1f6304u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
label_1f6308:
    // 0x1f6308: 0x10400008
    ctx->pc = 0x1F6308u;
    {
        const bool branch_taken_0x1f6308 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F630Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x1f6308) {
            ctx->pc = 0x1F632Cu;
            goto label_1f632c;
        }
    }
    ctx->pc = 0x1F6310u;
    // 0x1f6310: 0x3c040034
    ctx->pc = 0x1f6310u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1f6314: 0x27a50020
    ctx->pc = 0x1f6314u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f6318: 0x2484cc60
    ctx->pc = 0x1f6318u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x1f631c: 0xc042d7e
    ctx->pc = 0x1F631Cu;
    SET_GPR_U32(ctx, 31, 0x1F6324u);
    ctx->pc = 0x1F6320u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x10B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B5F8_0x10b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6324u; }
    }
    if (ctx->pc != 0x1F6324u) { return; }
    ctx->pc = 0x1F6324u;
    // 0x1f6324: 0x10000006
    ctx->pc = 0x1F6324u;
    {
        const bool branch_taken_0x1f6324 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F6328u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1f6324) {
            ctx->pc = 0x1F6340u;
            goto label_1f6340;
        }
    }
    ctx->pc = 0x1F632Cu;
label_1f632c:
    // 0x1f632c: 0x3c050026
    ctx->pc = 0x1f632cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
    // 0x1f6330: 0x2484cc60
    ctx->pc = 0x1f6330u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x1f6334: 0xc042bf0
    ctx->pc = 0x1F6334u;
    SET_GPR_U32(ctx, 31, 0x1F633Cu);
    ctx->pc = 0x1F6338u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941568));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F633Cu; }
    }
    if (ctx->pc != 0x1F633Cu) { return; }
    ctx->pc = 0x1F633Cu;
label_1f633c:
    // 0x1f633c: 0xdfbf0010
    ctx->pc = 0x1f633cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f6340:
    // 0x1f6340: 0x102d
    ctx->pc = 0x1f6340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6344: 0x7bb00000
    ctx->pc = 0x1f6344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6348: 0x3e00008
    ctx->pc = 0x1F6348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F634Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 1056));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F5FC4u: goto label_1f5fc4;
            case 0x1F5FE4u: goto label_1f5fe4;
            case 0x1F608Cu: goto label_1f608c;
            case 0x1F6094u: goto label_1f6094;
            case 0x1F609Cu: goto label_1f609c;
            case 0x1F6110u: goto label_1f6110;
            case 0x1F6140u: goto label_1f6140;
            case 0x1F618Cu: goto label_1f618c;
            case 0x1F61ACu: goto label_1f61ac;
            case 0x1F61D0u: goto label_1f61d0;
            case 0x1F61F4u: goto label_1f61f4;
            case 0x1F61FCu: goto label_1f61fc;
            case 0x1F6200u: goto label_1f6200;
            case 0x1F6248u: goto label_1f6248;
            case 0x1F6254u: goto label_1f6254;
            case 0x1F6294u: goto label_1f6294;
            case 0x1F62B8u: goto label_1f62b8;
            case 0x1F62CCu: goto label_1f62cc;
            case 0x1F6308u: goto label_1f6308;
            case 0x1F632Cu: goto label_1f632c;
            case 0x1F633Cu: goto label_1f633c;
            case 0x1F6340u: goto label_1f6340;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F6350u;
}
