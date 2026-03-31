#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001210B8
// Address: 0x1210b8 - 0x121920
void sub_001210B8_0x1210b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1210b8u;

    // 0x1210b8: 0x24c2fffd
    ctx->pc = 0x1210b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x1210bc: 0x24ca0004
    ctx->pc = 0x1210bcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 6), 4));
    // 0x1210c0: 0x28430000
    ctx->pc = 0x1210c0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 0));
    // 0x1210c4: 0x27bdfe50
    ctx->pc = 0x1210c4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x1210c8: 0x143100b
    ctx->pc = 0x1210c8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 10));
    // 0x1210cc: 0xffb70188
    ctx->pc = 0x1210ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
    // 0x1210d0: 0x2b8c3
    ctx->pc = 0x1210d0u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1210d4: 0xafa80144
    ctx->pc = 0x1210d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 8));
    // 0x1210d8: 0x2ae20000
    ctx->pc = 0x1210d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), 0));
    // 0x1210dc: 0x84080
    ctx->pc = 0x1210dcu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1210e0: 0x2b80b
    ctx->pc = 0x1210e0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 23, GPR_U32(ctx, 0));
    // 0x1210e4: 0xffb40170
    ctx->pc = 0x1210e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x1210e8: 0x3c140024
    ctx->pc = 0x1210e8u;
    SET_GPR_U32(ctx, 20, ((uint32_t)36 << 16));
    // 0x1210ec: 0x288a021
    ctx->pc = 0x1210ecu;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x1210f0: 0x8e9491a8
    ctx->pc = 0x1210f0u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 20), 4294939048)));
    // 0x1210f4: 0x1710c0
    ctx->pc = 0x1210f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), 3));
    // 0x1210f8: 0xffb20160
    ctx->pc = 0x1210f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x1210fc: 0x24f2ffff
    ctx->pc = 0x1210fcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x121100: 0xc23023
    ctx->pc = 0x121100u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x121104: 0x2541821
    ctx->pc = 0x121104u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x121108: 0xffb10158
    ctx->pc = 0x121108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x12110c: 0x24d1fff8
    ctx->pc = 0x12110cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x121110: 0xffbe0190
    ctx->pc = 0x121110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x121114: 0xa0f02d
    ctx->pc = 0x121114u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121118: 0xffb00150
    ctx->pc = 0x121118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x12111c: 0x2f22823
    ctx->pc = 0x12111cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x121120: 0xffb30168
    ctx->pc = 0x121120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x121124: 0xffb50178
    ctx->pc = 0x121124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x121128: 0xffb60180
    ctx->pc = 0x121128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x12112c: 0xffbf0198
    ctx->pc = 0x12112cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
    // 0x121130: 0xe7b401a0
    ctx->pc = 0x121130u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x121134: 0xafa40140
    ctx->pc = 0x121134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x121138: 0x460000f
    ctx->pc = 0x121138u;
    {
        const bool branch_taken_0x121138 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x12113Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 9));
        if (branch_taken_0x121138) {
            ctx->pc = 0x121178u;
            goto label_121178;
        }
    }
    ctx->pc = 0x121140u;
    // 0x121140: 0x51080
    ctx->pc = 0x121140u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x121144: 0x24660001
    ctx->pc = 0x121144u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 1));
    // 0x121148: 0x491021
    ctx->pc = 0x121148u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x12114c: 0x27a30050
    ctx->pc = 0x12114cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 80));
label_121150:
    // 0x121150: 0x4a20004
    ctx->pc = 0x121150u;
    {
        const bool branch_taken_0x121150 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x121150) {
            ctx->pc = 0x121154u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x121164u;
            goto label_121164;
        }
    }
    ctx->pc = 0x121158u;
    // 0x121158: 0xc4400000
    ctx->pc = 0x121158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12115c: 0x46800020
    ctx->pc = 0x12115cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x121160: 0xe4600000
    ctx->pc = 0x121160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_121164:
    // 0x121164: 0x24c6ffff
    ctx->pc = 0x121164u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x121168: 0x24630004
    ctx->pc = 0x121168u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x12116c: 0x24420004
    ctx->pc = 0x12116cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x121170: 0x14c0fff7
    ctx->pc = 0x121170u;
    {
        const bool branch_taken_0x121170 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x121174u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x121170) {
            ctx->pc = 0x121150u;
            goto label_121150;
        }
    }
    ctx->pc = 0x121178u;
label_121178:
    // 0x121178: 0x680001b
    ctx->pc = 0x121178u;
    {
        const bool branch_taken_0x121178 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x12117Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x121178) {
            ctx->pc = 0x1211E8u;
            goto label_1211e8;
        }
    }
    ctx->pc = 0x121180u;
    // 0x121180: 0x27a200f0
    ctx->pc = 0x121180u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 240));
    // 0x121184: 0x240202d
    ctx->pc = 0x121184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121188: 0x40382d
    ctx->pc = 0x121188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12118c: 0x0
    ctx->pc = 0x12118cu;
    // NOP
label_121190:
    // 0x121190: 0x44801000
    ctx->pc = 0x121190u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x121194: 0x642000f
    ctx->pc = 0x121194u;
    {
        const bool branch_taken_0x121194 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x121194) {
            ctx->pc = 0x121198u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x1211D4u;
            goto label_1211d4;
        }
    }
    ctx->pc = 0x12119Cu;
    // 0x12119c: 0x27a50050
    ctx->pc = 0x12119cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1211a0: 0x41080
    ctx->pc = 0x1211a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1211a4: 0x8fa30140
    ctx->pc = 0x1211a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1211a8: 0x451021
    ctx->pc = 0x1211a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1211ac: 0x26450001
    ctx->pc = 0x1211acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 1));
label_1211b0:
    // 0x1211b0: 0xc4600000
    ctx->pc = 0x1211b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1211b4: 0x24630004
    ctx->pc = 0x1211b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x1211b8: 0xc4410000
    ctx->pc = 0x1211b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1211bc: 0x2442fffc
    ctx->pc = 0x1211bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1211c0: 0x24a5ffff
    ctx->pc = 0x1211c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1211c4: 0x46010002
    ctx->pc = 0x1211c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1211c8: 0x14a0fff9
    ctx->pc = 0x1211C8u;
    {
        const bool branch_taken_0x1211c8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1211CCu;
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x1211c8) {
            ctx->pc = 0x1211B0u;
            goto label_1211b0;
        }
    }
    ctx->pc = 0x1211D0u;
    // 0x1211d0: 0x24c60001
    ctx->pc = 0x1211d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_1211d4:
    // 0x1211d4: 0xe4e20000
    ctx->pc = 0x1211d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1211d8: 0x286102a
    ctx->pc = 0x1211d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 6)));
    // 0x1211dc: 0x24840001
    ctx->pc = 0x1211dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1211e0: 0x1040ffeb
    ctx->pc = 0x1211E0u;
    {
        const bool branch_taken_0x1211e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1211E4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x1211e0) {
            ctx->pc = 0x121190u;
            goto label_121190;
        }
    }
    ctx->pc = 0x1211E8u;
