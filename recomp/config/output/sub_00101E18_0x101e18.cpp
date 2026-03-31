#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00101E18
// Address: 0x101e18 - 0x101f60
void sub_00101E18_0x101e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x101e18u;

label_101e18:
    // 0x101e18: 0x4842e000
    ctx->pc = 0x101e18u;
    SET_GPR_U32(ctx, 2, ctx->vu0_itop);
label_101e1c:
    // 0x101e1c: 0x34420002
    ctx->pc = 0x101e1cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
label_101e20:
    // 0x101e20: 0x48c2e000
    ctx->pc = 0x101e20u;
    ctx->vu0_itop = GPR_U32(ctx, 2) & 0x3FF;
label_101e24:
    // 0x101e24: 0x3e00008
label_101e28:
    if (ctx->pc == 0x101E28u) {
        ctx->pc = 0x101E2Cu;
        goto label_101e2c;
    }
    ctx->pc = 0x101E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101E18u: goto label_101e18;
            case 0x101E1Cu: goto label_101e1c;
            case 0x101E20u: goto label_101e20;
            case 0x101E24u: goto label_101e24;
            case 0x101E28u: goto label_101e28;
            case 0x101E2Cu: goto label_101e2c;
            case 0x101E30u: goto label_101e30;
            case 0x101E34u: goto label_101e34;
            case 0x101E38u: goto label_101e38;
            case 0x101E3Cu: goto label_101e3c;
            case 0x101E40u: goto label_101e40;
            case 0x101E44u: goto label_101e44;
            case 0x101E48u: goto label_101e48;
            case 0x101E4Cu: goto label_101e4c;
            case 0x101E50u: goto label_101e50;
            case 0x101E54u: goto label_101e54;
            case 0x101E58u: goto label_101e58;
            case 0x101E5Cu: goto label_101e5c;
            case 0x101E60u: goto label_101e60;
            case 0x101E64u: goto label_101e64;
            case 0x101E68u: goto label_101e68;
            case 0x101E6Cu: goto label_101e6c;
            case 0x101E70u: goto label_101e70;
            case 0x101E74u: goto label_101e74;
            case 0x101E78u: goto label_101e78;
            case 0x101E7Cu: goto label_101e7c;
            case 0x101E80u: goto label_101e80;
            case 0x101E84u: goto label_101e84;
            case 0x101E88u: goto label_101e88;
            case 0x101E8Cu: goto label_101e8c;
            case 0x101E90u: goto label_101e90;
            case 0x101E94u: goto label_101e94;
            case 0x101E98u: goto label_101e98;
            case 0x101E9Cu: goto label_101e9c;
            case 0x101EA0u: goto label_101ea0;
            case 0x101EA4u: goto label_101ea4;
            case 0x101EA8u: goto label_101ea8;
            case 0x101EACu: goto label_101eac;
            case 0x101EB0u: goto label_101eb0;
            case 0x101EB4u: goto label_101eb4;
            case 0x101EB8u: goto label_101eb8;
            case 0x101EBCu: goto label_101ebc;
            case 0x101EC0u: goto label_101ec0;
            case 0x101EC4u: goto label_101ec4;
            case 0x101EC8u: goto label_101ec8;
            case 0x101ECCu: goto label_101ecc;
            case 0x101ED0u: goto label_101ed0;
            case 0x101ED4u: goto label_101ed4;
            case 0x101ED8u: goto label_101ed8;
            case 0x101EDCu: goto label_101edc;
            case 0x101EE0u: goto label_101ee0;
            case 0x101EE4u: goto label_101ee4;
            case 0x101EE8u: goto label_101ee8;
            case 0x101EECu: goto label_101eec;
            case 0x101EF0u: goto label_101ef0;
            case 0x101EF4u: goto label_101ef4;
            case 0x101EF8u: goto label_101ef8;
            case 0x101EFCu: goto label_101efc;
            case 0x101F00u: goto label_101f00;
            case 0x101F04u: goto label_101f04;
            case 0x101F08u: goto label_101f08;
            case 0x101F0Cu: goto label_101f0c;
            case 0x101F10u: goto label_101f10;
            case 0x101F14u: goto label_101f14;
            case 0x101F18u: goto label_101f18;
            case 0x101F1Cu: goto label_101f1c;
            case 0x101F20u: goto label_101f20;
            case 0x101F24u: goto label_101f24;
            case 0x101F28u: goto label_101f28;
            case 0x101F2Cu: goto label_101f2c;
            case 0x101F30u: goto label_101f30;
            case 0x101F34u: goto label_101f34;
            case 0x101F38u: goto label_101f38;
            case 0x101F3Cu: goto label_101f3c;
            case 0x101F40u: goto label_101f40;
            case 0x101F44u: goto label_101f44;
            case 0x101F48u: goto label_101f48;
            case 0x101F4Cu: goto label_101f4c;
            case 0x101F50u: goto label_101f50;
            case 0x101F54u: goto label_101f54;
            case 0x101F58u: goto label_101f58;
            case 0x101F5Cu: goto label_101f5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101E2Cu;
label_101e2c:
    // 0x101e2c: 0x0
    ctx->pc = 0x101e2cu;
    // NOP
label_101e30:
    // 0x101e30: 0x27bdffe0
    ctx->pc = 0x101e30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_101e34:
    // 0x101e34: 0xffb00000
    ctx->pc = 0x101e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_101e38:
    // 0x101e38: 0xffbf0010
    ctx->pc = 0x101e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_101e3c:
    // 0x101e3c: 0xc0407d8
