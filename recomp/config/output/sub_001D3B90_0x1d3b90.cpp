#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D3B90
// Address: 0x1d3b90 - 0x1d3dc0
void sub_001D3B90_0x1d3b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d3b90u;

    // 0x1d3b90: 0x3c040025
    ctx->pc = 0x1d3b90u;
    SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
    // 0x1d3b94: 0x282d
    ctx->pc = 0x1d3b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b98: 0x8074f70
    ctx->pc = 0x1D3B98u;
    ctx->pc = 0x1D3B9Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26200));
    ctx->pc = 0x1D3DC0u;
    sub_001D3DC0_0x1d3dc0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3BA0u;
    // 0x1d3ba0: 0x8074ef8
    ctx->pc = 0x1D3BA0u;
    ctx->pc = 0x1D3BA4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D3BE0u;
    goto label_1d3be0;
    ctx->pc = 0x1D3BA8u;
    // 0x1d3ba8: 0x0
    ctx->pc = 0x1d3ba8u;
    // NOP
    // 0x1d3bac: 0x0
    ctx->pc = 0x1d3bacu;
    // NOP
    // 0x1d3bb0: 0x8074ef8
    ctx->pc = 0x1D3BB0u;
    ctx->pc = 0x1D3BB4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1D3BE0u;
    goto label_1d3be0;
    ctx->pc = 0x1D3BB8u;
    // 0x1d3bb8: 0x0
    ctx->pc = 0x1d3bb8u;
    // NOP
    // 0x1d3bbc: 0x0
    ctx->pc = 0x1d3bbcu;
    // NOP
    // 0x1d3bc0: 0x8074ef8
    ctx->pc = 0x1D3BC0u;
    ctx->pc = 0x1D3BC4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1D3BE0u;
    goto label_1d3be0;
    ctx->pc = 0x1D3BC8u;
    // 0x1d3bc8: 0x0
    ctx->pc = 0x1d3bc8u;
    // NOP
    // 0x1d3bcc: 0x0
    ctx->pc = 0x1d3bccu;
    // NOP
    // 0x1d3bd0: 0x8074ef8
    ctx->pc = 0x1D3BD0u;
    ctx->pc = 0x1D3BD4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1D3BE0u;
    goto label_1d3be0;
    ctx->pc = 0x1D3BD8u;
    // 0x1d3bd8: 0x0
    ctx->pc = 0x1d3bd8u;
    // NOP
    // 0x1d3bdc: 0x0
    ctx->pc = 0x1d3bdcu;
    // NOP
label_1d3be0:
    // 0x1d3be0: 0x27bdff60
    ctx->pc = 0x1d3be0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1d3be4: 0x24020003
    ctx->pc = 0x1d3be4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d3be8: 0xffbf0010
    ctx->pc = 0x1d3be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d3bec: 0x1082001a
    ctx->pc = 0x1D3BECu;
    {
        const bool branch_taken_0x1d3bec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D3BF0u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        if (branch_taken_0x1d3bec) {
            ctx->pc = 0x1D3C58u;
            goto label_1d3c58;
        }
    }
    ctx->pc = 0x1D3BF4u;
    // 0x1d3bf4: 0x24020002
    ctx->pc = 0x1d3bf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3bf8: 0x10820012
    ctx->pc = 0x1D3BF8u;
    {
        const bool branch_taken_0x1d3bf8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D3BFCu;
        SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
        if (branch_taken_0x1d3bf8) {
            ctx->pc = 0x1D3C44u;
            goto label_1d3c44;
        }
    }
    ctx->pc = 0x1D3C00u;
    // 0x1d3c00: 0x24020001
    ctx->pc = 0x1d3c00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3c04: 0x1082000a
    ctx->pc = 0x1D3C04u;
    {
        const bool branch_taken_0x1d3c04 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D3C08u;
        SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
        if (branch_taken_0x1d3c04) {
            ctx->pc = 0x1D3C30u;
            goto label_1d3c30;
        }
    }
    ctx->pc = 0x1D3C0Cu;
    // 0x1d3c0c: 0x10800003
    ctx->pc = 0x1D3C0Cu;
    {
        const bool branch_taken_0x1d3c0c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3C10u;
        SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
        if (branch_taken_0x1d3c0c) {
            ctx->pc = 0x1D3C1Cu;
            goto label_1d3c1c;
        }
    }
    ctx->pc = 0x1D3C14u;
    // 0x1d3c14: 0x10000016
    ctx->pc = 0x1D3C14u;
    {
        const bool branch_taken_0x1d3c14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3C18u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x1d3c14) {
            ctx->pc = 0x1D3C70u;
            goto label_1d3c70;
        }
    }
    ctx->pc = 0x1D3C1Cu;
