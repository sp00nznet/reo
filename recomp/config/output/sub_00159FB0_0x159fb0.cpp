#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00159FB0
// Address: 0x159fb0 - 0x15a270
void sub_00159FB0_0x159fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x159fb0u;

label_159fb0:
    // 0x159fb0: 0x27bdffc0
    ctx->pc = 0x159fb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_159fb4:
    // 0x159fb4: 0x24020002
    ctx->pc = 0x159fb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_159fb8:
    // 0x159fb8: 0xffb00010
    ctx->pc = 0x159fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_159fbc:
    // 0x159fbc: 0x3c067fff
    ctx->pc = 0x159fbcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_159fc0:
    // 0x159fc0: 0xffb10018
    ctx->pc = 0x159fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_159fc4:
    // 0x159fc4: 0x80882d
    ctx->pc = 0x159fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_159fc8:
    // 0x159fc8: 0xffb20020
    ctx->pc = 0x159fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_159fcc:
    // 0x159fcc: 0xa0902d
    ctx->pc = 0x159fccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_159fd0:
    // 0x159fd0: 0xffb30028
    ctx->pc = 0x159fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_159fd4:
    // 0x159fd4: 0x26330348
    ctx->pc = 0x159fd4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 840));
label_159fd8:
    // 0x159fd8: 0xffbf0030
    ctx->pc = 0x159fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_159fdc:
    // 0x159fdc: 0x263001d0
    ctx->pc = 0x159fdcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 464));
label_159fe0:
    // 0x159fe0: 0xae220384
    ctx->pc = 0x159fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 900), GPR_U32(ctx, 2));
label_159fe4:
    // 0x159fe4: 0x24050001
    ctx->pc = 0x159fe4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_159fe8:
    // 0x159fe8: 0x8e030030
    ctx->pc = 0x159fe8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_159fec:
    // 0x159fec: 0x34c6ffff
    ctx->pc = 0x159fecu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
label_159ff0:
    // 0x159ff0: 0x8e440000
    ctx->pc = 0x159ff0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_159ff4:
    // 0x159ff4: 0x260382d
    ctx->pc = 0x159ff4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_159ff8:
    // 0x159ff8: 0x24630001
    ctx->pc = 0x159ff8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_159ffc:
    // 0x159ffc: 0x8c820018
    ctx->pc = 0x159ffcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_15a000:
    // 0x15a000: 0x240202d
    ctx->pc = 0x15a000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15a004:
    // 0x15a004: 0x40f809
label_15a008:
    if (ctx->pc == 0x15A008u) {
        ctx->pc = 0x15A008u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->pc = 0x15A00Cu;
        goto label_15a00c;
    }
    ctx->pc = 0x15A004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15A00Cu);
        ctx->pc = 0x15A008u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159FB0u: goto label_159fb0;
            case 0x159FB4u: goto label_159fb4;
            case 0x159FB8u: goto label_159fb8;
            case 0x159FBCu: goto label_159fbc;
            case 0x159FC0u: goto label_159fc0;
            case 0x159FC4u: goto label_159fc4;
            case 0x159FC8u: goto label_159fc8;
            case 0x159FCCu: goto label_159fcc;
            case 0x159FD0u: goto label_159fd0;
            case 0x159FD4u: goto label_159fd4;
            case 0x159FD8u: goto label_159fd8;
            case 0x159FDCu: goto label_159fdc;
            case 0x159FE0u: goto label_159fe0;
            case 0x159FE4u: goto label_159fe4;
            case 0x159FE8u: goto label_159fe8;
            case 0x159FECu: goto label_159fec;
            case 0x159FF0u: goto label_159ff0;
            case 0x159FF4u: goto label_159ff4;
            case 0x159FF8u: goto label_159ff8;
            case 0x159FFCu: goto label_159ffc;
            case 0x15A000u: goto label_15a000;
            case 0x15A004u: goto label_15a004;
            case 0x15A008u: goto label_15a008;
            case 0x15A00Cu: goto label_15a00c;
            case 0x15A010u: goto label_15a010;
            case 0x15A014u: goto label_15a014;
            case 0x15A018u: goto label_15a018;
            case 0x15A01Cu: goto label_15a01c;
            case 0x15A020u: goto label_15a020;
            case 0x15A024u: goto label_15a024;
            case 0x15A028u: goto label_15a028;
            case 0x15A02Cu: goto label_15a02c;
            case 0x15A030u: goto label_15a030;
            case 0x15A034u: goto label_15a034;
            case 0x15A038u: goto label_15a038;
            case 0x15A03Cu: goto label_15a03c;
            case 0x15A040u: goto label_15a040;
            case 0x15A044u: goto label_15a044;
            case 0x15A048u: goto label_15a048;
            case 0x15A04Cu: goto label_15a04c;
            case 0x15A050u: goto label_15a050;
            case 0x15A054u: goto label_15a054;
            case 0x15A058u: goto label_15a058;
            case 0x15A05Cu: goto label_15a05c;
            case 0x15A060u: goto label_15a060;
            case 0x15A064u: goto label_15a064;
            case 0x15A068u: goto label_15a068;
            case 0x15A06Cu: goto label_15a06c;
            case 0x15A070u: goto label_15a070;
            case 0x15A074u: goto label_15a074;
            case 0x15A078u: goto label_15a078;
            case 0x15A07Cu: goto label_15a07c;
            case 0x15A080u: goto label_15a080;
            case 0x15A084u: goto label_15a084;
            case 0x15A088u: goto label_15a088;
            case 0x15A08Cu: goto label_15a08c;
            case 0x15A090u: goto label_15a090;
            case 0x15A094u: goto label_15a094;
            case 0x15A098u: goto label_15a098;
            case 0x15A09Cu: goto label_15a09c;
            case 0x15A0A0u: goto label_15a0a0;
            case 0x15A0A4u: goto label_15a0a4;
            case 0x15A0A8u: goto label_15a0a8;
            case 0x15A0ACu: goto label_15a0ac;
            case 0x15A0B0u: goto label_15a0b0;
            case 0x15A0B4u: goto label_15a0b4;
            case 0x15A0B8u: goto label_15a0b8;
            case 0x15A0BCu: goto label_15a0bc;
            case 0x15A0C0u: goto label_15a0c0;
            case 0x15A0C4u: goto label_15a0c4;
            case 0x15A0C8u: goto label_15a0c8;
            case 0x15A0CCu: goto label_15a0cc;
            case 0x15A0D0u: goto label_15a0d0;
            case 0x15A0D4u: goto label_15a0d4;
            case 0x15A0D8u: goto label_15a0d8;
            case 0x15A0DCu: goto label_15a0dc;
            case 0x15A0E0u: goto label_15a0e0;
            case 0x15A0E4u: goto label_15a0e4;
            case 0x15A0E8u: goto label_15a0e8;
            case 0x15A0ECu: goto label_15a0ec;
            case 0x15A0F0u: goto label_15a0f0;
            case 0x15A0F4u: goto label_15a0f4;
            case 0x15A0F8u: goto label_15a0f8;
            case 0x15A0FCu: goto label_15a0fc;
            case 0x15A100u: goto label_15a100;
            case 0x15A104u: goto label_15a104;
            case 0x15A108u: goto label_15a108;
            case 0x15A10Cu: goto label_15a10c;
            case 0x15A110u: goto label_15a110;
            case 0x15A114u: goto label_15a114;
            case 0x15A118u: goto label_15a118;
            case 0x15A11Cu: goto label_15a11c;
            case 0x15A120u: goto label_15a120;
            case 0x15A124u: goto label_15a124;
            case 0x15A128u: goto label_15a128;
            case 0x15A12Cu: goto label_15a12c;
            case 0x15A130u: goto label_15a130;
            case 0x15A134u: goto label_15a134;
            case 0x15A138u: goto label_15a138;
            case 0x15A13Cu: goto label_15a13c;
            case 0x15A140u: goto label_15a140;
            case 0x15A144u: goto label_15a144;
            case 0x15A148u: goto label_15a148;
            case 0x15A14Cu: goto label_15a14c;
            case 0x15A150u: goto label_15a150;
            case 0x15A154u: goto label_15a154;
            case 0x15A158u: goto label_15a158;
            case 0x15A15Cu: goto label_15a15c;
            case 0x15A160u: goto label_15a160;
            case 0x15A164u: goto label_15a164;
            case 0x15A168u: goto label_15a168;
            case 0x15A16Cu: goto label_15a16c;
            case 0x15A170u: goto label_15a170;
            case 0x15A174u: goto label_15a174;
            case 0x15A178u: goto label_15a178;
            case 0x15A17Cu: goto label_15a17c;
            case 0x15A180u: goto label_15a180;
            case 0x15A184u: goto label_15a184;
            case 0x15A188u: goto label_15a188;
            case 0x15A18Cu: goto label_15a18c;
            case 0x15A190u: goto label_15a190;
            case 0x15A194u: goto label_15a194;
            case 0x15A198u: goto label_15a198;
            case 0x15A19Cu: goto label_15a19c;
            case 0x15A1A0u: goto label_15a1a0;
            case 0x15A1A4u: goto label_15a1a4;
            case 0x15A1A8u: goto label_15a1a8;
            case 0x15A1ACu: goto label_15a1ac;
            case 0x15A1B0u: goto label_15a1b0;
            case 0x15A1B4u: goto label_15a1b4;
            case 0x15A1B8u: goto label_15a1b8;
            case 0x15A1BCu: goto label_15a1bc;
            case 0x15A1C0u: goto label_15a1c0;
            case 0x15A1C4u: goto label_15a1c4;
            case 0x15A1C8u: goto label_15a1c8;
            case 0x15A1CCu: goto label_15a1cc;
            case 0x15A1D0u: goto label_15a1d0;
            case 0x15A1D4u: goto label_15a1d4;
            case 0x15A1D8u: goto label_15a1d8;
            case 0x15A1DCu: goto label_15a1dc;
            case 0x15A1E0u: goto label_15a1e0;
            case 0x15A1E4u: goto label_15a1e4;
            case 0x15A1E8u: goto label_15a1e8;
            case 0x15A1ECu: goto label_15a1ec;
            case 0x15A1F0u: goto label_15a1f0;
            case 0x15A1F4u: goto label_15a1f4;
            case 0x15A1F8u: goto label_15a1f8;
            case 0x15A1FCu: goto label_15a1fc;
            case 0x15A200u: goto label_15a200;
            case 0x15A204u: goto label_15a204;
            case 0x15A208u: goto label_15a208;
            case 0x15A20Cu: goto label_15a20c;
            case 0x15A210u: goto label_15a210;
            case 0x15A214u: goto label_15a214;
            case 0x15A218u: goto label_15a218;
            case 0x15A21Cu: goto label_15a21c;
            case 0x15A220u: goto label_15a220;
            case 0x15A224u: goto label_15a224;
            case 0x15A228u: goto label_15a228;
            case 0x15A22Cu: goto label_15a22c;
            case 0x15A230u: goto label_15a230;
            case 0x15A234u: goto label_15a234;
            case 0x15A238u: goto label_15a238;
            case 0x15A23Cu: goto label_15a23c;
            case 0x15A240u: goto label_15a240;
            case 0x15A244u: goto label_15a244;
            case 0x15A248u: goto label_15a248;
            case 0x15A24Cu: goto label_15a24c;
            case 0x15A250u: goto label_15a250;
            case 0x15A254u: goto label_15a254;
            case 0x15A258u: goto label_15a258;
            case 0x15A25Cu: goto label_15a25c;
            case 0x15A260u: goto label_15a260;
            case 0x15A264u: goto label_15a264;
            case 0x15A268u: goto label_15a268;
            case 0x15A26Cu: goto label_15a26c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15A00Cu; }
            if (ctx->pc != 0x15A00Cu) { return; }
        }
    }
    ctx->pc = 0x15A00Cu;
