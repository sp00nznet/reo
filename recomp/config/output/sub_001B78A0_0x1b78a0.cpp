#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B78A0
// Address: 0x1b78a0 - 0x1b7b00
void sub_001B78A0_0x1b78a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b78a0u;

label_1b78a0:
    // 0x1b78a0: 0x27bdffa0
    ctx->pc = 0x1b78a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b78a4: 0x3c010032
    ctx->pc = 0x1b78a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b78a8: 0xffbf0050
    ctx->pc = 0x1b78a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b78ac: 0x7fb40040
    ctx->pc = 0x1b78acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b78b0: 0x7fb30030
    ctx->pc = 0x1b78b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b78b4: 0x80a02d
    ctx->pc = 0x1b78b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b78b8: 0x7fb20020
    ctx->pc = 0x1b78b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b78bc: 0x7fb10010
    ctx->pc = 0x1b78bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b78c0: 0x7fb00000
    ctx->pc = 0x1b78c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b78c4: 0x902343d6
    ctx->pc = 0x1b78c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17366)));
    // 0x1b78c8: 0x3c10002c
    ctx->pc = 0x1b78c8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)44 << 16));
    // 0x1b78cc: 0x14600005
    ctx->pc = 0x1B78CCu;
    {
        const bool branch_taken_0x1b78cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B78D0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294945520));
        if (branch_taken_0x1b78cc) {
            ctx->pc = 0x1B78E4u;
            goto label_1b78e4;
        }
    }
    ctx->pc = 0x1B78D4u;
    // 0x1b78d4: 0x3c010032
    ctx->pc = 0x1b78d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b78d8: 0x902343ea
    ctx->pc = 0x1b78d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17386)));
    // 0x1b78dc: 0x10600059
    ctx->pc = 0x1B78DCu;
    {
        const bool branch_taken_0x1b78dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b78dc) {
            ctx->pc = 0x1B7A44u;
            goto label_1b7a44;
        }
    }
    ctx->pc = 0x1B78E4u;
label_1b78e4:
    // 0x1b78e4: 0x8e030000
    ctx->pc = 0x1b78e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b78e8: 0x10600015
    ctx->pc = 0x1B78E8u;
    {
        const bool branch_taken_0x1b78e8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B78ECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 95));
        if (branch_taken_0x1b78e8) {
            ctx->pc = 0x1B7940u;
            goto label_1b7940;
        }
    }
    ctx->pc = 0x1B78F0u;
    // 0x1b78f0: 0xc06bde0
    ctx->pc = 0x1B78F0u;
    SET_GPR_U32(ctx, 31, 0x1B78F8u);
    ctx->pc = 0x1B78F4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B78F8u; }
    }
    if (ctx->pc != 0x1B78F8u) { return; }
    ctx->pc = 0x1B78F8u;
    // 0x1b78f8: 0x24040060
    ctx->pc = 0x1b78f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
    // 0x1b78fc: 0xc06bde0
    ctx->pc = 0x1B78FCu;
    SET_GPR_U32(ctx, 31, 0x1B7904u);
    ctx->pc = 0x1B7900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7904u; }
    }
    if (ctx->pc != 0x1B7904u) { return; }
    ctx->pc = 0x1B7904u;
    // 0x1b7904: 0x8e0200a0
    ctx->pc = 0x1b7904u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1b7908: 0x10400006
    ctx->pc = 0x1B7908u;
    {
        const bool branch_taken_0x1b7908 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B790Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
        if (branch_taken_0x1b7908) {
            ctx->pc = 0x1B7924u;
            goto label_1b7924;
        }
    }
    ctx->pc = 0x1B7910u;
    // 0x1b7910: 0x2404006c
    ctx->pc = 0x1b7910u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
    // 0x1b7914: 0xc06bde0
    ctx->pc = 0x1B7914u;
    SET_GPR_U32(ctx, 31, 0x1B791Cu);
    ctx->pc = 0x1B7918u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B791Cu; }
    }
    if (ctx->pc != 0x1B791Cu) { return; }
    ctx->pc = 0x1B791Cu;
    // 0x1b791c: 0x10000004
    ctx->pc = 0x1B791Cu;
    {
        const bool branch_taken_0x1b791c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B7920u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b791c) {
            ctx->pc = 0x1B7930u;
            goto label_1b7930;
        }
    }
    ctx->pc = 0x1B7924u;