label_1d3c1c:
    // 0x1d3c1c: 0x27a40020
    ctx->pc = 0x1d3c1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d3c20: 0xc042a0c
    ctx->pc = 0x1D3C20u;
    SET_GPR_U32(ctx, 31, 0x1D3C28u);
    ctx->pc = 0x1D3C24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26208));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3C28u; }
    }
    if (ctx->pc != 0x1D3C28u) { return; }
    ctx->pc = 0x1D3C28u;
    // 0x1d3c28: 0x10000010
    ctx->pc = 0x1D3C28u;
    {
        const bool branch_taken_0x1d3c28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3C2Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 8192));
        if (branch_taken_0x1d3c28) {
            ctx->pc = 0x1D3C6Cu;
            goto label_1d3c6c;
        }
    }
    ctx->pc = 0x1D3C30u;
label_1d3c30:
    // 0x1d3c30: 0x27a40020
    ctx->pc = 0x1d3c30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d3c34: 0xc042a0c
    ctx->pc = 0x1D3C34u;
    SET_GPR_U32(ctx, 31, 0x1D3C3Cu);
    ctx->pc = 0x1D3C38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26216));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3C3Cu; }
    }
    if (ctx->pc != 0x1D3C3Cu) { return; }
    ctx->pc = 0x1D3C3Cu;
    // 0x1d3c3c: 0x1000000b
    ctx->pc = 0x1D3C3Cu;
    {
        const bool branch_taken_0x1d3c3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3C40u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 9472));
        if (branch_taken_0x1d3c3c) {
            ctx->pc = 0x1D3C6Cu;
            goto label_1d3c6c;
        }
    }
    ctx->pc = 0x1D3C44u;
label_1d3c44:
    // 0x1d3c44: 0x27a40020
    ctx->pc = 0x1d3c44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d3c48: 0xc042a0c
    ctx->pc = 0x1D3C48u;
    SET_GPR_U32(ctx, 31, 0x1D3C50u);
    ctx->pc = 0x1D3C4Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26232));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3C50u; }
    }
    if (ctx->pc != 0x1D3C50u) { return; }
    ctx->pc = 0x1D3C50u;
    // 0x1d3c50: 0x10000006
    ctx->pc = 0x1D3C50u;
    {
        const bool branch_taken_0x1d3c50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3C54u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 9472));
        if (branch_taken_0x1d3c50) {
            ctx->pc = 0x1D3C6Cu;
            goto label_1d3c6c;
        }
    }
    ctx->pc = 0x1D3C58u;
label_1d3c58:
    // 0x1d3c58: 0x3c050025
    ctx->pc = 0x1d3c58u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1d3c5c: 0x27a40020
    ctx->pc = 0x1d3c5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d3c60: 0xc042a0c
    ctx->pc = 0x1D3C60u;
    SET_GPR_U32(ctx, 31, 0x1D3C68u);
    ctx->pc = 0x1D3C64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26240));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3C68u; }
    }
    if (ctx->pc != 0x1D3C68u) { return; }
    ctx->pc = 0x1D3C68u;
    // 0x1d3c68: 0x24102500
    ctx->pc = 0x1d3c68u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 9472));
