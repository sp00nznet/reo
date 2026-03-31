#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AB860
// Address: 0x1ab860 - 0x1abb60
void sub_001AB860_0x1ab860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ab860u;

    // 0x1ab860: 0x27bdffa0
    ctx->pc = 0x1ab860u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ab864: 0x3c01002a
    ctx->pc = 0x1ab864u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1ab868: 0xffbf0050
    ctx->pc = 0x1ab868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ab86c: 0x7fb40040
    ctx->pc = 0x1ab86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ab870: 0x7fb30030
    ctx->pc = 0x1ab870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ab874: 0x7fb20020
    ctx->pc = 0x1ab874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ab878: 0x7fb10010
    ctx->pc = 0x1ab878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ab87c: 0x7fb00000
    ctx->pc = 0x1ab87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ab880: 0x8c22fda4
    ctx->pc = 0x1ab880u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966692)));
    // 0x1ab884: 0x10400003
    ctx->pc = 0x1AB884u;
    {
        const bool branch_taken_0x1ab884 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AB888u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ab884) {
            ctx->pc = 0x1AB894u;
            goto label_1ab894;
        }
    }
    ctx->pc = 0x1AB88Cu;
    // 0x1ab88c: 0x100000ab
    ctx->pc = 0x1AB88Cu;
    {
        const bool branch_taken_0x1ab88c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AB890u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ab88c) {
            ctx->pc = 0x1ABB3Cu;
            goto label_1abb3c;
        }
    }
    ctx->pc = 0x1AB894u;
