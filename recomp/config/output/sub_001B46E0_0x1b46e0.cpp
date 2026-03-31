#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B46E0
// Address: 0x1b46e0 - 0x1b4820
void sub_001B46E0_0x1b46e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b46e0u;

    // 0x1b46e0: 0x27bdff70
    ctx->pc = 0x1b46e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1b46e4: 0xffbf0080
    ctx->pc = 0x1b46e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1b46e8: 0x7fb70070
    ctx->pc = 0x1b46e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1b46ec: 0x7fb60060
    ctx->pc = 0x1b46ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b46f0: 0xe0b82d
    ctx->pc = 0x1b46f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b46f4: 0x7fb50050
    ctx->pc = 0x1b46f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b46f8: 0x3c160031
    ctx->pc = 0x1b46f8u;
    SET_GPR_U32(ctx, 22, ((uint32_t)49 << 16));
    // 0x1b46fc: 0x7fb40040
    ctx->pc = 0x1b46fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b4700: 0x80a82d
    ctx->pc = 0x1b4700u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4704: 0x7fb30030
    ctx->pc = 0x1b4704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b4708: 0xa0a02d
    ctx->pc = 0x1b4708u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b470c: 0x7fb20020
    ctx->pc = 0x1b470cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b4710: 0xc0982d
    ctx->pc = 0x1b4710u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4714: 0x7fb10010
    ctx->pc = 0x1b4714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b4718: 0x100902d
    ctx->pc = 0x1b4718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b471c: 0x7fb00000
    ctx->pc = 0x1b471cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4720: 0x120882d
    ctx->pc = 0x1b4720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4724: 0x240382d
    ctx->pc = 0x1b4724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4728: 0x140802d
    ctx->pc = 0x1b4728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b472c: 0xc06d164
    ctx->pc = 0x1B472Cu;
    SET_GPR_U32(ctx, 31, 0x1B4734u);
    ctx->pc = 0x1B4730u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 20928));
    ctx->pc = 0x1B4590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4590_0x1b4590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4734u; }
    }
    if (ctx->pc != 0x1B4734u) { return; }
    ctx->pc = 0x1B4734u;
    // 0x1b4734: 0x14400003
    ctx->pc = 0x1B4734u;
    {
        const bool branch_taken_0x1b4734 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B4738u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b4734) {
            ctx->pc = 0x1B4744u;
            goto label_1b4744;
        }
    }
    ctx->pc = 0x1B473Cu;
    // 0x1b473c: 0x1000002c
    ctx->pc = 0x1B473Cu;
    {
        const bool branch_taken_0x1b473c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B4740u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b473c) {
            ctx->pc = 0x1B47F0u;
            goto label_1b47f0;
        }
    }
    ctx->pc = 0x1B4744u;
label_1b4744:
    // 0x1b4744: 0x260282d
    ctx->pc = 0x1b4744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4748: 0xc06d194
    ctx->pc = 0x1B4748u;
    SET_GPR_U32(ctx, 31, 0x1B4750u);
    ctx->pc = 0x1B474Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B4650u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4650_0x1b4650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4750u; }
    }
    if (ctx->pc != 0x1B4750u) { return; }
    ctx->pc = 0x1B4750u;
    // 0x1b4750: 0x14400003
    ctx->pc = 0x1B4750u;
    {
        const bool branch_taken_0x1b4750 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b4750) {
            ctx->pc = 0x1B4760u;
            goto label_1b4760;
        }
    }
    ctx->pc = 0x1B4758u;
    // 0x1b4758: 0x10000025
    ctx->pc = 0x1B4758u;
    {
        const bool branch_taken_0x1b4758 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B475Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b4758) {
            ctx->pc = 0x1B47F0u;
            goto label_1b47f0;
        }
    }
    ctx->pc = 0x1B4760u;
label_1b4760:
    // 0x1b4760: 0x26d60010
    ctx->pc = 0x1b4760u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 16));
    // 0x1b4764: 0x10000006
    ctx->pc = 0x1B4764u;
    {
        const bool branch_taken_0x1b4764 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B4768u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b4764) {
            ctx->pc = 0x1B4780u;
            goto label_1b4780;
        }
    }
    ctx->pc = 0x1B476Cu;
label_1b476c:
    // 0x1b476c: 0x86c20000
    ctx->pc = 0x1b476cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1b4770: 0x10400007
    ctx->pc = 0x1B4770u;
    {
        const bool branch_taken_0x1b4770 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B4774u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x1b4770) {
            ctx->pc = 0x1B4790u;
            goto label_1b4790;
        }
    }
    ctx->pc = 0x1B4778u;
    // 0x1b4778: 0x24630001
    ctx->pc = 0x1b4778u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b477c: 0x26d6008c
    ctx->pc = 0x1b477cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 140));