label_1b7924:
    // 0x1b7924: 0xc06bde0
    ctx->pc = 0x1B7924u;
    SET_GPR_U32(ctx, 31, 0x1B792Cu);
    ctx->pc = 0x1B7928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B792Cu; }
    }
    if (ctx->pc != 0x1B792Cu) { return; }
    ctx->pc = 0x1B792Cu;
    // 0x1b792c: 0x280202d
    ctx->pc = 0x1b792cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b7930:
    // 0x1b7930: 0xc06d6b8
    ctx->pc = 0x1B7930u;
    SET_GPR_U32(ctx, 31, 0x1B7938u);
    ctx->pc = 0x1B5AE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5AE0_0x1b5ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7938u; }
    }
    if (ctx->pc != 0x1B7938u) { return; }
    ctx->pc = 0x1B7938u;
    // 0x1b7938: 0x10000043
    ctx->pc = 0x1B7938u;
    {
        const bool branch_taken_0x1b7938 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B793Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x1b7938) {
            ctx->pc = 0x1B7A48u;
            goto label_1b7a48;
        }
    }
    ctx->pc = 0x1B7940u;
label_1b7940:
    // 0x1b7940: 0x8e130070
    ctx->pc = 0x1b7940u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1b7944: 0x8e12004c
    ctx->pc = 0x1b7944u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_1b7948:
    // 0x1b7948: 0x92840000
    ctx->pc = 0x1b7948u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b794c: 0x1080003c
    ctx->pc = 0x1B794Cu;
    {
        const bool branch_taken_0x1b794c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B7950u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x1b794c) {
            ctx->pc = 0x1B7A40u;
            goto label_1b7a40;
        }
    }
    ctx->pc = 0x1B7954u;
    // 0x1b7954: 0x2403000a
    ctx->pc = 0x1b7954u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b7958: 0x14830007
    ctx->pc = 0x1B7958u;
    {
        const bool branch_taken_0x1b7958 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1B795Cu;
        SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 4), 128));
        if (branch_taken_0x1b7958) {
            ctx->pc = 0x1B7978u;
            goto label_1b7978;
        }
    }
    ctx->pc = 0x1B7960u;
    // 0x1b7960: 0xae130070
    ctx->pc = 0x1b7960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 19));
    // 0x1b7964: 0x8e04006c
    ctx->pc = 0x1b7964u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1b7968: 0x8e030074
    ctx->pc = 0x1b7968u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1b796c: 0x641821
    ctx->pc = 0x1b796cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b7970: 0x1000fff5
    ctx->pc = 0x1B7970u;
    {
        const bool branch_taken_0x1b7970 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B7974u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
        if (branch_taken_0x1b7970) {
            ctx->pc = 0x1B7948u;
            goto label_1b7948;
        }
    }
    ctx->pc = 0x1B7978u;
label_1b7978:
    // 0x1b7978: 0x14600003
    ctx->pc = 0x1B7978u;
    {
        const bool branch_taken_0x1b7978 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B797Cu;
        SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), 160));
        if (branch_taken_0x1b7978) {
            ctx->pc = 0x1B7988u;
            goto label_1b7988;
        }
    }
    ctx->pc = 0x1B7980u;
    // 0x1b7980: 0x14200006
    ctx->pc = 0x1B7980u;
    {
        const bool branch_taken_0x1b7980 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b7980) {
            ctx->pc = 0x1B799Cu;
            goto label_1b799c;
        }
    }
    ctx->pc = 0x1B7988u;
label_1b7988:
    // 0x1b7988: 0x2c8300e0
    ctx->pc = 0x1b7988u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 4), 224));
    // 0x1b798c: 0x1460000a
    ctx->pc = 0x1B798Cu;
    {
        const bool branch_taken_0x1b798c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B7990u;
        SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), 256));
        if (branch_taken_0x1b798c) {
            ctx->pc = 0x1B79B8u;
            goto label_1b79b8;
        }
    }
    ctx->pc = 0x1B7994u;
    // 0x1b7994: 0x10200008
    ctx->pc = 0x1B7994u;
    {
        const bool branch_taken_0x1b7994 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b7994) {
            ctx->pc = 0x1B79B8u;
            goto label_1b79b8;
        }
    }
    ctx->pc = 0x1B799Cu;