label_1d3c6c:
    // 0x1d3c6c: 0x27a40020
    ctx->pc = 0x1d3c6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
label_1d3c70:
    // 0x1d3c70: 0xc074f70
    ctx->pc = 0x1D3C70u;
    SET_GPR_U32(ctx, 31, 0x1D3C78u);
    ctx->pc = 0x1D3C74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x1D3DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3DC0_0x1d3dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3C78u; }
    }
    if (ctx->pc != 0x1D3C78u) { return; }
    ctx->pc = 0x1D3C78u;
    // 0x1d3c78: 0x200302d
    ctx->pc = 0x1d3c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c7c: 0x24040001
    ctx->pc = 0x1d3c7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3c80: 0x24050004
    ctx->pc = 0x1d3c80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d3c84: 0x382d
    ctx->pc = 0x1d3c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c88: 0xc06b3e0
    ctx->pc = 0x1D3C88u;
    SET_GPR_U32(ctx, 31, 0x1D3C90u);
    ctx->pc = 0x1D3C8Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ACF80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACF80_0x1acf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3C90u; }
    }
    if (ctx->pc != 0x1D3C90u) { return; }
    ctx->pc = 0x1D3C90u;
    // 0x1d3c90: 0xdfbf0010
    ctx->pc = 0x1d3c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3c94: 0x7bb00000
    ctx->pc = 0x1d3c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3c98: 0x3e00008
    ctx->pc = 0x1D3C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3C9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3BE0u: goto label_1d3be0;
            case 0x1D3C1Cu: goto label_1d3c1c;
            case 0x1D3C30u: goto label_1d3c30;
            case 0x1D3C44u: goto label_1d3c44;
            case 0x1D3C58u: goto label_1d3c58;
            case 0x1D3C6Cu: goto label_1d3c6c;
            case 0x1D3C70u: goto label_1d3c70;
            case 0x1D3D6Cu: goto label_1d3d6c;
            case 0x1D3DA4u: goto label_1d3da4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3CA0u;
    // 0x1d3ca0: 0x27bdff60
    ctx->pc = 0x1d3ca0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1d3ca4: 0x3c050025
    ctx->pc = 0x1d3ca4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1d3ca8: 0xffbf0010
    ctx->pc = 0x1d3ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d3cac: 0x24a56688
    ctx->pc = 0x1d3cacu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26248));
    // 0x1d3cb0: 0x7fb00000
    ctx->pc = 0x1d3cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d3cb4: 0x90860b98
    ctx->pc = 0x1d3cb4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2968)));
    // 0x1d3cb8: 0x80802d
    ctx->pc = 0x1d3cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cbc: 0xc042a0c
    ctx->pc = 0x1D3CBCu;
    SET_GPR_U32(ctx, 31, 0x1D3CC4u);
    ctx->pc = 0x1D3CC0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3CC4u; }
    }
    if (ctx->pc != 0x1D3CC4u) { return; }
    ctx->pc = 0x1D3CC4u;
    // 0x1d3cc4: 0x92020003
    ctx->pc = 0x1d3cc4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1d3cc8: 0x27a40020
    ctx->pc = 0x1d3cc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d3ccc: 0xc074f70
    ctx->pc = 0x1D3CCCu;
    SET_GPR_U32(ctx, 31, 0x1D3CD4u);
    ctx->pc = 0x1D3CD0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4));
    ctx->pc = 0x1D3DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3DC0_0x1d3dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3CD4u; }
    }
    if (ctx->pc != 0x1D3CD4u) { return; }
    ctx->pc = 0x1D3CD4u;
    // 0x1d3cd4: 0xdfbf0010
    ctx->pc = 0x1d3cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3cd8: 0x7bb00000
    ctx->pc = 0x1d3cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3cdc: 0x3e00008
    ctx->pc = 0x1D3CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3CE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3BE0u: goto label_1d3be0;
            case 0x1D3C1Cu: goto label_1d3c1c;
            case 0x1D3C30u: goto label_1d3c30;
            case 0x1D3C44u: goto label_1d3c44;
            case 0x1D3C58u: goto label_1d3c58;
            case 0x1D3C6Cu: goto label_1d3c6c;
            case 0x1D3C70u: goto label_1d3c70;
            case 0x1D3D6Cu: goto label_1d3d6c;
            case 0x1D3DA4u: goto label_1d3da4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3CE4u;
    // 0x1d3ce4: 0x0
    ctx->pc = 0x1d3ce4u;
    // NOP
    // 0x1d3ce8: 0x0
    ctx->pc = 0x1d3ce8u;
    // NOP
    // 0x1d3cec: 0x0
    ctx->pc = 0x1d3cecu;
    // NOP
    // 0x1d3cf0: 0x3c040025
    ctx->pc = 0x1d3cf0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
    // 0x1d3cf4: 0x2405000d
    ctx->pc = 0x1d3cf4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1d3cf8: 0x8074f70
    ctx->pc = 0x1D3CF8u;
    ctx->pc = 0x1D3CFCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26264));
    ctx->pc = 0x1D3DC0u;
    sub_001D3DC0_0x1d3dc0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3D00u;
    // 0x1d3d00: 0x27bdff70
    ctx->pc = 0x1d3d00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1d3d04: 0x3c050025
    ctx->pc = 0x1d3d04u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1d3d08: 0xffbf0000
    ctx->pc = 0x1d3d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3d0c: 0x3c010032
    ctx->pc = 0x1d3d0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1d3d10: 0x942643da
    ctx->pc = 0x1d3d10u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17370)));
    // 0x1d3d14: 0x27a40010
    ctx->pc = 0x1d3d14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d3d18: 0xc042a0c
    ctx->pc = 0x1D3D18u;
    SET_GPR_U32(ctx, 31, 0x1D3D20u);
    ctx->pc = 0x1D3D1Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26280));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3D20u; }
    }
    if (ctx->pc != 0x1D3D20u) { return; }
    ctx->pc = 0x1D3D20u;
    // 0x1d3d20: 0x27a40010
    ctx->pc = 0x1d3d20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d3d24: 0xc074f70
    ctx->pc = 0x1D3D24u;
    SET_GPR_U32(ctx, 31, 0x1D3D2Cu);
    ctx->pc = 0x1D3D28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1D3DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3DC0_0x1d3dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3D2Cu; }
    }
    if (ctx->pc != 0x1D3D2Cu) { return; }
    ctx->pc = 0x1D3D2Cu;
    // 0x1d3d2c: 0xdfbf0000
    ctx->pc = 0x1d3d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3d30: 0x3e00008
    ctx->pc = 0x1D3D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3D34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3BE0u: goto label_1d3be0;
            case 0x1D3C1Cu: goto label_1d3c1c;
            case 0x1D3C30u: goto label_1d3c30;
            case 0x1D3C44u: goto label_1d3c44;
            case 0x1D3C58u: goto label_1d3c58;
            case 0x1D3C6Cu: goto label_1d3c6c;
            case 0x1D3C70u: goto label_1d3c70;
            case 0x1D3D6Cu: goto label_1d3d6c;
            case 0x1D3DA4u: goto label_1d3da4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3D38u;
    // 0x1d3d38: 0x0
    ctx->pc = 0x1d3d38u;
    // NOP
    // 0x1d3d3c: 0x0
    ctx->pc = 0x1d3d3cu;
    // NOP
    // 0x1d3d40: 0x27bdffd0
    ctx->pc = 0x1d3d40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d3d44: 0x3c010032
    ctx->pc = 0x1d3d44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1d3d48: 0xffbf0020
    ctx->pc = 0x1d3d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d3d4c: 0x7fb10010
    ctx->pc = 0x1d3d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d3d50: 0x7fb00000
    ctx->pc = 0x1d3d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d3d54: 0x80882d
    ctx->pc = 0x1d3d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d58: 0x8c30440c
    ctx->pc = 0x1d3d58u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x1d3d5c: 0xc06b3a8
    ctx->pc = 0x1D3D5Cu;
    SET_GPR_U32(ctx, 31, 0x1D3D64u);
    ctx->pc = 0x1D3D60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x1ACEA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACEA0_0x1acea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3D64u; }
    }
    if (ctx->pc != 0x1D3D64u) { return; }
    ctx->pc = 0x1D3D64u;
    // 0x1d3d64: 0xc06e0d8
    ctx->pc = 0x1D3D64u;
    SET_GPR_U32(ctx, 31, 0x1D3D6Cu);
    ctx->pc = 0x1B8360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8360_0x1b8360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3D6Cu; }
    }
    if (ctx->pc != 0x1D3D6Cu) { return; }
    ctx->pc = 0x1D3D6Cu;
