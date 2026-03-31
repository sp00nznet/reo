#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00122140
// Address: 0x122140 - 0x1223d0
void sub_00122140_0x122140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x122140u;

    // 0x122140: 0x27bdffe0
    ctx->pc = 0x122140u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x122144: 0x46006346
    ctx->pc = 0x122144u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x122148: 0xffb00000
    ctx->pc = 0x122148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12214c: 0xffb10008
    ctx->pc = 0x12214cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x122150: 0x44116800
    ctx->pc = 0x122150u;
    SET_GPR_U32(ctx, 17, *(uint32_t*)&ctx->f[13]);
    // 0x122154: 0x3c037fff
    ctx->pc = 0x122154u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x122158: 0x3c02507f
    ctx->pc = 0x122158u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20607 << 16));
    // 0x12215c: 0x3463ffff
    ctx->pc = 0x12215cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x122160: 0x3442ffff
    ctx->pc = 0x122160u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x122164: 0x2238024
    ctx->pc = 0x122164u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x122168: 0x50102a
    ctx->pc = 0x122168u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x12216c: 0x1040000e
    ctx->pc = 0x12216Cu;
    {
        const bool branch_taken_0x12216c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x122170u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x12216c) {
            ctx->pc = 0x1221A8u;
            goto label_1221a8;
        }
    }
    ctx->pc = 0x122174u;
    // 0x122174: 0x1a200006
    ctx->pc = 0x122174u;
    {
        const bool branch_taken_0x122174 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x122178u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        if (branch_taken_0x122174) {
            ctx->pc = 0x122190u;
            goto label_122190;
        }
    }
    ctx->pc = 0x12217Cu;
    // 0x12217c: 0x3c030024
    ctx->pc = 0x12217cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x122180: 0xc44192c4
    ctx->pc = 0x122180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122184: 0xc46092d4
    ctx->pc = 0x122184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294939348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122188: 0x1000008b
    ctx->pc = 0x122188u;
    {
        const bool branch_taken_0x122188 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12218Cu;
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x122188) {
            ctx->pc = 0x1223B8u;
            goto label_1223b8;
        }
    }
    ctx->pc = 0x122190u;
label_122190:
    // 0x122190: 0x3c030024
    ctx->pc = 0x122190u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x122194: 0xc44092c4
    ctx->pc = 0x122194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122198: 0xc46192d4
    ctx->pc = 0x122198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294939348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12219c: 0x46000007
    ctx->pc = 0x12219cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1221a0: 0x10000085
    ctx->pc = 0x1221A0u;
    {
        const bool branch_taken_0x1221a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1221A4u;
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x1221a0) {
            ctx->pc = 0x1223B8u;
            goto label_1223b8;
        }
    }
    ctx->pc = 0x1221A8u;
label_1221a8:
    // 0x1221a8: 0x3c023edf
    ctx->pc = 0x1221a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16095 << 16));
    // 0x1221ac: 0x3442ffff
    ctx->pc = 0x1221acu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1221b0: 0x50102a
    ctx->pc = 0x1221b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x1221b4: 0x14400010
    ctx->pc = 0x1221B4u;
    {
        const bool branch_taken_0x1221b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1221B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)12543 << 16));
        if (branch_taken_0x1221b4) {
            ctx->pc = 0x1221F8u;
            goto label_1221f8;
        }
    }
    ctx->pc = 0x1221BCu;
    // 0x1221bc: 0x3442ffff
    ctx->pc = 0x1221bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1221c0: 0x50102a
    ctx->pc = 0x1221c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x1221c4: 0x14400045
    ctx->pc = 0x1221C4u;
    {
        const bool branch_taken_0x1221c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1221C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1221c4) {
            ctx->pc = 0x1222DCu;
            goto label_1222dc;
        }
    }
    ctx->pc = 0x1221CCu;
    // 0x1221cc: 0x3c017149
    ctx->pc = 0x1221ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)29001 << 16));
    // 0x1221d0: 0x3421f2c9
    ctx->pc = 0x1221d0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 62153));
    // 0x1221d4: 0x44810800
    ctx->pc = 0x1221d4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x1221d8: 0x3c013f80
    ctx->pc = 0x1221d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x1221dc: 0x44811000
    ctx->pc = 0x1221dcu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x1221e0: 0x46016840
    ctx->pc = 0x1221e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x1221e4: 0x46011034
    ctx->pc = 0x1221e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1221e8: 0x45010073
    ctx->pc = 0x1221E8u;
    {
        const bool branch_taken_0x1221e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1221ECu;
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        if (branch_taken_0x1221e8) {
            ctx->pc = 0x1223B8u;
            goto label_1223b8;
        }
    }
    ctx->pc = 0x1221F0u;
    // 0x1221f0: 0x1000003b
    ctx->pc = 0x1221F0u;
    {
        const bool branch_taken_0x1221f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1221F4u;
        ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
        if (branch_taken_0x1221f0) {
            ctx->pc = 0x1222E0u;
            goto label_1222e0;
        }
    }
    ctx->pc = 0x1221F8u;
