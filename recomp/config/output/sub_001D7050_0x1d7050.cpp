#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7050
// Address: 0x1d7050 - 0x1d7260
void sub_001D7050_0x1d7050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7050u;

label_1d7050:
    // 0x1d7050: 0x27bdffb0
    ctx->pc = 0x1d7050u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d7054:
    // 0x1d7054: 0xffbf0010
    ctx->pc = 0x1d7054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d7058:
    // 0x1d7058: 0x7fb00000
    ctx->pc = 0x1d7058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d705c:
    // 0x1d705c: 0x80802d
    ctx->pc = 0x1d705cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d7060:
    // 0x1d7060: 0xc076264
label_1d7064:
    if (ctx->pc == 0x1D7064u) {
        ctx->pc = 0x1D7064u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1D7068u;
        goto label_1d7068;
    }
    ctx->pc = 0x1D7060u;
    SET_GPR_U32(ctx, 31, 0x1D7068u);
    ctx->pc = 0x1D7064u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1D8990u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8990_0x1d8990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7068u; }
    }
    if (ctx->pc != 0x1D7068u) { return; }
    ctx->pc = 0x1D7068u;
label_1d7068:
    // 0x1d7068: 0x2143c
    ctx->pc = 0x1d7068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1d706c:
    // 0x1d706c: 0x2143f
    ctx->pc = 0x1d706cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1d7070:
    // 0x1d7070: 0x4410003
label_1d7074:
    if (ctx->pc == 0x1D7074u) {
        ctx->pc = 0x1D7078u;
        goto label_1d7078;
    }
    ctx->pc = 0x1D7070u;
    {
        const bool branch_taken_0x1d7070 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1d7070) {
            ctx->pc = 0x1D7080u;
            goto label_1d7080;
        }
    }
    ctx->pc = 0x1D7078u;
label_1d7078:
    // 0x1d7078: 0x10000075
label_1d707c:
    if (ctx->pc == 0x1D707Cu) {
        ctx->pc = 0x1D7080u;
        goto label_1d7080;
    }
    ctx->pc = 0x1D7078u;
    {
        const bool branch_taken_0x1d7078 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d7078) {
            ctx->pc = 0x1D7250u;
            goto label_1d7250;
        }
    }
    ctx->pc = 0x1D7080u;
label_1d7080:
    // 0x1d7080: 0x8fa30020
    ctx->pc = 0x1d7080u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1d7084:
    // 0x1d7084: 0xae030004
    ctx->pc = 0x1d7084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1d7088:
    // 0x1d7088: 0x8fa30024
    ctx->pc = 0x1d7088u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1d708c:
    // 0x1d708c: 0xae030000
    ctx->pc = 0x1d708cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1d7090:
    // 0x1d7090: 0x87a30028
    ctx->pc = 0x1d7090u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 40)));
label_1d7094:
    // 0x1d7094: 0x2c61000a
    ctx->pc = 0x1d7094u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 10));
label_1d7098:
    // 0x1d7098: 0x10200025
label_1d709c:
    if (ctx->pc == 0x1D709Cu) {
        ctx->pc = 0x1D709Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
        ctx->pc = 0x1D70A0u;
        goto label_1d70a0;
    }
    ctx->pc = 0x1D7098u;
    {
        const bool branch_taken_0x1d7098 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D709Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
        if (branch_taken_0x1d7098) {
            ctx->pc = 0x1D7130u;
            goto label_1d7130;
        }
    }
    ctx->pc = 0x1D70A0u;
label_1d70a0:
    // 0x1d70a0: 0x31880
    ctx->pc = 0x1d70a0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1d70a4:
    // 0x1d70a4: 0x24847c70
    ctx->pc = 0x1d70a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31856));
label_1d70a8:
    // 0x1d70a8: 0x641821
    ctx->pc = 0x1d70a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d70ac:
    // 0x1d70ac: 0x8c630000
    ctx->pc = 0x1d70acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d70b0:
    // 0x1d70b0: 0x600008
