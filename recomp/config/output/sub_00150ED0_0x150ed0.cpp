#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00150ED0
// Address: 0x150ed0 - 0x151070
void sub_00150ED0_0x150ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x150ed0u;

    // 0x150ed0: 0x27bdffd0
    ctx->pc = 0x150ed0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x150ed4: 0x24020001
    ctx->pc = 0x150ed4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x150ed8: 0xffb20010
    ctx->pc = 0x150ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x150edc: 0x80902d
    ctx->pc = 0x150edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150ee0: 0xffb00000
    ctx->pc = 0x150ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x150ee4: 0xffb10008
    ctx->pc = 0x150ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x150ee8: 0xffb30018
    ctx->pc = 0x150ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x150eec: 0xffbf0020
    ctx->pc = 0x150eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x150ef0: 0x8e43000c
    ctx->pc = 0x150ef0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x150ef4: 0x1462001e
    ctx->pc = 0x150EF4u;
    {
        const bool branch_taken_0x150ef4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x150EF8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
        if (branch_taken_0x150ef4) {
            ctx->pc = 0x150F70u;
            goto label_150f70;
        }
    }
    ctx->pc = 0x150EFCu;
    // 0x150efc: 0x8e5002c4
    ctx->pc = 0x150efcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 708)));
    // 0x150f00: 0xc0448ba
    ctx->pc = 0x150F00u;
    SET_GPR_U32(ctx, 31, 0x150F08u);
    ctx->pc = 0x150F04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F08u; }
    }
    if (ctx->pc != 0x150F08u) { return; }
    ctx->pc = 0x150F08u;
    // 0x150f08: 0x40882d
    ctx->pc = 0x150f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f0c: 0x6030007
    ctx->pc = 0x150F0Cu;
    {
        const bool branch_taken_0x150f0c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x150f0c) {
            ctx->pc = 0x150F10u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 712)));
            ctx->pc = 0x150F2Cu;
            goto label_150f2c;
        }
    }
    ctx->pc = 0x150F14u;
    // 0x150f14: 0x340583e0
    ctx->pc = 0x150f14u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 33760));
    // 0x150f18: 0x52bfc
    ctx->pc = 0x150f18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x150f1c: 0xc04473c
    ctx->pc = 0x150F1Cu;
    SET_GPR_U32(ctx, 31, 0x150F24u);
    ctx->pc = 0x150F20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F24u; }
    }
    if (ctx->pc != 0x150F24u) { return; }
    ctx->pc = 0x150F24u;
    // 0x150f24: 0x40882d
    ctx->pc = 0x150f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f28: 0x8e5002c8
    ctx->pc = 0x150f28u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 712)));
label_150f2c:
    // 0x150f2c: 0xc0448ba
    ctx->pc = 0x150F2Cu;
    SET_GPR_U32(ctx, 31, 0x150F34u);
    ctx->pc = 0x150F30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F34u; }
    }
    if (ctx->pc != 0x150F34u) { return; }
    ctx->pc = 0x150F34u;
    // 0x150f34: 0x6010005
    ctx->pc = 0x150F34u;
    {
        const bool branch_taken_0x150f34 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x150f34) {
            ctx->pc = 0x150F4Cu;
            goto label_150f4c;
        }
    }
    ctx->pc = 0x150F3Cu;
    // 0x150f3c: 0x340583e0
    ctx->pc = 0x150f3cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 33760));
    // 0x150f40: 0x52bfc
    ctx->pc = 0x150f40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x150f44: 0xc04473c
    ctx->pc = 0x150F44u;
    SET_GPR_U32(ctx, 31, 0x150F4Cu);
    ctx->pc = 0x150F48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F4Cu; }
    }
    if (ctx->pc != 0x150F4Cu) { return; }
    ctx->pc = 0x150F4Cu;
label_150f4c:
    // 0x150f4c: 0x220202d
    ctx->pc = 0x150f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f50: 0xc04480e
    ctx->pc = 0x150F50u;
    SET_GPR_U32(ctx, 31, 0x150F58u);
    ctx->pc = 0x150F54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112038_0x112038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150F58u; }
    }
    if (ctx->pc != 0x150F58u) { return; }
    ctx->pc = 0x150F58u;
    // 0x150f58: 0x3403ffc0
    ctx->pc = 0x150f58u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 65472));
    // 0x150f5c: 0x31bbc
    ctx->pc = 0x150f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
    // 0x150f60: 0xfe4202d8
    ctx->pc = 0x150f60u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 728), GPR_U64(ctx, 2));
    // 0x150f64: 0xfe4302e0
    ctx->pc = 0x150f64u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 736), GPR_U64(ctx, 3));
    // 0x150f68: 0x1000003b
    ctx->pc = 0x150F68u;
    {
        const bool branch_taken_0x150f68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x150F6Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x150f68) {
            ctx->pc = 0x151058u;
            goto label_151058;
        }
    }
    ctx->pc = 0x150F70u;
