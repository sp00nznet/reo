#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CE110
// Address: 0x1ce110 - 0x1ce2a0
void sub_001CE110_0x1ce110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ce110u;

    // 0x1ce110: 0x27bdfe80
    ctx->pc = 0x1ce110u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1ce114: 0x2402ffff
    ctx->pc = 0x1ce114u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce118: 0xffbf0070
    ctx->pc = 0x1ce118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1ce11c: 0x7fb60060
    ctx->pc = 0x1ce11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ce120: 0x7fb50050
    ctx->pc = 0x1ce120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ce124: 0x7fb40040
    ctx->pc = 0x1ce124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ce128: 0xa0a82d
    ctx->pc = 0x1ce128u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce12c: 0x7fb30030
    ctx->pc = 0x1ce12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ce130: 0xc0a02d
    ctx->pc = 0x1ce130u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce134: 0x7fb20020
    ctx->pc = 0x1ce134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ce138: 0xe0982d
    ctx->pc = 0x1ce138u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce13c: 0x7fb10010
    ctx->pc = 0x1ce13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ce140: 0x902d
    ctx->pc = 0x1ce140u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce144: 0x16a20007
    ctx->pc = 0x1CE144u;
    {
        const bool branch_taken_0x1ce144 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 2));
        ctx->pc = 0x1CE148u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        if (branch_taken_0x1ce144) {
            ctx->pc = 0x1CE164u;
            goto label_1ce164;
        }
    }
    ctx->pc = 0x1CE14Cu;
    // 0x1ce14c: 0x3c010023
    ctx->pc = 0x1ce14cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1ce150: 0x8c3566c8
    ctx->pc = 0x1ce150u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 1), 26312)));
    // 0x1ce154: 0x16a20004
    ctx->pc = 0x1CE154u;
    {
        const bool branch_taken_0x1ce154 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 2));
        ctx->pc = 0x1CE158u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ce154) {
            ctx->pc = 0x1CE168u;
            goto label_1ce168;
        }
    }
    ctx->pc = 0x1CE15Cu;
    // 0x1ce15c: 0x10000043
    ctx->pc = 0x1CE15Cu;
    {
        const bool branch_taken_0x1ce15c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE160u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ce15c) {
            ctx->pc = 0x1CE26Cu;
            goto label_1ce26c;
        }
    }
    ctx->pc = 0x1CE164u;
label_1ce164:
    // 0x1ce164: 0x80282d
    ctx->pc = 0x1ce164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ce168:
    // 0x1ce168: 0x131742
    ctx->pc = 0x1ce168u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 19), 29));
    // 0x1ce16c: 0x30470007
    ctx->pc = 0x1ce16cu;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 2), 7));
    // 0x1ce170: 0x2a0202d
    ctx->pc = 0x1ce170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce174: 0xc0735c4
    ctx->pc = 0x1CE174u;
    SET_GPR_U32(ctx, 31, 0x1CE17Cu);
    ctx->pc = 0x1CE178u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1CD710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD710_0x1cd710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE17Cu; }
    }
    if (ctx->pc != 0x1CE17Cu) { return; }
    ctx->pc = 0x1CE17Cu;
    // 0x1ce17c: 0x40882d
    ctx->pc = 0x1ce17cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce180: 0x16200003
    ctx->pc = 0x1CE180u;
    {
        const bool branch_taken_0x1ce180 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CE184u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ce180) {
            ctx->pc = 0x1CE190u;
            goto label_1ce190;
        }
    }
    ctx->pc = 0x1CE188u;
    // 0x1ce188: 0x10000038
    ctx->pc = 0x1CE188u;
    {
        const bool branch_taken_0x1ce188 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE18Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ce188) {
            ctx->pc = 0x1CE26Cu;
            goto label_1ce26c;
        }
    }
    ctx->pc = 0x1CE190u;