label_1ab894:
    // 0x1ab894: 0x3c01002a
    ctx->pc = 0x1ab894u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1ab898: 0x24021000
    ctx->pc = 0x1ab898u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1ab89c: 0x8c24f9bc
    ctx->pc = 0x1ab89cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294965692)));
    // 0x1ab8a0: 0x441823
    ctx->pc = 0x1ab8a0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ab8a4: 0x4610003
    ctx->pc = 0x1AB8A4u;
    {
        const bool branch_taken_0x1ab8a4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AB8A8u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        if (branch_taken_0x1ab8a4) {
            ctx->pc = 0x1AB8B4u;
            goto label_1ab8b4;
        }
    }
    ctx->pc = 0x1AB8ACu;
    // 0x1ab8ac: 0x24620001
    ctx->pc = 0x1ab8acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ab8b0: 0x21043
    ctx->pc = 0x1ab8b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1ab8b4:
    // 0x1ab8b4: 0x24900
    ctx->pc = 0x1ab8b4u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ab8b8: 0x3c01002a
    ctx->pc = 0x1ab8b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1ab8bc: 0x8c22f9c0
    ctx->pc = 0x1ab8bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294965696)));
    // 0x1ab8c0: 0x24031000
    ctx->pc = 0x1ab8c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1ab8c4: 0x621823
    ctx->pc = 0x1ab8c4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ab8c8: 0x4610003
    ctx->pc = 0x1AB8C8u;
    {
        const bool branch_taken_0x1ab8c8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AB8CCu;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        if (branch_taken_0x1ab8c8) {
            ctx->pc = 0x1AB8D8u;
            goto label_1ab8d8;
        }
    }
    ctx->pc = 0x1AB8D0u;
    // 0x1ab8d0: 0x24620001
    ctx->pc = 0x1ab8d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ab8d4: 0x21043
    ctx->pc = 0x1ab8d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1ab8d8:
    // 0x1ab8d8: 0x44840800
    ctx->pc = 0x1ab8d8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 4);
    // 0x1ab8dc: 0x24100
    ctx->pc = 0x1ab8dcu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ab8e0: 0x3c024420
    ctx->pc = 0x1ab8e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17440 << 16));
    // 0x1ab8e4: 0x86850002
    ctx->pc = 0x1ab8e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x1ab8e8: 0x46800860
    ctx->pc = 0x1ab8e8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1ab8ec: 0x86830006
    ctx->pc = 0x1ab8ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x1ab8f0: 0x86870000
    ctx->pc = 0x1ab8f0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1ab8f4: 0x3c064180
    ctx->pc = 0x1ab8f4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)16768 << 16));
    // 0x1ab8f8: 0x86840004
    ctx->pc = 0x1ab8f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1ab8fc: 0x3c01002a
    ctx->pc = 0x1ab8fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1ab900: 0x59100
    ctx->pc = 0x1ab900u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1ab904: 0x44820000
    ctx->pc = 0x1ab904u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1ab908: 0x0
    ctx->pc = 0x1ab908u;
    // NOP
    // 0x1ab90c: 0x46000883
    ctx->pc = 0x1ab90cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
    // 0x1ab910: 0x8c22f9b4
    ctx->pc = 0x1ab910u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294965684)));
    // 0x1ab914: 0x44870000
    ctx->pc = 0x1ab914u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 7);
    // 0x1ab918: 0x44860800
    ctx->pc = 0x1ab918u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 6);
    // 0x1ab91c: 0x0
    ctx->pc = 0x1ab91cu;
    // NOP
    // 0x1ab920: 0x46800020
    ctx->pc = 0x1ab920u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1ab924: 0x46020002
    ctx->pc = 0x1ab924u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ab928: 0x46000802
    ctx->pc = 0x1ab928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab92c: 0x46000024
    ctx->pc = 0x1ab92cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1ab930: 0x44130000
    ctx->pc = 0x1ab930u;
    SET_GPR_U32(ctx, 19, *(uint32_t*)&ctx->f[0]);
    // 0x1ab934: 0x44840000
    ctx->pc = 0x1ab934u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x1ab938: 0x0
    ctx->pc = 0x1ab938u;
    // NOP
    // 0x1ab93c: 0x46800020
    ctx->pc = 0x1ab93cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1ab940: 0x46020002
    ctx->pc = 0x1ab940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ab944: 0x46000802
    ctx->pc = 0x1ab944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab948: 0x46000024
    ctx->pc = 0x1ab948u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1ab94c: 0x44110000
    ctx->pc = 0x1ab94cu;
    SET_GPR_U32(ctx, 17, *(uint32_t*)&ctx->f[0]);
    // 0x1ab950: 0x14400003
    ctx->pc = 0x1AB950u;
    {
        const bool branch_taken_0x1ab950 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AB954u;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x1ab950) {
            ctx->pc = 0x1AB960u;
            goto label_1ab960;
        }
    }
    ctx->pc = 0x1AB958u;
    // 0x1ab958: 0x129043
    ctx->pc = 0x1ab958u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 1));
    // 0x1ab95c: 0x108043
    ctx->pc = 0x1ab95cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_1ab960:
    // 0x1ab960: 0x3c040023
    ctx->pc = 0x1ab960u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x1ab964: 0x2699821
    ctx->pc = 0x1ab964u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x1ab968: 0x2489021
    ctx->pc = 0x1ab968u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x1ab96c: 0x24843f00
    ctx->pc = 0x1ab96cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16128));
    // 0x1ab970: 0x3c057000
    ctx->pc = 0x1ab970u;
    SET_GPR_U32(ctx, 5, ((uint32_t)28672 << 16));
    // 0x1ab974: 0xc0626c2
    ctx->pc = 0x1AB974u;
    SET_GPR_U32(ctx, 31, 0x1AB97Cu);
    ctx->pc = 0x1AB978u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x189B08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00189B08_0x189b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB97Cu; }
    }
    if (ctx->pc != 0x1AB97Cu) { return; }
    ctx->pc = 0x1AB97Cu;
    // 0x1ab97c: 0x8e840008
    ctx->pc = 0x1ab97cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1ab980: 0xc0662d8
    ctx->pc = 0x1AB980u;
    SET_GPR_U32(ctx, 31, 0x1AB988u);
    ctx->pc = 0x1AB984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198B60_0x198b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB988u; }
    }
    if (ctx->pc != 0x1AB988u) { return; }
    ctx->pc = 0x1AB988u;
    // 0x1ab988: 0x22402
    ctx->pc = 0x1ab988u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 2), 16));
    // 0x1ab98c: 0x21a02
    ctx->pc = 0x1ab98cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 8));
    // 0x1ab990: 0x308500ff
    ctx->pc = 0x1ab990u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 255));
    // 0x1ab994: 0x306300ff
    ctx->pc = 0x1ab994u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x1ab998: 0x32238
    ctx->pc = 0x1ab998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 8);
    // 0x1ab99c: 0x3c017000
    ctx->pc = 0x1ab99cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x1ab9a0: 0x304300ff
    ctx->pc = 0x1ab9a0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ab9a4: 0xa42025
    ctx->pc = 0x1ab9a4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ab9a8: 0x31c38
    ctx->pc = 0x1ab9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ab9ac: 0x21602
    ctx->pc = 0x1ab9acu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 24));
    // 0x1ab9b0: 0x642825
    ctx->pc = 0x1ab9b0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ab9b4: 0x304300ff
    ctx->pc = 0x1ab9b4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ab9b8: 0x32638
    ctx->pc = 0x1ab9b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 24);
    // 0x1ab9bc: 0x24020001
    ctx->pc = 0x1ab9bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab9c0: 0x2183c
    ctx->pc = 0x1ab9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab9c4: 0x852025
    ctx->pc = 0x1ab9c4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ab9c8: 0x3c024f00
    ctx->pc = 0x1ab9c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x1ab9cc: 0x831825
    ctx->pc = 0x1ab9ccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ab9d0: 0x44820000
    ctx->pc = 0x1ab9d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1ab9d4: 0xfc230028
    ctx->pc = 0x1ab9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 40), GPR_U64(ctx, 3));
    // 0x1ab9d8: 0x8683000c
    ctx->pc = 0x1ab9d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1ab9dc: 0x3c017000
    ctx->pc = 0x1ab9dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x1ab9e0: 0x8682000e
    ctx->pc = 0x1ab9e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x1ab9e4: 0x31900
    ctx->pc = 0x1ab9e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ab9e8: 0x21100
    ctx->pc = 0x1ab9e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ab9ec: 0x24630008
    ctx->pc = 0x1ab9ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1ab9f0: 0x24420008
    ctx->pc = 0x1ab9f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1ab9f4: 0x3183c
    ctx->pc = 0x1ab9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab9f8: 0x2103c
    ctx->pc = 0x1ab9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab9fc: 0x3183f
    ctx->pc = 0x1ab9fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1aba00: 0x2103f
    ctx->pc = 0x1aba00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1aba04: 0x21438
    ctx->pc = 0x1aba04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1aba08: 0x621025
    ctx->pc = 0x1aba08u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aba0c: 0xfc220030
    ctx->pc = 0x1aba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 48), GPR_U64(ctx, 2));
    // 0x1aba10: 0x3c01002a
    ctx->pc = 0x1aba10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1aba14: 0xc421f9f4
    ctx->pc = 0x1aba14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aba18: 0x46010036
    ctx->pc = 0x1aba18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aba1c: 0x45010005
    ctx->pc = 0x1ABA1Cu;
    {
        const bool branch_taken_0x1aba1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aba1c) {
            ctx->pc = 0x1ABA34u;
            goto label_1aba34;
        }
    }
    ctx->pc = 0x1ABA24u;
    // 0x1aba24: 0x46000864
    ctx->pc = 0x1aba24u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1aba28: 0x44030800
    ctx->pc = 0x1aba28u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x1aba2c: 0x10000008
    ctx->pc = 0x1ABA2Cu;
    {
        const bool branch_taken_0x1aba2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ABA30u;
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
        if (branch_taken_0x1aba2c) {
            ctx->pc = 0x1ABA50u;
            goto label_1aba50;
        }
    }
    ctx->pc = 0x1ABA34u;
