# Boot gates: what stopped the game, and why

The hard-won notes. Each section is a wall the game hit while booting under the recompiled
runtime, what it looked like, and what actually fixed it. Commit hashes are this repo's unless
marked "submodule" (`third_party/PS2Recomp`, branch `reo-on-upstream`). For the tools named here
see [debugging.md](debugging.md).

## Where it stands (measured 2026-10-17)

- The game runs its own code, and since the override purge (below) far more of it: the engine's
  system init (0x12A1E8), the IOP bring-up (0x1AB560) and the display-list code are no longer
  stubbed.
- IOP side: SJX_Init gets its IOP heap (new `iopheap` service), DRIVE.DAT's modules "load" (new
  `loadfile` service), and the CRI DTX transport is created (REO profile in ps2xIOP).
- **The game loads its title overlay itself**: `cdvdfsv: read 'BIN/0.DAT' -> 0x370000`, and the
  header at 0x370000 goes `0x574D0002 -> 0x336F574D`, the same compressed-load-then-decompress
  sequence PCSX2 shows at the same point.
- Current wall: see "Current wall" at the end.

## Why self-execution, not a puppet

Until July 2026 the build was a puppet. GS/VSync init was stubbed, so the game never passed
`GsSetCrt`; to get pictures, memory snapshots and render objects captured from PCSX2 were
injected every frame, and the visible title screen was a captured framebuffer. Extending that can
never reach gameplay: every menu and level transition would have to be hand-authored from
captures. The pivot (branch `pivot-selfexec`, 7630ba3, 08ad82b) un-skipped everything so the game
runs its real init, and every wall since has been fixed in the runtime's emulation of the thing
the game was waiting on.

## Family 1: the game polls hardware status the runtime didn't emulate

Found by hot-pc sampling: the boot is a chain of status polls.

