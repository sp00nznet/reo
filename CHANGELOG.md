# Changelog

All notable changes to this project. Format: [Keep a Changelog](https://keepachangelog.com/en/1.1.0/);
versions follow [SemVer](https://semver.org/). No version has been tagged yet, so everything is
under Unreleased, newest first, grouped by period.

## [Unreleased]

### 2026-10: boot flow

#### Fixed
- The game now loads its title overlay itself. Seven stub-era bindings in `reo_override.cpp`
  replaced real game code under wrong names and are removed; the worst wrote a fake display-list
  layout whose seed entry stalled the frame loop at frame 160 (docs/boot-gates.md, "The override
  purge").
- libsif fileio open/close/read/lseek (0x118A70 / 0x118CF8 / 0x1190B0 / 0x118E78) go to the
  runtime's file HLE; 0x118A70 had been bound as SifLoadModule.
- The IOP bring-up (0x1AB560) runs for real, so `sceSifInitIopHeap` runs.

#### Added
- Submodule: `iopheap` and `loadfile` IOP services, an REO profile binding CRI DTX to sid
  0x90000200, `PS2X_TRACE_IRQ_BUDGET`, and `PS2X_DUMP_RAM=<seconds>:<file>`.
- `REO_SKIP_BINDS` / `REO_ONLY_BINDS` to test overrides one at a time.
- `tools/ps2_debug/oracle_watch.py`: watch guest memory in PCSX2 over PINE and save states, to
  compare the real boot with ours.

### 2026-10: repo conformance

#### Changed
- Relicensed from MIT to **GPL-3.0**: reo links PS2Recomp's GPL-3.0 runtime, so the combined
  program can't be MIT. `NOTICE` lists every third-party component carried or linked, with
  licence texts under `LICENSES/`.
- README rewritten: honest status table, both install routes, generated source stated as never
  distributed.
- `.gitignore` covers every `recomp/config/output*/` folder, overlay dumps, emulator captures and
  a local `scratch/` folder.

#### Added
- `Setup.cmd` quick start (prerequisite check, game data copy, full build, `run-reo.cmd` launcher).
- `tools/gen_overlay.py`: recompiles an MWo3 overlay straight from the disc into
  `recomp/config/output_<name>/`, replacing the manual copy-and-rename steps.
- `CHANGELOG.md`, `ROADMAP.md`, `CONTRIBUTING.md`, `docs/architecture.md`, `docs/boot-gates.md`,
  `docs/debugging.md`, `docs/mwo3-overlay-format.md`.

#### Removed
- Recompiled netdnas output (1,226 files) and old partial overlay output were taken out of the
  unpushed commits that added them, so they never reach the public history. The overlay
  function-address list is no longer tracked.

### 2026-09: self-execution on upstream PS2Recomp

#### Changed
- Rebased onto the real upstream, ran-j/PS2Recomp (the fork tracked before was stale) and
  regenerated all game code.

#### Fixed
- Interrupt handlers run on a reserved stack, not the registering thread's; this was silently
  killing the main thread (submodule). DMA 33 → 1598, GIF 5 → 161 per 120 s run.
- EE thread syscalls return the thread id; `ChangeThreadPriority` returns the previous priority;
  `CreateThread` priority 0 inherits the creator's (submodule).
- `SifCallRpc` no longer re-issues NOWAIT calls forever (submodule).
- 42 real stores were being replaced with `nop` by an analyzer-generated "self-modifying code"
  patch list; removed.
- Display-list sentinel DMAtag followed by the GIF and VIF1 walkers; VIF1 DMA completion
  reported from the hardware bridge.
- Three misnamed overrides fixed: 0x100B70 is the CDVD RPC binder, 0x116848 is `sprintf`,
  0x117080 is `sceSifInitRpc`.
- Indirect-call targets (interrupt handlers, dispatch tables) given function-table slots via
  `thread_entries`.
- Game threads, render workers and the SIO/pad thread run for real; DNAS bypassed; memory-pool
  bring-up and IOP handle initialiser no longer stubbed.

#### Added
- MWo3 overlay container decoder (`tools/ps2_debug/mwo3.py`), validated byte-exact.
- Title overlay (submain.bin) and netdnas.bin recompiled and linked.
- CDVD `searchFile` / `read` services as an IOP module (submodule).
- Diagnostics: `PS2X_WATCH_WRITE`, `PS2X_TRACE_RANGE`, `PS2X_TRACE_SYNC`, `PS2X_TRACE_IRQ`,
  `PS2X_POKE`, `[sched:missing-resume]` (submodule).

### 2026-07: pivot from puppet to self-execution

#### Changed
- Un-skipped every function so the game runs its real init instead of stubs; one function
  (`sub_001F73B0`) stays skipped for a recompiler runaway.

#### Fixed
- Boot gates: INTC_STAT vblank bit, GS CSR FIELD toggle, SIF register syscalls, SIF RPC routed to
  the runtime's HLE (submodule).
- `TODO_NAMED` now dispatches to registered stub overrides, so overrides apply to direct calls.

#### Added
- `REO_HEADLESS` (no window), `REO_NATURAL`, `REO_NO_OVERRIDES`.

### 2026-02 to 2026-04: first build and the puppet renderer

#### Added
- Project scaffold; PS2Recomp integration (3,209 functions recompiled at the time); File #2 build
  target.
- NETBIO archive reader, NBD/AMO/TEX parsing, GS software rasterizer, GS dump replay tool.
- Title screen and demo scene shown by injecting framebuffers and memory captured from PCSX2.
  This is the "puppet" approach that the July pivot replaced.
