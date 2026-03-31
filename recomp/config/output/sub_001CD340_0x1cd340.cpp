#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CD340
// Address: 0x1cd340 - 0x1cd3f0
void sub_001CD340_0x1cd340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cd340u;

    // 0x1cd340: 0x27bdffe0
    ctx->pc = 0x1cd340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cd344: 0xa0402d
    ctx->pc = 0x1cd344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd348: 0xffbf0010
    ctx->pc = 0x1cd348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cd34c: 0x29010064
    ctx->pc = 0x1cd34cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 8), 100));
    // 0x1cd350: 0x7fb00000
    ctx->pc = 0x1cd350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cd354: 0xc0382d
    ctx->pc = 0x1cd354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd358: 0x1020000d
    ctx->pc = 0x1CD358u;
    {
        const bool branch_taken_0x1cd358 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD35Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cd358) {
            ctx->pc = 0x1CD390u;
            goto label_1cd390;
        }
    }
    ctx->pc = 0x1CD360u;
    // 0x1cd360: 0x3c020023
    ctx->pc = 0x1cd360u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cd364: 0x3c040034
    ctx->pc = 0x1cd364u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1cd368: 0x101880
    ctx->pc = 0x1cd368u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1cd36c: 0x244266d0
    ctx->pc = 0x1cd36cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26320));
    // 0x1cd370: 0x431021
    ctx->pc = 0x1cd370u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cd374: 0x3c050025
    ctx->pc = 0x1cd374u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1cd378: 0x8c460000
    ctx->pc = 0x1cd378u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd37c: 0x24840af0
    ctx->pc = 0x1cd37cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2800));
    // 0x1cd380: 0xc042a0c
    ctx->pc = 0x1CD380u;
    SET_GPR_U32(ctx, 31, 0x1CD388u);
    ctx->pc = 0x1CD384u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24448));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD388u; }
    }
    if (ctx->pc != 0x1CD388u) { return; }
    ctx->pc = 0x1CD388u;
    // 0x1cd388: 0x1000000b
    ctx->pc = 0x1CD388u;
    {
        const bool branch_taken_0x1cd388 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd388) {
            ctx->pc = 0x1CD3B8u;
            goto label_1cd3b8;
        }
    }
    ctx->pc = 0x1CD390u;
label_1cd390:
    // 0x1cd390: 0x3c020023
    ctx->pc = 0x1cd390u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cd394: 0x3c040034
    ctx->pc = 0x1cd394u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1cd398: 0x101880
    ctx->pc = 0x1cd398u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1cd39c: 0x244266d0
    ctx->pc = 0x1cd39cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26320));
    // 0x1cd3a0: 0x431021
    ctx->pc = 0x1cd3a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cd3a4: 0x3c050025
    ctx->pc = 0x1cd3a4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1cd3a8: 0x8c460000
    ctx->pc = 0x1cd3a8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd3ac: 0x24840af0
    ctx->pc = 0x1cd3acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2800));
    // 0x1cd3b0: 0xc042a0c
    ctx->pc = 0x1CD3B0u;
    SET_GPR_U32(ctx, 31, 0x1CD3B8u);
    ctx->pc = 0x1CD3B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24464));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3B8u; }
    }
    if (ctx->pc != 0x1CD3B8u) { return; }
    ctx->pc = 0x1CD3B8u;
label_1cd3b8:
    // 0x1cd3b8: 0x16000005
    ctx->pc = 0x1CD3B8u;
    {
        const bool branch_taken_0x1cd3b8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD3BCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x1cd3b8) {
            ctx->pc = 0x1CD3D0u;
            goto label_1cd3d0;
        }
    }
    ctx->pc = 0x1CD3C0u;
    // 0x1cd3c0: 0x3c050025
    ctx->pc = 0x1cd3c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1cd3c4: 0x24840af0
    ctx->pc = 0x1cd3c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2800));
    // 0x1cd3c8: 0xc042aee
    ctx->pc = 0x1CD3C8u;
    SET_GPR_U32(ctx, 31, 0x1CD3D0u);
    ctx->pc = 0x1CD3CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24480));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3D0u; }
    }
    if (ctx->pc != 0x1CD3D0u) { return; }
    ctx->pc = 0x1CD3D0u;
label_1cd3d0:
    // 0x1cd3d0: 0xdfbf0010
    ctx->pc = 0x1cd3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd3d4: 0x3c020034
    ctx->pc = 0x1cd3d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1cd3d8: 0x7bb00000
    ctx->pc = 0x1cd3d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd3dc: 0x24420af0
    ctx->pc = 0x1cd3dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2800));
    // 0x1cd3e0: 0x3e00008
    ctx->pc = 0x1CD3E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD3E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD390u: goto label_1cd390;
            case 0x1CD3B8u: goto label_1cd3b8;
            case 0x1CD3D0u: goto label_1cd3d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CD3E8u;
    // 0x1cd3e8: 0x0
    ctx->pc = 0x1cd3e8u;
    // NOP
    // 0x1cd3ec: 0x0
    ctx->pc = 0x1cd3ecu;
    // NOP
}