label_1d70b4:
    if (ctx->pc == 0x1D70B4u) {
        ctx->pc = 0x1D70B8u;
        goto label_1d70b8;
    }
    ctx->pc = 0x1D70B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7050u: goto label_1d7050;
            case 0x1D7054u: goto label_1d7054;
            case 0x1D7058u: goto label_1d7058;
            case 0x1D705Cu: goto label_1d705c;
            case 0x1D7060u: goto label_1d7060;
            case 0x1D7064u: goto label_1d7064;
            case 0x1D7068u: goto label_1d7068;
            case 0x1D706Cu: goto label_1d706c;
            case 0x1D7070u: goto label_1d7070;
            case 0x1D7074u: goto label_1d7074;
            case 0x1D7078u: goto label_1d7078;
            case 0x1D707Cu: goto label_1d707c;
            case 0x1D7080u: goto label_1d7080;
            case 0x1D7084u: goto label_1d7084;
            case 0x1D7088u: goto label_1d7088;
            case 0x1D708Cu: goto label_1d708c;
            case 0x1D7090u: goto label_1d7090;
            case 0x1D7094u: goto label_1d7094;
            case 0x1D7098u: goto label_1d7098;
            case 0x1D709Cu: goto label_1d709c;
            case 0x1D70A0u: goto label_1d70a0;
            case 0x1D70A4u: goto label_1d70a4;
            case 0x1D70A8u: goto label_1d70a8;
            case 0x1D70ACu: goto label_1d70ac;
            case 0x1D70B0u: goto label_1d70b0;
            case 0x1D70B4u: goto label_1d70b4;
            case 0x1D70B8u: goto label_1d70b8;
            case 0x1D70BCu: goto label_1d70bc;
            case 0x1D70C0u: goto label_1d70c0;
            case 0x1D70C4u: goto label_1d70c4;
            case 0x1D70C8u: goto label_1d70c8;
            case 0x1D70CCu: goto label_1d70cc;
            case 0x1D70D0u: goto label_1d70d0;
            case 0x1D70D4u: goto label_1d70d4;
            case 0x1D70D8u: goto label_1d70d8;
            case 0x1D70DCu: goto label_1d70dc;
            case 0x1D70E0u: goto label_1d70e0;
            case 0x1D70E4u: goto label_1d70e4;
            case 0x1D70E8u: goto label_1d70e8;
            case 0x1D70ECu: goto label_1d70ec;
            case 0x1D70F0u: goto label_1d70f0;
            case 0x1D70F4u: goto label_1d70f4;
            case 0x1D70F8u: goto label_1d70f8;
            case 0x1D70FCu: goto label_1d70fc;
            case 0x1D7100u: goto label_1d7100;
            case 0x1D7104u: goto label_1d7104;
            case 0x1D7108u: goto label_1d7108;
            case 0x1D710Cu: goto label_1d710c;
            case 0x1D7110u: goto label_1d7110;
            case 0x1D7114u: goto label_1d7114;
            case 0x1D7118u: goto label_1d7118;
            case 0x1D711Cu: goto label_1d711c;
            case 0x1D7120u: goto label_1d7120;
            case 0x1D7124u: goto label_1d7124;
            case 0x1D7128u: goto label_1d7128;
            case 0x1D712Cu: goto label_1d712c;
            case 0x1D7130u: goto label_1d7130;
            case 0x1D7134u: goto label_1d7134;
            case 0x1D7138u: goto label_1d7138;
            case 0x1D713Cu: goto label_1d713c;
            case 0x1D7140u: goto label_1d7140;
            case 0x1D7144u: goto label_1d7144;
            case 0x1D7148u: goto label_1d7148;
            case 0x1D714Cu: goto label_1d714c;
            case 0x1D7150u: goto label_1d7150;
            case 0x1D7154u: goto label_1d7154;
            case 0x1D7158u: goto label_1d7158;
            case 0x1D715Cu: goto label_1d715c;
            case 0x1D7160u: goto label_1d7160;
            case 0x1D7164u: goto label_1d7164;
            case 0x1D7168u: goto label_1d7168;
            case 0x1D716Cu: goto label_1d716c;
            case 0x1D7170u: goto label_1d7170;
            case 0x1D7174u: goto label_1d7174;
            case 0x1D7178u: goto label_1d7178;
            case 0x1D717Cu: goto label_1d717c;
            case 0x1D7180u: goto label_1d7180;
            case 0x1D7184u: goto label_1d7184;
            case 0x1D7188u: goto label_1d7188;
            case 0x1D718Cu: goto label_1d718c;
            case 0x1D7190u: goto label_1d7190;
            case 0x1D7194u: goto label_1d7194;
            case 0x1D7198u: goto label_1d7198;
            case 0x1D719Cu: goto label_1d719c;
            case 0x1D71A0u: goto label_1d71a0;
            case 0x1D71A4u: goto label_1d71a4;
            case 0x1D71A8u: goto label_1d71a8;
            case 0x1D71ACu: goto label_1d71ac;
            case 0x1D71B0u: goto label_1d71b0;
            case 0x1D71B4u: goto label_1d71b4;
            case 0x1D71B8u: goto label_1d71b8;
            case 0x1D71BCu: goto label_1d71bc;
            case 0x1D71C0u: goto label_1d71c0;
            case 0x1D71C4u: goto label_1d71c4;
            case 0x1D71C8u: goto label_1d71c8;
            case 0x1D71CCu: goto label_1d71cc;
            case 0x1D71D0u: goto label_1d71d0;
            case 0x1D71D4u: goto label_1d71d4;
            case 0x1D71D8u: goto label_1d71d8;
            case 0x1D71DCu: goto label_1d71dc;
            case 0x1D71E0u: goto label_1d71e0;
            case 0x1D71E4u: goto label_1d71e4;
            case 0x1D71E8u: goto label_1d71e8;
            case 0x1D71ECu: goto label_1d71ec;
            case 0x1D71F0u: goto label_1d71f0;
            case 0x1D71F4u: goto label_1d71f4;
            case 0x1D71F8u: goto label_1d71f8;
            case 0x1D71FCu: goto label_1d71fc;
            case 0x1D7200u: goto label_1d7200;
            case 0x1D7204u: goto label_1d7204;
            case 0x1D7208u: goto label_1d7208;
            case 0x1D720Cu: goto label_1d720c;
            case 0x1D7210u: goto label_1d7210;
            case 0x1D7214u: goto label_1d7214;
            case 0x1D7218u: goto label_1d7218;
            case 0x1D721Cu: goto label_1d721c;
            case 0x1D7220u: goto label_1d7220;
            case 0x1D7224u: goto label_1d7224;
            case 0x1D7228u: goto label_1d7228;
            case 0x1D722Cu: goto label_1d722c;
            case 0x1D7230u: goto label_1d7230;
            case 0x1D7234u: goto label_1d7234;
            case 0x1D7238u: goto label_1d7238;
            case 0x1D723Cu: goto label_1d723c;
            case 0x1D7240u: goto label_1d7240;
            case 0x1D7244u: goto label_1d7244;
            case 0x1D7248u: goto label_1d7248;
            case 0x1D724Cu: goto label_1d724c;
            case 0x1D7250u: goto label_1d7250;
            case 0x1D7254u: goto label_1d7254;
            case 0x1D7258u: goto label_1d7258;
            case 0x1D725Cu: goto label_1d725c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D70B8u;
