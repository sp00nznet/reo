#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00375920
// Address: 0x375920 - 0x375a50
void sub_00375920_0x375920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x375920u;

    // 0x375920: 0x27bdfff0
    ctx->pc = 0x375920u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375924: 0x3c010032
    ctx->pc = 0x375924u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375928: 0xffbf0000
    ctx->pc = 0x375928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37592c: 0x44800800
    ctx->pc = 0x37592cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x375930: 0xc4204180
    ctx->pc = 0x375930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375934: 0x46000832
    ctx->pc = 0x375934u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x375938: 0x45000005
    ctx->pc = 0x375938u;
    {
        const bool branch_taken_0x375938 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375938) {
            ctx->pc = 0x375950u;
            goto label_375950;
        }
    }
    ctx->pc = 0x375940u;
    // 0x375940: 0x3c010039
    ctx->pc = 0x375940u;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x375944: 0xc420ca88
    ctx->pc = 0x375944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294953608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375948: 0x3c010032
    ctx->pc = 0x375948u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x37594c: 0xe4204180
    ctx->pc = 0x37594cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16768), bits); }
label_375950:
    // 0x375950: 0x3c010032
    ctx->pc = 0x375950u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375954: 0x802243cf
    ctx->pc = 0x375954u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 17359)));
    // 0x375958: 0x10400005
    ctx->pc = 0x375958u;
    {
        const bool branch_taken_0x375958 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37595Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 640));
        if (branch_taken_0x375958) {
            ctx->pc = 0x375970u;
            goto label_375970;
        }
    }
    ctx->pc = 0x375960u;
    // 0x375960: 0x24020200
    ctx->pc = 0x375960u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 512));
    // 0x375964: 0x3c010032
    ctx->pc = 0x375964u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375968: 0x10000003
    ctx->pc = 0x375968u;
    {
        const bool branch_taken_0x375968 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37596Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 16680), GPR_U32(ctx, 2));
        if (branch_taken_0x375968) {
            ctx->pc = 0x375978u;
            goto label_375978;
        }
    }
    ctx->pc = 0x375970u;
label_375970:
    // 0x375970: 0x3c010032
    ctx->pc = 0x375970u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375974: 0xac224128
    ctx->pc = 0x375974u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16680), GPR_U32(ctx, 2));