label_1211e8:
    // 0x1211e8: 0x280802d
    ctx->pc = 0x1211e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1211ec:
    // 0x1211ec: 0x109880
    ctx->pc = 0x1211ecu;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1211f0: 0x27a300f0
    ctx->pc = 0x1211f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 240));
    // 0x1211f4: 0x731021
    ctx->pc = 0x1211f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1211f8: 0x200282d
    ctx->pc = 0x1211f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1211fc: 0x1a000017
    ctx->pc = 0x1211FCu;
    {
        const bool branch_taken_0x1211fc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x121200u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        if (branch_taken_0x1211fc) {
            ctx->pc = 0x12125Cu;
            goto label_12125c;
        }
    }
    ctx->pc = 0x121204u;
    // 0x121204: 0x3c013b80
    ctx->pc = 0x121204u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x121208: 0x44812000
    ctx->pc = 0x121208u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 1);
    // 0x12120c: 0x2443fffc
    ctx->pc = 0x12120cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x121210: 0x3c014380
    ctx->pc = 0x121210u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17280 << 16));
    // 0x121214: 0x44811800
    ctx->pc = 0x121214u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x121218: 0x3a0202d
    ctx->pc = 0x121218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12121c: 0x0
    ctx->pc = 0x12121cu;
    // NOP
label_121220:
    // 0x121220: 0x4604a002
    ctx->pc = 0x121220u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x121224: 0xc4610000
    ctx->pc = 0x121224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121228: 0x24a5ffff
    ctx->pc = 0x121228u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x12122c: 0x2463fffc
    ctx->pc = 0x12122cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x121230: 0x460000a4
    ctx->pc = 0x121230u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x121234: 0x44021000
    ctx->pc = 0x121234u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[2]);
    // 0x121238: 0x44821000
    ctx->pc = 0x121238u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x12123c: 0x468010a0
    ctx->pc = 0x12123cu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x121240: 0x46031002
    ctx->pc = 0x121240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x121244: 0x4600a001
    ctx->pc = 0x121244u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x121248: 0x46020d00
    ctx->pc = 0x121248u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x12124c: 0x46000064
    ctx->pc = 0x12124cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x121250: 0xe4810000
    ctx->pc = 0x121250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x121254: 0x1ca0fff2
    ctx->pc = 0x121254u;
    {
        const bool branch_taken_0x121254 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x121258u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x121254) {
            ctx->pc = 0x121220u;
            goto label_121220;
        }
    }
    ctx->pc = 0x12125Cu;
label_12125c:
    // 0x12125c: 0x4600a306
    ctx->pc = 0x12125cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x121260: 0xc0428e0
    ctx->pc = 0x121260u;
    SET_GPR_U32(ctx, 31, 0x121268u);
    ctx->pc = 0x121264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A380u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A380_0x10a380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121268u; }
    }
    if (ctx->pc != 0x121268u) { return; }
    ctx->pc = 0x121268u;
    // 0x121268: 0x3c013e00
    ctx->pc = 0x121268u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15872 << 16));
    // 0x12126c: 0x44816000
    ctx->pc = 0x12126cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x121270: 0x46000506
    ctx->pc = 0x121270u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x121274: 0xb02d
    ctx->pc = 0x121274u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121278: 0xc048934
    ctx->pc = 0x121278u;
    SET_GPR_U32(ctx, 31, 0x121280u);
    ctx->pc = 0x12127Cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->pc = 0x1224D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001224D0_0x1224d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121280u; }
    }
    if (ctx->pc != 0x121280u) { return; }
    ctx->pc = 0x121280u;
    // 0x121280: 0x3c014100
    ctx->pc = 0x121280u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16640 << 16));
    // 0x121284: 0x44810800
    ctx->pc = 0x121284u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x121288: 0x46010002
    ctx->pc = 0x121288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12128c: 0x4600a501
    ctx->pc = 0x12128cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x121290: 0x4600a024
    ctx->pc = 0x121290u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[20]);
    // 0x121294: 0x44150000
    ctx->pc = 0x121294u;
    SET_GPR_U32(ctx, 21, *(uint32_t*)&ctx->f[0]);
    // 0x121298: 0x44950000
    ctx->pc = 0x121298u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 21);
    // 0x12129c: 0x46800020
    ctx->pc = 0x12129cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1212a0: 0x1a20000f
    ctx->pc = 0x1212A0u;
    {
        const bool branch_taken_0x1212a0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1212A4u;
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x1212a0) {
            ctx->pc = 0x1212E0u;
            goto label_1212e0;
        }
    }
    ctx->pc = 0x1212A8u;
    // 0x1212a8: 0x2663fffc
    ctx->pc = 0x1212a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x1212ac: 0x24020008
    ctx->pc = 0x1212acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1212b0: 0x3a32821
    ctx->pc = 0x1212b0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1212b4: 0x511023
    ctx->pc = 0x1212b4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1212b8: 0x8ca30000
    ctx->pc = 0x1212b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1212bc: 0x24040007
    ctx->pc = 0x1212bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1212c0: 0x912023
    ctx->pc = 0x1212c0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1212c4: 0x433007
    ctx->pc = 0x1212c4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1212c8: 0x461004
    ctx->pc = 0x1212c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x1212cc: 0x2a6a821
    ctx->pc = 0x1212ccu;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x1212d0: 0x621823
    ctx->pc = 0x1212d0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1212d4: 0xaca30000
    ctx->pc = 0x1212d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1212d8: 0x1000000c
    ctx->pc = 0x1212D8u;
    {
        const bool branch_taken_0x1212d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1212DCu;
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
        if (branch_taken_0x1212d8) {
            ctx->pc = 0x12130Cu;
            goto label_12130c;
        }
    }
    ctx->pc = 0x1212E0u;
label_1212e0:
    // 0x1212e0: 0x16200005
    ctx->pc = 0x1212E0u;
    {
        const bool branch_taken_0x1212e0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1212E4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
        if (branch_taken_0x1212e0) {
            ctx->pc = 0x1212F8u;
            goto label_1212f8;
        }
    }
    ctx->pc = 0x1212E8u;
    // 0x1212e8: 0x8c43fffc
    ctx->pc = 0x1212e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x1212ec: 0x10000007
    ctx->pc = 0x1212ECu;
    {
        const bool branch_taken_0x1212ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1212F0u;
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), 8));
        if (branch_taken_0x1212ec) {
            ctx->pc = 0x12130Cu;
            goto label_12130c;
        }
    }
    ctx->pc = 0x1212F4u;
    // 0x1212f4: 0x0
    ctx->pc = 0x1212f4u;
    // NOP
label_1212f8:
    // 0x1212f8: 0x3c013f00
    ctx->pc = 0x1212f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x1212fc: 0x44810000
    ctx->pc = 0x1212fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x121300: 0x46140036
    ctx->pc = 0x121300u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121304: 0x45030001
    ctx->pc = 0x121304u;
    {
        const bool branch_taken_0x121304 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x121304) {
            ctx->pc = 0x121308u;
            SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x12130Cu;
            goto label_12130c;
        }
    }
    ctx->pc = 0x12130Cu;
