#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_141e20
// Address: 0x141e20 - 0x141f90
void entry_141e20_0x141f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x141e20u;

label_141e20:
    // 0x141e20: 0x41040
    ctx->pc = 0x141e20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
label_141e24:
    // 0x141e24: 0x27bdffc0
    ctx->pc = 0x141e24u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_141e28:
    // 0x141e28: 0x441021
    ctx->pc = 0x141e28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_141e2c:
    // 0x141e2c: 0xffb40020
    ctx->pc = 0x141e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_141e30:
    // 0x141e30: 0x21100
    ctx->pc = 0x141e30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_141e34:
    // 0x141e34: 0xffbf0030
    ctx->pc = 0x141e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_141e38:
    // 0x141e38: 0x4a080
    ctx->pc = 0x141e38u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 4), 2));
label_141e3c:
    // 0x141e3c: 0xffb00000
    ctx->pc = 0x141e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_141e40:
    // 0x141e40: 0xffb10008
    ctx->pc = 0x141e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_141e44:
    // 0x141e44: 0x3c110023
    ctx->pc = 0x141e44u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
label_141e48:
    // 0x141e48: 0x2631a618
    ctx->pc = 0x141e48u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294944280));
label_141e4c:
    // 0x141e4c: 0x2348821
    ctx->pc = 0x141e4cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_141e50:
    // 0x141e50: 0xffb20010
    ctx->pc = 0x141e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_141e54:
    // 0x141e54: 0x24120005
    ctx->pc = 0x141e54u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 5));
label_141e58:
    // 0x141e58: 0xffb30018
    ctx->pc = 0x141e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_141e5c:
    // 0x141e5c: 0x982d
    ctx->pc = 0x141e5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141e60:
    // 0x141e60: 0xffb50028
    ctx->pc = 0x141e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_141e64:
    // 0x141e64: 0x24150001
    ctx->pc = 0x141e64u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
label_141e68:
    // 0x141e68: 0x3c100026
    ctx->pc = 0x141e68u;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
label_141e6c:
    // 0x141e6c: 0x26104820
    ctx->pc = 0x141e6cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 18464));
label_141e70:
    // 0x141e70: 0x2028021
    ctx->pc = 0x141e70u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_141e74:
    // 0x141e74: 0x0
    ctx->pc = 0x141e74u;
    // NOP
label_141e78:
    // 0x141e78: 0x8e020000
    ctx->pc = 0x141e78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_141e7c:
    // 0x141e7c: 0x50400007
label_141e80:
    if (ctx->pc == 0x141E80u) {
        ctx->pc = 0x141E80u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->pc = 0x141E84u;
        goto label_141e84;
    }
    ctx->pc = 0x141E7Cu;
    {
        const bool branch_taken_0x141e7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x141e7c) {
            ctx->pc = 0x141E80u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->pc = 0x141E9Cu;
            goto label_141e9c;
        }
    }
    ctx->pc = 0x141E84u;
label_141e84:
    // 0x141e84: 0xae350000
    ctx->pc = 0x141e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
label_141e88:
    // 0x141e88: 0x40f809
