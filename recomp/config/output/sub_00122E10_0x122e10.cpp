#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00122E10
// Address: 0x122e10 - 0x122fa0
void sub_00122E10_0x122e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x122e10u;

label_122e10:
    // 0x122e10: 0x3e00008
label_122e14:
    if (ctx->pc == 0x122E14u) {
        ctx->pc = 0x122E14u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->pc = 0x122E18u;
        goto label_122e18;
    }
    ctx->pc = 0x122E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122E14u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122E10u: goto label_122e10;
            case 0x122E14u: goto label_122e14;
            case 0x122E18u: goto label_122e18;
            case 0x122E1Cu: goto label_122e1c;
            case 0x122E20u: goto label_122e20;
            case 0x122E24u: goto label_122e24;
            case 0x122E28u: goto label_122e28;
            case 0x122E2Cu: goto label_122e2c;
            case 0x122E30u: goto label_122e30;
            case 0x122E34u: goto label_122e34;
            case 0x122E38u: goto label_122e38;
            case 0x122E3Cu: goto label_122e3c;
            case 0x122E40u: goto label_122e40;
            case 0x122E44u: goto label_122e44;
            case 0x122E48u: goto label_122e48;
            case 0x122E4Cu: goto label_122e4c;
            case 0x122E50u: goto label_122e50;
            case 0x122E54u: goto label_122e54;
            case 0x122E58u: goto label_122e58;
            case 0x122E5Cu: goto label_122e5c;
            case 0x122E60u: goto label_122e60;
            case 0x122E64u: goto label_122e64;
            case 0x122E68u: goto label_122e68;
            case 0x122E6Cu: goto label_122e6c;
            case 0x122E70u: goto label_122e70;
            case 0x122E74u: goto label_122e74;
            case 0x122E78u: goto label_122e78;
            case 0x122E7Cu: goto label_122e7c;
            case 0x122E80u: goto label_122e80;
            case 0x122E84u: goto label_122e84;
            case 0x122E88u: goto label_122e88;
            case 0x122E8Cu: goto label_122e8c;
            case 0x122E90u: goto label_122e90;
            case 0x122E94u: goto label_122e94;
            case 0x122E98u: goto label_122e98;
            case 0x122E9Cu: goto label_122e9c;
            case 0x122EA0u: goto label_122ea0;
            case 0x122EA4u: goto label_122ea4;
            case 0x122EA8u: goto label_122ea8;
            case 0x122EACu: goto label_122eac;
            case 0x122EB0u: goto label_122eb0;
            case 0x122EB4u: goto label_122eb4;
            case 0x122EB8u: goto label_122eb8;
            case 0x122EBCu: goto label_122ebc;
            case 0x122EC0u: goto label_122ec0;
            case 0x122EC4u: goto label_122ec4;
            case 0x122EC8u: goto label_122ec8;
            case 0x122ECCu: goto label_122ecc;
            case 0x122ED0u: goto label_122ed0;
            case 0x122ED4u: goto label_122ed4;
            case 0x122ED8u: goto label_122ed8;
            case 0x122EDCu: goto label_122edc;
            case 0x122EE0u: goto label_122ee0;
            case 0x122EE4u: goto label_122ee4;
            case 0x122EE8u: goto label_122ee8;
            case 0x122EECu: goto label_122eec;
            case 0x122EF0u: goto label_122ef0;
            case 0x122EF4u: goto label_122ef4;
            case 0x122EF8u: goto label_122ef8;
            case 0x122EFCu: goto label_122efc;
            case 0x122F00u: goto label_122f00;
            case 0x122F04u: goto label_122f04;
            case 0x122F08u: goto label_122f08;
            case 0x122F0Cu: goto label_122f0c;
            case 0x122F10u: goto label_122f10;
            case 0x122F14u: goto label_122f14;
            case 0x122F18u: goto label_122f18;
            case 0x122F1Cu: goto label_122f1c;
            case 0x122F20u: goto label_122f20;
            case 0x122F24u: goto label_122f24;
            case 0x122F28u: goto label_122f28;
            case 0x122F2Cu: goto label_122f2c;
            case 0x122F30u: goto label_122f30;
            case 0x122F34u: goto label_122f34;
            case 0x122F38u: goto label_122f38;
            case 0x122F3Cu: goto label_122f3c;
            case 0x122F40u: goto label_122f40;
            case 0x122F44u: goto label_122f44;
            case 0x122F48u: goto label_122f48;
            case 0x122F4Cu: goto label_122f4c;
            case 0x122F50u: goto label_122f50;
            case 0x122F54u: goto label_122f54;
            case 0x122F58u: goto label_122f58;
            case 0x122F5Cu: goto label_122f5c;
            case 0x122F60u: goto label_122f60;
            case 0x122F64u: goto label_122f64;
            case 0x122F68u: goto label_122f68;
            case 0x122F6Cu: goto label_122f6c;
            case 0x122F70u: goto label_122f70;
            case 0x122F74u: goto label_122f74;
            case 0x122F78u: goto label_122f78;
            case 0x122F7Cu: goto label_122f7c;
            case 0x122F80u: goto label_122f80;
            case 0x122F84u: goto label_122f84;
            case 0x122F88u: goto label_122f88;
            case 0x122F8Cu: goto label_122f8c;
            case 0x122F90u: goto label_122f90;
            case 0x122F94u: goto label_122f94;
            case 0x122F98u: goto label_122f98;
            case 0x122F9Cu: goto label_122f9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122E18u;
label_122e18:
    // 0x122e18: 0x3e00008
label_122e1c:
    if (ctx->pc == 0x122E1Cu) {
        ctx->pc = 0x122E1Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->pc = 0x122E20u;
        goto label_122e20;
    }
    ctx->pc = 0x122E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122E1Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122E10u: goto label_122e10;
            case 0x122E14u: goto label_122e14;
            case 0x122E18u: goto label_122e18;
            case 0x122E1Cu: goto label_122e1c;
            case 0x122E20u: goto label_122e20;
            case 0x122E24u: goto label_122e24;
            case 0x122E28u: goto label_122e28;
            case 0x122E2Cu: goto label_122e2c;
            case 0x122E30u: goto label_122e30;
            case 0x122E34u: goto label_122e34;
            case 0x122E38u: goto label_122e38;
            case 0x122E3Cu: goto label_122e3c;
            case 0x122E40u: goto label_122e40;
            case 0x122E44u: goto label_122e44;
            case 0x122E48u: goto label_122e48;
            case 0x122E4Cu: goto label_122e4c;
            case 0x122E50u: goto label_122e50;
            case 0x122E54u: goto label_122e54;
            case 0x122E58u: goto label_122e58;
            case 0x122E5Cu: goto label_122e5c;
            case 0x122E60u: goto label_122e60;
            case 0x122E64u: goto label_122e64;
            case 0x122E68u: goto label_122e68;
            case 0x122E6Cu: goto label_122e6c;
            case 0x122E70u: goto label_122e70;
            case 0x122E74u: goto label_122e74;
            case 0x122E78u: goto label_122e78;
            case 0x122E7Cu: goto label_122e7c;
            case 0x122E80u: goto label_122e80;
            case 0x122E84u: goto label_122e84;
            case 0x122E88u: goto label_122e88;
            case 0x122E8Cu: goto label_122e8c;
            case 0x122E90u: goto label_122e90;
            case 0x122E94u: goto label_122e94;
            case 0x122E98u: goto label_122e98;
            case 0x122E9Cu: goto label_122e9c;
            case 0x122EA0u: goto label_122ea0;
            case 0x122EA4u: goto label_122ea4;
            case 0x122EA8u: goto label_122ea8;
            case 0x122EACu: goto label_122eac;
            case 0x122EB0u: goto label_122eb0;
            case 0x122EB4u: goto label_122eb4;
            case 0x122EB8u: goto label_122eb8;
            case 0x122EBCu: goto label_122ebc;
            case 0x122EC0u: goto label_122ec0;
            case 0x122EC4u: goto label_122ec4;
            case 0x122EC8u: goto label_122ec8;
            case 0x122ECCu: goto label_122ecc;
            case 0x122ED0u: goto label_122ed0;
            case 0x122ED4u: goto label_122ed4;
            case 0x122ED8u: goto label_122ed8;
            case 0x122EDCu: goto label_122edc;
            case 0x122EE0u: goto label_122ee0;
            case 0x122EE4u: goto label_122ee4;
            case 0x122EE8u: goto label_122ee8;
            case 0x122EECu: goto label_122eec;
            case 0x122EF0u: goto label_122ef0;
            case 0x122EF4u: goto label_122ef4;
            case 0x122EF8u: goto label_122ef8;
            case 0x122EFCu: goto label_122efc;
            case 0x122F00u: goto label_122f00;
            case 0x122F04u: goto label_122f04;
            case 0x122F08u: goto label_122f08;
            case 0x122F0Cu: goto label_122f0c;
            case 0x122F10u: goto label_122f10;
            case 0x122F14u: goto label_122f14;
            case 0x122F18u: goto label_122f18;
            case 0x122F1Cu: goto label_122f1c;
            case 0x122F20u: goto label_122f20;
            case 0x122F24u: goto label_122f24;
            case 0x122F28u: goto label_122f28;
            case 0x122F2Cu: goto label_122f2c;
            case 0x122F30u: goto label_122f30;
            case 0x122F34u: goto label_122f34;
            case 0x122F38u: goto label_122f38;
            case 0x122F3Cu: goto label_122f3c;
            case 0x122F40u: goto label_122f40;
            case 0x122F44u: goto label_122f44;
            case 0x122F48u: goto label_122f48;
            case 0x122F4Cu: goto label_122f4c;
            case 0x122F50u: goto label_122f50;
            case 0x122F54u: goto label_122f54;
            case 0x122F58u: goto label_122f58;
            case 0x122F5Cu: goto label_122f5c;
            case 0x122F60u: goto label_122f60;
            case 0x122F64u: goto label_122f64;
            case 0x122F68u: goto label_122f68;
            case 0x122F6Cu: goto label_122f6c;
            case 0x122F70u: goto label_122f70;
            case 0x122F74u: goto label_122f74;
            case 0x122F78u: goto label_122f78;
            case 0x122F7Cu: goto label_122f7c;
            case 0x122F80u: goto label_122f80;
            case 0x122F84u: goto label_122f84;
            case 0x122F88u: goto label_122f88;
            case 0x122F8Cu: goto label_122f8c;
            case 0x122F90u: goto label_122f90;
            case 0x122F94u: goto label_122f94;
            case 0x122F98u: goto label_122f98;
            case 0x122F9Cu: goto label_122f9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122E20u;
