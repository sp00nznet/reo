#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00180B88
// Address: 0x180b88 - 0x180cd0
void sub_00180B88_0x180b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x180b88u;

    // 0x180b88: 0x27bdff60
    ctx->pc = 0x180b88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x180b8c: 0x3c020023
    ctx->pc = 0x180b8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x180b90: 0xffb20090
    ctx->pc = 0x180b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x180b94: 0x24120001
    ctx->pc = 0x180b94u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x180b98: 0xffb00080
    ctx->pc = 0x180b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x180b9c: 0x2445fa10
    ctx->pc = 0x180b9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294965776));
    // 0x180ba0: 0xffb10088
    ctx->pc = 0x180ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x180ba4: 0xffbf0098
    ctx->pc = 0x180ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x180ba8: 0x8ca30000
    ctx->pc = 0x180ba8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x180bac: 0x10720042
    ctx->pc = 0x180BACu;
    {
        const bool branch_taken_0x180bac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 18));
        ctx->pc = 0x180BB0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x180bac) {
            ctx->pc = 0x180CB8u;
            goto label_180cb8;
        }
    }
    ctx->pc = 0x180BB4u;
    // 0x180bb4: 0x3c028101
    ctx->pc = 0x180bb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x180bb8: 0x1480003f
    ctx->pc = 0x180BB8u;
    {
        const bool branch_taken_0x180bb8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x180BBCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 22));
        if (branch_taken_0x180bb8) {
            ctx->pc = 0x180CB8u;
            goto label_180cb8;
        }
    }
    ctx->pc = 0x180BC0u;
    // 0x180bc0: 0xacb20000
    ctx->pc = 0x180bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 18));
    // 0x180bc4: 0x27b00060
    ctx->pc = 0x180bc4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 96));
    // 0x180bc8: 0x3c020028
    ctx->pc = 0x180bc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)40 << 16));
    // 0x180bcc: 0x2403ffff
    ctx->pc = 0x180bccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x180bd0: 0x24519a20
    ctx->pc = 0x180bd0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294941216));
    // 0x180bd4: 0x200202d
    ctx->pc = 0x180bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180bd8: 0xae230008
    ctx->pc = 0x180bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x180bdc: 0xae230000
    ctx->pc = 0x180bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x180be0: 0xae230004
    ctx->pc = 0x180be0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x180be4: 0xafa00068
    ctx->pc = 0x180be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x180be8: 0xc045188
    ctx->pc = 0x180BE8u;
    SET_GPR_U32(ctx, 31, 0x180BF0u);
    ctx->pc = 0x180BECu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 18));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180BF0u; }
    }
    if (ctx->pc != 0x180BF0u) { return; }
    ctx->pc = 0x180BF0u;
    // 0x180bf0: 0x40182d
    ctx->pc = 0x180bf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180bf4: 0x3c028101
    ctx->pc = 0x180bf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x180bf8: 0x200202d
    ctx->pc = 0x180bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180bfc: 0xae230004
    ctx->pc = 0x180bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x180c00: 0x460002d
    ctx->pc = 0x180C00u;
    {
        const bool branch_taken_0x180c00 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x180C04u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32771));
        if (branch_taken_0x180c00) {
            ctx->pc = 0x180CB8u;
            goto label_180cb8;
        }
    }
    ctx->pc = 0x180C08u;
    // 0x180c08: 0xafa00068
    ctx->pc = 0x180c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x180c0c: 0xc045188
    ctx->pc = 0x180C0Cu;
    SET_GPR_U32(ctx, 31, 0x180C14u);
    ctx->pc = 0x180C10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 18));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C14u; }
    }
    if (ctx->pc != 0x180C14u) { return; }
    ctx->pc = 0x180C14u;
    // 0x180c14: 0x3c040028
    ctx->pc = 0x180c14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)40 << 16));
    // 0x180c18: 0x3c030018
    ctx->pc = 0x180c18u;
    SET_GPR_U32(ctx, 3, ((uint32_t)24 << 16));
    // 0x180c1c: 0x3c050026
    ctx->pc = 0x180c1cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
    // 0x180c20: 0x24869a40
    ctx->pc = 0x180c20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 4294941248));
    // 0x180c24: 0x24631a28
    ctx->pc = 0x180c24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6696));
    // 0x180c28: 0x24a51cf0
    ctx->pc = 0x180c28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7408));
    // 0x180c2c: 0x3a0202d
    ctx->pc = 0x180c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c30: 0x4410007
    ctx->pc = 0x180C30u;
    {
        const bool branch_taken_0x180c30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x180C34u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x180c30) {
            ctx->pc = 0x180C50u;
            goto label_180c50;
        }
    }
    ctx->pc = 0x180C38u;
    // 0x180c38: 0xc060334
    ctx->pc = 0x180C38u;
    SET_GPR_U32(ctx, 31, 0x180C40u);
    ctx->pc = 0x180CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CD0_0x180cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C40u; }
    }
    if (ctx->pc != 0x180C40u) { return; }
    ctx->pc = 0x180C40u;
    // 0x180c40: 0x3c028101
    ctx->pc = 0x180c40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x180c44: 0x1000001c
    ctx->pc = 0x180C44u;
    {
        const bool branch_taken_0x180c44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x180C48u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32771));
        if (branch_taken_0x180c44) {
            ctx->pc = 0x180CB8u;
            goto label_180cb8;
        }
    }
    ctx->pc = 0x180C4Cu;
    // 0x180c4c: 0x0
    ctx->pc = 0x180c4cu;
    // NOP
