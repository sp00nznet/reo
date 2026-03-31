#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1204e0
// Address: 0x1204e0 - 0x120908
void entry_1204e0_0x120908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1204e0u;

    // 0x1204e0: 0x27bdffd0
    ctx->pc = 0x1204e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1204e4: 0x460062c6
    ctx->pc = 0x1204e4u;
    ctx->f[11] = FPU_MOV_S(ctx->f[12]);
    // 0x1204e8: 0xffbf0010
    ctx->pc = 0x1204e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1204ec: 0xe7b60028
    ctx->pc = 0x1204ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1204f0: 0xe7b50020
    ctx->pc = 0x1204f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1204f4: 0x44045800
    ctx->pc = 0x1204f4u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[11]);
    // 0x1204f8: 0x3c027fff
    ctx->pc = 0x1204f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x1204fc: 0x3c053f80
    ctx->pc = 0x1204fcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)16256 << 16));
    // 0x120500: 0x3442ffff
    ctx->pc = 0x120500u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x120504: 0x821824
    ctx->pc = 0x120504u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x120508: 0x14650009
    ctx->pc = 0x120508u;
    {
        const bool branch_taken_0x120508 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        ctx->pc = 0x12050Cu;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        if (branch_taken_0x120508) {
            ctx->pc = 0x120530u;
            goto label_120530;
        }
    }
    ctx->pc = 0x120510u;
    // 0x120510: 0x44800000
    ctx->pc = 0x120510u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x120514: 0x1c8000f6
    ctx->pc = 0x120514u;
    {
        const bool branch_taken_0x120514 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x120518u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x120514) {
            ctx->pc = 0x1208F0u;
            goto label_1208f0;
        }
    }
    ctx->pc = 0x12051Cu;
    // 0x12051c: 0x3c014049
    ctx->pc = 0x12051cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x120520: 0x34210fda
    ctx->pc = 0x120520u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4058));
    // 0x120524: 0x44810000
    ctx->pc = 0x120524u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x120528: 0x100000f2
    ctx->pc = 0x120528u;
    {
        const bool branch_taken_0x120528 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12052Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        if (branch_taken_0x120528) {
            ctx->pc = 0x1208F4u;
            goto label_1208f4;
        }
    }
    ctx->pc = 0x120530u;
label_120530:
    // 0x120530: 0xa3102a
    ctx->pc = 0x120530u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x120534: 0x10400008
    ctx->pc = 0x120534u;
    {
        const bool branch_taken_0x120534 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x120538u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16127 << 16));
        if (branch_taken_0x120534) {
            ctx->pc = 0x120558u;
            goto label_120558;
        }
    }
    ctx->pc = 0x12053Cu;
    // 0x12053c: 0x460b5801
    ctx->pc = 0x12053cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[11]);
    // 0x120540: 0x0
    ctx->pc = 0x120540u;
    // NOP
    // 0x120544: 0x0
    ctx->pc = 0x120544u;
    // NOP
    // 0x120548: 0x46000003
    ctx->pc = 0x120548u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
    // 0x12054c: 0x100000e8
    ctx->pc = 0x12054Cu;
    {
        const bool branch_taken_0x12054c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x120550u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x12054c) {
            ctx->pc = 0x1208F0u;
            goto label_1208f0;
        }
    }
    ctx->pc = 0x120554u;
    // 0x120554: 0x0
    ctx->pc = 0x120554u;
    // NOP
