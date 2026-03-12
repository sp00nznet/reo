#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00375650
// Address: 0x375650 - 0x375920
void sub_00375650_0x375650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x375650u;

    // 0x375650: 0x27bdfff0
    ctx->pc = 0x375650u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375654: 0x3c010032
    ctx->pc = 0x375654u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375658: 0xffbf0000
    ctx->pc = 0x375658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37565c: 0x3c0243fa
    ctx->pc = 0x37565cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17402 << 16));
    // 0x375660: 0xac20414c
    ctx->pc = 0x375660u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16716), GPR_U32(ctx, 0));
    // 0x375664: 0x3c0341d8
    ctx->pc = 0x375664u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16856 << 16));
    // 0x375668: 0x3c010032
    ctx->pc = 0x375668u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37566c: 0x3c043f80
    ctx->pc = 0x37566cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)16256 << 16));
    // 0x375670: 0xac204148
    ctx->pc = 0x375670u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16712), GPR_U32(ctx, 0));
    // 0x375674: 0x3c010032
    ctx->pc = 0x375674u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375678: 0xac204144
    ctx->pc = 0x375678u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16708), GPR_U32(ctx, 0));
    // 0x37567c: 0x3c010032
    ctx->pc = 0x37567cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375680: 0xac224174
    ctx->pc = 0x375680u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16756), GPR_U32(ctx, 2));
    // 0x375684: 0x3c010032
    ctx->pc = 0x375684u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375688: 0xac224140
    ctx->pc = 0x375688u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16704), GPR_U32(ctx, 2));
    // 0x37568c: 0x3c010032
    ctx->pc = 0x37568cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375690: 0x3402c350
    ctx->pc = 0x375690u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 50000));
    // 0x375694: 0xac234180
    ctx->pc = 0x375694u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16768), GPR_U32(ctx, 3));
    // 0x375698: 0x44820000
    ctx->pc = 0x375698u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x37569c: 0x3c010032
    ctx->pc = 0x37569cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3756a0: 0xac20413c
    ctx->pc = 0x3756a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16700), GPR_U32(ctx, 0));
    // 0x3756a4: 0x240201c0
    ctx->pc = 0x3756a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 448));
    // 0x3756a8: 0x3c010032
    ctx->pc = 0x3756a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3756ac: 0xac22412c
    ctx->pc = 0x3756acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 2));
    // 0x3756b0: 0x46800020
    ctx->pc = 0x3756b0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x3756b4: 0x3c010032
    ctx->pc = 0x3756b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3756b8: 0xac204138
    ctx->pc = 0x3756b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16696), GPR_U32(ctx, 0));
    // 0x3756bc: 0x3c010032
    ctx->pc = 0x3756bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3756c0: 0xac204158
    ctx->pc = 0x3756c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16728), GPR_U32(ctx, 0));
    // 0x3756c4: 0x3c010032
    ctx->pc = 0x3756c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3756c8: 0xac204154
    ctx->pc = 0x3756c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16724), GPR_U32(ctx, 0));
    // 0x3756cc: 0x3c010032
    ctx->pc = 0x3756ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3756d0: 0xac204150
    ctx->pc = 0x3756d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16720), GPR_U32(ctx, 0));
    // 0x3756d4: 0x3c010032
    ctx->pc = 0x3756d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3756d8: 0xac20418c
    ctx->pc = 0x3756d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16780), GPR_U32(ctx, 0));
    // 0x3756dc: 0x3c010032
    ctx->pc = 0x3756dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3756e0: 0xe4204178
    ctx->pc = 0x3756e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16760), bits); }
    // 0x3756e4: 0x3c010032
    ctx->pc = 0x3756e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3756e8: 0xac204188
    ctx->pc = 0x3756e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16776), GPR_U32(ctx, 0));
    // 0x3756ec: 0x3c010032
    ctx->pc = 0x3756ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3756f0: 0xac204184
    ctx->pc = 0x3756f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16772), GPR_U32(ctx, 0));
    // 0x3756f4: 0x3c010032
    ctx->pc = 0x3756f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3756f8: 0xac204168
    ctx->pc = 0x3756f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16744), GPR_U32(ctx, 0));
    // 0x3756fc: 0x3c010032
    ctx->pc = 0x3756fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375700: 0xac24416c
    ctx->pc = 0x375700u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16748), GPR_U32(ctx, 4));
    // 0x375704: 0x3c010032
    ctx->pc = 0x375704u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375708: 0xac204170
    ctx->pc = 0x375708u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16752), GPR_U32(ctx, 0));
    // 0x37570c: 0x3c010032
    ctx->pc = 0x37570cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375710: 0xac20415c
    ctx->pc = 0x375710u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16732), GPR_U32(ctx, 0));
    // 0x375714: 0x3c010032
    ctx->pc = 0x375714u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375718: 0xac244160
    ctx->pc = 0x375718u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16736), GPR_U32(ctx, 4));
    // 0x37571c: 0x3c010032
    ctx->pc = 0x37571cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375720: 0xac204164
    ctx->pc = 0x375720u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16740), GPR_U32(ctx, 0));
    // 0x375724: 0x3c010032
    ctx->pc = 0x375724u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375728: 0xac24417c
    ctx->pc = 0x375728u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16764), GPR_U32(ctx, 4));
    // 0x37572c: 0x3c010032
    ctx->pc = 0x37572cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375730: 0xac244134
    ctx->pc = 0x375730u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16692), GPR_U32(ctx, 4));
    // 0x375734: 0x3c010032
    ctx->pc = 0x375734u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375738: 0xac204120
    ctx->pc = 0x375738u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16672), GPR_U32(ctx, 0));
    // 0x37573c: 0x3c010032
    ctx->pc = 0x37573cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375740: 0xac204124
    ctx->pc = 0x375740u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16676), GPR_U32(ctx, 0));
    // 0x375744: 0x3c010032
    ctx->pc = 0x375744u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375748: 0xac204130
    ctx->pc = 0x375748u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16688), GPR_U32(ctx, 0));
    // 0x37574c: 0x3c010032
    ctx->pc = 0x37574cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375750: 0x802243cf
    ctx->pc = 0x375750u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 17359)));
    // 0x375754: 0x10400005
    ctx->pc = 0x375754u;
    {
        const bool branch_taken_0x375754 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x375758u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 640));
        if (branch_taken_0x375754) {
            ctx->pc = 0x37576Cu;
            goto label_37576c;
        }
    }
    ctx->pc = 0x37575Cu;
    // 0x37575c: 0x24020200
    ctx->pc = 0x37575cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 512));
    // 0x375760: 0x3c010032
    ctx->pc = 0x375760u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375764: 0x10000003
    ctx->pc = 0x375764u;
    {
        const bool branch_taken_0x375764 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x375768u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 16680), GPR_U32(ctx, 2));
        if (branch_taken_0x375764) {
            ctx->pc = 0x375774u;
            goto label_375774;
        }
    }
    ctx->pc = 0x37576Cu;
