#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C7510
// Address: 0x1c7510 - 0x1c76e0
void sub_001C7510_0x1c7510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c7510u;

    // 0x1c7510: 0x27bdffd0
    ctx->pc = 0x1c7510u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c7514: 0x3c010033
    ctx->pc = 0x1c7514u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c7518: 0xffbf0020
    ctx->pc = 0x1c7518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c751c: 0x24030007
    ctx->pc = 0x1c751cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c7520: 0x7fb10010
    ctx->pc = 0x1c7520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c7524: 0x7fb00000
    ctx->pc = 0x1c7524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c7528: 0x90245056
    ctx->pc = 0x1c7528u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20566)));
    // 0x1c752c: 0x10830065
    ctx->pc = 0x1C752Cu;
    {
        const bool branch_taken_0x1c752c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c752c) {
            ctx->pc = 0x1C76C4u;
            goto label_1c76c4;
        }
    }
    ctx->pc = 0x1C7534u;
    // 0x1c7534: 0xc071cbc
    ctx->pc = 0x1C7534u;
    SET_GPR_U32(ctx, 31, 0x1C753Cu);
    ctx->pc = 0x1C72F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C72F0_0x1c72f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C753Cu; }
    }
    if (ctx->pc != 0x1C753Cu) { return; }
    ctx->pc = 0x1C753Cu;
    // 0x1c753c: 0x2403ffff
    ctx->pc = 0x1c753cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c7540: 0x10430060
    ctx->pc = 0x1C7540u;
    {
        const bool branch_taken_0x1c7540 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C7544u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c7540) {
            ctx->pc = 0x1C76C4u;
            goto label_1c76c4;
        }
    }
    ctx->pc = 0x1C7548u;
    // 0x1c7548: 0xc071d00
    ctx->pc = 0x1C7548u;
    SET_GPR_U32(ctx, 31, 0x1C7550u);
    ctx->pc = 0x1C7400u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7400_0x1c7400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7550u; }
    }
    if (ctx->pc != 0x1C7550u) { return; }
    ctx->pc = 0x1C7550u;
    // 0x1c7550: 0x2403ffff
    ctx->pc = 0x1c7550u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c7554: 0x1043005b
    ctx->pc = 0x1C7554u;
    {
        const bool branch_taken_0x1c7554 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C7558u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c7554) {
            ctx->pc = 0x1C76C4u;
            goto label_1c76c4;
        }
    }
    ctx->pc = 0x1C755Cu;
    // 0x1c755c: 0x2111821
    ctx->pc = 0x1c755cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1c7560: 0x14600034
    ctx->pc = 0x1C7560u;
    {
        const bool branch_taken_0x1c7560 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C7564u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        if (branch_taken_0x1c7560) {
            ctx->pc = 0x1C7634u;
            goto label_1c7634;
        }
    }
    ctx->pc = 0x1C7568u;
    // 0x1c7568: 0x3c010033
    ctx->pc = 0x1c7568u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c756c: 0x3c033f80
    ctx->pc = 0x1c756cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1c7570: 0xc422506c
    ctx->pc = 0x1c7570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7574: 0x44830000
    ctx->pc = 0x1c7574u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1c7578: 0x3c010033
    ctx->pc = 0x1c7578u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c757c: 0xc4215070
    ctx->pc = 0x1c757cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7580: 0x46011041
    ctx->pc = 0x1c7580u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1c7584: 0x46000836
    ctx->pc = 0x1c7584u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7588: 0x45010029
    ctx->pc = 0x1C7588u;
    {
        const bool branch_taken_0x1c7588 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7588) {
            ctx->pc = 0x1C7630u;
            goto label_1c7630;
        }
    }
    ctx->pc = 0x1C7590u;
    // 0x1c7590: 0x3c040033
    ctx->pc = 0x1c7590u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c7594: 0xc071f40
    ctx->pc = 0x1C7594u;
    SET_GPR_U32(ctx, 31, 0x1C759Cu);
    ctx->pc = 0x1C7598u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18448));
    ctx->pc = 0x1C7D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7D00_0x1c7d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C759Cu; }
    }
    if (ctx->pc != 0x1C759Cu) { return; }
    ctx->pc = 0x1C759Cu;
    // 0x1c759c: 0x3c010033
    ctx->pc = 0x1c759cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c75a0: 0x3c040033
    ctx->pc = 0x1c75a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c75a4: 0x90225054
    ctx->pc = 0x1c75a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20564)));
    // 0x1c75a8: 0x24844810
    ctx->pc = 0x1c75a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18448));
    // 0x1c75ac: 0x21300
    ctx->pc = 0x1c75acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 12));
    // 0x1c75b0: 0xc071f54
    ctx->pc = 0x1C75B0u;
    SET_GPR_U32(ctx, 31, 0x1C75B8u);
    ctx->pc = 0x1C75B4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), 65535));
    ctx->pc = 0x1C7D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7D50_0x1c7d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C75B8u; }
    }
    if (ctx->pc != 0x1C75B8u) { return; }
    ctx->pc = 0x1C75B8u;
    // 0x1c75b8: 0x3c040033
    ctx->pc = 0x1c75b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x1c75bc: 0xc071f30
    ctx->pc = 0x1C75BCu;
    SET_GPR_U32(ctx, 31, 0x1C75C4u);
    ctx->pc = 0x1C75C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18448));
    ctx->pc = 0x1C7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7CC0_0x1c7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C75C4u; }
    }
    if (ctx->pc != 0x1C75C4u) { return; }
    ctx->pc = 0x1C75C4u;
    // 0x1c75c4: 0x40202d
    ctx->pc = 0x1c75c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75c8: 0xc072f18
    ctx->pc = 0x1C75C8u;
    SET_GPR_U32(ctx, 31, 0x1C75D0u);
    ctx->pc = 0x1C75CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1CBC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBC60_0x1cbc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C75D0u; }
    }
    if (ctx->pc != 0x1C75D0u) { return; }
    ctx->pc = 0x1C75D0u;
    // 0x1c75d0: 0x40282d
    ctx->pc = 0x1c75d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75d4: 0x4a10013
    ctx->pc = 0x1C75D4u;
    {
        const bool branch_taken_0x1c75d4 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1c75d4) {
            ctx->pc = 0x1C7624u;
            goto label_1c7624;
        }
    }
    ctx->pc = 0x1C75DCu;
    // 0x1c75dc: 0x24040002
    ctx->pc = 0x1c75dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c75e0: 0xc071eb0
    ctx->pc = 0x1C75E0u;
    SET_GPR_U32(ctx, 31, 0x1C75E8u);
    ctx->pc = 0x1C75E4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C7AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7AC0_0x1c7ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C75E8u; }
    }
    if (ctx->pc != 0x1C75E8u) { return; }
    ctx->pc = 0x1C75E8u;
    // 0x1c75e8: 0x3c010033
    ctx->pc = 0x1c75e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c75ec: 0x24030004
    ctx->pc = 0x1c75ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c75f0: 0x942451b8
    ctx->pc = 0x1c75f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20920)));
    // 0x1c75f4: 0x3c010033
    ctx->pc = 0x1c75f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c75f8: 0xac2351b0
    ctx->pc = 0x1c75f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20912), GPR_U32(ctx, 3));
    // 0x1c75fc: 0x3c010023
    ctx->pc = 0x1c75fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1c7600: 0x8c235f58
    ctx->pc = 0x1c7600u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 24408)));
    // 0x1c7604: 0x83182a
    ctx->pc = 0x1c7604u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1c7608: 0x1460002e
    ctx->pc = 0x1C7608u;
    {
        const bool branch_taken_0x1c7608 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c7608) {
            ctx->pc = 0x1C76C4u;
            goto label_1c76c4;
        }
    }
    ctx->pc = 0x1C7610u;
    // 0x1c7610: 0x24030010
    ctx->pc = 0x1c7610u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c7614: 0x3c010033
    ctx->pc = 0x1c7614u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c7618: 0xac2351b0
    ctx->pc = 0x1c7618u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20912), GPR_U32(ctx, 3));
    // 0x1c761c: 0x1000002a
    ctx->pc = 0x1C761Cu;
    {
        const bool branch_taken_0x1c761c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C7620u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1c761c) {
            ctx->pc = 0x1C76C8u;
            goto label_1c76c8;
        }
    }
    ctx->pc = 0x1C7624u;
