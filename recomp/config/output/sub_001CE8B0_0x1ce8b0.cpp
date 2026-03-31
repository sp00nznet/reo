#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CE8B0
// Address: 0x1ce8b0 - 0x1cea50
void sub_001CE8B0_0x1ce8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ce8b0u;

    // 0x1ce8b0: 0x80382d
    ctx->pc = 0x1ce8b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce8b4: 0x27bdfff0
    ctx->pc = 0x1ce8b4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce8b8: 0xa0202d
    ctx->pc = 0x1ce8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce8bc: 0xffbf0000
    ctx->pc = 0x1ce8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce8c0: 0xc0739e4
    ctx->pc = 0x1CE8C0u;
    SET_GPR_U32(ctx, 31, 0x1CE8C8u);
    ctx->pc = 0x1CE8C4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CE790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE790_0x1ce790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE8C8u; }
    }
    if (ctx->pc != 0x1CE8C8u) { return; }
    ctx->pc = 0x1CE8C8u;
    // 0x1ce8c8: 0x40202d
    ctx->pc = 0x1ce8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce8cc: 0x10800029
    ctx->pc = 0x1CE8CCu;
    {
        const bool branch_taken_0x1ce8cc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE8D0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ce8cc) {
            ctx->pc = 0x1CE974u;
            goto label_1ce974;
        }
    }
    ctx->pc = 0x1CE8D4u;
    // 0x1ce8d4: 0x14e30010
    ctx->pc = 0x1CE8D4u;
    {
        const bool branch_taken_0x1ce8d4 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 3));
        if (branch_taken_0x1ce8d4) {
            ctx->pc = 0x1CE918u;
            goto label_1ce918;
        }
    }
    ctx->pc = 0x1CE8DCu;
    // 0x1ce8dc: 0x9085000f
    ctx->pc = 0x1ce8dcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x1ce8e0: 0x30a30002
    ctx->pc = 0x1ce8e0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 2));
    // 0x1ce8e4: 0x14600003
    ctx->pc = 0x1CE8E4u;
    {
        const bool branch_taken_0x1ce8e4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CE8E8u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x1ce8e4) {
            ctx->pc = 0x1CE8F4u;
            goto label_1ce8f4;
        }
    }
    ctx->pc = 0x1CE8ECu;
    // 0x1ce8ec: 0x1060000a
    ctx->pc = 0x1CE8ECu;
    {
        const bool branch_taken_0x1ce8ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce8ec) {
            ctx->pc = 0x1CE918u;
            goto label_1ce918;
        }
    }
    ctx->pc = 0x1CE8F4u;
label_1ce8f4:
    // 0x1ce8f4: 0x90860000
    ctx->pc = 0x1ce8f4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ce8f8: 0xe01827
    ctx->pc = 0x1ce8f8u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 7), GPR_U32(ctx, 0)));
    // 0x1ce8fc: 0x306500ff
    ctx->pc = 0x1ce8fcu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), 255));
    // 0x1ce900: 0x24c3ffff
    ctx->pc = 0x1ce900u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1ce904: 0xa0830000
    ctx->pc = 0x1ce904u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ce908: 0x9083000f
    ctx->pc = 0x1ce908u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x1ce90c: 0x651824
    ctx->pc = 0x1ce90cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ce910: 0x10000018
    ctx->pc = 0x1CE910u;
    {
        const bool branch_taken_0x1ce910 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE914u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1ce910) {
            ctx->pc = 0x1CE974u;
            goto label_1ce974;
        }
    }
    ctx->pc = 0x1CE918u;
label_1ce918:
    // 0x1ce918: 0x24030004
    ctx->pc = 0x1ce918u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ce91c: 0x14e3000e
    ctx->pc = 0x1CE91Cu;
    {
        const bool branch_taken_0x1ce91c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 3));
        if (branch_taken_0x1ce91c) {
            ctx->pc = 0x1CE958u;
            goto label_1ce958;
        }
    }
    ctx->pc = 0x1CE924u;
    // 0x1ce924: 0x9083000f
    ctx->pc = 0x1ce924u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x1ce928: 0x30630002
    ctx->pc = 0x1ce928u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2));
    // 0x1ce92c: 0x1060000a
    ctx->pc = 0x1CE92Cu;
    {
        const bool branch_taken_0x1ce92c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce92c) {
            ctx->pc = 0x1CE958u;
            goto label_1ce958;
        }
    }
    ctx->pc = 0x1CE934u;
    // 0x1ce934: 0x90860000
    ctx->pc = 0x1ce934u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ce938: 0xe01827
    ctx->pc = 0x1ce938u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 7), GPR_U32(ctx, 0)));
    // 0x1ce93c: 0x306500ff
    ctx->pc = 0x1ce93cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), 255));
    // 0x1ce940: 0x24c3ffff
    ctx->pc = 0x1ce940u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1ce944: 0xa0830000
    ctx->pc = 0x1ce944u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ce948: 0x9083000f
    ctx->pc = 0x1ce948u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x1ce94c: 0x651824
    ctx->pc = 0x1ce94cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ce950: 0x10000008
    ctx->pc = 0x1CE950u;
    {
        const bool branch_taken_0x1ce950 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE954u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1ce950) {
            ctx->pc = 0x1CE974u;
            goto label_1ce974;
        }
    }
    ctx->pc = 0x1CE958u;