label_120558:
    // 0x120558: 0x3442ffff
    ctx->pc = 0x120558u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x12055c: 0x43102a
    ctx->pc = 0x12055cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x120560: 0x14400049
    ctx->pc = 0x120560u;
    {
        const bool branch_taken_0x120560 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x120564u;
        SET_GPR_U32(ctx, 2, ((uint32_t)8960 << 16));
        if (branch_taken_0x120560) {
            ctx->pc = 0x120688u;
            goto label_120688;
        }
    }
    ctx->pc = 0x120568u;
    // 0x120568: 0x3c013fc9
    ctx->pc = 0x120568u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x12056c: 0x34210fda
    ctx->pc = 0x12056cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4058));
    // 0x120570: 0x44810000
    ctx->pc = 0x120570u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x120574: 0x43102a
    ctx->pc = 0x120574u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x120578: 0x104000dd
    ctx->pc = 0x120578u;
    {
        const bool branch_taken_0x120578 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12057Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x120578) {
            ctx->pc = 0x1208F0u;
            goto label_1208f0;
        }
    }
    ctx->pc = 0x120580u;
    // 0x120580: 0x460b5d42
    ctx->pc = 0x120580u;
    ctx->f[21] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x120584: 0x3c013811
    ctx->pc = 0x120584u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14353 << 16));
    // 0x120588: 0x3421ef08
    ctx->pc = 0x120588u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 61192));
    // 0x12058c: 0x44810800
    ctx->pc = 0x12058cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x120590: 0x3c013a4f
    ctx->pc = 0x120590u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14927 << 16));
    // 0x120594: 0x34217f04
    ctx->pc = 0x120594u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32516));
    // 0x120598: 0x44811800
    ctx->pc = 0x120598u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x12059c: 0x3c01bd24
    ctx->pc = 0x12059cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48420 << 16));
    // 0x1205a0: 0x34211146
    ctx->pc = 0x1205a0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4422));
    // 0x1205a4: 0x44813800
    ctx->pc = 0x1205a4u;
    *(uint32_t*)&ctx->f[7] = GPR_U32(ctx, 1);
    // 0x1205a8: 0x3c013d9d
    ctx->pc = 0x1205a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15773 << 16));
    // 0x1205ac: 0x3421c62d
    ctx->pc = 0x1205acu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 50733));
    // 0x1205b0: 0x44811000
    ctx->pc = 0x1205b0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x1205b4: 0x4601a842
    ctx->pc = 0x1205b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1205b8: 0x3c01bf30
    ctx->pc = 0x1205b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48944 << 16));
    // 0x1205bc: 0x34213360
    ctx->pc = 0x1205bcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 13152));
    // 0x1205c0: 0x44810000
    ctx->pc = 0x1205c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x1205c4: 0x4602a882
    ctx->pc = 0x1205c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1205c8: 0x3c013e4e
    ctx->pc = 0x1205c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15950 << 16));
    // 0x1205cc: 0x34210aa8
    ctx->pc = 0x1205ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2728));
    // 0x1205d0: 0x44813000
    ctx->pc = 0x1205d0u;
    *(uint32_t*)&ctx->f[6] = GPR_U32(ctx, 1);
    // 0x1205d4: 0x3c014001
    ctx->pc = 0x1205d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16385 << 16));
    // 0x1205d8: 0x3421572c
    ctx->pc = 0x1205d8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 22316));
    // 0x1205dc: 0x44812000
    ctx->pc = 0x1205dcu;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 1);
    // 0x1205e0: 0x3c01bea6
    ctx->pc = 0x1205e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48806 << 16));
    // 0x1205e4: 0x3421b08f
    ctx->pc = 0x1205e4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 45199));
    // 0x1205e8: 0x44814800
    ctx->pc = 0x1205e8u;
    *(uint32_t*)&ctx->f[9] = GPR_U32(ctx, 1);
    // 0x1205ec: 0x46030840
    ctx->pc = 0x1205ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1205f0: 0x3c013f80
    ctx->pc = 0x1205f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x1205f4: 0x44811800
    ctx->pc = 0x1205f4u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x1205f8: 0x46001080
    ctx->pc = 0x1205f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1205fc: 0x3c0133a2
    ctx->pc = 0x1205fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)13218 << 16));
    // 0x120600: 0x34212168
    ctx->pc = 0x120600u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 8552));
    // 0x120604: 0x44810000
    ctx->pc = 0x120604u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x120608: 0x3c01c019
    ctx->pc = 0x120608u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49177 << 16));
    // 0x12060c: 0x3421d138
    ctx->pc = 0x12060cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 53560));
    // 0x120610: 0x44812800
    ctx->pc = 0x120610u;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 1);
    // 0x120614: 0x3c013e2a
    ctx->pc = 0x120614u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15914 << 16));
    // 0x120618: 0x3421aaaa
    ctx->pc = 0x120618u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 43690));
    // 0x12061c: 0x44814000
    ctx->pc = 0x12061cu;
    *(uint32_t*)&ctx->f[8] = GPR_U32(ctx, 1);
    // 0x120620: 0x4601a842
    ctx->pc = 0x120620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x120624: 0x3c013fc9
    ctx->pc = 0x120624u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x120628: 0x34210fda
    ctx->pc = 0x120628u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4058));
    // 0x12062c: 0x44815000
    ctx->pc = 0x12062cu;
    *(uint32_t*)&ctx->f[10] = GPR_U32(ctx, 1);
    // 0x120630: 0x4602a882
    ctx->pc = 0x120630u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x120634: 0x46070840
    ctx->pc = 0x120634u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x120638: 0x46041080
    ctx->pc = 0x120638u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x12063c: 0x4601a842
    ctx->pc = 0x12063cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x120640: 0x4602a882
    ctx->pc = 0x120640u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x120644: 0x46060840
    ctx->pc = 0x120644u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x120648: 0x46051080
    ctx->pc = 0x120648u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x12064c: 0x4601a842
    ctx->pc = 0x12064cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x120650: 0x4602a882
    ctx->pc = 0x120650u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x120654: 0x46090840
    ctx->pc = 0x120654u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x120658: 0x46031580
    ctx->pc = 0x120658u;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x12065c: 0x4601a842
    ctx->pc = 0x12065cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x120660: 0x46080840
    ctx->pc = 0x120660u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x120664: 0x4601ad02
    ctx->pc = 0x120664u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x120668: 0x0
    ctx->pc = 0x120668u;
    // NOP
    // 0x12066c: 0x0
    ctx->pc = 0x12066cu;
    // NOP
    // 0x120670: 0x4616a303
    ctx->pc = 0x120670u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[22];
    // 0x120674: 0x460c5842
    ctx->pc = 0x120674u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    // 0x120678: 0x46010001
    ctx->pc = 0x120678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x12067c: 0x46005801
    ctx->pc = 0x12067cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
    // 0x120680: 0x1000009b
    ctx->pc = 0x120680u;
    {
        const bool branch_taken_0x120680 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x120684u;
        ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
        if (branch_taken_0x120680) {
            ctx->pc = 0x1208F0u;
            goto label_1208f0;
        }
    }
    ctx->pc = 0x120688u;