label_1b799c:
    // 0x1b799c: 0x92830000
    ctx->pc = 0x1b799cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b79a0: 0x10600027
    ctx->pc = 0x1B79A0u;
    {
        const bool branch_taken_0x1b79a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B79A4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x1b79a0) {
            ctx->pc = 0x1B7A40u;
            goto label_1b7a40;
        }
    }
    ctx->pc = 0x1B79A8u;
    // 0x1b79a8: 0x41200
    ctx->pc = 0x1b79a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 8));
    // 0x1b79ac: 0x882d
    ctx->pc = 0x1b79acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b79b0: 0x10000005
    ctx->pc = 0x1B79B0u;
    {
        const bool branch_taken_0x1b79b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B79B4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x1b79b0) {
            ctx->pc = 0x1B79C8u;
            goto label_1b79c8;
        }
    }
    ctx->pc = 0x1B79B8u;
label_1b79b8:
    // 0x1b79b8: 0x8e050008
    ctx->pc = 0x1b79b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b79bc: 0xc06d960
    ctx->pc = 0x1B79BCu;
    SET_GPR_U32(ctx, 31, 0x1B79C4u);
    ctx->pc = 0x1B79C0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    ctx->pc = 0x1B6580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6580_0x1b6580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B79C4u; }
    }
    if (ctx->pc != 0x1B79C4u) { return; }
    ctx->pc = 0x1B79C4u;
    // 0x1b79c4: 0x24110001
    ctx->pc = 0x1b79c4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_1b79c8:
    // 0x1b79c8: 0x8e050008
    ctx->pc = 0x1b79c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b79cc: 0xc06d93c
    ctx->pc = 0x1B79CCu;
    SET_GPR_U32(ctx, 31, 0x1B79D4u);
    ctx->pc = 0x1B79D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B64F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B64F0_0x1b64f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B79D4u; }
    }
    if (ctx->pc != 0x1B79D4u) { return; }
    ctx->pc = 0x1B79D4u;
    // 0x1b79d4: 0x8e03001c
    ctx->pc = 0x1b79d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1b79d8: 0x40282d
    ctx->pc = 0x1b79d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b79dc: 0xa3082b
    ctx->pc = 0x1b79dcu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1b79e0: 0x10200011
    ctx->pc = 0x1B79E0u;
    {
        const bool branch_taken_0x1b79e0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b79e0) {
            ctx->pc = 0x1B7A28u;
            goto label_1b7a28;
        }
    }
    ctx->pc = 0x1B79E8u;
    // 0x1b79e8: 0x8e040064
    ctx->pc = 0x1b79e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1b79ec: 0x8e030060
    ctx->pc = 0x1b79ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1b79f0: 0x83082b
    ctx->pc = 0x1b79f0u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b79f4: 0x10200012
    ctx->pc = 0x1B79F4u;
    {
        const bool branch_taken_0x1b79f4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B79F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b79f4) {
            ctx->pc = 0x1B7A40u;
            goto label_1b7a40;
        }
    }
    ctx->pc = 0x1B79FCu;
    // 0x1b79fc: 0xc06d728
    ctx->pc = 0x1B79FCu;
    SET_GPR_U32(ctx, 31, 0x1B7A04u);
    ctx->pc = 0x1B5CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5CA0_0x1b5ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A04u; }
    }
    if (ctx->pc != 0x1B7A04u) { return; }
    ctx->pc = 0x1B7A04u;
    // 0x1b7a04: 0x240282d
    ctx->pc = 0x1b7a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7a08: 0x200202d
    ctx->pc = 0x1b7a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7a0c: 0x40302d
    ctx->pc = 0x1b7a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7a10: 0xc06dc74
    ctx->pc = 0x1B7A10u;
    SET_GPR_U32(ctx, 31, 0x1B7A18u);
    ctx->pc = 0x1B7A14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B71D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B71D0_0x1b71d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A18u; }
    }
    if (ctx->pc != 0x1B7A18u) { return; }
    ctx->pc = 0x1B7A18u;
    // 0x1b7a18: 0x8e030064
    ctx->pc = 0x1b7a18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1b7a1c: 0x40902d
    ctx->pc = 0x1b7a1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7a20: 0x24630001
    ctx->pc = 0x1b7a20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b7a24: 0xae030064
    ctx->pc = 0x1b7a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_1b7a28:
    // 0x1b7a28: 0x8e04006c
    ctx->pc = 0x1b7a28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1b7a2c: 0x8e030070
    ctx->pc = 0x1b7a2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1b7a30: 0x2242006
    ctx->pc = 0x1b7a30u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
    // 0x1b7a34: 0x641821
    ctx->pc = 0x1b7a34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b7a38: 0x1000ffc3
    ctx->pc = 0x1B7A38u;
    {
        const bool branch_taken_0x1b7a38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B7A3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
        if (branch_taken_0x1b7a38) {
            ctx->pc = 0x1B7948u;
            goto label_1b7948;
        }
    }
    ctx->pc = 0x1B7A40u;