label_1ce958:
    // 0x1ce958: 0x9082000f
    ctx->pc = 0x1ce958u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x1ce95c: 0x30420004
    ctx->pc = 0x1ce95cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x1ce960: 0x10400002
    ctx->pc = 0x1CE960u;
    {
        const bool branch_taken_0x1ce960 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE964u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ce960) {
            ctx->pc = 0x1CE96Cu;
            goto label_1ce96c;
        }
    }
    ctx->pc = 0x1CE968u;
    // 0x1ce968: 0xa0820000
    ctx->pc = 0x1ce968u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_1ce96c:
    // 0x1ce96c: 0xc0739d4
    ctx->pc = 0x1CE96Cu;
    SET_GPR_U32(ctx, 31, 0x1CE974u);
    ctx->pc = 0x1CE750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE750_0x1ce750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE974u; }
    }
    if (ctx->pc != 0x1CE974u) { return; }
    ctx->pc = 0x1CE974u;
label_1ce974:
    // 0x1ce974: 0xdfbf0000
    ctx->pc = 0x1ce974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce978: 0x3e00008
    ctx->pc = 0x1CE978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE97Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE8F4u: goto label_1ce8f4;
            case 0x1CE918u: goto label_1ce918;
            case 0x1CE958u: goto label_1ce958;
            case 0x1CE96Cu: goto label_1ce96c;
            case 0x1CE974u: goto label_1ce974;
            case 0x1CE9ACu: goto label_1ce9ac;
            case 0x1CE9CCu: goto label_1ce9cc;
            case 0x1CEA00u: goto label_1cea00;
            case 0x1CEA1Cu: goto label_1cea1c;
            case 0x1CEA20u: goto label_1cea20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CE980u;
    // 0x1ce980: 0x27bdffb0
    ctx->pc = 0x1ce980u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ce984: 0xffbf0040
    ctx->pc = 0x1ce984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ce988: 0x7fb30030
    ctx->pc = 0x1ce988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ce98c: 0x7fb20020
    ctx->pc = 0x1ce98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ce990: 0xa0982d
    ctx->pc = 0x1ce990u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce994: 0x7fb10010
    ctx->pc = 0x1ce994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ce998: 0x3c120034
    ctx->pc = 0x1ce998u;
    SET_GPR_U32(ctx, 18, ((uint32_t)52 << 16));
    // 0x1ce99c: 0x7fb00000
    ctx->pc = 0x1ce99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ce9a0: 0x26521500
    ctx->pc = 0x1ce9a0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 5376));
    // 0x1ce9a4: 0x808027
    ctx->pc = 0x1ce9a4u;
    SET_GPR_U32(ctx, 16, NOR32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
    // 0x1ce9a8: 0x882d
    ctx->pc = 0x1ce9a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce9ac:
    // 0x1ce9ac: 0x92430000
    ctx->pc = 0x1ce9acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ce9b0: 0x1060001a
    ctx->pc = 0x1CE9B0u;
    {
        const bool branch_taken_0x1ce9b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE9B4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1ce9b0) {
            ctx->pc = 0x1CEA1Cu;
            goto label_1cea1c;
        }
    }
    ctx->pc = 0x1CE9B8u;
    // 0x1ce9b8: 0x12630004
    ctx->pc = 0x1CE9B8u;
    {
        const bool branch_taken_0x1ce9b8 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ce9b8) {
            ctx->pc = 0x1CE9CCu;
            goto label_1ce9cc;
        }
    }
    ctx->pc = 0x1CE9C0u;
    // 0x1ce9c0: 0x92430010
    ctx->pc = 0x1ce9c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1ce9c4: 0x14730015
    ctx->pc = 0x1CE9C4u;
    {
        const bool branch_taken_0x1ce9c4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 19));
        if (branch_taken_0x1ce9c4) {
            ctx->pc = 0x1CEA1Cu;
            goto label_1cea1c;
        }
    }
    ctx->pc = 0x1CE9CCu;
