#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C4970
// Address: 0x1c4970 - 0x1c4ca0
void sub_001C4970_0x1c4970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c4970u;

    // 0x1c4970: 0x27bdffe0
    ctx->pc = 0x1c4970u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c4974: 0x24030063
    ctx->pc = 0x1c4974u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 99));
    // 0x1c4978: 0xffbf0010
    ctx->pc = 0x1c4978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c497c: 0x7fb00000
    ctx->pc = 0x1c497cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c4980: 0x80802d
    ctx->pc = 0x1c4980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4984: 0x80840002
    ctx->pc = 0x1c4984u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c4988: 0x108300b1
    ctx->pc = 0x1C4988u;
    {
        const bool branch_taken_0x1c4988 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C498Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 98));
        if (branch_taken_0x1c4988) {
            ctx->pc = 0x1C4C50u;
            goto label_1c4c50;
        }
    }
    ctx->pc = 0x1C4990u;
    // 0x1c4990: 0x108200a9
    ctx->pc = 0x1C4990u;
    {
        const bool branch_taken_0x1c4990 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x1c4990) {
            ctx->pc = 0x1C4C38u;
            goto label_1c4c38;
        }
    }
    ctx->pc = 0x1C4998u;
    // 0x1c4998: 0x24020002
    ctx->pc = 0x1c4998u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c499c: 0x10820076
    ctx->pc = 0x1C499Cu;
    {
        const bool branch_taken_0x1c499c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C49A0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c499c) {
            ctx->pc = 0x1C4B78u;
            goto label_1c4b78;
        }
    }
    ctx->pc = 0x1C49A4u;
    // 0x1c49a4: 0x1086001b
    ctx->pc = 0x1C49A4u;
    {
        const bool branch_taken_0x1c49a4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 6));
        if (branch_taken_0x1c49a4) {
            ctx->pc = 0x1C4A14u;
            goto label_1c4a14;
        }
    }
    ctx->pc = 0x1C49ACu;
    // 0x1c49ac: 0x10800003
    ctx->pc = 0x1C49ACu;
    {
        const bool branch_taken_0x1c49ac = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C49B0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1c49ac) {
            ctx->pc = 0x1C49BCu;
            goto label_1c49bc;
        }
    }
    ctx->pc = 0x1C49B4u;
    // 0x1c49b4: 0x100000af
    ctx->pc = 0x1C49B4u;
    {
        const bool branch_taken_0x1c49b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C49B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c49b4) {
            ctx->pc = 0x1C4C74u;
            goto label_1c4c74;
        }
    }
    ctx->pc = 0x1C49BCu;
label_1c49bc:
    // 0x1c49bc: 0x90224476
    ctx->pc = 0x1c49bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17526)));
    // 0x1c49c0: 0x14400003
    ctx->pc = 0x1C49C0u;
    {
        const bool branch_taken_0x1c49c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C49C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c49c0) {
            ctx->pc = 0x1C49D0u;
            goto label_1c49d0;
        }
    }
    ctx->pc = 0x1C49C8u;
    // 0x1c49c8: 0x100000b0
    ctx->pc = 0x1C49C8u;
    {
        const bool branch_taken_0x1c49c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C49CCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1c49c8) {
            ctx->pc = 0x1C4C8Cu;
            goto label_1c4c8c;
        }
    }
    ctx->pc = 0x1C49D0u;
label_1c49d0:
    // 0x1c49d0: 0x8e020040
    ctx->pc = 0x1c49d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1c49d4: 0x14400005
    ctx->pc = 0x1C49D4u;
    {
        const bool branch_taken_0x1c49d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c49d4) {
            ctx->pc = 0x1C49ECu;
            goto label_1c49ec;
        }
    }
    ctx->pc = 0x1C49DCu;
    // 0x1c49dc: 0xa2030002
    ctx->pc = 0x1c49dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c49e0: 0x24020005
    ctx->pc = 0x1c49e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c49e4: 0x100000a2
    ctx->pc = 0x1C49E4u;
    {
        const bool branch_taken_0x1c49e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C49E8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        if (branch_taken_0x1c49e4) {
            ctx->pc = 0x1C4C70u;
            goto label_1c4c70;
        }
    }
    ctx->pc = 0x1C49ECu;