label_37576c:
    // 0x37576c: 0x3c010032
    ctx->pc = 0x37576cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375770: 0xac224128
    ctx->pc = 0x375770u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16680), GPR_U32(ctx, 2));
label_375774:
    // 0x375774: 0x3c010032
    ctx->pc = 0x375774u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375778: 0xc4204180
    ctx->pc = 0x375778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37577c: 0x44800800
    ctx->pc = 0x37577cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x375780: 0x0
    ctx->pc = 0x375780u;
    // NOP
    // 0x375784: 0x46000832
    ctx->pc = 0x375784u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x375788: 0x45000005
    ctx->pc = 0x375788u;
    {
        const bool branch_taken_0x375788 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375788) {
            ctx->pc = 0x3757A0u;
            goto label_3757a0;
        }
    }
    ctx->pc = 0x375790u;
    // 0x375790: 0x3c010039
    ctx->pc = 0x375790u;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x375794: 0xc420ca88
    ctx->pc = 0x375794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294953608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375798: 0x3c010032
    ctx->pc = 0x375798u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37579c: 0xe4204180
    ctx->pc = 0x37579cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16768), bits); }
label_3757a0:
    // 0x3757a0: 0x3c010039
    ctx->pc = 0x3757a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x3757a4: 0x24040020
    ctx->pc = 0x3757a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    // 0x3757a8: 0xc421ca80
    ctx->pc = 0x3757a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294953600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3757ac: 0x3c010032
    ctx->pc = 0x3757acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3757b0: 0xc4204180
    ctx->pc = 0x3757b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3757b4: 0x3c010032
    ctx->pc = 0x3757b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3757b8: 0xc42c4178
    ctx->pc = 0x3757b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3757bc: 0x3c010032
    ctx->pc = 0x3757bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3757c0: 0xc42d417c
    ctx->pc = 0x3757c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3757c4: 0x3c010039
    ctx->pc = 0x3757c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x3757c8: 0xc42fca78
    ctx->pc = 0x3757c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294953592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x3757cc: 0xc063da8
    ctx->pc = 0x3757CCu;
    SET_GPR_U32(ctx, 31, 0x3757D4u);
    ctx->pc = 0x3757D0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x18F6A0u;
    {
        auto targetFn = runtime->lookupFunction(0x18F6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3757D4u; }
        if (ctx->pc != 0x3757D4u) { return; }
    }
    ctx->pc = 0x3757D4u;
    // 0x3757d4: 0x3c050032
    ctx->pc = 0x3757d4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x3757d8: 0x24040018
    ctx->pc = 0x3757d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
    // 0x3757dc: 0xc06bde0
    ctx->pc = 0x3757DCu;
    SET_GPR_U32(ctx, 31, 0x3757E4u);
    ctx->pc = 0x3757E0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16672));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3757E4u; }
        if (ctx->pc != 0x3757E4u) { return; }
    }
    ctx->pc = 0x3757E4u;
    // 0x3757e4: 0xc0dd648
    ctx->pc = 0x3757E4u;
    SET_GPR_U32(ctx, 31, 0x3757ECu);
    ctx->pc = 0x375920u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00375920_0x375920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3757ECu; }
    }
    if (ctx->pc != 0x3757ECu) { return; }
    ctx->pc = 0x3757ECu;
    // 0x3757ec: 0xdfbf0000
    ctx->pc = 0x3757ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3757f0: 0x3e00008
    ctx->pc = 0x3757F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3757F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37576Cu: goto label_37576c;
            case 0x375774u: goto label_375774;
            case 0x3757A0u: goto label_3757a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3757F8u;
    // 0x3757f8: 0x0
    ctx->pc = 0x3757f8u;
    // NOP
    // 0x3757fc: 0x0
    ctx->pc = 0x3757fcu;
    // NOP
    // 0x375800: 0x27bdffa0
    ctx->pc = 0x375800u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x375804: 0xffbf0000
    ctx->pc = 0x375804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375808: 0xc063f7c
    ctx->pc = 0x375808u;
    SET_GPR_U32(ctx, 31, 0x375810u);
    ctx->pc = 0x37580Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x18FDF0u;
    {
        auto targetFn = runtime->lookupFunction(0x18FDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375810u; }
        if (ctx->pc != 0x375810u) { return; }
    }
    ctx->pc = 0x375810u;
    // 0x375810: 0x3c010032
    ctx->pc = 0x375810u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375814: 0x302d
    ctx->pc = 0x375814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375818: 0x8c244184
    ctx->pc = 0x375818u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 16772)));
    // 0x37581c: 0x3c010032
    ctx->pc = 0x37581cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375820: 0x8c254188
    ctx->pc = 0x375820u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 16776)));
    // 0x375824: 0xc0dc088
    ctx->pc = 0x375824u;
    SET_GPR_U32(ctx, 31, 0x37582Cu);
    ctx->pc = 0x375828u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x370220u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370220_0x370220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37582Cu; }
    }
    if (ctx->pc != 0x37582Cu) { return; }
    ctx->pc = 0x37582Cu;
    // 0x37582c: 0x3c050032
    ctx->pc = 0x37582cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x375830: 0x27a40050
    ctx->pc = 0x375830u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x375834: 0x24a54150
    ctx->pc = 0x375834u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16720));
    // 0x375838: 0xc064674
    ctx->pc = 0x375838u;
    SET_GPR_U32(ctx, 31, 0x375840u);
    ctx->pc = 0x37583Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1919D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1919D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375840u; }
        if (ctx->pc != 0x375840u) { return; }
    }
    ctx->pc = 0x375840u;
    // 0x375840: 0x3c010032
    ctx->pc = 0x375840u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375844: 0x3c040032
    ctx->pc = 0x375844u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x375848: 0xc4234138
    ctx->pc = 0x375848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x37584c: 0x27a30054
    ctx->pc = 0x37584cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 84));
    // 0x375850: 0xc7a00050
    ctx->pc = 0x375850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375854: 0x27a20058
    ctx->pc = 0x375854u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 88));
    // 0x375858: 0x24844144
    ctx->pc = 0x375858u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16708));
    // 0x37585c: 0x27a50050
    ctx->pc = 0x37585cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x375860: 0x27a60010
    ctx->pc = 0x375860u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x375864: 0x3c010032
    ctx->pc = 0x375864u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375868: 0xc422413c
    ctx->pc = 0x375868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37586c: 0x46001800
    ctx->pc = 0x37586cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x375870: 0x3c010032
    ctx->pc = 0x375870u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375874: 0xc4214140
    ctx->pc = 0x375874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375878: 0x3c010032
    ctx->pc = 0x375878u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37587c: 0xe4204138
    ctx->pc = 0x37587cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16696), bits); }
    // 0x375880: 0xc4600000
    ctx->pc = 0x375880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375884: 0x3c010032
    ctx->pc = 0x375884u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375888: 0x46001000
    ctx->pc = 0x375888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x37588c: 0xe420413c
    ctx->pc = 0x37588cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16700), bits); }
    // 0x375890: 0xc4400000
    ctx->pc = 0x375890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375894: 0x3c010032
    ctx->pc = 0x375894u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375898: 0x46000800
    ctx->pc = 0x375898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37589c: 0xe4204140
    ctx->pc = 0x37589cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16704), bits); }
    // 0x3758a0: 0xac600000
    ctx->pc = 0x3758a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3758a4: 0x3c010032
    ctx->pc = 0x3758a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3758a8: 0xc4204174
    ctx->pc = 0x3758a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3758ac: 0xafa00050
    ctx->pc = 0x3758acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x3758b0: 0x46000007
    ctx->pc = 0x3758b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3758b4: 0xc064674
    ctx->pc = 0x3758B4u;
    SET_GPR_U32(ctx, 31, 0x3758BCu);
    ctx->pc = 0x3758B8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->pc = 0x1919D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1919D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3758BCu; }
        if (ctx->pc != 0x3758BCu) { return; }
    }
    ctx->pc = 0x3758BCu;
    // 0x3758bc: 0x3c010032
    ctx->pc = 0x3758bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3758c0: 0xc4254144
    ctx->pc = 0x3758c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3758c4: 0x3c010032
    ctx->pc = 0x3758c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3758c8: 0xc4244138
    ctx->pc = 0x3758c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3758cc: 0x3c010032
    ctx->pc = 0x3758ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3758d0: 0xc4234148
    ctx->pc = 0x3758d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3758d4: 0x46042900
    ctx->pc = 0x3758d4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x3758d8: 0x3c010032
    ctx->pc = 0x3758d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3758dc: 0xc422413c
    ctx->pc = 0x3758dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3758e0: 0x3c010032
    ctx->pc = 0x3758e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3758e4: 0xc421414c
    ctx->pc = 0x3758e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3758e8: 0x46021880
    ctx->pc = 0x3758e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x3758ec: 0x3c010032
    ctx->pc = 0x3758ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3758f0: 0xc4204140
    ctx->pc = 0x3758f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3758f4: 0x3c010032
    ctx->pc = 0x3758f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x3758f8: 0xe4244144
    ctx->pc = 0x3758f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16708), bits); }
    // 0x3758fc: 0x3c010032
    ctx->pc = 0x3758fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375900: 0xe4224148
    ctx->pc = 0x375900u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16712), bits); }
    // 0x375904: 0x46000800
    ctx->pc = 0x375904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375908: 0x3c010032
    ctx->pc = 0x375908u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37590c: 0xc0dd648
    ctx->pc = 0x37590Cu;
    SET_GPR_U32(ctx, 31, 0x375914u);
    ctx->pc = 0x375910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16716), bits); }
    ctx->pc = 0x375920u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00375920_0x375920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375914u; }
    }
    if (ctx->pc != 0x375914u) { return; }
    ctx->pc = 0x375914u;
    // 0x375914: 0xdfbf0000
    ctx->pc = 0x375914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375918: 0x3e00008
    ctx->pc = 0x375918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37591Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37576Cu: goto label_37576c;
            case 0x375774u: goto label_375774;
            case 0x3757A0u: goto label_3757a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x375920u;
}
