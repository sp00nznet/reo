#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010A050
// Address: 0x10a050 - 0x10a1d0
void sub_0010A050_0x10a050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10a050u;

label_10a050:
    // 0x10a050: 0x27bdfff0
    ctx->pc = 0x10a050u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_10a054:
    // 0x10a054: 0xffb00000
    ctx->pc = 0x10a054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10a058:
    // 0x10a058: 0x80802d
    ctx->pc = 0x10a058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10a05c:
    // 0x10a05c: 0xffbf0008
    ctx->pc = 0x10a05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_10a060:
    // 0x10a060: 0x8e030054
    ctx->pc = 0x10a060u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_10a064:
    // 0x10a064: 0x54600006
label_10a068:
    if (ctx->pc == 0x10A068u) {
        ctx->pc = 0x10A068u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->pc = 0x10A06Cu;
        goto label_10a06c;
    }
    ctx->pc = 0x10A064u;
    {
        const bool branch_taken_0x10a064 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x10a064) {
            ctx->pc = 0x10A068u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->pc = 0x10A080u;
            goto label_10a080;
        }
    }
    ctx->pc = 0x10A06Cu;
label_10a06c:
    // 0x10a06c: 0x3c020021
    ctx->pc = 0x10a06cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_10a070:
    // 0x10a070: 0x8c4397f0
    ctx->pc = 0x10a070u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294940656)));
label_10a074:
    // 0x10a074: 0xae030054
    ctx->pc = 0x10a074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_10a078:
    // 0x10a078: 0x8c620038
    ctx->pc = 0x10a078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_10a07c:
    // 0x10a07c: 0x0
    ctx->pc = 0x10a07cu;
    // NOP
label_10a080:
    // 0x10a080: 0x54400004
label_10a084:
    if (ctx->pc == 0x10A084u) {
        ctx->pc = 0x10A084u;
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x10A088u;
        goto label_10a088;
    }
    ctx->pc = 0x10A080u;
    {
        const bool branch_taken_0x10a080 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10a080) {
            ctx->pc = 0x10A084u;
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x10A094u;
            goto label_10a094;
        }
    }
    ctx->pc = 0x10A088u;
label_10a088:
    // 0x10a088: 0xc041544
label_10a08c:
    if (ctx->pc == 0x10A08Cu) {
        ctx->pc = 0x10A08Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A090u;
        goto label_10a090;
    }
    ctx->pc = 0x10A088u;
    SET_GPR_U32(ctx, 31, 0x10A090u);
    ctx->pc = 0x10A08Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x105510u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00105510_0x105510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A090u; }
    }
    if (ctx->pc != 0x10A090u) { return; }
    ctx->pc = 0x10A090u;
label_10a090:
    // 0x10a090: 0x9604000c
    ctx->pc = 0x10a090u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_10a094:
    // 0x10a094: 0x2402ffff
    ctx->pc = 0x10a094u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_10a098:
    // 0x10a098: 0x30830020
    ctx->pc = 0x10a098u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 32));
label_10a09c:
    // 0x10a09c: 0x14600047
label_10a0a0:
    if (ctx->pc == 0x10A0A0u) {
        ctx->pc = 0x10A0A0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x10A0A4u;
        goto label_10a0a4;
    }
    ctx->pc = 0x10A09Cu;
    {
        const bool branch_taken_0x10a09c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x10A0A0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x10a09c) {
            ctx->pc = 0x10A1BCu;
            goto label_10a1bc;
        }
    }
    ctx->pc = 0x10A0A4u;
label_10a0a4:
    // 0x10a0a4: 0x30820004
    ctx->pc = 0x10a0a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 4));
label_10a0a8:
    // 0x10a0a8: 0x54400015
label_10a0ac:
    if (ctx->pc == 0x10A0ACu) {
        ctx->pc = 0x10A0ACu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x10A0B0u;
        goto label_10a0b0;
    }
    ctx->pc = 0x10A0A8u;
    {
        const bool branch_taken_0x10a0a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10a0a8) {
            ctx->pc = 0x10A0ACu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->pc = 0x10A100u;
            goto label_10a100;
        }
    }
    ctx->pc = 0x10A0B0u;