label_141e8c:
    if (ctx->pc == 0x141E8Cu) {
        ctx->pc = 0x141E8Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x141E90u;
        goto label_141e90;
    }
    ctx->pc = 0x141E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x141E90u);
        ctx->pc = 0x141E8Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141E20u: goto label_141e20;
            case 0x141E24u: goto label_141e24;
            case 0x141E28u: goto label_141e28;
            case 0x141E2Cu: goto label_141e2c;
            case 0x141E30u: goto label_141e30;
            case 0x141E34u: goto label_141e34;
            case 0x141E38u: goto label_141e38;
            case 0x141E3Cu: goto label_141e3c;
            case 0x141E40u: goto label_141e40;
            case 0x141E44u: goto label_141e44;
            case 0x141E48u: goto label_141e48;
            case 0x141E4Cu: goto label_141e4c;
            case 0x141E50u: goto label_141e50;
            case 0x141E54u: goto label_141e54;
            case 0x141E58u: goto label_141e58;
            case 0x141E5Cu: goto label_141e5c;
            case 0x141E60u: goto label_141e60;
            case 0x141E64u: goto label_141e64;
            case 0x141E68u: goto label_141e68;
            case 0x141E6Cu: goto label_141e6c;
            case 0x141E70u: goto label_141e70;
            case 0x141E74u: goto label_141e74;
            case 0x141E78u: goto label_141e78;
            case 0x141E7Cu: goto label_141e7c;
            case 0x141E80u: goto label_141e80;
            case 0x141E84u: goto label_141e84;
            case 0x141E88u: goto label_141e88;
            case 0x141E8Cu: goto label_141e8c;
            case 0x141E90u: goto label_141e90;
            case 0x141E94u: goto label_141e94;
            case 0x141E98u: goto label_141e98;
            case 0x141E9Cu: goto label_141e9c;
            case 0x141EA0u: goto label_141ea0;
            case 0x141EA4u: goto label_141ea4;
            case 0x141EA8u: goto label_141ea8;
            case 0x141EACu: goto label_141eac;
            case 0x141EB0u: goto label_141eb0;
            case 0x141EB4u: goto label_141eb4;
            case 0x141EB8u: goto label_141eb8;
            case 0x141EBCu: goto label_141ebc;
            case 0x141EC0u: goto label_141ec0;
            case 0x141EC4u: goto label_141ec4;
            case 0x141EC8u: goto label_141ec8;
            case 0x141ECCu: goto label_141ecc;
            case 0x141ED0u: goto label_141ed0;
            case 0x141ED4u: goto label_141ed4;
            case 0x141ED8u: goto label_141ed8;
            case 0x141EDCu: goto label_141edc;
            case 0x141EE0u: goto label_141ee0;
            case 0x141EE4u: goto label_141ee4;
            case 0x141EE8u: goto label_141ee8;
            case 0x141EECu: goto label_141eec;
            case 0x141EF0u: goto label_141ef0;
            case 0x141EF4u: goto label_141ef4;
            case 0x141EF8u: goto label_141ef8;
            case 0x141EFCu: goto label_141efc;
            case 0x141F00u: goto label_141f00;
            case 0x141F04u: goto label_141f04;
            case 0x141F08u: goto label_141f08;
            case 0x141F0Cu: goto label_141f0c;
            case 0x141F10u: goto label_141f10;
            case 0x141F14u: goto label_141f14;
            case 0x141F18u: goto label_141f18;
            case 0x141F1Cu: goto label_141f1c;
            case 0x141F20u: goto label_141f20;
            case 0x141F24u: goto label_141f24;
            case 0x141F28u: goto label_141f28;
            case 0x141F2Cu: goto label_141f2c;
            case 0x141F30u: goto label_141f30;
            case 0x141F34u: goto label_141f34;
            case 0x141F38u: goto label_141f38;
            case 0x141F3Cu: goto label_141f3c;
            case 0x141F40u: goto label_141f40;
            case 0x141F44u: goto label_141f44;
            case 0x141F48u: goto label_141f48;
            case 0x141F4Cu: goto label_141f4c;
            case 0x141F50u: goto label_141f50;
            case 0x141F54u: goto label_141f54;
            case 0x141F58u: goto label_141f58;
            case 0x141F5Cu: goto label_141f5c;
            case 0x141F60u: goto label_141f60;
            case 0x141F64u: goto label_141f64;
            case 0x141F68u: goto label_141f68;
            case 0x141F6Cu: goto label_141f6c;
            case 0x141F70u: goto label_141f70;
            case 0x141F74u: goto label_141f74;
            case 0x141F78u: goto label_141f78;
            case 0x141F7Cu: goto label_141f7c;
            case 0x141F80u: goto label_141f80;
            case 0x141F84u: goto label_141f84;
            case 0x141F88u: goto label_141f88;
            case 0x141F8Cu: goto label_141f8c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x141E90u; }
            if (ctx->pc != 0x141E90u) { return; }
        }
    }
    ctx->pc = 0x141E90u;