label_1b7a40:
    // 0x1b7a40: 0xae12004c
    ctx->pc = 0x1b7a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 18));
label_1b7a44:
    // 0x1b7a44: 0xdfbf0050
    ctx->pc = 0x1b7a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b7a48:
    // 0x1b7a48: 0x7bb40040
    ctx->pc = 0x1b7a48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7a4c: 0x7bb30030
    ctx->pc = 0x1b7a4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7a50: 0x7bb20020
    ctx->pc = 0x1b7a50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7a54: 0x7bb10010
    ctx->pc = 0x1b7a54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7a58: 0x7bb00000
    ctx->pc = 0x1b7a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7a5c: 0x3e00008
    ctx->pc = 0x1B7A5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7A60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B78A0u: goto label_1b78a0;
            case 0x1B78E4u: goto label_1b78e4;
            case 0x1B7924u: goto label_1b7924;
            case 0x1B7930u: goto label_1b7930;
            case 0x1B7940u: goto label_1b7940;
            case 0x1B7948u: goto label_1b7948;
            case 0x1B7978u: goto label_1b7978;
            case 0x1B7988u: goto label_1b7988;
            case 0x1B799Cu: goto label_1b799c;
            case 0x1B79B8u: goto label_1b79b8;
            case 0x1B79C8u: goto label_1b79c8;
            case 0x1B7A28u: goto label_1b7a28;
            case 0x1B7A40u: goto label_1b7a40;
            case 0x1B7A44u: goto label_1b7a44;
            case 0x1B7A48u: goto label_1b7a48;
            case 0x1B7AB0u: goto label_1b7ab0;
            case 0x1B7ABCu: goto label_1b7abc;
            case 0x1B7AE4u: goto label_1b7ae4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B7A64u;
    // 0x1b7a64: 0x0
    ctx->pc = 0x1b7a64u;
    // NOP
    // 0x1b7a68: 0x0
    ctx->pc = 0x1b7a68u;
    // NOP
    // 0x1b7a6c: 0x0
    ctx->pc = 0x1b7a6cu;
    // NOP
    // 0x1b7a70: 0x27bdfd90
    ctx->pc = 0x1b7a70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x1b7a74: 0x24030001
    ctx->pc = 0x1b7a74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7a78: 0xffbf0010
    ctx->pc = 0x1b7a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7a7c: 0x28620008
    ctx->pc = 0x1b7a7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 8));
    // 0x1b7a80: 0x7fb00000
    ctx->pc = 0x1b7a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b7a84: 0xafa40228
    ctx->pc = 0x1b7a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 4));
    // 0x1b7a88: 0xffa50238
    ctx->pc = 0x1b7a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 5));
    // 0x1b7a8c: 0xffa60240
    ctx->pc = 0x1b7a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 6));
    // 0x1b7a90: 0xffa70248
    ctx->pc = 0x1b7a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 7));
    // 0x1b7a94: 0xffa80250
    ctx->pc = 0x1b7a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 8));
    // 0x1b7a98: 0xffa90258
    ctx->pc = 0x1b7a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 9));
    // 0x1b7a9c: 0xffaa0260
    ctx->pc = 0x1b7a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 10));
    // 0x1b7aa0: 0x14400003
    ctx->pc = 0x1B7AA0u;
    {
        const bool branch_taken_0x1b7aa0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B7AA4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 11));
        if (branch_taken_0x1b7aa0) {
            ctx->pc = 0x1B7AB0u;
            goto label_1b7ab0;
        }
    }
    ctx->pc = 0x1B7AA8u;
    // 0x1b7aa8: 0x10000004
    ctx->pc = 0x1B7AA8u;
    {
        const bool branch_taken_0x1b7aa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B7AACu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b7aa8) {
            ctx->pc = 0x1B7ABCu;
            goto label_1b7abc;
        }
    }
    ctx->pc = 0x1B7AB0u;