label_101e40:
    if (ctx->pc == 0x101E40u) {
        ctx->pc = 0x101E40u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101E44u;
        goto label_101e44;
    }
    ctx->pc = 0x101E3Cu;
    SET_GPR_U32(ctx, 31, 0x101E44u);
    ctx->pc = 0x101E40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x101F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F60_0x101f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E44u; }
    }
    if (ctx->pc != 0x101E44u) { return; }
    ctx->pc = 0x101E44u;
label_101e44:
    // 0x101e44: 0x40182d
    ctx->pc = 0x101e44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101e48:
    // 0x101e48: 0x2c620005
    ctx->pc = 0x101e48u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 5));
label_101e4c:
    // 0x101e4c: 0x1040000b
label_101e50:
    if (ctx->pc == 0x101E50u) {
        ctx->pc = 0x101E50u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        ctx->pc = 0x101E54u;
        goto label_101e54;
    }
    ctx->pc = 0x101E4Cu;
    {
        const bool branch_taken_0x101e4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x101E50u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x101e4c) {
            ctx->pc = 0x101E7Cu;
            goto label_101e7c;
        }
    }
    ctx->pc = 0x101E54u;
label_101e54:
    // 0x101e54: 0x31880
    ctx->pc = 0x101e54u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_101e58:
    // 0x101e58: 0x244276c0
    ctx->pc = 0x101e58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30400));
label_101e5c:
    // 0x101e5c: 0x621821
    ctx->pc = 0x101e5cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_101e60:
    // 0x101e60: 0x8c640000
    ctx->pc = 0x101e60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_101e64:
    // 0x101e64: 0x800008
label_101e68:
    if (ctx->pc == 0x101E68u) {
        ctx->pc = 0x101E6Cu;
        goto label_101e6c;
    }
    ctx->pc = 0x101E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101E18u: goto label_101e18;
            case 0x101E1Cu: goto label_101e1c;
            case 0x101E20u: goto label_101e20;
            case 0x101E24u: goto label_101e24;
            case 0x101E28u: goto label_101e28;
            case 0x101E2Cu: goto label_101e2c;
            case 0x101E30u: goto label_101e30;
            case 0x101E34u: goto label_101e34;
            case 0x101E38u: goto label_101e38;
            case 0x101E3Cu: goto label_101e3c;
            case 0x101E40u: goto label_101e40;
            case 0x101E44u: goto label_101e44;
            case 0x101E48u: goto label_101e48;
            case 0x101E4Cu: goto label_101e4c;
            case 0x101E50u: goto label_101e50;
            case 0x101E54u: goto label_101e54;
            case 0x101E58u: goto label_101e58;
            case 0x101E5Cu: goto label_101e5c;
            case 0x101E60u: goto label_101e60;
            case 0x101E64u: goto label_101e64;
            case 0x101E68u: goto label_101e68;
            case 0x101E6Cu: goto label_101e6c;
            case 0x101E70u: goto label_101e70;
            case 0x101E74u: goto label_101e74;
            case 0x101E78u: goto label_101e78;
            case 0x101E7Cu: goto label_101e7c;
            case 0x101E80u: goto label_101e80;
            case 0x101E84u: goto label_101e84;
            case 0x101E88u: goto label_101e88;
            case 0x101E8Cu: goto label_101e8c;
            case 0x101E90u: goto label_101e90;
            case 0x101E94u: goto label_101e94;
            case 0x101E98u: goto label_101e98;
            case 0x101E9Cu: goto label_101e9c;
            case 0x101EA0u: goto label_101ea0;
            case 0x101EA4u: goto label_101ea4;
            case 0x101EA8u: goto label_101ea8;
            case 0x101EACu: goto label_101eac;
            case 0x101EB0u: goto label_101eb0;
            case 0x101EB4u: goto label_101eb4;
            case 0x101EB8u: goto label_101eb8;
            case 0x101EBCu: goto label_101ebc;
            case 0x101EC0u: goto label_101ec0;
            case 0x101EC4u: goto label_101ec4;
            case 0x101EC8u: goto label_101ec8;
            case 0x101ECCu: goto label_101ecc;
            case 0x101ED0u: goto label_101ed0;
            case 0x101ED4u: goto label_101ed4;
            case 0x101ED8u: goto label_101ed8;
            case 0x101EDCu: goto label_101edc;
            case 0x101EE0u: goto label_101ee0;
            case 0x101EE4u: goto label_101ee4;
            case 0x101EE8u: goto label_101ee8;
            case 0x101EECu: goto label_101eec;
            case 0x101EF0u: goto label_101ef0;
            case 0x101EF4u: goto label_101ef4;
            case 0x101EF8u: goto label_101ef8;
            case 0x101EFCu: goto label_101efc;
            case 0x101F00u: goto label_101f00;
            case 0x101F04u: goto label_101f04;
            case 0x101F08u: goto label_101f08;
            case 0x101F0Cu: goto label_101f0c;
            case 0x101F10u: goto label_101f10;
            case 0x101F14u: goto label_101f14;
            case 0x101F18u: goto label_101f18;
            case 0x101F1Cu: goto label_101f1c;
            case 0x101F20u: goto label_101f20;
            case 0x101F24u: goto label_101f24;
            case 0x101F28u: goto label_101f28;
            case 0x101F2Cu: goto label_101f2c;
            case 0x101F30u: goto label_101f30;
            case 0x101F34u: goto label_101f34;
            case 0x101F38u: goto label_101f38;
            case 0x101F3Cu: goto label_101f3c;
            case 0x101F40u: goto label_101f40;
            case 0x101F44u: goto label_101f44;
            case 0x101F48u: goto label_101f48;
            case 0x101F4Cu: goto label_101f4c;
            case 0x101F50u: goto label_101f50;
            case 0x101F54u: goto label_101f54;
            case 0x101F58u: goto label_101f58;
            case 0x101F5Cu: goto label_101f5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101E6Cu;
label_101e6c:
    // 0x101e6c: 0x4842e000
    ctx->pc = 0x101e6cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_itop);