label_122e20:
    // 0x122e20: 0x3e00008
label_122e24:
    if (ctx->pc == 0x122E24u) {
        ctx->pc = 0x122E24u;
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
        ctx->pc = 0x122E28u;
        goto label_122e28;
    }
    ctx->pc = 0x122E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122E24u;
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122E10u: goto label_122e10;
            case 0x122E14u: goto label_122e14;
            case 0x122E18u: goto label_122e18;
            case 0x122E1Cu: goto label_122e1c;
            case 0x122E20u: goto label_122e20;
            case 0x122E24u: goto label_122e24;
            case 0x122E28u: goto label_122e28;
            case 0x122E2Cu: goto label_122e2c;
            case 0x122E30u: goto label_122e30;
            case 0x122E34u: goto label_122e34;
            case 0x122E38u: goto label_122e38;
            case 0x122E3Cu: goto label_122e3c;
            case 0x122E40u: goto label_122e40;
            case 0x122E44u: goto label_122e44;
            case 0x122E48u: goto label_122e48;
            case 0x122E4Cu: goto label_122e4c;
            case 0x122E50u: goto label_122e50;
            case 0x122E54u: goto label_122e54;
            case 0x122E58u: goto label_122e58;
            case 0x122E5Cu: goto label_122e5c;
            case 0x122E60u: goto label_122e60;
            case 0x122E64u: goto label_122e64;
            case 0x122E68u: goto label_122e68;
            case 0x122E6Cu: goto label_122e6c;
            case 0x122E70u: goto label_122e70;
            case 0x122E74u: goto label_122e74;
            case 0x122E78u: goto label_122e78;
            case 0x122E7Cu: goto label_122e7c;
            case 0x122E80u: goto label_122e80;
            case 0x122E84u: goto label_122e84;
            case 0x122E88u: goto label_122e88;
            case 0x122E8Cu: goto label_122e8c;
            case 0x122E90u: goto label_122e90;
            case 0x122E94u: goto label_122e94;
            case 0x122E98u: goto label_122e98;
            case 0x122E9Cu: goto label_122e9c;
            case 0x122EA0u: goto label_122ea0;
            case 0x122EA4u: goto label_122ea4;
            case 0x122EA8u: goto label_122ea8;
            case 0x122EACu: goto label_122eac;
            case 0x122EB0u: goto label_122eb0;
            case 0x122EB4u: goto label_122eb4;
            case 0x122EB8u: goto label_122eb8;
            case 0x122EBCu: goto label_122ebc;
            case 0x122EC0u: goto label_122ec0;
            case 0x122EC4u: goto label_122ec4;
            case 0x122EC8u: goto label_122ec8;
            case 0x122ECCu: goto label_122ecc;
            case 0x122ED0u: goto label_122ed0;
            case 0x122ED4u: goto label_122ed4;
            case 0x122ED8u: goto label_122ed8;
            case 0x122EDCu: goto label_122edc;
            case 0x122EE0u: goto label_122ee0;
            case 0x122EE4u: goto label_122ee4;
            case 0x122EE8u: goto label_122ee8;
            case 0x122EECu: goto label_122eec;
            case 0x122EF0u: goto label_122ef0;
            case 0x122EF4u: goto label_122ef4;
            case 0x122EF8u: goto label_122ef8;
            case 0x122EFCu: goto label_122efc;
            case 0x122F00u: goto label_122f00;
            case 0x122F04u: goto label_122f04;
            case 0x122F08u: goto label_122f08;
            case 0x122F0Cu: goto label_122f0c;
            case 0x122F10u: goto label_122f10;
            case 0x122F14u: goto label_122f14;
            case 0x122F18u: goto label_122f18;
            case 0x122F1Cu: goto label_122f1c;
            case 0x122F20u: goto label_122f20;
            case 0x122F24u: goto label_122f24;
            case 0x122F28u: goto label_122f28;
            case 0x122F2Cu: goto label_122f2c;
            case 0x122F30u: goto label_122f30;
            case 0x122F34u: goto label_122f34;
            case 0x122F38u: goto label_122f38;
            case 0x122F3Cu: goto label_122f3c;
            case 0x122F40u: goto label_122f40;
            case 0x122F44u: goto label_122f44;
            case 0x122F48u: goto label_122f48;
            case 0x122F4Cu: goto label_122f4c;
            case 0x122F50u: goto label_122f50;
            case 0x122F54u: goto label_122f54;
            case 0x122F58u: goto label_122f58;
            case 0x122F5Cu: goto label_122f5c;
            case 0x122F60u: goto label_122f60;
            case 0x122F64u: goto label_122f64;
            case 0x122F68u: goto label_122f68;
            case 0x122F6Cu: goto label_122f6c;
            case 0x122F70u: goto label_122f70;
            case 0x122F74u: goto label_122f74;
            case 0x122F78u: goto label_122f78;
            case 0x122F7Cu: goto label_122f7c;
            case 0x122F80u: goto label_122f80;
            case 0x122F84u: goto label_122f84;
            case 0x122F88u: goto label_122f88;
            case 0x122F8Cu: goto label_122f8c;
            case 0x122F90u: goto label_122f90;
            case 0x122F94u: goto label_122f94;
            case 0x122F98u: goto label_122f98;
            case 0x122F9Cu: goto label_122f9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122E28u;
label_122e28:
    // 0x122e28: 0x3e00008
label_122e2c:
    if (ctx->pc == 0x122E2Cu) {
        ctx->pc = 0x122E2Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x122E30u;
        goto label_122e30;
    }
    ctx->pc = 0x122E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122E2Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122E10u: goto label_122e10;
            case 0x122E14u: goto label_122e14;
            case 0x122E18u: goto label_122e18;
            case 0x122E1Cu: goto label_122e1c;
            case 0x122E20u: goto label_122e20;
            case 0x122E24u: goto label_122e24;
            case 0x122E28u: goto label_122e28;
            case 0x122E2Cu: goto label_122e2c;
            case 0x122E30u: goto label_122e30;
            case 0x122E34u: goto label_122e34;
            case 0x122E38u: goto label_122e38;
            case 0x122E3Cu: goto label_122e3c;
            case 0x122E40u: goto label_122e40;
            case 0x122E44u: goto label_122e44;
            case 0x122E48u: goto label_122e48;
            case 0x122E4Cu: goto label_122e4c;
            case 0x122E50u: goto label_122e50;
            case 0x122E54u: goto label_122e54;
            case 0x122E58u: goto label_122e58;
            case 0x122E5Cu: goto label_122e5c;
            case 0x122E60u: goto label_122e60;
            case 0x122E64u: goto label_122e64;
            case 0x122E68u: goto label_122e68;
            case 0x122E6Cu: goto label_122e6c;
            case 0x122E70u: goto label_122e70;
            case 0x122E74u: goto label_122e74;
            case 0x122E78u: goto label_122e78;
            case 0x122E7Cu: goto label_122e7c;
            case 0x122E80u: goto label_122e80;
            case 0x122E84u: goto label_122e84;
            case 0x122E88u: goto label_122e88;
            case 0x122E8Cu: goto label_122e8c;
            case 0x122E90u: goto label_122e90;
            case 0x122E94u: goto label_122e94;
            case 0x122E98u: goto label_122e98;
            case 0x122E9Cu: goto label_122e9c;
            case 0x122EA0u: goto label_122ea0;
            case 0x122EA4u: goto label_122ea4;
            case 0x122EA8u: goto label_122ea8;
            case 0x122EACu: goto label_122eac;
            case 0x122EB0u: goto label_122eb0;
            case 0x122EB4u: goto label_122eb4;
            case 0x122EB8u: goto label_122eb8;
            case 0x122EBCu: goto label_122ebc;
            case 0x122EC0u: goto label_122ec0;
            case 0x122EC4u: goto label_122ec4;
            case 0x122EC8u: goto label_122ec8;
            case 0x122ECCu: goto label_122ecc;
            case 0x122ED0u: goto label_122ed0;
            case 0x122ED4u: goto label_122ed4;
            case 0x122ED8u: goto label_122ed8;
            case 0x122EDCu: goto label_122edc;
            case 0x122EE0u: goto label_122ee0;
            case 0x122EE4u: goto label_122ee4;
            case 0x122EE8u: goto label_122ee8;
            case 0x122EECu: goto label_122eec;
            case 0x122EF0u: goto label_122ef0;
            case 0x122EF4u: goto label_122ef4;
            case 0x122EF8u: goto label_122ef8;
            case 0x122EFCu: goto label_122efc;
            case 0x122F00u: goto label_122f00;
            case 0x122F04u: goto label_122f04;
            case 0x122F08u: goto label_122f08;
            case 0x122F0Cu: goto label_122f0c;
            case 0x122F10u: goto label_122f10;
            case 0x122F14u: goto label_122f14;
            case 0x122F18u: goto label_122f18;
            case 0x122F1Cu: goto label_122f1c;
            case 0x122F20u: goto label_122f20;
            case 0x122F24u: goto label_122f24;
            case 0x122F28u: goto label_122f28;
            case 0x122F2Cu: goto label_122f2c;
            case 0x122F30u: goto label_122f30;
            case 0x122F34u: goto label_122f34;
            case 0x122F38u: goto label_122f38;
            case 0x122F3Cu: goto label_122f3c;
            case 0x122F40u: goto label_122f40;
            case 0x122F44u: goto label_122f44;
            case 0x122F48u: goto label_122f48;
            case 0x122F4Cu: goto label_122f4c;
            case 0x122F50u: goto label_122f50;
            case 0x122F54u: goto label_122f54;
            case 0x122F58u: goto label_122f58;
            case 0x122F5Cu: goto label_122f5c;
            case 0x122F60u: goto label_122f60;
            case 0x122F64u: goto label_122f64;
            case 0x122F68u: goto label_122f68;
            case 0x122F6Cu: goto label_122f6c;
            case 0x122F70u: goto label_122f70;
            case 0x122F74u: goto label_122f74;
            case 0x122F78u: goto label_122f78;
            case 0x122F7Cu: goto label_122f7c;
            case 0x122F80u: goto label_122f80;
            case 0x122F84u: goto label_122f84;
            case 0x122F88u: goto label_122f88;
            case 0x122F8Cu: goto label_122f8c;
            case 0x122F90u: goto label_122f90;
            case 0x122F94u: goto label_122f94;
            case 0x122F98u: goto label_122f98;
            case 0x122F9Cu: goto label_122f9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122E30u;