label_1ce190:
    // 0x1ce190: 0xc042c56
    ctx->pc = 0x1CE190u;
    SET_GPR_U32(ctx, 31, 0x1CE198u);
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE198u; }
    }
    if (ctx->pc != 0x1CE198u) { return; }
    ctx->pc = 0x1CE198u;
    // 0x1ce198: 0x14400003
    ctx->pc = 0x1CE198u;
    {
        const bool branch_taken_0x1ce198 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CE19Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
        if (branch_taken_0x1ce198) {
            ctx->pc = 0x1CE1A8u;
            goto label_1ce1a8;
        }
    }
    ctx->pc = 0x1CE1A0u;
    // 0x1ce1a0: 0x10000032
    ctx->pc = 0x1CE1A0u;
    {
        const bool branch_taken_0x1ce1a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE1A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ce1a0) {
            ctx->pc = 0x1CE26Cu;
            goto label_1ce26c;
        }
    }
    ctx->pc = 0x1CE1A8u;
label_1ce1a8:
    // 0x1ce1a8: 0xc042bf0
    ctx->pc = 0x1CE1A8u;
    SET_GPR_U32(ctx, 31, 0x1CE1B0u);
    ctx->pc = 0x1CE1ACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE1B0u; }
    }
    if (ctx->pc != 0x1CE1B0u) { return; }
    ctx->pc = 0x1CE1B0u;
    // 0x1ce1b0: 0x3c050025
    ctx->pc = 0x1ce1b0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1ce1b4: 0x27a40080
    ctx->pc = 0x1ce1b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ce1b8: 0xc042aee
    ctx->pc = 0x1CE1B8u;
    SET_GPR_U32(ctx, 31, 0x1CE1C0u);
    ctx->pc = 0x1CE1BCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24776));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE1C0u; }
    }
    if (ctx->pc != 0x1CE1C0u) { return; }
    ctx->pc = 0x1CE1C0u;
    // 0x1ce1c0: 0x3c010034
    ctx->pc = 0x1ce1c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1ce1c4: 0x27b60080
    ctx->pc = 0x1ce1c4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ce1c8: 0x8c300ad8
    ctx->pc = 0x1ce1c8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 2776)));
    // 0x1ce1cc: 0x2c0202d
    ctx->pc = 0x1ce1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce1d0: 0x24060001
    ctx->pc = 0x1ce1d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce1d4: 0x382d
    ctx->pc = 0x1ce1d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce1d8: 0xc07323c
    ctx->pc = 0x1CE1D8u;
    SET_GPR_U32(ctx, 31, 0x1CE1E0u);
    ctx->pc = 0x1CE1DCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8F0_0x1cc8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE1E0u; }
    }
    if (ctx->pc != 0x1CE1E0u) { return; }
    ctx->pc = 0x1CE1E0u;
    // 0x1ce1e0: 0x1840000d
    ctx->pc = 0x1CE1E0u;
    {
        const bool branch_taken_0x1ce1e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CE1E4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ce1e0) {
            ctx->pc = 0x1CE218u;
            goto label_1ce218;
        }
    }
    ctx->pc = 0x1CE1E8u;
    // 0x1ce1e8: 0x280202d
    ctx->pc = 0x1ce1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce1ec: 0x200282d
    ctx->pc = 0x1ce1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce1f0: 0xc07496c
    ctx->pc = 0x1CE1F0u;
    SET_GPR_U32(ctx, 31, 0x1CE1F8u);
    ctx->pc = 0x1CE1F4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D25B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D25B0_0x1d25b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE1F8u; }
    }
    if (ctx->pc != 0x1CE1F8u) { return; }
    ctx->pc = 0x1CE1F8u;
    // 0x1ce1f8: 0xc06cb34
    ctx->pc = 0x1CE1F8u;
    SET_GPR_U32(ctx, 31, 0x1CE200u);
    ctx->pc = 0x1CE1FCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B2CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2CD0_0x1b2cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE200u; }
    }
    if (ctx->pc != 0x1CE200u) { return; }
    ctx->pc = 0x1CE200u;
    // 0x1ce200: 0x326600ff
    ctx->pc = 0x1ce200u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 19), 255));
    // 0x1ce204: 0x200282d
    ctx->pc = 0x1ce204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce208: 0xc0749f4
    ctx->pc = 0x1CE208u;
    SET_GPR_U32(ctx, 31, 0x1CE210u);
    ctx->pc = 0x1CE20Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D27D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D27D0_0x1d27d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE210u; }
    }
    if (ctx->pc != 0x1CE210u) { return; }
    ctx->pc = 0x1CE210u;
    // 0x1ce210: 0x24120001
    ctx->pc = 0x1ce210u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce214: 0x220282d
    ctx->pc = 0x1ce214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ce218:
    // 0x1ce218: 0xc042bf0
    ctx->pc = 0x1CE218u;
    SET_GPR_U32(ctx, 31, 0x1CE220u);
    ctx->pc = 0x1CE21Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE220u; }
    }
    if (ctx->pc != 0x1CE220u) { return; }
    ctx->pc = 0x1CE220u;
    // 0x1ce220: 0x3c050025
    ctx->pc = 0x1ce220u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1ce224: 0x27a40080
    ctx->pc = 0x1ce224u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ce228: 0xc042aee
    ctx->pc = 0x1CE228u;
    SET_GPR_U32(ctx, 31, 0x1CE230u);
    ctx->pc = 0x1CE22Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24784));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE230u; }
    }
    if (ctx->pc != 0x1CE230u) { return; }
    ctx->pc = 0x1CE230u;
    // 0x1ce230: 0x3c010034
    ctx->pc = 0x1ce230u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1ce234: 0x2c0202d
    ctx->pc = 0x1ce234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce238: 0x8c300ad8
    ctx->pc = 0x1ce238u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 2776)));
    // 0x1ce23c: 0x24060001
    ctx->pc = 0x1ce23cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce240: 0x382d
    ctx->pc = 0x1ce240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce244: 0xc07323c
    ctx->pc = 0x1CE244u;
    SET_GPR_U32(ctx, 31, 0x1CE24Cu);
    ctx->pc = 0x1CE248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8F0_0x1cc8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE24Cu; }
    }
    if (ctx->pc != 0x1CE24Cu) { return; }
    ctx->pc = 0x1CE24Cu;
    // 0x1ce24c: 0x18400006
    ctx->pc = 0x1CE24Cu;
    {
        const bool branch_taken_0x1ce24c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CE250u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ce24c) {
            ctx->pc = 0x1CE268u;
            goto label_1ce268;
        }
    }
    ctx->pc = 0x1CE254u;
    // 0x1ce254: 0x200302d
    ctx->pc = 0x1ce254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce258: 0x280282d
    ctx->pc = 0x1ce258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce25c: 0xc0737f8
    ctx->pc = 0x1CE25Cu;
    SET_GPR_U32(ctx, 31, 0x1CE264u);
    ctx->pc = 0x1CE260u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2076), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1CDFE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDFE0_0x1cdfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE264u; }
    }
    if (ctx->pc != 0x1CE264u) { return; }
    ctx->pc = 0x1CE264u;
    // 0x1ce264: 0x26520002
    ctx->pc = 0x1ce264u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