label_101e70:
    // 0x101e70: 0x34420001
    ctx->pc = 0x101e70u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_101e74:
    // 0x101e74: 0x48c2e000
    ctx->pc = 0x101e74u;
    ctx->vu0_itop = GPR_U32(ctx, 2) & 0x3FF;
label_101e78:
    // 0x101e78: 0x24100001
    ctx->pc = 0x101e78u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_101e7c:
    // 0x101e7c: 0x200102d
    ctx->pc = 0x101e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_101e80:
    // 0x101e80: 0xdfbf0010
    ctx->pc = 0x101e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_101e84:
    // 0x101e84: 0xdfb00000
    ctx->pc = 0x101e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_101e88:
    // 0x101e88: 0x3e00008
label_101e8c:
    if (ctx->pc == 0x101E8Cu) {
        ctx->pc = 0x101E8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x101E90u;
        goto label_101e90;
    }
    ctx->pc = 0x101E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101E8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101E18u: goto label_101e18;
            case 0x101E1Cu: goto label_101e1c;
            case 0x101E20u: goto label_101e20;
            case 0x101E24u: goto label_101e24;
            case 0x101E28u: goto label_101e28;
            case 0x101E2Cu: goto label_101e2c;
            case 0x101E30u: goto label_101e30;
            case 0x101E34u: goto label_101e34;
            case 0x101E38u: goto label_101e38;
            case 0x101E3Cu: goto label_101e3c;
            case 0x101E40u: goto label_101e40;
            case 0x101E44u: goto label_101e44;
            case 0x101E48u: goto label_101e48;
            case 0x101E4Cu: goto label_101e4c;
            case 0x101E50u: goto label_101e50;
            case 0x101E54u: goto label_101e54;
            case 0x101E58u: goto label_101e58;
            case 0x101E5Cu: goto label_101e5c;
            case 0x101E60u: goto label_101e60;
            case 0x101E64u: goto label_101e64;
            case 0x101E68u: goto label_101e68;
            case 0x101E6Cu: goto label_101e6c;
            case 0x101E70u: goto label_101e70;
            case 0x101E74u: goto label_101e74;
            case 0x101E78u: goto label_101e78;
            case 0x101E7Cu: goto label_101e7c;
            case 0x101E80u: goto label_101e80;
            case 0x101E84u: goto label_101e84;
            case 0x101E88u: goto label_101e88;
            case 0x101E8Cu: goto label_101e8c;
            case 0x101E90u: goto label_101e90;
            case 0x101E94u: goto label_101e94;
            case 0x101E98u: goto label_101e98;
            case 0x101E9Cu: goto label_101e9c;
            case 0x101EA0u: goto label_101ea0;
            case 0x101EA4u: goto label_101ea4;
            case 0x101EA8u: goto label_101ea8;
            case 0x101EACu: goto label_101eac;
            case 0x101EB0u: goto label_101eb0;
            case 0x101EB4u: goto label_101eb4;
            case 0x101EB8u: goto label_101eb8;
            case 0x101EBCu: goto label_101ebc;
            case 0x101EC0u: goto label_101ec0;
            case 0x101EC4u: goto label_101ec4;
            case 0x101EC8u: goto label_101ec8;
            case 0x101ECCu: goto label_101ecc;
            case 0x101ED0u: goto label_101ed0;
            case 0x101ED4u: goto label_101ed4;
            case 0x101ED8u: goto label_101ed8;
            case 0x101EDCu: goto label_101edc;
            case 0x101EE0u: goto label_101ee0;
            case 0x101EE4u: goto label_101ee4;
            case 0x101EE8u: goto label_101ee8;
            case 0x101EECu: goto label_101eec;
            case 0x101EF0u: goto label_101ef0;
            case 0x101EF4u: goto label_101ef4;
            case 0x101EF8u: goto label_101ef8;
            case 0x101EFCu: goto label_101efc;
            case 0x101F00u: goto label_101f00;
            case 0x101F04u: goto label_101f04;
            case 0x101F08u: goto label_101f08;
            case 0x101F0Cu: goto label_101f0c;
            case 0x101F10u: goto label_101f10;
            case 0x101F14u: goto label_101f14;
            case 0x101F18u: goto label_101f18;
            case 0x101F1Cu: goto label_101f1c;
            case 0x101F20u: goto label_101f20;
            case 0x101F24u: goto label_101f24;
            case 0x101F28u: goto label_101f28;
            case 0x101F2Cu: goto label_101f2c;
            case 0x101F30u: goto label_101f30;
            case 0x101F34u: goto label_101f34;
            case 0x101F38u: goto label_101f38;
            case 0x101F3Cu: goto label_101f3c;
            case 0x101F40u: goto label_101f40;
            case 0x101F44u: goto label_101f44;
            case 0x101F48u: goto label_101f48;
            case 0x101F4Cu: goto label_101f4c;
            case 0x101F50u: goto label_101f50;
            case 0x101F54u: goto label_101f54;
            case 0x101F58u: goto label_101f58;
            case 0x101F5Cu: goto label_101f5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101E90u;
label_101e90:
    // 0x101e90: 0x27bdffe0
    ctx->pc = 0x101e90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_101e94:
    // 0x101e94: 0xffb00000
    ctx->pc = 0x101e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_101e98:
    // 0x101e98: 0xffbf0010
    ctx->pc = 0x101e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_101e9c:
    // 0x101e9c: 0xc0407d8
label_101ea0:
    if (ctx->pc == 0x101EA0u) {
        ctx->pc = 0x101EA0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101EA4u;
        goto label_101ea4;
    }
    ctx->pc = 0x101E9Cu;
    SET_GPR_U32(ctx, 31, 0x101EA4u);
    ctx->pc = 0x101EA0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x101F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F60_0x101f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101EA4u; }
    }
    if (ctx->pc != 0x101EA4u) { return; }
    ctx->pc = 0x101EA4u;