label_1b7ab0:
    // 0x1b7ab0: 0x24020008
    ctx->pc = 0x1b7ab0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b7ab4: 0x431023
    ctx->pc = 0x1b7ab4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7ab8: 0x218c0
    ctx->pc = 0x1b7ab8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
label_1b7abc:
    // 0x1b7abc: 0x8fa50228
    ctx->pc = 0x1b7abcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x1b7ac0: 0x27a20270
    ctx->pc = 0x1b7ac0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 624));
    // 0x1b7ac4: 0x27b00020
    ctx->pc = 0x1b7ac4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b7ac8: 0x433023
    ctx->pc = 0x1b7ac8u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7acc: 0xc043e20
    ctx->pc = 0x1B7ACCu;
    SET_GPR_U32(ctx, 31, 0x1B7AD4u);
    ctx->pc = 0x1B7AD0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10F880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F880_0x10f880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7AD4u; }
    }
    if (ctx->pc != 0x1B7AD4u) { return; }
    ctx->pc = 0x1B7AD4u;
    // 0x1b7ad4: 0x2028021
    ctx->pc = 0x1b7ad4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b7ad8: 0x27a40020
    ctx->pc = 0x1b7ad8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b7adc: 0xc06de28
    ctx->pc = 0x1B7ADCu;
    SET_GPR_U32(ctx, 31, 0x1B7AE4u);
    ctx->pc = 0x1B7AE0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1B78A0u;
    goto label_1b78a0;
    ctx->pc = 0x1B7AE4u;
label_1b7ae4:
    // 0x1b7ae4: 0xdfbf0010
    ctx->pc = 0x1b7ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7ae8: 0x7bb00000
    ctx->pc = 0x1b7ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7aec: 0x3e00008
    ctx->pc = 0x1B7AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7AF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B78A0u: goto label_1b78a0;
            case 0x1B78E4u: goto label_1b78e4;
            case 0x1B7924u: goto label_1b7924;
            case 0x1B7930u: goto label_1b7930;
            case 0x1B7940u: goto label_1b7940;
            case 0x1B7948u: goto label_1b7948;
            case 0x1B7978u: goto label_1b7978;
            case 0x1B7988u: goto label_1b7988;
            case 0x1B799Cu: goto label_1b799c;
            case 0x1B79B8u: goto label_1b79b8;
            case 0x1B79C8u: goto label_1b79c8;
            case 0x1B7A28u: goto label_1b7a28;
            case 0x1B7A40u: goto label_1b7a40;
            case 0x1B7A44u: goto label_1b7a44;
            case 0x1B7A48u: goto label_1b7a48;
            case 0x1B7AB0u: goto label_1b7ab0;
            case 0x1B7ABCu: goto label_1b7abc;
            case 0x1B7AE4u: goto label_1b7ae4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B7AF4u;
    // 0x1b7af4: 0x0
    ctx->pc = 0x1b7af4u;
    // NOP
    // 0x1b7af8: 0x0
    ctx->pc = 0x1b7af8u;
    // NOP
    // 0x1b7afc: 0x0
    ctx->pc = 0x1b7afcu;
    // NOP
}