label_150f70:
    // 0x150f70: 0x8e500080
    ctx->pc = 0x150f70u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x150f74: 0x3c130024
    ctx->pc = 0x150f74u;
    SET_GPR_U32(ctx, 19, ((uint32_t)36 << 16));
    // 0x150f78: 0x2629821
    ctx->pc = 0x150f78u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x150f7c: 0xde73e3e0
    ctx->pc = 0x150f7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 19), 4294960096)));
    // 0x150f80: 0xfe5302d8
    ctx->pc = 0x150f80u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 728), GPR_U64(ctx, 19));
    // 0x150f84: 0x5200001a
    ctx->pc = 0x150F84u;
    {
        const bool branch_taken_0x150f84 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x150f84) {
            ctx->pc = 0x150F88u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 708)));
            ctx->pc = 0x150FF0u;
            goto label_150ff0;
        }
    }
    ctx->pc = 0x150F8Cu;
    // 0x150f8c: 0x8e510084
    ctx->pc = 0x150f8cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x150f90: 0x52200017
    ctx->pc = 0x150F90u;
    {
        const bool branch_taken_0x150f90 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x150f90) {
            ctx->pc = 0x150F94u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 708)));
            ctx->pc = 0x150FF0u;
            goto label_150ff0;
        }
    }
    ctx->pc = 0x150F98u;
    // 0x150f98: 0xc0448ba
    ctx->pc = 0x150F98u;
    SET_GPR_U32(ctx, 31, 0x150FA0u);
    ctx->pc = 0x150F9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150FA0u; }
    }
    if (ctx->pc != 0x150FA0u) { return; }
    ctx->pc = 0x150FA0u;
    // 0x150fa0: 0x6010005
    ctx->pc = 0x150FA0u;
    {
        const bool branch_taken_0x150fa0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x150fa0) {
            ctx->pc = 0x150FB8u;
            goto label_150fb8;
        }
    }
    ctx->pc = 0x150FA8u;
    // 0x150fa8: 0x340583e0
    ctx->pc = 0x150fa8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 33760));
    // 0x150fac: 0x52bfc
    ctx->pc = 0x150facu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x150fb0: 0xc04473c
    ctx->pc = 0x150FB0u;
    SET_GPR_U32(ctx, 31, 0x150FB8u);
    ctx->pc = 0x150FB4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150FB8u; }
    }
    if (ctx->pc != 0x150FB8u) { return; }
    ctx->pc = 0x150FB8u;
label_150fb8:
    // 0x150fb8: 0x260202d
    ctx->pc = 0x150fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150fbc: 0xc04476c
    ctx->pc = 0x150FBCu;
    SET_GPR_U32(ctx, 31, 0x150FC4u);
    ctx->pc = 0x150FC0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150FC4u; }
    }
    if (ctx->pc != 0x150FC4u) { return; }
    ctx->pc = 0x150FC4u;
    // 0x150fc4: 0x40802d
    ctx->pc = 0x150fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150fc8: 0xc0448ba
    ctx->pc = 0x150FC8u;
    SET_GPR_U32(ctx, 31, 0x150FD0u);
    ctx->pc = 0x150FCCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150FD0u; }
    }
    if (ctx->pc != 0x150FD0u) { return; }
    ctx->pc = 0x150FD0u;
    // 0x150fd0: 0x6210005
    ctx->pc = 0x150FD0u;
    {
        const bool branch_taken_0x150fd0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x150fd0) {
            ctx->pc = 0x150FE8u;
            goto label_150fe8;
        }
    }
    ctx->pc = 0x150FD8u;
    // 0x150fd8: 0x340583e0
    ctx->pc = 0x150fd8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 33760));
    // 0x150fdc: 0x52bfc
    ctx->pc = 0x150fdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x150fe0: 0xc04473c
    ctx->pc = 0x150FE0u;
    SET_GPR_U32(ctx, 31, 0x150FE8u);
    ctx->pc = 0x150FE4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150FE8u; }
    }
    if (ctx->pc != 0x150FE8u) { return; }
    ctx->pc = 0x150FE8u;
