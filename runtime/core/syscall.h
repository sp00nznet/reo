#pragma once

#include "context.h"

namespace reo {

/*
 * PS2 BIOS Syscall Handling
 *
 * PS2 games make BIOS calls via the `syscall` instruction. The recompiled
 * code will call into these handlers instead. We provide high-level
 * implementations of the most commonly used BIOS services.
 *
 * The EE kernel provides ~120 syscalls. Games typically use a subset
 * focused on threading, memory allocation, TLB, DMA, and semaphores.
 */

void handle_syscall(EEContext* ctx, uint32_t code);

// Common BIOS functions that games call directly at known addresses
// (SetGsCrt, GsPutIMR, etc.)
void hle_SetGsCrt(EEContext* ctx);
void hle_GsPutIMR(EEContext* ctx);
void hle_SetVSyncFlag(EEContext* ctx);
void hle_ExecPS2(EEContext* ctx);
void hle_CreateThread(EEContext* ctx);
void hle_StartThread(EEContext* ctx);
void hle_SleepThread(EEContext* ctx);
void hle_WakeupThread(EEContext* ctx);
void hle_CreateSema(EEContext* ctx);
void hle_WaitSema(EEContext* ctx);
void hle_SignalSema(EEContext* ctx);
void hle_FlushCache(EEContext* ctx);

} // namespace reo