label_122e30:
    // 0x122e30: 0x3e00008
label_122e34:
    if (ctx->pc == 0x122E34u) {
        ctx->pc = 0x122E34u;
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->pc = 0x122E38u;
        goto label_122e38;
    }
    ctx->pc = 0x122E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122E34u;
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122E10u: goto label_122e10;
            case 0x122E14u: goto label_122e14;
            case 0x122E18u: goto label_122e18;
            case 0x122E1Cu: goto label_122e1c;
            case 0x122E20u: goto label_122e20;
            case 0x122E24u: goto label_122e24;
            case 0x122E28u: goto label_122e28;
            case 0x122E2Cu: goto label_122e2c;
            case 0x122E30u: goto label_122e30;
            case 0x122E34u: goto label_122e34;
            case 0x122E38u: goto label_122e38;
            case 0x122E3Cu: goto label_122e3c;
            case 0x122E40u: goto label_122e40;
            case 0x122E44u: goto label_122e44;
            case 0x122E48u: goto label_122e48;
            case 0x122E4Cu: goto label_122e4c;
            case 0x122E50u: goto label_122e50;
            case 0x122E54u: goto label_122e54;
            case 0x122E58u: goto label_122e58;
            case 0x122E5Cu: goto label_122e5c;
            case 0x122E60u: goto label_122e60;
            case 0x122E64u: goto label_122e64;
            case 0x122E68u: goto label_122e68;
            case 0x122E6Cu: goto label_122e6c;
            case 0x122E70u: goto label_122e70;
            case 0x122E74u: goto label_122e74;
            case 0x122E78u: goto label_122e78;
            case 0x122E7Cu: goto label_122e7c;
            case 0x122E80u: goto label_122e80;
            case 0x122E84u: goto label_122e84;
            case 0x122E88u: goto label_122e88;
            case 0x122E8Cu: goto label_122e8c;
            case 0x122E90u: goto label_122e90;
            case 0x122E94u: goto label_122e94;
            case 0x122E98u: goto label_122e98;
            case 0x122E9Cu: goto label_122e9c;
            case 0x122EA0u: goto label_122ea0;
            case 0x122EA4u: goto label_122ea4;
            case 0x122EA8u: goto label_122ea8;
            case 0x122EACu: goto label_122eac;
            case 0x122EB0u: goto label_122eb0;
            case 0x122EB4u: goto label_122eb4;
            case 0x122EB8u: goto label_122eb8;
            case 0x122EBCu: goto label_122ebc;
            case 0x122EC0u: goto label_122ec0;
            case 0x122EC4u: goto label_122ec4;
            case 0x122EC8u: goto label_122ec8;
            case 0x122ECCu: goto label_122ecc;
            case 0x122ED0u: goto label_122ed0;
            case 0x122ED4u: goto label_122ed4;
            case 0x122ED8u: goto label_122ed8;
            case 0x122EDCu: goto label_122edc;
            case 0x122EE0u: goto label_122ee0;
            case 0x122EE4u: goto label_122ee4;
            case 0x122EE8u: goto label_122ee8;
            case 0x122EECu: goto label_122eec;
            case 0x122EF0u: goto label_122ef0;
            case 0x122EF4u: goto label_122ef4;
            case 0x122EF8u: goto label_122ef8;
            case 0x122EFCu: goto label_122efc;
            case 0x122F00u: goto label_122f00;
            case 0x122F04u: goto label_122f04;
            case 0x122F08u: goto label_122f08;
            case 0x122F0Cu: goto label_122f0c;
            case 0x122F10u: goto label_122f10;
            case 0x122F14u: goto label_122f14;
            case 0x122F18u: goto label_122f18;
            case 0x122F1Cu: goto label_122f1c;
            case 0x122F20u: goto label_122f20;
            case 0x122F24u: goto label_122f24;
            case 0x122F28u: goto label_122f28;
            case 0x122F2Cu: goto label_122f2c;
            case 0x122F30u: goto label_122f30;
            case 0x122F34u: goto label_122f34;
            case 0x122F38u: goto label_122f38;
            case 0x122F3Cu: goto label_122f3c;
            case 0x122F40u: goto label_122f40;
            case 0x122F44u: goto label_122f44;
            case 0x122F48u: goto label_122f48;
            case 0x122F4Cu: goto label_122f4c;
            case 0x122F50u: goto label_122f50;
            case 0x122F54u: goto label_122f54;
            case 0x122F58u: goto label_122f58;
            case 0x122F5Cu: goto label_122f5c;
            case 0x122F60u: goto label_122f60;
            case 0x122F64u: goto label_122f64;
            case 0x122F68u: goto label_122f68;
            case 0x122F6Cu: goto label_122f6c;
            case 0x122F70u: goto label_122f70;
            case 0x122F74u: goto label_122f74;
            case 0x122F78u: goto label_122f78;
            case 0x122F7Cu: goto label_122f7c;
            case 0x122F80u: goto label_122f80;
            case 0x122F84u: goto label_122f84;
            case 0x122F88u: goto label_122f88;
            case 0x122F8Cu: goto label_122f8c;
            case 0x122F90u: goto label_122f90;
            case 0x122F94u: goto label_122f94;
            case 0x122F98u: goto label_122f98;
            case 0x122F9Cu: goto label_122f9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122E38u;
label_122e38:
    // 0x122e38: 0x3e00008
label_122e3c:
    if (ctx->pc == 0x122E3Cu) {
        ctx->pc = 0x122E3Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x122E40u;
        goto label_122e40;
    }
    ctx->pc = 0x122E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122E3Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122E10u: goto label_122e10;
            case 0x122E14u: goto label_122e14;
            case 0x122E18u: goto label_122e18;
            case 0x122E1Cu: goto label_122e1c;
            case 0x122E20u: goto label_122e20;
            case 0x122E24u: goto label_122e24;
            case 0x122E28u: goto label_122e28;
            case 0x122E2Cu: goto label_122e2c;
            case 0x122E30u: goto label_122e30;
            case 0x122E34u: goto label_122e34;
            case 0x122E38u: goto label_122e38;
            case 0x122E3Cu: goto label_122e3c;
            case 0x122E40u: goto label_122e40;
            case 0x122E44u: goto label_122e44;
            case 0x122E48u: goto label_122e48;
            case 0x122E4Cu: goto label_122e4c;
            case 0x122E50u: goto label_122e50;
            case 0x122E54u: goto label_122e54;
            case 0x122E58u: goto label_122e58;
            case 0x122E5Cu: goto label_122e5c;
            case 0x122E60u: goto label_122e60;
            case 0x122E64u: goto label_122e64;
            case 0x122E68u: goto label_122e68;
            case 0x122E6Cu: goto label_122e6c;
            case 0x122E70u: goto label_122e70;
            case 0x122E74u: goto label_122e74;
            case 0x122E78u: goto label_122e78;
            case 0x122E7Cu: goto label_122e7c;
            case 0x122E80u: goto label_122e80;
            case 0x122E84u: goto label_122e84;
            case 0x122E88u: goto label_122e88;
            case 0x122E8Cu: goto label_122e8c;
            case 0x122E90u: goto label_122e90;
            case 0x122E94u: goto label_122e94;
            case 0x122E98u: goto label_122e98;
            case 0x122E9Cu: goto label_122e9c;
            case 0x122EA0u: goto label_122ea0;
            case 0x122EA4u: goto label_122ea4;
            case 0x122EA8u: goto label_122ea8;
            case 0x122EACu: goto label_122eac;
            case 0x122EB0u: goto label_122eb0;
            case 0x122EB4u: goto label_122eb4;
            case 0x122EB8u: goto label_122eb8;
            case 0x122EBCu: goto label_122ebc;
            case 0x122EC0u: goto label_122ec0;
            case 0x122EC4u: goto label_122ec4;
            case 0x122EC8u: goto label_122ec8;
            case 0x122ECCu: goto label_122ecc;
            case 0x122ED0u: goto label_122ed0;
            case 0x122ED4u: goto label_122ed4;
            case 0x122ED8u: goto label_122ed8;
            case 0x122EDCu: goto label_122edc;
            case 0x122EE0u: goto label_122ee0;
            case 0x122EE4u: goto label_122ee4;
            case 0x122EE8u: goto label_122ee8;
            case 0x122EECu: goto label_122eec;
            case 0x122EF0u: goto label_122ef0;
            case 0x122EF4u: goto label_122ef4;
            case 0x122EF8u: goto label_122ef8;
            case 0x122EFCu: goto label_122efc;
            case 0x122F00u: goto label_122f00;
            case 0x122F04u: goto label_122f04;
            case 0x122F08u: goto label_122f08;
            case 0x122F0Cu: goto label_122f0c;
            case 0x122F10u: goto label_122f10;
            case 0x122F14u: goto label_122f14;
            case 0x122F18u: goto label_122f18;
            case 0x122F1Cu: goto label_122f1c;
            case 0x122F20u: goto label_122f20;
            case 0x122F24u: goto label_122f24;
            case 0x122F28u: goto label_122f28;
            case 0x122F2Cu: goto label_122f2c;
            case 0x122F30u: goto label_122f30;
            case 0x122F34u: goto label_122f34;
            case 0x122F38u: goto label_122f38;
            case 0x122F3Cu: goto label_122f3c;
            case 0x122F40u: goto label_122f40;
            case 0x122F44u: goto label_122f44;
            case 0x122F48u: goto label_122f48;
            case 0x122F4Cu: goto label_122f4c;
            case 0x122F50u: goto label_122f50;
            case 0x122F54u: goto label_122f54;
            case 0x122F58u: goto label_122f58;
            case 0x122F5Cu: goto label_122f5c;
            case 0x122F60u: goto label_122f60;
            case 0x122F64u: goto label_122f64;
            case 0x122F68u: goto label_122f68;
            case 0x122F6Cu: goto label_122f6c;
            case 0x122F70u: goto label_122f70;
            case 0x122F74u: goto label_122f74;
            case 0x122F78u: goto label_122f78;
            case 0x122F7Cu: goto label_122f7c;
            case 0x122F80u: goto label_122f80;
            case 0x122F84u: goto label_122f84;
            case 0x122F88u: goto label_122f88;
            case 0x122F8Cu: goto label_122f8c;
            case 0x122F90u: goto label_122f90;
            case 0x122F94u: goto label_122f94;
            case 0x122F98u: goto label_122f98;
            case 0x122F9Cu: goto label_122f9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122E40u;