label_1c49ec:
    // 0x1c49ec: 0xae00003c
    ctx->pc = 0x1c49ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1c49f0: 0x24020008
    ctx->pc = 0x1c49f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c49f4: 0xae02002c
    ctx->pc = 0x1c49f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1c49f8: 0x8e0500e8
    ctx->pc = 0x1c49f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1c49fc: 0xc0701c4
    ctx->pc = 0x1C49FCu;
    SET_GPR_U32(ctx, 31, 0x1C4A04u);
    ctx->pc = 0x1C4A00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1C0710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0710_0x1c0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4A04u; }
    }
    if (ctx->pc != 0x1C4A04u) { return; }
    ctx->pc = 0x1C4A04u;
    // 0x1c4a04: 0x82020002
    ctx->pc = 0x1c4a04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1c4a08: 0x24420001
    ctx->pc = 0x1c4a08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c4a0c: 0x10000098
    ctx->pc = 0x1C4A0Cu;
    {
        const bool branch_taken_0x1c4a0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4A10u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1c4a0c) {
            ctx->pc = 0x1C4C70u;
            goto label_1c4c70;
        }
    }
    ctx->pc = 0x1C4A14u;
label_1c4a14:
    // 0x1c4a14: 0xc070498
    ctx->pc = 0x1C4A14u;
    SET_GPR_U32(ctx, 31, 0x1C4A1Cu);
    ctx->pc = 0x1C1260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1260_0x1c1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4A1Cu; }
    }
    if (ctx->pc != 0x1C4A1Cu) { return; }
    ctx->pc = 0x1C4A1Cu;
    // 0x1c4a1c: 0x2403ffff
    ctx->pc = 0x1c4a1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c4a20: 0x10430093
    ctx->pc = 0x1C4A20u;
    {
        const bool branch_taken_0x1c4a20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C4A24u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967042));
        if (branch_taken_0x1c4a20) {
            ctx->pc = 0x1C4C70u;
            goto label_1c4c70;
        }
    }
    ctx->pc = 0x1C4A28u;
    // 0x1c4a28: 0x10430030
    ctx->pc = 0x1C4A28u;
    {
        const bool branch_taken_0x1c4a28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c4a28) {
            ctx->pc = 0x1C4AECu;
            goto label_1c4aec;
        }
    }
    ctx->pc = 0x1C4A30u;
    // 0x1c4a30: 0x2403ff00
    ctx->pc = 0x1c4a30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1c4a34: 0x1043002a
    ctx->pc = 0x1C4A34u;
    {
        const bool branch_taken_0x1c4a34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C4A38u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x1c4a34) {
            ctx->pc = 0x1C4AE0u;
            goto label_1c4ae0;
        }
    }
    ctx->pc = 0x1C4A3Cu;
    // 0x1c4a3c: 0x2403ff03
    ctx->pc = 0x1c4a3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967043));
    // 0x1c4a40: 0x10430024
    ctx->pc = 0x1C4A40u;
    {
        const bool branch_taken_0x1c4a40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C4A44u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 47));
        if (branch_taken_0x1c4a40) {
            ctx->pc = 0x1C4AD4u;
            goto label_1c4ad4;
        }
    }
    ctx->pc = 0x1C4A48u;
    // 0x1c4a48: 0x10400006
    ctx->pc = 0x1C4A48u;
    {
        const bool branch_taken_0x1c4a48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4A4Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c4a48) {
            ctx->pc = 0x1C4A64u;
            goto label_1c4a64;
        }
    }
    ctx->pc = 0x1C4A50u;
    // 0x1c4a50: 0x2403ff05
    ctx->pc = 0x1c4a50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967045));
    // 0x1c4a54: 0x10430003
    ctx->pc = 0x1C4A54u;
    {
        const bool branch_taken_0x1c4a54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c4a54) {
            ctx->pc = 0x1C4A64u;
            goto label_1c4a64;
        }
    }
    ctx->pc = 0x1C4A5Cu;
    // 0x1c4a5c: 0x10000027
    ctx->pc = 0x1C4A5Cu;
    {
        const bool branch_taken_0x1c4a5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4A60u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
        if (branch_taken_0x1c4a5c) {
            ctx->pc = 0x1C4AFCu;
            goto label_1c4afc;
        }
    }
    ctx->pc = 0x1C4A64u;
