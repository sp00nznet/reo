# Architecture

What runs, what doesn't, and how the pieces connect. Facts as of 2026-10-17.

## The one executable that matters

`reo_recomp.exe` (`recomp/reo_bootstrap.cpp`) is the game. It:

1. loads the retail ELF (`game_data/SLUS_207.65`) into guest RAM,
2. copies the netdnas overlay image out of `game_data/BIN/4.DAT` into guest RAM at 0x6E0000
   (`loadMwo3Overlay`),
3. registers the recompiled functions — the main ELF's table plus
   `registerOverlayFunctions` (submain.bin, 0x370000) and `registerNetdnasFunctions`
   (netdnas.bin, 0x6E0000),
4. applies the overrides in `recomp/overrides/`,
5. calls `PS2Runtime::run()`.

Everything after step 5 is the game's own recompiled code running on PS2Recomp's runtime.

`reo_recomp_file2` is the same bootstrap built with `REO_GAME_FILE2` for File #2
(SLUS-20984, `game_data_file2/`). It builds when `recomp/config/output_file2/` exists; it has
had no boot work.

## The parts

| Part | Where | Owns |
|---|---|---|
| Recompiler | `third_party/PS2Recomp/ps2xRecomp` (submodule) | MIPS R5900 → C++. Reads a TOML config, writes one `.cpp` per function plus a function table |
| Runtime | `third_party/PS2Recomp/ps2xRuntime` | Guest RAM, EE scheduler (guest threads), syscalls, INTC/DMAC/GIF/VIF, GS, raylib window |
| IOP HLE | `third_party/PS2Recomp/ps2xIOP` | IOP modules as host code. REO's `cdvdfsv` services (searchFile, read) live in `ps2xIOP/src/modules/cdvdfsv.cpp` |
| Config | `recomp/config/outbreak.toml` | Entry points the recompiler can't find by itself (`thread_entries`), skips, stubs |
| Generated code | `recomp/config/output*/` | **Gitignored.** Made locally from your disc; never committed (REPO_RULES section 3) |
| Overrides | `recomp/overrides/reo_override.cpp` | Bindings from game addresses to runtime HLE (e.g. the game's raw libsif calls → `sceSifCallRpc`) |
| HW bridge | `recomp/overrides/reo_hw_bridge.cpp` | Walks REO's GIF and VIF1 DMA chains and reports DMA completion back to the guest |
| NETBIO | `recomp/overrides/reo_netbio.cpp` | Reader for the game's NETBIO archives |
| Trace logger | `recomp/overrides/reo_trace_logger.cpp` | Binary event trace (`REO_TRACE=1`) |

## Two build trees

The submodule and the game are configured and built separately:

```
third_party/PS2Recomp/out/build-upstream    ps2_runtime.lib, ps2_iop.lib, ps2_recomp.exe, ps2x_tests.exe
recomp/build                                reo_recomp.exe
```

`recomp/CMakeLists.txt` links the runtime as **prebuilt file paths**, not CMake targets. So
rebuilding `recomp/build` after a runtime edit silently relinks the *old* `ps2_runtime.lib`.
Always build the submodule target first, then the game. To check a runtime change landed, grep
the exe for a string you added.

`recomp/CMakeLists.txt` uses `file(GLOB)` over the generated directories, so re-run the configure
step after every regeneration, or new `entry_*.cpp` files are missed and the link fails on
unresolved `entry_*` symbols.

## Overlays

The ELF only reserves space for nine overlays; their code ships in `game_data/BIN/*.DAT` as MWo3
containers ([mwo3-overlay-format.md](mwo3-overlay-format.md)). Two are recompiled and linked:
submain.bin (the title/menu overlay) and netdnas.bin. Overlay functions live outside the dense
main function table, so they are registered through `PS2Runtime::registerFunction` into the
runtime's overflow map.

## Data flow, one frame

```
game main loop (recompiled)
  ├─ builds display lists in guest RAM (0x700000 / 0x780000)
  ├─ kicks DMAC ch1 (VIF1) / ch2 (GIF) ──> runtime DMAC ──> reo_hw_bridge chain walk ──> GS
  │                                                         └─ signalDmacCompletion ──> INTC ──> game's DMAC handler
  ├─ SIF RPC (sceSifCallRpc) ──> ps2xIOP modules (cdvdfsv: file lookup + reads from game_data/)
  └─ waits for vblank: runtime vblank worker raises INTC_STAT and dispatches the game's handlers
```

## Unused scaffolding

`src/`, `runtime/core`, `runtime/spu2`, `runtime/iop`, `runtime/timer`, `network/` and the top-level
`reo` executable are an early hand-written "HAL" (Vulkan/WASAPI/XInput plan). Its main loop never
runs recompiled code. It is not on the path to a running game; ignore it unless it is
deliberately merged or deleted. A few files from it are compiled into `reo_recomp`:
`runtime/gs/gs_renderer.cpp`, `runtime/vu/vu_interpreter.cpp`, `runtime/input/input.cpp`,
`runtime/cdvd/cdvd.cpp`, `game/formats/{nbd_parser,amo_parser,nbd_renderer}.cpp`,
`media/tim2/tim2_loader.cpp`.

## Puppet scaffold (still in the tree)

Before July 2026 the build was a puppet: memory snapshots and GS state captured from PCSX2 were
injected into guest RAM to make frames appear. That code is still in `reo_override.cpp`
(snapshot injection at frame 5, forced demo thread at frame 900). It is **on by default**;
`REO_NATURAL=1` turns it off. In current runs neither branch fires because its own frame
counter never reaches those values, and the capture files it loads are not in the repo. See [boot-gates.md](boot-gates.md) for why it was
abandoned.
