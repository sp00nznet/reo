#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F42C0
// Address: 0x1f42c0 - 0x1f43c0
void sub_001F42C0_0x1f42c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f42c0u;

    // 0x1f42c0: 0x682d
    ctx->pc = 0x1f42c0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f42c4: 0x602d
    ctx->pc = 0x1f42c4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f42c8: 0x102d
    ctx->pc = 0x1f42c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f42cc: 0x2409002b
    ctx->pc = 0x1f42ccu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 43));
    // 0x1f42d0: 0x2408002f
    ctx->pc = 0x1f42d0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 47));
    // 0x1f42d4: 0x10000033
    ctx->pc = 0x1F42D4u;
    {
        const bool branch_taken_0x1f42d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F42D8u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 61));
        if (branch_taken_0x1f42d4) {
            ctx->pc = 0x1F43A4u;
            goto label_1f43a4;
        }
    }
    ctx->pc = 0x1F42DCu;
label_1f42dc:
    // 0x1f42dc: 0x908b0000
    ctx->pc = 0x1f42dcu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f42e0: 0x116a0023
    ctx->pc = 0x1F42E0u;
    {
        const bool branch_taken_0x1f42e0 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 10));
        ctx->pc = 0x1F42E4u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 12), 8));
        if (branch_taken_0x1f42e0) {
            ctx->pc = 0x1F4370u;
            goto label_1f4370;
        }
    }
    ctx->pc = 0x1F42E8u;
    // 0x1f42e8: 0x2d630041
    ctx->pc = 0x1f42e8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 11), 65));
    // 0x1f42ec: 0x14600006
    ctx->pc = 0x1F42ECu;
    {
        const bool branch_taken_0x1f42ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F42F0u;
        SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 11), 97));
        if (branch_taken_0x1f42ec) {
            ctx->pc = 0x1F4308u;
            goto label_1f4308;
        }
    }
    ctx->pc = 0x1F42F4u;
    // 0x1f42f4: 0x2d61005b
    ctx->pc = 0x1f42f4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 11), 91));
    // 0x1f42f8: 0x10200003
    ctx->pc = 0x1F42F8u;
    {
        const bool branch_taken_0x1f42f8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f42f8) {
            ctx->pc = 0x1F4308u;
            goto label_1f4308;
        }
    }
    ctx->pc = 0x1F4300u;
    // 0x1f4300: 0x10000017
    ctx->pc = 0x1F4300u;
    {
        const bool branch_taken_0x1f4300 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4304u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967231));
        if (branch_taken_0x1f4300) {
            ctx->pc = 0x1F4360u;
            goto label_1f4360;
        }
    }
    ctx->pc = 0x1F4308u;
label_1f4308:
    // 0x1f4308: 0x14600005
    ctx->pc = 0x1F4308u;
    {
        const bool branch_taken_0x1f4308 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F430Cu;
        SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 11), 123));
        if (branch_taken_0x1f4308) {
            ctx->pc = 0x1F4320u;
            goto label_1f4320;
        }
    }
    ctx->pc = 0x1F4310u;
    // 0x1f4310: 0x10200004
    ctx->pc = 0x1F4310u;
    {
        const bool branch_taken_0x1f4310 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4314u;
        SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 11), 48));
        if (branch_taken_0x1f4310) {
            ctx->pc = 0x1F4324u;
            goto label_1f4324;
        }
    }
    ctx->pc = 0x1F4318u;
    // 0x1f4318: 0x10000011
    ctx->pc = 0x1F4318u;
    {
        const bool branch_taken_0x1f4318 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F431Cu;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967225));
        if (branch_taken_0x1f4318) {
            ctx->pc = 0x1F4360u;
            goto label_1f4360;
        }
    }
    ctx->pc = 0x1F4320u;
label_1f4320:
    // 0x1f4320: 0x2d630030
    ctx->pc = 0x1f4320u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 11), 48));
label_1f4324:
    // 0x1f4324: 0x14600005
    ctx->pc = 0x1F4324u;
    {
        const bool branch_taken_0x1f4324 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F4328u;
        SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 11), 58));
        if (branch_taken_0x1f4324) {
            ctx->pc = 0x1F433Cu;
            goto label_1f433c;
        }
    }
    ctx->pc = 0x1F432Cu;
    // 0x1f432c: 0x10200003
    ctx->pc = 0x1F432Cu;
    {
        const bool branch_taken_0x1f432c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f432c) {
            ctx->pc = 0x1F433Cu;
            goto label_1f433c;
        }
    }
    ctx->pc = 0x1F4334u;
    // 0x1f4334: 0x1000000a
    ctx->pc = 0x1F4334u;
    {
        const bool branch_taken_0x1f4334 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4338u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4));
        if (branch_taken_0x1f4334) {
            ctx->pc = 0x1F4360u;
            goto label_1f4360;
        }
    }
    ctx->pc = 0x1F433Cu;