label_1221f8:
    // 0x1221f8: 0xc04892a
    ctx->pc = 0x1221F8u;
    SET_GPR_U32(ctx, 31, 0x122200u);
    ctx->pc = 0x1224A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001224A8_0x1224a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122200u; }
    }
    if (ctx->pc != 0x122200u) { return; }
    ctx->pc = 0x122200u;
    // 0x122200: 0x3c023f97
    ctx->pc = 0x122200u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16279 << 16));
    // 0x122204: 0x3442ffff
    ctx->pc = 0x122204u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x122208: 0x50102a
    ctx->pc = 0x122208u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x12220c: 0x1440001c
    ctx->pc = 0x12220Cu;
    {
        const bool branch_taken_0x12220c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x122210u;
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x12220c) {
            ctx->pc = 0x122280u;
            goto label_122280;
        }
    }
    ctx->pc = 0x122214u;
    // 0x122214: 0x3c023f2f
    ctx->pc = 0x122214u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16175 << 16));
    // 0x122218: 0x3442ffff
    ctx->pc = 0x122218u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x12221c: 0x50102a
    ctx->pc = 0x12221cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x122220: 0x1440000d
    ctx->pc = 0x122220u;
    {
        const bool branch_taken_0x122220 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x122220) {
            ctx->pc = 0x122258u;
            goto label_122258;
        }
    }
    ctx->pc = 0x122228u;
    // 0x122228: 0x460d6800
    ctx->pc = 0x122228u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x12222c: 0x3c013f80
    ctx->pc = 0x12222cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x122230: 0x44811000
    ctx->pc = 0x122230u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x122234: 0x3c014000
    ctx->pc = 0x122234u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x122238: 0x44810800
    ctx->pc = 0x122238u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x12223c: 0x46016840
    ctx->pc = 0x12223cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x122240: 0x46020001
    ctx->pc = 0x122240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x122244: 0x0
    ctx->pc = 0x122244u;
    // NOP
    // 0x122248: 0x0
    ctx->pc = 0x122248u;
    // NOP
    // 0x12224c: 0x46010343
    ctx->pc = 0x12224cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[1];
    // 0x122250: 0x10000022
    ctx->pc = 0x122250u;
    {
        const bool branch_taken_0x122250 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122254u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x122250) {
            ctx->pc = 0x1222DCu;
            goto label_1222dc;
        }
    }
    ctx->pc = 0x122258u;
label_122258:
    // 0x122258: 0x3c013f80
    ctx->pc = 0x122258u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x12225c: 0x44810000
    ctx->pc = 0x12225cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x122260: 0x46006840
    ctx->pc = 0x122260u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x122264: 0x46006801
    ctx->pc = 0x122264u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x122268: 0x0
    ctx->pc = 0x122268u;
    // NOP
    // 0x12226c: 0x0
    ctx->pc = 0x12226cu;
    // NOP
    // 0x122270: 0x46010343
    ctx->pc = 0x122270u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[1];
    // 0x122274: 0x10000019
    ctx->pc = 0x122274u;
    {
        const bool branch_taken_0x122274 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122278u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x122274) {
            ctx->pc = 0x1222DCu;
            goto label_1222dc;
        }
    }
    ctx->pc = 0x12227Cu;
    // 0x12227c: 0x0
    ctx->pc = 0x12227cu;
    // NOP