label_1c4a64:
    // 0x1c4a64: 0xc0704a8
    ctx->pc = 0x1C4A64u;
    SET_GPR_U32(ctx, 31, 0x1C4A6Cu);
    ctx->pc = 0x1C12A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C12A0_0x1c12a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4A6Cu; }
    }
    if (ctx->pc != 0x1C4A6Cu) { return; }
    ctx->pc = 0x1C4A6Cu;
    // 0x1c4a6c: 0x1040000d
    ctx->pc = 0x1C4A6Cu;
    {
        const bool branch_taken_0x1c4a6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c4a6c) {
            ctx->pc = 0x1C4AA4u;
            goto label_1c4aa4;
        }
    }
    ctx->pc = 0x1C4A74u;
    // 0x1c4a74: 0x2402002f
    ctx->pc = 0x1c4a74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 47));
    // 0x1c4a78: 0x24040001
    ctx->pc = 0x1c4a78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4a7c: 0xae02002c
    ctx->pc = 0x1c4a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1c4a80: 0x3c010032
    ctx->pc = 0x1c4a80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c4a84: 0xae000034
    ctx->pc = 0x1c4a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1c4a88: 0x24030063
    ctx->pc = 0x1c4a88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 99));
    // 0x1c4a8c: 0xae0400e0
    ctx->pc = 0x1c4a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 4));
    // 0x1c4a90: 0x2402003c
    ctx->pc = 0x1c4a90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c4a94: 0xa0204476
    ctx->pc = 0x1c4a94u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17526), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4a98: 0xa2030002
    ctx->pc = 0x1c4a98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c4a9c: 0x10000074
    ctx->pc = 0x1C4A9Cu;
    {
        const bool branch_taken_0x1c4a9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4AA0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x1c4a9c) {
            ctx->pc = 0x1C4C70u;
            goto label_1c4c70;
        }
    }
    ctx->pc = 0x1C4AA4u;
label_1c4aa4:
    // 0x1c4aa4: 0x24020023
    ctx->pc = 0x1c4aa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 35));
    // 0x1c4aa8: 0x200202d
    ctx->pc = 0x1c4aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4aac: 0xae02002c
    ctx->pc = 0x1c4aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1c4ab0: 0xc071504
    ctx->pc = 0x1C4AB0u;
    SET_GPR_U32(ctx, 31, 0x1C4AB8u);
    ctx->pc = 0x1C4AB4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    ctx->pc = 0x1C5410u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5410_0x1c5410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4AB8u; }
    }
    if (ctx->pc != 0x1C4AB8u) { return; }
    ctx->pc = 0x1C4AB8u;
    // 0x1c4ab8: 0x8e0500e8
    ctx->pc = 0x1c4ab8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1c4abc: 0xc070274
    ctx->pc = 0x1C4ABCu;
    SET_GPR_U32(ctx, 31, 0x1C4AC4u);
    ctx->pc = 0x1C4AC0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1C09D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C09D0_0x1c09d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4AC4u; }
    }
    if (ctx->pc != 0x1C4AC4u) { return; }
    ctx->pc = 0x1C4AC4u;
    // 0x1c4ac4: 0x82020002
    ctx->pc = 0x1c4ac4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1c4ac8: 0x24420001
    ctx->pc = 0x1c4ac8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c4acc: 0x10000068
    ctx->pc = 0x1C4ACCu;
    {
        const bool branch_taken_0x1c4acc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4AD0u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1c4acc) {
            ctx->pc = 0x1C4C70u;
            goto label_1c4c70;
        }
    }
    ctx->pc = 0x1C4AD4u;