label_12130c:
    // 0x12130c: 0x1ac00032
    ctx->pc = 0x12130Cu;
    {
        const bool branch_taken_0x12130c = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x12130c) {
            ctx->pc = 0x1213D8u;
            goto label_1213d8;
        }
    }
    ctx->pc = 0x121314u;
    // 0x121314: 0x26b50001
    ctx->pc = 0x121314u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
    // 0x121318: 0x1a000012
    ctx->pc = 0x121318u;
    {
        const bool branch_taken_0x121318 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12131Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x121318) {
            ctx->pc = 0x121364u;
            goto label_121364;
        }
    }
    ctx->pc = 0x121320u;
    // 0x121320: 0x24080100
    ctx->pc = 0x121320u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 256));
    // 0x121324: 0x240400ff
    ctx->pc = 0x121324u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 255));
    // 0x121328: 0x3a0182d
    ctx->pc = 0x121328u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12132c: 0x200302d
    ctx->pc = 0x12132cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121330:
    // 0x121330: 0x14e00005
    ctx->pc = 0x121330u;
    {
        const bool branch_taken_0x121330 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x121334u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x121330) {
            ctx->pc = 0x121348u;
            goto label_121348;
        }
    }
    ctx->pc = 0x121338u;
    // 0x121338: 0x10a00005
    ctx->pc = 0x121338u;
    {
        const bool branch_taken_0x121338 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x12133Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        if (branch_taken_0x121338) {
            ctx->pc = 0x121350u;
            goto label_121350;
        }
    }
    ctx->pc = 0x121340u;
    // 0x121340: 0x10000002
    ctx->pc = 0x121340u;
    {
        const bool branch_taken_0x121340 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x121344u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x121340) {
            ctx->pc = 0x12134Cu;
            goto label_12134c;
        }
    }
    ctx->pc = 0x121348u;
label_121348:
    // 0x121348: 0x851023
    ctx->pc = 0x121348u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_12134c:
    // 0x12134c: 0xac620000
    ctx->pc = 0x12134cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_121350:
    // 0x121350: 0x24c6ffff
    ctx->pc = 0x121350u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x121354: 0x0
    ctx->pc = 0x121354u;
    // NOP
    // 0x121358: 0x0
    ctx->pc = 0x121358u;
    // NOP
    // 0x12135c: 0x14c0fff4
    ctx->pc = 0x12135Cu;
    {
        const bool branch_taken_0x12135c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x121360u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x12135c) {
            ctx->pc = 0x121330u;
            goto label_121330;
        }
    }
    ctx->pc = 0x121364u;
label_121364:
    // 0x121364: 0x1a200013
    ctx->pc = 0x121364u;
    {
        const bool branch_taken_0x121364 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x121368u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x121364) {
            ctx->pc = 0x1213B4u;
            goto label_1213b4;
        }
    }
    ctx->pc = 0x12136Cu;
    // 0x12136c: 0x24020001
    ctx->pc = 0x12136cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x121370: 0x12220005
    ctx->pc = 0x121370u;
    {
        const bool branch_taken_0x121370 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x121374u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x121370) {
            ctx->pc = 0x121388u;
            goto label_121388;
        }
    }
    ctx->pc = 0x121378u;
    // 0x121378: 0x52220009
    ctx->pc = 0x121378u;
    {
        const bool branch_taken_0x121378 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        if (branch_taken_0x121378) {
            ctx->pc = 0x12137Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294967292));
            ctx->pc = 0x1213A0u;
            goto label_1213a0;
        }
    }
    ctx->pc = 0x121380u;
    // 0x121380: 0x1000000c
    ctx->pc = 0x121380u;
    {
        const bool branch_taken_0x121380 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x121380) {
            ctx->pc = 0x1213B4u;
            goto label_1213b4;
        }
    }
    ctx->pc = 0x121388u;
label_121388:
    // 0x121388: 0x2662fffc
    ctx->pc = 0x121388u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x12138c: 0x3a22021
    ctx->pc = 0x12138cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x121390: 0x8c830000
    ctx->pc = 0x121390u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121394: 0x10000005
    ctx->pc = 0x121394u;
    {
        const bool branch_taken_0x121394 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x121398u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 127));
        if (branch_taken_0x121394) {
            ctx->pc = 0x1213ACu;
            goto label_1213ac;
        }
    }
    ctx->pc = 0x12139Cu;
    // 0x12139c: 0x0
    ctx->pc = 0x12139cu;
    // NOP
label_1213a0:
    // 0x1213a0: 0x3a22021
    ctx->pc = 0x1213a0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1213a4: 0x8c830000
    ctx->pc = 0x1213a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1213a8: 0x3063003f
    ctx->pc = 0x1213a8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 63));
label_1213ac:
    // 0x1213ac: 0xac830000
    ctx->pc = 0x1213acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1213b0: 0x24020002
    ctx->pc = 0x1213b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1213b4:
    // 0x1213b4: 0x16c20008
    ctx->pc = 0x1213B4u;
    {
        const bool branch_taken_0x1213b4 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 2));
        if (branch_taken_0x1213b4) {
            ctx->pc = 0x1213D8u;
            goto label_1213d8;
        }
    }
    ctx->pc = 0x1213BCu;
    // 0x1213bc: 0x3c013f80
    ctx->pc = 0x1213bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x1213c0: 0x44816000
    ctx->pc = 0x1213c0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x1213c4: 0x10e00004
    ctx->pc = 0x1213C4u;
    {
        const bool branch_taken_0x1213c4 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x1213C8u;
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        if (branch_taken_0x1213c4) {
            ctx->pc = 0x1213D8u;
            goto label_1213d8;
        }
    }
    ctx->pc = 0x1213CCu;
    // 0x1213cc: 0xc0428e0
    ctx->pc = 0x1213CCu;
    SET_GPR_U32(ctx, 31, 0x1213D4u);
    ctx->pc = 0x1213D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A380u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A380_0x10a380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1213D4u; }
    }
    if (ctx->pc != 0x1213D4u) { return; }
    ctx->pc = 0x1213D4u;
    // 0x1213d4: 0x4600a501
    ctx->pc = 0x1213d4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1213d8:
    // 0x1213d8: 0x44800000
    ctx->pc = 0x1213d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1213dc: 0x4600a032
    ctx->pc = 0x1213dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1213e0: 0x45000051
    ctx->pc = 0x1213E0u;
    {
        const bool branch_taken_0x1213e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1213E4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 4294967295));
        if (branch_taken_0x1213e0) {
            ctx->pc = 0x121528u;
            goto label_121528;
        }
    }
    ctx->pc = 0x1213E8u;
    // 0x1213e8: 0xd4102a
    ctx->pc = 0x1213e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 20)));
    // 0x1213ec: 0x1440000b
    ctx->pc = 0x1213ECu;
    {
        const bool branch_taken_0x1213ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1213F0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1213ec) {
            ctx->pc = 0x12141Cu;
            goto label_12141c;
        }
    }
    ctx->pc = 0x1213F4u;
    // 0x1213f4: 0x61080
    ctx->pc = 0x1213f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1213f8: 0x5d2021
    ctx->pc = 0x1213f8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1213fc: 0x0
    ctx->pc = 0x1213fcu;
    // NOP