label_101ea4:
    // 0x101ea4: 0x40182d
    ctx->pc = 0x101ea4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101ea8:
    // 0x101ea8: 0x28620004
    ctx->pc = 0x101ea8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
label_101eac:
    // 0x101eac: 0x10400008
label_101eb0:
    if (ctx->pc == 0x101EB0u) {
        ctx->pc = 0x101EB0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101EB4u;
        goto label_101eb4;
    }
    ctx->pc = 0x101EACu;
    {
        const bool branch_taken_0x101eac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x101EB0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x101eac) {
            ctx->pc = 0x101ED0u;
            goto label_101ed0;
        }
    }
    ctx->pc = 0x101EB4u;
label_101eb4:
    // 0x101eb4: 0x18600007
label_101eb8:
    if (ctx->pc == 0x101EB8u) {
        ctx->pc = 0x101EB8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x101EBCu;
        goto label_101ebc;
    }
    ctx->pc = 0x101EB4u;
    {
        const bool branch_taken_0x101eb4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x101EB8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x101eb4) {
            ctx->pc = 0x101ED4u;
            goto label_101ed4;
        }
    }
    ctx->pc = 0x101EBCu;
label_101ebc:
    // 0x101ebc: 0xc0407ec
label_101ec0:
    if (ctx->pc == 0x101EC0u) {
        ctx->pc = 0x101EC0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x101EC4u;
        goto label_101ec4;
    }
    ctx->pc = 0x101EBCu;
    SET_GPR_U32(ctx, 31, 0x101EC4u);
    ctx->pc = 0x101EC0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x101FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FB0_0x101fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101EC4u; }
    }
    if (ctx->pc != 0x101EC4u) { return; }
    ctx->pc = 0x101EC4u;
label_101ec4:
    // 0x101ec4: 0xc0407e8
label_101ec8:
    if (ctx->pc == 0x101EC8u) {
        ctx->pc = 0x101EC8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101ECCu;
        goto label_101ecc;
    }
    ctx->pc = 0x101EC4u;
    SET_GPR_U32(ctx, 31, 0x101ECCu);
    ctx->pc = 0x101EC8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x101FA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101ECCu; }
    }
    if (ctx->pc != 0x101ECCu) { return; }
    ctx->pc = 0x101ECCu;
label_101ecc:
    // 0x101ecc: 0x200102d
    ctx->pc = 0x101eccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_101ed0:
    // 0x101ed0: 0xdfbf0010
    ctx->pc = 0x101ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_101ed4:
    // 0x101ed4: 0xdfb00000
    ctx->pc = 0x101ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_101ed8:
    // 0x101ed8: 0x3e00008
label_101edc:
    if (ctx->pc == 0x101EDCu) {
        ctx->pc = 0x101EDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x101EE0u;
        goto label_101ee0;
    }
    ctx->pc = 0x101ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101EDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101E18u: goto label_101e18;
            case 0x101E1Cu: goto label_101e1c;
            case 0x101E20u: goto label_101e20;
            case 0x101E24u: goto label_101e24;
            case 0x101E28u: goto label_101e28;
            case 0x101E2Cu: goto label_101e2c;
            case 0x101E30u: goto label_101e30;
            case 0x101E34u: goto label_101e34;
            case 0x101E38u: goto label_101e38;
            case 0x101E3Cu: goto label_101e3c;
            case 0x101E40u: goto label_101e40;
            case 0x101E44u: goto label_101e44;
            case 0x101E48u: goto label_101e48;
            case 0x101E4Cu: goto label_101e4c;
            case 0x101E50u: goto label_101e50;
            case 0x101E54u: goto label_101e54;
            case 0x101E58u: goto label_101e58;
            case 0x101E5Cu: goto label_101e5c;
            case 0x101E60u: goto label_101e60;
            case 0x101E64u: goto label_101e64;
            case 0x101E68u: goto label_101e68;
            case 0x101E6Cu: goto label_101e6c;
            case 0x101E70u: goto label_101e70;
            case 0x101E74u: goto label_101e74;
            case 0x101E78u: goto label_101e78;
            case 0x101E7Cu: goto label_101e7c;
            case 0x101E80u: goto label_101e80;
            case 0x101E84u: goto label_101e84;
            case 0x101E88u: goto label_101e88;
            case 0x101E8Cu: goto label_101e8c;
            case 0x101E90u: goto label_101e90;
            case 0x101E94u: goto label_101e94;
            case 0x101E98u: goto label_101e98;
            case 0x101E9Cu: goto label_101e9c;
            case 0x101EA0u: goto label_101ea0;
            case 0x101EA4u: goto label_101ea4;
            case 0x101EA8u: goto label_101ea8;
            case 0x101EACu: goto label_101eac;
            case 0x101EB0u: goto label_101eb0;
            case 0x101EB4u: goto label_101eb4;
            case 0x101EB8u: goto label_101eb8;
            case 0x101EBCu: goto label_101ebc;
            case 0x101EC0u: goto label_101ec0;
            case 0x101EC4u: goto label_101ec4;
            case 0x101EC8u: goto label_101ec8;
            case 0x101ECCu: goto label_101ecc;
            case 0x101ED0u: goto label_101ed0;
            case 0x101ED4u: goto label_101ed4;
            case 0x101ED8u: goto label_101ed8;
            case 0x101EDCu: goto label_101edc;
            case 0x101EE0u: goto label_101ee0;
            case 0x101EE4u: goto label_101ee4;
            case 0x101EE8u: goto label_101ee8;
            case 0x101EECu: goto label_101eec;
            case 0x101EF0u: goto label_101ef0;
            case 0x101EF4u: goto label_101ef4;
            case 0x101EF8u: goto label_101ef8;
            case 0x101EFCu: goto label_101efc;
            case 0x101F00u: goto label_101f00;
            case 0x101F04u: goto label_101f04;
            case 0x101F08u: goto label_101f08;
            case 0x101F0Cu: goto label_101f0c;
            case 0x101F10u: goto label_101f10;
            case 0x101F14u: goto label_101f14;
            case 0x101F18u: goto label_101f18;
            case 0x101F1Cu: goto label_101f1c;
            case 0x101F20u: goto label_101f20;
            case 0x101F24u: goto label_101f24;
            case 0x101F28u: goto label_101f28;
            case 0x101F2Cu: goto label_101f2c;
            case 0x101F30u: goto label_101f30;
            case 0x101F34u: goto label_101f34;
            case 0x101F38u: goto label_101f38;
            case 0x101F3Cu: goto label_101f3c;
            case 0x101F40u: goto label_101f40;
            case 0x101F44u: goto label_101f44;
            case 0x101F48u: goto label_101f48;
            case 0x101F4Cu: goto label_101f4c;
            case 0x101F50u: goto label_101f50;
            case 0x101F54u: goto label_101f54;
            case 0x101F58u: goto label_101f58;
            case 0x101F5Cu: goto label_101f5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101EE0u;