label_1c4ad4:
    // 0x1c4ad4: 0xae03002c
    ctx->pc = 0x1c4ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1c4ad8: 0x10000007
    ctx->pc = 0x1C4AD8u;
    {
        const bool branch_taken_0x1c4ad8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4ADCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        if (branch_taken_0x1c4ad8) {
            ctx->pc = 0x1C4AF8u;
            goto label_1c4af8;
        }
    }
    ctx->pc = 0x1C4AE0u;
label_1c4ae0:
    // 0x1c4ae0: 0xae03002c
    ctx->pc = 0x1c4ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1c4ae4: 0x10000004
    ctx->pc = 0x1C4AE4u;
    {
        const bool branch_taken_0x1c4ae4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4AE8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        if (branch_taken_0x1c4ae4) {
            ctx->pc = 0x1C4AF8u;
            goto label_1c4af8;
        }
    }
    ctx->pc = 0x1C4AECu;
label_1c4aec:
    // 0x1c4aec: 0x2403002f
    ctx->pc = 0x1c4aecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 47));
    // 0x1c4af0: 0xae03002c
    ctx->pc = 0x1c4af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1c4af4: 0xae000034
    ctx->pc = 0x1c4af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1c4af8:
    // 0x1c4af8: 0x304300ff
    ctx->pc = 0x1c4af8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
label_1c4afc:
    // 0x1c4afc: 0x3c010032
    ctx->pc = 0x1c4afcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c4b00: 0xa0204476
    ctx->pc = 0x1c4b00u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17526), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4b04: 0x24020063
    ctx->pc = 0x1c4b04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
    // 0x1c4b08: 0xa2020002
    ctx->pc = 0x1c4b08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c4b0c: 0x2404003c
    ctx->pc = 0x1c4b0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c4b10: 0xae040010
    ctx->pc = 0x1c4b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x1c4b14: 0x24020004
    ctx->pc = 0x1c4b14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c4b18: 0xae030034
    ctx->pc = 0x1c4b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x1c4b1c: 0x8e030034
    ctx->pc = 0x1c4b1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c4b20: 0x10620012
    ctx->pc = 0x1C4B20u;
    {
        const bool branch_taken_0x1c4b20 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1c4b20) {
            ctx->pc = 0x1C4B6Cu;
            goto label_1c4b6c;
        }
    }
    ctx->pc = 0x1C4B28u;
    // 0x1c4b28: 0x24020003
    ctx->pc = 0x1c4b28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c4b2c: 0x1062000d
    ctx->pc = 0x1C4B2Cu;
    {
        const bool branch_taken_0x1c4b2c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C4B30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 47));
        if (branch_taken_0x1c4b2c) {
            ctx->pc = 0x1C4B64u;
            goto label_1c4b64;
        }
    }
    ctx->pc = 0x1C4B34u;
    // 0x1c4b34: 0x24020002
    ctx->pc = 0x1c4b34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c4b38: 0x10620008
    ctx->pc = 0x1C4B38u;
    {
        const bool branch_taken_0x1c4b38 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C4B3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 47));
        if (branch_taken_0x1c4b38) {
            ctx->pc = 0x1C4B5Cu;
            goto label_1c4b5c;
        }
    }
    ctx->pc = 0x1C4B40u;
    // 0x1c4b40: 0x24020001
    ctx->pc = 0x1c4b40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4b44: 0x10620003
    ctx->pc = 0x1C4B44u;
    {
        const bool branch_taken_0x1c4b44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C4B48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
        if (branch_taken_0x1c4b44) {
            ctx->pc = 0x1C4B54u;
            goto label_1c4b54;
        }
    }
    ctx->pc = 0x1C4B4Cu;
    // 0x1c4b4c: 0x10000048
    ctx->pc = 0x1C4B4Cu;
    {
        const bool branch_taken_0x1c4b4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c4b4c) {
            ctx->pc = 0x1C4C70u;
            goto label_1c4c70;
        }
    }
    ctx->pc = 0x1C4B54u;