label_1d3d6c:
    // 0x1d3d6c: 0xc06e0e0
    ctx->pc = 0x1D3D6Cu;
    SET_GPR_U32(ctx, 31, 0x1D3D74u);
    ctx->pc = 0x1D3D70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B8380u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8380_0x1b8380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3D74u; }
    }
    if (ctx->pc != 0x1D3D74u) { return; }
    ctx->pc = 0x1D3D74u;
    // 0x1d3d74: 0x2182b
    ctx->pc = 0x1d3d74u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1d3d78: 0x38630001
    ctx->pc = 0x1d3d78u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 1));
    // 0x1d3d7c: 0x0
    ctx->pc = 0x1d3d7cu;
    // NOP
    // 0x1d3d80: 0x1460fffa
    ctx->pc = 0x1D3D80u;
    {
        const bool branch_taken_0x1d3d80 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d3d80) {
            ctx->pc = 0x1D3D6Cu;
            goto label_1d3d6c;
        }
    }
    ctx->pc = 0x1D3D88u;
    // 0x1d3d88: 0x4400006
    ctx->pc = 0x1D3D88u;
    {
        const bool branch_taken_0x1d3d88 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D3D8Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1d3d88) {
            ctx->pc = 0x1D3DA4u;
            goto label_1d3da4;
        }
    }
    ctx->pc = 0x1D3D90u;
    // 0x1d3d90: 0x200202d
    ctx->pc = 0x1d3d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d94: 0x8c22440c
    ctx->pc = 0x1d3d94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x1d3d98: 0x2406000c
    ctx->pc = 0x1d3d98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d3d9c: 0xc06b454
    ctx->pc = 0x1D3D9Cu;
    SET_GPR_U32(ctx, 31, 0x1D3DA4u);
    ctx->pc = 0x1D3DA0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 16384));
    ctx->pc = 0x1AD150u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD150_0x1ad150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3DA4u; }
    }
    if (ctx->pc != 0x1D3DA4u) { return; }
    ctx->pc = 0x1D3DA4u;
label_1d3da4:
    // 0x1d3da4: 0xdfbf0020
    ctx->pc = 0x1d3da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3da8: 0x7bb10010
    ctx->pc = 0x1d3da8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3dac: 0x7bb00000
    ctx->pc = 0x1d3dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3db0: 0x3e00008
    ctx->pc = 0x1D3DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3DB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3BE0u: goto label_1d3be0;
            case 0x1D3C1Cu: goto label_1d3c1c;
            case 0x1D3C30u: goto label_1d3c30;
            case 0x1D3C44u: goto label_1d3c44;
            case 0x1D3C58u: goto label_1d3c58;
            case 0x1D3C6Cu: goto label_1d3c6c;
            case 0x1D3C70u: goto label_1d3c70;
            case 0x1D3D6Cu: goto label_1d3d6c;
            case 0x1D3DA4u: goto label_1d3da4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3DB8u;
    // 0x1d3db8: 0x0
    ctx->pc = 0x1d3db8u;
    // NOP
    // 0x1d3dbc: 0x0
    ctx->pc = 0x1d3dbcu;
    // NOP
}