label_1c7624:
    // 0x1c7624: 0x18a00002
    ctx->pc = 0x1C7624u;
    {
        const bool branch_taken_0x1c7624 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x1c7624) {
            ctx->pc = 0x1C7630u;
            goto label_1c7630;
        }
    }
    ctx->pc = 0x1C762Cu;
    // 0x1c762c: 0x26310002
    ctx->pc = 0x1c762cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 2));
label_1c7630:
    // 0x1c7630: 0x2113021
    ctx->pc = 0x1c7630u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1c7634:
    // 0x1c7634: 0x18c00023
    ctx->pc = 0x1C7634u;
    {
        const bool branch_taken_0x1c7634 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x1c7634) {
            ctx->pc = 0x1C76C4u;
            goto label_1c76c4;
        }
    }
    ctx->pc = 0x1C763Cu;
    // 0x1c763c: 0x3c010033
    ctx->pc = 0x1c763cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c7640: 0x30c4ffff
    ctx->pc = 0x1c7640u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 6), 65535));
    // 0x1c7644: 0x8c255088
    ctx->pc = 0x1c7644u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 20616)));
    // 0x1c7648: 0x44860000
    ctx->pc = 0x1c7648u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
    // 0x1c764c: 0x0
    ctx->pc = 0x1c764cu;
    // NOP
    // 0x1c7650: 0x468000a0
    ctx->pc = 0x1c7650u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1c7654: 0x3c010033
    ctx->pc = 0x1c7654u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c7658: 0xa62821
    ctx->pc = 0x1c7658u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1c765c: 0x9423508e
    ctx->pc = 0x1c765cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20622)));
    // 0x1c7660: 0x3c010033
    ctx->pc = 0x1c7660u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c7664: 0x641821
    ctx->pc = 0x1c7664u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c7668: 0xc4215198
    ctx->pc = 0x1c7668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c766c: 0x3c010033
    ctx->pc = 0x1c766cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c7670: 0xc4235060
    ctx->pc = 0x1c7670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c7674: 0x46020842
    ctx->pc = 0x1c7674u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c7678: 0x3c010033
    ctx->pc = 0x1c7678u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c767c: 0xc4205194
    ctx->pc = 0x1c767cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7680: 0x3c010033
    ctx->pc = 0x1c7680u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c7684: 0xac255088
    ctx->pc = 0x1c7684u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20616), GPR_U32(ctx, 5));
    // 0x1c7688: 0x46001836
    ctx->pc = 0x1c7688u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c768c: 0x3c010033
    ctx->pc = 0x1c768cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c7690: 0x45010005
    ctx->pc = 0x1C7690u;
    {
        const bool branch_taken_0x1c7690 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C7694u;
        WRITE16(ADD32(GPR_U32(ctx, 1), 20622), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1c7690) {
            ctx->pc = 0x1C76A8u;
            goto label_1c76a8;
        }
    }
    ctx->pc = 0x1C7698u;
    // 0x1c7698: 0x46011800
    ctx->pc = 0x1c7698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1c769c: 0x3c010033
    ctx->pc = 0x1c769cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c76a0: 0x10000004
    ctx->pc = 0x1C76A0u;
    {
        const bool branch_taken_0x1c76a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C76A4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20884), bits); }
        if (branch_taken_0x1c76a0) {
            ctx->pc = 0x1C76B4u;
            goto label_1c76b4;
        }
    }
    ctx->pc = 0x1C76A8u;