label_1d70b8:
    // 0x1d70b8: 0x10000023
label_1d70bc:
    if (ctx->pc == 0x1D70BCu) {
        ctx->pc = 0x1D70BCu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1D70C0u;
        goto label_1d70c0;
    }
    ctx->pc = 0x1D70B8u;
    {
        const bool branch_taken_0x1d70b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D70BCu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1d70b8) {
            ctx->pc = 0x1D7148u;
            goto label_1d7148;
        }
    }
    ctx->pc = 0x1D70C0u;
label_1d70c0:
    // 0x1d70c0: 0x24030001
    ctx->pc = 0x1d70c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1d70c4:
    // 0x1d70c4: 0x10000020
label_1d70c8:
    if (ctx->pc == 0x1D70C8u) {
        ctx->pc = 0x1D70C8u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D70CCu;
        goto label_1d70cc;
    }
    ctx->pc = 0x1D70C4u;
    {
        const bool branch_taken_0x1d70c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D70C8u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d70c4) {
            ctx->pc = 0x1D7148u;
            goto label_1d7148;
        }
    }
    ctx->pc = 0x1D70CCu;
label_1d70cc:
    // 0x1d70cc: 0x0
    ctx->pc = 0x1d70ccu;
    // NOP
label_1d70d0:
    // 0x1d70d0: 0x24030002
    ctx->pc = 0x1d70d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1d70d4:
    // 0x1d70d4: 0x1000001c
label_1d70d8:
    if (ctx->pc == 0x1D70D8u) {
        ctx->pc = 0x1D70D8u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D70DCu;
        goto label_1d70dc;
    }
    ctx->pc = 0x1D70D4u;
    {
        const bool branch_taken_0x1d70d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D70D8u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d70d4) {
            ctx->pc = 0x1D7148u;
            goto label_1d7148;
        }
    }
    ctx->pc = 0x1D70DCu;
label_1d70dc:
    // 0x1d70dc: 0x0
    ctx->pc = 0x1d70dcu;
    // NOP
label_1d70e0:
    // 0x1d70e0: 0x24030003
    ctx->pc = 0x1d70e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_1d70e4:
    // 0x1d70e4: 0x10000018
label_1d70e8:
    if (ctx->pc == 0x1D70E8u) {
        ctx->pc = 0x1D70E8u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D70ECu;
        goto label_1d70ec;
    }
    ctx->pc = 0x1D70E4u;
    {
        const bool branch_taken_0x1d70e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D70E8u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d70e4) {
            ctx->pc = 0x1D7148u;
            goto label_1d7148;
        }
    }
    ctx->pc = 0x1D70ECu;
label_1d70ec:
    // 0x1d70ec: 0x0
    ctx->pc = 0x1d70ecu;
    // NOP
label_1d70f0:
    // 0x1d70f0: 0x24030004
    ctx->pc = 0x1d70f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_1d70f4:
    // 0x1d70f4: 0x10000014
label_1d70f8:
    if (ctx->pc == 0x1D70F8u) {
        ctx->pc = 0x1D70F8u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D70FCu;
        goto label_1d70fc;
    }
    ctx->pc = 0x1D70F4u;
    {
        const bool branch_taken_0x1d70f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D70F8u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d70f4) {
            ctx->pc = 0x1D7148u;
            goto label_1d7148;
        }
    }
    ctx->pc = 0x1D70FCu;
label_1d70fc:
    // 0x1d70fc: 0x0
    ctx->pc = 0x1d70fcu;
    // NOP
label_1d7100:
    // 0x1d7100: 0x24030005
    ctx->pc = 0x1d7100u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
label_1d7104:
    // 0x1d7104: 0x10000010
label_1d7108:
    if (ctx->pc == 0x1D7108u) {
        ctx->pc = 0x1D7108u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D710Cu;
        goto label_1d710c;
    }
    ctx->pc = 0x1D7104u;
    {
        const bool branch_taken_0x1d7104 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7108u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d7104) {
            ctx->pc = 0x1D7148u;
            goto label_1d7148;
        }
    }
    ctx->pc = 0x1D710Cu;
label_1d710c:
    // 0x1d710c: 0x0
    ctx->pc = 0x1d710cu;
    // NOP
label_1d7110:
    // 0x1d7110: 0x24030006
    ctx->pc = 0x1d7110u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
label_1d7114:
    // 0x1d7114: 0x1000000c
label_1d7118:
    if (ctx->pc == 0x1D7118u) {
        ctx->pc = 0x1D7118u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D711Cu;
        goto label_1d711c;
    }
    ctx->pc = 0x1D7114u;
    {
        const bool branch_taken_0x1d7114 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7118u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d7114) {
            ctx->pc = 0x1D7148u;
            goto label_1d7148;
        }
    }
    ctx->pc = 0x1D711Cu;
label_1d711c:
    // 0x1d711c: 0x0
    ctx->pc = 0x1d711cu;
    // NOP
label_1d7120:
    // 0x1d7120: 0x24030007
    ctx->pc = 0x1d7120u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
label_1d7124:
    // 0x1d7124: 0x10000008
