#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00377800
// Address: 0x377800 - 0x377b20
void sub_00377800_0x377800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x377800u;

label_377800:
    // 0x377800: 0x27bdff60
    ctx->pc = 0x377800u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x377804: 0xffbf0090
    ctx->pc = 0x377804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x377808: 0x7fbe0080
    ctx->pc = 0x377808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x37780c: 0x7fb70070
    ctx->pc = 0x37780cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x377810: 0x7fb60060
    ctx->pc = 0x377810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x377814: 0x7fb50050
    ctx->pc = 0x377814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x377818: 0xb02d
    ctx->pc = 0x377818u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37781c: 0x7fb40040
    ctx->pc = 0x37781cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x377820: 0x7fb30030
    ctx->pc = 0x377820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x377824: 0x7fb20020
    ctx->pc = 0x377824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x377828: 0x7fb10010
    ctx->pc = 0x377828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37782c: 0x7fb00000
    ctx->pc = 0x37782cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x377830: 0x8c830034
    ctx->pc = 0x377830u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x377834: 0x8c771460
    ctx->pc = 0x377834u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 3), 5216)));
    // 0x377838: 0x8c711464
    ctx->pc = 0x377838u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 5220)));
    // 0x37783c: 0x161840
    ctx->pc = 0x37783cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 22), 1));
label_377840:
    // 0x377840: 0x761821
    ctx->pc = 0x377840u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x377844: 0x31840
    ctx->pc = 0x377844u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x377848: 0x2e32021
    ctx->pc = 0x377848u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x37784c: 0x94830002
    ctx->pc = 0x37784cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x377850: 0x10600074
    ctx->pc = 0x377850u;
    {
        const bool branch_taken_0x377850 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x377854u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x377850) {
            ctx->pc = 0x377A24u;
            goto label_377a24;
        }
    }
    ctx->pc = 0x377858u;
    // 0x377858: 0x94920004
    ctx->pc = 0x377858u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37785c: 0x1000006d
    ctx->pc = 0x37785Cu;
    {
        const bool branch_taken_0x37785c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x377860u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37785c) {
            ctx->pc = 0x377A14u;
            goto label_377a14;
        }
    }
    ctx->pc = 0x377864u;
