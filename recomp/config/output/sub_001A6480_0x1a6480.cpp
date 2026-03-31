#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A6480
// Address: 0x1a6480 - 0x1a65d0
void sub_001A6480_0x1a6480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a6480u;

    // 0x1a6480: 0x27bdffb0
    ctx->pc = 0x1a6480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a6484: 0xffbf0040
    ctx->pc = 0x1a6484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a6488: 0x7fb20030
    ctx->pc = 0x1a6488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a648c: 0x7fb10020
    ctx->pc = 0x1a648cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a6490: 0x7fb00010
    ctx->pc = 0x1a6490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a6494: 0x80882d
    ctx->pc = 0x1a6494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6498: 0xe7b40000
    ctx->pc = 0x1a6498u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a649c: 0x84920000
    ctx->pc = 0x1a649cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a64a0: 0x84830002
    ctx->pc = 0x1a64a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1a64a4: 0x721025
    ctx->pc = 0x1a64a4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1a64a8: 0x14400004
    ctx->pc = 0x1A64A8u;
    {
        const bool branch_taken_0x1a64a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A64ACu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a64a8) {
            ctx->pc = 0x1A64BCu;
            goto label_1a64bc;
        }
    }
    ctx->pc = 0x1A64B0u;
    // 0x1a64b0: 0x4480a000
    ctx->pc = 0x1a64b0u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x1a64b4: 0x10000012
    ctx->pc = 0x1A64B4u;
    {
        const bool branch_taken_0x1a64b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A64B8u;
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x1a64b4) {
            ctx->pc = 0x1A6500u;
            goto label_1a6500;
        }
    }
    ctx->pc = 0x1A64BCu;
label_1a64bc:
    // 0x1a64bc: 0xc0448ba
    ctx->pc = 0x1A64BCu;
    SET_GPR_U32(ctx, 31, 0x1A64C4u);
    ctx->pc = 0x1A64C0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A64C4u; }
    }
    if (ctx->pc != 0x1A64C4u) { return; }
    ctx->pc = 0x1A64C4u;
    // 0x1a64c4: 0x240202d
    ctx->pc = 0x1a64c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a64c8: 0xc0448ba
    ctx->pc = 0x1A64C8u;
    SET_GPR_U32(ctx, 31, 0x1A64D0u);
    ctx->pc = 0x1A64CCu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A64D0u; }
    }
    if (ctx->pc != 0x1A64D0u) { return; }
    ctx->pc = 0x1A64D0u;
    // 0x1a64d0: 0x240202d
    ctx->pc = 0x1a64d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a64d4: 0xc0489a4
    ctx->pc = 0x1A64D4u;
    SET_GPR_U32(ctx, 31, 0x1A64DCu);
    ctx->pc = 0x1A64D8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x122690u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00122690_0x122690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A64DCu; }
    }
    if (ctx->pc != 0x1A64DCu) { return; }
    ctx->pc = 0x1A64DCu;
    // 0x1a64dc: 0xc04491c
    ctx->pc = 0x1A64DCu;
    SET_GPR_U32(ctx, 31, 0x1A64E4u);
    ctx->pc = 0x1A64E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112470u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112470_0x112470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A64E4u; }
    }
    if (ctx->pc != 0x1A64E4u) { return; }
    ctx->pc = 0x1A64E4u;
    // 0x1a64e4: 0x4480a000
    ctx->pc = 0x1a64e4u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x1a64e8: 0x0
    ctx->pc = 0x1a64e8u;
    // NOP
    // 0x1a64ec: 0x46140034
    ctx->pc = 0x1a64ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a64f0: 0x45000003
    ctx->pc = 0x1A64F0u;
    {
        const bool branch_taken_0x1a64f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A64F4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
        if (branch_taken_0x1a64f0) {
            ctx->pc = 0x1A6500u;
            goto label_1a6500;
        }
    }
    ctx->pc = 0x1A64F8u;
    // 0x1a64f8: 0xc4211f58
    ctx->pc = 0x1a64f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 8024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a64fc: 0x46010000
    ctx->pc = 0x1a64fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a6500:
    // 0x1a6500: 0xe6200008
    ctx->pc = 0x1a6500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1a6504: 0x3c010024
    ctx->pc = 0x1a6504u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x1a6508: 0xc4221f58
    ctx->pc = 0x1a6508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 8024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a650c: 0x3c0243b4
    ctx->pc = 0x1a650cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17332 << 16));
    // 0x1a6510: 0x44820800
    ctx->pc = 0x1a6510u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1a6514: 0x0
    ctx->pc = 0x1a6514u;
    // NOP
    // 0x1a6518: 0x46020003
    ctx->pc = 0x1a6518u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1a651c: 0x46000802
    ctx->pc = 0x1a651cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a6520: 0x46000024
    ctx->pc = 0x1a6520u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1a6524: 0x44020000
    ctx->pc = 0x1a6524u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1a6528: 0x0
    ctx->pc = 0x1a6528u;
    // NOP
    // 0x1a652c: 0xa6220006
    ctx->pc = 0x1a652cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a6530: 0x86220000
    ctx->pc = 0x1a6530u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a6534: 0x86320002
    ctx->pc = 0x1a6534u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1a6538: 0xc0448ba
    ctx->pc = 0x1A6538u;
    SET_GPR_U32(ctx, 31, 0x1A6540u);
    ctx->pc = 0x1A653Cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6540u; }
    }
    if (ctx->pc != 0x1A6540u) { return; }
    ctx->pc = 0x1A6540u;
    // 0x1a6540: 0x2522018
    ctx->pc = 0x1a6540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1a6544: 0xc0448ba
    ctx->pc = 0x1A6544u;
    SET_GPR_U32(ctx, 31, 0x1A654Cu);
    ctx->pc = 0x1A6548u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A654Cu; }
    }
    if (ctx->pc != 0x1A654Cu) { return; }
    ctx->pc = 0x1A654Cu;
    // 0x1a654c: 0x240202d
    ctx->pc = 0x1a654cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6550: 0xc04473c
    ctx->pc = 0x1A6550u;
    SET_GPR_U32(ctx, 31, 0x1A6558u);
    ctx->pc = 0x1A6554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6558u; }
    }
    if (ctx->pc != 0x1A6558u) { return; }
    ctx->pc = 0x1A6558u;
    // 0x1a6558: 0xc0489b0
    ctx->pc = 0x1A6558u;
    SET_GPR_U32(ctx, 31, 0x1A6560u);
    ctx->pc = 0x1A655Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1226C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001226C0_0x1226c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6560u; }
    }
    if (ctx->pc != 0x1A6560u) { return; }
    ctx->pc = 0x1A6560u;
    // 0x1a6560: 0xc0448e8
    ctx->pc = 0x1A6560u;
    SET_GPR_U32(ctx, 31, 0x1A6568u);
    ctx->pc = 0x1A6564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6568u; }
    }
    if (ctx->pc != 0x1A6568u) { return; }
    ctx->pc = 0x1A6568u;
    // 0x1a6568: 0xa6220004
    ctx->pc = 0x1a6568u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a656c: 0x86230004
    ctx->pc = 0x1a656cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a6570: 0x28610080
    ctx->pc = 0x1a6570u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 128));
    // 0x1a6574: 0x14200002
    ctx->pc = 0x1A6574u;
    {
        const bool branch_taken_0x1a6574 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A6578u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 127));
        if (branch_taken_0x1a6574) {
            ctx->pc = 0x1A6580u;
            goto label_1a6580;
        }
    }
    ctx->pc = 0x1A657Cu;
    // 0x1a657c: 0xa6230004
    ctx->pc = 0x1a657cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 3));
