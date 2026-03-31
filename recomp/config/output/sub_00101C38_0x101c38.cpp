#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00101C38
// Address: 0x101c38 - 0x101d08
void sub_00101C38_0x101c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x101c38u;

    // 0x101c38: 0x27bdffb0
    ctx->pc = 0x101c38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x101c3c: 0xffb10020
    ctx->pc = 0x101c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x101c40: 0xffb00010
    ctx->pc = 0x101c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x101c44: 0x3c110021
    ctx->pc = 0x101c44u;
    SET_GPR_U32(ctx, 17, ((uint32_t)33 << 16));
    // 0x101c48: 0xffb20030
    ctx->pc = 0x101c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x101c4c: 0x80802d
    ctx->pc = 0x101c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c50: 0xffbf0040
    ctx->pc = 0x101c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x101c54: 0x26328f40
    ctx->pc = 0x101c54u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 4294938432));
    // 0x101c58: 0xc0403a2
    ctx->pc = 0x101C58u;
    SET_GPR_U32(ctx, 31, 0x101C60u);
    ctx->pc = 0x101C5Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 34));
    ctx->pc = 0x100E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00100E88_0x100e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C60u; }
    }
    if (ctx->pc != 0x101C60u) { return; }
    ctx->pc = 0x101C60u;
    // 0x101c60: 0x54400003
    ctx->pc = 0x101C60u;
    {
        const bool branch_taken_0x101c60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x101c60) {
            ctx->pc = 0x101C64u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294938432), GPR_U32(ctx, 16));
            ctx->pc = 0x101C70u;
            goto label_101c70;
        }
    }
    ctx->pc = 0x101C68u;
    // 0x101c68: 0x10000021
    ctx->pc = 0x101C68u;
    {
        const bool branch_taken_0x101c68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x101C6Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x101c68) {
            ctx->pc = 0x101CF0u;
            goto label_101cf0;
        }
    }
    ctx->pc = 0x101C70u;
label_101c70:
    // 0x101c70: 0x240202d
    ctx->pc = 0x101c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c74: 0xc045bf4
    ctx->pc = 0x101C74u;
    SET_GPR_U32(ctx, 31, 0x101C7Cu);
    ctx->pc = 0x101C78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x116FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116FD0_0x116fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C7Cu; }
    }
    if (ctx->pc != 0x101C7Cu) { return; }
    ctx->pc = 0x101C7Cu;
    // 0x101c7c: 0x3c040021
    ctx->pc = 0x101c7cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
    // 0x101c80: 0x3c060021
    ctx->pc = 0x101c80u;
    SET_GPR_U32(ctx, 6, ((uint32_t)33 << 16));
    // 0x101c84: 0x3c030021
    ctx->pc = 0x101c84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x101c88: 0x3c020021
    ctx->pc = 0x101c88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x101c8c: 0x8c8894ac
    ctx->pc = 0x101c8cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 4294939820)));
    // 0x101c90: 0x24508b00
    ctx->pc = 0x101c90u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294937344));
    // 0x101c94: 0x3c040021
    ctx->pc = 0x101c94u;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
    // 0x101c98: 0x8cca94b0
    ctx->pc = 0x101c98u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 6), 4294939824)));
    // 0x101c9c: 0x8c6594a8
    ctx->pc = 0x101c9cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294939816)));
    // 0x101ca0: 0x24849480
    ctx->pc = 0x101ca0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939776));
    // 0x101ca4: 0x240382d
    ctx->pc = 0x101ca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ca8: 0xafa00000
    ctx->pc = 0x101ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x101cac: 0x302d
    ctx->pc = 0x101cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101cb0: 0x200482d
    ctx->pc = 0x101cb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101cb4: 0xc045e7a
    ctx->pc = 0x101CB4u;
    SET_GPR_U32(ctx, 31, 0x101CBCu);
    ctx->pc = 0x101CB8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101CBCu; }
    }
    if (ctx->pc != 0x101CBCu) { return; }
    ctx->pc = 0x101CBCu;
    // 0x101cbc: 0x4410006
    ctx->pc = 0x101CBCu;
    {
        const bool branch_taken_0x101cbc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x101CC0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)32 << 16));
        if (branch_taken_0x101cbc) {
            ctx->pc = 0x101CD8u;
            goto label_101cd8;
        }
    }
    ctx->pc = 0x101CC4u;
    // 0x101cc4: 0x3c020020
    ctx->pc = 0x101cc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
    // 0x101cc8: 0xc045190
    ctx->pc = 0x101CC8u;
    SET_GPR_U32(ctx, 31, 0x101CD0u);
    ctx->pc = 0x101CCCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 31020)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101CD0u; }
    }
    if (ctx->pc != 0x101CD0u) { return; }
    ctx->pc = 0x101CD0u;
    // 0x101cd0: 0x10000007
    ctx->pc = 0x101CD0u;
    {
        const bool branch_taken_0x101cd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x101CD4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x101cd0) {
            ctx->pc = 0x101CF0u;
            goto label_101cf0;
        }
    }
    ctx->pc = 0x101CD8u;
label_101cd8:
    // 0x101cd8: 0x3c022000
    ctx->pc = 0x101cd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x101cdc: 0x2021025
    ctx->pc = 0x101cdcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x101ce0: 0x8c64792c
    ctx->pc = 0x101ce0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 31020)));
    // 0x101ce4: 0xc045190
    ctx->pc = 0x101CE4u;
    SET_GPR_U32(ctx, 31, 0x101CECu);
    ctx->pc = 0x101CE8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101CECu; }
    }
    if (ctx->pc != 0x101CECu) { return; }
    ctx->pc = 0x101CECu;
    // 0x101cec: 0x200102d
    ctx->pc = 0x101cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_101cf0:
    // 0x101cf0: 0xdfbf0040
    ctx->pc = 0x101cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101cf4: 0xdfb20030
    ctx->pc = 0x101cf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101cf8: 0xdfb10020
    ctx->pc = 0x101cf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101cfc: 0xdfb00010
    ctx->pc = 0x101cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101d00: 0x3e00008
    ctx->pc = 0x101D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101D04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101C70u: goto label_101c70;
            case 0x101CD8u: goto label_101cd8;
            case 0x101CF0u: goto label_101cf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101D08u;
}