label_1c4b54:
    // 0x1c4b54: 0x10000046
    ctx->pc = 0x1C4B54u;
    {
        const bool branch_taken_0x1c4b54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4B58u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x1c4b54) {
            ctx->pc = 0x1C4C70u;
            goto label_1c4c70;
        }
    }
    ctx->pc = 0x1C4B5Cu;
label_1c4b5c:
    // 0x1c4b5c: 0x10000044
    ctx->pc = 0x1C4B5Cu;
    {
        const bool branch_taken_0x1c4b5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4B60u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x1c4b5c) {
            ctx->pc = 0x1C4C70u;
            goto label_1c4c70;
        }
    }
    ctx->pc = 0x1C4B64u;
label_1c4b64:
    // 0x1c4b64: 0x10000042
    ctx->pc = 0x1C4B64u;
    {
        const bool branch_taken_0x1c4b64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4B68u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x1c4b64) {
            ctx->pc = 0x1C4C70u;
            goto label_1c4c70;
        }
    }
    ctx->pc = 0x1C4B6Cu;
label_1c4b6c:
    // 0x1c4b6c: 0x2402002f
    ctx->pc = 0x1c4b6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 47));
    // 0x1c4b70: 0x1000003f
    ctx->pc = 0x1C4B70u;
    {
        const bool branch_taken_0x1c4b70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4B74u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x1c4b70) {
            ctx->pc = 0x1C4C70u;
            goto label_1c4c70;
        }
    }
    ctx->pc = 0x1C4B78u;
label_1c4b78:
    // 0x1c4b78: 0xc070498
    ctx->pc = 0x1C4B78u;
    SET_GPR_U32(ctx, 31, 0x1C4B80u);
    ctx->pc = 0x1C1260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1260_0x1c1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4B80u; }
    }
    if (ctx->pc != 0x1C4B80u) { return; }
    ctx->pc = 0x1C4B80u;
    // 0x1c4b80: 0x2403ffff
    ctx->pc = 0x1c4b80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c4b84: 0x10430028
    ctx->pc = 0x1C4B84u;
    {
        const bool branch_taken_0x1c4b84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c4b84) {
            ctx->pc = 0x1C4C28u;
            goto label_1c4c28;
        }
    }
    ctx->pc = 0x1C4B8Cu;
    // 0x1c4b8c: 0x2403ff02
    ctx->pc = 0x1c4b8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967042));
    // 0x1c4b90: 0x1043001c
    ctx->pc = 0x1C4B90u;
    {
        const bool branch_taken_0x1c4b90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C4B94u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1c4b90) {
            ctx->pc = 0x1C4C04u;
            goto label_1c4c04;
        }
    }
    ctx->pc = 0x1C4B98u;
    // 0x1c4b98: 0x2403ff00
    ctx->pc = 0x1c4b98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1c4b9c: 0x1043000f
    ctx->pc = 0x1C4B9Cu;
    {
        const bool branch_taken_0x1c4b9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C4BA0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1c4b9c) {
            ctx->pc = 0x1C4BDCu;
            goto label_1c4bdc;
        }
    }
    ctx->pc = 0x1C4BA4u;
    // 0x1c4ba4: 0x10400003
    ctx->pc = 0x1C4BA4u;
    {
        const bool branch_taken_0x1c4ba4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c4ba4) {
            ctx->pc = 0x1C4BB4u;
            goto label_1c4bb4;
        }
    }
    ctx->pc = 0x1C4BACu;
    // 0x1c4bac: 0x1000ffd2
    ctx->pc = 0x1C4BACu;
    {
        const bool branch_taken_0x1c4bac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c4bac) {
            ctx->pc = 0x1C4AF8u;
            goto label_1c4af8;
        }
    }
    ctx->pc = 0x1C4BB4u;