label_141e90:
    // 0x141e90: 0xae200000
    ctx->pc = 0x141e90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_141e94:
    // 0x141e94: 0x2629825
    ctx->pc = 0x141e94u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_141e98:
    // 0x141e98: 0x2652ffff
    ctx->pc = 0x141e98u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
label_141e9c:
    // 0x141e9c: 0x641fff6
label_141ea0:
    if (ctx->pc == 0x141EA0u) {
        ctx->pc = 0x141EA0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x141EA4u;
        goto label_141ea4;
    }
    ctx->pc = 0x141E9Cu;
    {
        const bool branch_taken_0x141e9c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x141EA0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
        if (branch_taken_0x141e9c) {
            ctx->pc = 0x141E78u;
            goto label_141e78;
        }
    }
    ctx->pc = 0x141EA4u;
label_141ea4:
    // 0x141ea4: 0x3c040023
    ctx->pc = 0x141ea4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
label_141ea8:
    // 0x141ea8: 0x2484a5f8
    ctx->pc = 0x141ea8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944248));
label_141eac:
    // 0x141eac: 0x942021
    ctx->pc = 0x141eacu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_141eb0:
    // 0x141eb0: 0xdfb40020
    ctx->pc = 0x141eb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_141eb4:
    // 0x141eb4: 0x8c830000
    ctx->pc = 0x141eb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_141eb8:
    // 0x141eb8: 0x260102d
    ctx->pc = 0x141eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_141ebc:
    // 0x141ebc: 0xdfb00000
    ctx->pc = 0x141ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141ec0:
    // 0x141ec0: 0xdfb10008
    ctx->pc = 0x141ec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_141ec4:
    // 0x141ec4: 0x24630001
    ctx->pc = 0x141ec4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_141ec8:
    // 0x141ec8: 0xdfb20010
    ctx->pc = 0x141ec8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_141ecc:
    // 0x141ecc: 0xdfb30018
    ctx->pc = 0x141eccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_141ed0:
    // 0x141ed0: 0xdfb50028
    ctx->pc = 0x141ed0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_141ed4:
    // 0x141ed4: 0xdfbf0030
    ctx->pc = 0x141ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_141ed8:
    // 0x141ed8: 0xac830000
    ctx->pc = 0x141ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_141edc:
    // 0x141edc: 0x3e00008