label_15a00c:
    // 0x15a00c: 0x8e630000
    ctx->pc = 0x15a00cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15a010:
    // 0x15a010: 0x2402fffc
    ctx->pc = 0x15a010u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
label_15a014:
    // 0x15a014: 0x625024
    ctx->pc = 0x15a014u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15a018:
    // 0x15a018: 0x6a1823
    ctx->pc = 0x15a018u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_15a01c:
    // 0x15a01c: 0x254a0004
    ctx->pc = 0x15a01cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4));
label_15a020:
    // 0x15a020: 0x81490000
    ctx->pc = 0x15a020u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_15a024:
    // 0x15a024: 0x254a0001
    ctx->pc = 0x15a024u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_15a028:
    // 0x15a028: 0x91420000
    ctx->pc = 0x15a028u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_15a02c:
    // 0x15a02c: 0x254a0001
    ctx->pc = 0x15a02cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_15a030:
    // 0x15a030: 0x94a00
    ctx->pc = 0x15a030u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 8));
label_15a034:
    // 0x15a034: 0x91440000
    ctx->pc = 0x15a034u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_15a038:
    // 0x15a038: 0x1224825
    ctx->pc = 0x15a038u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_15a03c:
    // 0x15a03c: 0x254a0001
    ctx->pc = 0x15a03cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_15a040:
    // 0x15a040: 0x94a00
    ctx->pc = 0x15a040u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 8));
label_15a044:
    // 0x15a044: 0x91420000
    ctx->pc = 0x15a044u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_15a048:
    // 0x15a048: 0x358c0
    ctx->pc = 0x15a048u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 3), 3));
label_15a04c:
    // 0x15a04c: 0x1244825
    ctx->pc = 0x15a04cu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_15a050:
    // 0x15a050: 0x94a00
    ctx->pc = 0x15a050u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 8));
label_15a054:
    // 0x15a054: 0x29630020
    ctx->pc = 0x15a054u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 11), 32));
label_15a058:
    // 0x15a058: 0x1224825
    ctx->pc = 0x15a058u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_15a05c:
    // 0x15a05c: 0x14600010
label_15a060:
    if (ctx->pc == 0x15A060u) {
        ctx->pc = 0x15A060u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
        ctx->pc = 0x15A064u;
        goto label_15a064;
    }
    ctx->pc = 0x15A05Cu;
    {
        const bool branch_taken_0x15a05c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x15A060u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
        if (branch_taken_0x15a05c) {
            ctx->pc = 0x15A0A0u;
            goto label_15a0a0;
        }
    }
    ctx->pc = 0x15A064u;
label_15a064:
    // 0x15a064: 0x81490000
    ctx->pc = 0x15a064u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_15a068:
    // 0x15a068: 0x254a0001
    ctx->pc = 0x15a068u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_15a06c:
    // 0x15a06c: 0x91420000
    ctx->pc = 0x15a06cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_15a070:
    // 0x15a070: 0x254a0001
    ctx->pc = 0x15a070u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_15a074:
    // 0x15a074: 0x94a00
    ctx->pc = 0x15a074u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 8));