label_120688:
    // 0x120688: 0x481004b
    ctx->pc = 0x120688u;
    {
        const bool branch_taken_0x120688 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x120688) {
            ctx->pc = 0x1207B8u;
            goto label_1207b8;
        }
    }
    ctx->pc = 0x120690u;
    // 0x120690: 0x3c013f80
    ctx->pc = 0x120690u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x120694: 0x44815000
    ctx->pc = 0x120694u;
    *(uint32_t*)&ctx->f[10] = GPR_U32(ctx, 1);
    // 0x120698: 0x3c013f00
    ctx->pc = 0x120698u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x12069c: 0x44811800
    ctx->pc = 0x12069cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x1206a0: 0x460a5880
    ctx->pc = 0x1206a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x1206a4: 0x3c013811
    ctx->pc = 0x1206a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14353 << 16));
    // 0x1206a8: 0x3421ef08
    ctx->pc = 0x1206a8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 61192));
    // 0x1206ac: 0x44810000
    ctx->pc = 0x1206acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x1206b0: 0x3c013a4f
    ctx->pc = 0x1206b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14927 << 16));
    // 0x1206b4: 0x34217f04
    ctx->pc = 0x1206b4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32516));
    // 0x1206b8: 0x44812800
    ctx->pc = 0x1206b8u;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 1);
    // 0x1206bc: 0x3c01bd24
    ctx->pc = 0x1206bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48420 << 16));
    // 0x1206c0: 0x34211146
    ctx->pc = 0x1206c0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4422));
    // 0x1206c4: 0x44813000
    ctx->pc = 0x1206c4u;
    *(uint32_t*)&ctx->f[6] = GPR_U32(ctx, 1);
    // 0x1206c8: 0x3c013d9d
    ctx->pc = 0x1206c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15773 << 16));
    // 0x1206cc: 0x3421c62d
    ctx->pc = 0x1206ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 50733));
    // 0x1206d0: 0x44810800
    ctx->pc = 0x1206d0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x1206d4: 0x46031542
    ctx->pc = 0x1206d4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1206d8: 0x3c014001
    ctx->pc = 0x1206d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16385 << 16));
    // 0x1206dc: 0x3421572c
    ctx->pc = 0x1206dcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 22316));
    // 0x1206e0: 0x44811000
    ctx->pc = 0x1206e0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x1206e4: 0x3c01bf30
    ctx->pc = 0x1206e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48944 << 16));
    // 0x1206e8: 0x34213360
    ctx->pc = 0x1206e8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 13152));
    // 0x1206ec: 0x44812000
    ctx->pc = 0x1206ecu;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 1);
    // 0x1206f0: 0x3c013e4e
    ctx->pc = 0x1206f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15950 << 16));
    // 0x1206f4: 0x34210aa8
    ctx->pc = 0x1206f4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2728));
    // 0x1206f8: 0x44813800
    ctx->pc = 0x1206f8u;
    *(uint32_t*)&ctx->f[7] = GPR_U32(ctx, 1);
    // 0x1206fc: 0x3c01bea6
    ctx->pc = 0x1206fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48806 << 16));
    // 0x120700: 0x3421b08f
    ctx->pc = 0x120700u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 45199));
    // 0x120704: 0x44814800
    ctx->pc = 0x120704u;
    *(uint32_t*)&ctx->f[9] = GPR_U32(ctx, 1);
    // 0x120708: 0x4600a802
    ctx->pc = 0x120708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x12070c: 0x3c01c019
    ctx->pc = 0x12070cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49177 << 16));
    // 0x120710: 0x3421d138
    ctx->pc = 0x120710u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 53560));
    // 0x120714: 0x44811800
    ctx->pc = 0x120714u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x120718: 0x4601a842
    ctx->pc = 0x120718u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x12071c: 0x3c013e2a
    ctx->pc = 0x12071cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15914 << 16));
    // 0x120720: 0x3421aaaa
    ctx->pc = 0x120720u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 43690));
    // 0x120724: 0x44814000
    ctx->pc = 0x120724u;
    *(uint32_t*)&ctx->f[8] = GPR_U32(ctx, 1);
    // 0x120728: 0x4600ab06
    ctx->pc = 0x120728u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x12072c: 0x46050000
    ctx->pc = 0x12072cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x120730: 0x46040840
    ctx->pc = 0x120730u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x120734: 0x4600a802
    ctx->pc = 0x120734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x120738: 0x4601a842
    ctx->pc = 0x120738u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x12073c: 0x46060000
    ctx->pc = 0x12073cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x120740: 0x46020840
    ctx->pc = 0x120740u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x120744: 0x4600a802
    ctx->pc = 0x120744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x120748: 0x4601a842
    ctx->pc = 0x120748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x12074c: 0x46070000
    ctx->pc = 0x12074cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x120750: 0x46030840
    ctx->pc = 0x120750u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x120754: 0x4600a802
    ctx->pc = 0x120754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x120758: 0x4601a842
    ctx->pc = 0x120758u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x12075c: 0x46090000
    ctx->pc = 0x12075cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x120760: 0x460a0d80
    ctx->pc = 0x120760u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x120764: 0x4600a802
    ctx->pc = 0x120764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x120768: 0x46080000
    ctx->pc = 0x120768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x12076c: 0xc0483a6
    ctx->pc = 0x12076Cu;
    SET_GPR_U32(ctx, 31, 0x120774u);
    ctx->pc = 0x120770u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->pc = 0x120E98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00120E98_0x120e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120774u; }
    }
    if (ctx->pc != 0x120774u) { return; }
    ctx->pc = 0x120774u;
    // 0x120774: 0x46000346
    ctx->pc = 0x120774u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x120778: 0x3c0133a2
    ctx->pc = 0x120778u;
    SET_GPR_U32(ctx, 1, ((uint32_t)13218 << 16));
    // 0x12077c: 0x34212168
    ctx->pc = 0x12077cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 8552));
    // 0x120780: 0x44810800
    ctx->pc = 0x120780u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x120784: 0x3c014049
    ctx->pc = 0x120784u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x120788: 0x34210fda
    ctx->pc = 0x120788u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4058));
    // 0x12078c: 0x44811000
    ctx->pc = 0x12078cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x120790: 0x0
    ctx->pc = 0x120790u;
    // NOP
    // 0x120794: 0x0
    ctx->pc = 0x120794u;
    // NOP
    // 0x120798: 0x4616a303
    ctx->pc = 0x120798u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[22];
    // 0x12079c: 0x460d6002
    ctx->pc = 0x12079cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x1207a0: 0x46010001
    ctx->pc = 0x1207a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1207a4: 0x46006800
    ctx->pc = 0x1207a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x1207a8: 0x46000000
    ctx->pc = 0x1207a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1207ac: 0x1000004f
    ctx->pc = 0x1207ACu;
    {
        const bool branch_taken_0x1207ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1207B0u;
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x1207ac) {
            ctx->pc = 0x1208ECu;
            goto label_1208ec;
        }
    }
    ctx->pc = 0x1207B4u;
    // 0x1207b4: 0x0
    ctx->pc = 0x1207b4u;
    // NOP
