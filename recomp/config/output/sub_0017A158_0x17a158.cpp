#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017A158
// Address: 0x17a158 - 0x17a4e8
void sub_0017A158_0x17a158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17a158u;

    // 0x17a158: 0x27bdffe0
    ctx->pc = 0x17a158u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a15c: 0xffb00000
    ctx->pc = 0x17a15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a160: 0x30b000ff
    ctx->pc = 0x17a160u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 5), 255));
    // 0x17a164: 0x200282d
    ctx->pc = 0x17a164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a168: 0xffb10008
    ctx->pc = 0x17a168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17a16c: 0xffb20010
    ctx->pc = 0x17a16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17a170: 0xffbf0018
    ctx->pc = 0x17a170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17a174: 0xc05e756
    ctx->pc = 0x17A174u;
    SET_GPR_U32(ctx, 31, 0x17A17Cu);
    ctx->pc = 0x17A178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179D58_0x179d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A17Cu; }
    }
    if (ctx->pc != 0x17A17Cu) { return; }
    ctx->pc = 0x17A17Cu;
    // 0x17a17c: 0x40882d
    ctx->pc = 0x17a17cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a180: 0x200202d
    ctx->pc = 0x17a180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a184: 0x12200008
    ctx->pc = 0x17A184u;
    {
        const bool branch_taken_0x17a184 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A188u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17a184) {
            ctx->pc = 0x17A1A8u;
            goto label_17a1a8;
        }
    }
    ctx->pc = 0x17A18Cu;
    // 0x17a18c: 0xc05e966
    ctx->pc = 0x17A18Cu;
    SET_GPR_U32(ctx, 31, 0x17A194u);
    ctx->pc = 0x17A598u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A598_0x17a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A194u; }
    }
    if (ctx->pc != 0x17A194u) { return; }
    ctx->pc = 0x17A194u;
    // 0x17a194: 0x10400005
    ctx->pc = 0x17A194u;
    {
        const bool branch_taken_0x17a194 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A198u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x17a194) {
            ctx->pc = 0x17A1ACu;
            goto label_17a1ac;
        }
    }
    ctx->pc = 0x17A19Cu;
    // 0x17a19c: 0x92230021
    ctx->pc = 0x17a19cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x17a1a0: 0x24020001
    ctx->pc = 0x17a1a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a1a4: 0xae430000
    ctx->pc = 0x17a1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_17a1a8:
    // 0x17a1a8: 0xdfb00000
    ctx->pc = 0x17a1a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a1ac:
    // 0x17a1ac: 0xdfb10008
    ctx->pc = 0x17a1acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a1b0: 0xdfb20010
    ctx->pc = 0x17a1b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a1b4: 0xdfbf0018
    ctx->pc = 0x17a1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a1b8: 0x3e00008
    ctx->pc = 0x17A1B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A1BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A1A8u: goto label_17a1a8;
            case 0x17A1ACu: goto label_17a1ac;
            case 0x17A210u: goto label_17a210;
            case 0x17A214u: goto label_17a214;
            case 0x17A27Cu: goto label_17a27c;
            case 0x17A280u: goto label_17a280;
            case 0x17A2F0u: goto label_17a2f0;
            case 0x17A2F4u: goto label_17a2f4;
            case 0x17A358u: goto label_17a358;
            case 0x17A35Cu: goto label_17a35c;
            case 0x17A3CCu: goto label_17a3cc;
            case 0x17A3D0u: goto label_17a3d0;
            case 0x17A3D4u: goto label_17a3d4;
            case 0x17A444u: goto label_17a444;
            case 0x17A448u: goto label_17a448;
            case 0x17A44Cu: goto label_17a44c;
            case 0x17A4C8u: goto label_17a4c8;
            case 0x17A4CCu: goto label_17a4cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A1C0u;
    // 0x17a1c0: 0x27bdffe0
    ctx->pc = 0x17a1c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a1c4: 0xffb00000
    ctx->pc = 0x17a1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a1c8: 0x30b000ff
    ctx->pc = 0x17a1c8u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 5), 255));
    // 0x17a1cc: 0x200282d
    ctx->pc = 0x17a1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a1d0: 0xffb10008
    ctx->pc = 0x17a1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17a1d4: 0xffb20010
    ctx->pc = 0x17a1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17a1d8: 0xffbf0018
    ctx->pc = 0x17a1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17a1dc: 0xc05e756
    ctx->pc = 0x17A1DCu;
    SET_GPR_U32(ctx, 31, 0x17A1E4u);
    ctx->pc = 0x17A1E0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179D58_0x179d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A1E4u; }
    }
    if (ctx->pc != 0x17A1E4u) { return; }
    ctx->pc = 0x17A1E4u;
    // 0x17a1e4: 0x40882d
    ctx->pc = 0x17a1e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a1e8: 0x200202d
    ctx->pc = 0x17a1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a1ec: 0x12200008
    ctx->pc = 0x17A1ECu;
    {
        const bool branch_taken_0x17a1ec = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A1F0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17a1ec) {
            ctx->pc = 0x17A210u;
            goto label_17a210;
        }
    }
    ctx->pc = 0x17A1F4u;
    // 0x17a1f4: 0xc05e966
    ctx->pc = 0x17A1F4u;
    SET_GPR_U32(ctx, 31, 0x17A1FCu);
    ctx->pc = 0x17A598u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A598_0x17a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A1FCu; }
    }
    if (ctx->pc != 0x17A1FCu) { return; }
    ctx->pc = 0x17A1FCu;
    // 0x17a1fc: 0x10400005
    ctx->pc = 0x17A1FCu;
    {
        const bool branch_taken_0x17a1fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A200u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x17a1fc) {
            ctx->pc = 0x17A214u;
            goto label_17a214;
        }
    }
    ctx->pc = 0x17A204u;
    // 0x17a204: 0x92230022
    ctx->pc = 0x17a204u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x17a208: 0x24020001
    ctx->pc = 0x17a208u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a20c: 0xae430000
    ctx->pc = 0x17a20cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_17a210:
    // 0x17a210: 0xdfb00000
    ctx->pc = 0x17a210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a214:
    // 0x17a214: 0xdfb10008
    ctx->pc = 0x17a214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a218: 0xdfb20010
    ctx->pc = 0x17a218u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a21c: 0xdfbf0018
    ctx->pc = 0x17a21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a220: 0x3e00008
    ctx->pc = 0x17A220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A224u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A1A8u: goto label_17a1a8;
            case 0x17A1ACu: goto label_17a1ac;
            case 0x17A210u: goto label_17a210;
            case 0x17A214u: goto label_17a214;
            case 0x17A27Cu: goto label_17a27c;
            case 0x17A280u: goto label_17a280;
            case 0x17A2F0u: goto label_17a2f0;
            case 0x17A2F4u: goto label_17a2f4;
            case 0x17A358u: goto label_17a358;
            case 0x17A35Cu: goto label_17a35c;
            case 0x17A3CCu: goto label_17a3cc;
            case 0x17A3D0u: goto label_17a3d0;
            case 0x17A3D4u: goto label_17a3d4;
            case 0x17A444u: goto label_17a444;
            case 0x17A448u: goto label_17a448;
            case 0x17A44Cu: goto label_17a44c;
            case 0x17A4C8u: goto label_17a4c8;
            case 0x17A4CCu: goto label_17a4cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A228u;
    // 0x17a228: 0x27bdffe0
    ctx->pc = 0x17a228u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a22c: 0xffb00000
    ctx->pc = 0x17a22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a230: 0x30b000ff
    ctx->pc = 0x17a230u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 5), 255));
    // 0x17a234: 0x200282d
    ctx->pc = 0x17a234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a238: 0xffb10008
    ctx->pc = 0x17a238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17a23c: 0xffb20010
    ctx->pc = 0x17a23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17a240: 0xffbf0018
    ctx->pc = 0x17a240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17a244: 0xc05e756
    ctx->pc = 0x17A244u;
    SET_GPR_U32(ctx, 31, 0x17A24Cu);
    ctx->pc = 0x17A248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179D58_0x179d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A24Cu; }
    }
    if (ctx->pc != 0x17A24Cu) { return; }
    ctx->pc = 0x17A24Cu;
    // 0x17a24c: 0x40882d
    ctx->pc = 0x17a24cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a250: 0x200202d
    ctx->pc = 0x17a250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a254: 0x12200009
    ctx->pc = 0x17A254u;
    {
        const bool branch_taken_0x17a254 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A258u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17a254) {
            ctx->pc = 0x17A27Cu;
            goto label_17a27c;
        }
    }
    ctx->pc = 0x17A25Cu;
    // 0x17a25c: 0xc05e966
    ctx->pc = 0x17A25Cu;
    SET_GPR_U32(ctx, 31, 0x17A264u);
    ctx->pc = 0x17A598u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A598_0x17a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A264u; }
    }
    if (ctx->pc != 0x17A264u) { return; }
    ctx->pc = 0x17A264u;
    // 0x17a264: 0x10400006
    ctx->pc = 0x17A264u;
    {
        const bool branch_taken_0x17a264 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A268u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x17a264) {
            ctx->pc = 0x17A280u;
            goto label_17a280;
        }
    }
    ctx->pc = 0x17A26Cu;
    // 0x17a26c: 0x92230023
    ctx->pc = 0x17a26cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x17a270: 0x24020001
    ctx->pc = 0x17a270u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a274: 0x30630001
    ctx->pc = 0x17a274u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x17a278: 0xae430000
    ctx->pc = 0x17a278u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_17a27c:
    // 0x17a27c: 0xdfb00000
    ctx->pc = 0x17a27cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a280:
    // 0x17a280: 0xdfb10008
    ctx->pc = 0x17a280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a284: 0xdfb20010
    ctx->pc = 0x17a284u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a288: 0xdfbf0018
    ctx->pc = 0x17a288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a28c: 0x3e00008
    ctx->pc = 0x17A28Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A290u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A1A8u: goto label_17a1a8;
            case 0x17A1ACu: goto label_17a1ac;
            case 0x17A210u: goto label_17a210;
            case 0x17A214u: goto label_17a214;
            case 0x17A27Cu: goto label_17a27c;
            case 0x17A280u: goto label_17a280;
            case 0x17A2F0u: goto label_17a2f0;
            case 0x17A2F4u: goto label_17a2f4;
            case 0x17A358u: goto label_17a358;
            case 0x17A35Cu: goto label_17a35c;
            case 0x17A3CCu: goto label_17a3cc;
            case 0x17A3D0u: goto label_17a3d0;
            case 0x17A3D4u: goto label_17a3d4;
            case 0x17A444u: goto label_17a444;
            case 0x17A448u: goto label_17a448;
            case 0x17A44Cu: goto label_17a44c;
            case 0x17A4C8u: goto label_17a4c8;
            case 0x17A4CCu: goto label_17a4cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A294u;
    // 0x17a294: 0x0
    ctx->pc = 0x17a294u;
    // NOP
    // 0x17a298: 0x27bdffe0
    ctx->pc = 0x17a298u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a29c: 0xffb00000
    ctx->pc = 0x17a29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a2a0: 0x30b000ff
    ctx->pc = 0x17a2a0u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 5), 255));
    // 0x17a2a4: 0x200282d
    ctx->pc = 0x17a2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a2a8: 0xffb10008
    ctx->pc = 0x17a2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17a2ac: 0xffb20010
    ctx->pc = 0x17a2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17a2b0: 0xffbf0018
    ctx->pc = 0x17a2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17a2b4: 0xc05e756
    ctx->pc = 0x17A2B4u;
    SET_GPR_U32(ctx, 31, 0x17A2BCu);
    ctx->pc = 0x17A2B8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179D58_0x179d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A2BCu; }
    }
    if (ctx->pc != 0x17A2BCu) { return; }
    ctx->pc = 0x17A2BCu;
    // 0x17a2bc: 0x40882d
    ctx->pc = 0x17a2bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a2c0: 0x200202d
    ctx->pc = 0x17a2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a2c4: 0x1220000a
    ctx->pc = 0x17A2C4u;
    {
        const bool branch_taken_0x17a2c4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A2C8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17a2c4) {
            ctx->pc = 0x17A2F0u;
            goto label_17a2f0;
        }
    }
    ctx->pc = 0x17A2CCu;
    // 0x17a2cc: 0xc05e966
    ctx->pc = 0x17A2CCu;
    SET_GPR_U32(ctx, 31, 0x17A2D4u);
    ctx->pc = 0x17A598u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A598_0x17a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A2D4u; }
    }
    if (ctx->pc != 0x17A2D4u) { return; }
    ctx->pc = 0x17A2D4u;
    // 0x17a2d4: 0x10400007
    ctx->pc = 0x17A2D4u;
    {
        const bool branch_taken_0x17a2d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A2D8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x17a2d4) {
            ctx->pc = 0x17A2F4u;
            goto label_17a2f4;
        }
    }
    ctx->pc = 0x17A2DCu;
    // 0x17a2dc: 0x92230023
    ctx->pc = 0x17a2dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x17a2e0: 0x24020001
    ctx->pc = 0x17a2e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a2e4: 0x30630010
    ctx->pc = 0x17a2e4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16));
    // 0x17a2e8: 0x3182b
    ctx->pc = 0x17a2e8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x17a2ec: 0xae430000
    ctx->pc = 0x17a2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_17a2f0:
    // 0x17a2f0: 0xdfb00000
    ctx->pc = 0x17a2f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a2f4:
    // 0x17a2f4: 0xdfb10008
    ctx->pc = 0x17a2f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a2f8: 0xdfb20010
    ctx->pc = 0x17a2f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a2fc: 0xdfbf0018
    ctx->pc = 0x17a2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a300: 0x3e00008
    ctx->pc = 0x17A300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A304u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A1A8u: goto label_17a1a8;
            case 0x17A1ACu: goto label_17a1ac;
            case 0x17A210u: goto label_17a210;
            case 0x17A214u: goto label_17a214;
            case 0x17A27Cu: goto label_17a27c;
            case 0x17A280u: goto label_17a280;
            case 0x17A2F0u: goto label_17a2f0;
            case 0x17A2F4u: goto label_17a2f4;
            case 0x17A358u: goto label_17a358;
            case 0x17A35Cu: goto label_17a35c;
            case 0x17A3CCu: goto label_17a3cc;
            case 0x17A3D0u: goto label_17a3d0;
            case 0x17A3D4u: goto label_17a3d4;
            case 0x17A444u: goto label_17a444;
            case 0x17A448u: goto label_17a448;
            case 0x17A44Cu: goto label_17a44c;
            case 0x17A4C8u: goto label_17a4c8;
            case 0x17A4CCu: goto label_17a4cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A308u;
    // 0x17a308: 0x27bdffe0
    ctx->pc = 0x17a308u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a30c: 0xffb00000
    ctx->pc = 0x17a30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a310: 0x30b000ff
    ctx->pc = 0x17a310u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 5), 255));
    // 0x17a314: 0x200282d
    ctx->pc = 0x17a314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a318: 0xffb10008
    ctx->pc = 0x17a318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17a31c: 0xffb20010
    ctx->pc = 0x17a31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17a320: 0xffbf0018
    ctx->pc = 0x17a320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17a324: 0xc05e756
    ctx->pc = 0x17A324u;
    SET_GPR_U32(ctx, 31, 0x17A32Cu);
    ctx->pc = 0x17A328u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179D58_0x179d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A32Cu; }
    }
    if (ctx->pc != 0x17A32Cu) { return; }
    ctx->pc = 0x17A32Cu;
    // 0x17a32c: 0x40882d
    ctx->pc = 0x17a32cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a330: 0x200202d
    ctx->pc = 0x17a330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a334: 0x12200008
    ctx->pc = 0x17A334u;
    {
        const bool branch_taken_0x17a334 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A338u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17a334) {
            ctx->pc = 0x17A358u;
            goto label_17a358;
        }
    }
    ctx->pc = 0x17A33Cu;
    // 0x17a33c: 0xc05e966
    ctx->pc = 0x17A33Cu;
    SET_GPR_U32(ctx, 31, 0x17A344u);
    ctx->pc = 0x17A598u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A598_0x17a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A344u; }
    }
    if (ctx->pc != 0x17A344u) { return; }
    ctx->pc = 0x17A344u;
    // 0x17a344: 0x10400005
    ctx->pc = 0x17A344u;
    {
        const bool branch_taken_0x17a344 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A348u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x17a344) {
            ctx->pc = 0x17A35Cu;
            goto label_17a35c;
        }
    }
    ctx->pc = 0x17A34Cu;
    // 0x17a34c: 0x92230024
    ctx->pc = 0x17a34cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x17a350: 0x24020001
    ctx->pc = 0x17a350u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a354: 0xae430000
    ctx->pc = 0x17a354u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_17a358:
    // 0x17a358: 0xdfb00000
    ctx->pc = 0x17a358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a35c:
    // 0x17a35c: 0xdfb10008
    ctx->pc = 0x17a35cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a360: 0xdfb20010
    ctx->pc = 0x17a360u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a364: 0xdfbf0018
    ctx->pc = 0x17a364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a368: 0x3e00008
    ctx->pc = 0x17A368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A36Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A1A8u: goto label_17a1a8;
            case 0x17A1ACu: goto label_17a1ac;
            case 0x17A210u: goto label_17a210;
            case 0x17A214u: goto label_17a214;
            case 0x17A27Cu: goto label_17a27c;
            case 0x17A280u: goto label_17a280;
            case 0x17A2F0u: goto label_17a2f0;
            case 0x17A2F4u: goto label_17a2f4;
            case 0x17A358u: goto label_17a358;
            case 0x17A35Cu: goto label_17a35c;
            case 0x17A3CCu: goto label_17a3cc;
            case 0x17A3D0u: goto label_17a3d0;
            case 0x17A3D4u: goto label_17a3d4;
            case 0x17A444u: goto label_17a444;
            case 0x17A448u: goto label_17a448;
            case 0x17A44Cu: goto label_17a44c;
            case 0x17A4C8u: goto label_17a4c8;
            case 0x17A4CCu: goto label_17a4cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A370u;
    // 0x17a370: 0x27bdffe0
    ctx->pc = 0x17a370u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a374: 0xffb00000
    ctx->pc = 0x17a374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a378: 0x30b000ff
    ctx->pc = 0x17a378u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 5), 255));
    // 0x17a37c: 0x200282d
    ctx->pc = 0x17a37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a380: 0xffb10008
    ctx->pc = 0x17a380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17a384: 0xffb20010
    ctx->pc = 0x17a384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17a388: 0xffbf0018
    ctx->pc = 0x17a388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17a38c: 0xc05e756
    ctx->pc = 0x17A38Cu;
    SET_GPR_U32(ctx, 31, 0x17A394u);
    ctx->pc = 0x17A390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179D58_0x179d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A394u; }
    }
    if (ctx->pc != 0x17A394u) { return; }
    ctx->pc = 0x17A394u;
    // 0x17a394: 0x40882d
    ctx->pc = 0x17a394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a398: 0x200202d
    ctx->pc = 0x17a398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a39c: 0x1220000c
    ctx->pc = 0x17A39Cu;
    {
        const bool branch_taken_0x17a39c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A3A0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17a39c) {
            ctx->pc = 0x17A3D0u;
            goto label_17a3d0;
        }
    }
    ctx->pc = 0x17A3A4u;
    // 0x17a3a4: 0xc05e966
    ctx->pc = 0x17A3A4u;
    SET_GPR_U32(ctx, 31, 0x17A3ACu);
    ctx->pc = 0x17A598u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A598_0x17a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A3ACu; }
    }
    if (ctx->pc != 0x17A3ACu) { return; }
    ctx->pc = 0x17A3ACu;
    // 0x17a3ac: 0x10400009
    ctx->pc = 0x17A3ACu;
    {
        const bool branch_taken_0x17a3ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A3B0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x17a3ac) {
            ctx->pc = 0x17A3D4u;
            goto label_17a3d4;
        }
    }
    ctx->pc = 0x17A3B4u;
    // 0x17a3b4: 0x92220025
    ctx->pc = 0x17a3b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 37)));
    // 0x17a3b8: 0x28430040
    ctx->pc = 0x17a3b8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 64));
    // 0x17a3bc: 0x14600003
    ctx->pc = 0x17A3BCu;
    {
        const bool branch_taken_0x17a3bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17A3C0u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x17a3bc) {
            ctx->pc = 0x17A3CCu;
            goto label_17a3cc;
        }
    }
    ctx->pc = 0x17A3C4u;
    // 0x17a3c4: 0x2402ffff
    ctx->pc = 0x17a3c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17a3c8: 0xae420000
    ctx->pc = 0x17a3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_17a3cc:
    // 0x17a3cc: 0x24020001
    ctx->pc = 0x17a3ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_17a3d0:
    // 0x17a3d0: 0xdfb00000
    ctx->pc = 0x17a3d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a3d4:
    // 0x17a3d4: 0xdfb10008
    ctx->pc = 0x17a3d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a3d8: 0xdfb20010
    ctx->pc = 0x17a3d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a3dc: 0xdfbf0018
    ctx->pc = 0x17a3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a3e0: 0x3e00008
    ctx->pc = 0x17A3E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A3E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A1A8u: goto label_17a1a8;
            case 0x17A1ACu: goto label_17a1ac;
            case 0x17A210u: goto label_17a210;
            case 0x17A214u: goto label_17a214;
            case 0x17A27Cu: goto label_17a27c;
            case 0x17A280u: goto label_17a280;
            case 0x17A2F0u: goto label_17a2f0;
            case 0x17A2F4u: goto label_17a2f4;
            case 0x17A358u: goto label_17a358;
            case 0x17A35Cu: goto label_17a35c;
            case 0x17A3CCu: goto label_17a3cc;
            case 0x17A3D0u: goto label_17a3d0;
            case 0x17A3D4u: goto label_17a3d4;
            case 0x17A444u: goto label_17a444;
            case 0x17A448u: goto label_17a448;
            case 0x17A44Cu: goto label_17a44c;
            case 0x17A4C8u: goto label_17a4c8;
            case 0x17A4CCu: goto label_17a4cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A3E8u;
    // 0x17a3e8: 0x27bdffe0
    ctx->pc = 0x17a3e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a3ec: 0xffb00000
    ctx->pc = 0x17a3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a3f0: 0x30b000ff
    ctx->pc = 0x17a3f0u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 5), 255));
    // 0x17a3f4: 0x200282d
    ctx->pc = 0x17a3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a3f8: 0xffb10008
    ctx->pc = 0x17a3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17a3fc: 0xffb20010
    ctx->pc = 0x17a3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17a400: 0xffbf0018
    ctx->pc = 0x17a400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17a404: 0xc05e756
    ctx->pc = 0x17A404u;
    SET_GPR_U32(ctx, 31, 0x17A40Cu);
    ctx->pc = 0x17A408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179D58_0x179d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A40Cu; }
    }
    if (ctx->pc != 0x17A40Cu) { return; }
    ctx->pc = 0x17A40Cu;
    // 0x17a40c: 0x40882d
    ctx->pc = 0x17a40cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a410: 0x200202d
    ctx->pc = 0x17a410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a414: 0x1220000c
    ctx->pc = 0x17A414u;
    {
        const bool branch_taken_0x17a414 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A418u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17a414) {
            ctx->pc = 0x17A448u;
            goto label_17a448;
        }
    }
    ctx->pc = 0x17A41Cu;
    // 0x17a41c: 0xc05e966
    ctx->pc = 0x17A41Cu;
    SET_GPR_U32(ctx, 31, 0x17A424u);
    ctx->pc = 0x17A598u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A598_0x17a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A424u; }
    }
    if (ctx->pc != 0x17A424u) { return; }
    ctx->pc = 0x17A424u;
    // 0x17a424: 0x10400009
    ctx->pc = 0x17A424u;
    {
        const bool branch_taken_0x17a424 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A428u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x17a424) {
            ctx->pc = 0x17A44Cu;
            goto label_17a44c;
        }
    }
    ctx->pc = 0x17A42Cu;
    // 0x17a42c: 0x92220026
    ctx->pc = 0x17a42cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x17a430: 0x28430040
    ctx->pc = 0x17a430u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 64));
    // 0x17a434: 0x14600003
    ctx->pc = 0x17A434u;
    {
        const bool branch_taken_0x17a434 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17A438u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x17a434) {
            ctx->pc = 0x17A444u;
            goto label_17a444;
        }
    }
    ctx->pc = 0x17A43Cu;
    // 0x17a43c: 0x2402ffff
    ctx->pc = 0x17a43cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17a440: 0xae420000
    ctx->pc = 0x17a440u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_17a444:
    // 0x17a444: 0x24020001
    ctx->pc = 0x17a444u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_17a448:
    // 0x17a448: 0xdfb00000
    ctx->pc = 0x17a448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a44c:
    // 0x17a44c: 0xdfb10008
    ctx->pc = 0x17a44cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a450: 0xdfb20010
    ctx->pc = 0x17a450u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a454: 0xdfbf0018
    ctx->pc = 0x17a454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a458: 0x3e00008
    ctx->pc = 0x17A458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A45Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A1A8u: goto label_17a1a8;
            case 0x17A1ACu: goto label_17a1ac;
            case 0x17A210u: goto label_17a210;
            case 0x17A214u: goto label_17a214;
            case 0x17A27Cu: goto label_17a27c;
            case 0x17A280u: goto label_17a280;
            case 0x17A2F0u: goto label_17a2f0;
            case 0x17A2F4u: goto label_17a2f4;
            case 0x17A358u: goto label_17a358;
            case 0x17A35Cu: goto label_17a35c;
            case 0x17A3CCu: goto label_17a3cc;
            case 0x17A3D0u: goto label_17a3d0;
            case 0x17A3D4u: goto label_17a3d4;
            case 0x17A444u: goto label_17a444;
            case 0x17A448u: goto label_17a448;
            case 0x17A44Cu: goto label_17a44c;
            case 0x17A4C8u: goto label_17a4c8;
            case 0x17A4CCu: goto label_17a4cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A460u;
    // 0x17a460: 0x27bdffd0
    ctx->pc = 0x17a460u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17a464: 0xffb00000
    ctx->pc = 0x17a464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a468: 0x30b000ff
    ctx->pc = 0x17a468u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 5), 255));
    // 0x17a46c: 0x200282d
    ctx->pc = 0x17a46cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a470: 0xffb10008
    ctx->pc = 0x17a470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17a474: 0xffb20010
    ctx->pc = 0x17a474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17a478: 0x80902d
    ctx->pc = 0x17a478u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a47c: 0xffb30018
    ctx->pc = 0x17a47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17a480: 0xffbf0020
    ctx->pc = 0x17a480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17a484: 0xc05e756
    ctx->pc = 0x17A484u;
    SET_GPR_U32(ctx, 31, 0x17A48Cu);
    ctx->pc = 0x17A488u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179D58_0x179d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A48Cu; }
    }
    if (ctx->pc != 0x17A48Cu) { return; }
    ctx->pc = 0x17A48Cu;
    // 0x17a48c: 0x40882d
    ctx->pc = 0x17a48cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a490: 0x200202d
    ctx->pc = 0x17a490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a494: 0x1220000c
    ctx->pc = 0x17A494u;
    {
        const bool branch_taken_0x17a494 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A498u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17a494) {
            ctx->pc = 0x17A4C8u;
            goto label_17a4c8;
        }
    }
    ctx->pc = 0x17A49Cu;
    // 0x17a49c: 0xc05e966
    ctx->pc = 0x17A49Cu;
    SET_GPR_U32(ctx, 31, 0x17A4A4u);
    ctx->pc = 0x17A598u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A598_0x17a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A4A4u; }
    }
    if (ctx->pc != 0x17A4A4u) { return; }
    ctx->pc = 0x17A4A4u;
    // 0x17a4a4: 0x10400009
    ctx->pc = 0x17A4A4u;
    {
        const bool branch_taken_0x17a4a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A4A8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x17a4a4) {
            ctx->pc = 0x17A4CCu;
            goto label_17a4cc;
        }
    }
    ctx->pc = 0x17A4ACu;
    // 0x17a4ac: 0x8e43000c
    ctx->pc = 0x17a4acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x17a4b0: 0x286300d2
    ctx->pc = 0x17a4b0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 210));
    // 0x17a4b4: 0x14600005
    ctx->pc = 0x17A4B4u;
    {
        const bool branch_taken_0x17a4b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17A4B8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17a4b4) {
            ctx->pc = 0x17A4CCu;
            goto label_17a4cc;
        }
    }
    ctx->pc = 0x17A4BCu;
    // 0x17a4bc: 0x92230027
    ctx->pc = 0x17a4bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 39)));
    // 0x17a4c0: 0x24020001
    ctx->pc = 0x17a4c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a4c4: 0xae630000
    ctx->pc = 0x17a4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_17a4c8:
    // 0x17a4c8: 0xdfb00000
    ctx->pc = 0x17a4c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a4cc:
    // 0x17a4cc: 0xdfb10008
    ctx->pc = 0x17a4ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a4d0: 0xdfb20010
    ctx->pc = 0x17a4d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a4d4: 0xdfb30018
    ctx->pc = 0x17a4d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a4d8: 0xdfbf0020
    ctx->pc = 0x17a4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a4dc: 0x3e00008
    ctx->pc = 0x17A4DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A4E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A1A8u: goto label_17a1a8;
            case 0x17A1ACu: goto label_17a1ac;
            case 0x17A210u: goto label_17a210;
            case 0x17A214u: goto label_17a214;
            case 0x17A27Cu: goto label_17a27c;
            case 0x17A280u: goto label_17a280;
            case 0x17A2F0u: goto label_17a2f0;
            case 0x17A2F4u: goto label_17a2f4;
            case 0x17A358u: goto label_17a358;
            case 0x17A35Cu: goto label_17a35c;
            case 0x17A3CCu: goto label_17a3cc;
            case 0x17A3D0u: goto label_17a3d0;
            case 0x17A3D4u: goto label_17a3d4;
            case 0x17A444u: goto label_17a444;
            case 0x17A448u: goto label_17a448;
            case 0x17A44Cu: goto label_17a44c;
            case 0x17A4C8u: goto label_17a4c8;
            case 0x17A4CCu: goto label_17a4cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A4E4u;
    // 0x17a4e4: 0x0
    ctx->pc = 0x17a4e4u;
    // NOP
}
