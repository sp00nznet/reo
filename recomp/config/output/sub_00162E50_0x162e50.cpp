#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00162E50
// Address: 0x162e50 - 0x162ea8
void sub_00162E50_0x162e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x162e50u;

label_162e50:
    // 0x162e50: 0x27bdffe0
    ctx->pc = 0x162e50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_162e54:
    // 0x162e54: 0xffb00000
    ctx->pc = 0x162e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_162e58:
    // 0x162e58: 0x80802d
    ctx->pc = 0x162e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_162e5c:
    // 0x162e5c: 0xffb10008
    ctx->pc = 0x162e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_162e60:
    // 0x162e60: 0xffbf0010
    ctx->pc = 0x162e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_162e64:
    // 0x162e64: 0xc058d08
label_162e68:
    if (ctx->pc == 0x162E68u) {
        ctx->pc = 0x162E68u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162E6Cu;
        goto label_162e6c;
    }
    ctx->pc = 0x162E64u;
    SET_GPR_U32(ctx, 31, 0x162E6Cu);
    ctx->pc = 0x162E68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163420_0x163420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E6Cu; }
    }
    if (ctx->pc != 0x162E6Cu) { return; }
    ctx->pc = 0x162E6Cu;
label_162e6c:
    // 0x162e6c: 0x10400007
label_162e70:
    if (ctx->pc == 0x162E70u) {
        ctx->pc = 0x162E70u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162E74u;
        goto label_162e74;
    }
    ctx->pc = 0x162E6Cu;
    {
        const bool branch_taken_0x162e6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x162E70u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x162e6c) {
            ctx->pc = 0x162E8Cu;
            goto label_162e8c;
        }
    }
    ctx->pc = 0x162E74u;
label_162e74:
    // 0x162e74: 0x8c42000c
    ctx->pc = 0x162e74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_162e78:
    // 0x162e78: 0x10400004
label_162e7c:
    if (ctx->pc == 0x162E7Cu) {
        ctx->pc = 0x162E7Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162E80u;
        goto label_162e80;
    }
    ctx->pc = 0x162E78u;
    {
        const bool branch_taken_0x162e78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x162E7Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x162e78) {
            ctx->pc = 0x162E8Cu;
            goto label_162e8c;
        }
    }
    ctx->pc = 0x162E80u;
label_162e80:
    // 0x162e80: 0x40f809
label_162e84:
    if (ctx->pc == 0x162E84u) {
        ctx->pc = 0x162E84u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162E88u;
        goto label_162e88;
    }
    ctx->pc = 0x162E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162E88u);
        ctx->pc = 0x162E84u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162E50u: goto label_162e50;
            case 0x162E54u: goto label_162e54;
            case 0x162E58u: goto label_162e58;
            case 0x162E5Cu: goto label_162e5c;
            case 0x162E60u: goto label_162e60;
            case 0x162E64u: goto label_162e64;
            case 0x162E68u: goto label_162e68;
            case 0x162E6Cu: goto label_162e6c;
            case 0x162E70u: goto label_162e70;
            case 0x162E74u: goto label_162e74;
            case 0x162E78u: goto label_162e78;
            case 0x162E7Cu: goto label_162e7c;
            case 0x162E80u: goto label_162e80;
            case 0x162E84u: goto label_162e84;
            case 0x162E88u: goto label_162e88;
            case 0x162E8Cu: goto label_162e8c;
            case 0x162E90u: goto label_162e90;
            case 0x162E94u: goto label_162e94;
            case 0x162E98u: goto label_162e98;
            case 0x162E9Cu: goto label_162e9c;
            case 0x162EA0u: goto label_162ea0;
            case 0x162EA4u: goto label_162ea4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162E88u; }
            if (ctx->pc != 0x162E88u) { return; }
        }
    }
    ctx->pc = 0x162E88u;
label_162e88:
    // 0x162e88: 0x40182d
    ctx->pc = 0x162e88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162e8c:
    // 0x162e8c: 0xdfb00000
    ctx->pc = 0x162e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162e90:
    // 0x162e90: 0x60102d
    ctx->pc = 0x162e90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_162e94:
    // 0x162e94: 0xdfb10008
    ctx->pc = 0x162e94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_162e98:
    // 0x162e98: 0xdfbf0010
    ctx->pc = 0x162e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_162e9c:
    // 0x162e9c: 0x3e00008
label_162ea0:
    if (ctx->pc == 0x162EA0u) {
        ctx->pc = 0x162EA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x162EA4u;
        goto label_162ea4;
    }
    ctx->pc = 0x162E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162EA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162E50u: goto label_162e50;
            case 0x162E54u: goto label_162e54;
            case 0x162E58u: goto label_162e58;
            case 0x162E5Cu: goto label_162e5c;
            case 0x162E60u: goto label_162e60;
            case 0x162E64u: goto label_162e64;
            case 0x162E68u: goto label_162e68;
            case 0x162E6Cu: goto label_162e6c;
            case 0x162E70u: goto label_162e70;
            case 0x162E74u: goto label_162e74;
            case 0x162E78u: goto label_162e78;
            case 0x162E7Cu: goto label_162e7c;
            case 0x162E80u: goto label_162e80;
            case 0x162E84u: goto label_162e84;
            case 0x162E88u: goto label_162e88;
            case 0x162E8Cu: goto label_162e8c;
            case 0x162E90u: goto label_162e90;
            case 0x162E94u: goto label_162e94;
            case 0x162E98u: goto label_162e98;
            case 0x162E9Cu: goto label_162e9c;
            case 0x162EA0u: goto label_162ea0;
            case 0x162EA4u: goto label_162ea4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162EA4u;
label_162ea4:
    // 0x162ea4: 0x0
    ctx->pc = 0x162ea4u;
    // NOP
}