label_1ce9cc:
    // 0x1ce9cc: 0x9243000f
    ctx->pc = 0x1ce9ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
    // 0x1ce9d0: 0x320400ff
    ctx->pc = 0x1ce9d0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 16), 255));
    // 0x1ce9d4: 0x641824
    ctx->pc = 0x1ce9d4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ce9d8: 0xa243000f
    ctx->pc = 0x1ce9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ce9dc: 0x9243000f
    ctx->pc = 0x1ce9dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
    // 0x1ce9e0: 0x14600007
    ctx->pc = 0x1CE9E0u;
    {
        const bool branch_taken_0x1ce9e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ce9e0) {
            ctx->pc = 0x1CEA00u;
            goto label_1cea00;
        }
    }
    ctx->pc = 0x1CE9E8u;
    // 0x1ce9e8: 0x24020001
    ctx->pc = 0x1ce9e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce9ec: 0x240202d
    ctx->pc = 0x1ce9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce9f0: 0xc0739d4
    ctx->pc = 0x1CE9F0u;
    SET_GPR_U32(ctx, 31, 0x1CE9F8u);
    ctx->pc = 0x1CE9F4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1CE750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE750_0x1ce750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE9F8u; }
    }
    if (ctx->pc != 0x1CE9F8u) { return; }
    ctx->pc = 0x1CE9F8u;
    // 0x1ce9f8: 0x10000009
    ctx->pc = 0x1CE9F8u;
    {
        const bool branch_taken_0x1ce9f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE9FCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1ce9f8) {
            ctx->pc = 0x1CEA20u;
            goto label_1cea20;
        }
    }
    ctx->pc = 0x1CEA00u;
label_1cea00:
    // 0x1cea00: 0x92430000
    ctx->pc = 0x1cea00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cea04: 0x2463ffff
    ctx->pc = 0x1cea04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cea08: 0xa2430000
    ctx->pc = 0x1cea08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cea0c: 0x92430000
    ctx->pc = 0x1cea0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cea10: 0x14600002
    ctx->pc = 0x1CEA10u;
    {
        const bool branch_taken_0x1cea10 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CEA14u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1cea10) {
            ctx->pc = 0x1CEA1Cu;
            goto label_1cea1c;
        }
    }
    ctx->pc = 0x1CEA18u;
    // 0x1cea18: 0xa2430000
    ctx->pc = 0x1cea18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
label_1cea1c:
    // 0x1cea1c: 0x26310001
    ctx->pc = 0x1cea1cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1cea20:
    // 0x1cea20: 0x2a230010
    ctx->pc = 0x1cea20u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 16));
    // 0x1cea24: 0x1460ffe1
    ctx->pc = 0x1CEA24u;
    {
        const bool branch_taken_0x1cea24 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CEA28u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 20));
        if (branch_taken_0x1cea24) {
            ctx->pc = 0x1CE9ACu;
            goto label_1ce9ac;
        }
    }
    ctx->pc = 0x1CEA2Cu;
    // 0x1cea2c: 0xdfbf0040
    ctx->pc = 0x1cea2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cea30: 0x7bb30030
    ctx->pc = 0x1cea30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cea34: 0x7bb20020
    ctx->pc = 0x1cea34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cea38: 0x7bb10010
    ctx->pc = 0x1cea38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cea3c: 0x7bb00000
    ctx->pc = 0x1cea3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cea40: 0x3e00008
    ctx->pc = 0x1CEA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEA44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE8F4u: goto label_1ce8f4;
            case 0x1CE918u: goto label_1ce918;
            case 0x1CE958u: goto label_1ce958;
            case 0x1CE96Cu: goto label_1ce96c;
            case 0x1CE974u: goto label_1ce974;
            case 0x1CE9ACu: goto label_1ce9ac;
            case 0x1CE9CCu: goto label_1ce9cc;
            case 0x1CEA00u: goto label_1cea00;
            case 0x1CEA1Cu: goto label_1cea1c;
            case 0x1CEA20u: goto label_1cea20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CEA48u;
    // 0x1cea48: 0x0
    ctx->pc = 0x1cea48u;
    // NOP
    // 0x1cea4c: 0x0
    ctx->pc = 0x1cea4cu;
    // NOP
}