label_121400:
    // 0x121400: 0x8c830000
    ctx->pc = 0x121400u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121404: 0x2484fffc
    ctx->pc = 0x121404u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x121408: 0x24c6ffff
    ctx->pc = 0x121408u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x12140c: 0xd4102a
    ctx->pc = 0x12140cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 20)));
    // 0x121410: 0x0
    ctx->pc = 0x121410u;
    // NOP
    // 0x121414: 0x1040fffa
    ctx->pc = 0x121414u;
    {
        const bool branch_taken_0x121414 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x121418u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        if (branch_taken_0x121414) {
            ctx->pc = 0x121400u;
            goto label_121400;
        }
    }
    ctx->pc = 0x12141Cu;
label_12141c:
    // 0x12141c: 0x14a00040
    ctx->pc = 0x12141Cu;
    {
        const bool branch_taken_0x12141c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x121420u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 4294967295));
        if (branch_taken_0x12141c) {
            ctx->pc = 0x121520u;
            goto label_121520;
        }
    }
    ctx->pc = 0x121424u;
    // 0x121424: 0x21080
    ctx->pc = 0x121424u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x121428: 0x3a21821
    ctx->pc = 0x121428u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x12142c: 0x8c640000
    ctx->pc = 0x12142cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x121430: 0x1480000c
    ctx->pc = 0x121430u;
    {
        const bool branch_taken_0x121430 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x121434u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x121430) {
            ctx->pc = 0x121464u;
            goto label_121464;
        }
    }
    ctx->pc = 0x121438u;
    // 0x121438: 0x141080
    ctx->pc = 0x121438u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
    // 0x12143c: 0x5d1021
    ctx->pc = 0x12143cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x121440: 0x2443fffc
    ctx->pc = 0x121440u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x121444: 0x0
    ctx->pc = 0x121444u;
    // NOP
label_121448:
    // 0x121448: 0x2463fffc
    ctx->pc = 0x121448u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x12144c: 0x8c620000
    ctx->pc = 0x12144cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x121450: 0x0
    ctx->pc = 0x121450u;
    // NOP
    // 0x121454: 0x0
    ctx->pc = 0x121454u;
    // NOP
    // 0x121458: 0x0
    ctx->pc = 0x121458u;
    // NOP
    // 0x12145c: 0x1040fffa
    ctx->pc = 0x12145Cu;
    {
        const bool branch_taken_0x12145c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x121460u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
        if (branch_taken_0x12145c) {
            ctx->pc = 0x121448u;
            goto label_121448;
        }
    }
    ctx->pc = 0x121464u;
label_121464:
    // 0x121464: 0x2084821
    ctx->pc = 0x121464u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x121468: 0x26060001
    ctx->pc = 0x121468u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 1));
    // 0x12146c: 0x126102a
    ctx->pc = 0x12146cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 6)));
    // 0x121470: 0x1440ff5e
    ctx->pc = 0x121470u;
    {
        const bool branch_taken_0x121470 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x121474u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x121470) {
            ctx->pc = 0x1211ECu;
            goto label_1211ec;
        }
    }
    ctx->pc = 0x121478u;
    // 0x121478: 0x8fab0148
    ctx->pc = 0x121478u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x12147c: 0x2461021
    ctx->pc = 0x12147cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x121480: 0x2e62021
    ctx->pc = 0x121480u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x121484: 0x27a50050
    ctx->pc = 0x121484u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x121488: 0x21080
    ctx->pc = 0x121488u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x12148c: 0x42080
    ctx->pc = 0x12148cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x121490: 0x61880
    ctx->pc = 0x121490u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x121494: 0x27a700f0
    ctx->pc = 0x121494u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 240));
    // 0x121498: 0x8b2021
    ctx->pc = 0x121498u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x12149c: 0xa0582d
    ctx->pc = 0x12149cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1214a0: 0x671821
    ctx->pc = 0x1214a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1214a4: 0x454021
    ctx->pc = 0x1214a4u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1214a8: 0x120502d
    ctx->pc = 0x1214a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1214ac: 0x0
    ctx->pc = 0x1214acu;
    // NOP
label_1214b0:
    // 0x1214b0: 0xc4800000
    ctx->pc = 0x1214b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1214b4: 0x46800020
    ctx->pc = 0x1214b4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1214b8: 0x2461021
    ctx->pc = 0x1214b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1214bc: 0x44801000
    ctx->pc = 0x1214bcu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x1214c0: 0x640000d
    ctx->pc = 0x1214C0u;
    {
        const bool branch_taken_0x1214c0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1214C4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        if (branch_taken_0x1214c0) {
            ctx->pc = 0x1214F8u;
            goto label_1214f8;
        }
    }
    ctx->pc = 0x1214C8u;
    // 0x1214c8: 0x21080
    ctx->pc = 0x1214c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1214cc: 0x8fa70140
    ctx->pc = 0x1214ccu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1214d0: 0x4b1021
    ctx->pc = 0x1214d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1214d4: 0x26450001
    ctx->pc = 0x1214d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 1));
label_1214d8:
    // 0x1214d8: 0xc4e00000
    ctx->pc = 0x1214d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1214dc: 0x24e70004
    ctx->pc = 0x1214dcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
    // 0x1214e0: 0xc4410000
    ctx->pc = 0x1214e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1214e4: 0x2442fffc
    ctx->pc = 0x1214e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1214e8: 0x24a5ffff
    ctx->pc = 0x1214e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1214ec: 0x46010002
    ctx->pc = 0x1214ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1214f0: 0x14a0fff9
    ctx->pc = 0x1214F0u;
    {
        const bool branch_taken_0x1214f0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1214F4u;
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x1214f0) {
            ctx->pc = 0x1214D8u;
            goto label_1214d8;
        }
    }
    ctx->pc = 0x1214F8u;
label_1214f8:
    // 0x1214f8: 0x24c60001
    ctx->pc = 0x1214f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1214fc: 0xe4620000
    ctx->pc = 0x1214fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x121500: 0x146102a
    ctx->pc = 0x121500u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 6)));
    // 0x121504: 0x25080004
    ctx->pc = 0x121504u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
    // 0x121508: 0x24630004
    ctx->pc = 0x121508u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x12150c: 0x1040ffe8
    ctx->pc = 0x12150Cu;
    {
        const bool branch_taken_0x12150c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x121510u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x12150c) {
            ctx->pc = 0x1214B0u;
            goto label_1214b0;
        }
    }
    ctx->pc = 0x121514u;
    // 0x121514: 0x1000ff35
    ctx->pc = 0x121514u;
    {
        const bool branch_taken_0x121514 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x121518u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x121514) {
            ctx->pc = 0x1211ECu;
            goto label_1211ec;
        }
    }
    ctx->pc = 0x12151Cu;
    // 0x12151c: 0x0
    ctx->pc = 0x12151cu;
    // NOP
label_121520:
    // 0x121520: 0x44800000
    ctx->pc = 0x121520u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x121524: 0x4600a032
    ctx->pc = 0x121524u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_121528:
    // 0x121528: 0x45000013
    ctx->pc = 0x121528u;
    {
        const bool branch_taken_0x121528 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12152Cu;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x121528) {
            ctx->pc = 0x121578u;
            goto label_121578;
        }
    }
    ctx->pc = 0x121530u;
    // 0x121530: 0x2610ffff
    ctx->pc = 0x121530u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x121534: 0x101080
    ctx->pc = 0x121534u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x121538: 0x3a21021
    ctx->pc = 0x121538u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x12153c: 0x8c430000
    ctx->pc = 0x12153cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x121540: 0x1460002b
    ctx->pc = 0x121540u;
    {
        const bool branch_taken_0x121540 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x121544u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967288));
        if (branch_taken_0x121540) {
            ctx->pc = 0x1215F0u;
            goto label_1215f0;
        }
    }
    ctx->pc = 0x121548u;
    // 0x121548: 0x40182d
    ctx->pc = 0x121548u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12154c: 0x0
    ctx->pc = 0x12154cu;
    // NOP