label_1d7128:
    if (ctx->pc == 0x1D7128u) {
        ctx->pc = 0x1D7128u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D712Cu;
        goto label_1d712c;
    }
    ctx->pc = 0x1D7124u;
    {
        const bool branch_taken_0x1d7124 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7128u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d7124) {
            ctx->pc = 0x1D7148u;
            goto label_1d7148;
        }
    }
    ctx->pc = 0x1D712Cu;
label_1d712c:
    // 0x1d712c: 0x0
    ctx->pc = 0x1d712cu;
    // NOP
label_1d7130:
    // 0x1d7130: 0x24030008
    ctx->pc = 0x1d7130u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
label_1d7134:
    // 0x1d7134: 0x10000004
label_1d7138:
    if (ctx->pc == 0x1D7138u) {
        ctx->pc = 0x1D7138u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D713Cu;
        goto label_1d713c;
    }
    ctx->pc = 0x1D7134u;
    {
        const bool branch_taken_0x1d7134 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7138u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d7134) {
            ctx->pc = 0x1D7148u;
            goto label_1d7148;
        }
    }
    ctx->pc = 0x1D713Cu;
label_1d713c:
    // 0x1d713c: 0x0
    ctx->pc = 0x1d713cu;
    // NOP
label_1d7140:
    // 0x1d7140: 0x24030009
    ctx->pc = 0x1d7140u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
label_1d7144:
    // 0x1d7144: 0xa603000c
    ctx->pc = 0x1d7144u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
label_1d7148:
    // 0x1d7148: 0x8fa3002c
    ctx->pc = 0x1d7148u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1d714c:
    // 0x1d714c: 0xae030008
    ctx->pc = 0x1d714cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1d7150:
    // 0x1d7150: 0x87a30030
    ctx->pc = 0x1d7150u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
label_1d7154:
    // 0x1d7154: 0xa603000e
    ctx->pc = 0x1d7154u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
label_1d7158:
    // 0x1d7158: 0x87a30032
    ctx->pc = 0x1d7158u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 50)));
label_1d715c:
    // 0x1d715c: 0x2c61000e
    ctx->pc = 0x1d715cu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 14));
label_1d7160:
    // 0x1d7160: 0x10200031
label_1d7164:
    if (ctx->pc == 0x1D7164u) {
        ctx->pc = 0x1D7164u;
        SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
        ctx->pc = 0x1D7168u;
        goto label_1d7168;
    }
    ctx->pc = 0x1D7160u;
    {
        const bool branch_taken_0x1d7160 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7164u;
        SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
        if (branch_taken_0x1d7160) {
            ctx->pc = 0x1D7228u;
            goto label_1d7228;
        }
    }
    ctx->pc = 0x1D7168u;
label_1d7168:
    // 0x1d7168: 0x31880
    ctx->pc = 0x1d7168u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1d716c:
    // 0x1d716c: 0x24847c30
    ctx->pc = 0x1d716cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31792));
label_1d7170:
    // 0x1d7170: 0x641821
    ctx->pc = 0x1d7170u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d7174:
    // 0x1d7174: 0x8c630000
    ctx->pc = 0x1d7174u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d7178:
    // 0x1d7178: 0x600008
