# Roadmap

## Next: boot → title → attract demo → new game

In order; each needs the one before it. Background for every item is in
[docs/boot-gates.md](docs/boot-gates.md).

1. **Clear the display-list stall.** The frame loop stops after 160 frames at 0x18D678 because
   the DMAC cause-1 handler stops releasing the buffer. Find why the interrupt stops arriving (or
   stops reaching 0x18d224), starting with channels the hardware bridge services without
   `signalDmacCompletion`.
2. **Get an overlay requested.** The request slot `[0x2347F0]` is never written. The base ELF's
   only live-looking requester of the title overlay is 0x1BC8E4, reached only indirectly; find
   what should reach it. The other route sits behind the retail constant-zero `0x1AF5C0`.
3. **Gate 1:** the boot loop waits for the network state `[0x3445E8]==3`, driven only from
   netdnas.bin. Load overlays when the game asks (hook the manager at 0x1A95A0) instead of
   copying netdnas in eagerly, which the guest wipes.
4. **Gate 2:** title coroutine tick waits on `[0x340A40]`, set from submain.bin.
5. Title screen drawn by the game, then "Press Start" with pad input.
6. Attract demo (demo.bin, 0x570000).
7. New game: menu flow, then game.bin and a first room.

## Also next

- **netlab recipe** (`projects/reo.env`) so builds and runs go to the farm. Needs the game CMake
  tree to build the toolkit itself instead of linking prebuilt `.lib` paths.
- **`--headless --record out.mp4`** (house style for recomps): render offscreen and pipe frames to
  ffmpeg. Today only `REO_HEADLESS=1` exists, and it draws nothing.
- **Conformance harness**: a fixed set of boot milestones (main thread alive, frame count, overlay
  requested, title reached ...) checked by a headless run, pass/fail count in the README, fails
  on regression. Needs the game data, so it reports SKIP without it.
- Sound: an SDRDRV RPC server (`sid=0x1`) in ps2xIOP.
- Audit the remaining `reo_ret0` "periph" stubs against the disassembly.
- Toolkit changes go to PS2Recomp as PRs, one per change.

## Later

- File #2 (SLUS-20984): builds, no boot work yet.
- Resolution scaling, widescreen, 60 fps.

## Deferred / out of scope

- **Online play.** The network code (`network/`, DNAS) is not worked on until offline play runs.
- **The `src/` HAL** (`reo` executable: Vulkan/WASAPI/XInput plan). It never ran game code and is
  not on the path to a running game. To be deleted or merged deliberately, not extended.
- The PCSX2-capture "puppet" code in `reo_override.cpp`: to be removed once the game draws its
  own title screen.