label_10a0b0:
    // 0x10a0b0: 0x30830010
    ctx->pc = 0x10a0b0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 16));
label_10a0b4:
    // 0x10a0b4: 0x10600041
label_10a0b8:
    if (ctx->pc == 0x10A0B8u) {
        ctx->pc = 0x10A0B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x10A0BCu;
        goto label_10a0bc;
    }
    ctx->pc = 0x10A0B4u;
    {
        const bool branch_taken_0x10a0b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A0B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x10a0b4) {
            ctx->pc = 0x10A1BCu;
            goto label_10a1bc;
        }
    }
    ctx->pc = 0x10A0BCu;
label_10a0bc:
    // 0x10a0bc: 0x30820008
    ctx->pc = 0x10a0bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 8));
label_10a0c0:
    // 0x10a0c0: 0x5040000c
label_10a0c4:
    if (ctx->pc == 0x10A0C4u) {
        ctx->pc = 0x10A0C4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x10A0C8u;
        goto label_10a0c8;
    }
    ctx->pc = 0x10A0C0u;
    {
        const bool branch_taken_0x10a0c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10a0c0) {
            ctx->pc = 0x10A0C4u;
            SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), 4));
            ctx->pc = 0x10A0F4u;
            goto label_10a0f4;
        }
    }
    ctx->pc = 0x10A0C8u;
label_10a0c8:
    // 0x10a0c8: 0xc04142c
label_10a0cc:
    if (ctx->pc == 0x10A0CCu) {
        ctx->pc = 0x10A0CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A0D0u;
        goto label_10a0d0;
    }
    ctx->pc = 0x10A0C8u;
    SET_GPR_U32(ctx, 31, 0x10A0D0u);
    ctx->pc = 0x10A0CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1050B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001050B0_0x1050b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A0D0u; }
    }
    if (ctx->pc != 0x10A0D0u) { return; }
    ctx->pc = 0x10A0D0u;
label_10a0d0:
    // 0x10a0d0: 0x1440003a
label_10a0d4:
    if (ctx->pc == 0x10A0D4u) {
        ctx->pc = 0x10A0D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x10A0D8u;
        goto label_10a0d8;
    }
    ctx->pc = 0x10A0D0u;
    {
        const bool branch_taken_0x10a0d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10A0D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x10a0d0) {
            ctx->pc = 0x10A1BCu;
            goto label_10a1bc;
        }
    }
    ctx->pc = 0x10A0D8u;
label_10a0d8:
    // 0x10a0d8: 0x9602000c
    ctx->pc = 0x10a0d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_10a0dc:
    // 0x10a0dc: 0xae000008
    ctx->pc = 0x10a0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_10a0e0:
    // 0x10a0e0: 0x3042fff7
    ctx->pc = 0x10a0e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65527));
label_10a0e4:
    // 0x10a0e4: 0xae000018
    ctx->pc = 0x10a0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_10a0e8:
    // 0x10a0e8: 0xa602000c
    ctx->pc = 0x10a0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_10a0ec:
    // 0x10a0ec: 0x40202d
    ctx->pc = 0x10a0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a0f0:
    // 0x10a0f0: 0x34820004
    ctx->pc = 0x10a0f0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), 4));
label_10a0f4:
    // 0x10a0f4: 0x10000010
label_10a0f8:
    if (ctx->pc == 0x10A0F8u) {
        ctx->pc = 0x10A0F8u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x10A0FCu;
        goto label_10a0fc;
    }
    ctx->pc = 0x10A0F4u;
    {
        const bool branch_taken_0x10a0f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A0F8u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x10a0f4) {
            ctx->pc = 0x10A138u;
            goto label_10a138;
        }
    }
    ctx->pc = 0x10A0FCu;
label_10a0fc:
    // 0x10a0fc: 0x0
    ctx->pc = 0x10a0fcu;
    // NOP