label_122280:
    // 0x122280: 0x3c02401b
    ctx->pc = 0x122280u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16411 << 16));
    // 0x122284: 0x3442ffff
    ctx->pc = 0x122284u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x122288: 0x50102a
    ctx->pc = 0x122288u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x12228c: 0x5440000e
    ctx->pc = 0x12228Cu;
    {
        const bool branch_taken_0x12228c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12228c) {
            ctx->pc = 0x122290u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x1222C8u;
            goto label_1222c8;
        }
    }
    ctx->pc = 0x122294u;
    // 0x122294: 0x3c013fc0
    ctx->pc = 0x122294u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x122298: 0x44810000
    ctx->pc = 0x122298u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x12229c: 0x3c013f80
    ctx->pc = 0x12229cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x1222a0: 0x44811000
    ctx->pc = 0x1222a0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x1222a4: 0x46006842
    ctx->pc = 0x1222a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1222a8: 0x46006801
    ctx->pc = 0x1222a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x1222ac: 0x46020840
    ctx->pc = 0x1222acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1222b0: 0x0
    ctx->pc = 0x1222b0u;
    // NOP
    // 0x1222b4: 0x0
    ctx->pc = 0x1222b4u;
    // NOP
    // 0x1222b8: 0x46010343
    ctx->pc = 0x1222b8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[1];
    // 0x1222bc: 0x10000007
    ctx->pc = 0x1222BCu;
    {
        const bool branch_taken_0x1222bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1222C0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1222bc) {
            ctx->pc = 0x1222DCu;
            goto label_1222dc;
        }
    }
    ctx->pc = 0x1222C4u;
    // 0x1222c4: 0x0
    ctx->pc = 0x1222c4u;
    // NOP
label_1222c8:
    // 0x1222c8: 0x3c01bf80
    ctx->pc = 0x1222c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x1222cc: 0x44810000
    ctx->pc = 0x1222ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x1222d0: 0x0
    ctx->pc = 0x1222d0u;
    // NOP
    // 0x1222d4: 0x0
    ctx->pc = 0x1222d4u;
    // NOP
    // 0x1222d8: 0x460d0343
    ctx->pc = 0x1222d8u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[13];