label_1207b8:
    // 0x1207b8: 0x3c013f80
    ctx->pc = 0x1207b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x1207bc: 0x4481a000
    ctx->pc = 0x1207bcu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x1207c0: 0x3c013f00
    ctx->pc = 0x1207c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x1207c4: 0x44810800
    ctx->pc = 0x1207c4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x1207c8: 0x460ba001
    ctx->pc = 0x1207c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[11]);
    // 0x1207cc: 0x46010542
    ctx->pc = 0x1207ccu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1207d0: 0xc0483a6
    ctx->pc = 0x1207D0u;
    SET_GPR_U32(ctx, 31, 0x1207D8u);
    ctx->pc = 0x1207D4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x120E98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00120E98_0x120e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1207D8u; }
    }
    if (ctx->pc != 0x1207D8u) { return; }
    ctx->pc = 0x1207D8u;
    // 0x1207d8: 0x460002c6
    ctx->pc = 0x1207d8u;
    ctx->f[11] = FPU_MOV_S(ctx->f[0]);
    // 0x1207dc: 0x46005b46
    ctx->pc = 0x1207dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[11]);
    // 0x1207e0: 0xe7a00000
    ctx->pc = 0x1207e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1207e4: 0x2402f000
    ctx->pc = 0x1207e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1207e8: 0x8fa30000
    ctx->pc = 0x1207e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1207ec: 0x621824
    ctx->pc = 0x1207ecu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1207f0: 0x44835800
    ctx->pc = 0x1207f0u;
    *(uint32_t*)&ctx->f[11] = GPR_U32(ctx, 3);
    // 0x1207f4: 0x460b58c2
    ctx->pc = 0x1207f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x1207f8: 0x3c013811
    ctx->pc = 0x1207f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14353 << 16));
    // 0x1207fc: 0x3421ef08
    ctx->pc = 0x1207fcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 61192));
    // 0x120800: 0x44810000
    ctx->pc = 0x120800u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x120804: 0x3c013a4f
    ctx->pc = 0x120804u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14927 << 16));
    // 0x120808: 0x34217f04
    ctx->pc = 0x120808u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32516));
    // 0x12080c: 0x44812800
    ctx->pc = 0x12080cu;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 1);
    // 0x120810: 0x3c01bd24
    ctx->pc = 0x120810u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48420 << 16));
    // 0x120814: 0x34211146
    ctx->pc = 0x120814u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4422));
    // 0x120818: 0x44814800
    ctx->pc = 0x120818u;
    *(uint32_t*)&ctx->f[9] = GPR_U32(ctx, 1);
    // 0x12081c: 0x3c013d9d
    ctx->pc = 0x12081cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15773 << 16));
    // 0x120820: 0x3421c62d
    ctx->pc = 0x120820u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 50733));
    // 0x120824: 0x44810800
    ctx->pc = 0x120824u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x120828: 0x4600a802
    ctx->pc = 0x120828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x12082c: 0x3c01bf30
    ctx->pc = 0x12082cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48944 << 16));
    // 0x120830: 0x34213360
    ctx->pc = 0x120830u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 13152));
    // 0x120834: 0x44812000
    ctx->pc = 0x120834u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 1);
    // 0x120838: 0x4601a842
    ctx->pc = 0x120838u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x12083c: 0x3c013e4e
    ctx->pc = 0x12083cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15950 << 16));
    // 0x120840: 0x34210aa8
    ctx->pc = 0x120840u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2728));
    // 0x120844: 0x44814000
    ctx->pc = 0x120844u;
    *(uint32_t*)&ctx->f[8] = GPR_U32(ctx, 1);
    // 0x120848: 0x3c014001
    ctx->pc = 0x120848u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16385 << 16));
    // 0x12084c: 0x3421572c
    ctx->pc = 0x12084cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 22316));
    // 0x120850: 0x44813800
    ctx->pc = 0x120850u;
    *(uint32_t*)&ctx->f[7] = GPR_U32(ctx, 1);
    // 0x120854: 0x4603a8c1
    ctx->pc = 0x120854u;
    ctx->f[3] = FPU_SUB_S(ctx->f[21], ctx->f[3]);
    // 0x120858: 0x3c01bea6
    ctx->pc = 0x120858u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48806 << 16));
    // 0x12085c: 0x3421b08f
    ctx->pc = 0x12085cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 45199));
    // 0x120860: 0x44815000
    ctx->pc = 0x120860u;
    *(uint32_t*)&ctx->f[10] = GPR_U32(ctx, 1);
    // 0x120864: 0x460b6880
    ctx->pc = 0x120864u;
    ctx->f[2] = FPU_ADD_S(ctx->f[13], ctx->f[11]);
    // 0x120868: 0x46050000
    ctx->pc = 0x120868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x12086c: 0x3c013e2a
    ctx->pc = 0x12086cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15914 << 16));
    // 0x120870: 0x3421aaaa
    ctx->pc = 0x120870u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 43690));
    // 0x120874: 0x44812800
    ctx->pc = 0x120874u;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 1);
    // 0x120878: 0x46040840
    ctx->pc = 0x120878u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x12087c: 0x3c01c019
    ctx->pc = 0x12087cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49177 << 16));
    // 0x120880: 0x3421d138
    ctx->pc = 0x120880u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 53560));
    // 0x120884: 0x44813000
    ctx->pc = 0x120884u;
    *(uint32_t*)&ctx->f[6] = GPR_U32(ctx, 1);
    // 0x120888: 0x0
    ctx->pc = 0x120888u;
    // NOP
    // 0x12088c: 0x0
    ctx->pc = 0x12088cu;
    // NOP
    // 0x120890: 0x460218c3
    ctx->pc = 0x120890u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[2];
    // 0x120894: 0x4600a802
    ctx->pc = 0x120894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x120898: 0x4601a842
    ctx->pc = 0x120898u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x12089c: 0x46090000
    ctx->pc = 0x12089cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x1208a0: 0x46070840
    ctx->pc = 0x1208a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x1208a4: 0x4600a802
    ctx->pc = 0x1208a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1208a8: 0x4601a842
    ctx->pc = 0x1208a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1208ac: 0x46080000
    ctx->pc = 0x1208acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x1208b0: 0x46060840
    ctx->pc = 0x1208b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x1208b4: 0x4600a802
    ctx->pc = 0x1208b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1208b8: 0x4601a842
    ctx->pc = 0x1208b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1208bc: 0x460a0000
    ctx->pc = 0x1208bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x1208c0: 0x46140d80
    ctx->pc = 0x1208c0u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x1208c4: 0x4600a802
    ctx->pc = 0x1208c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1208c8: 0x46050000
    ctx->pc = 0x1208c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1208cc: 0x4600ad02
    ctx->pc = 0x1208ccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1208d0: 0x0
    ctx->pc = 0x1208d0u;
    // NOP
    // 0x1208d4: 0x0
    ctx->pc = 0x1208d4u;
    // NOP
    // 0x1208d8: 0x4616a303
    ctx->pc = 0x1208d8u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[22];
    // 0x1208dc: 0x460d6002
    ctx->pc = 0x1208dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x1208e0: 0x46030000
    ctx->pc = 0x1208e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1208e4: 0x46005800
    ctx->pc = 0x1208e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x1208e8: 0x46000000
    ctx->pc = 0x1208e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1208ec:
    // 0x1208ec: 0xdfbf0010
    ctx->pc = 0x1208ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1208f0:
    // 0x1208f0: 0xc7b60028
    ctx->pc = 0x1208f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1208f4:
    // 0x1208f4: 0xc7b50020
    ctx->pc = 0x1208f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1208f8: 0xc7b40018
    ctx->pc = 0x1208f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1208fc: 0x3e00008
    ctx->pc = 0x1208FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120900u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120530u: goto label_120530;
            case 0x120558u: goto label_120558;
            case 0x120688u: goto label_120688;
            case 0x1207B8u: goto label_1207b8;
            case 0x1208ECu: goto label_1208ec;
            case 0x1208F0u: goto label_1208f0;
            case 0x1208F4u: goto label_1208f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x120904u;
    // 0x120904: 0x0
    ctx->pc = 0x120904u;
    // NOP
}
