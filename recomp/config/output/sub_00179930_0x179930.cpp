#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00179930
// Address: 0x179930 - 0x179990
void sub_00179930_0x179930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x179930u;

    // 0x179930: 0x27bdffe0
    ctx->pc = 0x179930u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x179934: 0x3c020024
    ctx->pc = 0x179934u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x179938: 0xffb00000
    ctx->pc = 0x179938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17993c: 0xa0802d
    ctx->pc = 0x17993cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179940: 0x24450e08
    ctx->pc = 0x179940u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 3592));
    // 0x179944: 0xffb10008
    ctx->pc = 0x179944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x179948: 0xffbf0010
    ctx->pc = 0x179948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17994c: 0xc042e02
    ctx->pc = 0x17994Cu;
    SET_GPR_U32(ctx, 31, 0x179954u);
    ctx->pc = 0x179950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B808_0x10b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179954u; }
    }
    if (ctx->pc != 0x179954u) { return; }
    ctx->pc = 0x179954u;
    // 0x179954: 0x200282d
    ctx->pc = 0x179954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179958: 0x40182d
    ctx->pc = 0x179958u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17995c: 0x10600007
    ctx->pc = 0x17995Cu;
    {
        const bool branch_taken_0x17995c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x179960u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x17995c) {
            ctx->pc = 0x17997Cu;
            goto label_17997c;
        }
    }
    ctx->pc = 0x179964u;
    // 0x179964: 0xc05e664
    ctx->pc = 0x179964u;
    SET_GPR_U32(ctx, 31, 0x17996Cu);
    ctx->pc = 0x179990u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179990_0x179990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17996Cu; }
    }
    if (ctx->pc != 0x17996Cu) { return; }
    ctx->pc = 0x17996Cu;
    // 0x17996c: 0x220282d
    ctx->pc = 0x17996cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179970: 0xc05e664
    ctx->pc = 0x179970u;
    SET_GPR_U32(ctx, 31, 0x179978u);
    ctx->pc = 0x179974u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x179990u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179990_0x179990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179978u; }
    }
    if (ctx->pc != 0x179978u) { return; }
    ctx->pc = 0x179978u;
    // 0x179978: 0x24020001
    ctx->pc = 0x179978u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_17997c:
    // 0x17997c: 0xdfb00000
    ctx->pc = 0x17997cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179980: 0xdfb10008
    ctx->pc = 0x179980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179984: 0xdfbf0010
    ctx->pc = 0x179984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179988: 0x3e00008
    ctx->pc = 0x179988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17998Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17997Cu: goto label_17997c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179990u;
}