label_10a100:
    // 0x10a100: 0x10a0000d
label_10a104:
    if (ctx->pc == 0x10A104u) {
        ctx->pc = 0x10A104u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x10A108u;
        goto label_10a108;
    }
    ctx->pc = 0x10A100u;
    {
        const bool branch_taken_0x10a100 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A104u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 64));
        if (branch_taken_0x10a100) {
            ctx->pc = 0x10A138u;
            goto label_10a138;
        }
    }
    ctx->pc = 0x10A108u;
label_10a108:
    // 0x10a108: 0x50a20004
label_10a10c:
    if (ctx->pc == 0x10A10Cu) {
        ctx->pc = 0x10A10Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->pc = 0x10A110u;
        goto label_10a110;
    }
    ctx->pc = 0x10A108u;
    {
        const bool branch_taken_0x10a108 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x10a108) {
            ctx->pc = 0x10A10Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->pc = 0x10A11Cu;
            goto label_10a11c;
        }
    }
    ctx->pc = 0x10A110u;
label_10a110:
    // 0x10a110: 0xc041636
label_10a114:
    if (ctx->pc == 0x10A114u) {
        ctx->pc = 0x10A114u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x10A118u;
        goto label_10a118;
    }
    ctx->pc = 0x10A110u;
    SET_GPR_U32(ctx, 31, 0x10A118u);
    ctx->pc = 0x10A114u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x1058D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001058D8_0x1058d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A118u; }
    }
    if (ctx->pc != 0x10A118u) { return; }
    ctx->pc = 0x10A118u;
label_10a118:
    // 0x10a118: 0x8e02003c
    ctx->pc = 0x10a118u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_10a11c:
    // 0x10a11c: 0xae000030
    ctx->pc = 0x10a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_10a120:
    // 0x10a120: 0x10400005
label_10a124:
    if (ctx->pc == 0x10A124u) {
        ctx->pc = 0x10A124u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x10A128u;
        goto label_10a128;
    }
    ctx->pc = 0x10A120u;
    {
        const bool branch_taken_0x10a120 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A124u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x10a120) {
            ctx->pc = 0x10A138u;
            goto label_10a138;
        }
    }
    ctx->pc = 0x10A128u;
label_10a128:
    // 0x10a128: 0x8e030038
    ctx->pc = 0x10a128u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_10a12c:
    // 0x10a12c: 0x102d
    ctx->pc = 0x10a12cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a130:
    // 0x10a130: 0x10000022
label_10a134:
    if (ctx->pc == 0x10A134u) {
        ctx->pc = 0x10A134u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x10A138u;
        goto label_10a138;
    }
    ctx->pc = 0x10A130u;
    {
        const bool branch_taken_0x10a130 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A134u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x10a130) {
            ctx->pc = 0x10A1BCu;
            goto label_10a1bc;
        }
    }
    ctx->pc = 0x10A138u;
label_10a138:
    // 0x10a138: 0x8e020010
    ctx->pc = 0x10a138u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_10a13c:
    // 0x10a13c: 0x54400004
label_10a140:
    if (ctx->pc == 0x10A140u) {
        ctx->pc = 0x10A140u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x10A144u;
        goto label_10a144;
    }
    ctx->pc = 0x10A13Cu;
    {
        const bool branch_taken_0x10a13c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10a13c) {
            ctx->pc = 0x10A140u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x10A150u;
            goto label_10a150;
        }
    }
    ctx->pc = 0x10A144u;
label_10a144:
    // 0x10a144: 0xc041ad6
label_10a148:
    if (ctx->pc == 0x10A148u) {
        ctx->pc = 0x10A148u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A14Cu;
        goto label_10a14c;
    }
    ctx->pc = 0x10A144u;
    SET_GPR_U32(ctx, 31, 0x10A14Cu);
    ctx->pc = 0x10A148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x106B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00106B58_0x106b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A14Cu; }
    }
    if (ctx->pc != 0x10A14Cu) { return; }
    ctx->pc = 0x10A14Cu;