label_15a078:
    // 0x15a078: 0x91430000
    ctx->pc = 0x15a078u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_15a07c:
    // 0x15a07c: 0x1224825
    ctx->pc = 0x15a07cu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_15a080:
    // 0x15a080: 0x254a0001
    ctx->pc = 0x15a080u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_15a084:
    // 0x15a084: 0x94a00
    ctx->pc = 0x15a084u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 8));
label_15a088:
    // 0x15a088: 0x91420000
    ctx->pc = 0x15a088u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_15a08c:
    // 0x15a08c: 0x1234825
    ctx->pc = 0x15a08cu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_15a090:
    // 0x15a090: 0x256bffe0
    ctx->pc = 0x15a090u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967264));
label_15a094:
    // 0x15a094: 0x94a00
    ctx->pc = 0x15a094u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 8));
label_15a098:
    // 0x15a098: 0x254a0001
    ctx->pc = 0x15a098u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_15a09c:
    // 0x15a09c: 0x1224825
    ctx->pc = 0x15a09cu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_15a0a0:
    // 0x15a0a0: 0x1691804
    ctx->pc = 0x15a0a0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 11) & 0x1F));
label_15a0a4:
    // 0x15a0a4: 0x39620000
    ctx->pc = 0x15a0a4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 11), 0));
label_15a0a8:
    // 0x15a0a8: 0x120602d
    ctx->pc = 0x15a0a8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_15a0ac:
    // 0x15a0ac: 0x81490000
    ctx->pc = 0x15a0acu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_15a0b0:
    // 0x15a0b0: 0x254a0001
    ctx->pc = 0x15a0b0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_15a0b4:
    // 0x15a0b4: 0x62600b
    ctx->pc = 0x15a0b4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 12, GPR_U32(ctx, 3));
label_15a0b8:
    // 0x15a0b8: 0x91420000
    ctx->pc = 0x15a0b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_15a0bc:
    // 0x15a0bc: 0x254a0001
    ctx->pc = 0x15a0bcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_15a0c0:
    // 0x15a0c0: 0x94a00
    ctx->pc = 0x15a0c0u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 8));
label_15a0c4:
    // 0x15a0c4: 0x91430000
    ctx->pc = 0x15a0c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_15a0c8:
    // 0x15a0c8: 0x1224825
    ctx->pc = 0x15a0c8u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_15a0cc:
    // 0x15a0cc: 0x254a0001
    ctx->pc = 0x15a0ccu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_15a0d0:
    // 0x15a0d0: 0x94a00
    ctx->pc = 0x15a0d0u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 8));
label_15a0d4:
    // 0x15a0d4: 0x91420000
    ctx->pc = 0x15a0d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_15a0d8:
    // 0x15a0d8: 0x1234825
    ctx->pc = 0x15a0d8u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_15a0dc:
    // 0x15a0dc: 0x29640007
    ctx->pc = 0x15a0dcu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 11), 7));
label_15a0e0:
    // 0x15a0e0: 0x94a00
    ctx->pc = 0x15a0e0u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 8));
label_15a0e4:
    // 0x15a0e4: 0x254a0001
    ctx->pc = 0x15a0e4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_15a0e8:
    // 0x15a0e8: 0x1480001d
label_15a0ec:
    if (ctx->pc == 0x15A0ECu) {
        ctx->pc = 0x15A0ECu;
        SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->pc = 0x15A0F0u;
        goto label_15a0f0;
    }
    ctx->pc = 0x15A0E8u;
    {
        const bool branch_taken_0x15a0e8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x15A0ECu;
        SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        if (branch_taken_0x15a0e8) {
            ctx->pc = 0x15A160u;
            goto label_15a160;
        }
    }
    ctx->pc = 0x15A0F0u;
label_15a0f0:
    // 0x15a0f0: 0x256bfff9
    ctx->pc = 0x15a0f0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967289));
label_15a0f4:
    // 0x15a0f4: 0x11600008
label_15a0f8:
    if (ctx->pc == 0x15A0F8u) {
        ctx->pc = 0x15A0F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x15A0FCu;
        goto label_15a0fc;
    }
    ctx->pc = 0x15A0F4u;
    {
        const bool branch_taken_0x15a0f4 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A0F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 25));
        if (branch_taken_0x15a0f4) {
            ctx->pc = 0x15A118u;
            goto label_15a118;
        }
    }
    ctx->pc = 0x15A0FCu;
label_15a0fc:
    // 0x15a0fc: 0x4b1023
    ctx->pc = 0x15a0fcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_15a100:
    // 0x15a100: 0x491006
    ctx->pc = 0x15a100u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
label_15a104:
    // 0x15a104: 0x1826025
    ctx->pc = 0x15a104u;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_15a108:
    // 0x15a108: 0xc21c2
    ctx->pc = 0x15a108u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 12), 7));
label_15a10c:
    // 0x15a10c: 0x10000004
label_15a110:
    if (ctx->pc == 0x15A110u) {
        ctx->pc = 0x15A110u;
        SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 11) & 0x1F));
        ctx->pc = 0x15A114u;
        goto label_15a114;
    }
    ctx->pc = 0x15A10Cu;
    {
        const bool branch_taken_0x15a10c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A110u;
        SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 11) & 0x1F));
        if (branch_taken_0x15a10c) {
            ctx->pc = 0x15A120u;
            goto label_15a120;
        }
    }
    ctx->pc = 0x15A114u;
label_15a114:
    // 0x15a114: 0x0
    ctx->pc = 0x15a114u;
    // NOP
label_15a118:
    // 0x15a118: 0xc21c2
    ctx->pc = 0x15a118u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 12), 7));
label_15a11c:
    // 0x15a11c: 0x120602d
    ctx->pc = 0x15a11cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_15a120:
    // 0x15a120: 0x81490000
    ctx->pc = 0x15a120u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_15a124:
    // 0x15a124: 0x254a0001
    ctx->pc = 0x15a124u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_15a128:
    // 0x15a128: 0x91420000
    ctx->pc = 0x15a128u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_15a12c:
    // 0x15a12c: 0x254a0001
    ctx->pc = 0x15a12cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_15a130:
    // 0x15a130: 0x94a00
    ctx->pc = 0x15a130u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 8));
label_15a134:
    // 0x15a134: 0x91430000
    ctx->pc = 0x15a134u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_15a138:
    // 0x15a138: 0x1224825
    ctx->pc = 0x15a138u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_15a13c:
    // 0x15a13c: 0x254a0001
    ctx->pc = 0x15a13cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_15a140:
    // 0x15a140: 0x94a00
    ctx->pc = 0x15a140u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 8));
label_15a144:
    // 0x15a144: 0x91420000
    ctx->pc = 0x15a144u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_15a148:
    // 0x15a148: 0x1234825
    ctx->pc = 0x15a148u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_15a14c:
    // 0x15a14c: 0x254a0001
    ctx->pc = 0x15a14cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_15a150:
    // 0x15a150: 0x94a00
    ctx->pc = 0x15a150u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 8));
label_15a154:
    // 0x15a154: 0x10000005
label_15a158:
    if (ctx->pc == 0x15A158u) {
        ctx->pc = 0x15A158u;
        SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->pc = 0x15A15Cu;
        goto label_15a15c;
    }
    ctx->pc = 0x15A154u;
    {
        const bool branch_taken_0x15a154 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A158u;
        SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        if (branch_taken_0x15a154) {
            ctx->pc = 0x15A16Cu;
            goto label_15a16c;
        }
    }
    ctx->pc = 0x15A15Cu;
