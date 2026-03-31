#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00130B78
// Address: 0x130b78 - 0x130d48
void sub_00130B78_0x130b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130b78u;

    // 0x130b78: 0x27bdffe0
    ctx->pc = 0x130b78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130b7c: 0xffb00000
    ctx->pc = 0x130b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130b80: 0x80802d
    ctx->pc = 0x130b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b84: 0xffb10008
    ctx->pc = 0x130b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130b88: 0xffbf0010
    ctx->pc = 0x130b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x130b8c: 0x82020002
    ctx->pc = 0x130b8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x130b90: 0x5440005e
    ctx->pc = 0x130B90u;
    {
        const bool branch_taken_0x130b90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x130b90) {
            ctx->pc = 0x130B94u;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->pc = 0x130D0Cu;
            goto label_130d0c;
        }
    }
    ctx->pc = 0x130B98u;
    // 0x130b98: 0x82030044
    ctx->pc = 0x130b98u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x130b9c: 0x24020001
    ctx->pc = 0x130b9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x130ba0: 0x54620007
    ctx->pc = 0x130BA0u;
    {
        const bool branch_taken_0x130ba0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x130ba0) {
            ctx->pc = 0x130BA4u;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
            ctx->pc = 0x130BC0u;
            goto label_130bc0;
        }
    }
    ctx->pc = 0x130BA8u;
    // 0x130ba8: 0x82020043
    ctx->pc = 0x130ba8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 67)));
    // 0x130bac: 0x14400002
    ctx->pc = 0x130BACu;
    {
        const bool branch_taken_0x130bac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x130BB0u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x130bac) {
            ctx->pc = 0x130BB8u;
            goto label_130bb8;
        }
    }
    ctx->pc = 0x130BB4u;
    // 0x130bb4: 0xa2030001
    ctx->pc = 0x130bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_130bb8:
    // 0x130bb8: 0x82030042
    ctx->pc = 0x130bb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x130bbc: 0x24020001
    ctx->pc = 0x130bbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_130bc0:
    // 0x130bc0: 0x14620008
    ctx->pc = 0x130BC0u;
    {
        const bool branch_taken_0x130bc0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x130bc0) {
            ctx->pc = 0x130BE4u;
            goto label_130be4;
        }
    }
    ctx->pc = 0x130BC8u;
    // 0x130bc8: 0x8e040008
    ctx->pc = 0x130bc8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x130bcc: 0x50800004
    ctx->pc = 0x130BCCu;
    {
        const bool branch_taken_0x130bcc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x130bcc) {
            ctx->pc = 0x130BD0u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x130BE0u;
            goto label_130be0;
        }
    }
    ctx->pc = 0x130BD4u;
    // 0x130bd4: 0xc04d720
    ctx->pc = 0x130BD4u;
    SET_GPR_U32(ctx, 31, 0x130BDCu);
    ctx->pc = 0x130BD8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x135C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135C80_0x135c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130BDCu; }
    }
    if (ctx->pc != 0x130BDCu) { return; }
    ctx->pc = 0x130BDCu;
    // 0x130bdc: 0xa2000042
    ctx->pc = 0x130bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 0));
label_130be0:
    // 0x130be0: 0xa2000045
    ctx->pc = 0x130be0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 0));