label_10a14c:
    // 0x10a14c: 0x9602000c
    ctx->pc = 0x10a14cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_10a150:
    // 0x10a150: 0x30420003
    ctx->pc = 0x10a150u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
label_10a154:
    // 0x10a154: 0x10400004
label_10a158:
    if (ctx->pc == 0x10A158u) {
        ctx->pc = 0x10A158u;
        SET_GPR_U32(ctx, 5, ((uint32_t)17 << 16));
        ctx->pc = 0x10A15Cu;
        goto label_10a15c;
    }
    ctx->pc = 0x10A154u;
    {
        const bool branch_taken_0x10a154 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A158u;
        SET_GPR_U32(ctx, 5, ((uint32_t)17 << 16));
        if (branch_taken_0x10a154) {
            ctx->pc = 0x10A168u;
            goto label_10a168;
        }
    }
    ctx->pc = 0x10A15Cu;
label_10a15c:
    // 0x10a15c: 0x8e040054
    ctx->pc = 0x10a15cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_10a160:
    // 0x10a160: 0xc0419ce
label_10a164:
    if (ctx->pc == 0x10A164u) {
        ctx->pc = 0x10A164u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294942744));
        ctx->pc = 0x10A168u;
        goto label_10a168;
    }
    ctx->pc = 0x10A160u;
    SET_GPR_U32(ctx, 31, 0x10A168u);
    ctx->pc = 0x10A164u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294942744));
    ctx->pc = 0x106738u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00106738_0x106738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A168u; }
    }
    if (ctx->pc != 0x10A168u) { return; }
    ctx->pc = 0x10A168u;
label_10a168:
    // 0x10a168: 0x8e050010
    ctx->pc = 0x10a168u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_10a16c:
    // 0x10a16c: 0x8e04001c
    ctx->pc = 0x10a16cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10a170:
    // 0x10a170: 0x8e020020
    ctx->pc = 0x10a170u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_10a174:
    // 0x10a174: 0xae050000
    ctx->pc = 0x10a174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_10a178:
    // 0x10a178: 0x40f809