label_15a15c:
    // 0x15a15c: 0x0
    ctx->pc = 0x15a15cu;
    // NOP
label_15a160:
    // 0x15a160: 0xc21c2
    ctx->pc = 0x15a160u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 12), 7));
label_15a164:
    // 0x15a164: 0xc6640
    ctx->pc = 0x15a164u;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 12), 25));
label_15a168:
    // 0x15a168: 0x256b0019
    ctx->pc = 0x15a168u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 25));
label_15a16c:
    // 0x15a16c: 0x3088003f
    ctx->pc = 0x15a16cu;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 4), 63));
label_15a170:
    // 0x15a170: 0x42182
    ctx->pc = 0x15a170u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 6));
label_15a174:
    // 0x15a174: 0x3087003f
    ctx->pc = 0x15a174u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 4), 63));
label_15a178:
    // 0x15a178: 0x421c2
    ctx->pc = 0x15a178u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 7));
label_15a17c:
    // 0x15a17c: 0x3086003f
    ctx->pc = 0x15a17cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 4), 63));
label_15a180:
    // 0x15a180: 0x42182
    ctx->pc = 0x15a180u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 6));
label_15a184:
    // 0x15a184: 0x41142
    ctx->pc = 0x15a184u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 5));
label_15a188:
    // 0x15a188: 0x3083001f
    ctx->pc = 0x15a188u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 31));
label_15a18c:
    // 0x15a18c: 0x2405001f
    ctx->pc = 0x15a18cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 31));
label_15a190:
    // 0x15a190: 0xc27c2
    ctx->pc = 0x15a190u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 12), 31));
label_15a194:
    // 0x15a194: 0xae02001c
    ctx->pc = 0x15a194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_15a198:
    // 0x15a198: 0xae08002c
    ctx->pc = 0x15a198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 8));
label_15a19c:
    // 0x15a19c: 0xae070028
    ctx->pc = 0x15a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 7));
label_15a1a0:
    // 0x15a1a0: 0xae060024
    ctx->pc = 0x15a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
label_15a1a4:
    // 0x15a1a4: 0xae030020
    ctx->pc = 0x15a1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_15a1a8:
    // 0x15a1a8: 0x15650005
label_15a1ac:
    if (ctx->pc == 0x15A1ACu) {
        ctx->pc = 0x15A1ACu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 4));
        ctx->pc = 0x15A1B0u;
        goto label_15a1b0;
    }
    ctx->pc = 0x15A1A8u;
    {
        const bool branch_taken_0x15a1a8 = (GPR_U32(ctx, 11) != GPR_U32(ctx, 5));
        ctx->pc = 0x15A1ACu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 4));
        if (branch_taken_0x15a1a8) {
            ctx->pc = 0x15A1C0u;
            goto label_15a1c0;
        }
    }
    ctx->pc = 0x15A1B0u;
label_15a1b0:
    // 0x15a1b0: 0x120602d
    ctx->pc = 0x15a1b0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_15a1b4:
    // 0x15a1b4: 0x582d
    ctx->pc = 0x15a1b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a1b8:
    // 0x15a1b8: 0x10000003
label_15a1bc:
    if (ctx->pc == 0x15A1BCu) {
        ctx->pc = 0x15A1BCu;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4));
        ctx->pc = 0x15A1C0u;
        goto label_15a1c0;
    }
    ctx->pc = 0x15A1B8u;
    {
        const bool branch_taken_0x15a1b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A1BCu;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4));
        if (branch_taken_0x15a1b8) {
            ctx->pc = 0x15A1C8u;
            goto label_15a1c8;
        }
    }
    ctx->pc = 0x15A1C0u;
label_15a1c0:
    // 0x15a1c0: 0x256b0001
    ctx->pc = 0x15a1c0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
label_15a1c4:
    // 0x15a1c4: 0xc6040
    ctx->pc = 0x15a1c4u;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 12), 1));
label_15a1c8:
    // 0x15a1c8: 0xc17c2
    ctx->pc = 0x15a1c8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 12), 31));
label_15a1cc:
    // 0x15a1cc: 0x2403001f
    ctx->pc = 0x15a1ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
label_15a1d0:
    // 0x15a1d0: 0x15630005
label_15a1d4:
    if (ctx->pc == 0x15A1D4u) {
        ctx->pc = 0x15A1D4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 652), GPR_U32(ctx, 2));
        ctx->pc = 0x15A1D8u;
        goto label_15a1d8;
    }
    ctx->pc = 0x15A1D0u;
    {
        const bool branch_taken_0x15a1d0 = (GPR_U32(ctx, 11) != GPR_U32(ctx, 3));
        ctx->pc = 0x15A1D4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 652), GPR_U32(ctx, 2));
        if (branch_taken_0x15a1d0) {
            ctx->pc = 0x15A1E8u;
            goto label_15a1e8;
        }
    }
    ctx->pc = 0x15A1D8u;
label_15a1d8:
    // 0x15a1d8: 0x582d
    ctx->pc = 0x15a1d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a1dc:
    // 0x15a1dc: 0x10000003
label_15a1e0:
    if (ctx->pc == 0x15A1E0u) {
        ctx->pc = 0x15A1E0u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4));
        ctx->pc = 0x15A1E4u;
        goto label_15a1e4;
    }
    ctx->pc = 0x15A1DCu;
    {
        const bool branch_taken_0x15a1dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A1E0u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4));
        if (branch_taken_0x15a1dc) {
            ctx->pc = 0x15A1ECu;
            goto label_15a1ec;
        }
    }
    ctx->pc = 0x15A1E4u;
label_15a1e4:
    // 0x15a1e4: 0x0
    ctx->pc = 0x15a1e4u;
    // NOP
label_15a1e8:
    // 0x15a1e8: 0x256b0001
    ctx->pc = 0x15a1e8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
label_15a1ec:
    // 0x15a1ec: 0x31620007
    ctx->pc = 0x15a1ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 11), 7));
label_15a1f0:
    // 0x15a1f0: 0x8e230348
    ctx->pc = 0x15a1f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 840)));
label_15a1f4:
    // 0x15a1f4: 0x1622823
    ctx->pc = 0x15a1f4u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_15a1f8:
    // 0x15a1f8: 0xae220350
    ctx->pc = 0x15a1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 848), GPR_U32(ctx, 2));
label_15a1fc:
    // 0x15a1fc: 0x24a50007
    ctx->pc = 0x15a1fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7));
label_15a200:
    // 0x15a200: 0x3a0382d
    ctx->pc = 0x15a200u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15a204:
    // 0x15a204: 0x528c3
    ctx->pc = 0x15a204u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_15a208:
    // 0x15a208: 0x260202d
    ctx->pc = 0x15a208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15a20c:
    // 0x15a20c: 0x1452821
    ctx->pc = 0x15a20cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_15a210:
    // 0x15a210: 0x260302d
    ctx->pc = 0x15a210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15a214:
    // 0x15a214: 0x24a5fff8
    ctx->pc = 0x15a214u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967288));
label_15a218:
    // 0x15a218: 0xc0501f8
label_15a21c:
    if (ctx->pc == 0x15A21Cu) {
        ctx->pc = 0x15A21Cu;
        SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->pc = 0x15A220u;
        goto label_15a220;
    }
    ctx->pc = 0x15A218u;
    SET_GPR_U32(ctx, 31, 0x15A220u);
    ctx->pc = 0x15A21Cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->pc = 0x1407E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001407E0_0x1407e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A220u; }
    }
    if (ctx->pc != 0x15A220u) { return; }
    ctx->pc = 0x15A220u;