label_377864:
    // 0x377864: 0xa02d
    ctx->pc = 0x377864u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_377868:
    // 0x377868: 0x26730001
    ctx->pc = 0x377868u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x37786c: 0x24020004
    ctx->pc = 0x37786cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x377870: 0x16620002
    ctx->pc = 0x377870u;
    {
        const bool branch_taken_0x377870 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x377874u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        if (branch_taken_0x377870) {
            ctx->pc = 0x37787Cu;
            goto label_37787c;
        }
    }
    ctx->pc = 0x377878u;
    // 0x377878: 0x982d
    ctx->pc = 0x377878u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37787c:
    // 0x37787c: 0x2531821
    ctx->pc = 0x37787cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x377880: 0x52040
    ctx->pc = 0x377880u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x377884: 0x31040
    ctx->pc = 0x377884u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x377888: 0x852021
    ctx->pc = 0x377888u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x37788c: 0x431021
    ctx->pc = 0x37788cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x377890: 0x41880
    ctx->pc = 0x377890u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x377894: 0x3c050057
    ctx->pc = 0x377894u;
    SET_GPR_U32(ctx, 5, ((uint32_t)87 << 16));
    // 0x377898: 0x2238021
    ctx->pc = 0x377898u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x37789c: 0x21080
    ctx->pc = 0x37789cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x3778a0: 0xc6000000
    ctx->pc = 0x3778a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3778a4: 0x3c010057
    ctx->pc = 0x3778a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3778a8: 0x2221821
    ctx->pc = 0x3778a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3778ac: 0x3c040057
    ctx->pc = 0x3778acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)87 << 16));
    // 0x3778b0: 0x3c060057
    ctx->pc = 0x3778b0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)87 << 16));
    // 0x3778b4: 0x3c023f80
    ctx->pc = 0x3778b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x3778b8: 0x2484b880
    ctx->pc = 0x3778b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x3778bc: 0x24a5b890
    ctx->pc = 0x3778bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294949008));
    // 0x3778c0: 0x24c6b8a0
    ctx->pc = 0x3778c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294949024));
    // 0x3778c4: 0xe420ba00
    ctx->pc = 0x3778c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949376), bits); }
    // 0x3778c8: 0x3c010057
    ctx->pc = 0x3778c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3778cc: 0xc422ba00
    ctx->pc = 0x3778ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294949376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3778d0: 0xc6000004
    ctx->pc = 0x3778d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3778d4: 0x3c010057
    ctx->pc = 0x3778d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3778d8: 0xe420ba04
    ctx->pc = 0x3778d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949380), bits); }
    // 0x3778dc: 0x3c010057
    ctx->pc = 0x3778dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3778e0: 0xc421ba04
    ctx->pc = 0x3778e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294949380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3778e4: 0xc6000008
    ctx->pc = 0x3778e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3778e8: 0x3c010057
    ctx->pc = 0x3778e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3778ec: 0xe420ba08
    ctx->pc = 0x3778ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949384), bits); }
    // 0x3778f0: 0x3c010057
    ctx->pc = 0x3778f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3778f4: 0xc420ba08
    ctx->pc = 0x3778f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294949384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3778f8: 0xc6030030
    ctx->pc = 0x3778f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3778fc: 0x3c010057
    ctx->pc = 0x3778fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377900: 0xe423ba10
    ctx->pc = 0x377900u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949392), bits); }
    // 0x377904: 0x3c010057
    ctx->pc = 0x377904u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377908: 0xc425ba10
    ctx->pc = 0x377908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294949392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x37790c: 0xc6030034
    ctx->pc = 0x37790cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x377910: 0x3c010057
    ctx->pc = 0x377910u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377914: 0xe423ba14
    ctx->pc = 0x377914u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949396), bits); }
    // 0x377918: 0x46022901
    ctx->pc = 0x377918u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x37791c: 0x3c010057
    ctx->pc = 0x37791cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377920: 0xc427ba14
    ctx->pc = 0x377920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294949396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x377924: 0xc6020038
    ctx->pc = 0x377924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x377928: 0x3c010057
    ctx->pc = 0x377928u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37792c: 0xe422ba18
    ctx->pc = 0x37792cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949400), bits); }
    // 0x377930: 0x460138c1
    ctx->pc = 0x377930u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x377934: 0x3c010057
    ctx->pc = 0x377934u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377938: 0xc426ba18
    ctx->pc = 0x377938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294949400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x37793c: 0xc4610000
    ctx->pc = 0x37793cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x377940: 0x3c010057
    ctx->pc = 0x377940u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377944: 0xe421ba20
    ctx->pc = 0x377944u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949408), bits); }
    // 0x377948: 0x46003081
    ctx->pc = 0x377948u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x37794c: 0x3c010057
    ctx->pc = 0x37794cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377950: 0xc420ba20
    ctx->pc = 0x377950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294949408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x377954: 0xc4610004
    ctx->pc = 0x377954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x377958: 0x3c010057
    ctx->pc = 0x377958u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37795c: 0xe421ba24
    ctx->pc = 0x37795cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949412), bits); }
    // 0x377960: 0x46050041
    ctx->pc = 0x377960u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x377964: 0x3c010057
    ctx->pc = 0x377964u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377968: 0xc420ba24
    ctx->pc = 0x377968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294949412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37796c: 0xc4650008
    ctx->pc = 0x37796cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x377970: 0x3c010057
    ctx->pc = 0x377970u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377974: 0xe425ba28
    ctx->pc = 0x377974u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949416), bits); }
    // 0x377978: 0x3c010057
    ctx->pc = 0x377978u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37797c: 0xe424b890
    ctx->pc = 0x37797cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949008), bits); }
    // 0x377980: 0x3c010057
    ctx->pc = 0x377980u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377984: 0xe423b894
    ctx->pc = 0x377984u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949012), bits); }
    // 0x377988: 0x3c010057
    ctx->pc = 0x377988u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37798c: 0xe422b898
    ctx->pc = 0x37798cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949016), bits); }
    // 0x377990: 0x3c010057
    ctx->pc = 0x377990u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377994: 0xe421b8a0
    ctx->pc = 0x377994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949024), bits); }
    // 0x377998: 0x46070001
    ctx->pc = 0x377998u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x37799c: 0x3c010057
    ctx->pc = 0x37799cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3779a0: 0xe420b8a4
    ctx->pc = 0x3779a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949028), bits); }
    // 0x3779a4: 0x3c010057
    ctx->pc = 0x3779a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3779a8: 0xac22b89c
    ctx->pc = 0x3779a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949020), GPR_U32(ctx, 2));
    // 0x3779ac: 0x3c010057
    ctx->pc = 0x3779acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3779b0: 0xac22b8ac
    ctx->pc = 0x3779b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949036), GPR_U32(ctx, 2));
    // 0x3779b4: 0x3c010057
    ctx->pc = 0x3779b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3779b8: 0xc420ba28
    ctx->pc = 0x3779b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294949416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3779bc: 0x46060001
    ctx->pc = 0x3779bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x3779c0: 0x3c010057
    ctx->pc = 0x3779c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3779c4: 0xc05faee
    ctx->pc = 0x3779C4u;
    SET_GPR_U32(ctx, 31, 0x3779CCu);
    ctx->pc = 0x3779C8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949032), bits); }
    ctx->pc = 0x17EBB8u;
    {
        auto targetFn = runtime->lookupFunction(0x17EBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3779CCu; }
        if (ctx->pc != 0x3779CCu) { return; }
    }
    ctx->pc = 0x3779CCu;
    // 0x3779cc: 0x3c040057
    ctx->pc = 0x3779ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)87 << 16));
    // 0x3779d0: 0x2484b880
    ctx->pc = 0x3779d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x3779d4: 0xc05fb26
    ctx->pc = 0x3779D4u;
    SET_GPR_U32(ctx, 31, 0x3779DCu);
    ctx->pc = 0x3779D8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17EC98u;
    {
        auto targetFn = runtime->lookupFunction(0x17EC98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3779DCu; }
        if (ctx->pc != 0x3779DCu) { return; }
    }
    ctx->pc = 0x3779DCu;
    // 0x3779dc: 0x3c010057
    ctx->pc = 0x3779dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3779e0: 0x26940001
    ctx->pc = 0x3779e0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x3779e4: 0xc420b880
    ctx->pc = 0x3779e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3779e8: 0x2a830004
    ctx->pc = 0x3779e8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), 4));
    // 0x3779ec: 0xe6000060
    ctx->pc = 0x3779ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x3779f0: 0x3c010057
    ctx->pc = 0x3779f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3779f4: 0xc420b884
    ctx->pc = 0x3779f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3779f8: 0xe6000064
    ctx->pc = 0x3779f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x3779fc: 0x3c010057
    ctx->pc = 0x3779fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377a00: 0xc420b888
    ctx->pc = 0x377a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294949000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x377a04: 0x1460ff98
    ctx->pc = 0x377A04u;
    {
        const bool branch_taken_0x377a04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x377A08u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        if (branch_taken_0x377a04) {
            ctx->pc = 0x377868u;
            goto label_377868;
        }
    }
    ctx->pc = 0x377A0Cu;
    // 0x377a0c: 0x2652000d
    ctx->pc = 0x377a0cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 13));
    // 0x377a10: 0x26b50001
    ctx->pc = 0x377a10u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_377a14:
    // 0x377a14: 0x97c30000
    ctx->pc = 0x377a14u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x377a18: 0x2a3182a
    ctx->pc = 0x377a18u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 3)));
    // 0x377a1c: 0x1460ff91
    ctx->pc = 0x377A1Cu;
    {
        const bool branch_taken_0x377a1c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x377A20u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x377a1c) {
            ctx->pc = 0x377864u;
            goto label_377864;
        }
    }
    ctx->pc = 0x377A24u;