label_10a17c:
    if (ctx->pc == 0x10A17Cu) {
        ctx->pc = 0x10A17Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x10A180u;
        goto label_10a180;
    }
    ctx->pc = 0x10A178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10A180u);
        ctx->pc = 0x10A17Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A050u: goto label_10a050;
            case 0x10A054u: goto label_10a054;
            case 0x10A058u: goto label_10a058;
            case 0x10A05Cu: goto label_10a05c;
            case 0x10A060u: goto label_10a060;
            case 0x10A064u: goto label_10a064;
            case 0x10A068u: goto label_10a068;
            case 0x10A06Cu: goto label_10a06c;
            case 0x10A070u: goto label_10a070;
            case 0x10A074u: goto label_10a074;
            case 0x10A078u: goto label_10a078;
            case 0x10A07Cu: goto label_10a07c;
            case 0x10A080u: goto label_10a080;
            case 0x10A084u: goto label_10a084;
            case 0x10A088u: goto label_10a088;
            case 0x10A08Cu: goto label_10a08c;
            case 0x10A090u: goto label_10a090;
            case 0x10A094u: goto label_10a094;
            case 0x10A098u: goto label_10a098;
            case 0x10A09Cu: goto label_10a09c;
            case 0x10A0A0u: goto label_10a0a0;
            case 0x10A0A4u: goto label_10a0a4;
            case 0x10A0A8u: goto label_10a0a8;
            case 0x10A0ACu: goto label_10a0ac;
            case 0x10A0B0u: goto label_10a0b0;
            case 0x10A0B4u: goto label_10a0b4;
            case 0x10A0B8u: goto label_10a0b8;
            case 0x10A0BCu: goto label_10a0bc;
            case 0x10A0C0u: goto label_10a0c0;
            case 0x10A0C4u: goto label_10a0c4;
            case 0x10A0C8u: goto label_10a0c8;
            case 0x10A0CCu: goto label_10a0cc;
            case 0x10A0D0u: goto label_10a0d0;
            case 0x10A0D4u: goto label_10a0d4;
            case 0x10A0D8u: goto label_10a0d8;
            case 0x10A0DCu: goto label_10a0dc;
            case 0x10A0E0u: goto label_10a0e0;
            case 0x10A0E4u: goto label_10a0e4;
            case 0x10A0E8u: goto label_10a0e8;
            case 0x10A0ECu: goto label_10a0ec;
            case 0x10A0F0u: goto label_10a0f0;
            case 0x10A0F4u: goto label_10a0f4;
            case 0x10A0F8u: goto label_10a0f8;
            case 0x10A0FCu: goto label_10a0fc;
            case 0x10A100u: goto label_10a100;
            case 0x10A104u: goto label_10a104;
            case 0x10A108u: goto label_10a108;
            case 0x10A10Cu: goto label_10a10c;
            case 0x10A110u: goto label_10a110;
            case 0x10A114u: goto label_10a114;
            case 0x10A118u: goto label_10a118;
            case 0x10A11Cu: goto label_10a11c;
            case 0x10A120u: goto label_10a120;
            case 0x10A124u: goto label_10a124;
            case 0x10A128u: goto label_10a128;
            case 0x10A12Cu: goto label_10a12c;
            case 0x10A130u: goto label_10a130;
            case 0x10A134u: goto label_10a134;
            case 0x10A138u: goto label_10a138;
            case 0x10A13Cu: goto label_10a13c;
            case 0x10A140u: goto label_10a140;
            case 0x10A144u: goto label_10a144;
            case 0x10A148u: goto label_10a148;
            case 0x10A14Cu: goto label_10a14c;
            case 0x10A150u: goto label_10a150;
            case 0x10A154u: goto label_10a154;
            case 0x10A158u: goto label_10a158;
            case 0x10A15Cu: goto label_10a15c;
            case 0x10A160u: goto label_10a160;
            case 0x10A164u: goto label_10a164;
            case 0x10A168u: goto label_10a168;
            case 0x10A16Cu: goto label_10a16c;
            case 0x10A170u: goto label_10a170;
            case 0x10A174u: goto label_10a174;
            case 0x10A178u: goto label_10a178;
            case 0x10A17Cu: goto label_10a17c;
            case 0x10A180u: goto label_10a180;
            case 0x10A184u: goto label_10a184;
            case 0x10A188u: goto label_10a188;
            case 0x10A18Cu: goto label_10a18c;
            case 0x10A190u: goto label_10a190;
            case 0x10A194u: goto label_10a194;
            case 0x10A198u: goto label_10a198;
            case 0x10A19Cu: goto label_10a19c;
            case 0x10A1A0u: goto label_10a1a0;
            case 0x10A1A4u: goto label_10a1a4;
            case 0x10A1A8u: goto label_10a1a8;
            case 0x10A1ACu: goto label_10a1ac;
            case 0x10A1B0u: goto label_10a1b0;
            case 0x10A1B4u: goto label_10a1b4;
            case 0x10A1B8u: goto label_10a1b8;
            case 0x10A1BCu: goto label_10a1bc;
            case 0x10A1C0u: goto label_10a1c0;
            case 0x10A1C4u: goto label_10a1c4;
            case 0x10A1C8u: goto label_10a1c8;
            case 0x10A1CCu: goto label_10a1cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10A180u; }
            if (ctx->pc != 0x10A180u) { return; }
        }
    }
    ctx->pc = 0x10A180u;
label_10a180:
    // 0x10a180: 0x9603000c
    ctx->pc = 0x10a180u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_10a184:
    // 0x10a184: 0x40202d
    ctx->pc = 0x10a184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a188:
    // 0x10a188: 0x102d
    ctx->pc = 0x10a188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a18c:
    // 0x10a18c: 0x3063dfff
    ctx->pc = 0x10a18cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 57343));