label_122e40:
    // 0x122e40: 0x27bdfff0
    ctx->pc = 0x122e40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_122e44:
    // 0x122e44: 0xffbf0000
    ctx->pc = 0x122e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_122e48:
    // 0x122e48: 0x8c8200bc
    ctx->pc = 0x122e48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_122e4c:
    // 0x122e4c: 0x10400005
label_122e50:
    if (ctx->pc == 0x122E50u) {
        ctx->pc = 0x122E50u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x122E54u;
        goto label_122e54;
    }
    ctx->pc = 0x122E4Cu;
    {
        const bool branch_taken_0x122e4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x122E50u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x122e4c) {
            ctx->pc = 0x122E64u;
            goto label_122e64;
        }
    }
    ctx->pc = 0x122E54u;
label_122e54:
    // 0x122e54: 0x3c020021
    ctx->pc = 0x122e54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_122e58:
    // 0x122e58: 0x8c43b718
    ctx->pc = 0x122e58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294948632)));
label_122e5c:
    // 0x122e5c: 0x60f809
label_122e60:
    if (ctx->pc == 0x122E60u) {
        ctx->pc = 0x122E64u;
        goto label_122e64;
    }
    ctx->pc = 0x122E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x122E64u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122E10u: goto label_122e10;
            case 0x122E14u: goto label_122e14;
            case 0x122E18u: goto label_122e18;
            case 0x122E1Cu: goto label_122e1c;
            case 0x122E20u: goto label_122e20;
            case 0x122E24u: goto label_122e24;
            case 0x122E28u: goto label_122e28;
            case 0x122E2Cu: goto label_122e2c;
            case 0x122E30u: goto label_122e30;
            case 0x122E34u: goto label_122e34;
            case 0x122E38u: goto label_122e38;
            case 0x122E3Cu: goto label_122e3c;
            case 0x122E40u: goto label_122e40;
            case 0x122E44u: goto label_122e44;
            case 0x122E48u: goto label_122e48;
            case 0x122E4Cu: goto label_122e4c;
            case 0x122E50u: goto label_122e50;
            case 0x122E54u: goto label_122e54;
            case 0x122E58u: goto label_122e58;
            case 0x122E5Cu: goto label_122e5c;
            case 0x122E60u: goto label_122e60;
            case 0x122E64u: goto label_122e64;
            case 0x122E68u: goto label_122e68;
            case 0x122E6Cu: goto label_122e6c;
            case 0x122E70u: goto label_122e70;
            case 0x122E74u: goto label_122e74;
            case 0x122E78u: goto label_122e78;
            case 0x122E7Cu: goto label_122e7c;
            case 0x122E80u: goto label_122e80;
            case 0x122E84u: goto label_122e84;
            case 0x122E88u: goto label_122e88;
            case 0x122E8Cu: goto label_122e8c;
            case 0x122E90u: goto label_122e90;
            case 0x122E94u: goto label_122e94;
            case 0x122E98u: goto label_122e98;
            case 0x122E9Cu: goto label_122e9c;
            case 0x122EA0u: goto label_122ea0;
            case 0x122EA4u: goto label_122ea4;
            case 0x122EA8u: goto label_122ea8;
            case 0x122EACu: goto label_122eac;
            case 0x122EB0u: goto label_122eb0;
            case 0x122EB4u: goto label_122eb4;
            case 0x122EB8u: goto label_122eb8;
            case 0x122EBCu: goto label_122ebc;
            case 0x122EC0u: goto label_122ec0;
            case 0x122EC4u: goto label_122ec4;
            case 0x122EC8u: goto label_122ec8;
            case 0x122ECCu: goto label_122ecc;
            case 0x122ED0u: goto label_122ed0;
            case 0x122ED4u: goto label_122ed4;
            case 0x122ED8u: goto label_122ed8;
            case 0x122EDCu: goto label_122edc;
            case 0x122EE0u: goto label_122ee0;
            case 0x122EE4u: goto label_122ee4;
            case 0x122EE8u: goto label_122ee8;
            case 0x122EECu: goto label_122eec;
            case 0x122EF0u: goto label_122ef0;
            case 0x122EF4u: goto label_122ef4;
            case 0x122EF8u: goto label_122ef8;
            case 0x122EFCu: goto label_122efc;
            case 0x122F00u: goto label_122f00;
            case 0x122F04u: goto label_122f04;
            case 0x122F08u: goto label_122f08;
            case 0x122F0Cu: goto label_122f0c;
            case 0x122F10u: goto label_122f10;
            case 0x122F14u: goto label_122f14;
            case 0x122F18u: goto label_122f18;
            case 0x122F1Cu: goto label_122f1c;
            case 0x122F20u: goto label_122f20;
            case 0x122F24u: goto label_122f24;
            case 0x122F28u: goto label_122f28;
            case 0x122F2Cu: goto label_122f2c;
            case 0x122F30u: goto label_122f30;
            case 0x122F34u: goto label_122f34;
            case 0x122F38u: goto label_122f38;
            case 0x122F3Cu: goto label_122f3c;
            case 0x122F40u: goto label_122f40;
            case 0x122F44u: goto label_122f44;
            case 0x122F48u: goto label_122f48;
            case 0x122F4Cu: goto label_122f4c;
            case 0x122F50u: goto label_122f50;
            case 0x122F54u: goto label_122f54;
            case 0x122F58u: goto label_122f58;
            case 0x122F5Cu: goto label_122f5c;
            case 0x122F60u: goto label_122f60;
            case 0x122F64u: goto label_122f64;
            case 0x122F68u: goto label_122f68;
            case 0x122F6Cu: goto label_122f6c;
            case 0x122F70u: goto label_122f70;
            case 0x122F74u: goto label_122f74;
            case 0x122F78u: goto label_122f78;
            case 0x122F7Cu: goto label_122f7c;
            case 0x122F80u: goto label_122f80;
            case 0x122F84u: goto label_122f84;
            case 0x122F88u: goto label_122f88;
            case 0x122F8Cu: goto label_122f8c;
            case 0x122F90u: goto label_122f90;
            case 0x122F94u: goto label_122f94;
            case 0x122F98u: goto label_122f98;
            case 0x122F9Cu: goto label_122f9c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x122E64u; }
            if (ctx->pc != 0x122E64u) { return; }
        }
    }
    ctx->pc = 0x122E64u;
label_122e64:
    // 0x122e64: 0xdfbf0000
    ctx->pc = 0x122e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_122e68:
    // 0x122e68: 0x3e00008
label_122e6c:
    if (ctx->pc == 0x122E6Cu) {
        ctx->pc = 0x122E6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x122E70u;
        goto label_122e70;
    }
    ctx->pc = 0x122E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122E6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122E10u: goto label_122e10;
            case 0x122E14u: goto label_122e14;
            case 0x122E18u: goto label_122e18;
            case 0x122E1Cu: goto label_122e1c;
            case 0x122E20u: goto label_122e20;
            case 0x122E24u: goto label_122e24;
            case 0x122E28u: goto label_122e28;
            case 0x122E2Cu: goto label_122e2c;
            case 0x122E30u: goto label_122e30;
            case 0x122E34u: goto label_122e34;
            case 0x122E38u: goto label_122e38;
            case 0x122E3Cu: goto label_122e3c;
            case 0x122E40u: goto label_122e40;
            case 0x122E44u: goto label_122e44;
            case 0x122E48u: goto label_122e48;
            case 0x122E4Cu: goto label_122e4c;
            case 0x122E50u: goto label_122e50;
            case 0x122E54u: goto label_122e54;
            case 0x122E58u: goto label_122e58;
            case 0x122E5Cu: goto label_122e5c;
            case 0x122E60u: goto label_122e60;
            case 0x122E64u: goto label_122e64;
            case 0x122E68u: goto label_122e68;
            case 0x122E6Cu: goto label_122e6c;
            case 0x122E70u: goto label_122e70;
            case 0x122E74u: goto label_122e74;
            case 0x122E78u: goto label_122e78;
            case 0x122E7Cu: goto label_122e7c;
            case 0x122E80u: goto label_122e80;
            case 0x122E84u: goto label_122e84;
            case 0x122E88u: goto label_122e88;
            case 0x122E8Cu: goto label_122e8c;
            case 0x122E90u: goto label_122e90;
            case 0x122E94u: goto label_122e94;
            case 0x122E98u: goto label_122e98;
            case 0x122E9Cu: goto label_122e9c;
            case 0x122EA0u: goto label_122ea0;
            case 0x122EA4u: goto label_122ea4;
            case 0x122EA8u: goto label_122ea8;
            case 0x122EACu: goto label_122eac;
            case 0x122EB0u: goto label_122eb0;
            case 0x122EB4u: goto label_122eb4;
            case 0x122EB8u: goto label_122eb8;
            case 0x122EBCu: goto label_122ebc;
            case 0x122EC0u: goto label_122ec0;
            case 0x122EC4u: goto label_122ec4;
            case 0x122EC8u: goto label_122ec8;
            case 0x122ECCu: goto label_122ecc;
            case 0x122ED0u: goto label_122ed0;
            case 0x122ED4u: goto label_122ed4;
            case 0x122ED8u: goto label_122ed8;
            case 0x122EDCu: goto label_122edc;
            case 0x122EE0u: goto label_122ee0;
            case 0x122EE4u: goto label_122ee4;
            case 0x122EE8u: goto label_122ee8;
            case 0x122EECu: goto label_122eec;
            case 0x122EF0u: goto label_122ef0;
            case 0x122EF4u: goto label_122ef4;
            case 0x122EF8u: goto label_122ef8;
            case 0x122EFCu: goto label_122efc;
            case 0x122F00u: goto label_122f00;
            case 0x122F04u: goto label_122f04;
            case 0x122F08u: goto label_122f08;
            case 0x122F0Cu: goto label_122f0c;
            case 0x122F10u: goto label_122f10;
            case 0x122F14u: goto label_122f14;
            case 0x122F18u: goto label_122f18;
            case 0x122F1Cu: goto label_122f1c;
            case 0x122F20u: goto label_122f20;
            case 0x122F24u: goto label_122f24;
            case 0x122F28u: goto label_122f28;
            case 0x122F2Cu: goto label_122f2c;
            case 0x122F30u: goto label_122f30;
            case 0x122F34u: goto label_122f34;
            case 0x122F38u: goto label_122f38;
            case 0x122F3Cu: goto label_122f3c;
            case 0x122F40u: goto label_122f40;
            case 0x122F44u: goto label_122f44;
            case 0x122F48u: goto label_122f48;
            case 0x122F4Cu: goto label_122f4c;
            case 0x122F50u: goto label_122f50;
            case 0x122F54u: goto label_122f54;
            case 0x122F58u: goto label_122f58;
            case 0x122F5Cu: goto label_122f5c;
            case 0x122F60u: goto label_122f60;
            case 0x122F64u: goto label_122f64;
            case 0x122F68u: goto label_122f68;
            case 0x122F6Cu: goto label_122f6c;
            case 0x122F70u: goto label_122f70;
            case 0x122F74u: goto label_122f74;
            case 0x122F78u: goto label_122f78;
            case 0x122F7Cu: goto label_122f7c;
            case 0x122F80u: goto label_122f80;
            case 0x122F84u: goto label_122f84;
            case 0x122F88u: goto label_122f88;
            case 0x122F8Cu: goto label_122f8c;
            case 0x122F90u: goto label_122f90;
            case 0x122F94u: goto label_122f94;
            case 0x122F98u: goto label_122f98;
            case 0x122F9Cu: goto label_122f9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122E70u;