label_180c50:
    // 0x180c50: 0x3c020028
    ctx->pc = 0x180c50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)40 << 16));
    // 0x180c54: 0xafa30004
    ctx->pc = 0x180c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x180c58: 0xac409504
    ctx->pc = 0x180c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294939908), GPR_U32(ctx, 0));
    // 0x180c5c: 0x3402c000
    ctx->pc = 0x180c5cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 49152));
    // 0x180c60: 0xafa60008
    ctx->pc = 0x180c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x180c64: 0xafa2000c
    ctx->pc = 0x180c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x180c68: 0xafa50010
    ctx->pc = 0x180c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x180c6c: 0xc045108
    ctx->pc = 0x180C6Cu;
    SET_GPR_U32(ctx, 31, 0x180C74u);
    ctx->pc = 0x180C70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 18));
    ctx->pc = 0x114420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114420_0x114420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C74u; }
    }
    if (ctx->pc != 0x180C74u) { return; }
    ctx->pc = 0x180C74u;
    // 0x180c74: 0x4410006
    ctx->pc = 0x180C74u;
    {
        const bool branch_taken_0x180c74 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x180C78u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x180c74) {
            ctx->pc = 0x180C90u;
            goto label_180c90;
        }
    }
    ctx->pc = 0x180C7Cu;
    // 0x180c7c: 0xc060334
    ctx->pc = 0x180C7Cu;
    SET_GPR_U32(ctx, 31, 0x180C84u);
    ctx->pc = 0x180CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CD0_0x180cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C84u; }
    }
    if (ctx->pc != 0x180C84u) { return; }
    ctx->pc = 0x180C84u;
    // 0x180c84: 0x3c028101
    ctx->pc = 0x180c84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x180c88: 0x1000000b
    ctx->pc = 0x180C88u;
    {
        const bool branch_taken_0x180c88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x180C8Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32772));
        if (branch_taken_0x180c88) {
            ctx->pc = 0x180CB8u;
            goto label_180cb8;
        }
    }
    ctx->pc = 0x180C90u;
label_180c90:
    // 0x180c90: 0xc061e0e
    ctx->pc = 0x180C90u;
    SET_GPR_U32(ctx, 31, 0x180C98u);
    ctx->pc = 0x187838u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187838_0x187838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C98u; }
    }
    if (ctx->pc != 0x180C98u) { return; }
    ctx->pc = 0x180C98u;
    // 0x180c98: 0xc061aea
    ctx->pc = 0x180C98u;
    SET_GPR_U32(ctx, 31, 0x180CA0u);
    ctx->pc = 0x186BA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00186BA8_0x186ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180CA0u; }
    }
    if (ctx->pc != 0x180CA0u) { return; }
    ctx->pc = 0x180CA0u;
    // 0x180ca0: 0xc060a08
    ctx->pc = 0x180CA0u;
    SET_GPR_U32(ctx, 31, 0x180CA8u);
    ctx->pc = 0x182820u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182820_0x182820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180CA8u; }
    }
    if (ctx->pc != 0x180CA8u) { return; }
    ctx->pc = 0x180CA8u;
    // 0x180ca8: 0x8e240000
    ctx->pc = 0x180ca8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x180cac: 0xc045110
    ctx->pc = 0x180CACu;
    SET_GPR_U32(ctx, 31, 0x180CB4u);
    ctx->pc = 0x180CB0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114440_0x114440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180CB4u; }
    }
    if (ctx->pc != 0x180CB4u) { return; }
    ctx->pc = 0x180CB4u;
    // 0x180cb4: 0x102d
    ctx->pc = 0x180cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180cb8:
    // 0x180cb8: 0xdfb00080
    ctx->pc = 0x180cb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x180cbc: 0xdfb10088
    ctx->pc = 0x180cbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x180cc0: 0xdfb20090
    ctx->pc = 0x180cc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x180cc4: 0xdfbf0098
    ctx->pc = 0x180cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x180cc8: 0x3e00008
    ctx->pc = 0x180CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180CCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180C50u: goto label_180c50;
            case 0x180C90u: goto label_180c90;
            case 0x180CB8u: goto label_180cb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180CD0u;
}