label_141ee0:
    if (ctx->pc == 0x141EE0u) {
        ctx->pc = 0x141EE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x141EE4u;
        goto label_141ee4;
    }
    ctx->pc = 0x141EDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141EE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141E20u: goto label_141e20;
            case 0x141E24u: goto label_141e24;
            case 0x141E28u: goto label_141e28;
            case 0x141E2Cu: goto label_141e2c;
            case 0x141E30u: goto label_141e30;
            case 0x141E34u: goto label_141e34;
            case 0x141E38u: goto label_141e38;
            case 0x141E3Cu: goto label_141e3c;
            case 0x141E40u: goto label_141e40;
            case 0x141E44u: goto label_141e44;
            case 0x141E48u: goto label_141e48;
            case 0x141E4Cu: goto label_141e4c;
            case 0x141E50u: goto label_141e50;
            case 0x141E54u: goto label_141e54;
            case 0x141E58u: goto label_141e58;
            case 0x141E5Cu: goto label_141e5c;
            case 0x141E60u: goto label_141e60;
            case 0x141E64u: goto label_141e64;
            case 0x141E68u: goto label_141e68;
            case 0x141E6Cu: goto label_141e6c;
            case 0x141E70u: goto label_141e70;
            case 0x141E74u: goto label_141e74;
            case 0x141E78u: goto label_141e78;
            case 0x141E7Cu: goto label_141e7c;
            case 0x141E80u: goto label_141e80;
            case 0x141E84u: goto label_141e84;
            case 0x141E88u: goto label_141e88;
            case 0x141E8Cu: goto label_141e8c;
            case 0x141E90u: goto label_141e90;
            case 0x141E94u: goto label_141e94;
            case 0x141E98u: goto label_141e98;
            case 0x141E9Cu: goto label_141e9c;
            case 0x141EA0u: goto label_141ea0;
            case 0x141EA4u: goto label_141ea4;
            case 0x141EA8u: goto label_141ea8;
            case 0x141EACu: goto label_141eac;
            case 0x141EB0u: goto label_141eb0;
            case 0x141EB4u: goto label_141eb4;
            case 0x141EB8u: goto label_141eb8;
            case 0x141EBCu: goto label_141ebc;
            case 0x141EC0u: goto label_141ec0;
            case 0x141EC4u: goto label_141ec4;
            case 0x141EC8u: goto label_141ec8;
            case 0x141ECCu: goto label_141ecc;
            case 0x141ED0u: goto label_141ed0;
            case 0x141ED4u: goto label_141ed4;
            case 0x141ED8u: goto label_141ed8;
            case 0x141EDCu: goto label_141edc;
            case 0x141EE0u: goto label_141ee0;
            case 0x141EE4u: goto label_141ee4;
            case 0x141EE8u: goto label_141ee8;
            case 0x141EECu: goto label_141eec;
            case 0x141EF0u: goto label_141ef0;
            case 0x141EF4u: goto label_141ef4;
            case 0x141EF8u: goto label_141ef8;
            case 0x141EFCu: goto label_141efc;
            case 0x141F00u: goto label_141f00;
            case 0x141F04u: goto label_141f04;
            case 0x141F08u: goto label_141f08;
            case 0x141F0Cu: goto label_141f0c;
            case 0x141F10u: goto label_141f10;
            case 0x141F14u: goto label_141f14;
            case 0x141F18u: goto label_141f18;
            case 0x141F1Cu: goto label_141f1c;
            case 0x141F20u: goto label_141f20;
            case 0x141F24u: goto label_141f24;
            case 0x141F28u: goto label_141f28;
            case 0x141F2Cu: goto label_141f2c;
            case 0x141F30u: goto label_141f30;
            case 0x141F34u: goto label_141f34;
            case 0x141F38u: goto label_141f38;
            case 0x141F3Cu: goto label_141f3c;
            case 0x141F40u: goto label_141f40;
            case 0x141F44u: goto label_141f44;
            case 0x141F48u: goto label_141f48;
            case 0x141F4Cu: goto label_141f4c;
            case 0x141F50u: goto label_141f50;
            case 0x141F54u: goto label_141f54;
            case 0x141F58u: goto label_141f58;
            case 0x141F5Cu: goto label_141f5c;
            case 0x141F60u: goto label_141f60;
            case 0x141F64u: goto label_141f64;
            case 0x141F68u: goto label_141f68;
            case 0x141F6Cu: goto label_141f6c;
            case 0x141F70u: goto label_141f70;
            case 0x141F74u: goto label_141f74;
            case 0x141F78u: goto label_141f78;
            case 0x141F7Cu: goto label_141f7c;
            case 0x141F80u: goto label_141f80;
            case 0x141F84u: goto label_141f84;
            case 0x141F88u: goto label_141f88;
            case 0x141F8Cu: goto label_141f8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x141EE4u;
label_141ee4:
    // 0x141ee4: 0x0
    ctx->pc = 0x141ee4u;
    // NOP
label_141ee8:
    // 0x141ee8: 0x27bdffe0
    ctx->pc = 0x141ee8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_141eec:
    // 0x141eec: 0xffb10008
    ctx->pc = 0x141eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_141ef0:
    // 0x141ef0: 0xa0882d
    ctx->pc = 0x141ef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_141ef4:
    // 0x141ef4: 0x2e220006
    ctx->pc = 0x141ef4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 6));