label_375978:
    // 0x375978: 0x3c010039
    ctx->pc = 0x375978u;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x37597c: 0x24040020
    ctx->pc = 0x37597cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    // 0x375980: 0xc421ca80
    ctx->pc = 0x375980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294953600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375984: 0x3c010032
    ctx->pc = 0x375984u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375988: 0xc4204180
    ctx->pc = 0x375988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37598c: 0x3c010032
    ctx->pc = 0x37598cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375990: 0xc42c4178
    ctx->pc = 0x375990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x375994: 0x3c010032
    ctx->pc = 0x375994u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375998: 0xc42d417c
    ctx->pc = 0x375998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x37599c: 0x3c010039
    ctx->pc = 0x37599cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x3759a0: 0xc42fca78
    ctx->pc = 0x3759a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294953592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x3759a4: 0xc063da8
    ctx->pc = 0x3759A4u;
    SET_GPR_U32(ctx, 31, 0x3759ACu);
    ctx->pc = 0x3759A8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x18F6A0u;
    {
        auto targetFn = runtime->lookupFunction(0x18F6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3759ACu; }
        if (ctx->pc != 0x3759ACu) { return; }
    }
    ctx->pc = 0x3759ACu;
    // 0x3759ac: 0x3c050032
    ctx->pc = 0x3759acu;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x3759b0: 0x24040018
    ctx->pc = 0x3759b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
    // 0x3759b4: 0xc06bde0
    ctx->pc = 0x3759B4u;
    SET_GPR_U32(ctx, 31, 0x3759BCu);
    ctx->pc = 0x3759B8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16672));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3759BCu; }
        if (ctx->pc != 0x3759BCu) { return; }
    }
    ctx->pc = 0x3759BCu;
    // 0x3759bc: 0xc0dd694
    ctx->pc = 0x3759BCu;
    SET_GPR_U32(ctx, 31, 0x3759C4u);
    ctx->pc = 0x375A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00375A50_0x375a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3759C4u; }
    }
    if (ctx->pc != 0x3759C4u) { return; }
    ctx->pc = 0x3759C4u;
    // 0x3759c4: 0x3c050032
    ctx->pc = 0x3759c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x3759c8: 0x24040016
    ctx->pc = 0x3759c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 22));
    // 0x3759cc: 0xc06bde0
    ctx->pc = 0x3759CCu;
    SET_GPR_U32(ctx, 31, 0x3759D4u);
    ctx->pc = 0x3759D0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16608));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3759D4u; }
        if (ctx->pc != 0x3759D4u) { return; }
    }
    ctx->pc = 0x3759D4u;
    // 0x3759d4: 0xdfbf0000
    ctx->pc = 0x3759d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3759d8: 0x3e00008
    ctx->pc = 0x3759D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3759DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x375950u: goto label_375950;
            case 0x375970u: goto label_375970;
            case 0x375978u: goto label_375978;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3759E0u;
    // 0x3759e0: 0x27bdffb0
    ctx->pc = 0x3759e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3759e4: 0x3402c350
    ctx->pc = 0x3759e4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 50000));
    // 0x3759e8: 0xffbf0000
    ctx->pc = 0x3759e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3759ec: 0x3c010039
    ctx->pc = 0x3759ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x3759f0: 0xc42eca70
    ctx->pc = 0x3759f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294953584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3759f4: 0x24040020
    ctx->pc = 0x3759f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    // 0x3759f8: 0x44820000
    ctx->pc = 0x3759f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x3759fc: 0x3c023f80
    ctx->pc = 0x3759fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x375a00: 0x3c010039
    ctx->pc = 0x375a00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x375a04: 0xc42fca78
    ctx->pc = 0x375a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294953592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x375a08: 0x44826800
    ctx->pc = 0x375a08u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x375a0c: 0xc063da8
    ctx->pc = 0x375A0Cu;
    SET_GPR_U32(ctx, 31, 0x375A14u);
    ctx->pc = 0x375A10u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    ctx->pc = 0x18F6A0u;
    {
        auto targetFn = runtime->lookupFunction(0x18F6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375A14u; }
        if (ctx->pc != 0x375A14u) { return; }
    }
    ctx->pc = 0x375A14u;
    // 0x375a14: 0x3c050039
    ctx->pc = 0x375a14u;
    SET_GPR_U32(ctx, 5, ((uint32_t)57 << 16));
    // 0x375a18: 0x3c060039
    ctx->pc = 0x375a18u;
    SET_GPR_U32(ctx, 6, ((uint32_t)57 << 16));
    // 0x375a1c: 0x3c070039
    ctx->pc = 0x375a1cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)57 << 16));
    // 0x375a20: 0x27a40010
    ctx->pc = 0x375a20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x375a24: 0x24a59520
    ctx->pc = 0x375a24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939936));
    // 0x375a28: 0x24c6952c
    ctx->pc = 0x375a28u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294939948));
    // 0x375a2c: 0xc06441c
    ctx->pc = 0x375A2Cu;
    SET_GPR_U32(ctx, 31, 0x375A34u);
    ctx->pc = 0x375A30u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294939960));
    ctx->pc = 0x191070u;
    {
        auto targetFn = runtime->lookupFunction(0x191070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375A34u; }
        if (ctx->pc != 0x375A34u) { return; }
    }
    ctx->pc = 0x375A34u;
    // 0x375a34: 0x27a50010
    ctx->pc = 0x375a34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x375a38: 0xc06bde0
    ctx->pc = 0x375A38u;
    SET_GPR_U32(ctx, 31, 0x375A40u);
    ctx->pc = 0x375A3Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 22));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375A40u; }
        if (ctx->pc != 0x375A40u) { return; }
    }
    ctx->pc = 0x375A40u;
    // 0x375a40: 0xdfbf0000
    ctx->pc = 0x375a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375a44: 0x3e00008
    ctx->pc = 0x375A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375A48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x375950u: goto label_375950;
            case 0x375970u: goto label_375970;
            case 0x375978u: goto label_375978;
            default: break;
        }
        return;
    }
    ctx->pc = 0x375A4Cu;
    // 0x375a4c: 0x0
    ctx->pc = 0x375a4cu;
    // NOP
}