label_122e70:
    // 0x122e70: 0x24020600
    ctx->pc = 0x122e70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1536));
label_122e74:
    // 0x122e74: 0xac8500c0
    ctx->pc = 0x122e74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 5));
label_122e78:
    // 0x122e78: 0xa2001a
    ctx->pc = 0x122e78u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_122e7c:
    // 0x122e7c: 0x50400001
label_122e80:
    if (ctx->pc == 0x122E80u) {
        ctx->pc = 0x122E80u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x122E84u;
        goto label_122e84;
    }
    ctx->pc = 0x122E7Cu;
    {
        const bool branch_taken_0x122e7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x122e7c) {
            ctx->pc = 0x122E80u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x122E84u;
            goto label_122e84;
        }
    }
    ctx->pc = 0x122E84u;
label_122e84:
    // 0x122e84: 0x1812
    ctx->pc = 0x122e84u;
    SET_GPR_U32(ctx, 3, ctx->lo);
label_122e88:
    // 0x122e88: 0x3e00008
label_122e8c:
    if (ctx->pc == 0x122E8Cu) {
        ctx->pc = 0x122E8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 3));
        ctx->pc = 0x122E90u;
        goto label_122e90;
    }
    ctx->pc = 0x122E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122E8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122E10u: goto label_122e10;
            case 0x122E14u: goto label_122e14;
            case 0x122E18u: goto label_122e18;
            case 0x122E1Cu: goto label_122e1c;
            case 0x122E20u: goto label_122e20;
            case 0x122E24u: goto label_122e24;
            case 0x122E28u: goto label_122e28;
            case 0x122E2Cu: goto label_122e2c;
            case 0x122E30u: goto label_122e30;
            case 0x122E34u: goto label_122e34;
            case 0x122E38u: goto label_122e38;
            case 0x122E3Cu: goto label_122e3c;
            case 0x122E40u: goto label_122e40;
            case 0x122E44u: goto label_122e44;
            case 0x122E48u: goto label_122e48;
            case 0x122E4Cu: goto label_122e4c;
            case 0x122E50u: goto label_122e50;
            case 0x122E54u: goto label_122e54;
            case 0x122E58u: goto label_122e58;
            case 0x122E5Cu: goto label_122e5c;
            case 0x122E60u: goto label_122e60;
            case 0x122E64u: goto label_122e64;
            case 0x122E68u: goto label_122e68;
            case 0x122E6Cu: goto label_122e6c;
            case 0x122E70u: goto label_122e70;
            case 0x122E74u: goto label_122e74;
            case 0x122E78u: goto label_122e78;
            case 0x122E7Cu: goto label_122e7c;
            case 0x122E80u: goto label_122e80;
            case 0x122E84u: goto label_122e84;
            case 0x122E88u: goto label_122e88;
            case 0x122E8Cu: goto label_122e8c;
            case 0x122E90u: goto label_122e90;
            case 0x122E94u: goto label_122e94;
            case 0x122E98u: goto label_122e98;
            case 0x122E9Cu: goto label_122e9c;
            case 0x122EA0u: goto label_122ea0;
            case 0x122EA4u: goto label_122ea4;
            case 0x122EA8u: goto label_122ea8;
            case 0x122EACu: goto label_122eac;
            case 0x122EB0u: goto label_122eb0;
            case 0x122EB4u: goto label_122eb4;
            case 0x122EB8u: goto label_122eb8;
            case 0x122EBCu: goto label_122ebc;
            case 0x122EC0u: goto label_122ec0;
            case 0x122EC4u: goto label_122ec4;
            case 0x122EC8u: goto label_122ec8;
            case 0x122ECCu: goto label_122ecc;
            case 0x122ED0u: goto label_122ed0;
            case 0x122ED4u: goto label_122ed4;
            case 0x122ED8u: goto label_122ed8;
            case 0x122EDCu: goto label_122edc;
            case 0x122EE0u: goto label_122ee0;
            case 0x122EE4u: goto label_122ee4;
            case 0x122EE8u: goto label_122ee8;
            case 0x122EECu: goto label_122eec;
            case 0x122EF0u: goto label_122ef0;
            case 0x122EF4u: goto label_122ef4;
            case 0x122EF8u: goto label_122ef8;
            case 0x122EFCu: goto label_122efc;
            case 0x122F00u: goto label_122f00;
            case 0x122F04u: goto label_122f04;
            case 0x122F08u: goto label_122f08;
            case 0x122F0Cu: goto label_122f0c;
            case 0x122F10u: goto label_122f10;
            case 0x122F14u: goto label_122f14;
            case 0x122F18u: goto label_122f18;
            case 0x122F1Cu: goto label_122f1c;
            case 0x122F20u: goto label_122f20;
            case 0x122F24u: goto label_122f24;
            case 0x122F28u: goto label_122f28;
            case 0x122F2Cu: goto label_122f2c;
            case 0x122F30u: goto label_122f30;
            case 0x122F34u: goto label_122f34;
            case 0x122F38u: goto label_122f38;
            case 0x122F3Cu: goto label_122f3c;
            case 0x122F40u: goto label_122f40;
            case 0x122F44u: goto label_122f44;
            case 0x122F48u: goto label_122f48;
            case 0x122F4Cu: goto label_122f4c;
            case 0x122F50u: goto label_122f50;
            case 0x122F54u: goto label_122f54;
            case 0x122F58u: goto label_122f58;
            case 0x122F5Cu: goto label_122f5c;
            case 0x122F60u: goto label_122f60;
            case 0x122F64u: goto label_122f64;
            case 0x122F68u: goto label_122f68;
            case 0x122F6Cu: goto label_122f6c;
            case 0x122F70u: goto label_122f70;
            case 0x122F74u: goto label_122f74;
            case 0x122F78u: goto label_122f78;
            case 0x122F7Cu: goto label_122f7c;
            case 0x122F80u: goto label_122f80;
            case 0x122F84u: goto label_122f84;
            case 0x122F88u: goto label_122f88;
            case 0x122F8Cu: goto label_122f8c;
            case 0x122F90u: goto label_122f90;
            case 0x122F94u: goto label_122f94;
            case 0x122F98u: goto label_122f98;
            case 0x122F9Cu: goto label_122f9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122E90u;
label_122e90:
    // 0x122e90: 0x27bdfff0
    ctx->pc = 0x122e90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_122e94:
    // 0x122e94: 0xffbf0000
    ctx->pc = 0x122e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_122e98:
    // 0x122e98: 0x8c8200bc
    ctx->pc = 0x122e98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_122e9c:
    // 0x122e9c: 0x10400005
label_122ea0:
    if (ctx->pc == 0x122EA0u) {
        ctx->pc = 0x122EA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x122EA4u;
        goto label_122ea4;
    }
    ctx->pc = 0x122E9Cu;
    {
        const bool branch_taken_0x122e9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x122EA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x122e9c) {
            ctx->pc = 0x122EB4u;
            goto label_122eb4;
        }
    }
    ctx->pc = 0x122EA4u;
label_122ea4:
    // 0x122ea4: 0x3c020021
    ctx->pc = 0x122ea4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_122ea8:
    // 0x122ea8: 0x8c43b71c
    ctx->pc = 0x122ea8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294948636)));
label_122eac:
    // 0x122eac: 0x60f809