label_141ef8:
    // 0x141ef8: 0xffb00000
    ctx->pc = 0x141ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_141efc:
    // 0x141efc: 0xffb20010
    ctx->pc = 0x141efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_141f00:
    // 0x141f00: 0x902d
    ctx->pc = 0x141f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141f04:
    // 0x141f04: 0xffbf0018
    ctx->pc = 0x141f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_141f08:
    // 0x141f08: 0x14400004
label_141f0c:
    if (ctx->pc == 0x141F0Cu) {
        ctx->pc = 0x141F0Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141F10u;
        goto label_141f10;
    }
    ctx->pc = 0x141F08u;
    {
        const bool branch_taken_0x141f08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x141F0Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x141f08) {
            ctx->pc = 0x141F1Cu;
            goto label_141f1c;
        }
    }
    ctx->pc = 0x141F10u;
label_141f10:
    // 0x141f10: 0x3c040024
    ctx->pc = 0x141f10u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_141f14:
    // 0x141f14: 0xc05062a
label_141f18:
    if (ctx->pc == 0x141F18u) {
        ctx->pc = 0x141F18u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958288));
        ctx->pc = 0x141F1Cu;
        goto label_141f1c;
    }
    ctx->pc = 0x141F14u;
    SET_GPR_U32(ctx, 31, 0x141F1Cu);
    ctx->pc = 0x141F18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958288));
    ctx->pc = 0x1418A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001418A8_0x1418a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141F1Cu; }
    }
    if (ctx->pc != 0x141F1Cu) { return; }
    ctx->pc = 0x141F1Cu;
label_141f1c:
    // 0x141f1c: 0x6000003
label_141f20:
    if (ctx->pc == 0x141F20u) {
        ctx->pc = 0x141F20u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 8));
        ctx->pc = 0x141F24u;
        goto label_141f24;
    }
    ctx->pc = 0x141F1Cu;
    {
        const bool branch_taken_0x141f1c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x141F20u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 8));
        if (branch_taken_0x141f1c) {
            ctx->pc = 0x141F2Cu;
            goto label_141f2c;
        }
    }
    ctx->pc = 0x141F24u;
label_141f24:
    // 0x141f24: 0x14400005
label_141f28:
    if (ctx->pc == 0x141F28u) {
        ctx->pc = 0x141F28u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x141F2Cu;
        goto label_141f2c;
    }
    ctx->pc = 0x141F24u;
    {
        const bool branch_taken_0x141f24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x141F28u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x141f24) {
            ctx->pc = 0x141F3Cu;
            goto label_141f3c;
        }
    }
    ctx->pc = 0x141F2Cu;
label_141f2c:
    // 0x141f2c: 0x3c040024
    ctx->pc = 0x141f2cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_141f30:
    // 0x141f30: 0xc05062a
label_141f34:
    if (ctx->pc == 0x141F34u) {
        ctx->pc = 0x141F34u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958328));
        ctx->pc = 0x141F38u;
        goto label_141f38;
    }
    ctx->pc = 0x141F30u;
    SET_GPR_U32(ctx, 31, 0x141F38u);
    ctx->pc = 0x141F34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958328));
    ctx->pc = 0x1418A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001418A8_0x1418a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141F38u; }
    }
    if (ctx->pc != 0x141F38u) { return; }
    ctx->pc = 0x141F38u;
label_141f38:
    // 0x141f38: 0x101040
    ctx->pc = 0x141f38u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 1));
label_141f3c:
    // 0x141f3c: 0x501021
    ctx->pc = 0x141f3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_141f40:
    // 0x141f40: 0x21040
    ctx->pc = 0x141f40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_141f44:
    // 0x141f44: 0x511021
    ctx->pc = 0x141f44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_141f48:
    // 0x141f48: 0x210c0
    ctx->pc = 0x141f48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_141f4c:
    // 0x141f4c: 0x3c010026
    ctx->pc = 0x141f4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