label_1aba34:
    // 0x1aba34: 0x46000841
    ctx->pc = 0x1aba34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1aba38: 0x3c028000
    ctx->pc = 0x1aba38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x1aba3c: 0x46000864
    ctx->pc = 0x1aba3cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1aba40: 0x44030800
    ctx->pc = 0x1aba40u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x1aba44: 0x0
    ctx->pc = 0x1aba44u;
    // NOP
    // 0x1aba48: 0x621825
    ctx->pc = 0x1aba48u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aba4c: 0x3183c
    ctx->pc = 0x1aba4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1aba50:
    // 0x1aba50: 0x12203c
    ctx->pc = 0x1aba50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1aba54: 0x3183e
    ctx->pc = 0x1aba54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aba58: 0x13283c
    ctx->pc = 0x1aba58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1aba5c: 0x2711021
    ctx->pc = 0x1aba5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1aba60: 0x3303c
    ctx->pc = 0x1aba60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aba64: 0x2183c
    ctx->pc = 0x1aba64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aba68: 0x4203f
    ctx->pc = 0x1aba68u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1aba6c: 0x2501021
    ctx->pc = 0x1aba6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1aba70: 0x5283f
    ctx->pc = 0x1aba70u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1aba74: 0x2103c
    ctx->pc = 0x1aba74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aba78: 0x42438
    ctx->pc = 0x1aba78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1aba7c: 0x2103f
    ctx->pc = 0x1aba7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1aba80: 0x3183f
    ctx->pc = 0x1aba80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1aba84: 0x21438
    ctx->pc = 0x1aba84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1aba88: 0xa42025
    ctx->pc = 0x1aba88u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1aba8c: 0x622825
    ctx->pc = 0x1aba8cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aba90: 0x3c017000
    ctx->pc = 0x1aba90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x1aba94: 0x3c024f00
    ctx->pc = 0x1aba94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x1aba98: 0xc41825
    ctx->pc = 0x1aba98u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1aba9c: 0x44820000
    ctx->pc = 0x1aba9cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1abaa0: 0xfc230038
    ctx->pc = 0x1abaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 56), GPR_U64(ctx, 3));
    // 0x1abaa4: 0x86830010
    ctx->pc = 0x1abaa4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1abaa8: 0x3c017000
    ctx->pc = 0x1abaa8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x1abaac: 0x86820012
    ctx->pc = 0x1abaacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x1abab0: 0x31900
    ctx->pc = 0x1abab0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1abab4: 0x21100
    ctx->pc = 0x1abab4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1abab8: 0x24630008
    ctx->pc = 0x1abab8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1ababc: 0x24420008
    ctx->pc = 0x1ababcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1abac0: 0x3183c
    ctx->pc = 0x1abac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abac4: 0x2103c
    ctx->pc = 0x1abac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1abac8: 0x3183f
    ctx->pc = 0x1abac8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1abacc: 0x2103f
    ctx->pc = 0x1abaccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1abad0: 0x21438
    ctx->pc = 0x1abad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1abad4: 0x621025
    ctx->pc = 0x1abad4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1abad8: 0xfc220040
    ctx->pc = 0x1abad8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 64), GPR_U64(ctx, 2));
    // 0x1abadc: 0x3c01002a
    ctx->pc = 0x1abadcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1abae0: 0xc421f9f4
    ctx->pc = 0x1abae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1abae4: 0x46010036
    ctx->pc = 0x1abae4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1abae8: 0x45010005
    ctx->pc = 0x1ABAE8u;
    {
        const bool branch_taken_0x1abae8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1abae8) {
            ctx->pc = 0x1ABB00u;
            goto label_1abb00;
        }
    }
    ctx->pc = 0x1ABAF0u;
    // 0x1abaf0: 0x46000864
    ctx->pc = 0x1abaf0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1abaf4: 0x44030800
    ctx->pc = 0x1abaf4u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x1abaf8: 0x10000008
    ctx->pc = 0x1ABAF8u;
    {
        const bool branch_taken_0x1abaf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ABAFCu;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
        if (branch_taken_0x1abaf8) {
            ctx->pc = 0x1ABB1Cu;
            goto label_1abb1c;
        }
    }
    ctx->pc = 0x1ABB00u;