label_15a220:
    // 0x15a220: 0x8e430000
    ctx->pc = 0x15a220u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15a224:
    // 0x15a224: 0x260302d
    ctx->pc = 0x15a224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15a228:
    // 0x15a228: 0x240202d
    ctx->pc = 0x15a228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15a22c:
    // 0x15a22c: 0x8c620020
    ctx->pc = 0x15a22cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_15a230:
    // 0x15a230: 0x40f809
label_15a234:
    if (ctx->pc == 0x15A234u) {
        ctx->pc = 0x15A234u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15A238u;
        goto label_15a238;
    }
    ctx->pc = 0x15A230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15A238u);
        ctx->pc = 0x15A234u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159FB0u: goto label_159fb0;
            case 0x159FB4u: goto label_159fb4;
            case 0x159FB8u: goto label_159fb8;
            case 0x159FBCu: goto label_159fbc;
            case 0x159FC0u: goto label_159fc0;
            case 0x159FC4u: goto label_159fc4;
            case 0x159FC8u: goto label_159fc8;
            case 0x159FCCu: goto label_159fcc;
            case 0x159FD0u: goto label_159fd0;
            case 0x159FD4u: goto label_159fd4;
            case 0x159FD8u: goto label_159fd8;
            case 0x159FDCu: goto label_159fdc;
            case 0x159FE0u: goto label_159fe0;
            case 0x159FE4u: goto label_159fe4;
            case 0x159FE8u: goto label_159fe8;
            case 0x159FECu: goto label_159fec;
            case 0x159FF0u: goto label_159ff0;
            case 0x159FF4u: goto label_159ff4;
            case 0x159FF8u: goto label_159ff8;
            case 0x159FFCu: goto label_159ffc;
            case 0x15A000u: goto label_15a000;
            case 0x15A004u: goto label_15a004;
            case 0x15A008u: goto label_15a008;
            case 0x15A00Cu: goto label_15a00c;
            case 0x15A010u: goto label_15a010;
            case 0x15A014u: goto label_15a014;
            case 0x15A018u: goto label_15a018;
            case 0x15A01Cu: goto label_15a01c;
            case 0x15A020u: goto label_15a020;
            case 0x15A024u: goto label_15a024;
            case 0x15A028u: goto label_15a028;
            case 0x15A02Cu: goto label_15a02c;
            case 0x15A030u: goto label_15a030;
            case 0x15A034u: goto label_15a034;
            case 0x15A038u: goto label_15a038;
            case 0x15A03Cu: goto label_15a03c;
            case 0x15A040u: goto label_15a040;
            case 0x15A044u: goto label_15a044;
            case 0x15A048u: goto label_15a048;
            case 0x15A04Cu: goto label_15a04c;
            case 0x15A050u: goto label_15a050;
            case 0x15A054u: goto label_15a054;
            case 0x15A058u: goto label_15a058;
            case 0x15A05Cu: goto label_15a05c;
            case 0x15A060u: goto label_15a060;
            case 0x15A064u: goto label_15a064;
            case 0x15A068u: goto label_15a068;
            case 0x15A06Cu: goto label_15a06c;
            case 0x15A070u: goto label_15a070;
            case 0x15A074u: goto label_15a074;
            case 0x15A078u: goto label_15a078;
            case 0x15A07Cu: goto label_15a07c;
            case 0x15A080u: goto label_15a080;
            case 0x15A084u: goto label_15a084;
            case 0x15A088u: goto label_15a088;
            case 0x15A08Cu: goto label_15a08c;
            case 0x15A090u: goto label_15a090;
            case 0x15A094u: goto label_15a094;
            case 0x15A098u: goto label_15a098;
            case 0x15A09Cu: goto label_15a09c;
            case 0x15A0A0u: goto label_15a0a0;
            case 0x15A0A4u: goto label_15a0a4;
            case 0x15A0A8u: goto label_15a0a8;
            case 0x15A0ACu: goto label_15a0ac;
            case 0x15A0B0u: goto label_15a0b0;
            case 0x15A0B4u: goto label_15a0b4;
            case 0x15A0B8u: goto label_15a0b8;
            case 0x15A0BCu: goto label_15a0bc;
            case 0x15A0C0u: goto label_15a0c0;
            case 0x15A0C4u: goto label_15a0c4;
            case 0x15A0C8u: goto label_15a0c8;
            case 0x15A0CCu: goto label_15a0cc;
            case 0x15A0D0u: goto label_15a0d0;
            case 0x15A0D4u: goto label_15a0d4;
            case 0x15A0D8u: goto label_15a0d8;
            case 0x15A0DCu: goto label_15a0dc;
            case 0x15A0E0u: goto label_15a0e0;
            case 0x15A0E4u: goto label_15a0e4;
            case 0x15A0E8u: goto label_15a0e8;
            case 0x15A0ECu: goto label_15a0ec;
            case 0x15A0F0u: goto label_15a0f0;
            case 0x15A0F4u: goto label_15a0f4;
            case 0x15A0F8u: goto label_15a0f8;
            case 0x15A0FCu: goto label_15a0fc;
            case 0x15A100u: goto label_15a100;
            case 0x15A104u: goto label_15a104;
            case 0x15A108u: goto label_15a108;
            case 0x15A10Cu: goto label_15a10c;
            case 0x15A110u: goto label_15a110;
            case 0x15A114u: goto label_15a114;
            case 0x15A118u: goto label_15a118;
            case 0x15A11Cu: goto label_15a11c;
            case 0x15A120u: goto label_15a120;
            case 0x15A124u: goto label_15a124;
            case 0x15A128u: goto label_15a128;
            case 0x15A12Cu: goto label_15a12c;
            case 0x15A130u: goto label_15a130;
            case 0x15A134u: goto label_15a134;
            case 0x15A138u: goto label_15a138;
            case 0x15A13Cu: goto label_15a13c;
            case 0x15A140u: goto label_15a140;
            case 0x15A144u: goto label_15a144;
            case 0x15A148u: goto label_15a148;
            case 0x15A14Cu: goto label_15a14c;
            case 0x15A150u: goto label_15a150;
            case 0x15A154u: goto label_15a154;
            case 0x15A158u: goto label_15a158;
            case 0x15A15Cu: goto label_15a15c;
            case 0x15A160u: goto label_15a160;
            case 0x15A164u: goto label_15a164;
            case 0x15A168u: goto label_15a168;
            case 0x15A16Cu: goto label_15a16c;
            case 0x15A170u: goto label_15a170;
            case 0x15A174u: goto label_15a174;
            case 0x15A178u: goto label_15a178;
            case 0x15A17Cu: goto label_15a17c;
            case 0x15A180u: goto label_15a180;
            case 0x15A184u: goto label_15a184;
            case 0x15A188u: goto label_15a188;
            case 0x15A18Cu: goto label_15a18c;
            case 0x15A190u: goto label_15a190;
            case 0x15A194u: goto label_15a194;
            case 0x15A198u: goto label_15a198;
            case 0x15A19Cu: goto label_15a19c;
            case 0x15A1A0u: goto label_15a1a0;
            case 0x15A1A4u: goto label_15a1a4;
            case 0x15A1A8u: goto label_15a1a8;
            case 0x15A1ACu: goto label_15a1ac;
            case 0x15A1B0u: goto label_15a1b0;
            case 0x15A1B4u: goto label_15a1b4;
            case 0x15A1B8u: goto label_15a1b8;
            case 0x15A1BCu: goto label_15a1bc;
            case 0x15A1C0u: goto label_15a1c0;
            case 0x15A1C4u: goto label_15a1c4;
            case 0x15A1C8u: goto label_15a1c8;
            case 0x15A1CCu: goto label_15a1cc;
            case 0x15A1D0u: goto label_15a1d0;
            case 0x15A1D4u: goto label_15a1d4;
            case 0x15A1D8u: goto label_15a1d8;
            case 0x15A1DCu: goto label_15a1dc;
            case 0x15A1E0u: goto label_15a1e0;
            case 0x15A1E4u: goto label_15a1e4;
            case 0x15A1E8u: goto label_15a1e8;
            case 0x15A1ECu: goto label_15a1ec;
            case 0x15A1F0u: goto label_15a1f0;
            case 0x15A1F4u: goto label_15a1f4;
            case 0x15A1F8u: goto label_15a1f8;
            case 0x15A1FCu: goto label_15a1fc;
            case 0x15A200u: goto label_15a200;
            case 0x15A204u: goto label_15a204;
            case 0x15A208u: goto label_15a208;
            case 0x15A20Cu: goto label_15a20c;
            case 0x15A210u: goto label_15a210;
            case 0x15A214u: goto label_15a214;
            case 0x15A218u: goto label_15a218;
            case 0x15A21Cu: goto label_15a21c;
            case 0x15A220u: goto label_15a220;
            case 0x15A224u: goto label_15a224;
            case 0x15A228u: goto label_15a228;
            case 0x15A22Cu: goto label_15a22c;
            case 0x15A230u: goto label_15a230;
            case 0x15A234u: goto label_15a234;
            case 0x15A238u: goto label_15a238;
            case 0x15A23Cu: goto label_15a23c;
            case 0x15A240u: goto label_15a240;
            case 0x15A244u: goto label_15a244;
            case 0x15A248u: goto label_15a248;
            case 0x15A24Cu: goto label_15a24c;
            case 0x15A250u: goto label_15a250;
            case 0x15A254u: goto label_15a254;
            case 0x15A258u: goto label_15a258;
            case 0x15A25Cu: goto label_15a25c;
            case 0x15A260u: goto label_15a260;
            case 0x15A264u: goto label_15a264;
            case 0x15A268u: goto label_15a268;
            case 0x15A26Cu: goto label_15a26c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15A238u; }
            if (ctx->pc != 0x15A238u) { return; }
        }
    }
    ctx->pc = 0x15A238u;
