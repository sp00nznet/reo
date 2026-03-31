#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169EE0
// Address: 0x169ee0 - 0x169ff0
void sub_00169EE0_0x169ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169ee0u;

    // 0x169ee0: 0x27bdfff0
    ctx->pc = 0x169ee0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169ee4: 0xffbf0000
    ctx->pc = 0x169ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169ee8: 0xdfbf0000
    ctx->pc = 0x169ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169eec: 0x804af64
    ctx->pc = 0x169EECu;
    ctx->pc = 0x169EF0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12BD90u;
    sub_0012BD90_0x12bd90(rdram, ctx, runtime); return;
    ctx->pc = 0x169EF4u;
    // 0x169ef4: 0x0
    ctx->pc = 0x169ef4u;
    // NOP
    // 0x169ef8: 0x3e00008
    ctx->pc = 0x169EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169EFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169F00u;
    // 0x169f00: 0x3e00008
    ctx->pc = 0x169F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169F04u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169F08u;
    // 0x169f08: 0x27bdfff0
    ctx->pc = 0x169f08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169f0c: 0x24060001
    ctx->pc = 0x169f0cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x169f10: 0xffbf0000
    ctx->pc = 0x169f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169f14: 0xc059f28
    ctx->pc = 0x169F14u;
    SET_GPR_U32(ctx, 31, 0x169F1Cu);
    ctx->pc = 0x169F18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 6836)));
    ctx->pc = 0x167CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167CA0_0x167ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F1Cu; }
    }
    if (ctx->pc != 0x169F1Cu) { return; }
    ctx->pc = 0x169F1Cu;
    // 0x169f1c: 0x102d
    ctx->pc = 0x169f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f20: 0xdfbf0000
    ctx->pc = 0x169f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169f24: 0x3e00008
    ctx->pc = 0x169F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169F28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169F2Cu;
    // 0x169f2c: 0x0
    ctx->pc = 0x169f2cu;
    // NOP
    // 0x169f30: 0x3e00008
    ctx->pc = 0x169F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169F34u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169F38u;
    // 0x169f38: 0x3e00008
    ctx->pc = 0x169F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169F3Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169F40u;
    // 0x169f40: 0x3e00008
    ctx->pc = 0x169F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169F44u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169F48u;
    // 0x169f48: 0x3e00008
    ctx->pc = 0x169F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169F4Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169F50u;
    // 0x169f50: 0x3e00008
    ctx->pc = 0x169F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169F54u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169F58u;
    // 0x169f58: 0x3e00008
    ctx->pc = 0x169F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169F5Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169F60u;
    // 0x169f60: 0x27bdfff0
    ctx->pc = 0x169f60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169f64: 0xa0302d
    ctx->pc = 0x169f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f68: 0xffbf0000
    ctx->pc = 0x169f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169f6c: 0x8c851ab4
    ctx->pc = 0x169f6cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 6836)));
    // 0x169f70: 0xdfbf0000
    ctx->pc = 0x169f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169f74: 0x8059bf4
    ctx->pc = 0x169F74u;
    ctx->pc = 0x169F78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x166FD0u;
    sub_00166FD0_0x166fd0(rdram, ctx, runtime); return;
    ctx->pc = 0x169F7Cu;
    // 0x169f7c: 0x0
    ctx->pc = 0x169f7cu;
    // NOP
    // 0x169f80: 0x27bdfff0
    ctx->pc = 0x169f80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169f84: 0xa0102d
    ctx->pc = 0x169f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f88: 0xffbf0000
    ctx->pc = 0x169f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169f8c: 0xc0382d
    ctx->pc = 0x169f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f90: 0x40302d
    ctx->pc = 0x169f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f94: 0x8c851ab4
    ctx->pc = 0x169f94u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 6836)));
    // 0x169f98: 0xdfbf0000
    ctx->pc = 0x169f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169f9c: 0x8059c32
    ctx->pc = 0x169F9Cu;
    ctx->pc = 0x169FA0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1670C8u;
    sub_001670C8_0x1670c8(rdram, ctx, runtime); return;
    ctx->pc = 0x169FA4u;
    // 0x169fa4: 0x0
    ctx->pc = 0x169fa4u;
    // NOP
    // 0x169fa8: 0x27bdfff0
    ctx->pc = 0x169fa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169fac: 0x3c05ff00
    ctx->pc = 0x169facu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x169fb0: 0xffbf0000
    ctx->pc = 0x169fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169fb4: 0x34a50501
    ctx->pc = 0x169fb4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1281));
    // 0x169fb8: 0xdfbf0000
    ctx->pc = 0x169fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169fbc: 0x805a704
    ctx->pc = 0x169FBCu;
    ctx->pc = 0x169FC0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x169FC4u;
    // 0x169fc4: 0x0
    ctx->pc = 0x169fc4u;
    // NOP
    // 0x169fc8: 0x27bdfff0
    ctx->pc = 0x169fc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169fcc: 0x3c05ff00
    ctx->pc = 0x169fccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x169fd0: 0xffbf0000
    ctx->pc = 0x169fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169fd4: 0x34a50501
    ctx->pc = 0x169fd4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1281));
    // 0x169fd8: 0xdfbf0000
    ctx->pc = 0x169fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169fdc: 0x805a704
    ctx->pc = 0x169FDCu;
    ctx->pc = 0x169FE0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x169FE4u;
    // 0x169fe4: 0x0
    ctx->pc = 0x169fe4u;
    // NOP
    // 0x169fe8: 0x3e00008
    ctx->pc = 0x169FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169FECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169FF0u;
}