label_121550:
    // 0x121550: 0x2463fffc
    ctx->pc = 0x121550u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x121554: 0x2610ffff
    ctx->pc = 0x121554u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x121558: 0x8c620000
    ctx->pc = 0x121558u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12155c: 0x0
    ctx->pc = 0x12155cu;
    // NOP
    // 0x121560: 0x0
    ctx->pc = 0x121560u;
    // NOP
    // 0x121564: 0x1040fffa
    ctx->pc = 0x121564u;
    {
        const bool branch_taken_0x121564 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x121568u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967288));
        if (branch_taken_0x121564) {
            ctx->pc = 0x121550u;
            goto label_121550;
        }
    }
    ctx->pc = 0x12156Cu;
    // 0x12156c: 0x10000020
    ctx->pc = 0x12156Cu;
    {
        const bool branch_taken_0x12156c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x12156c) {
            ctx->pc = 0x1215F0u;
            goto label_1215f0;
        }
    }
    ctx->pc = 0x121574u;
    // 0x121574: 0x0
    ctx->pc = 0x121574u;
    // NOP
label_121578:
    // 0x121578: 0xc0428e0
    ctx->pc = 0x121578u;
    SET_GPR_U32(ctx, 31, 0x121580u);
    ctx->pc = 0x12157Cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    ctx->pc = 0x10A380u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A380_0x10a380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121580u; }
    }
    if (ctx->pc != 0x121580u) { return; }
    ctx->pc = 0x121580u;
    // 0x121580: 0x3c014380
    ctx->pc = 0x121580u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17280 << 16));
    // 0x121584: 0x44810800
    ctx->pc = 0x121584u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x121588: 0x46000506
    ctx->pc = 0x121588u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x12158c: 0x46140836
    ctx->pc = 0x12158cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121590: 0x45000015
    ctx->pc = 0x121590u;
    {
        const bool branch_taken_0x121590 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121594u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 19)));
        if (branch_taken_0x121590) {
            ctx->pc = 0x1215E8u;
            goto label_1215e8;
        }
    }
    ctx->pc = 0x121598u;
    // 0x121598: 0x3c013b80
    ctx->pc = 0x121598u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x12159c: 0x44810000
    ctx->pc = 0x12159cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x1215a0: 0x26100001
    ctx->pc = 0x1215a0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1215a4: 0x101080
    ctx->pc = 0x1215a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1215a8: 0x3b32021
    ctx->pc = 0x1215a8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 19)));
    // 0x1215ac: 0x4600a002
    ctx->pc = 0x1215acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1215b0: 0x3a21821
    ctx->pc = 0x1215b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1215b4: 0x460000a4
    ctx->pc = 0x1215b4u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1215b8: 0x44021000
    ctx->pc = 0x1215b8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[2]);
    // 0x1215bc: 0x44821000
    ctx->pc = 0x1215bcu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x1215c0: 0x468010a0
    ctx->pc = 0x1215c0u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x1215c4: 0x46011002
    ctx->pc = 0x1215c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1215c8: 0x4600a001
    ctx->pc = 0x1215c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1215cc: 0x46000064
    ctx->pc = 0x1215ccu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1215d0: 0xe4810000
    ctx->pc = 0x1215d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1215d4: 0x46001024
    ctx->pc = 0x1215d4u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[2]);
    // 0x1215d8: 0xe4600000
    ctx->pc = 0x1215d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1215dc: 0x10000004
    ctx->pc = 0x1215DCu;
    {
        const bool branch_taken_0x1215dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1215E0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x1215dc) {
            ctx->pc = 0x1215F0u;
            goto label_1215f0;
        }
    }
    ctx->pc = 0x1215E4u;
    // 0x1215e4: 0x0
    ctx->pc = 0x1215e4u;
    // NOP
label_1215e8:
    // 0x1215e8: 0x4600a024
    ctx->pc = 0x1215e8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[20]);
    // 0x1215ec: 0xe4400000
    ctx->pc = 0x1215ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1215f0:
    // 0x1215f0: 0x3c013f80
    ctx->pc = 0x1215f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x1215f4: 0x44816000
    ctx->pc = 0x1215f4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x1215f8: 0xc0428e0
    ctx->pc = 0x1215F8u;
    SET_GPR_U32(ctx, 31, 0x121600u);
    ctx->pc = 0x1215FCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A380u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A380_0x10a380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121600u; }
    }
    if (ctx->pc != 0x121600u) { return; }
    ctx->pc = 0x121600u;
    // 0x121600: 0x200302d
    ctx->pc = 0x121600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121604: 0x4c00011
    ctx->pc = 0x121604u;
    {
        const bool branch_taken_0x121604 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x121608u;
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x121604) {
            ctx->pc = 0x12164Cu;
            goto label_12164c;
        }
    }
    ctx->pc = 0x12160Cu;
    // 0x12160c: 0x27a200f0
    ctx->pc = 0x12160cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 240));
    // 0x121610: 0x3c013b80
    ctx->pc = 0x121610u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x121614: 0x44810800
    ctx->pc = 0x121614u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x121618: 0x40202d
    ctx->pc = 0x121618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12161c: 0x0
    ctx->pc = 0x12161cu;
    // NOP
label_121620:
    // 0x121620: 0x61080
    ctx->pc = 0x121620u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x121624: 0x24c6ffff
    ctx->pc = 0x121624u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x121628: 0x3a21821
    ctx->pc = 0x121628u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x12162c: 0x821021
    ctx->pc = 0x12162cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x121630: 0xc4600000
    ctx->pc = 0x121630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121634: 0x46800020
    ctx->pc = 0x121634u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x121638: 0x46001002
    ctx->pc = 0x121638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x12163c: 0x46011082
    ctx->pc = 0x12163cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x121640: 0x4c1fff7
    ctx->pc = 0x121640u;
    {
        const bool branch_taken_0x121640 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x121644u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        if (branch_taken_0x121640) {
            ctx->pc = 0x121620u;
            goto label_121620;
        }
    }
    ctx->pc = 0x121648u;
    // 0x121648: 0x200302d
    ctx->pc = 0x121648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12164c:
    // 0x12164c: 0x4c00024
    ctx->pc = 0x12164Cu;
    {
        const bool branch_taken_0x12164c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x121650u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        if (branch_taken_0x12164c) {
            ctx->pc = 0x1216E0u;
            goto label_1216e0;
        }
    }
    ctx->pc = 0x121654u;
    // 0x121654: 0x27a300f0
    ctx->pc = 0x121654u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 240));
    // 0x121658: 0x60502d
    ctx->pc = 0x121658u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12165c: 0x244c91b8
    ctx->pc = 0x12165cu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 2), 4294939064));
    // 0x121660: 0x27ab00a0
    ctx->pc = 0x121660u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 29), 160));
    // 0x121664: 0x0
    ctx->pc = 0x121664u;
    // NOP