label_15a238:
    // 0x15a238: 0x8e430000
    ctx->pc = 0x15a238u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15a23c:
    // 0x15a23c: 0x240202d
    ctx->pc = 0x15a23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15a240:
    // 0x15a240: 0x24050001
    ctx->pc = 0x15a240u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_15a244:
    // 0x15a244: 0x8c62001c
    ctx->pc = 0x15a244u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_15a248:
    // 0x15a248: 0x40f809
label_15a24c:
    if (ctx->pc == 0x15A24Cu) {
        ctx->pc = 0x15A24Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15A250u;
        goto label_15a250;
    }
    ctx->pc = 0x15A248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15A250u);
        ctx->pc = 0x15A24Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159FB0u: goto label_159fb0;
            case 0x159FB4u: goto label_159fb4;
            case 0x159FB8u: goto label_159fb8;
            case 0x159FBCu: goto label_159fbc;
            case 0x159FC0u: goto label_159fc0;
            case 0x159FC4u: goto label_159fc4;
            case 0x159FC8u: goto label_159fc8;
            case 0x159FCCu: goto label_159fcc;
            case 0x159FD0u: goto label_159fd0;
            case 0x159FD4u: goto label_159fd4;
            case 0x159FD8u: goto label_159fd8;
            case 0x159FDCu: goto label_159fdc;
            case 0x159FE0u: goto label_159fe0;
            case 0x159FE4u: goto label_159fe4;
            case 0x159FE8u: goto label_159fe8;
            case 0x159FECu: goto label_159fec;
            case 0x159FF0u: goto label_159ff0;
            case 0x159FF4u: goto label_159ff4;
            case 0x159FF8u: goto label_159ff8;
            case 0x159FFCu: goto label_159ffc;
            case 0x15A000u: goto label_15a000;
            case 0x15A004u: goto label_15a004;
            case 0x15A008u: goto label_15a008;
            case 0x15A00Cu: goto label_15a00c;
            case 0x15A010u: goto label_15a010;
            case 0x15A014u: goto label_15a014;
            case 0x15A018u: goto label_15a018;
            case 0x15A01Cu: goto label_15a01c;
            case 0x15A020u: goto label_15a020;
            case 0x15A024u: goto label_15a024;
            case 0x15A028u: goto label_15a028;
            case 0x15A02Cu: goto label_15a02c;
            case 0x15A030u: goto label_15a030;
            case 0x15A034u: goto label_15a034;
            case 0x15A038u: goto label_15a038;
            case 0x15A03Cu: goto label_15a03c;
            case 0x15A040u: goto label_15a040;
            case 0x15A044u: goto label_15a044;
            case 0x15A048u: goto label_15a048;
            case 0x15A04Cu: goto label_15a04c;
            case 0x15A050u: goto label_15a050;
            case 0x15A054u: goto label_15a054;
            case 0x15A058u: goto label_15a058;
            case 0x15A05Cu: goto label_15a05c;
            case 0x15A060u: goto label_15a060;
            case 0x15A064u: goto label_15a064;
            case 0x15A068u: goto label_15a068;
            case 0x15A06Cu: goto label_15a06c;
            case 0x15A070u: goto label_15a070;
            case 0x15A074u: goto label_15a074;
            case 0x15A078u: goto label_15a078;
            case 0x15A07Cu: goto label_15a07c;
            case 0x15A080u: goto label_15a080;
            case 0x15A084u: goto label_15a084;
            case 0x15A088u: goto label_15a088;
            case 0x15A08Cu: goto label_15a08c;
            case 0x15A090u: goto label_15a090;
            case 0x15A094u: goto label_15a094;
            case 0x15A098u: goto label_15a098;
            case 0x15A09Cu: goto label_15a09c;
            case 0x15A0A0u: goto label_15a0a0;
            case 0x15A0A4u: goto label_15a0a4;
            case 0x15A0A8u: goto label_15a0a8;
            case 0x15A0ACu: goto label_15a0ac;
            case 0x15A0B0u: goto label_15a0b0;
            case 0x15A0B4u: goto label_15a0b4;
            case 0x15A0B8u: goto label_15a0b8;
            case 0x15A0BCu: goto label_15a0bc;
            case 0x15A0C0u: goto label_15a0c0;
            case 0x15A0C4u: goto label_15a0c4;
            case 0x15A0C8u: goto label_15a0c8;
            case 0x15A0CCu: goto label_15a0cc;
            case 0x15A0D0u: goto label_15a0d0;
            case 0x15A0D4u: goto label_15a0d4;
            case 0x15A0D8u: goto label_15a0d8;
            case 0x15A0DCu: goto label_15a0dc;
            case 0x15A0E0u: goto label_15a0e0;
            case 0x15A0E4u: goto label_15a0e4;
            case 0x15A0E8u: goto label_15a0e8;
            case 0x15A0ECu: goto label_15a0ec;
            case 0x15A0F0u: goto label_15a0f0;
            case 0x15A0F4u: goto label_15a0f4;
            case 0x15A0F8u: goto label_15a0f8;
            case 0x15A0FCu: goto label_15a0fc;
            case 0x15A100u: goto label_15a100;
            case 0x15A104u: goto label_15a104;
            case 0x15A108u: goto label_15a108;
            case 0x15A10Cu: goto label_15a10c;
            case 0x15A110u: goto label_15a110;
            case 0x15A114u: goto label_15a114;
            case 0x15A118u: goto label_15a118;
            case 0x15A11Cu: goto label_15a11c;
            case 0x15A120u: goto label_15a120;
            case 0x15A124u: goto label_15a124;
            case 0x15A128u: goto label_15a128;
            case 0x15A12Cu: goto label_15a12c;
            case 0x15A130u: goto label_15a130;
            case 0x15A134u: goto label_15a134;
            case 0x15A138u: goto label_15a138;
            case 0x15A13Cu: goto label_15a13c;
            case 0x15A140u: goto label_15a140;
            case 0x15A144u: goto label_15a144;
            case 0x15A148u: goto label_15a148;
            case 0x15A14Cu: goto label_15a14c;
            case 0x15A150u: goto label_15a150;
            case 0x15A154u: goto label_15a154;
            case 0x15A158u: goto label_15a158;
            case 0x15A15Cu: goto label_15a15c;
            case 0x15A160u: goto label_15a160;
            case 0x15A164u: goto label_15a164;
            case 0x15A168u: goto label_15a168;
            case 0x15A16Cu: goto label_15a16c;
            case 0x15A170u: goto label_15a170;
            case 0x15A174u: goto label_15a174;
            case 0x15A178u: goto label_15a178;
            case 0x15A17Cu: goto label_15a17c;
            case 0x15A180u: goto label_15a180;
            case 0x15A184u: goto label_15a184;
            case 0x15A188u: goto label_15a188;
            case 0x15A18Cu: goto label_15a18c;
            case 0x15A190u: goto label_15a190;
            case 0x15A194u: goto label_15a194;
            case 0x15A198u: goto label_15a198;
            case 0x15A19Cu: goto label_15a19c;
            case 0x15A1A0u: goto label_15a1a0;
            case 0x15A1A4u: goto label_15a1a4;
            case 0x15A1A8u: goto label_15a1a8;
            case 0x15A1ACu: goto label_15a1ac;
            case 0x15A1B0u: goto label_15a1b0;
            case 0x15A1B4u: goto label_15a1b4;
            case 0x15A1B8u: goto label_15a1b8;
            case 0x15A1BCu: goto label_15a1bc;
            case 0x15A1C0u: goto label_15a1c0;
            case 0x15A1C4u: goto label_15a1c4;
            case 0x15A1C8u: goto label_15a1c8;
            case 0x15A1CCu: goto label_15a1cc;
            case 0x15A1D0u: goto label_15a1d0;
            case 0x15A1D4u: goto label_15a1d4;
            case 0x15A1D8u: goto label_15a1d8;
            case 0x15A1DCu: goto label_15a1dc;
            case 0x15A1E0u: goto label_15a1e0;
            case 0x15A1E4u: goto label_15a1e4;
            case 0x15A1E8u: goto label_15a1e8;
            case 0x15A1ECu: goto label_15a1ec;
            case 0x15A1F0u: goto label_15a1f0;
            case 0x15A1F4u: goto label_15a1f4;
            case 0x15A1F8u: goto label_15a1f8;
            case 0x15A1FCu: goto label_15a1fc;
            case 0x15A200u: goto label_15a200;
            case 0x15A204u: goto label_15a204;
            case 0x15A208u: goto label_15a208;
            case 0x15A20Cu: goto label_15a20c;
            case 0x15A210u: goto label_15a210;
            case 0x15A214u: goto label_15a214;
            case 0x15A218u: goto label_15a218;
            case 0x15A21Cu: goto label_15a21c;
            case 0x15A220u: goto label_15a220;
            case 0x15A224u: goto label_15a224;
            case 0x15A228u: goto label_15a228;
            case 0x15A22Cu: goto label_15a22c;
            case 0x15A230u: goto label_15a230;
            case 0x15A234u: goto label_15a234;
            case 0x15A238u: goto label_15a238;
            case 0x15A23Cu: goto label_15a23c;
            case 0x15A240u: goto label_15a240;
            case 0x15A244u: goto label_15a244;
            case 0x15A248u: goto label_15a248;
            case 0x15A24Cu: goto label_15a24c;
            case 0x15A250u: goto label_15a250;
            case 0x15A254u: goto label_15a254;
            case 0x15A258u: goto label_15a258;
            case 0x15A25Cu: goto label_15a25c;
            case 0x15A260u: goto label_15a260;
            case 0x15A264u: goto label_15a264;
            case 0x15A268u: goto label_15a268;
            case 0x15A26Cu: goto label_15a26c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15A250u; }
            if (ctx->pc != 0x15A250u) { return; }
        }
    }
    ctx->pc = 0x15A250u;