label_1c76a8:
    // 0x1c76a8: 0x46010000
    ctx->pc = 0x1c76a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c76ac: 0x3c010033
    ctx->pc = 0x1c76acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c76b0: 0xe4205194
    ctx->pc = 0x1c76b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20884), bits); }
label_1c76b4:
    // 0x1c76b4: 0x3c010033
    ctx->pc = 0x1c76b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c76b8: 0xc420506c
    ctx->pc = 0x1c76b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c76bc: 0x3c010033
    ctx->pc = 0x1c76bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c76c0: 0xe4205070
    ctx->pc = 0x1c76c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20592), bits); }
label_1c76c4:
    // 0x1c76c4: 0xdfbf0020
    ctx->pc = 0x1c76c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c76c8:
    // 0x1c76c8: 0x7bb10010
    ctx->pc = 0x1c76c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c76cc: 0x7bb00000
    ctx->pc = 0x1c76ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c76d0: 0x3e00008
    ctx->pc = 0x1C76D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C76D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7624u: goto label_1c7624;
            case 0x1C7630u: goto label_1c7630;
            case 0x1C7634u: goto label_1c7634;
            case 0x1C76A8u: goto label_1c76a8;
            case 0x1C76B4u: goto label_1c76b4;
            case 0x1C76C4u: goto label_1c76c4;
            case 0x1C76C8u: goto label_1c76c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C76D8u;
    // 0x1c76d8: 0x0
    ctx->pc = 0x1c76d8u;
    // NOP
    // 0x1c76dc: 0x0
    ctx->pc = 0x1c76dcu;
    // NOP
}