label_121668:
    // 0x121668: 0x44801000
    ctx->pc = 0x121668u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x12166c: 0x6800016
    ctx->pc = 0x12166Cu;
    {
        const bool branch_taken_0x12166c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x121670u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12166c) {
            ctx->pc = 0x1216C8u;
            goto label_1216c8;
        }
    }
    ctx->pc = 0x121674u;
    // 0x121674: 0x2063823
    ctx->pc = 0x121674u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x121678: 0x4e00014
    ctx->pc = 0x121678u;
    {
        const bool branch_taken_0x121678 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x12167Cu;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x121678) {
            ctx->pc = 0x1216CCu;
            goto label_1216cc;
        }
    }
    ctx->pc = 0x121680u;
    // 0x121680: 0x61080
    ctx->pc = 0x121680u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x121684: 0x180282d
    ctx->pc = 0x121684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121688: 0x4a2021
    ctx->pc = 0x121688u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x12168c: 0xc4a00000
    ctx->pc = 0x12168cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_121690:
    // 0x121690: 0x24a50004
    ctx->pc = 0x121690u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x121694: 0xc4810000
    ctx->pc = 0x121694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121698: 0x24840004
    ctx->pc = 0x121698u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x12169c: 0x25080001
    ctx->pc = 0x12169cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1216a0: 0x46010002
    ctx->pc = 0x1216a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1216a4: 0x288102a
    ctx->pc = 0x1216a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 8)));
    // 0x1216a8: 0x128182a
    ctx->pc = 0x1216a8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 8)));
    // 0x1216ac: 0x14400007
    ctx->pc = 0x1216ACu;
    {
        const bool branch_taken_0x1216ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1216B0u;
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x1216ac) {
            ctx->pc = 0x1216CCu;
            goto label_1216cc;
        }
    }
    ctx->pc = 0x1216B4u;
    // 0x1216b4: 0x5060fff6
    ctx->pc = 0x1216B4u;
    {
        const bool branch_taken_0x1216b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1216b4) {
            ctx->pc = 0x1216B8u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x121690u;
            goto label_121690;
        }
    }
    ctx->pc = 0x1216BCu;
    // 0x1216bc: 0x10000004
    ctx->pc = 0x1216BCu;
    {
        const bool branch_taken_0x1216bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1216C0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        if (branch_taken_0x1216bc) {
            ctx->pc = 0x1216D0u;
            goto label_1216d0;
        }
    }
    ctx->pc = 0x1216C4u;
    // 0x1216c4: 0x0
    ctx->pc = 0x1216c4u;
    // NOP
label_1216c8:
    // 0x1216c8: 0x2063823
    ctx->pc = 0x1216c8u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_1216cc:
    // 0x1216cc: 0x71080
    ctx->pc = 0x1216ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
label_1216d0:
    // 0x1216d0: 0x24c6ffff
    ctx->pc = 0x1216d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1216d4: 0x1621021
    ctx->pc = 0x1216d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1216d8: 0x4c1ffe3
    ctx->pc = 0x1216D8u;
    {
        const bool branch_taken_0x1216d8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1216DCu;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        if (branch_taken_0x1216d8) {
            ctx->pc = 0x121668u;
            goto label_121668;
        }
    }
    ctx->pc = 0x1216E0u;
label_1216e0:
    // 0x1216e0: 0x8fa50144
    ctx->pc = 0x1216e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x1216e4: 0x28a20003
    ctx->pc = 0x1216e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 3));
    // 0x1216e8: 0x50400007
    ctx->pc = 0x1216E8u;
    {
        const bool branch_taken_0x1216e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1216e8) {
            ctx->pc = 0x1216ECu;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 324)));
            ctx->pc = 0x121708u;
            goto label_121708;
        }
    }
    ctx->pc = 0x1216F0u;
    // 0x1216f0: 0x5ca0001d
    ctx->pc = 0x1216F0u;
    {
        const bool branch_taken_0x1216f0 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1216f0) {
            ctx->pc = 0x1216F4u;
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x121768u;
            goto label_121768;
        }
    }
    ctx->pc = 0x1216F8u;
    // 0x1216f8: 0x10a00009
    ctx->pc = 0x1216F8u;
    {
        const bool branch_taken_0x1216f8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1216FCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), 7));
        if (branch_taken_0x1216f8) {
            ctx->pc = 0x121720u;
            goto label_121720;
        }
    }
    ctx->pc = 0x121700u;
    // 0x121700: 0x1000007a
    ctx->pc = 0x121700u;
    {
        const bool branch_taken_0x121700 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x121704u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        if (branch_taken_0x121700) {
            ctx->pc = 0x1218ECu;
            goto label_1218ec;
        }
    }
    ctx->pc = 0x121708u;
label_121708:
    // 0x121708: 0x24020003
    ctx->pc = 0x121708u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x12170c: 0x10c20038
    ctx->pc = 0x12170Cu;
    {
        const bool branch_taken_0x12170c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x121710u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), 7));
        if (branch_taken_0x12170c) {
            ctx->pc = 0x1217F0u;
            goto label_1217f0;
        }
    }
    ctx->pc = 0x121714u;
    // 0x121714: 0x10000075
    ctx->pc = 0x121714u;
    {
        const bool branch_taken_0x121714 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x121718u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        if (branch_taken_0x121714) {
            ctx->pc = 0x1218ECu;
            goto label_1218ec;
        }
    }
    ctx->pc = 0x12171Cu;
    // 0x12171c: 0x0
    ctx->pc = 0x12171cu;
    // NOP
label_121720:
    // 0x121720: 0x200302d
    ctx->pc = 0x121720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121724: 0x44801000
    ctx->pc = 0x121724u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x121728: 0x4c0000a
    ctx->pc = 0x121728u;
    {
        const bool branch_taken_0x121728 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x12172Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 160));
        if (branch_taken_0x121728) {
            ctx->pc = 0x121754u;
            goto label_121754;
        }
    }
    ctx->pc = 0x121730u;
    // 0x121730: 0x61080
    ctx->pc = 0x121730u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x121734: 0x431021
    ctx->pc = 0x121734u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_121738:
    // 0x121738: 0xc4400000
    ctx->pc = 0x121738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12173c: 0x2442fffc
    ctx->pc = 0x12173cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x121740: 0x24c6ffff
    ctx->pc = 0x121740u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x121744: 0x0
    ctx->pc = 0x121744u;
    // NOP
    // 0x121748: 0x0
    ctx->pc = 0x121748u;
    // NOP
    // 0x12174c: 0x4c1fffa
    ctx->pc = 0x12174Cu;
    {
        const bool branch_taken_0x12174c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x121750u;
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x12174c) {
            ctx->pc = 0x121738u;
            goto label_121738;
        }
    }
    ctx->pc = 0x121754u;