label_1c4bb4:
    // 0x1c4bb4: 0x24020024
    ctx->pc = 0x1c4bb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c4bb8: 0x24030062
    ctx->pc = 0x1c4bb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 98));
    // 0x1c4bbc: 0xae02002c
    ctx->pc = 0x1c4bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1c4bc0: 0x3c010032
    ctx->pc = 0x1c4bc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c4bc4: 0xae000034
    ctx->pc = 0x1c4bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1c4bc8: 0x2402003c
    ctx->pc = 0x1c4bc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c4bcc: 0xa2030002
    ctx->pc = 0x1c4bccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c4bd0: 0xae020010
    ctx->pc = 0x1c4bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1c4bd4: 0x10000014
    ctx->pc = 0x1C4BD4u;
    {
        const bool branch_taken_0x1c4bd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4BD8u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 17548), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1c4bd4) {
            ctx->pc = 0x1C4C28u;
            goto label_1c4c28;
        }
    }
    ctx->pc = 0x1C4BDCu;
label_1c4bdc:
    // 0x1c4bdc: 0x24020025
    ctx->pc = 0x1c4bdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 37));
    // 0x1c4be0: 0xa0204476
    ctx->pc = 0x1c4be0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17526), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4be4: 0xae02002c
    ctx->pc = 0x1c4be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1c4be8: 0x24020063
    ctx->pc = 0x1c4be8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
    // 0x1c4bec: 0xa2020002
    ctx->pc = 0x1c4becu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c4bf0: 0x2402003c
    ctx->pc = 0x1c4bf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c4bf4: 0xae020010
    ctx->pc = 0x1c4bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1c4bf8: 0x24020001
    ctx->pc = 0x1c4bf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4bfc: 0x1000000a
    ctx->pc = 0x1C4BFCu;
    {
        const bool branch_taken_0x1c4bfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4C00u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        if (branch_taken_0x1c4bfc) {
            ctx->pc = 0x1C4C28u;
            goto label_1c4c28;
        }
    }
    ctx->pc = 0x1C4C04u;
label_1c4c04:
    // 0x1c4c04: 0x2402002e
    ctx->pc = 0x1c4c04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 46));
    // 0x1c4c08: 0xa0204476
    ctx->pc = 0x1c4c08u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17526), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4c0c: 0xae02002c
    ctx->pc = 0x1c4c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1c4c10: 0x24020063
    ctx->pc = 0x1c4c10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
    // 0x1c4c14: 0xa2020002
    ctx->pc = 0x1c4c14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c4c18: 0x2402003c
    ctx->pc = 0x1c4c18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c4c1c: 0xae020010
    ctx->pc = 0x1c4c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1c4c20: 0x24020001
    ctx->pc = 0x1c4c20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4c24: 0xae020034
    ctx->pc = 0x1c4c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_1c4c28:
    // 0x1c4c28: 0x3c010029
    ctx->pc = 0x1c4c28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x1c4c2c: 0x8c224170
    ctx->pc = 0x1c4c2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 16752)));
    // 0x1c4c30: 0x1000000f
    ctx->pc = 0x1C4C30u;
    {
        const bool branch_taken_0x1c4c30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4C34u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x1c4c30) {
            ctx->pc = 0x1C4C70u;
            goto label_1c4c70;
        }
    }
    ctx->pc = 0x1C4C38u;
label_1c4c38:
    // 0x1c4c38: 0x8e020010
    ctx->pc = 0x1c4c38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c4c3c: 0x2442ffff
    ctx->pc = 0x1c4c3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c4c40: 0x1440000b
    ctx->pc = 0x1C4C40u;
    {
        const bool branch_taken_0x1c4c40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C4C44u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x1c4c40) {
            ctx->pc = 0x1C4C70u;
            goto label_1c4c70;
        }
    }
    ctx->pc = 0x1C4C48u;
    // 0x1c4c48: 0x1000000f
    ctx->pc = 0x1C4C48u;
    {
        const bool branch_taken_0x1c4c48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4C4Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c4c48) {
            ctx->pc = 0x1C4C88u;
            goto label_1c4c88;
        }
    }
    ctx->pc = 0x1C4C50u;