label_141f50:
    // 0x141f50: 0x24214820
    ctx->pc = 0x141f50u;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 1), 18464));
label_141f54:
    // 0x141f54: 0x221021
    ctx->pc = 0x141f54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_141f58:
    // 0x141f58: 0x8c430000
    ctx->pc = 0x141f58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_141f5c:
    // 0x141f5c: 0x50600005
label_141f60:
    if (ctx->pc == 0x141F60u) {
        ctx->pc = 0x141F60u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141F64u;
        goto label_141f64;
    }
    ctx->pc = 0x141F5Cu;
    {
        const bool branch_taken_0x141f5c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x141f5c) {
            ctx->pc = 0x141F60u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x141F74u;
            goto label_141f74;
        }
    }
    ctx->pc = 0x141F64u;
label_141f64:
    // 0x141f64: 0x60f809
label_141f68:
    if (ctx->pc == 0x141F68u) {
        ctx->pc = 0x141F68u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x141F6Cu;
        goto label_141f6c;
    }
    ctx->pc = 0x141F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x141F6Cu);
        ctx->pc = 0x141F68u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141E20u: goto label_141e20;
            case 0x141E24u: goto label_141e24;
            case 0x141E28u: goto label_141e28;
            case 0x141E2Cu: goto label_141e2c;
            case 0x141E30u: goto label_141e30;
            case 0x141E34u: goto label_141e34;
            case 0x141E38u: goto label_141e38;
            case 0x141E3Cu: goto label_141e3c;
            case 0x141E40u: goto label_141e40;
            case 0x141E44u: goto label_141e44;
            case 0x141E48u: goto label_141e48;
            case 0x141E4Cu: goto label_141e4c;
            case 0x141E50u: goto label_141e50;
            case 0x141E54u: goto label_141e54;
            case 0x141E58u: goto label_141e58;
            case 0x141E5Cu: goto label_141e5c;
            case 0x141E60u: goto label_141e60;
            case 0x141E64u: goto label_141e64;
            case 0x141E68u: goto label_141e68;
            case 0x141E6Cu: goto label_141e6c;
            case 0x141E70u: goto label_141e70;
            case 0x141E74u: goto label_141e74;
            case 0x141E78u: goto label_141e78;
            case 0x141E7Cu: goto label_141e7c;
            case 0x141E80u: goto label_141e80;
            case 0x141E84u: goto label_141e84;
            case 0x141E88u: goto label_141e88;
            case 0x141E8Cu: goto label_141e8c;
            case 0x141E90u: goto label_141e90;
            case 0x141E94u: goto label_141e94;
            case 0x141E98u: goto label_141e98;
            case 0x141E9Cu: goto label_141e9c;
            case 0x141EA0u: goto label_141ea0;
            case 0x141EA4u: goto label_141ea4;
            case 0x141EA8u: goto label_141ea8;
            case 0x141EACu: goto label_141eac;
            case 0x141EB0u: goto label_141eb0;
            case 0x141EB4u: goto label_141eb4;
            case 0x141EB8u: goto label_141eb8;
            case 0x141EBCu: goto label_141ebc;
            case 0x141EC0u: goto label_141ec0;
            case 0x141EC4u: goto label_141ec4;
            case 0x141EC8u: goto label_141ec8;
            case 0x141ECCu: goto label_141ecc;
            case 0x141ED0u: goto label_141ed0;
            case 0x141ED4u: goto label_141ed4;
            case 0x141ED8u: goto label_141ed8;
            case 0x141EDCu: goto label_141edc;
            case 0x141EE0u: goto label_141ee0;
            case 0x141EE4u: goto label_141ee4;
            case 0x141EE8u: goto label_141ee8;
            case 0x141EECu: goto label_141eec;
            case 0x141EF0u: goto label_141ef0;
            case 0x141EF4u: goto label_141ef4;
            case 0x141EF8u: goto label_141ef8;
            case 0x141EFCu: goto label_141efc;
            case 0x141F00u: goto label_141f00;
            case 0x141F04u: goto label_141f04;
            case 0x141F08u: goto label_141f08;
            case 0x141F0Cu: goto label_141f0c;
            case 0x141F10u: goto label_141f10;
            case 0x141F14u: goto label_141f14;
            case 0x141F18u: goto label_141f18;
            case 0x141F1Cu: goto label_141f1c;
            case 0x141F20u: goto label_141f20;
            case 0x141F24u: goto label_141f24;
            case 0x141F28u: goto label_141f28;
            case 0x141F2Cu: goto label_141f2c;
            case 0x141F30u: goto label_141f30;
            case 0x141F34u: goto label_141f34;
            case 0x141F38u: goto label_141f38;
            case 0x141F3Cu: goto label_141f3c;
            case 0x141F40u: goto label_141f40;
            case 0x141F44u: goto label_141f44;
            case 0x141F48u: goto label_141f48;
            case 0x141F4Cu: goto label_141f4c;
            case 0x141F50u: goto label_141f50;
            case 0x141F54u: goto label_141f54;
            case 0x141F58u: goto label_141f58;
            case 0x141F5Cu: goto label_141f5c;
            case 0x141F60u: goto label_141f60;
            case 0x141F64u: goto label_141f64;
            case 0x141F68u: goto label_141f68;
            case 0x141F6Cu: goto label_141f6c;
            case 0x141F70u: goto label_141f70;
            case 0x141F74u: goto label_141f74;
            case 0x141F78u: goto label_141f78;
            case 0x141F7Cu: goto label_141f7c;
            case 0x141F80u: goto label_141f80;
            case 0x141F84u: goto label_141f84;
            case 0x141F88u: goto label_141f88;
            case 0x141F8Cu: goto label_141f8c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x141F6Cu; }
            if (ctx->pc != 0x141F6Cu) { return; }
        }
    }
    ctx->pc = 0x141F6Cu;