label_121754:
    // 0x121754: 0x12c00063
    ctx->pc = 0x121754u;
    {
        const bool branch_taken_0x121754 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x121758u;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        if (branch_taken_0x121754) {
            ctx->pc = 0x1218E4u;
            goto label_1218e4;
        }
    }
    ctx->pc = 0x12175Cu;
    // 0x12175c: 0x46001007
    ctx->pc = 0x12175cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x121760: 0x10000060
    ctx->pc = 0x121760u;
    {
        const bool branch_taken_0x121760 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x121764u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        if (branch_taken_0x121760) {
            ctx->pc = 0x1218E4u;
            goto label_1218e4;
        }
    }
    ctx->pc = 0x121768u;
label_121768:
    // 0x121768: 0x44801000
    ctx->pc = 0x121768u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x12176c: 0x4c0000b
    ctx->pc = 0x12176Cu;
    {
        const bool branch_taken_0x12176c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x121770u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 160));
        if (branch_taken_0x12176c) {
            ctx->pc = 0x12179Cu;
            goto label_12179c;
        }
    }
    ctx->pc = 0x121774u;
    // 0x121774: 0x61080
    ctx->pc = 0x121774u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x121778: 0x431021
    ctx->pc = 0x121778u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12177c: 0x0
    ctx->pc = 0x12177cu;
    // NOP
label_121780:
    // 0x121780: 0xc4400000
    ctx->pc = 0x121780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121784: 0x2442fffc
    ctx->pc = 0x121784u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x121788: 0x24c6ffff
    ctx->pc = 0x121788u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x12178c: 0x0
    ctx->pc = 0x12178cu;
    // NOP
    // 0x121790: 0x0
    ctx->pc = 0x121790u;
    // NOP
    // 0x121794: 0x4c1fffa
    ctx->pc = 0x121794u;
    {
        const bool branch_taken_0x121794 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x121798u;
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x121794) {
            ctx->pc = 0x121780u;
            goto label_121780;
        }
    }
    ctx->pc = 0x12179Cu;
label_12179c:
    // 0x12179c: 0x12c00003
    ctx->pc = 0x12179Cu;
    {
        const bool branch_taken_0x12179c = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x1217A0u;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        if (branch_taken_0x12179c) {
            ctx->pc = 0x1217ACu;
            goto label_1217ac;
        }
    }
    ctx->pc = 0x1217A4u;
    // 0x1217a4: 0x46001007
    ctx->pc = 0x1217a4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x1217a8: 0xe7c00000
    ctx->pc = 0x1217a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_1217ac:
    // 0x1217ac: 0xc7a000a0
    ctx->pc = 0x1217acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1217b0: 0x1a00000a
    ctx->pc = 0x1217B0u;
    {
        const bool branch_taken_0x1217b0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1217B4u;
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        if (branch_taken_0x1217b0) {
            ctx->pc = 0x1217DCu;
            goto label_1217dc;
        }
    }
    ctx->pc = 0x1217B8u;
    // 0x1217b8: 0x200302d
    ctx->pc = 0x1217b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1217bc: 0x27a200a4
    ctx->pc = 0x1217bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 164));
label_1217c0:
    // 0x1217c0: 0xc4400000
    ctx->pc = 0x1217c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1217c4: 0x24420004
    ctx->pc = 0x1217c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1217c8: 0x24c6ffff
    ctx->pc = 0x1217c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1217cc: 0x0
    ctx->pc = 0x1217ccu;
    // NOP
    // 0x1217d0: 0x0
    ctx->pc = 0x1217d0u;
    // NOP
    // 0x1217d4: 0x14c0fffa
    ctx->pc = 0x1217D4u;
    {
        const bool branch_taken_0x1217d4 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1217D8u;
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x1217d4) {
            ctx->pc = 0x1217C0u;
            goto label_1217c0;
        }
    }
    ctx->pc = 0x1217DCu;
label_1217dc:
    // 0x1217dc: 0x12c00041
    ctx->pc = 0x1217DCu;
    {
        const bool branch_taken_0x1217dc = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x1217E0u;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
        if (branch_taken_0x1217dc) {
            ctx->pc = 0x1218E4u;
            goto label_1218e4;
        }
    }
    ctx->pc = 0x1217E4u;
    // 0x1217e4: 0x46001007
    ctx->pc = 0x1217e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x1217e8: 0x1000003e
    ctx->pc = 0x1217E8u;
    {
        const bool branch_taken_0x1217e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1217ECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
        if (branch_taken_0x1217e8) {
            ctx->pc = 0x1218E4u;
            goto label_1218e4;
        }
    }
    ctx->pc = 0x1217F0u;
label_1217f0:
    // 0x1217f0: 0x200302d
    ctx->pc = 0x1217f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1217f4: 0x18c00010
    ctx->pc = 0x1217F4u;
    {
        const bool branch_taken_0x1217f4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1217F8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 2));
        if (branch_taken_0x1217f4) {
            ctx->pc = 0x121838u;
            goto label_121838;
        }
    }
    ctx->pc = 0x1217FCu;
    // 0x1217fc: 0x61080
    ctx->pc = 0x1217fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x121800: 0x3a21821
    ctx->pc = 0x121800u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x121804: 0x2463009c
    ctx->pc = 0x121804u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 156));
label_121808:
    // 0x121808: 0xc4610000
    ctx->pc = 0x121808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12180c: 0x24c6ffff
    ctx->pc = 0x12180cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x121810: 0xc4600004
    ctx->pc = 0x121810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121814: 0x46000880
    ctx->pc = 0x121814u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x121818: 0x46020841
    ctx->pc = 0x121818u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x12181c: 0xe4620000
    ctx->pc = 0x12181cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x121820: 0x46010000
    ctx->pc = 0x121820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x121824: 0xe4600004
    ctx->pc = 0x121824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x121828: 0x1cc0fff7
    ctx->pc = 0x121828u;
    {
        const bool branch_taken_0x121828 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x12182Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967292));
        if (branch_taken_0x121828) {
            ctx->pc = 0x121808u;
            goto label_121808;
        }
    }
    ctx->pc = 0x121830u;
    // 0x121830: 0x200302d
    ctx->pc = 0x121830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121834: 0x28c20002
    ctx->pc = 0x121834u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 2));
label_121838:
    // 0x121838: 0x54400011
    ctx->pc = 0x121838u;
    {
        const bool branch_taken_0x121838 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x121838) {
            ctx->pc = 0x12183Cu;
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x121880u;
            goto label_121880;
        }
    }
    ctx->pc = 0x121840u;
    // 0x121840: 0x61080
    ctx->pc = 0x121840u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x121844: 0x3a21821
    ctx->pc = 0x121844u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x121848: 0x2463009c
    ctx->pc = 0x121848u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 156));
    // 0x12184c: 0x0
    ctx->pc = 0x12184cu;
    // NOP