label_1a6580:
    // 0x1a6580: 0x86240004
    ctx->pc = 0x1a6580u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a6584: 0x101c3c
    ctx->pc = 0x1a6584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1a6588: 0x31c3f
    ctx->pc = 0x1a6588u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1a658c: 0x83082a
    ctx->pc = 0x1a658cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1a6590: 0x10200006
    ctx->pc = 0x1A6590u;
    {
        const bool branch_taken_0x1a6590 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a6590) {
            ctx->pc = 0x1A65ACu;
            goto label_1a65ac;
        }
    }
    ctx->pc = 0x1A6598u;
    // 0x1a6598: 0xa6200000
    ctx->pc = 0x1a6598u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a659c: 0xa6200002
    ctx->pc = 0x1a659cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a65a0: 0xe6340008
    ctx->pc = 0x1a65a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1a65a4: 0xa6200006
    ctx->pc = 0x1a65a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a65a8: 0xa6200004
    ctx->pc = 0x1a65a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
label_1a65ac:
    // 0x1a65ac: 0xdfbf0040
    ctx->pc = 0x1a65acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a65b0: 0xc7b40000
    ctx->pc = 0x1a65b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a65b4: 0x7bb20030
    ctx->pc = 0x1a65b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a65b8: 0x7bb10020
    ctx->pc = 0x1a65b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a65bc: 0x7bb00010
    ctx->pc = 0x1a65bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a65c0: 0x3e00008
    ctx->pc = 0x1A65C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A65C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A64BCu: goto label_1a64bc;
            case 0x1A6500u: goto label_1a6500;
            case 0x1A6580u: goto label_1a6580;
            case 0x1A65ACu: goto label_1a65ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A65C8u;
    // 0x1a65c8: 0x0
    ctx->pc = 0x1a65c8u;
    // NOP
    // 0x1a65cc: 0x0
    ctx->pc = 0x1a65ccu;
    // NOP
}