label_1d717c:
    if (ctx->pc == 0x1D717Cu) {
        ctx->pc = 0x1D7180u;
        goto label_1d7180;
    }
    ctx->pc = 0x1D7178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7050u: goto label_1d7050;
            case 0x1D7054u: goto label_1d7054;
            case 0x1D7058u: goto label_1d7058;
            case 0x1D705Cu: goto label_1d705c;
            case 0x1D7060u: goto label_1d7060;
            case 0x1D7064u: goto label_1d7064;
            case 0x1D7068u: goto label_1d7068;
            case 0x1D706Cu: goto label_1d706c;
            case 0x1D7070u: goto label_1d7070;
            case 0x1D7074u: goto label_1d7074;
            case 0x1D7078u: goto label_1d7078;
            case 0x1D707Cu: goto label_1d707c;
            case 0x1D7080u: goto label_1d7080;
            case 0x1D7084u: goto label_1d7084;
            case 0x1D7088u: goto label_1d7088;
            case 0x1D708Cu: goto label_1d708c;
            case 0x1D7090u: goto label_1d7090;
            case 0x1D7094u: goto label_1d7094;
            case 0x1D7098u: goto label_1d7098;
            case 0x1D709Cu: goto label_1d709c;
            case 0x1D70A0u: goto label_1d70a0;
            case 0x1D70A4u: goto label_1d70a4;
            case 0x1D70A8u: goto label_1d70a8;
            case 0x1D70ACu: goto label_1d70ac;
            case 0x1D70B0u: goto label_1d70b0;
            case 0x1D70B4u: goto label_1d70b4;
            case 0x1D70B8u: goto label_1d70b8;
            case 0x1D70BCu: goto label_1d70bc;
            case 0x1D70C0u: goto label_1d70c0;
            case 0x1D70C4u: goto label_1d70c4;
            case 0x1D70C8u: goto label_1d70c8;
            case 0x1D70CCu: goto label_1d70cc;
            case 0x1D70D0u: goto label_1d70d0;
            case 0x1D70D4u: goto label_1d70d4;
            case 0x1D70D8u: goto label_1d70d8;
            case 0x1D70DCu: goto label_1d70dc;
            case 0x1D70E0u: goto label_1d70e0;
            case 0x1D70E4u: goto label_1d70e4;
            case 0x1D70E8u: goto label_1d70e8;
            case 0x1D70ECu: goto label_1d70ec;
            case 0x1D70F0u: goto label_1d70f0;
            case 0x1D70F4u: goto label_1d70f4;
            case 0x1D70F8u: goto label_1d70f8;
            case 0x1D70FCu: goto label_1d70fc;
            case 0x1D7100u: goto label_1d7100;
            case 0x1D7104u: goto label_1d7104;
            case 0x1D7108u: goto label_1d7108;
            case 0x1D710Cu: goto label_1d710c;
            case 0x1D7110u: goto label_1d7110;
            case 0x1D7114u: goto label_1d7114;
            case 0x1D7118u: goto label_1d7118;
            case 0x1D711Cu: goto label_1d711c;
            case 0x1D7120u: goto label_1d7120;
            case 0x1D7124u: goto label_1d7124;
            case 0x1D7128u: goto label_1d7128;
            case 0x1D712Cu: goto label_1d712c;
            case 0x1D7130u: goto label_1d7130;
            case 0x1D7134u: goto label_1d7134;
            case 0x1D7138u: goto label_1d7138;
            case 0x1D713Cu: goto label_1d713c;
            case 0x1D7140u: goto label_1d7140;
            case 0x1D7144u: goto label_1d7144;
            case 0x1D7148u: goto label_1d7148;
            case 0x1D714Cu: goto label_1d714c;
            case 0x1D7150u: goto label_1d7150;
            case 0x1D7154u: goto label_1d7154;
            case 0x1D7158u: goto label_1d7158;
            case 0x1D715Cu: goto label_1d715c;
            case 0x1D7160u: goto label_1d7160;
            case 0x1D7164u: goto label_1d7164;
            case 0x1D7168u: goto label_1d7168;
            case 0x1D716Cu: goto label_1d716c;
            case 0x1D7170u: goto label_1d7170;
            case 0x1D7174u: goto label_1d7174;
            case 0x1D7178u: goto label_1d7178;
            case 0x1D717Cu: goto label_1d717c;
            case 0x1D7180u: goto label_1d7180;
            case 0x1D7184u: goto label_1d7184;
            case 0x1D7188u: goto label_1d7188;
            case 0x1D718Cu: goto label_1d718c;
            case 0x1D7190u: goto label_1d7190;
            case 0x1D7194u: goto label_1d7194;
            case 0x1D7198u: goto label_1d7198;
            case 0x1D719Cu: goto label_1d719c;
            case 0x1D71A0u: goto label_1d71a0;
            case 0x1D71A4u: goto label_1d71a4;
            case 0x1D71A8u: goto label_1d71a8;
            case 0x1D71ACu: goto label_1d71ac;
            case 0x1D71B0u: goto label_1d71b0;
            case 0x1D71B4u: goto label_1d71b4;
            case 0x1D71B8u: goto label_1d71b8;
            case 0x1D71BCu: goto label_1d71bc;
            case 0x1D71C0u: goto label_1d71c0;
            case 0x1D71C4u: goto label_1d71c4;
            case 0x1D71C8u: goto label_1d71c8;
            case 0x1D71CCu: goto label_1d71cc;
            case 0x1D71D0u: goto label_1d71d0;
            case 0x1D71D4u: goto label_1d71d4;
            case 0x1D71D8u: goto label_1d71d8;
            case 0x1D71DCu: goto label_1d71dc;
            case 0x1D71E0u: goto label_1d71e0;
            case 0x1D71E4u: goto label_1d71e4;
            case 0x1D71E8u: goto label_1d71e8;
            case 0x1D71ECu: goto label_1d71ec;
            case 0x1D71F0u: goto label_1d71f0;
            case 0x1D71F4u: goto label_1d71f4;
            case 0x1D71F8u: goto label_1d71f8;
            case 0x1D71FCu: goto label_1d71fc;
            case 0x1D7200u: goto label_1d7200;
            case 0x1D7204u: goto label_1d7204;
            case 0x1D7208u: goto label_1d7208;
            case 0x1D720Cu: goto label_1d720c;
            case 0x1D7210u: goto label_1d7210;
            case 0x1D7214u: goto label_1d7214;
            case 0x1D7218u: goto label_1d7218;
            case 0x1D721Cu: goto label_1d721c;
            case 0x1D7220u: goto label_1d7220;
            case 0x1D7224u: goto label_1d7224;
            case 0x1D7228u: goto label_1d7228;
            case 0x1D722Cu: goto label_1d722c;
            case 0x1D7230u: goto label_1d7230;
            case 0x1D7234u: goto label_1d7234;
            case 0x1D7238u: goto label_1d7238;
            case 0x1D723Cu: goto label_1d723c;
            case 0x1D7240u: goto label_1d7240;
            case 0x1D7244u: goto label_1d7244;
            case 0x1D7248u: goto label_1d7248;
            case 0x1D724Cu: goto label_1d724c;
            case 0x1D7250u: goto label_1d7250;
            case 0x1D7254u: goto label_1d7254;
            case 0x1D7258u: goto label_1d7258;
            case 0x1D725Cu: goto label_1d725c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D7180u;
label_1d7180:
    // 0x1d7180: 0x10000033
label_1d7184:
    if (ctx->pc == 0x1D7184u) {
        ctx->pc = 0x1D7184u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1D7188u;
        goto label_1d7188;
    }
    ctx->pc = 0x1D7180u;
    {
        const bool branch_taken_0x1d7180 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7184u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1d7180) {
            ctx->pc = 0x1D7250u;
            goto label_1d7250;
        }
    }
    ctx->pc = 0x1D7188u;
label_1d7188:
    // 0x1d7188: 0x24030001
    ctx->pc = 0x1d7188u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1d718c:
    // 0x1d718c: 0x10000030