label_101ee0:
    // 0x101ee0: 0x4843e000
    ctx->pc = 0x101ee0u;
    SET_GPR_U32(ctx, 3, ctx->vu0_itop);
label_101ee4:
    // 0x101ee4: 0x24020001
    ctx->pc = 0x101ee4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_101ee8:
    // 0x101ee8: 0x14820003
label_101eec:
    if (ctx->pc == 0x101EECu) {
        ctx->pc = 0x101EF0u;
        goto label_101ef0;
    }
    ctx->pc = 0x101EE8u;
    {
        const bool branch_taken_0x101ee8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x101ee8) {
            ctx->pc = 0x101EF8u;
            goto label_101ef8;
        }
    }
    ctx->pc = 0x101EF0u;
label_101ef0:
    // 0x101ef0: 0x10000004
label_101ef4:
    if (ctx->pc == 0x101EF4u) {
        ctx->pc = 0x101EF4u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x101EF8u;
        goto label_101ef8;
    }
    ctx->pc = 0x101EF0u;
    {
        const bool branch_taken_0x101ef0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x101EF4u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x101ef0) {
            ctx->pc = 0x101F04u;
            goto label_101f04;
        }
    }
    ctx->pc = 0x101EF8u;
label_101ef8:
    // 0x101ef8: 0x3c02ffff
    ctx->pc = 0x101ef8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_101efc:
    // 0x101efc: 0x3442fffb
    ctx->pc = 0x101efcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65531));
label_101f00:
    // 0x101f00: 0x621824
    ctx->pc = 0x101f00u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_101f04:
    // 0x101f04: 0x48c3e000
    ctx->pc = 0x101f04u;
    ctx->vu0_itop = GPR_U32(ctx, 3) & 0x3FF;
label_101f08:
    // 0x101f08: 0x3e00008
label_101f0c:
    if (ctx->pc == 0x101F0Cu) {
        ctx->pc = 0x101F10u;
        goto label_101f10;
    }
    ctx->pc = 0x101F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101E18u: goto label_101e18;
            case 0x101E1Cu: goto label_101e1c;
            case 0x101E20u: goto label_101e20;
            case 0x101E24u: goto label_101e24;
            case 0x101E28u: goto label_101e28;
            case 0x101E2Cu: goto label_101e2c;
            case 0x101E30u: goto label_101e30;
            case 0x101E34u: goto label_101e34;
            case 0x101E38u: goto label_101e38;
            case 0x101E3Cu: goto label_101e3c;
            case 0x101E40u: goto label_101e40;
            case 0x101E44u: goto label_101e44;
            case 0x101E48u: goto label_101e48;
            case 0x101E4Cu: goto label_101e4c;
            case 0x101E50u: goto label_101e50;
            case 0x101E54u: goto label_101e54;
            case 0x101E58u: goto label_101e58;
            case 0x101E5Cu: goto label_101e5c;
            case 0x101E60u: goto label_101e60;
            case 0x101E64u: goto label_101e64;
            case 0x101E68u: goto label_101e68;
            case 0x101E6Cu: goto label_101e6c;
            case 0x101E70u: goto label_101e70;
            case 0x101E74u: goto label_101e74;
            case 0x101E78u: goto label_101e78;
            case 0x101E7Cu: goto label_101e7c;
            case 0x101E80u: goto label_101e80;
            case 0x101E84u: goto label_101e84;
            case 0x101E88u: goto label_101e88;
            case 0x101E8Cu: goto label_101e8c;
            case 0x101E90u: goto label_101e90;
            case 0x101E94u: goto label_101e94;
            case 0x101E98u: goto label_101e98;
            case 0x101E9Cu: goto label_101e9c;
            case 0x101EA0u: goto label_101ea0;
            case 0x101EA4u: goto label_101ea4;
            case 0x101EA8u: goto label_101ea8;
            case 0x101EACu: goto label_101eac;
            case 0x101EB0u: goto label_101eb0;
            case 0x101EB4u: goto label_101eb4;
            case 0x101EB8u: goto label_101eb8;
            case 0x101EBCu: goto label_101ebc;
            case 0x101EC0u: goto label_101ec0;
            case 0x101EC4u: goto label_101ec4;
            case 0x101EC8u: goto label_101ec8;
            case 0x101ECCu: goto label_101ecc;
            case 0x101ED0u: goto label_101ed0;
            case 0x101ED4u: goto label_101ed4;
            case 0x101ED8u: goto label_101ed8;
            case 0x101EDCu: goto label_101edc;
            case 0x101EE0u: goto label_101ee0;
            case 0x101EE4u: goto label_101ee4;
            case 0x101EE8u: goto label_101ee8;
            case 0x101EECu: goto label_101eec;
            case 0x101EF0u: goto label_101ef0;
            case 0x101EF4u: goto label_101ef4;
            case 0x101EF8u: goto label_101ef8;
            case 0x101EFCu: goto label_101efc;
            case 0x101F00u: goto label_101f00;
            case 0x101F04u: goto label_101f04;
            case 0x101F08u: goto label_101f08;
            case 0x101F0Cu: goto label_101f0c;
            case 0x101F10u: goto label_101f10;
            case 0x101F14u: goto label_101f14;
            case 0x101F18u: goto label_101f18;
            case 0x101F1Cu: goto label_101f1c;
            case 0x101F20u: goto label_101f20;
            case 0x101F24u: goto label_101f24;
            case 0x101F28u: goto label_101f28;
            case 0x101F2Cu: goto label_101f2c;
            case 0x101F30u: goto label_101f30;
            case 0x101F34u: goto label_101f34;
            case 0x101F38u: goto label_101f38;
            case 0x101F3Cu: goto label_101f3c;
            case 0x101F40u: goto label_101f40;
            case 0x101F44u: goto label_101f44;
            case 0x101F48u: goto label_101f48;
            case 0x101F4Cu: goto label_101f4c;
            case 0x101F50u: goto label_101f50;
            case 0x101F54u: goto label_101f54;
            case 0x101F58u: goto label_101f58;
            case 0x101F5Cu: goto label_101f5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101F10u;