label_1c4c50:
    // 0x1c4c50: 0x9602000a
    ctx->pc = 0x1c4c50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1c4c54: 0x3042fff0
    ctx->pc = 0x1c4c54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65520));
    // 0x1c4c58: 0x10400005
    ctx->pc = 0x1C4C58u;
    {
        const bool branch_taken_0x1c4c58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c4c58) {
            ctx->pc = 0x1C4C70u;
            goto label_1c4c70;
        }
    }
    ctx->pc = 0x1C4C60u;
    // 0x1c4c60: 0xc07165c
    ctx->pc = 0x1C4C60u;
    SET_GPR_U32(ctx, 31, 0x1C4C68u);
    ctx->pc = 0x1C5970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5970_0x1c5970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4C68u; }
    }
    if (ctx->pc != 0x1C4C68u) { return; }
    ctx->pc = 0x1C4C68u;
    // 0x1c4c68: 0x10000007
    ctx->pc = 0x1C4C68u;
    {
        const bool branch_taken_0x1c4c68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C4C6Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c4c68) {
            ctx->pc = 0x1C4C88u;
            goto label_1c4c88;
        }
    }
    ctx->pc = 0x1C4C70u;
label_1c4c70:
    // 0x1c4c70: 0x200202d
    ctx->pc = 0x1c4c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c4c74:
    // 0x1c4c74: 0xc0713c4
    ctx->pc = 0x1C4C74u;
    SET_GPR_U32(ctx, 31, 0x1C4C7Cu);
    ctx->pc = 0x1C4F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4F10_0x1c4f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4C7Cu; }
    }
    if (ctx->pc != 0x1C4C7Cu) { return; }
    ctx->pc = 0x1C4C7Cu;
    // 0x1c4c7c: 0xc07146c
    ctx->pc = 0x1C4C7Cu;
    SET_GPR_U32(ctx, 31, 0x1C4C84u);
    ctx->pc = 0x1C4C80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C51B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C51B0_0x1c51b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4C84u; }
    }
    if (ctx->pc != 0x1C4C84u) { return; }
    ctx->pc = 0x1C4C84u;
    // 0x1c4c84: 0x24020001
    ctx->pc = 0x1c4c84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c4c88:
    // 0x1c4c88: 0xdfbf0010
    ctx->pc = 0x1c4c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c4c8c:
    // 0x1c4c8c: 0x7bb00000
    ctx->pc = 0x1c4c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4c90: 0x3e00008
    ctx->pc = 0x1C4C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4C94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C49BCu: goto label_1c49bc;
            case 0x1C49D0u: goto label_1c49d0;
            case 0x1C49ECu: goto label_1c49ec;
            case 0x1C4A14u: goto label_1c4a14;
            case 0x1C4A64u: goto label_1c4a64;
            case 0x1C4AA4u: goto label_1c4aa4;
            case 0x1C4AD4u: goto label_1c4ad4;
            case 0x1C4AE0u: goto label_1c4ae0;
            case 0x1C4AECu: goto label_1c4aec;
            case 0x1C4AF8u: goto label_1c4af8;
            case 0x1C4AFCu: goto label_1c4afc;
            case 0x1C4B54u: goto label_1c4b54;
            case 0x1C4B5Cu: goto label_1c4b5c;
            case 0x1C4B64u: goto label_1c4b64;
            case 0x1C4B6Cu: goto label_1c4b6c;
            case 0x1C4B78u: goto label_1c4b78;
            case 0x1C4BB4u: goto label_1c4bb4;
            case 0x1C4BDCu: goto label_1c4bdc;
            case 0x1C4C04u: goto label_1c4c04;
            case 0x1C4C28u: goto label_1c4c28;
            case 0x1C4C38u: goto label_1c4c38;
            case 0x1C4C50u: goto label_1c4c50;
            case 0x1C4C70u: goto label_1c4c70;
            case 0x1C4C74u: goto label_1c4c74;
            case 0x1C4C88u: goto label_1c4c88;
            case 0x1C4C8Cu: goto label_1c4c8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C4C98u;
    // 0x1c4c98: 0x0
    ctx->pc = 0x1c4c98u;
    // NOP
    // 0x1c4c9c: 0x0
    ctx->pc = 0x1c4c9cu;
    // NOP
}