label_1d7190:
    if (ctx->pc == 0x1D7190u) {
        ctx->pc = 0x1D7190u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D7194u;
        goto label_1d7194;
    }
    ctx->pc = 0x1D718Cu;
    {
        const bool branch_taken_0x1d718c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7190u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d718c) {
            ctx->pc = 0x1D7250u;
            goto label_1d7250;
        }
    }
    ctx->pc = 0x1D7194u;
label_1d7194:
    // 0x1d7194: 0x0
    ctx->pc = 0x1d7194u;
    // NOP
label_1d7198:
    // 0x1d7198: 0x24030002
    ctx->pc = 0x1d7198u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1d719c:
    // 0x1d719c: 0x1000002c
label_1d71a0:
    if (ctx->pc == 0x1D71A0u) {
        ctx->pc = 0x1D71A0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D71A4u;
        goto label_1d71a4;
    }
    ctx->pc = 0x1D719Cu;
    {
        const bool branch_taken_0x1d719c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D71A0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d719c) {
            ctx->pc = 0x1D7250u;
            goto label_1d7250;
        }
    }
    ctx->pc = 0x1D71A4u;
label_1d71a4:
    // 0x1d71a4: 0x0
    ctx->pc = 0x1d71a4u;
    // NOP
label_1d71a8:
    // 0x1d71a8: 0x24030003
    ctx->pc = 0x1d71a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_1d71ac:
    // 0x1d71ac: 0x10000028
label_1d71b0:
    if (ctx->pc == 0x1D71B0u) {
        ctx->pc = 0x1D71B0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D71B4u;
        goto label_1d71b4;
    }
    ctx->pc = 0x1D71ACu;
    {
        const bool branch_taken_0x1d71ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D71B0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d71ac) {
            ctx->pc = 0x1D7250u;
            goto label_1d7250;
        }
    }
    ctx->pc = 0x1D71B4u;
label_1d71b4:
    // 0x1d71b4: 0x0
    ctx->pc = 0x1d71b4u;
    // NOP
label_1d71b8:
    // 0x1d71b8: 0x24030004
    ctx->pc = 0x1d71b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_1d71bc:
    // 0x1d71bc: 0x10000024
label_1d71c0:
    if (ctx->pc == 0x1D71C0u) {
        ctx->pc = 0x1D71C0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D71C4u;
        goto label_1d71c4;
    }
    ctx->pc = 0x1D71BCu;
    {
        const bool branch_taken_0x1d71bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D71C0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d71bc) {
            ctx->pc = 0x1D7250u;
            goto label_1d7250;
        }
    }
    ctx->pc = 0x1D71C4u;
label_1d71c4:
    // 0x1d71c4: 0x0
    ctx->pc = 0x1d71c4u;
    // NOP
label_1d71c8:
    // 0x1d71c8: 0x24030005
    ctx->pc = 0x1d71c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
label_1d71cc:
    // 0x1d71cc: 0x10000020
label_1d71d0:
    if (ctx->pc == 0x1D71D0u) {
        ctx->pc = 0x1D71D0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D71D4u;
        goto label_1d71d4;
    }
    ctx->pc = 0x1D71CCu;
    {
        const bool branch_taken_0x1d71cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D71D0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d71cc) {
            ctx->pc = 0x1D7250u;
            goto label_1d7250;
        }
    }
    ctx->pc = 0x1D71D4u;
label_1d71d4:
    // 0x1d71d4: 0x0
    ctx->pc = 0x1d71d4u;
    // NOP
label_1d71d8:
    // 0x1d71d8: 0x24030006
    ctx->pc = 0x1d71d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
label_1d71dc:
    // 0x1d71dc: 0x1000001c
label_1d71e0:
    if (ctx->pc == 0x1D71E0u) {
        ctx->pc = 0x1D71E0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D71E4u;
        goto label_1d71e4;
    }
    ctx->pc = 0x1D71DCu;
    {
        const bool branch_taken_0x1d71dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D71E0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d71dc) {
            ctx->pc = 0x1D7250u;
            goto label_1d7250;
        }
    }
    ctx->pc = 0x1D71E4u;
label_1d71e4:
    // 0x1d71e4: 0x0
    ctx->pc = 0x1d71e4u;
    // NOP
label_1d71e8:
    // 0x1d71e8: 0x24030007
    ctx->pc = 0x1d71e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
label_1d71ec:
    // 0x1d71ec: 0x10000018
label_1d71f0:
    if (ctx->pc == 0x1D71F0u) {
        ctx->pc = 0x1D71F0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D71F4u;
        goto label_1d71f4;
    }
    ctx->pc = 0x1D71ECu;
    {
        const bool branch_taken_0x1d71ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D71F0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d71ec) {
            ctx->pc = 0x1D7250u;
            goto label_1d7250;
        }
    }
    ctx->pc = 0x1D71F4u;
label_1d71f4:
    // 0x1d71f4: 0x0
    ctx->pc = 0x1d71f4u;
    // NOP
label_1d71f8:
    // 0x1d71f8: 0x24030008
    ctx->pc = 0x1d71f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
label_1d71fc:
    // 0x1d71fc: 0x10000014
label_1d7200:
    if (ctx->pc == 0x1D7200u) {
        ctx->pc = 0x1D7200u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D7204u;
        goto label_1d7204;
    }
    ctx->pc = 0x1D71FCu;
    {
        const bool branch_taken_0x1d71fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7200u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d71fc) {
            ctx->pc = 0x1D7250u;
            goto label_1d7250;
        }
    }
    ctx->pc = 0x1D7204u;