| Spin | Polls | Fix |
|---|---|---|
| `sub_00114AB0` (0x114af0) | INTC_STAT 0x1000F000 bit 2 (VBLANK_START) | runtime raises the INTC_STAT bit from the vblank worker; write-1-to-clear |
| `sub_001A91D0` → `sub_001133F0` | GS_CSR bit 13 (FIELD) | toggled every field (upstream's EE scheduler now does this) |
| `sub_00116920` | SIF reg 4 via syscall 0x7A | wired syscalls 0x79/0x7A to sceSifSetReg/GetReg |

## Family 2: faking a result moves the wall, it never removes it

Measured three times. Faking the SIF bind/call results sent the game into a countdown retry loop;
faking a reply handle stalled the next consumer; forcing the network state word `[0x3445E8]=3`
with `PS2X_POKE` (b92ed6b) let the boot loop exit and then killed the main thread, because the
code past the gate depends on structures the state machine builds. The fix is always to make the
real service exist: the game's raw libsif calls are bound to the runtime's real SIF RPC HLE
(`0x117080` sceSifInitRpc, `0x117818`, ea89d99), and the CDVD services are real IOP modules
(`ps2xIOP/src/modules/cdvdfsv.cpp`: `0x80000597` fn 0 searchFile, `0x80000595` fn 1 read).

## Family 3: indirect entry points have no function slot

The recompiler discovers functions through `JAL`. Anything reached indirectly (an interrupt
handler passed to `AddIntcHandler`, a vtable entry, a dispatch-table slot, a callback) gets no
resume label and no function-table slot. `hasFunction()` is then false and the call is dropped
**silently**: `dispatchIrq` skips the handler, `dispatchGuestBranch` logs
`[guest-branch:missing-target]` once, and nothing crashes. The game just stops progressing.

The cure is `thread_entries` in `recomp/config/outbreak.toml` (about 700 addresses as of 2026-10-17). The scan that found
them: every 4-aligned word in the ELF whose value lands on an `addiu sp,sp,-N` prologue and is
never a `JAL` target (0ca26a3, plus a second pass that found 71 more). An earlier, narrower scan
missed the whole 0x235FD8 handler table.

A related hole in the scheduler: a missing function at a **nested** resume pc is silently
turned into an early return; `reportMissingFunction` only fires once the invocation stack is
empty. `[sched:missing-resume]` (submodule) now reports it.

## Family 4: kernel calls that return a value, not a status

Guest code stores these results and compares or restores them verbatim, so a `0` breaks a
handshake with no error anywhere:

- `StartThread` / `ResumeThread` / `WakeupThread` etc. return the **thread id** (0200b34).
- `ChangeThreadPriority` returns the **previous priority** (submodule 51f516a).
- `CreateThread` with priority 0 inherits the creator's priority (cee4e7c).
- An HLE that transfers to the dispatcher must set `ctx->pc` to its return point first, or the
  thread resumes at the HLE and runs it again forever.
- `SifCallRpc` with NOWAIT must not re-issue the call (1d61762).

## Family 5: overrides with wrong names

`reo_override.cpp` once bound game addresses to guessed SDK names. Three were wrong and each hid
a real subsystem: `0x100B70` "scePadPortOpen" is the CDVD RPC binder (e1d6aa6; with it stubbed,
reads went out with sid=0), `0x116848` "periph" stub is `sprintf` in the file-open path (98a282c),
`0x117080` is sceSifInitRpc, not BindRpc. **Treat every remaining override name as a guess until
checked against the disassembly.** Still stubbed and unchecked: 0x114AA0, 0x116BA0, 0x117220,
0x118A38, 0x1B6E90, 0x1B6F10, 0x1BB110, 0x1BB230, 0x1BCF60.

## The patches trap

`outbreak.toml` once carried an analyzer-generated `[patches].instructions` list that replaced
42 real `sw` instructions with `0x0`, each labelled "Potential self-modifying code". The
recompiler applies patches silently, so those stores were simply missing from the generated
code. Globals read 0 forever and it looks exactly like "the writer is unreachable dead code";
that wrong conclusion was reached twice. Removed in cddb3ab.

**Whenever a global stubbornly reads 0, diff the emitted instruction stream against the ELF**:
parse the `// 0xADDR: 0xWORD` comments in `recomp/config/output/*.cpp` and compare each word to
the ELF. Expect 0 mismatches across ~247k instructions.

## The display-list sentinel tag

REO puts a sentinel DMAtag (REFE, QWC=0, ADDR → the real chain) at the head of each display-list
buffer (0x700000 / 0x780000). Both the runtime's chain walker and the bridge's VIF1 walker
stopped on it. That left CHCR[31:16] holding the sentinel instead of the chain's real end tag,
and the game's DMAC cause-1 handler `sub_0018D160` tests bit 31 of CHCR (the tag IRQ bit) at
0x18D1D0 before kicking the next transfer. Both walkers now follow it (978ce7d, 441fa96).

A bridge that services a DMA channel itself must call `PS2Memory::signalDmacCompletion`, or the
guest's DMAC interrupt is swallowed.

## Interrupt handlers ran on the wrong stack

`AddIntcHandler(cause, handler, next)` has no stack argument: the EE kernel runs handlers on its
own stack. The runtime captured the **registering** thread's `$sp`, so every handler ran on top of
that thread's live frames. In REO the main thread was parked in SleepThread with its return
address saved at `[0x1FEFF80]`; the cause-11 handler (0x11e500) stored through `sp+0x80` onto
that slot, main returned to 0, and a thread that returns to 0 is made dormant with no
diagnostic. It looked like a clean exit. `PS2X_WATCH_WRITE=0x1FEFF80` named the writer in one run
(`pc=0x11e510 ra=0x0 sp=0x1feff00`). Fix: handlers get a reserved stack (adcefb3 / submodule
16b46e0). Result over 120 s: main thread dead → alive, DMA 33 → 1598, GIF 5 → 161.

Any measurement taken before this fix should be treated as suspect.

## The overlay request system

Overlays load on request, not by address:

```
[0x2347F0]  request slot, group A (0xFF = none)     [0x2347F8]  group B
[0x3243F8]  active overlay id, group A               [0x3243F9]  group B
0x2311A0    load-address table, 10 entries by MWo3 id
0x1B80D0(a0,a1,a2)  request API: writes the id to the slot unless already active/requested
0x1B7CB0            per-frame driver (live, called from 0x1baad4): if slot != -1, call the
                    manager and write -1 back
0x1A95A0(id)        overlay manager, 10-case jump table at 0x242650
```

Request wrappers: `0x1B8140` / `0x1B8170` → submain (title); `0x1B81A0` → demo; `0x1B8200` /
`0x1B8240` → game. In every run so far the slot stays 0xFF: **nothing requests an overlay.**

## The oracle: what the real game does (2026-10-17)

`tools/ps2_debug/oracle_watch.py` polls guest memory in PCSX2 over PINE (PCSX2 run as a black
box) and prints each change with a timestamp. Real boot, seconds from PINE connect:

```
 1.89  overlay request slots [0x2347F0]/[0x2347F8] = 0xFF
 5.00  0x370000 gets MWo3 (submain, the title overlay) -- NOT via the request slot
 9.22  0x6E0000 gets MWo3
30.79  request A = 1 -> overlay loads at 0x570000, active A [0x3243F8] = 1
37.61  gate2 [0x3243D5]=1, title coroutine head [0x340A40]=0x22DEC0
71/90  gate2 and head toggle off and on again (attract cycle)
       [0x3445E8] ("Gate 1") stays 0 the whole time
```

**So Gate 1 below was a false lead**: the real game never sets `[0x3445E8]` to 3. The section is
kept because the dead-code findings in it are still true. Check any "the game waits on X" theory
against the oracle before building on it. `--save-at` triggers PCSX2 save states; a `.p2s` is a
zip (zstd) whose `eeMemory.bin` is the full 32 MB EE RAM, and `PS2X_DUMP_RAM=<s>:<file>` writes
ours at the same point, so the two can be diffed word for word.

## The override purge (2026-10-17)

`reo_override.cpp`'s bindings replace the game's real functions (both the function table and
the stub registry), and most were named from guesses in the puppet era. `REO_SKIP_BINDS` /
`REO_ONLY_BINDS` (comma-separated hex) drop or keep bindings without editing code, which made it
possible to test each one. Seven were wrong and are gone:

| Address | Was bound as | What it really is |
|---|---|---|
| 0x13AE10 | gfx_obj_init | wrote a fake display-list layout; its `0xF0000002` seed became a VIF1 kick with `tadr=2` and no TIE bit, so the DMAC interrupt never came and the frame loop stalled at frame 160 |
| 0x18DCA0 / 0x18DC90 | pool_resolve | the display list's real buffer lookups |
| 0x1B7CB0 | net_sif_cmd | the per-frame overlay-request driver |
| 0x1B80D0 | net_close | the overlay-request API |
| 0x12A1E8 | hw_init | the engine's system init: job system, CRI server callbacks |
| 0x128860 | hw_init | no effect either way |

Two more were rebound: 0x118A70 was "SifLoadModule" but is libsif fileio `open` (fn 0); it and
close/read/lseek (0x118CF8 / 0x1190B0 / 0x118E78) now go to the runtime's file HLE. 0x1AB560 was
"DNAS auth (bypassed)" but is the IOP bring-up, which also runs `sceSifInitIopHeap`; it runs for
real now. 0x11D7F8 ("SifInit") stays stubbed, correctly renamed: it scans kernel RAM for a code
signature to patch, and our kernel space is empty.

## Two gates, and the dead path in front of them

```
GATE 1  base boot loop 0x1A9400 waits [0x3445E8]==3   (network state machine)
GATE 2  title coroutine tick waits [0x340A40]!=0      (written only by func_1CC2D0, called from submain)
```

`[0x3445E8]` is written only by handlers that `sub_001C97F0` dispatches through the fn-ptr table
at 0x235FD8 (jalr at 0x1C991C); the machine steps 0→1→2→3 with no shortcut. That cluster is
entered only from netdnas.bin (0x750EC0 / 0x750F20 → `JAL 0x1C9530`).

netdnas.bin is now recompiled and linked (415c119) and copied into guest RAM, but it is never
entered, because the only base → netdnas call sits behind dead code:

```
0x1BAA00 per-iteration work                      LIVE
  0x1baabc  jal 0x1AF5C0                         returns 0, always
  0x1baac4  beq v0,zero,0x1baad4                 always taken
  0x1baacc  jal 0x1AF4D0                         NEVER REACHED
    0x1AF280 / 0x1AF320 / 0x1AF3BC overlay dispatchers -> 0x1B3DC0 -> jal 0x6E1430 (netdnas)
```

`0x1AF5C0` is a two-instruction `return 0;` in the retail ELF (`jr ra` / `daddu v0,zero,zero`).
Its neighbours 0x1AF5A0 / 0x1AF5B0 set `[0x3243CD]` to 0 / 1, so it looks like a getter that was
compiled out. So `0x1AF4D0` and everything under it is dead in this build, and recompiling
netdnas does not open Gate 1 through this route. The title overlay is requested from exactly two
places: 0x1AF4D0 (dead, above) and 0x1BC8E4 (reached only indirectly; not yet seen running).

Also: the guest zeroes 0x6E0000 at tick ~199320, so the eager overlay copy in `reo_bootstrap` is
wiped. A correct load hooks the game's own request.

Gate 2's byte `[0x3243D5]` (which routes the per-frame tick into submain) is written only by
submain itself (byte-coverage scan of the ELF and all nine overlays), so the title overlay cannot
bootstrap itself; something has to request it first.

## The heap ceiling and the stack collision (2026-10-18)

Two memory-layout bugs in the runtime, both found by diffing our RAM against PCSX2's:

- **The heap stopped at 0x1F00000.** The runtime kept its own RPC/TLS pools at
  0x1F00000-0x1F31000 and clamped every heap there. REO's 1.1 MB font buffer (`[0x324460]`,
  `malloc(0x11003F)` at 0x1BB0B4) lands at 0x1EAA400 on hardware and came back NULL here, which
  surfaced as `E9040818:'buf' is NULL.(ADXF_ReadNw32)` and a loader spinning forever at 0x1A9FD8.
  The game's own error printer (0x1280D0) is silent; `PS2X_TRACE_CALL=0x1280d0` shows each message
  address, and the strings are in the ELF.
