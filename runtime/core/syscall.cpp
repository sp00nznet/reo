#include "syscall.h"
#include <cstdio>

namespace reo {

/*
 * PS2 EE Kernel Syscall Numbers (partial list)
 * These are invoked via `syscall` instruction with the code in $v1
 */
enum class Syscall : uint32_t {
    ResetEE          = 0x01,
    SetGsCrt         = 0x02,
    Exit             = 0x04,
    LoadExecPS2      = 0x06,
    ExecPS2          = 0x07,
    CreateThread     = 0x20,
    DeleteThread     = 0x21,
    StartThread      = 0x22,
    ExitThread       = 0x23,
    ExitDeleteThread = 0x24,
    SleepThread      = 0x32,
    WakeupThread     = 0x33,
    RotateThreadReadyQueue = 0x2F,
    CreateSema       = 0x40,
    DeleteSema       = 0x41,
    SignalSema       = 0x42,
    WaitSema         = 0x44,
    PollSema         = 0x45,
    FlushCache       = 0x64,
    GsPutIMR         = 0x71,
    SetVSyncFlag     = 0x73,
    SetSyscall       = 0x74,
    SifDmaStat       = 0x76,
    SifSetDma        = 0x77,
    SifSetDChain     = 0x78,
    SifSetReg        = 0x79,
    SifGetReg        = 0x7A,
    DIntr            = 0x0B,
    EIntr            = 0x0C,
};

static int next_thread_id = 1;
static int next_sema_id = 1;

void handle_syscall(EEContext* ctx, uint32_t code) {
    Syscall sc = (Syscall)(ctx->gpr[3].lo32()); // $v1 holds syscall number

    switch (sc) {
    case Syscall::SetGsCrt:
        hle_SetGsCrt(ctx);
        break;

    case Syscall::GsPutIMR:
        hle_GsPutIMR(ctx);
        break;

    case Syscall::CreateThread:
        hle_CreateThread(ctx);
        break;

    case Syscall::StartThread:
        hle_StartThread(ctx);
        break;

    case Syscall::SleepThread:
        hle_SleepThread(ctx);
        break;

    case Syscall::WakeupThread:
        hle_WakeupThread(ctx);
        break;

    case Syscall::CreateSema:
        hle_CreateSema(ctx);
        break;

    case Syscall::WaitSema:
        hle_WaitSema(ctx);
        break;

    case Syscall::SignalSema:
        hle_SignalSema(ctx);
        break;

    case Syscall::FlushCache:
        hle_FlushCache(ctx);
        break;

    case Syscall::SetVSyncFlag:
        hle_SetVSyncFlag(ctx);
        break;

    case Syscall::ExecPS2:
        hle_ExecPS2(ctx);
        break;

    case Syscall::DIntr:
        // Disable interrupts — no-op on our runtime
        ctx->gpr[2].set32(1); // Return old interrupt state
        break;

    case Syscall::EIntr:
        // Enable interrupts — no-op on our runtime
        break;

    case Syscall::FlushCache:
        // Cache operations are meaningless in our runtime
        break;

    default:
        printf("[SYSCALL] Unhandled syscall 0x%02X at PC=0x%08X\n",
               (uint32_t)sc, ctx->pc);
        break;
    }
}

void hle_SetGsCrt(EEContext* ctx) {
    uint32_t interlace = ctx->gpr[4].lo32();  // $a0
    uint32_t mode = ctx->gpr[5].lo32();       // $a1
    uint32_t field = ctx->gpr[6].lo32();      // $a2

    const char* mode_str = "unknown";
    switch (mode) {
        case 0x02: mode_str = "NTSC (480i)"; break;
        case 0x03: mode_str = "PAL (576i)"; break;
        case 0x1A: mode_str = "480p (VESA)"; break;
        case 0x50: mode_str = "1080i"; break;
    }

    printf("[GS] SetGsCrt: interlace=%d, mode=0x%02X (%s), field=%d\n",
           interlace, mode, mode_str, field);
}

void hle_GsPutIMR(EEContext* ctx) {
    uint32_t imr = ctx->gpr[4].lo32();
    printf("[GS] GsPutIMR: 0x%08X\n", imr);
}

void hle_SetVSyncFlag(EEContext* ctx) {
    // Game passes pointers to vsync flag locations
    // We'll signal these from our vsync timing
    printf("[GS] SetVSyncFlag registered\n");
}

void hle_ExecPS2(EEContext* ctx) {
    uint32_t entry = ctx->gpr[4].lo32();
    printf("[KERN] ExecPS2: entry=0x%08X\n", entry);
    // TODO: Jump to the recompiled function at this address
}

void hle_CreateThread(EEContext* ctx) {
    // $a0 = pointer to ThreadParam struct
    uint32_t param_addr = ctx->gpr[4].lo32();
    int id = next_thread_id++;

    printf("[KERN] CreateThread: id=%d, param=0x%08X\n", id, param_addr);

    // Return thread ID in $v0
    ctx->gpr[2].set32(id);
}

void hle_StartThread(EEContext* ctx) {
    uint32_t thread_id = ctx->gpr[4].lo32();
    printf("[KERN] StartThread: id=%d\n", thread_id);
    // TODO: Schedule recompiled thread function for execution
    ctx->gpr[2].set32(0); // Success
}

void hle_SleepThread(EEContext* ctx) {
    printf("[KERN] SleepThread: current thread sleeping\n");
    // TODO: Yield to next runnable thread
}

void hle_WakeupThread(EEContext* ctx) {
    uint32_t thread_id = ctx->gpr[4].lo32();
    printf("[KERN] WakeupThread: id=%d\n", thread_id);
    ctx->gpr[2].set32(0);
}

void hle_CreateSema(EEContext* ctx) {
    uint32_t param_addr = ctx->gpr[4].lo32();
    int id = next_sema_id++;
    printf("[KERN] CreateSema: id=%d\n", id);
    ctx->gpr[2].set32(id);
}

void hle_WaitSema(EEContext* ctx) {
    uint32_t sema_id = ctx->gpr[4].lo32();
    // For now, just return immediately (no actual blocking)
    ctx->gpr[2].set32(0);
}

void hle_SignalSema(EEContext* ctx) {
    uint32_t sema_id = ctx->gpr[4].lo32();
    ctx->gpr[2].set32(0);
}

void hle_FlushCache(EEContext* ctx) {
    // No-op — we don't have a cache to flush
}

} // namespace reo