label_121850:
    // 0x121850: 0xc4600000
    ctx->pc = 0x121850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121854: 0x24c6ffff
    ctx->pc = 0x121854u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x121858: 0xc4610004
    ctx->pc = 0x121858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12185c: 0x28c20002
    ctx->pc = 0x12185cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 2));
    // 0x121860: 0x46010080
    ctx->pc = 0x121860u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x121864: 0x46020001
    ctx->pc = 0x121864u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x121868: 0xe4620000
    ctx->pc = 0x121868u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x12186c: 0x46000840
    ctx->pc = 0x12186cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x121870: 0xe4610004
    ctx->pc = 0x121870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x121874: 0x1040fff6
    ctx->pc = 0x121874u;
    {
        const bool branch_taken_0x121874 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x121878u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967292));
        if (branch_taken_0x121874) {
            ctx->pc = 0x121850u;
            goto label_121850;
        }
    }
    ctx->pc = 0x12187Cu;
    // 0x12187c: 0x200302d
    ctx->pc = 0x12187cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121880:
    // 0x121880: 0x44801000
    ctx->pc = 0x121880u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x121884: 0x28c20002
    ctx->pc = 0x121884u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 2));
    // 0x121888: 0x1440000a
    ctx->pc = 0x121888u;
    {
        const bool branch_taken_0x121888 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12188Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x121888) {
            ctx->pc = 0x1218B4u;
            goto label_1218b4;
        }
    }
    ctx->pc = 0x121890u;
    // 0x121890: 0x27a300a0
    ctx->pc = 0x121890u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 160));
    // 0x121894: 0x431821
    ctx->pc = 0x121894u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_121898:
    // 0x121898: 0xc4600000
    ctx->pc = 0x121898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12189c: 0x2463fffc
    ctx->pc = 0x12189cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1218a0: 0x24c6ffff
    ctx->pc = 0x1218a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1218a4: 0x28c20002
    ctx->pc = 0x1218a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 2));
    // 0x1218a8: 0x0
    ctx->pc = 0x1218a8u;
    // NOP
    // 0x1218ac: 0x1040fffa
    ctx->pc = 0x1218ACu;
    {
        const bool branch_taken_0x1218ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1218B0u;
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x1218ac) {
            ctx->pc = 0x121898u;
            goto label_121898;
        }
    }
    ctx->pc = 0x1218B4u;
label_1218b4:
    // 0x1218b4: 0x16c00004
    ctx->pc = 0x1218B4u;
    {
        const bool branch_taken_0x1218b4 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        ctx->pc = 0x1218B8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x1218b4) {
            ctx->pc = 0x1218C8u;
            goto label_1218c8;
        }
    }
    ctx->pc = 0x1218BCu;
    // 0x1218bc: 0x10000006
    ctx->pc = 0x1218BCu;
    {
        const bool branch_taken_0x1218bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1218C0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x1218bc) {
            ctx->pc = 0x1218D8u;
            goto label_1218d8;
        }
    }
    ctx->pc = 0x1218C4u;
    // 0x1218c4: 0x0
    ctx->pc = 0x1218c4u;
    // NOP
label_1218c8:
    // 0x1218c8: 0x46001087
    ctx->pc = 0x1218c8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1218cc: 0xc7a100a4
    ctx->pc = 0x1218ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1218d0: 0x46000007
    ctx->pc = 0x1218d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1218d4: 0x46000847
    ctx->pc = 0x1218d4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1218d8:
    // 0x1218d8: 0xe7c20008
    ctx->pc = 0x1218d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
    // 0x1218dc: 0xe7c00000
    ctx->pc = 0x1218dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x1218e0: 0xe7c10004
    ctx->pc = 0x1218e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
label_1218e4:
    // 0x1218e4: 0x32a20007
    ctx->pc = 0x1218e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), 7));
    // 0x1218e8: 0xdfb00150
    ctx->pc = 0x1218e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_1218ec:
    // 0x1218ec: 0xdfb10158
    ctx->pc = 0x1218ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1218f0: 0xdfb20160
    ctx->pc = 0x1218f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1218f4: 0xdfb30168
    ctx->pc = 0x1218f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1218f8: 0xdfb40170
    ctx->pc = 0x1218f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1218fc: 0xdfb50178
    ctx->pc = 0x1218fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x121900: 0xdfb60180
    ctx->pc = 0x121900u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x121904: 0xdfb70188
    ctx->pc = 0x121904u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x121908: 0xdfbe0190
    ctx->pc = 0x121908u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x12190c: 0xdfbf0198
    ctx->pc = 0x12190cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x121910: 0xc7b401a0
    ctx->pc = 0x121910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x121914: 0x3e00008
    ctx->pc = 0x121914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121918u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x121150u: goto label_121150;
            case 0x121164u: goto label_121164;
            case 0x121178u: goto label_121178;
            case 0x121190u: goto label_121190;
            case 0x1211B0u: goto label_1211b0;
            case 0x1211D4u: goto label_1211d4;
            case 0x1211E8u: goto label_1211e8;
            case 0x1211ECu: goto label_1211ec;
            case 0x121220u: goto label_121220;
            case 0x12125Cu: goto label_12125c;
            case 0x1212E0u: goto label_1212e0;
            case 0x1212F8u: goto label_1212f8;
            case 0x12130Cu: goto label_12130c;
            case 0x121330u: goto label_121330;
            case 0x121348u: goto label_121348;
            case 0x12134Cu: goto label_12134c;
            case 0x121350u: goto label_121350;
            case 0x121364u: goto label_121364;
            case 0x121388u: goto label_121388;
            case 0x1213A0u: goto label_1213a0;
            case 0x1213ACu: goto label_1213ac;
            case 0x1213B4u: goto label_1213b4;
            case 0x1213D8u: goto label_1213d8;
            case 0x121400u: goto label_121400;
            case 0x12141Cu: goto label_12141c;
            case 0x121448u: goto label_121448;
            case 0x121464u: goto label_121464;
            case 0x1214B0u: goto label_1214b0;
            case 0x1214D8u: goto label_1214d8;
            case 0x1214F8u: goto label_1214f8;
            case 0x121520u: goto label_121520;
            case 0x121528u: goto label_121528;
            case 0x121550u: goto label_121550;
            case 0x121578u: goto label_121578;
            case 0x1215E8u: goto label_1215e8;
            case 0x1215F0u: goto label_1215f0;
            case 0x121620u: goto label_121620;
            case 0x12164Cu: goto label_12164c;
            case 0x121668u: goto label_121668;
            case 0x121690u: goto label_121690;
            case 0x1216C8u: goto label_1216c8;
            case 0x1216CCu: goto label_1216cc;
            case 0x1216D0u: goto label_1216d0;
            case 0x1216E0u: goto label_1216e0;
            case 0x121708u: goto label_121708;
            case 0x121720u: goto label_121720;
            case 0x121738u: goto label_121738;
            case 0x121754u: goto label_121754;
            case 0x121768u: goto label_121768;
            case 0x121780u: goto label_121780;
            case 0x12179Cu: goto label_12179c;
            case 0x1217ACu: goto label_1217ac;
            case 0x1217C0u: goto label_1217c0;
            case 0x1217DCu: goto label_1217dc;
            case 0x1217F0u: goto label_1217f0;
            case 0x121808u: goto label_121808;
            case 0x121838u: goto label_121838;
            case 0x121850u: goto label_121850;
            case 0x121880u: goto label_121880;
            case 0x121898u: goto label_121898;
            case 0x1218B4u: goto label_1218b4;
            case 0x1218C8u: goto label_1218c8;
            case 0x1218D8u: goto label_1218d8;
            case 0x1218E4u: goto label_1218e4;
            case 0x1218ECu: goto label_1218ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12191Cu;
    // 0x12191c: 0x0
    ctx->pc = 0x12191cu;
    // NOP
}