label_101f10:
    // 0x101f10: 0x4843e000
    ctx->pc = 0x101f10u;
    SET_GPR_U32(ctx, 3, ctx->vu0_itop);
label_101f14:
    // 0x101f14: 0x24020001
    ctx->pc = 0x101f14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_101f18:
    // 0x101f18: 0x14820003
label_101f1c:
    if (ctx->pc == 0x101F1Cu) {
        ctx->pc = 0x101F20u;
        goto label_101f20;
    }
    ctx->pc = 0x101F18u;
    {
        const bool branch_taken_0x101f18 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x101f18) {
            ctx->pc = 0x101F28u;
            goto label_101f28;
        }
    }
    ctx->pc = 0x101F20u;
label_101f20:
    // 0x101f20: 0x10000004
label_101f24:
    if (ctx->pc == 0x101F24u) {
        ctx->pc = 0x101F24u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x101F28u;
        goto label_101f28;
    }
    ctx->pc = 0x101F20u;
    {
        const bool branch_taken_0x101f20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x101F24u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8));
        if (branch_taken_0x101f20) {
            ctx->pc = 0x101F34u;
            goto label_101f34;
        }
    }
    ctx->pc = 0x101F28u;
label_101f28:
    // 0x101f28: 0x3c02ffff
    ctx->pc = 0x101f28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_101f2c:
    // 0x101f2c: 0x3442fff7
    ctx->pc = 0x101f2cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65527));
label_101f30:
    // 0x101f30: 0x621824
    ctx->pc = 0x101f30u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_101f34:
    // 0x101f34: 0x48c3e000
    ctx->pc = 0x101f34u;
    ctx->vu0_itop = GPR_U32(ctx, 3) & 0x3FF;
label_101f38:
    // 0x101f38: 0x3e00008
label_101f3c:
    if (ctx->pc == 0x101F3Cu) {
        ctx->pc = 0x101F40u;
        goto label_101f40;
    }
    ctx->pc = 0x101F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101E18u: goto label_101e18;
            case 0x101E1Cu: goto label_101e1c;
            case 0x101E20u: goto label_101e20;
            case 0x101E24u: goto label_101e24;
            case 0x101E28u: goto label_101e28;
            case 0x101E2Cu: goto label_101e2c;
            case 0x101E30u: goto label_101e30;
            case 0x101E34u: goto label_101e34;
            case 0x101E38u: goto label_101e38;
            case 0x101E3Cu: goto label_101e3c;
            case 0x101E40u: goto label_101e40;
            case 0x101E44u: goto label_101e44;
            case 0x101E48u: goto label_101e48;
            case 0x101E4Cu: goto label_101e4c;
            case 0x101E50u: goto label_101e50;
            case 0x101E54u: goto label_101e54;
            case 0x101E58u: goto label_101e58;
            case 0x101E5Cu: goto label_101e5c;
            case 0x101E60u: goto label_101e60;
            case 0x101E64u: goto label_101e64;
            case 0x101E68u: goto label_101e68;
            case 0x101E6Cu: goto label_101e6c;
            case 0x101E70u: goto label_101e70;
            case 0x101E74u: goto label_101e74;
            case 0x101E78u: goto label_101e78;
            case 0x101E7Cu: goto label_101e7c;
            case 0x101E80u: goto label_101e80;
            case 0x101E84u: goto label_101e84;
            case 0x101E88u: goto label_101e88;
            case 0x101E8Cu: goto label_101e8c;
            case 0x101E90u: goto label_101e90;
            case 0x101E94u: goto label_101e94;
            case 0x101E98u: goto label_101e98;
            case 0x101E9Cu: goto label_101e9c;
            case 0x101EA0u: goto label_101ea0;
            case 0x101EA4u: goto label_101ea4;
            case 0x101EA8u: goto label_101ea8;
            case 0x101EACu: goto label_101eac;
            case 0x101EB0u: goto label_101eb0;
            case 0x101EB4u: goto label_101eb4;
            case 0x101EB8u: goto label_101eb8;
            case 0x101EBCu: goto label_101ebc;
            case 0x101EC0u: goto label_101ec0;
            case 0x101EC4u: goto label_101ec4;
            case 0x101EC8u: goto label_101ec8;
            case 0x101ECCu: goto label_101ecc;
            case 0x101ED0u: goto label_101ed0;
            case 0x101ED4u: goto label_101ed4;
            case 0x101ED8u: goto label_101ed8;
            case 0x101EDCu: goto label_101edc;
            case 0x101EE0u: goto label_101ee0;
            case 0x101EE4u: goto label_101ee4;
            case 0x101EE8u: goto label_101ee8;
            case 0x101EECu: goto label_101eec;
            case 0x101EF0u: goto label_101ef0;
            case 0x101EF4u: goto label_101ef4;
            case 0x101EF8u: goto label_101ef8;
            case 0x101EFCu: goto label_101efc;
            case 0x101F00u: goto label_101f00;
            case 0x101F04u: goto label_101f04;
            case 0x101F08u: goto label_101f08;
            case 0x101F0Cu: goto label_101f0c;
            case 0x101F10u: goto label_101f10;
            case 0x101F14u: goto label_101f14;
            case 0x101F18u: goto label_101f18;
            case 0x101F1Cu: goto label_101f1c;
            case 0x101F20u: goto label_101f20;
            case 0x101F24u: goto label_101f24;
            case 0x101F28u: goto label_101f28;
            case 0x101F2Cu: goto label_101f2c;
            case 0x101F30u: goto label_101f30;
            case 0x101F34u: goto label_101f34;
            case 0x101F38u: goto label_101f38;
            case 0x101F3Cu: goto label_101f3c;
            case 0x101F40u: goto label_101f40;
            case 0x101F44u: goto label_101f44;
            case 0x101F48u: goto label_101f48;
            case 0x101F4Cu: goto label_101f4c;
            case 0x101F50u: goto label_101f50;
            case 0x101F54u: goto label_101f54;
            case 0x101F58u: goto label_101f58;
            case 0x101F5Cu: goto label_101f5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101F40u;