label_130be4:
    // 0x130be4: 0xc0505b4
    ctx->pc = 0x130BE4u;
    SET_GPR_U32(ctx, 31, 0x130BECu);
    ctx->pc = 0x1416D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001416D0_0x1416d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130BECu; }
    }
    if (ctx->pc != 0x130BECu) { return; }
    ctx->pc = 0x130BECu;
    // 0x130bec: 0x82030041
    ctx->pc = 0x130becu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
    // 0x130bf0: 0x24020001
    ctx->pc = 0x130bf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x130bf4: 0x1462003e
    ctx->pc = 0x130BF4u;
    {
        const bool branch_taken_0x130bf4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x130bf4) {
            ctx->pc = 0x130CF0u;
            goto label_130cf0;
        }
    }
    ctx->pc = 0x130BFCu;
    // 0x130bfc: 0xc0505ba
    ctx->pc = 0x130BFCu;
    SET_GPR_U32(ctx, 31, 0x130C04u);
    ctx->pc = 0x130C00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1416E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001416E8_0x1416e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130C04u; }
    }
    if (ctx->pc != 0x130C04u) { return; }
    ctx->pc = 0x130C04u;
    // 0x130c04: 0x8e020008
    ctx->pc = 0x130c04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x130c08: 0x5440003c
    ctx->pc = 0x130C08u;
    {
        const bool branch_taken_0x130c08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x130c08) {
            ctx->pc = 0x130C0Cu;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 67)));
            ctx->pc = 0x130CFCu;
            goto label_130cfc;
        }
    }
    ctx->pc = 0x130C10u;
    // 0x130c10: 0x8e04004c
    ctx->pc = 0x130c10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x130c14: 0x302d
    ctx->pc = 0x130c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c18: 0xc04d64c
    ctx->pc = 0x130C18u;
    SET_GPR_U32(ctx, 31, 0x130C20u);
    ctx->pc = 0x130C1Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->pc = 0x135930u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135930_0x135930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130C20u; }
    }
    if (ctx->pc != 0x130C20u) { return; }
    ctx->pc = 0x130C20u;
    // 0x130c20: 0x1440000b
    ctx->pc = 0x130C20u;
    {
        const bool branch_taken_0x130c20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x130C24u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x130c20) {
            ctx->pc = 0x130C50u;
            goto label_130c50;
        }
    }
    ctx->pc = 0x130C28u;
    // 0x130c28: 0x3c040024
    ctx->pc = 0x130c28u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x130c2c: 0x8e05004c
    ctx->pc = 0x130c2cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x130c30: 0xc04a04a
    ctx->pc = 0x130C30u;
    SET_GPR_U32(ctx, 31, 0x130C38u);
    ctx->pc = 0x130C34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946320));
    ctx->pc = 0x128128u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128128_0x128128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130C38u; }
    }
    if (ctx->pc != 0x130C38u) { return; }
    ctx->pc = 0x130C38u;
    // 0x130c38: 0x24020004
    ctx->pc = 0x130c38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x130c3c: 0xa2020001
    ctx->pc = 0x130c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x130c40: 0xa2000041
    ctx->pc = 0x130c40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 0));
    // 0x130c44: 0x1000003a
    ctx->pc = 0x130C44u;
    {
        const bool branch_taken_0x130c44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x130C48u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x130c44) {
            ctx->pc = 0x130D30u;
            goto label_130d30;
        }
    }
    ctx->pc = 0x130C4Cu;
    // 0x130c4c: 0x0
    ctx->pc = 0x130c4cu;
    // NOP
label_130c50:
    // 0x130c50: 0x282d
    ctx->pc = 0x130c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c54: 0x24060002
    ctx->pc = 0x130c54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x130c58: 0xc04d758
    ctx->pc = 0x130C58u;
    SET_GPR_U32(ctx, 31, 0x130C60u);
    ctx->pc = 0x130C5Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135D60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135D60_0x135d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130C60u; }
    }
    if (ctx->pc != 0x130C60u) { return; }
    ctx->pc = 0x130C60u;
    // 0x130c60: 0xc04d73e
    ctx->pc = 0x130C60u;
    SET_GPR_U32(ctx, 31, 0x130C68u);
    ctx->pc = 0x130C64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x135CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135CF8_0x135cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130C68u; }
    }
    if (ctx->pc != 0x130C68u) { return; }
    ctx->pc = 0x130C68u;
    // 0x130c68: 0x8e040008
    ctx->pc = 0x130c68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x130c6c: 0x282d
    ctx->pc = 0x130c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c70: 0x302d
    ctx->pc = 0x130c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c74: 0xc04d758
    ctx->pc = 0x130C74u;
    SET_GPR_U32(ctx, 31, 0x130C7Cu);
    ctx->pc = 0x130C78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135D60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135D60_0x135d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130C7Cu; }
    }
    if (ctx->pc != 0x130C7Cu) { return; }
    ctx->pc = 0x130C7Cu;
    // 0x130c7c: 0x3c027fff
    ctx->pc = 0x130c7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x130c80: 0x8e050010
    ctx->pc = 0x130c80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x130c84: 0x3442f800
    ctx->pc = 0x130c84u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 63488));
    // 0x130c88: 0x14a20003
    ctx->pc = 0x130C88u;
    {
        const bool branch_taken_0x130c88 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x130C8Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 11));
        if (branch_taken_0x130c88) {
            ctx->pc = 0x130C98u;
            goto label_130c98;
        }
    }
    ctx->pc = 0x130C90u;
    // 0x130c90: 0x10000011
    ctx->pc = 0x130C90u;
    {
        const bool branch_taken_0x130c90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x130C94u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        if (branch_taken_0x130c90) {
            ctx->pc = 0x130CD8u;
            goto label_130cd8;
        }
    }
    ctx->pc = 0x130C98u;