label_122eb0:
    if (ctx->pc == 0x122EB0u) {
        ctx->pc = 0x122EB4u;
        goto label_122eb4;
    }
    ctx->pc = 0x122EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x122EB4u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122E10u: goto label_122e10;
            case 0x122E14u: goto label_122e14;
            case 0x122E18u: goto label_122e18;
            case 0x122E1Cu: goto label_122e1c;
            case 0x122E20u: goto label_122e20;
            case 0x122E24u: goto label_122e24;
            case 0x122E28u: goto label_122e28;
            case 0x122E2Cu: goto label_122e2c;
            case 0x122E30u: goto label_122e30;
            case 0x122E34u: goto label_122e34;
            case 0x122E38u: goto label_122e38;
            case 0x122E3Cu: goto label_122e3c;
            case 0x122E40u: goto label_122e40;
            case 0x122E44u: goto label_122e44;
            case 0x122E48u: goto label_122e48;
            case 0x122E4Cu: goto label_122e4c;
            case 0x122E50u: goto label_122e50;
            case 0x122E54u: goto label_122e54;
            case 0x122E58u: goto label_122e58;
            case 0x122E5Cu: goto label_122e5c;
            case 0x122E60u: goto label_122e60;
            case 0x122E64u: goto label_122e64;
            case 0x122E68u: goto label_122e68;
            case 0x122E6Cu: goto label_122e6c;
            case 0x122E70u: goto label_122e70;
            case 0x122E74u: goto label_122e74;
            case 0x122E78u: goto label_122e78;
            case 0x122E7Cu: goto label_122e7c;
            case 0x122E80u: goto label_122e80;
            case 0x122E84u: goto label_122e84;
            case 0x122E88u: goto label_122e88;
            case 0x122E8Cu: goto label_122e8c;
            case 0x122E90u: goto label_122e90;
            case 0x122E94u: goto label_122e94;
            case 0x122E98u: goto label_122e98;
            case 0x122E9Cu: goto label_122e9c;
            case 0x122EA0u: goto label_122ea0;
            case 0x122EA4u: goto label_122ea4;
            case 0x122EA8u: goto label_122ea8;
            case 0x122EACu: goto label_122eac;
            case 0x122EB0u: goto label_122eb0;
            case 0x122EB4u: goto label_122eb4;
            case 0x122EB8u: goto label_122eb8;
            case 0x122EBCu: goto label_122ebc;
            case 0x122EC0u: goto label_122ec0;
            case 0x122EC4u: goto label_122ec4;
            case 0x122EC8u: goto label_122ec8;
            case 0x122ECCu: goto label_122ecc;
            case 0x122ED0u: goto label_122ed0;
            case 0x122ED4u: goto label_122ed4;
            case 0x122ED8u: goto label_122ed8;
            case 0x122EDCu: goto label_122edc;
            case 0x122EE0u: goto label_122ee0;
            case 0x122EE4u: goto label_122ee4;
            case 0x122EE8u: goto label_122ee8;
            case 0x122EECu: goto label_122eec;
            case 0x122EF0u: goto label_122ef0;
            case 0x122EF4u: goto label_122ef4;
            case 0x122EF8u: goto label_122ef8;
            case 0x122EFCu: goto label_122efc;
            case 0x122F00u: goto label_122f00;
            case 0x122F04u: goto label_122f04;
            case 0x122F08u: goto label_122f08;
            case 0x122F0Cu: goto label_122f0c;
            case 0x122F10u: goto label_122f10;
            case 0x122F14u: goto label_122f14;
            case 0x122F18u: goto label_122f18;
            case 0x122F1Cu: goto label_122f1c;
            case 0x122F20u: goto label_122f20;
            case 0x122F24u: goto label_122f24;
            case 0x122F28u: goto label_122f28;
            case 0x122F2Cu: goto label_122f2c;
            case 0x122F30u: goto label_122f30;
            case 0x122F34u: goto label_122f34;
            case 0x122F38u: goto label_122f38;
            case 0x122F3Cu: goto label_122f3c;
            case 0x122F40u: goto label_122f40;
            case 0x122F44u: goto label_122f44;
            case 0x122F48u: goto label_122f48;
            case 0x122F4Cu: goto label_122f4c;
            case 0x122F50u: goto label_122f50;
            case 0x122F54u: goto label_122f54;
            case 0x122F58u: goto label_122f58;
            case 0x122F5Cu: goto label_122f5c;
            case 0x122F60u: goto label_122f60;
            case 0x122F64u: goto label_122f64;
            case 0x122F68u: goto label_122f68;
            case 0x122F6Cu: goto label_122f6c;
            case 0x122F70u: goto label_122f70;
            case 0x122F74u: goto label_122f74;
            case 0x122F78u: goto label_122f78;
            case 0x122F7Cu: goto label_122f7c;
            case 0x122F80u: goto label_122f80;
            case 0x122F84u: goto label_122f84;
            case 0x122F88u: goto label_122f88;
            case 0x122F8Cu: goto label_122f8c;
            case 0x122F90u: goto label_122f90;
            case 0x122F94u: goto label_122f94;
            case 0x122F98u: goto label_122f98;
            case 0x122F9Cu: goto label_122f9c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x122EB4u; }
            if (ctx->pc != 0x122EB4u) { return; }
        }
    }
    ctx->pc = 0x122EB4u;
label_122eb4:
    // 0x122eb4: 0xdfbf0000
    ctx->pc = 0x122eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_122eb8:
    // 0x122eb8: 0x3e00008
label_122ebc:
    if (ctx->pc == 0x122EBCu) {
        ctx->pc = 0x122EBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x122EC0u;
        goto label_122ec0;
    }
    ctx->pc = 0x122EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122EBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122E10u: goto label_122e10;
            case 0x122E14u: goto label_122e14;
            case 0x122E18u: goto label_122e18;
            case 0x122E1Cu: goto label_122e1c;
            case 0x122E20u: goto label_122e20;
            case 0x122E24u: goto label_122e24;
            case 0x122E28u: goto label_122e28;
            case 0x122E2Cu: goto label_122e2c;
            case 0x122E30u: goto label_122e30;
            case 0x122E34u: goto label_122e34;
            case 0x122E38u: goto label_122e38;
            case 0x122E3Cu: goto label_122e3c;
            case 0x122E40u: goto label_122e40;
            case 0x122E44u: goto label_122e44;
            case 0x122E48u: goto label_122e48;
            case 0x122E4Cu: goto label_122e4c;
            case 0x122E50u: goto label_122e50;
            case 0x122E54u: goto label_122e54;
            case 0x122E58u: goto label_122e58;
            case 0x122E5Cu: goto label_122e5c;
            case 0x122E60u: goto label_122e60;
            case 0x122E64u: goto label_122e64;
            case 0x122E68u: goto label_122e68;
            case 0x122E6Cu: goto label_122e6c;
            case 0x122E70u: goto label_122e70;
            case 0x122E74u: goto label_122e74;
            case 0x122E78u: goto label_122e78;
            case 0x122E7Cu: goto label_122e7c;
            case 0x122E80u: goto label_122e80;
            case 0x122E84u: goto label_122e84;
            case 0x122E88u: goto label_122e88;
            case 0x122E8Cu: goto label_122e8c;
            case 0x122E90u: goto label_122e90;
            case 0x122E94u: goto label_122e94;
            case 0x122E98u: goto label_122e98;
            case 0x122E9Cu: goto label_122e9c;
            case 0x122EA0u: goto label_122ea0;
            case 0x122EA4u: goto label_122ea4;
            case 0x122EA8u: goto label_122ea8;
            case 0x122EACu: goto label_122eac;
            case 0x122EB0u: goto label_122eb0;
            case 0x122EB4u: goto label_122eb4;
            case 0x122EB8u: goto label_122eb8;
            case 0x122EBCu: goto label_122ebc;
            case 0x122EC0u: goto label_122ec0;
            case 0x122EC4u: goto label_122ec4;
            case 0x122EC8u: goto label_122ec8;
            case 0x122ECCu: goto label_122ecc;
            case 0x122ED0u: goto label_122ed0;
            case 0x122ED4u: goto label_122ed4;
            case 0x122ED8u: goto label_122ed8;
            case 0x122EDCu: goto label_122edc;
            case 0x122EE0u: goto label_122ee0;
            case 0x122EE4u: goto label_122ee4;
            case 0x122EE8u: goto label_122ee8;
            case 0x122EECu: goto label_122eec;
            case 0x122EF0u: goto label_122ef0;
            case 0x122EF4u: goto label_122ef4;
            case 0x122EF8u: goto label_122ef8;
            case 0x122EFCu: goto label_122efc;
            case 0x122F00u: goto label_122f00;
            case 0x122F04u: goto label_122f04;
            case 0x122F08u: goto label_122f08;
            case 0x122F0Cu: goto label_122f0c;
            case 0x122F10u: goto label_122f10;
            case 0x122F14u: goto label_122f14;
            case 0x122F18u: goto label_122f18;
            case 0x122F1Cu: goto label_122f1c;
            case 0x122F20u: goto label_122f20;
            case 0x122F24u: goto label_122f24;
            case 0x122F28u: goto label_122f28;
            case 0x122F2Cu: goto label_122f2c;
            case 0x122F30u: goto label_122f30;
            case 0x122F34u: goto label_122f34;
            case 0x122F38u: goto label_122f38;
            case 0x122F3Cu: goto label_122f3c;
            case 0x122F40u: goto label_122f40;
            case 0x122F44u: goto label_122f44;
            case 0x122F48u: goto label_122f48;
            case 0x122F4Cu: goto label_122f4c;
            case 0x122F50u: goto label_122f50;
            case 0x122F54u: goto label_122f54;
            case 0x122F58u: goto label_122f58;
            case 0x122F5Cu: goto label_122f5c;
            case 0x122F60u: goto label_122f60;
            case 0x122F64u: goto label_122f64;
            case 0x122F68u: goto label_122f68;
            case 0x122F6Cu: goto label_122f6c;
            case 0x122F70u: goto label_122f70;
            case 0x122F74u: goto label_122f74;
            case 0x122F78u: goto label_122f78;
            case 0x122F7Cu: goto label_122f7c;
            case 0x122F80u: goto label_122f80;
            case 0x122F84u: goto label_122f84;
            case 0x122F88u: goto label_122f88;
            case 0x122F8Cu: goto label_122f8c;
            case 0x122F90u: goto label_122f90;
            case 0x122F94u: goto label_122f94;
            case 0x122F98u: goto label_122f98;
            case 0x122F9Cu: goto label_122f9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122EC0u;
label_122ec0:
    // 0x122ec0: 0x27bdfff0
    ctx->pc = 0x122ec0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_122ec4:
    // 0x122ec4: 0xffbf0000
    ctx->pc = 0x122ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_122ec8:
    // 0x122ec8: 0x8c8200bc
    ctx->pc = 0x122ec8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_122ecc:
    // 0x122ecc: 0x10400004
label_122ed0:
    if (ctx->pc == 0x122ED0u) {
        ctx->pc = 0x122ED0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
        ctx->pc = 0x122ED4u;
        goto label_122ed4;
    }
    ctx->pc = 0x122ECCu;
    {
        const bool branch_taken_0x122ecc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x122ED0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
        if (branch_taken_0x122ecc) {
            ctx->pc = 0x122EE0u;
            goto label_122ee0;
        }
    }
    ctx->pc = 0x122ED4u;
label_122ed4:
    // 0x122ed4: 0x8c43b720
    ctx->pc = 0x122ed4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294948640)));
label_122ed8:
    // 0x122ed8: 0x60f809