label_1ce268:
    // 0x1ce268: 0x240102d
    ctx->pc = 0x1ce268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ce26c:
    // 0x1ce26c: 0xdfbf0070
    ctx->pc = 0x1ce26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ce270: 0x7bb60060
    ctx->pc = 0x1ce270u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ce274: 0x7bb50050
    ctx->pc = 0x1ce274u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce278: 0x7bb40040
    ctx->pc = 0x1ce278u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ce27c: 0x7bb30030
    ctx->pc = 0x1ce27cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce280: 0x7bb20020
    ctx->pc = 0x1ce280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce284: 0x7bb10010
    ctx->pc = 0x1ce284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce288: 0x7bb00000
    ctx->pc = 0x1ce288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce28c: 0x3e00008
    ctx->pc = 0x1CE28Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE290u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE164u: goto label_1ce164;
            case 0x1CE168u: goto label_1ce168;
            case 0x1CE190u: goto label_1ce190;
            case 0x1CE1A8u: goto label_1ce1a8;
            case 0x1CE218u: goto label_1ce218;
            case 0x1CE268u: goto label_1ce268;
            case 0x1CE26Cu: goto label_1ce26c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CE294u;
    // 0x1ce294: 0x0
    ctx->pc = 0x1ce294u;
    // NOP
    // 0x1ce298: 0x0
    ctx->pc = 0x1ce298u;
    // NOP
    // 0x1ce29c: 0x0
    ctx->pc = 0x1ce29cu;
    // NOP
}