label_1f433c:
    // 0x1f433c: 0x15690003
    ctx->pc = 0x1F433Cu;
    {
        const bool branch_taken_0x1f433c = (GPR_U32(ctx, 11) != GPR_U32(ctx, 9));
        if (branch_taken_0x1f433c) {
            ctx->pc = 0x1F434Cu;
            goto label_1f434c;
        }
    }
    ctx->pc = 0x1F4344u;
    // 0x1f4344: 0x10000006
    ctx->pc = 0x1F4344u;
    {
        const bool branch_taken_0x1f4344 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4348u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 62));
        if (branch_taken_0x1f4344) {
            ctx->pc = 0x1F4360u;
            goto label_1f4360;
        }
    }
    ctx->pc = 0x1F434Cu;
label_1f434c:
    // 0x1f434c: 0x15680003
    ctx->pc = 0x1F434Cu;
    {
        const bool branch_taken_0x1f434c = (GPR_U32(ctx, 11) != GPR_U32(ctx, 8));
        if (branch_taken_0x1f434c) {
            ctx->pc = 0x1F435Cu;
            goto label_1f435c;
        }
    }
    ctx->pc = 0x1F4354u;
    // 0x1f4354: 0x10000002
    ctx->pc = 0x1F4354u;
    {
        const bool branch_taken_0x1f4354 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4358u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 63));
        if (branch_taken_0x1f4354) {
            ctx->pc = 0x1F4360u;
            goto label_1f4360;
        }
    }
    ctx->pc = 0x1F435Cu;
label_1f435c:
    // 0x1f435c: 0x240bffff
    ctx->pc = 0x1f435cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f4360:
    // 0x1f4360: 0xd1980
    ctx->pc = 0x1f4360u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 13), 6));
    // 0x1f4364: 0x258c0006
    ctx->pc = 0x1f4364u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 6));
    // 0x1f4368: 0x6b6825
    ctx->pc = 0x1f4368u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1f436c: 0x29830008
    ctx->pc = 0x1f436cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 12), 8));
label_1f4370:
    // 0x1f4370: 0x24840001
    ctx->pc = 0x1f4370u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f4374: 0x1460000b
    ctx->pc = 0x1F4374u;
    {
        const bool branch_taken_0x1f4374 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F4378u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
        if (branch_taken_0x1f4374) {
            ctx->pc = 0x1F43A4u;
            goto label_1f43a4;
        }
    }
    ctx->pc = 0x1F437Cu;
    // 0x1f437c: 0x2583fff8
    ctx->pc = 0x1f437cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 12), 4294967288));
    // 0x1f4380: 0x24e7ffff
    ctx->pc = 0x1f4380u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1f4384: 0x6d1806
    ctx->pc = 0x1f4384u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 3) & 0x1F));
    // 0x1f4388: 0x258cfff8
    ctx->pc = 0x1f4388u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 4294967288));
    // 0x1f438c: 0xa0a30000
    ctx->pc = 0x1f438cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f4390: 0x24420001
    ctx->pc = 0x1f4390u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f4394: 0x1ce00003
    ctx->pc = 0x1F4394u;
    {
        const bool branch_taken_0x1f4394 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1F4398u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x1f4394) {
            ctx->pc = 0x1F43A4u;
            goto label_1f43a4;
        }
    }
    ctx->pc = 0x1F439Cu;
    // 0x1f439c: 0x10000003
    ctx->pc = 0x1F439Cu;
    {
        const bool branch_taken_0x1f439c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F43A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1f439c) {
            ctx->pc = 0x1F43ACu;
            goto label_1f43ac;
        }
    }
    ctx->pc = 0x1F43A4u;
label_1f43a4:
    // 0x1f43a4: 0x1cc0ffcd
    ctx->pc = 0x1F43A4u;
    {
        const bool branch_taken_0x1f43a4 = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x1f43a4) {
            ctx->pc = 0x1F42DCu;
            goto label_1f42dc;
        }
    }
    ctx->pc = 0x1F43ACu;
label_1f43ac:
    // 0x1f43ac: 0x3e00008
    ctx->pc = 0x1F43ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F42DCu: goto label_1f42dc;
            case 0x1F4308u: goto label_1f4308;
            case 0x1F4320u: goto label_1f4320;
            case 0x1F4324u: goto label_1f4324;
            case 0x1F433Cu: goto label_1f433c;
            case 0x1F434Cu: goto label_1f434c;
            case 0x1F435Cu: goto label_1f435c;
            case 0x1F4360u: goto label_1f4360;
            case 0x1F4370u: goto label_1f4370;
            case 0x1F43A4u: goto label_1f43a4;
            case 0x1F43ACu: goto label_1f43ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F43B4u;
    // 0x1f43b4: 0x0
    ctx->pc = 0x1f43b4u;
    // NOP
    // 0x1f43b8: 0x0
    ctx->pc = 0x1f43b8u;
    // NOP
    // 0x1f43bc: 0x0
    ctx->pc = 0x1f43bcu;
    // NOP
}