label_15a250:
    // 0x15a250: 0x102d
    ctx->pc = 0x15a250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a254:
    // 0x15a254: 0xdfb00010
    ctx->pc = 0x15a254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15a258:
    // 0x15a258: 0xdfb10018
    ctx->pc = 0x15a258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15a25c:
    // 0x15a25c: 0xdfb20020
    ctx->pc = 0x15a25cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15a260:
    // 0x15a260: 0xdfb30028
    ctx->pc = 0x15a260u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15a264:
    // 0x15a264: 0xdfbf0030
    ctx->pc = 0x15a264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15a268:
    // 0x15a268: 0x3e00008
label_15a26c:
    if (ctx->pc == 0x15A26Cu) {
        ctx->pc = 0x15A26Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x15A270u;
        goto label_fallthrough_0x15a268;
    }
    ctx->pc = 0x15A268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A26Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159FB0u: goto label_159fb0;
            case 0x159FB4u: goto label_159fb4;
            case 0x159FB8u: goto label_159fb8;
            case 0x159FBCu: goto label_159fbc;
            case 0x159FC0u: goto label_159fc0;
            case 0x159FC4u: goto label_159fc4;
            case 0x159FC8u: goto label_159fc8;
            case 0x159FCCu: goto label_159fcc;
            case 0x159FD0u: goto label_159fd0;
            case 0x159FD4u: goto label_159fd4;
            case 0x159FD8u: goto label_159fd8;
            case 0x159FDCu: goto label_159fdc;
            case 0x159FE0u: goto label_159fe0;
            case 0x159FE4u: goto label_159fe4;
            case 0x159FE8u: goto label_159fe8;
            case 0x159FECu: goto label_159fec;
            case 0x159FF0u: goto label_159ff0;
            case 0x159FF4u: goto label_159ff4;
            case 0x159FF8u: goto label_159ff8;
            case 0x159FFCu: goto label_159ffc;
            case 0x15A000u: goto label_15a000;
            case 0x15A004u: goto label_15a004;
            case 0x15A008u: goto label_15a008;
            case 0x15A00Cu: goto label_15a00c;
            case 0x15A010u: goto label_15a010;
            case 0x15A014u: goto label_15a014;
            case 0x15A018u: goto label_15a018;
            case 0x15A01Cu: goto label_15a01c;
            case 0x15A020u: goto label_15a020;
            case 0x15A024u: goto label_15a024;
            case 0x15A028u: goto label_15a028;
            case 0x15A02Cu: goto label_15a02c;
            case 0x15A030u: goto label_15a030;
            case 0x15A034u: goto label_15a034;
            case 0x15A038u: goto label_15a038;
            case 0x15A03Cu: goto label_15a03c;
            case 0x15A040u: goto label_15a040;
            case 0x15A044u: goto label_15a044;
            case 0x15A048u: goto label_15a048;
            case 0x15A04Cu: goto label_15a04c;
            case 0x15A050u: goto label_15a050;
            case 0x15A054u: goto label_15a054;
            case 0x15A058u: goto label_15a058;
            case 0x15A05Cu: goto label_15a05c;
            case 0x15A060u: goto label_15a060;
            case 0x15A064u: goto label_15a064;
            case 0x15A068u: goto label_15a068;
            case 0x15A06Cu: goto label_15a06c;
            case 0x15A070u: goto label_15a070;
            case 0x15A074u: goto label_15a074;
            case 0x15A078u: goto label_15a078;
            case 0x15A07Cu: goto label_15a07c;
            case 0x15A080u: goto label_15a080;
            case 0x15A084u: goto label_15a084;
            case 0x15A088u: goto label_15a088;
            case 0x15A08Cu: goto label_15a08c;
            case 0x15A090u: goto label_15a090;
            case 0x15A094u: goto label_15a094;
            case 0x15A098u: goto label_15a098;
            case 0x15A09Cu: goto label_15a09c;
            case 0x15A0A0u: goto label_15a0a0;
            case 0x15A0A4u: goto label_15a0a4;
            case 0x15A0A8u: goto label_15a0a8;
            case 0x15A0ACu: goto label_15a0ac;
            case 0x15A0B0u: goto label_15a0b0;
            case 0x15A0B4u: goto label_15a0b4;
            case 0x15A0B8u: goto label_15a0b8;
            case 0x15A0BCu: goto label_15a0bc;
            case 0x15A0C0u: goto label_15a0c0;
            case 0x15A0C4u: goto label_15a0c4;
            case 0x15A0C8u: goto label_15a0c8;
            case 0x15A0CCu: goto label_15a0cc;
            case 0x15A0D0u: goto label_15a0d0;
            case 0x15A0D4u: goto label_15a0d4;
            case 0x15A0D8u: goto label_15a0d8;
            case 0x15A0DCu: goto label_15a0dc;
            case 0x15A0E0u: goto label_15a0e0;
            case 0x15A0E4u: goto label_15a0e4;
            case 0x15A0E8u: goto label_15a0e8;
            case 0x15A0ECu: goto label_15a0ec;
            case 0x15A0F0u: goto label_15a0f0;
            case 0x15A0F4u: goto label_15a0f4;
            case 0x15A0F8u: goto label_15a0f8;
            case 0x15A0FCu: goto label_15a0fc;
            case 0x15A100u: goto label_15a100;
            case 0x15A104u: goto label_15a104;
            case 0x15A108u: goto label_15a108;
            case 0x15A10Cu: goto label_15a10c;
            case 0x15A110u: goto label_15a110;
            case 0x15A114u: goto label_15a114;
            case 0x15A118u: goto label_15a118;
            case 0x15A11Cu: goto label_15a11c;
            case 0x15A120u: goto label_15a120;
            case 0x15A124u: goto label_15a124;
            case 0x15A128u: goto label_15a128;
            case 0x15A12Cu: goto label_15a12c;
            case 0x15A130u: goto label_15a130;
            case 0x15A134u: goto label_15a134;
            case 0x15A138u: goto label_15a138;
            case 0x15A13Cu: goto label_15a13c;
            case 0x15A140u: goto label_15a140;
            case 0x15A144u: goto label_15a144;
            case 0x15A148u: goto label_15a148;
            case 0x15A14Cu: goto label_15a14c;
            case 0x15A150u: goto label_15a150;
            case 0x15A154u: goto label_15a154;
            case 0x15A158u: goto label_15a158;
            case 0x15A15Cu: goto label_15a15c;
            case 0x15A160u: goto label_15a160;
            case 0x15A164u: goto label_15a164;
            case 0x15A168u: goto label_15a168;
            case 0x15A16Cu: goto label_15a16c;
            case 0x15A170u: goto label_15a170;
            case 0x15A174u: goto label_15a174;
            case 0x15A178u: goto label_15a178;
            case 0x15A17Cu: goto label_15a17c;
            case 0x15A180u: goto label_15a180;
            case 0x15A184u: goto label_15a184;
            case 0x15A188u: goto label_15a188;
            case 0x15A18Cu: goto label_15a18c;
            case 0x15A190u: goto label_15a190;
            case 0x15A194u: goto label_15a194;
            case 0x15A198u: goto label_15a198;
            case 0x15A19Cu: goto label_15a19c;
            case 0x15A1A0u: goto label_15a1a0;
            case 0x15A1A4u: goto label_15a1a4;
            case 0x15A1A8u: goto label_15a1a8;
            case 0x15A1ACu: goto label_15a1ac;
            case 0x15A1B0u: goto label_15a1b0;
            case 0x15A1B4u: goto label_15a1b4;
            case 0x15A1B8u: goto label_15a1b8;
            case 0x15A1BCu: goto label_15a1bc;
            case 0x15A1C0u: goto label_15a1c0;
            case 0x15A1C4u: goto label_15a1c4;
            case 0x15A1C8u: goto label_15a1c8;
            case 0x15A1CCu: goto label_15a1cc;
            case 0x15A1D0u: goto label_15a1d0;
            case 0x15A1D4u: goto label_15a1d4;
            case 0x15A1D8u: goto label_15a1d8;
            case 0x15A1DCu: goto label_15a1dc;
            case 0x15A1E0u: goto label_15a1e0;
            case 0x15A1E4u: goto label_15a1e4;
            case 0x15A1E8u: goto label_15a1e8;
            case 0x15A1ECu: goto label_15a1ec;
            case 0x15A1F0u: goto label_15a1f0;
            case 0x15A1F4u: goto label_15a1f4;
            case 0x15A1F8u: goto label_15a1f8;
            case 0x15A1FCu: goto label_15a1fc;
            case 0x15A200u: goto label_15a200;
            case 0x15A204u: goto label_15a204;
            case 0x15A208u: goto label_15a208;
            case 0x15A20Cu: goto label_15a20c;
            case 0x15A210u: goto label_15a210;
            case 0x15A214u: goto label_15a214;
            case 0x15A218u: goto label_15a218;
            case 0x15A21Cu: goto label_15a21c;
            case 0x15A220u: goto label_15a220;
            case 0x15A224u: goto label_15a224;
            case 0x15A228u: goto label_15a228;
            case 0x15A22Cu: goto label_15a22c;
            case 0x15A230u: goto label_15a230;
            case 0x15A234u: goto label_15a234;
            case 0x15A238u: goto label_15a238;
            case 0x15A23Cu: goto label_15a23c;
            case 0x15A240u: goto label_15a240;
            case 0x15A244u: goto label_15a244;
            case 0x15A248u: goto label_15a248;
            case 0x15A24Cu: goto label_15a24c;
            case 0x15A250u: goto label_15a250;
            case 0x15A254u: goto label_15a254;
            case 0x15A258u: goto label_15a258;
            case 0x15A25Cu: goto label_15a25c;
            case 0x15A260u: goto label_15a260;
            case 0x15A264u: goto label_15a264;
            case 0x15A268u: goto label_15a268;
            case 0x15A26Cu: goto label_15a26c;
            default: break;
        }
        return;
    }
label_fallthrough_0x15a268:
    ctx->pc = 0x15A270u;
}