label_122edc:
    if (ctx->pc == 0x122EDCu) {
        ctx->pc = 0x122EE0u;
        goto label_122ee0;
    }
    ctx->pc = 0x122ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x122EE0u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122E10u: goto label_122e10;
            case 0x122E14u: goto label_122e14;
            case 0x122E18u: goto label_122e18;
            case 0x122E1Cu: goto label_122e1c;
            case 0x122E20u: goto label_122e20;
            case 0x122E24u: goto label_122e24;
            case 0x122E28u: goto label_122e28;
            case 0x122E2Cu: goto label_122e2c;
            case 0x122E30u: goto label_122e30;
            case 0x122E34u: goto label_122e34;
            case 0x122E38u: goto label_122e38;
            case 0x122E3Cu: goto label_122e3c;
            case 0x122E40u: goto label_122e40;
            case 0x122E44u: goto label_122e44;
            case 0x122E48u: goto label_122e48;
            case 0x122E4Cu: goto label_122e4c;
            case 0x122E50u: goto label_122e50;
            case 0x122E54u: goto label_122e54;
            case 0x122E58u: goto label_122e58;
            case 0x122E5Cu: goto label_122e5c;
            case 0x122E60u: goto label_122e60;
            case 0x122E64u: goto label_122e64;
            case 0x122E68u: goto label_122e68;
            case 0x122E6Cu: goto label_122e6c;
            case 0x122E70u: goto label_122e70;
            case 0x122E74u: goto label_122e74;
            case 0x122E78u: goto label_122e78;
            case 0x122E7Cu: goto label_122e7c;
            case 0x122E80u: goto label_122e80;
            case 0x122E84u: goto label_122e84;
            case 0x122E88u: goto label_122e88;
            case 0x122E8Cu: goto label_122e8c;
            case 0x122E90u: goto label_122e90;
            case 0x122E94u: goto label_122e94;
            case 0x122E98u: goto label_122e98;
            case 0x122E9Cu: goto label_122e9c;
            case 0x122EA0u: goto label_122ea0;
            case 0x122EA4u: goto label_122ea4;
            case 0x122EA8u: goto label_122ea8;
            case 0x122EACu: goto label_122eac;
            case 0x122EB0u: goto label_122eb0;
            case 0x122EB4u: goto label_122eb4;
            case 0x122EB8u: goto label_122eb8;
            case 0x122EBCu: goto label_122ebc;
            case 0x122EC0u: goto label_122ec0;
            case 0x122EC4u: goto label_122ec4;
            case 0x122EC8u: goto label_122ec8;
            case 0x122ECCu: goto label_122ecc;
            case 0x122ED0u: goto label_122ed0;
            case 0x122ED4u: goto label_122ed4;
            case 0x122ED8u: goto label_122ed8;
            case 0x122EDCu: goto label_122edc;
            case 0x122EE0u: goto label_122ee0;
            case 0x122EE4u: goto label_122ee4;
            case 0x122EE8u: goto label_122ee8;
            case 0x122EECu: goto label_122eec;
            case 0x122EF0u: goto label_122ef0;
            case 0x122EF4u: goto label_122ef4;
            case 0x122EF8u: goto label_122ef8;
            case 0x122EFCu: goto label_122efc;
            case 0x122F00u: goto label_122f00;
            case 0x122F04u: goto label_122f04;
            case 0x122F08u: goto label_122f08;
            case 0x122F0Cu: goto label_122f0c;
            case 0x122F10u: goto label_122f10;
            case 0x122F14u: goto label_122f14;
            case 0x122F18u: goto label_122f18;
            case 0x122F1Cu: goto label_122f1c;
            case 0x122F20u: goto label_122f20;
            case 0x122F24u: goto label_122f24;
            case 0x122F28u: goto label_122f28;
            case 0x122F2Cu: goto label_122f2c;
            case 0x122F30u: goto label_122f30;
            case 0x122F34u: goto label_122f34;
            case 0x122F38u: goto label_122f38;
            case 0x122F3Cu: goto label_122f3c;
            case 0x122F40u: goto label_122f40;
            case 0x122F44u: goto label_122f44;
            case 0x122F48u: goto label_122f48;
            case 0x122F4Cu: goto label_122f4c;
            case 0x122F50u: goto label_122f50;
            case 0x122F54u: goto label_122f54;
            case 0x122F58u: goto label_122f58;
            case 0x122F5Cu: goto label_122f5c;
            case 0x122F60u: goto label_122f60;
            case 0x122F64u: goto label_122f64;
            case 0x122F68u: goto label_122f68;
            case 0x122F6Cu: goto label_122f6c;
            case 0x122F70u: goto label_122f70;
            case 0x122F74u: goto label_122f74;
            case 0x122F78u: goto label_122f78;
            case 0x122F7Cu: goto label_122f7c;
            case 0x122F80u: goto label_122f80;
            case 0x122F84u: goto label_122f84;
            case 0x122F88u: goto label_122f88;
            case 0x122F8Cu: goto label_122f8c;
            case 0x122F90u: goto label_122f90;
            case 0x122F94u: goto label_122f94;
            case 0x122F98u: goto label_122f98;
            case 0x122F9Cu: goto label_122f9c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x122EE0u; }
            if (ctx->pc != 0x122EE0u) { return; }
        }
    }
    ctx->pc = 0x122EE0u;
label_122ee0:
    // 0x122ee0: 0xdfbf0000
    ctx->pc = 0x122ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_122ee4:
    // 0x122ee4: 0x3e00008
label_122ee8:
    if (ctx->pc == 0x122EE8u) {
        ctx->pc = 0x122EE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x122EECu;
        goto label_122eec;
    }
    ctx->pc = 0x122EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122EE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122E10u: goto label_122e10;
            case 0x122E14u: goto label_122e14;
            case 0x122E18u: goto label_122e18;
            case 0x122E1Cu: goto label_122e1c;
            case 0x122E20u: goto label_122e20;
            case 0x122E24u: goto label_122e24;
            case 0x122E28u: goto label_122e28;
            case 0x122E2Cu: goto label_122e2c;
            case 0x122E30u: goto label_122e30;
            case 0x122E34u: goto label_122e34;
            case 0x122E38u: goto label_122e38;
            case 0x122E3Cu: goto label_122e3c;
            case 0x122E40u: goto label_122e40;
            case 0x122E44u: goto label_122e44;
            case 0x122E48u: goto label_122e48;
            case 0x122E4Cu: goto label_122e4c;
            case 0x122E50u: goto label_122e50;
            case 0x122E54u: goto label_122e54;
            case 0x122E58u: goto label_122e58;
            case 0x122E5Cu: goto label_122e5c;
            case 0x122E60u: goto label_122e60;
            case 0x122E64u: goto label_122e64;
            case 0x122E68u: goto label_122e68;
            case 0x122E6Cu: goto label_122e6c;
            case 0x122E70u: goto label_122e70;
            case 0x122E74u: goto label_122e74;
            case 0x122E78u: goto label_122e78;
            case 0x122E7Cu: goto label_122e7c;
            case 0x122E80u: goto label_122e80;
            case 0x122E84u: goto label_122e84;
            case 0x122E88u: goto label_122e88;
            case 0x122E8Cu: goto label_122e8c;
            case 0x122E90u: goto label_122e90;
            case 0x122E94u: goto label_122e94;
            case 0x122E98u: goto label_122e98;
            case 0x122E9Cu: goto label_122e9c;
            case 0x122EA0u: goto label_122ea0;
            case 0x122EA4u: goto label_122ea4;
            case 0x122EA8u: goto label_122ea8;
            case 0x122EACu: goto label_122eac;
            case 0x122EB0u: goto label_122eb0;
            case 0x122EB4u: goto label_122eb4;
            case 0x122EB8u: goto label_122eb8;
            case 0x122EBCu: goto label_122ebc;
            case 0x122EC0u: goto label_122ec0;
            case 0x122EC4u: goto label_122ec4;
            case 0x122EC8u: goto label_122ec8;
            case 0x122ECCu: goto label_122ecc;
            case 0x122ED0u: goto label_122ed0;
            case 0x122ED4u: goto label_122ed4;
            case 0x122ED8u: goto label_122ed8;
            case 0x122EDCu: goto label_122edc;
            case 0x122EE0u: goto label_122ee0;
            case 0x122EE4u: goto label_122ee4;
            case 0x122EE8u: goto label_122ee8;
            case 0x122EECu: goto label_122eec;
            case 0x122EF0u: goto label_122ef0;
            case 0x122EF4u: goto label_122ef4;
            case 0x122EF8u: goto label_122ef8;
            case 0x122EFCu: goto label_122efc;
            case 0x122F00u: goto label_122f00;
            case 0x122F04u: goto label_122f04;
            case 0x122F08u: goto label_122f08;
            case 0x122F0Cu: goto label_122f0c;
            case 0x122F10u: goto label_122f10;
            case 0x122F14u: goto label_122f14;
            case 0x122F18u: goto label_122f18;
            case 0x122F1Cu: goto label_122f1c;
            case 0x122F20u: goto label_122f20;
            case 0x122F24u: goto label_122f24;
            case 0x122F28u: goto label_122f28;
            case 0x122F2Cu: goto label_122f2c;
            case 0x122F30u: goto label_122f30;
            case 0x122F34u: goto label_122f34;
            case 0x122F38u: goto label_122f38;
            case 0x122F3Cu: goto label_122f3c;
            case 0x122F40u: goto label_122f40;
            case 0x122F44u: goto label_122f44;
            case 0x122F48u: goto label_122f48;
            case 0x122F4Cu: goto label_122f4c;
            case 0x122F50u: goto label_122f50;
            case 0x122F54u: goto label_122f54;
            case 0x122F58u: goto label_122f58;
            case 0x122F5Cu: goto label_122f5c;
            case 0x122F60u: goto label_122f60;
            case 0x122F64u: goto label_122f64;
            case 0x122F68u: goto label_122f68;
            case 0x122F6Cu: goto label_122f6c;
            case 0x122F70u: goto label_122f70;
            case 0x122F74u: goto label_122f74;
            case 0x122F78u: goto label_122f78;
            case 0x122F7Cu: goto label_122f7c;
            case 0x122F80u: goto label_122f80;
            case 0x122F84u: goto label_122f84;
            case 0x122F88u: goto label_122f88;
            case 0x122F8Cu: goto label_122f8c;
            case 0x122F90u: goto label_122f90;
            case 0x122F94u: goto label_122f94;
            case 0x122F98u: goto label_122f98;
            case 0x122F9Cu: goto label_122f9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122EECu;
label_122eec:
    // 0x122eec: 0x0
    ctx->pc = 0x122eecu;
    // NOP
label_122ef0:
    // 0x122ef0: 0x80702d
    ctx->pc = 0x122ef0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_122ef4:
    // 0x122ef4: 0x8dc300bc
    ctx->pc = 0x122ef4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 14), 188)));
label_122ef8:
    // 0x122ef8: 0x10600027
label_122efc:
    if (ctx->pc == 0x122EFCu) {
        ctx->pc = 0x122EFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x122F00u;
        goto label_122f00;
    }
    ctx->pc = 0x122EF8u;
    {
        const bool branch_taken_0x122ef8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x122EFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x122ef8) {
            ctx->pc = 0x122F98u;
            goto label_122f98;
        }
    }
    ctx->pc = 0x122F00u;
