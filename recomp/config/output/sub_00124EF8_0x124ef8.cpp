#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00124EF8
// Address: 0x124ef8 - 0x124f48
void sub_00124EF8_0x124ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124ef8u;

    // 0x124ef8: 0x3e00008
    ctx->pc = 0x124EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124EFCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124F2Cu: goto label_124f2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124F00u;
    // 0x124f00: 0x3e00008
    ctx->pc = 0x124F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124F04u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124F2Cu: goto label_124f2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124F08u;
    // 0x124f08: 0x3e00008
    ctx->pc = 0x124F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124F0Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124F2Cu: goto label_124f2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124F10u;
    // 0x124f10: 0x3e00008
    ctx->pc = 0x124F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124F14u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124F2Cu: goto label_124f2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124F18u;
    // 0x124f18: 0x3e00008
    ctx->pc = 0x124F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124F1Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124F2Cu: goto label_124f2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124F20u;
    // 0x124f20: 0x10800002
    ctx->pc = 0x124F20u;
    {
        const bool branch_taken_0x124f20 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x124F24u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x124f20) {
            ctx->pc = 0x124F2Cu;
            goto label_124f2c;
        }
    }
    ctx->pc = 0x124F28u;
    // 0x124f28: 0x8c82002c
    ctx->pc = 0x124f28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_124f2c:
    // 0x124f2c: 0x3e00008
    ctx->pc = 0x124F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124F2Cu: goto label_124f2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124F34u;
    // 0x124f34: 0x0
    ctx->pc = 0x124f34u;
    // NOP
    // 0x124f38: 0x3e00008
    ctx->pc = 0x124F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124F3Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124F2Cu: goto label_124f2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124F40u;
    // 0x124f40: 0x3e00008
    ctx->pc = 0x124F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124F44u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124F2Cu: goto label_124f2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124F48u;
}