label_10a190:
    // 0x10a190: 0xae040004
    ctx->pc = 0x10a190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_10a194:
    // 0x10a194: 0x1c800009
label_10a198:
    if (ctx->pc == 0x10A198u) {
        ctx->pc = 0x10A198u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x10A19Cu;
        goto label_10a19c;
    }
    ctx->pc = 0x10A194u;
    {
        const bool branch_taken_0x10a194 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x10A198u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x10a194) {
            ctx->pc = 0x10A1BCu;
            goto label_10a1bc;
        }
    }
    ctx->pc = 0x10A19Cu;
label_10a19c:
    // 0x10a19c: 0x54800004
label_10a1a0:
    if (ctx->pc == 0x10A1A0u) {
        ctx->pc = 0x10A1A0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 64));
        ctx->pc = 0x10A1A4u;
        goto label_10a1a4;
    }
    ctx->pc = 0x10A19Cu;
    {
        const bool branch_taken_0x10a19c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x10a19c) {
            ctx->pc = 0x10A1A0u;
            SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 64));
            ctx->pc = 0x10A1B0u;
            goto label_10a1b0;
        }
    }
    ctx->pc = 0x10A1A4u;
label_10a1a4:
    // 0x10a1a4: 0x10000003
label_10a1a8:
    if (ctx->pc == 0x10A1A8u) {
        ctx->pc = 0x10A1A8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 32));
        ctx->pc = 0x10A1ACu;
        goto label_10a1ac;
    }
    ctx->pc = 0x10A1A4u;
    {
        const bool branch_taken_0x10a1a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A1A8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 32));
        if (branch_taken_0x10a1a4) {
            ctx->pc = 0x10A1B4u;
            goto label_10a1b4;
        }
    }
    ctx->pc = 0x10A1ACu;
label_10a1ac:
    // 0x10a1ac: 0x0
    ctx->pc = 0x10a1acu;
    // NOP
label_10a1b0:
    // 0x10a1b0: 0xae000004
    ctx->pc = 0x10a1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_10a1b4:
    // 0x10a1b4: 0xa602000c
    ctx->pc = 0x10a1b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_10a1b8:
    // 0x10a1b8: 0x2402ffff
    ctx->pc = 0x10a1b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_10a1bc:
    // 0x10a1bc: 0xdfb00000
    ctx->pc = 0x10a1bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10a1c0:
    // 0x10a1c0: 0xdfbf0008
    ctx->pc = 0x10a1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_10a1c4:
    // 0x10a1c4: 0x3e00008
