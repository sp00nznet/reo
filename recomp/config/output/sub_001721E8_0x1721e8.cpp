#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001721E8
// Address: 0x1721e8 - 0x172278
void sub_001721E8_0x1721e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1721e8u;

    // 0x1721e8: 0x27bdffe0
    ctx->pc = 0x1721e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1721ec: 0x102d
    ctx->pc = 0x1721ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1721f0: 0xffb00000
    ctx->pc = 0x1721f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1721f4: 0x80802d
    ctx->pc = 0x1721f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1721f8: 0xffb10008
    ctx->pc = 0x1721f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1721fc: 0xffbf0010
    ctx->pc = 0x1721fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x172200: 0x8e03004c
    ctx->pc = 0x172200u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x172204: 0x2463fffd
    ctx->pc = 0x172204u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x172208: 0x2c630002
    ctx->pc = 0x172208u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x17220c: 0x1060000a
    ctx->pc = 0x17220Cu;
    {
        const bool branch_taken_0x17220c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x172210u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17220c) {
            ctx->pc = 0x172238u;
            goto label_172238;
        }
    }
    ctx->pc = 0x172214u;
    // 0x172214: 0xc05db42
    ctx->pc = 0x172214u;
    SET_GPR_U32(ctx, 31, 0x17221Cu);
    ctx->pc = 0x176D08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176D08_0x176d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17221Cu; }
    }
    if (ctx->pc != 0x17221Cu) { return; }
    ctx->pc = 0x17221Cu;
    // 0x17221c: 0x200202d
    ctx->pc = 0x17221cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172220: 0x220282d
    ctx->pc = 0x172220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172224: 0xdfb10008
    ctx->pc = 0x172224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172228: 0xdfb00000
    ctx->pc = 0x172228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17222c: 0xdfbf0010
    ctx->pc = 0x17222cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172230: 0x805c894
    ctx->pc = 0x172230u;
    ctx->pc = 0x172234u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x172250u;
    goto label_172250;
    ctx->pc = 0x172238u;
label_172238:
    // 0x172238: 0xdfb00000
    ctx->pc = 0x172238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17223c: 0xdfb10008
    ctx->pc = 0x17223cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172240: 0xdfbf0010
    ctx->pc = 0x172240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172244: 0x3e00008
    ctx->pc = 0x172244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172248u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172238u: goto label_172238;
            case 0x172250u: goto label_172250;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17224Cu;
    // 0x17224c: 0x0
    ctx->pc = 0x17224cu;
    // NOP
label_172250:
    // 0x172250: 0x27bdfff0
    ctx->pc = 0x172250u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172254: 0xa0382d
    ctx->pc = 0x172254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172258: 0x24060008
    ctx->pc = 0x172258u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x17225c: 0x402d
    ctx->pc = 0x17225cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172260: 0xffbf0000
    ctx->pc = 0x172260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172264: 0xc05def8
    ctx->pc = 0x172264u;
    SET_GPR_U32(ctx, 31, 0x17226Cu);
    ctx->pc = 0x172268u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x177BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177BE0_0x177be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17226Cu; }
    }
    if (ctx->pc != 0x17226Cu) { return; }
    ctx->pc = 0x17226Cu;
    // 0x17226c: 0xdfbf0000
    ctx->pc = 0x17226cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172270: 0x3e00008
    ctx->pc = 0x172270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172274u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172238u: goto label_172238;
            case 0x172250u: goto label_172250;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172278u;
}