label_377a24:
    // 0x377a24: 0x26d60001
    ctx->pc = 0x377a24u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
    // 0x377a28: 0x2ac30013
    ctx->pc = 0x377a28u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 22), 19));
    // 0x377a2c: 0x1460ff84
    ctx->pc = 0x377A2Cu;
    {
        const bool branch_taken_0x377a2c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x377A30u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 22), 1));
        if (branch_taken_0x377a2c) {
            ctx->pc = 0x377840u;
            goto label_377840;
        }
    }
    ctx->pc = 0x377A34u;
    // 0x377a34: 0xdfbf0090
    ctx->pc = 0x377a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x377a38: 0x7bbe0080
    ctx->pc = 0x377a38u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x377a3c: 0x7bb70070
    ctx->pc = 0x377a3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x377a40: 0x7bb60060
    ctx->pc = 0x377a40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x377a44: 0x7bb50050
    ctx->pc = 0x377a44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x377a48: 0x7bb40040
    ctx->pc = 0x377a48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x377a4c: 0x7bb30030
    ctx->pc = 0x377a4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377a50: 0x7bb20020
    ctx->pc = 0x377a50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377a54: 0x7bb10010
    ctx->pc = 0x377a54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377a58: 0x7bb00000
    ctx->pc = 0x377a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377a5c: 0x3e00008
    ctx->pc = 0x377A5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377A60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x377800u: goto label_377800;
            case 0x377840u: goto label_377840;
            case 0x377864u: goto label_377864;
            case 0x377868u: goto label_377868;
            case 0x37787Cu: goto label_37787c;
            case 0x377A14u: goto label_377a14;
            case 0x377A24u: goto label_377a24;
            case 0x377A84u: goto label_377a84;
            case 0x377B0Cu: goto label_377b0c;
            case 0x377B10u: goto label_377b10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x377A64u;
    // 0x377a64: 0x0
    ctx->pc = 0x377a64u;
    // NOP
    // 0x377a68: 0x0
    ctx->pc = 0x377a68u;
    // NOP
    // 0x377a6c: 0x0
    ctx->pc = 0x377a6cu;
    // NOP
    // 0x377a70: 0x27bdffe0
    ctx->pc = 0x377a70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x377a74: 0xffbf0010
    ctx->pc = 0x377a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x377a78: 0x7fb00000
    ctx->pc = 0x377a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x377a7c: 0xc0dde00
    ctx->pc = 0x377A7Cu;
    SET_GPR_U32(ctx, 31, 0x377A84u);
    ctx->pc = 0x377A80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x377800u;
    goto label_377800;
    ctx->pc = 0x377A84u;