label_1abb00:
    // 0x1abb00: 0x46000841
    ctx->pc = 0x1abb00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1abb04: 0x3c028000
    ctx->pc = 0x1abb04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x1abb08: 0x46000864
    ctx->pc = 0x1abb08u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1abb0c: 0x44030800
    ctx->pc = 0x1abb0cu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x1abb10: 0x0
    ctx->pc = 0x1abb10u;
    // NOP
    // 0x1abb14: 0x621825
    ctx->pc = 0x1abb14u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1abb18: 0x3103c
    ctx->pc = 0x1abb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_1abb1c:
    // 0x1abb1c: 0x3c017000
    ctx->pc = 0x1abb1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x1abb20: 0x2103e
    ctx->pc = 0x1abb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1abb24: 0x3c047000
    ctx->pc = 0x1abb24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)28672 << 16));
    // 0x1abb28: 0x2103c
    ctx->pc = 0x1abb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1abb2c: 0x451025
    ctx->pc = 0x1abb2cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1abb30: 0xc064f88
    ctx->pc = 0x1ABB30u;
    SET_GPR_U32(ctx, 31, 0x1ABB38u);
    ctx->pc = 0x1ABB34u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 72), GPR_U64(ctx, 2));
    ctx->pc = 0x193E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193E20_0x193e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABB38u; }
    }
    if (ctx->pc != 0x1ABB38u) { return; }
    ctx->pc = 0x1ABB38u;
    // 0x1abb38: 0x24020001
    ctx->pc = 0x1abb38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1abb3c:
    // 0x1abb3c: 0xdfbf0050
    ctx->pc = 0x1abb3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1abb40: 0x7bb40040
    ctx->pc = 0x1abb40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1abb44: 0x7bb30030
    ctx->pc = 0x1abb44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1abb48: 0x7bb20020
    ctx->pc = 0x1abb48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abb4c: 0x7bb10010
    ctx->pc = 0x1abb4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abb50: 0x7bb00000
    ctx->pc = 0x1abb50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abb54: 0x3e00008
    ctx->pc = 0x1ABB54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABB58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB894u: goto label_1ab894;
            case 0x1AB8B4u: goto label_1ab8b4;
            case 0x1AB8D8u: goto label_1ab8d8;
            case 0x1AB960u: goto label_1ab960;
            case 0x1ABA34u: goto label_1aba34;
            case 0x1ABA50u: goto label_1aba50;
            case 0x1ABB00u: goto label_1abb00;
            case 0x1ABB1Cu: goto label_1abb1c;
            case 0x1ABB3Cu: goto label_1abb3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ABB5Cu;
    // 0x1abb5c: 0x0
    ctx->pc = 0x1abb5cu;
    // NOP
}