label_130c98:
    // 0x130c98: 0x8e06000c
    ctx->pc = 0x130c98u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x130c9c: 0x226102a
    ctx->pc = 0x130c9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 6)));
    // 0x130ca0: 0x10400003
    ctx->pc = 0x130CA0u;
    {
        const bool branch_taken_0x130ca0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x130CA4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 2047));
        if (branch_taken_0x130ca0) {
            ctx->pc = 0x130CB0u;
            goto label_130cb0;
        }
    }
    ctx->pc = 0x130CA8u;
    // 0x130ca8: 0xae11000c
    ctx->pc = 0x130ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x130cac: 0x220302d
    ctx->pc = 0x130cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_130cb0:
    // 0x130cb0: 0x28a30000
    ctx->pc = 0x130cb0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 0));
    // 0x130cb4: 0x83280b
    ctx->pc = 0x130cb4u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 4));
    // 0x130cb8: 0x512c3
    ctx->pc = 0x130cb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 11));
    // 0x130cbc: 0x461021
    ctx->pc = 0x130cbcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x130cc0: 0x222102a
    ctx->pc = 0x130cc0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x130cc4: 0x10400005
    ctx->pc = 0x130CC4u;
    {
        const bool branch_taken_0x130cc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x130CC8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x130cc4) {
            ctx->pc = 0x130CDCu;
            goto label_130cdc;
        }
    }
    ctx->pc = 0x130CCCu;
    // 0x130ccc: 0x2261023
    ctx->pc = 0x130cccu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x130cd0: 0x212c0
    ctx->pc = 0x130cd0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x130cd4: 0xae020010
    ctx->pc = 0x130cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_130cd8:
    // 0x130cd8: 0x200202d
    ctx->pc = 0x130cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_130cdc:
    // 0x130cdc: 0xc04c170
    ctx->pc = 0x130CDCu;
    SET_GPR_U32(ctx, 31, 0x130CE4u);
    ctx->pc = 0x130CE0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1305C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001305C0_0x1305c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130CE4u; }
    }
    if (ctx->pc != 0x130CE4u) { return; }
    ctx->pc = 0x130CE4u;
    // 0x130ce4: 0x10000004
    ctx->pc = 0x130CE4u;
    {
        const bool branch_taken_0x130ce4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x130CE8u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x130ce4) {
            ctx->pc = 0x130CF8u;
            goto label_130cf8;
        }
    }
    ctx->pc = 0x130CECu;
    // 0x130cec: 0x0
    ctx->pc = 0x130cecu;
    // NOP
label_130cf0:
    // 0x130cf0: 0xc0505ba
    ctx->pc = 0x130CF0u;
    SET_GPR_U32(ctx, 31, 0x130CF8u);
    ctx->pc = 0x1416E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001416E8_0x1416e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130CF8u; }
    }
    if (ctx->pc != 0x130CF8u) { return; }
    ctx->pc = 0x130CF8u;
label_130cf8:
    // 0x130cf8: 0x82030043
    ctx->pc = 0x130cf8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 67)));
label_130cfc:
    // 0x130cfc: 0x24020001
    ctx->pc = 0x130cfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x130d00: 0x50620001
    ctx->pc = 0x130D00u;
    {
        const bool branch_taken_0x130d00 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x130d00) {
            ctx->pc = 0x130D04u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 67), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x130D08u;
            goto label_130d08;
        }
    }
    ctx->pc = 0x130D08u;
label_130d08:
    // 0x130d08: 0x82030001
    ctx->pc = 0x130d08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_130d0c:
    // 0x130d0c: 0x24020002
    ctx->pc = 0x130d0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x130d10: 0x54620008
    ctx->pc = 0x130D10u;
    {
        const bool branch_taken_0x130d10 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x130d10) {
            ctx->pc = 0x130D14u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x130D34u;
            goto label_130d34;
        }
    }
    ctx->pc = 0x130D18u;
    // 0x130d18: 0x82030045
    ctx->pc = 0x130d18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x130d1c: 0x24020001
    ctx->pc = 0x130d1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x130d20: 0x54620004
    ctx->pc = 0x130D20u;
    {
        const bool branch_taken_0x130d20 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x130d20) {
            ctx->pc = 0x130D24u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x130D34u;
            goto label_130d34;
        }
    }
    ctx->pc = 0x130D28u;
    // 0x130d28: 0xc04c200
    ctx->pc = 0x130D28u;
    SET_GPR_U32(ctx, 31, 0x130D30u);
    ctx->pc = 0x130D2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130800u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130800_0x130800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130D30u; }
    }
    if (ctx->pc != 0x130D30u) { return; }
    ctx->pc = 0x130D30u;
label_130d30:
    // 0x130d30: 0xdfb00000
    ctx->pc = 0x130d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_130d34:
    // 0x130d34: 0xdfb10008
    ctx->pc = 0x130d34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130d38: 0xdfbf0010
    ctx->pc = 0x130d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130d3c: 0x3e00008
    ctx->pc = 0x130D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130D40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130BB8u: goto label_130bb8;
            case 0x130BC0u: goto label_130bc0;
            case 0x130BE0u: goto label_130be0;
            case 0x130BE4u: goto label_130be4;
            case 0x130C50u: goto label_130c50;
            case 0x130C98u: goto label_130c98;
            case 0x130CB0u: goto label_130cb0;
            case 0x130CD8u: goto label_130cd8;
            case 0x130CDCu: goto label_130cdc;
            case 0x130CF0u: goto label_130cf0;
            case 0x130CF8u: goto label_130cf8;
            case 0x130CFCu: goto label_130cfc;
            case 0x130D08u: goto label_130d08;
            case 0x130D0Cu: goto label_130d0c;
            case 0x130D30u: goto label_130d30;
            case 0x130D34u: goto label_130d34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130D44u;
    // 0x130d44: 0x0
    ctx->pc = 0x130d44u;
    // NOP
}
