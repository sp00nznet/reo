# Debugging a stalled boot

Every switch here is off by default and set as an environment variable before running
`reo_recomp.exe`. The `PS2X_*` ones live in the PS2Recomp runtime (`third_party/PS2Recomp`), the
`REO_*` ones in this repo.

## Run headless

```
REO_HEADLESS=1 ./recomp/build/Release/reo_recomp.exe --game file1
```

`REO_HEADLESS=1` skips the raylib window entirely. Use it over RDP, on a sleeping monitor, or
anywhere a window would be a problem: `InitWindow` has hard-faulted on an asleep display and taken
the NVIDIA container service down with it.

## Capture stdout and stderr separately

The tick log goes to stdout; the `[range]`, `[write-watch]`, `[sched:*]` and most trace lines go
to stderr. Merged, they interleave mid-line and corrupt each other:

```
REO_HEADLESS=1 PS2X_TRACE_RANGE=0x6e0000:0x751000 ./recomp/build/Release/reo_recomp.exe 2>scratch/err.txt >scratch/out.txt
```

## Who wrote this word? `PS2X_WATCH_WRITE` first

| Variable | Value | What it prints |
|---|---|---|
| `PS2X_WATCH_WRITE` | `0xADDR` | guest pc / ra / sp of **every store** that covers the address. `ra=0` means a top-level IRQ dispatch; an sp near `0x1ffffb0` is the reserved interrupt stack |
| `PS2X_WATCH` | `0xA,0xB,...` | guest words, printed only when they change, at full poll rate. Shows *that* a value changed, not who changed it |

Reach for `PS2X_WATCH_WRITE` first on any "this global is wrong" question. It found the IRQ-stack
bug in one run (see [boot-gates.md](boot-gates.md)). The hook is in a header that every generated
file includes, so changing how it works costs a full rebuild.

## Is this code ever reached?

| Variable | Value | What it prints |
|---|---|---|
| `PS2X_TRACE_RANGE` | `0xLO:0xHI` | every dispatch whose target lands in that guest range. A negative is a real negative: direct calls route through the same dispatcher |
| `PS2X_TRACE_FROM` | `0xA,0xB,...` | dispatches made from those call sites |
| `PS2X_TRACE_CALL` | `0xA,0xB,...` | entries and resumes of those functions |
| `PS2X_TRACE_CALL_HITS` | `N` | cap on `PS2X_TRACE_CALL` output |

## Threads, semaphores, interrupts, RPC

| Variable | What it prints |
|---|---|
| `PS2X_TRACE_SYNC=1` | CreateSema / WaitSema / SignalSema / Sleep / Wakeup / Resume / ReferThreadStatus with the guest call site, plus RPC binds and calls. Budget: `PS2X_TRACE_SYNC_BUDGET=N` |
| `PS2X_TRACE_IRQ=1` | every IRQ dispatch (cause, mask, armed handler) and every DMA kick with CHCR. Line budgets default to 400 / 60 / 30 and run out early, so set `PS2X_TRACE_IRQ_BUDGET=N` before reading anything into the tail |
| `PS2X_TRACE_DORMANT=1` | a thread going dormant, with its last pcs |
| `PS2X_TRACE_INVOKE=1` | invocations that arrive with a non-zero `$sp` (they run on the current thread's stack) |
| `PS2X_TRACE_ASYNC_STACK=1` | the reserved async/interrupt stack range |
| `PS2X_DUMP_SID=0xSID` | hex dump of the first few RPC requests to that service id |
| `PS2X_DECI2_HOST` | if unset, Deci2Call reports no host (the normal retail answer) |

## Compare with the real game

Run PCSX2 as a black box on the same ISO and read its memory over PINE (port 28011, enabled in
`PCSX2.ini`): `py -3 tools/ps2_debug/oracle_watch.py --seconds 150 --save-at 60,120` prints each
change of the addresses in its `WATCH` list with a timestamp, and saves states at the given
offsets. Start PCSX2 first, on a virtual monitor when at the console:

```
offstage run --size 1280x720 --record scratch/oracle.mp4 -- "C:\Program Files\PCSX2\pcsx2-qt.exe" -batch -fastboot -- "<ISO, backslashes>"
```

A forward-slash ISO path makes PCSX2 report the file does not exist. A save state (`.p2s`) is a
zstd zip; its `eeMemory.bin` is the full EE RAM. `PS2X_DUMP_RAM=30:scratch\ours.bin` writes ours
30 s into a run, so the two can be diffed. Both are game memory: keep them in `scratch/`.

## Forcing a value (diagnostic only)

`PS2X_POKE=0xADDR:0xVALUE` writes one guest word once, after tick 400000. It exists to test a
hypothesis ("does the loop exit if this is 3?"), never as a fix: forcing the network state word
to 3 made the boot loop exit and then killed the main thread, because the code past the gate
needs structures the state machine itself builds.

## REO-side switches

| Variable | Effect |
|---|---|
| `REO_NATURAL=1` | disables the old PCSX2 snapshot injection and forced demo thread in `reo_override.cpp` |
| `REO_NO_OVERRIDES=1` | skips every function binding in `applyOutbreakOverrides` |
| `REO_SKIP_BINDS=0xA,0xB` | skips just those bindings; `REO_ONLY_BINDS=0xA,0xB` keeps only those. How the override purge was measured |
| `REO_TRACE=1` | binary event trace to `reo_trace.bin` (`REO_TRACE_FILE=path` to move it) |
| `REO_TRACE_VIFCMD=1` | VIF command opcode histogram from the hardware bridge |

## Method that has worked every time

1. Run headless for 90-120 s.
2. Find the hot pc in the heartbeat / thread table (`[run:thread]`, printed only when the runtime
   is built with `PS2_RUNTIME_LOGS` or `AGRESSIVE_LOGS`, see `ps2xRuntime/include/ps2_log.h`).
   All threads asleep with `wakeups=0` is a deadlock; one thread hot at one pc is a spin.
3. Read the recompiled function at that pc and the ELF disassembly next to it: what MMIO
   register, syscall or global is it polling?
4. Find who should have changed that value (`PS2X_WATCH_WRITE`, `PS2X_TRACE_RANGE`).
5. Fix the emulation of that thing in the runtime, not the game code.

When a global stubbornly reads 0, diff the emitted instruction stream against the ELF before
concluding the writer is dead code. See "the patches trap" in [boot-gates.md](boot-gates.md).