label_150fe8:
    // 0x150fe8: 0x10000017
    ctx->pc = 0x150FE8u;
    {
        const bool branch_taken_0x150fe8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x150FECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x150fe8) {
            ctx->pc = 0x151048u;
            goto label_151048;
        }
    }
    ctx->pc = 0x150FF0u;
label_150ff0:
    // 0x150ff0: 0xc0448ba
    ctx->pc = 0x150FF0u;
    SET_GPR_U32(ctx, 31, 0x150FF8u);
    ctx->pc = 0x150FF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150FF8u; }
    }
    if (ctx->pc != 0x150FF8u) { return; }
    ctx->pc = 0x150FF8u;
    // 0x150ff8: 0x6010005
    ctx->pc = 0x150FF8u;
    {
        const bool branch_taken_0x150ff8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x150ff8) {
            ctx->pc = 0x151010u;
            goto label_151010;
        }
    }
    ctx->pc = 0x151000u;
    // 0x151000: 0x340583e0
    ctx->pc = 0x151000u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 33760));
    // 0x151004: 0x52bfc
    ctx->pc = 0x151004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x151008: 0xc04473c
    ctx->pc = 0x151008u;
    SET_GPR_U32(ctx, 31, 0x151010u);
    ctx->pc = 0x15100Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151010u; }
    }
    if (ctx->pc != 0x151010u) { return; }
    ctx->pc = 0x151010u;
label_151010:
    // 0x151010: 0xde4402d8
    ctx->pc = 0x151010u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 728)));
    // 0x151014: 0xc04476c
    ctx->pc = 0x151014u;
    SET_GPR_U32(ctx, 31, 0x15101Cu);
    ctx->pc = 0x151018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15101Cu; }
    }
    if (ctx->pc != 0x15101Cu) { return; }
    ctx->pc = 0x15101Cu;
    // 0x15101c: 0x8e5002c8
    ctx->pc = 0x15101cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 712)));
    // 0x151020: 0x40882d
    ctx->pc = 0x151020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151024: 0xc0448ba
    ctx->pc = 0x151024u;
    SET_GPR_U32(ctx, 31, 0x15102Cu);
    ctx->pc = 0x151028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15102Cu; }
    }
    if (ctx->pc != 0x15102Cu) { return; }
    ctx->pc = 0x15102Cu;
    // 0x15102c: 0x6010005
    ctx->pc = 0x15102Cu;
    {
        const bool branch_taken_0x15102c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x15102c) {
            ctx->pc = 0x151044u;
            goto label_151044;
        }
    }
    ctx->pc = 0x151034u;
    // 0x151034: 0x340583e0
    ctx->pc = 0x151034u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 33760));
    // 0x151038: 0x52bfc
    ctx->pc = 0x151038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x15103c: 0xc04473c
    ctx->pc = 0x15103Cu;
    SET_GPR_U32(ctx, 31, 0x151044u);
    ctx->pc = 0x151040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151044u; }
    }
    if (ctx->pc != 0x151044u) { return; }
    ctx->pc = 0x151044u;
label_151044:
    // 0x151044: 0x220202d
    ctx->pc = 0x151044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_151048:
    // 0x151048: 0xc04480e
    ctx->pc = 0x151048u;
    SET_GPR_U32(ctx, 31, 0x151050u);
    ctx->pc = 0x15104Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112038_0x112038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151050u; }
    }
    if (ctx->pc != 0x151050u) { return; }
    ctx->pc = 0x151050u;
    // 0x151050: 0xfe4202e0
    ctx->pc = 0x151050u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 736), GPR_U64(ctx, 2));
    // 0x151054: 0xdfb00000
    ctx->pc = 0x151054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_151058:
    // 0x151058: 0xdfb10008
    ctx->pc = 0x151058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15105c: 0xdfb20010
    ctx->pc = 0x15105cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151060: 0xdfb30018
    ctx->pc = 0x151060u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x151064: 0xdfbf0020
    ctx->pc = 0x151064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151068: 0x3e00008
    ctx->pc = 0x151068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15106Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150F2Cu: goto label_150f2c;
            case 0x150F4Cu: goto label_150f4c;
            case 0x150F70u: goto label_150f70;
            case 0x150FB8u: goto label_150fb8;
            case 0x150FE8u: goto label_150fe8;
            case 0x150FF0u: goto label_150ff0;
            case 0x151010u: goto label_151010;
            case 0x151044u: goto label_151044;
            case 0x151048u: goto label_151048;
            case 0x151058u: goto label_151058;
            default: break;
        }
        return;
    }
    ctx->pc = 0x151070u;
}