label_1d7204:
    // 0x1d7204: 0x0
    ctx->pc = 0x1d7204u;
    // NOP
label_1d7208:
    // 0x1d7208: 0x24030009
    ctx->pc = 0x1d7208u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
label_1d720c:
    // 0x1d720c: 0x10000010
label_1d7210:
    if (ctx->pc == 0x1D7210u) {
        ctx->pc = 0x1D7210u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D7214u;
        goto label_1d7214;
    }
    ctx->pc = 0x1D720Cu;
    {
        const bool branch_taken_0x1d720c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7210u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d720c) {
            ctx->pc = 0x1D7250u;
            goto label_1d7250;
        }
    }
    ctx->pc = 0x1D7214u;
label_1d7214:
    // 0x1d7214: 0x0
    ctx->pc = 0x1d7214u;
    // NOP
label_1d7218:
    // 0x1d7218: 0x2403000a
    ctx->pc = 0x1d7218u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
label_1d721c:
    // 0x1d721c: 0x1000000c
label_1d7220:
    if (ctx->pc == 0x1D7220u) {
        ctx->pc = 0x1D7220u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D7224u;
        goto label_1d7224;
    }
    ctx->pc = 0x1D721Cu;
    {
        const bool branch_taken_0x1d721c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7220u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d721c) {
            ctx->pc = 0x1D7250u;
            goto label_1d7250;
        }
    }
    ctx->pc = 0x1D7224u;
label_1d7224:
    // 0x1d7224: 0x0
    ctx->pc = 0x1d7224u;
    // NOP
label_1d7228:
    // 0x1d7228: 0x2403000b
    ctx->pc = 0x1d7228u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11));
label_1d722c:
    // 0x1d722c: 0x10000008
label_1d7230:
    if (ctx->pc == 0x1D7230u) {
        ctx->pc = 0x1D7230u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D7234u;
        goto label_1d7234;
    }
    ctx->pc = 0x1D722Cu;
    {
        const bool branch_taken_0x1d722c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7230u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d722c) {
            ctx->pc = 0x1D7250u;
            goto label_1d7250;
        }
    }
    ctx->pc = 0x1D7234u;
label_1d7234:
    // 0x1d7234: 0x0
    ctx->pc = 0x1d7234u;
    // NOP
label_1d7238:
    // 0x1d7238: 0x2403000c
    ctx->pc = 0x1d7238u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
label_1d723c:
    // 0x1d723c: 0x10000004
label_1d7240:
    if (ctx->pc == 0x1D7240u) {
        ctx->pc = 0x1D7240u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D7244u;
        goto label_1d7244;
    }
    ctx->pc = 0x1D723Cu;
    {
        const bool branch_taken_0x1d723c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7240u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d723c) {
            ctx->pc = 0x1D7250u;
            goto label_1d7250;
        }
    }
    ctx->pc = 0x1D7244u;
label_1d7244:
    // 0x1d7244: 0x0
    ctx->pc = 0x1d7244u;
    // NOP
label_1d7248:
    // 0x1d7248: 0x2403000d
    ctx->pc = 0x1d7248u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 13));
label_1d724c:
    // 0x1d724c: 0xa6030010
    ctx->pc = 0x1d724cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
label_1d7250:
    // 0x1d7250: 0xdfbf0010
    ctx->pc = 0x1d7250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7254:
    // 0x1d7254: 0x7bb00000
    ctx->pc = 0x1d7254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7258:
    // 0x1d7258: 0x3e00008