label_1b4780:
    // 0x1b4780: 0x28620020
    ctx->pc = 0x1b4780u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 32));
    // 0x1b4784: 0x1440fff9
    ctx->pc = 0x1B4784u;
    {
        const bool branch_taken_0x1b4784 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b4784) {
            ctx->pc = 0x1B476Cu;
            goto label_1b476c;
        }
    }
    ctx->pc = 0x1B478Cu;
    // 0x1b478c: 0x24020020
    ctx->pc = 0x1b478cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_1b4790:
    // 0x1b4790: 0x14620003
    ctx->pc = 0x1B4790u;
    {
        const bool branch_taken_0x1b4790 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1B4794u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b4790) {
            ctx->pc = 0x1B47A0u;
            goto label_1b47a0;
        }
    }
    ctx->pc = 0x1B4798u;
    // 0x1b4798: 0x10000015
    ctx->pc = 0x1B4798u;
    {
        const bool branch_taken_0x1b4798 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B479Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b4798) {
            ctx->pc = 0x1B47F0u;
            goto label_1b47f0;
        }
    }
    ctx->pc = 0x1B47A0u;
label_1b47a0:
    // 0x1b47a0: 0x3283fffe
    ctx->pc = 0x1b47a0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 20), 65534));
    // 0x1b47a4: 0xa6c40000
    ctx->pc = 0x1b47a4u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b47a8: 0x3262fffe
    ctx->pc = 0x1b47a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 65534));
    // 0x1b47ac: 0xa2d5000b
    ctx->pc = 0x1b47acu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 11), (uint8_t)GPR_U32(ctx, 21));
    // 0x1b47b0: 0x220282d
    ctx->pc = 0x1b47b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b47b4: 0xa6c30002
    ctx->pc = 0x1b47b4u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b47b8: 0x26c4000c
    ctx->pc = 0x1b47b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 12));
    // 0x1b47bc: 0xc042bf0
    ctx->pc = 0x1B47BCu;
    SET_GPR_U32(ctx, 31, 0x1B47C4u);
    ctx->pc = 0x1B47C0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 4), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B47C4u; }
    }
    if (ctx->pc != 0x1B47C4u) { return; }
    ctx->pc = 0x1B47C4u;
    // 0x1b47c4: 0xa6d70006
    ctx->pc = 0x1b47c4u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 6), (uint16_t)GPR_U32(ctx, 23));
    // 0x1b47c8: 0x16000004
    ctx->pc = 0x1B47C8u;
    {
        const bool branch_taken_0x1b47c8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B47CCu;
        WRITE8(ADD32(GPR_U32(ctx, 22), 8), (uint8_t)GPR_U32(ctx, 18));
        if (branch_taken_0x1b47c8) {
            ctx->pc = 0x1B47DCu;
            goto label_1b47dc;
        }
    }
    ctx->pc = 0x1B47D0u;
    // 0x1b47d0: 0x24020080
    ctx->pc = 0x1b47d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b47d4: 0x10000002
    ctx->pc = 0x1B47D4u;
    {
        const bool branch_taken_0x1b47d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B47D8u;
        WRITE8(ADD32(GPR_U32(ctx, 22), 10), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1b47d4) {
            ctx->pc = 0x1B47E0u;
            goto label_1b47e0;
        }
    }
    ctx->pc = 0x1B47DCu;
label_1b47dc:
    // 0x1b47dc: 0xa2c0000a
    ctx->pc = 0x1b47dcu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 10), (uint8_t)GPR_U32(ctx, 0));
label_1b47e0:
    // 0x1b47e0: 0x101c3c
    ctx->pc = 0x1b47e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1b47e4: 0x26c2000a
    ctx->pc = 0x1b47e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 10));
    // 0x1b47e8: 0x31c3f
    ctx->pc = 0x1b47e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1b47ec: 0xa2c30009
    ctx->pc = 0x1b47ecu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 9), (uint8_t)GPR_U32(ctx, 3));
label_1b47f0:
    // 0x1b47f0: 0xdfbf0080
    ctx->pc = 0x1b47f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b47f4: 0x7bb70070
    ctx->pc = 0x1b47f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b47f8: 0x7bb60060
    ctx->pc = 0x1b47f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b47fc: 0x7bb50050
    ctx->pc = 0x1b47fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b4800: 0x7bb40040
    ctx->pc = 0x1b4800u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b4804: 0x7bb30030
    ctx->pc = 0x1b4804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b4808: 0x7bb20020
    ctx->pc = 0x1b4808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b480c: 0x7bb10010
    ctx->pc = 0x1b480cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4810: 0x7bb00000
    ctx->pc = 0x1b4810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4814: 0x3e00008
    ctx->pc = 0x1B4814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4818u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4744u: goto label_1b4744;
            case 0x1B4760u: goto label_1b4760;
            case 0x1B476Cu: goto label_1b476c;
            case 0x1B4780u: goto label_1b4780;
            case 0x1B4790u: goto label_1b4790;
            case 0x1B47A0u: goto label_1b47a0;
            case 0x1B47DCu: goto label_1b47dc;
            case 0x1B47E0u: goto label_1b47e0;
            case 0x1B47F0u: goto label_1b47f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B481Cu;
    // 0x1b481c: 0x0
    ctx->pc = 0x1b481cu;
    // NOP
}