label_377a84:
    // 0x377a84: 0x3c010057
    ctx->pc = 0x377a84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377a88: 0x8c22af00
    ctx->pc = 0x377a88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946560)));
    // 0x377a8c: 0x2c410010
    ctx->pc = 0x377a8cu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 16));
    // 0x377a90: 0x1020001e
    ctx->pc = 0x377A90u;
    {
        const bool branch_taken_0x377a90 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x377A94u;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x377a90) {
            ctx->pc = 0x377B0Cu;
            goto label_377b0c;
        }
    }
    ctx->pc = 0x377A98u;
    // 0x377a98: 0x3c010032
    ctx->pc = 0x377a98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x377a9c: 0x3c020057
    ctx->pc = 0x377a9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)87 << 16));
    // 0x377aa0: 0x2442b000
    ctx->pc = 0x377aa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294946816));
    // 0x377aa4: 0x461821
    ctx->pc = 0x377aa4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x377aa8: 0xac700000
    ctx->pc = 0x377aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x377aac: 0x3c020057
    ctx->pc = 0x377aacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)87 << 16));
    // 0x377ab0: 0xc42040c0
    ctx->pc = 0x377ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x377ab4: 0x2442b004
    ctx->pc = 0x377ab4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294946820));
    // 0x377ab8: 0x462821
    ctx->pc = 0x377ab8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x377abc: 0x3c020057
    ctx->pc = 0x377abcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)87 << 16));
    // 0x377ac0: 0x2442b008
    ctx->pc = 0x377ac0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294946824));
    // 0x377ac4: 0x462021
    ctx->pc = 0x377ac4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x377ac8: 0x3c020057
    ctx->pc = 0x377ac8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)87 << 16));
    // 0x377acc: 0xe4a00000
    ctx->pc = 0x377accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x377ad0: 0x3c010032
    ctx->pc = 0x377ad0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x377ad4: 0xc42040c4
    ctx->pc = 0x377ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x377ad8: 0x2442b00c
    ctx->pc = 0x377ad8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294946828));
    // 0x377adc: 0x461821
    ctx->pc = 0x377adcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x377ae0: 0x24020001
    ctx->pc = 0x377ae0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x377ae4: 0xe4800000
    ctx->pc = 0x377ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x377ae8: 0x3c010032
    ctx->pc = 0x377ae8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x377aec: 0xc42040c8
    ctx->pc = 0x377aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x377af0: 0xe4600000
    ctx->pc = 0x377af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x377af4: 0x3c010057
    ctx->pc = 0x377af4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377af8: 0x8c23af00
    ctx->pc = 0x377af8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294946560)));
    // 0x377afc: 0x24630001
    ctx->pc = 0x377afcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x377b00: 0x3c010057
    ctx->pc = 0x377b00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377b04: 0x10000002
    ctx->pc = 0x377B04u;
    {
        const bool branch_taken_0x377b04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x377B08u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294946560), GPR_U32(ctx, 3));
        if (branch_taken_0x377b04) {
            ctx->pc = 0x377B10u;
            goto label_377b10;
        }
    }
    ctx->pc = 0x377B0Cu;
label_377b0c:
    // 0x377b0c: 0x102d
    ctx->pc = 0x377b0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_377b10:
    // 0x377b10: 0xdfbf0010
    ctx->pc = 0x377b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377b14: 0x7bb00000
    ctx->pc = 0x377b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377b18: 0x3e00008
    ctx->pc = 0x377B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377B1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x377800u: goto label_377800;
            case 0x377840u: goto label_377840;
            case 0x377864u: goto label_377864;
            case 0x377868u: goto label_377868;
            case 0x37787Cu: goto label_37787c;
            case 0x377A14u: goto label_377a14;
            case 0x377A24u: goto label_377a24;
            case 0x377A84u: goto label_377a84;
            case 0x377B0Cu: goto label_377b0c;
            case 0x377B10u: goto label_377b10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x377B20u;
}