label_101f40:
    // 0x101f40: 0x4842e000
    ctx->pc = 0x101f40u;
    SET_GPR_U32(ctx, 2, ctx->vu0_itop);
label_101f44:
    // 0x101f44: 0x21082
    ctx->pc = 0x101f44u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 2));
label_101f48:
    // 0x101f48: 0x3e00008
label_101f4c:
    if (ctx->pc == 0x101F4Cu) {
        ctx->pc = 0x101F4Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x101F50u;
        goto label_101f50;
    }
    ctx->pc = 0x101F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101F4Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101E18u: goto label_101e18;
            case 0x101E1Cu: goto label_101e1c;
            case 0x101E20u: goto label_101e20;
            case 0x101E24u: goto label_101e24;
            case 0x101E28u: goto label_101e28;
            case 0x101E2Cu: goto label_101e2c;
            case 0x101E30u: goto label_101e30;
            case 0x101E34u: goto label_101e34;
            case 0x101E38u: goto label_101e38;
            case 0x101E3Cu: goto label_101e3c;
            case 0x101E40u: goto label_101e40;
            case 0x101E44u: goto label_101e44;
            case 0x101E48u: goto label_101e48;
            case 0x101E4Cu: goto label_101e4c;
            case 0x101E50u: goto label_101e50;
            case 0x101E54u: goto label_101e54;
            case 0x101E58u: goto label_101e58;
            case 0x101E5Cu: goto label_101e5c;
            case 0x101E60u: goto label_101e60;
            case 0x101E64u: goto label_101e64;
            case 0x101E68u: goto label_101e68;
            case 0x101E6Cu: goto label_101e6c;
            case 0x101E70u: goto label_101e70;
            case 0x101E74u: goto label_101e74;
            case 0x101E78u: goto label_101e78;
            case 0x101E7Cu: goto label_101e7c;
            case 0x101E80u: goto label_101e80;
            case 0x101E84u: goto label_101e84;
            case 0x101E88u: goto label_101e88;
            case 0x101E8Cu: goto label_101e8c;
            case 0x101E90u: goto label_101e90;
            case 0x101E94u: goto label_101e94;
            case 0x101E98u: goto label_101e98;
            case 0x101E9Cu: goto label_101e9c;
            case 0x101EA0u: goto label_101ea0;
            case 0x101EA4u: goto label_101ea4;
            case 0x101EA8u: goto label_101ea8;
            case 0x101EACu: goto label_101eac;
            case 0x101EB0u: goto label_101eb0;
            case 0x101EB4u: goto label_101eb4;
            case 0x101EB8u: goto label_101eb8;
            case 0x101EBCu: goto label_101ebc;
            case 0x101EC0u: goto label_101ec0;
            case 0x101EC4u: goto label_101ec4;
            case 0x101EC8u: goto label_101ec8;
            case 0x101ECCu: goto label_101ecc;
            case 0x101ED0u: goto label_101ed0;
            case 0x101ED4u: goto label_101ed4;
            case 0x101ED8u: goto label_101ed8;
            case 0x101EDCu: goto label_101edc;
            case 0x101EE0u: goto label_101ee0;
            case 0x101EE4u: goto label_101ee4;
            case 0x101EE8u: goto label_101ee8;
            case 0x101EECu: goto label_101eec;
            case 0x101EF0u: goto label_101ef0;
            case 0x101EF4u: goto label_101ef4;
            case 0x101EF8u: goto label_101ef8;
            case 0x101EFCu: goto label_101efc;
            case 0x101F00u: goto label_101f00;
            case 0x101F04u: goto label_101f04;
            case 0x101F08u: goto label_101f08;
            case 0x101F0Cu: goto label_101f0c;
            case 0x101F10u: goto label_101f10;
            case 0x101F14u: goto label_101f14;
            case 0x101F18u: goto label_101f18;
            case 0x101F1Cu: goto label_101f1c;
            case 0x101F20u: goto label_101f20;
            case 0x101F24u: goto label_101f24;
            case 0x101F28u: goto label_101f28;
            case 0x101F2Cu: goto label_101f2c;
            case 0x101F30u: goto label_101f30;
            case 0x101F34u: goto label_101f34;
            case 0x101F38u: goto label_101f38;
            case 0x101F3Cu: goto label_101f3c;
            case 0x101F40u: goto label_101f40;
            case 0x101F44u: goto label_101f44;
            case 0x101F48u: goto label_101f48;
            case 0x101F4Cu: goto label_101f4c;
            case 0x101F50u: goto label_101f50;
            case 0x101F54u: goto label_101f54;
            case 0x101F58u: goto label_101f58;
            case 0x101F5Cu: goto label_101f5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101F50u;