label_10a1c8:
    if (ctx->pc == 0x10A1C8u) {
        ctx->pc = 0x10A1C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x10A1CCu;
        goto label_10a1cc;
    }
    ctx->pc = 0x10A1C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A1C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A050u: goto label_10a050;
            case 0x10A054u: goto label_10a054;
            case 0x10A058u: goto label_10a058;
            case 0x10A05Cu: goto label_10a05c;
            case 0x10A060u: goto label_10a060;
            case 0x10A064u: goto label_10a064;
            case 0x10A068u: goto label_10a068;
            case 0x10A06Cu: goto label_10a06c;
            case 0x10A070u: goto label_10a070;
            case 0x10A074u: goto label_10a074;
            case 0x10A078u: goto label_10a078;
            case 0x10A07Cu: goto label_10a07c;
            case 0x10A080u: goto label_10a080;
            case 0x10A084u: goto label_10a084;
            case 0x10A088u: goto label_10a088;
            case 0x10A08Cu: goto label_10a08c;
            case 0x10A090u: goto label_10a090;
            case 0x10A094u: goto label_10a094;
            case 0x10A098u: goto label_10a098;
            case 0x10A09Cu: goto label_10a09c;
            case 0x10A0A0u: goto label_10a0a0;
            case 0x10A0A4u: goto label_10a0a4;
            case 0x10A0A8u: goto label_10a0a8;
            case 0x10A0ACu: goto label_10a0ac;
            case 0x10A0B0u: goto label_10a0b0;
            case 0x10A0B4u: goto label_10a0b4;
            case 0x10A0B8u: goto label_10a0b8;
            case 0x10A0BCu: goto label_10a0bc;
            case 0x10A0C0u: goto label_10a0c0;
            case 0x10A0C4u: goto label_10a0c4;
            case 0x10A0C8u: goto label_10a0c8;
            case 0x10A0CCu: goto label_10a0cc;
            case 0x10A0D0u: goto label_10a0d0;
            case 0x10A0D4u: goto label_10a0d4;
            case 0x10A0D8u: goto label_10a0d8;
            case 0x10A0DCu: goto label_10a0dc;
            case 0x10A0E0u: goto label_10a0e0;
            case 0x10A0E4u: goto label_10a0e4;
            case 0x10A0E8u: goto label_10a0e8;
            case 0x10A0ECu: goto label_10a0ec;
            case 0x10A0F0u: goto label_10a0f0;
            case 0x10A0F4u: goto label_10a0f4;
            case 0x10A0F8u: goto label_10a0f8;
            case 0x10A0FCu: goto label_10a0fc;
            case 0x10A100u: goto label_10a100;
            case 0x10A104u: goto label_10a104;
            case 0x10A108u: goto label_10a108;
            case 0x10A10Cu: goto label_10a10c;
            case 0x10A110u: goto label_10a110;
            case 0x10A114u: goto label_10a114;
            case 0x10A118u: goto label_10a118;
            case 0x10A11Cu: goto label_10a11c;
            case 0x10A120u: goto label_10a120;
            case 0x10A124u: goto label_10a124;
            case 0x10A128u: goto label_10a128;
            case 0x10A12Cu: goto label_10a12c;
            case 0x10A130u: goto label_10a130;
            case 0x10A134u: goto label_10a134;
            case 0x10A138u: goto label_10a138;
            case 0x10A13Cu: goto label_10a13c;
            case 0x10A140u: goto label_10a140;
            case 0x10A144u: goto label_10a144;
            case 0x10A148u: goto label_10a148;
            case 0x10A14Cu: goto label_10a14c;
            case 0x10A150u: goto label_10a150;
            case 0x10A154u: goto label_10a154;
            case 0x10A158u: goto label_10a158;
            case 0x10A15Cu: goto label_10a15c;
            case 0x10A160u: goto label_10a160;
            case 0x10A164u: goto label_10a164;
            case 0x10A168u: goto label_10a168;
            case 0x10A16Cu: goto label_10a16c;
            case 0x10A170u: goto label_10a170;
            case 0x10A174u: goto label_10a174;
            case 0x10A178u: goto label_10a178;
            case 0x10A17Cu: goto label_10a17c;
            case 0x10A180u: goto label_10a180;
            case 0x10A184u: goto label_10a184;
            case 0x10A188u: goto label_10a188;
            case 0x10A18Cu: goto label_10a18c;
            case 0x10A190u: goto label_10a190;
            case 0x10A194u: goto label_10a194;
            case 0x10A198u: goto label_10a198;
            case 0x10A19Cu: goto label_10a19c;
            case 0x10A1A0u: goto label_10a1a0;
            case 0x10A1A4u: goto label_10a1a4;
            case 0x10A1A8u: goto label_10a1a8;
            case 0x10A1ACu: goto label_10a1ac;
            case 0x10A1B0u: goto label_10a1b0;
            case 0x10A1B4u: goto label_10a1b4;
            case 0x10A1B8u: goto label_10a1b8;
            case 0x10A1BCu: goto label_10a1bc;
            case 0x10A1C0u: goto label_10a1c0;
            case 0x10A1C4u: goto label_10a1c4;
            case 0x10A1C8u: goto label_10a1c8;
            case 0x10A1CCu: goto label_10a1cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A1CCu;
label_10a1cc:
    // 0x10a1cc: 0x0
    ctx->pc = 0x10a1ccu;
    // NOP
}