label_122f00:
    // 0x122f00: 0x3c037fff
    ctx->pc = 0x122f00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
label_122f04:
    // 0x122f04: 0x8dcc003c
    ctx->pc = 0x122f04u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 14), 60)));
label_122f08:
    // 0x122f08: 0x8dcd0040
    ctx->pc = 0x122f08u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 14), 64)));
label_122f0c:
    // 0x122f0c: 0x240a0001
    ctx->pc = 0x122f0cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
label_122f10:
    // 0x122f10: 0x8dcb0044
    ctx->pc = 0x122f10u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 14), 68)));
label_122f14:
    // 0x122f14: 0x24090600
    ctx->pc = 0x122f14u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1536));
label_122f18:
    // 0x122f18: 0x24040010
    ctx->pc = 0x122f18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
label_122f1c:
    // 0x122f1c: 0x3463ffff
    ctx->pc = 0x122f1cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
label_122f20:
    // 0x122f20: 0x2405007f
    ctx->pc = 0x122f20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 127));
label_122f24:
    // 0x122f24: 0x2406000f
    ctx->pc = 0x122f24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
label_122f28:
    // 0x122f28: 0x24070001
    ctx->pc = 0x122f28u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_122f2c:
    // 0x122f2c: 0x2408007f
    ctx->pc = 0x122f2cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 127));
label_122f30:
    // 0x122f30: 0x3402bb80
    ctx->pc = 0x122f30u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 48000));
label_122f34:
    // 0x122f34: 0xa1ca000e
    ctx->pc = 0x122f34u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 14), (uint8_t)GPR_U32(ctx, 10));
label_122f38:
    // 0x122f38: 0xa1c4000d
    ctx->pc = 0x122f38u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 13), (uint8_t)GPR_U32(ctx, 4));
label_122f3c:
    // 0x122f3c: 0xadc30018
    ctx->pc = 0x122f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 24), GPR_U32(ctx, 3));
label_122f40:
    // 0x122f40: 0xa1c5000f
    ctx->pc = 0x122f40u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 15), (uint8_t)GPR_U32(ctx, 5));
label_122f44:
    // 0x122f44: 0xa5c60098
    ctx->pc = 0x122f44u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 152), (uint16_t)GPR_U32(ctx, 6));
label_122f48:
    // 0x122f48: 0xadc70050
    ctx->pc = 0x122f48u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 80), GPR_U32(ctx, 7));
label_122f4c:
    // 0x122f4c: 0xadc80054
    ctx->pc = 0x122f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 84), GPR_U32(ctx, 8));
label_122f50:
    // 0x122f50: 0xadc90058
    ctx->pc = 0x122f50u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 88), GPR_U32(ctx, 9));
label_122f54:
    // 0x122f54: 0xadcc005c
    ctx->pc = 0x122f54u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 92), GPR_U32(ctx, 12));
label_122f58:
    // 0x122f58: 0xadcd0060
    ctx->pc = 0x122f58u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 96), GPR_U32(ctx, 13));
label_122f5c:
    // 0x122f5c: 0xadcb0064
    ctx->pc = 0x122f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 100), GPR_U32(ctx, 11));
label_122f60:
    // 0x122f60: 0xadc00088
    ctx->pc = 0x122f60u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 136), GPR_U32(ctx, 0));
label_122f64:
    // 0x122f64: 0xa5ca0002
    ctx->pc = 0x122f64u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 2), (uint16_t)GPR_U32(ctx, 10));
label_122f68:
    // 0x122f68: 0xadc90010
    ctx->pc = 0x122f68u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 16), GPR_U32(ctx, 9));
label_122f6c:
    // 0x122f6c: 0xadc0008c
    ctx->pc = 0x122f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 140), GPR_U32(ctx, 0));
label_122f70:
    // 0x122f70: 0xa5c0001c
    ctx->pc = 0x122f70u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 28), (uint16_t)GPR_U32(ctx, 0));
label_122f74:
    // 0x122f74: 0xa5c00024
    ctx->pc = 0x122f74u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 36), (uint16_t)GPR_U32(ctx, 0));
label_122f78:
    // 0x122f78: 0xa5c00026
    ctx->pc = 0x122f78u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 38), (uint16_t)GPR_U32(ctx, 0));
label_122f7c:
    // 0x122f7c: 0xadc00020
    ctx->pc = 0x122f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 32), GPR_U32(ctx, 0));
label_122f80:
    // 0x122f80: 0xadc00028
    ctx->pc = 0x122f80u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 40), GPR_U32(ctx, 0));
label_122f84:
    // 0x122f84: 0xadc0002c
    ctx->pc = 0x122f84u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 44), GPR_U32(ctx, 0));
label_122f88:
    // 0x122f88: 0xadc00030
    ctx->pc = 0x122f88u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 48), GPR_U32(ctx, 0));
label_122f8c:
    // 0x122f8c: 0xadc00034
    ctx->pc = 0x122f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 52), GPR_U32(ctx, 0));
label_122f90:
    // 0x122f90: 0xadc20014
    ctx->pc = 0x122f90u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 20), GPR_U32(ctx, 2));
label_122f94:
    // 0x122f94: 0x24020001
    ctx->pc = 0x122f94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_122f98:
    // 0x122f98: 0x3e00008
label_122f9c:
    if (ctx->pc == 0x122F9Cu) {
        ctx->pc = 0x122FA0u;
        goto label_fallthrough_0x122f98;
    }
    ctx->pc = 0x122F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122E10u: goto label_122e10;
            case 0x122E14u: goto label_122e14;
            case 0x122E18u: goto label_122e18;
            case 0x122E1Cu: goto label_122e1c;
            case 0x122E20u: goto label_122e20;
            case 0x122E24u: goto label_122e24;
            case 0x122E28u: goto label_122e28;
            case 0x122E2Cu: goto label_122e2c;
            case 0x122E30u: goto label_122e30;
            case 0x122E34u: goto label_122e34;
            case 0x122E38u: goto label_122e38;
            case 0x122E3Cu: goto label_122e3c;
            case 0x122E40u: goto label_122e40;
            case 0x122E44u: goto label_122e44;
            case 0x122E48u: goto label_122e48;
            case 0x122E4Cu: goto label_122e4c;
            case 0x122E50u: goto label_122e50;
            case 0x122E54u: goto label_122e54;
            case 0x122E58u: goto label_122e58;
            case 0x122E5Cu: goto label_122e5c;
            case 0x122E60u: goto label_122e60;
            case 0x122E64u: goto label_122e64;
            case 0x122E68u: goto label_122e68;
            case 0x122E6Cu: goto label_122e6c;
            case 0x122E70u: goto label_122e70;
            case 0x122E74u: goto label_122e74;
            case 0x122E78u: goto label_122e78;
            case 0x122E7Cu: goto label_122e7c;
            case 0x122E80u: goto label_122e80;
            case 0x122E84u: goto label_122e84;
            case 0x122E88u: goto label_122e88;
            case 0x122E8Cu: goto label_122e8c;
            case 0x122E90u: goto label_122e90;
            case 0x122E94u: goto label_122e94;
            case 0x122E98u: goto label_122e98;
            case 0x122E9Cu: goto label_122e9c;
            case 0x122EA0u: goto label_122ea0;
            case 0x122EA4u: goto label_122ea4;
            case 0x122EA8u: goto label_122ea8;
            case 0x122EACu: goto label_122eac;
            case 0x122EB0u: goto label_122eb0;
            case 0x122EB4u: goto label_122eb4;
            case 0x122EB8u: goto label_122eb8;
            case 0x122EBCu: goto label_122ebc;
            case 0x122EC0u: goto label_122ec0;
            case 0x122EC4u: goto label_122ec4;
            case 0x122EC8u: goto label_122ec8;
            case 0x122ECCu: goto label_122ecc;
            case 0x122ED0u: goto label_122ed0;
            case 0x122ED4u: goto label_122ed4;
            case 0x122ED8u: goto label_122ed8;
            case 0x122EDCu: goto label_122edc;
            case 0x122EE0u: goto label_122ee0;
            case 0x122EE4u: goto label_122ee4;
            case 0x122EE8u: goto label_122ee8;
            case 0x122EECu: goto label_122eec;
            case 0x122EF0u: goto label_122ef0;
            case 0x122EF4u: goto label_122ef4;
            case 0x122EF8u: goto label_122ef8;
            case 0x122EFCu: goto label_122efc;
            case 0x122F00u: goto label_122f00;
            case 0x122F04u: goto label_122f04;
            case 0x122F08u: goto label_122f08;
            case 0x122F0Cu: goto label_122f0c;
            case 0x122F10u: goto label_122f10;
            case 0x122F14u: goto label_122f14;
            case 0x122F18u: goto label_122f18;
            case 0x122F1Cu: goto label_122f1c;
            case 0x122F20u: goto label_122f20;
            case 0x122F24u: goto label_122f24;
            case 0x122F28u: goto label_122f28;
            case 0x122F2Cu: goto label_122f2c;
            case 0x122F30u: goto label_122f30;
            case 0x122F34u: goto label_122f34;
            case 0x122F38u: goto label_122f38;
            case 0x122F3Cu: goto label_122f3c;
            case 0x122F40u: goto label_122f40;
            case 0x122F44u: goto label_122f44;
            case 0x122F48u: goto label_122f48;
            case 0x122F4Cu: goto label_122f4c;
            case 0x122F50u: goto label_122f50;
            case 0x122F54u: goto label_122f54;
            case 0x122F58u: goto label_122f58;
            case 0x122F5Cu: goto label_122f5c;
            case 0x122F60u: goto label_122f60;
            case 0x122F64u: goto label_122f64;
            case 0x122F68u: goto label_122f68;
            case 0x122F6Cu: goto label_122f6c;
            case 0x122F70u: goto label_122f70;
            case 0x122F74u: goto label_122f74;
            case 0x122F78u: goto label_122f78;
            case 0x122F7Cu: goto label_122f7c;
            case 0x122F80u: goto label_122f80;
            case 0x122F84u: goto label_122f84;
            case 0x122F88u: goto label_122f88;
            case 0x122F8Cu: goto label_122f8c;
            case 0x122F90u: goto label_122f90;
            case 0x122F94u: goto label_122f94;
            case 0x122F98u: goto label_122f98;
            case 0x122F9Cu: goto label_122f9c;
            default: break;
        }
        return;
    }
label_fallthrough_0x122f98:
    ctx->pc = 0x122FA0u;
}