label_1d725c:
    if (ctx->pc == 0x1D725Cu) {
        ctx->pc = 0x1D725Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1D7260u;
        goto label_fallthrough_0x1d7258;
    }
    ctx->pc = 0x1D7258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D725Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7050u: goto label_1d7050;
            case 0x1D7054u: goto label_1d7054;
            case 0x1D7058u: goto label_1d7058;
            case 0x1D705Cu: goto label_1d705c;
            case 0x1D7060u: goto label_1d7060;
            case 0x1D7064u: goto label_1d7064;
            case 0x1D7068u: goto label_1d7068;
            case 0x1D706Cu: goto label_1d706c;
            case 0x1D7070u: goto label_1d7070;
            case 0x1D7074u: goto label_1d7074;
            case 0x1D7078u: goto label_1d7078;
            case 0x1D707Cu: goto label_1d707c;
            case 0x1D7080u: goto label_1d7080;
            case 0x1D7084u: goto label_1d7084;
            case 0x1D7088u: goto label_1d7088;
            case 0x1D708Cu: goto label_1d708c;
            case 0x1D7090u: goto label_1d7090;
            case 0x1D7094u: goto label_1d7094;
            case 0x1D7098u: goto label_1d7098;
            case 0x1D709Cu: goto label_1d709c;
            case 0x1D70A0u: goto label_1d70a0;
            case 0x1D70A4u: goto label_1d70a4;
            case 0x1D70A8u: goto label_1d70a8;
            case 0x1D70ACu: goto label_1d70ac;
            case 0x1D70B0u: goto label_1d70b0;
            case 0x1D70B4u: goto label_1d70b4;
            case 0x1D70B8u: goto label_1d70b8;
            case 0x1D70BCu: goto label_1d70bc;
            case 0x1D70C0u: goto label_1d70c0;
            case 0x1D70C4u: goto label_1d70c4;
            case 0x1D70C8u: goto label_1d70c8;
            case 0x1D70CCu: goto label_1d70cc;
            case 0x1D70D0u: goto label_1d70d0;
            case 0x1D70D4u: goto label_1d70d4;
            case 0x1D70D8u: goto label_1d70d8;
            case 0x1D70DCu: goto label_1d70dc;
            case 0x1D70E0u: goto label_1d70e0;
            case 0x1D70E4u: goto label_1d70e4;
            case 0x1D70E8u: goto label_1d70e8;
            case 0x1D70ECu: goto label_1d70ec;
            case 0x1D70F0u: goto label_1d70f0;
            case 0x1D70F4u: goto label_1d70f4;
            case 0x1D70F8u: goto label_1d70f8;
            case 0x1D70FCu: goto label_1d70fc;
            case 0x1D7100u: goto label_1d7100;
            case 0x1D7104u: goto label_1d7104;
            case 0x1D7108u: goto label_1d7108;
            case 0x1D710Cu: goto label_1d710c;
            case 0x1D7110u: goto label_1d7110;
            case 0x1D7114u: goto label_1d7114;
            case 0x1D7118u: goto label_1d7118;
            case 0x1D711Cu: goto label_1d711c;
            case 0x1D7120u: goto label_1d7120;
            case 0x1D7124u: goto label_1d7124;
            case 0x1D7128u: goto label_1d7128;
            case 0x1D712Cu: goto label_1d712c;
            case 0x1D7130u: goto label_1d7130;
            case 0x1D7134u: goto label_1d7134;
            case 0x1D7138u: goto label_1d7138;
            case 0x1D713Cu: goto label_1d713c;
            case 0x1D7140u: goto label_1d7140;
            case 0x1D7144u: goto label_1d7144;
            case 0x1D7148u: goto label_1d7148;
            case 0x1D714Cu: goto label_1d714c;
            case 0x1D7150u: goto label_1d7150;
            case 0x1D7154u: goto label_1d7154;
            case 0x1D7158u: goto label_1d7158;
            case 0x1D715Cu: goto label_1d715c;
            case 0x1D7160u: goto label_1d7160;
            case 0x1D7164u: goto label_1d7164;
            case 0x1D7168u: goto label_1d7168;
            case 0x1D716Cu: goto label_1d716c;
            case 0x1D7170u: goto label_1d7170;
            case 0x1D7174u: goto label_1d7174;
            case 0x1D7178u: goto label_1d7178;
            case 0x1D717Cu: goto label_1d717c;
            case 0x1D7180u: goto label_1d7180;
            case 0x1D7184u: goto label_1d7184;
            case 0x1D7188u: goto label_1d7188;
            case 0x1D718Cu: goto label_1d718c;
            case 0x1D7190u: goto label_1d7190;
            case 0x1D7194u: goto label_1d7194;
            case 0x1D7198u: goto label_1d7198;
            case 0x1D719Cu: goto label_1d719c;
            case 0x1D71A0u: goto label_1d71a0;
            case 0x1D71A4u: goto label_1d71a4;
            case 0x1D71A8u: goto label_1d71a8;
            case 0x1D71ACu: goto label_1d71ac;
            case 0x1D71B0u: goto label_1d71b0;
            case 0x1D71B4u: goto label_1d71b4;
            case 0x1D71B8u: goto label_1d71b8;
            case 0x1D71BCu: goto label_1d71bc;
            case 0x1D71C0u: goto label_1d71c0;
            case 0x1D71C4u: goto label_1d71c4;
            case 0x1D71C8u: goto label_1d71c8;
            case 0x1D71CCu: goto label_1d71cc;
            case 0x1D71D0u: goto label_1d71d0;
            case 0x1D71D4u: goto label_1d71d4;
            case 0x1D71D8u: goto label_1d71d8;
            case 0x1D71DCu: goto label_1d71dc;
            case 0x1D71E0u: goto label_1d71e0;
            case 0x1D71E4u: goto label_1d71e4;
            case 0x1D71E8u: goto label_1d71e8;
            case 0x1D71ECu: goto label_1d71ec;
            case 0x1D71F0u: goto label_1d71f0;
            case 0x1D71F4u: goto label_1d71f4;
            case 0x1D71F8u: goto label_1d71f8;
            case 0x1D71FCu: goto label_1d71fc;
            case 0x1D7200u: goto label_1d7200;
            case 0x1D7204u: goto label_1d7204;
            case 0x1D7208u: goto label_1d7208;
            case 0x1D720Cu: goto label_1d720c;
            case 0x1D7210u: goto label_1d7210;
            case 0x1D7214u: goto label_1d7214;
            case 0x1D7218u: goto label_1d7218;
            case 0x1D721Cu: goto label_1d721c;
            case 0x1D7220u: goto label_1d7220;
            case 0x1D7224u: goto label_1d7224;
            case 0x1D7228u: goto label_1d7228;
            case 0x1D722Cu: goto label_1d722c;
            case 0x1D7230u: goto label_1d7230;
            case 0x1D7234u: goto label_1d7234;
            case 0x1D7238u: goto label_1d7238;
            case 0x1D723Cu: goto label_1d723c;
            case 0x1D7240u: goto label_1d7240;
            case 0x1D7244u: goto label_1d7244;
            case 0x1D7248u: goto label_1d7248;
            case 0x1D724Cu: goto label_1d724c;
            case 0x1D7250u: goto label_1d7250;
            case 0x1D7254u: goto label_1d7254;
            case 0x1D7258u: goto label_1d7258;
            case 0x1D725Cu: goto label_1d725c;
            default: break;
        }
        return;
    }
label_fallthrough_0x1d7258:
    ctx->pc = 0x1D7260u;
}