label_1222dc:
    // 0x1222dc: 0x460d6b02
    ctx->pc = 0x1222dcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_1222e0:
    // 0x1222e0: 0x3c020024
    ctx->pc = 0x1222e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x1222e4: 0x244292d8
    ctx->pc = 0x1222e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939352));
    // 0x1222e8: 0xc4470028
    ctx->pc = 0x1222e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1222ec: 0xc4440020
    ctx->pc = 0x1222ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1222f0: 0x460c6002
    ctx->pc = 0x1222f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1222f4: 0xc4450024
    ctx->pc = 0x1222f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1222f8: 0xc4460018
    ctx->pc = 0x1222f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1222fc: 0xc441001c
    ctx->pc = 0x1222fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122300: 0xc4480010
    ctx->pc = 0x122300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x122304: 0x460701c2
    ctx->pc = 0x122304u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x122308: 0xc4420014
    ctx->pc = 0x122308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12230c: 0x46050142
    ctx->pc = 0x12230cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x122310: 0xc4490008
    ctx->pc = 0x122310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x122314: 0xc443000c
    ctx->pc = 0x122314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x122318: 0xc44a0004
    ctx->pc = 0x122318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x12231c: 0x46072100
    ctx->pc = 0x12231cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x122320: 0xc44b0000
    ctx->pc = 0x122320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x122324: 0x46050840
    ctx->pc = 0x122324u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x122328: 0x46040102
    ctx->pc = 0x122328u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x12232c: 0x46010042
    ctx->pc = 0x12232cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x122330: 0x46043180
    ctx->pc = 0x122330u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x122334: 0x46011080
    ctx->pc = 0x122334u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x122338: 0x46060182
    ctx->pc = 0x122338u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x12233c: 0x46020082
    ctx->pc = 0x12233cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x122340: 0x46064200
    ctx->pc = 0x122340u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[6]);
    // 0x122344: 0x460218c0
    ctx->pc = 0x122344u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x122348: 0x46080202
    ctx->pc = 0x122348u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x12234c: 0x460300c2
    ctx->pc = 0x12234cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x122350: 0x46084a40
    ctx->pc = 0x122350u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x122354: 0x46035280
    ctx->pc = 0x122354u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[3]);
    // 0x122358: 0x46090242
    ctx->pc = 0x122358u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x12235c: 0x460a0042
    ctx->pc = 0x12235cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x122360: 0x46095ac0
    ctx->pc = 0x122360u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[9]);
    // 0x122364: 0x4610006
    ctx->pc = 0x122364u;
    {
        const bool branch_taken_0x122364 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x122368u;
        ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[11]);
        if (branch_taken_0x122364) {
            ctx->pc = 0x122380u;
            goto label_122380;
        }
    }
    ctx->pc = 0x12236Cu;
    // 0x12236c: 0x46010000
    ctx->pc = 0x12236cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x122370: 0x46006802
    ctx->pc = 0x122370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x122374: 0x10000010
    ctx->pc = 0x122374u;
    {
        const bool branch_taken_0x122374 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122378u;
        ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x122374) {
            ctx->pc = 0x1223B8u;
            goto label_1223b8;
        }
    }
    ctx->pc = 0x12237Cu;
    // 0x12237c: 0x0
    ctx->pc = 0x12237cu;
    // NOP
label_122380:
    // 0x122380: 0x46010000
    ctx->pc = 0x122380u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x122384: 0x31080
    ctx->pc = 0x122384u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x122388: 0x3c010024
    ctx->pc = 0x122388u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x12238c: 0x220821
    ctx->pc = 0x12238cu;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x122390: 0xc42192c8
    ctx->pc = 0x122390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122394: 0x3c010024
    ctx->pc = 0x122394u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x122398: 0x220821
    ctx->pc = 0x122398u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x12239c: 0xc42292b8
    ctx->pc = 0x12239cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1223a0: 0x46006802
    ctx->pc = 0x1223a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1223a4: 0x46010001
    ctx->pc = 0x1223a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1223a8: 0x460d0001
    ctx->pc = 0x1223a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x1223ac: 0x6210002
    ctx->pc = 0x1223ACu;
    {
        const bool branch_taken_0x1223ac = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1223B0u;
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x1223ac) {
            ctx->pc = 0x1223B8u;
            goto label_1223b8;
        }
    }
    ctx->pc = 0x1223B4u;
    // 0x1223b4: 0x46000007
    ctx->pc = 0x1223b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1223b8:
    // 0x1223b8: 0xdfb00000
    ctx->pc = 0x1223b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1223bc: 0xdfb10008
    ctx->pc = 0x1223bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1223c0: 0xdfbf0010
    ctx->pc = 0x1223c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1223c4: 0x3e00008
    ctx->pc = 0x1223C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1223C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122190u: goto label_122190;
            case 0x1221A8u: goto label_1221a8;
            case 0x1221F8u: goto label_1221f8;
            case 0x122258u: goto label_122258;
            case 0x122280u: goto label_122280;
            case 0x1222C8u: goto label_1222c8;
            case 0x1222DCu: goto label_1222dc;
            case 0x1222E0u: goto label_1222e0;
            case 0x122380u: goto label_122380;
            case 0x1223B8u: goto label_1223b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1223CCu;
    // 0x1223cc: 0x0
    ctx->pc = 0x1223ccu;
    // NOP
}