- **Interrupt stacks were carved through the main stack.** Handler/callback stacks came from
  0x2000000 downward in 16 KB steps; four fit above main's stack (0x1FE0000-0x1FF0000), the fifth
  landed on it. The EE timer handler (INTC cause 11, 0x11E500) then stored over main's saved `$ra`
  at `[0x1FEFF80]` and main "returned" to 0 at frame 338. `PS2X_WATCH_WRITE=0x1FEFF80` named the
  store (`pc=0x11e528 ra=0x0 sp=0x1feff60`); `PS2X_TRACE_ASYNC_STACK=1` showed the fifth stack.

Fixed in the submodule (b9a5027): pools moved to 0xC0000, heap ceiling raised to the main stack's
bottom, async stacks moved to 0x80000-0xBFFFF. Also removed from `reo_override.cpp`: 0x128B18
("DMA status poll", really the file server; faking it hid NETBIO01/02) and the puppet
demo-thread and frame-check scaffold.

## Current wall

Main thread alive for the whole run, frame counter at ~30 fps (3,577 frames at 120 s; PCSX2 shows
3,280), the font, NETBIO01 data and `MCICON.BIN` load. Then no more disc reads and no overlay
request. On hardware, PCSX2 loads an overlay into 0x6E0000 at ~9 s and shows the ACCESS AVE-TCP
splash at ~20 s, then the violence warning at ~34 s. Nothing is drawn yet: the runtime's GS sees
no register writes (`gsw=0`), and REO's own hardware bridge only clears to magenta.
`REO_NO_BRIDGE=1` (runtime GS/VU1 only) changes nothing about game progress. Next: find what the
game waits on after `MCICON.BIN`, and why GIF packets don't reach the GS.
