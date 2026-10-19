# Roadmap

## Next: boot → title → attract demo → new game

In order; each needs the one before it. Background for every item is in
[docs/boot-gates.md](docs/boot-gates.md).

Done 2026-10-17: the display-list stall (a wrong override), the overlay request (the game now
loads `BIN/0.DAT` itself), and "Gate 1", which the PCSX2 oracle showed is never set on hardware.

1. **Boot splash screens.** After `MCICON.BIN` the game reads nothing more; on hardware it loads
   an overlay into 0x6E0000 at ~9 s and shows the AVE-TCP splash at ~20 s. Find the wait.
   Separately, GIF packets never reach the runtime's GS (`gsw=0`).
2. **Audit the remaining overrides** the same way (`REO_SKIP_BINDS`): the GS-library stubs are
   neutral today but sit on the rendering path; the network stubs are load-bearing.
3. Title screen drawn by the game, then "Press Start" with pad input.
4. Attract demo (demo.bin, 0x570000).
5. New game: menu flow, then game.bin and a first room.

## Also next

- **netlab recipe** (`projects/reo.env`) so builds and runs go to the farm. Needs the game CMake
  tree to build the toolkit itself instead of linking prebuilt `.lib` paths.
- **`--headless --record out.mp4`** (house style for recomps): render offscreen and pipe frames to
  ffmpeg. Today only `REO_HEADLESS=1` exists, and it draws nothing.
- **Conformance harness**: a fixed set of boot milestones (main thread alive, frame count, overlay
  requested, title reached ...) checked by a headless run, pass/fail count in the README, fails
  on regression. Needs the game data, so it reports SKIP without it.
- Sound: an SDRDRV RPC server (`sid=0x1`) in ps2xIOP.
- Toolkit changes go to PS2Recomp as PRs, one per change.

## Later

- File #2 (SLUS-20984): builds, no boot work yet.
- Resolution scaling, widescreen, 60 fps.

## Deferred / out of scope

- **Online play.** The network code (`network/`, DNAS) is not worked on until offline play runs.
- **The `src/` HAL** (`reo` executable: Vulkan/WASAPI/XInput plan). It never ran game code and is
  not on the path to a running game. To be deleted or merged deliberately, not extended.
- The PCSX2-capture "puppet" code in `reo_override.cpp` is gone (snapshot injection, the forced
  demo thread, the fake display-list init).