label_101f50:
    // 0x101f50: 0x4842e000
    ctx->pc = 0x101f50u;
    SET_GPR_U32(ctx, 2, ctx->vu0_itop);
label_101f54:
    // 0x101f54: 0x210c2
    ctx->pc = 0x101f54u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 3));
label_101f58:
    // 0x101f58: 0x3e00008
label_101f5c:
    if (ctx->pc == 0x101F5Cu) {
        ctx->pc = 0x101F5Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x101F60u;
        goto label_fallthrough_0x101f58;
    }
    ctx->pc = 0x101F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101F5Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101E18u: goto label_101e18;
            case 0x101E1Cu: goto label_101e1c;
            case 0x101E20u: goto label_101e20;
            case 0x101E24u: goto label_101e24;
            case 0x101E28u: goto label_101e28;
            case 0x101E2Cu: goto label_101e2c;
            case 0x101E30u: goto label_101e30;
            case 0x101E34u: goto label_101e34;
            case 0x101E38u: goto label_101e38;
            case 0x101E3Cu: goto label_101e3c;
            case 0x101E40u: goto label_101e40;
            case 0x101E44u: goto label_101e44;
            case 0x101E48u: goto label_101e48;
            case 0x101E4Cu: goto label_101e4c;
            case 0x101E50u: goto label_101e50;
            case 0x101E54u: goto label_101e54;
            case 0x101E58u: goto label_101e58;
            case 0x101E5Cu: goto label_101e5c;
            case 0x101E60u: goto label_101e60;
            case 0x101E64u: goto label_101e64;
            case 0x101E68u: goto label_101e68;
            case 0x101E6Cu: goto label_101e6c;
            case 0x101E70u: goto label_101e70;
            case 0x101E74u: goto label_101e74;
            case 0x101E78u: goto label_101e78;
            case 0x101E7Cu: goto label_101e7c;
            case 0x101E80u: goto label_101e80;
            case 0x101E84u: goto label_101e84;
            case 0x101E88u: goto label_101e88;
            case 0x101E8Cu: goto label_101e8c;
            case 0x101E90u: goto label_101e90;
            case 0x101E94u: goto label_101e94;
            case 0x101E98u: goto label_101e98;
            case 0x101E9Cu: goto label_101e9c;
            case 0x101EA0u: goto label_101ea0;
            case 0x101EA4u: goto label_101ea4;
            case 0x101EA8u: goto label_101ea8;
            case 0x101EACu: goto label_101eac;
            case 0x101EB0u: goto label_101eb0;
            case 0x101EB4u: goto label_101eb4;
            case 0x101EB8u: goto label_101eb8;
            case 0x101EBCu: goto label_101ebc;
            case 0x101EC0u: goto label_101ec0;
            case 0x101EC4u: goto label_101ec4;
            case 0x101EC8u: goto label_101ec8;
            case 0x101ECCu: goto label_101ecc;
            case 0x101ED0u: goto label_101ed0;
            case 0x101ED4u: goto label_101ed4;
            case 0x101ED8u: goto label_101ed8;
            case 0x101EDCu: goto label_101edc;
            case 0x101EE0u: goto label_101ee0;
            case 0x101EE4u: goto label_101ee4;
            case 0x101EE8u: goto label_101ee8;
            case 0x101EECu: goto label_101eec;
            case 0x101EF0u: goto label_101ef0;
            case 0x101EF4u: goto label_101ef4;
            case 0x101EF8u: goto label_101ef8;
            case 0x101EFCu: goto label_101efc;
            case 0x101F00u: goto label_101f00;
            case 0x101F04u: goto label_101f04;
            case 0x101F08u: goto label_101f08;
            case 0x101F0Cu: goto label_101f0c;
            case 0x101F10u: goto label_101f10;
            case 0x101F14u: goto label_101f14;
            case 0x101F18u: goto label_101f18;
            case 0x101F1Cu: goto label_101f1c;
            case 0x101F20u: goto label_101f20;
            case 0x101F24u: goto label_101f24;
            case 0x101F28u: goto label_101f28;
            case 0x101F2Cu: goto label_101f2c;
            case 0x101F30u: goto label_101f30;
            case 0x101F34u: goto label_101f34;
            case 0x101F38u: goto label_101f38;
            case 0x101F3Cu: goto label_101f3c;
            case 0x101F40u: goto label_101f40;
            case 0x101F44u: goto label_101f44;
            case 0x101F48u: goto label_101f48;
            case 0x101F4Cu: goto label_101f4c;
            case 0x101F50u: goto label_101f50;
            case 0x101F54u: goto label_101f54;
            case 0x101F58u: goto label_101f58;
            case 0x101F5Cu: goto label_101f5c;
            default: break;
        }
        return;
    }
label_fallthrough_0x101f58:
    ctx->pc = 0x101F60u;
}