label_141f6c:
    // 0x141f6c: 0x40902d
    ctx->pc = 0x141f6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_141f70:
    // 0x141f70: 0x240102d
    ctx->pc = 0x141f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_141f74:
    // 0x141f74: 0xdfb00000
    ctx->pc = 0x141f74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141f78:
    // 0x141f78: 0xdfb10008
    ctx->pc = 0x141f78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_141f7c:
    // 0x141f7c: 0xdfb20010
    ctx->pc = 0x141f7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_141f80:
    // 0x141f80: 0xdfbf0018
    ctx->pc = 0x141f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_141f84:
    // 0x141f84: 0x3e00008
label_141f88:
    if (ctx->pc == 0x141F88u) {
        ctx->pc = 0x141F88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x141F8Cu;
        goto label_141f8c;
    }
    ctx->pc = 0x141F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141F88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141E20u: goto label_141e20;
            case 0x141E24u: goto label_141e24;
            case 0x141E28u: goto label_141e28;
            case 0x141E2Cu: goto label_141e2c;
            case 0x141E30u: goto label_141e30;
            case 0x141E34u: goto label_141e34;
            case 0x141E38u: goto label_141e38;
            case 0x141E3Cu: goto label_141e3c;
            case 0x141E40u: goto label_141e40;
            case 0x141E44u: goto label_141e44;
            case 0x141E48u: goto label_141e48;
            case 0x141E4Cu: goto label_141e4c;
            case 0x141E50u: goto label_141e50;
            case 0x141E54u: goto label_141e54;
            case 0x141E58u: goto label_141e58;
            case 0x141E5Cu: goto label_141e5c;
            case 0x141E60u: goto label_141e60;
            case 0x141E64u: goto label_141e64;
            case 0x141E68u: goto label_141e68;
            case 0x141E6Cu: goto label_141e6c;
            case 0x141E70u: goto label_141e70;
            case 0x141E74u: goto label_141e74;
            case 0x141E78u: goto label_141e78;
            case 0x141E7Cu: goto label_141e7c;
            case 0x141E80u: goto label_141e80;
            case 0x141E84u: goto label_141e84;
            case 0x141E88u: goto label_141e88;
            case 0x141E8Cu: goto label_141e8c;
            case 0x141E90u: goto label_141e90;
            case 0x141E94u: goto label_141e94;
            case 0x141E98u: goto label_141e98;
            case 0x141E9Cu: goto label_141e9c;
            case 0x141EA0u: goto label_141ea0;
            case 0x141EA4u: goto label_141ea4;
            case 0x141EA8u: goto label_141ea8;
            case 0x141EACu: goto label_141eac;
            case 0x141EB0u: goto label_141eb0;
            case 0x141EB4u: goto label_141eb4;
            case 0x141EB8u: goto label_141eb8;
            case 0x141EBCu: goto label_141ebc;
            case 0x141EC0u: goto label_141ec0;
            case 0x141EC4u: goto label_141ec4;
            case 0x141EC8u: goto label_141ec8;
            case 0x141ECCu: goto label_141ecc;
            case 0x141ED0u: goto label_141ed0;
            case 0x141ED4u: goto label_141ed4;
            case 0x141ED8u: goto label_141ed8;
            case 0x141EDCu: goto label_141edc;
            case 0x141EE0u: goto label_141ee0;
            case 0x141EE4u: goto label_141ee4;
            case 0x141EE8u: goto label_141ee8;
            case 0x141EECu: goto label_141eec;
            case 0x141EF0u: goto label_141ef0;
            case 0x141EF4u: goto label_141ef4;
            case 0x141EF8u: goto label_141ef8;
            case 0x141EFCu: goto label_141efc;
            case 0x141F00u: goto label_141f00;
            case 0x141F04u: goto label_141f04;
            case 0x141F08u: goto label_141f08;
            case 0x141F0Cu: goto label_141f0c;
            case 0x141F10u: goto label_141f10;
            case 0x141F14u: goto label_141f14;
            case 0x141F18u: goto label_141f18;
            case 0x141F1Cu: goto label_141f1c;
            case 0x141F20u: goto label_141f20;
            case 0x141F24u: goto label_141f24;
            case 0x141F28u: goto label_141f28;
            case 0x141F2Cu: goto label_141f2c;
            case 0x141F30u: goto label_141f30;
            case 0x141F34u: goto label_141f34;
            case 0x141F38u: goto label_141f38;
            case 0x141F3Cu: goto label_141f3c;
            case 0x141F40u: goto label_141f40;
            case 0x141F44u: goto label_141f44;
            case 0x141F48u: goto label_141f48;
            case 0x141F4Cu: goto label_141f4c;
            case 0x141F50u: goto label_141f50;
            case 0x141F54u: goto label_141f54;
            case 0x141F58u: goto label_141f58;
            case 0x141F5Cu: goto label_141f5c;
            case 0x141F60u: goto label_141f60;
            case 0x141F64u: goto label_141f64;
            case 0x141F68u: goto label_141f68;
            case 0x141F6Cu: goto label_141f6c;
            case 0x141F70u: goto label_141f70;
            case 0x141F74u: goto label_141f74;
            case 0x141F78u: goto label_141f78;
            case 0x141F7Cu: goto label_141f7c;
            case 0x141F80u: goto label_141f80;
            case 0x141F84u: goto label_141f84;
            case 0x141F88u: goto label_141f88;
            case 0x141F8Cu: goto label_141f8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x141F8Cu;
label_141f8c:
    // 0x141f8c: 0x0
    ctx->pc = 0x141f8cu;
    // NOP
}
