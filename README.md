# REO - Resident Evil Outbreak: Recompiled

**A static recompilation of Resident Evil Outbreak for modern Windows.**

No emulator. No compromises. Just Raccoon City, running natively on your PC — alone or online.

> **Fan project.** Not affiliated with Capcom, Sony, or obsrv.org. You need a legally owned copy of the game.

---

## What Is This?

REO takes the original PS2 binary of Resident Evil Outbreak (SLUS-20765) and translates it — instruction by instruction — into native x86-64 code that runs directly on Windows 11. This is **static recompilation**, the same technique behind projects like [Zelda 64: Recompiled](https://github.com/N64Recomp/N64Recomp).

The PS2 was a wild machine. The Emotion Engine, two Vector Units, a fixed-function Graphics Synthesizer, a sound chip with its own CPU, and a network stack built for 2003-era Japanese broadband. Every piece of that hardware gets replaced with modern equivalents:

| PS2 Hardware | REO Replacement |
|---|---|
| Emotion Engine (R5900 MIPS) | Static recompilation → native x86-64 |
| Vector Units (VU0/VU1) | SSE/AVX SIMD + custom microcode translator |
| Graphics Synthesizer | Vulkan renderer (via paraLLEl-GS or custom) |
| SPU2 Sound | Software mixer → Windows audio (WASAPI) |
| IOP (I/O Processor) | High-level emulation of IRX modules |
| PS2 Network Adapter | Native Winsock, compatible with obsrv.org |
| DNAS Authentication | Bypassed (servers are long dead) |
| DualShock 2 | XInput / DirectInput / keyboard+mouse |

## Online Play

The original RE Outbreak was one of the first PS2 games with online multiplayer — and it was *great*. When Capcom shut down the servers, the community at [obsrv.org](https://obsrv.org) brought them back.

REO connects to those same community servers. Play with friends, matchmake with strangers, survive together — just like 2004, but at 1080p+ and 60fps.

- **Connect to obsrv.org** — join the existing community
- **Self-host** — run your own server for LAN parties or private games
- **Offline** — full single-player with AI partners, no internet required

## How It Works

### The Pipeline

```
┌─────────────┐     ┌──────────────┐     ┌───────────────┐     ┌──────────────┐
│  Outbreak    │     │ ps2xAnalyzer │     │  ps2xRecomp   │     │  REO Runtime │
│  ISO/ELF    │────▶│  (analysis)  │────▶│  (MIPS→C++)   │────▶│  (HAL+game)  │
│  SLUS_207.65│     │  TOML config │     │  native code  │     │  reo.exe     │
└─────────────┘     └──────────────┘     └───────────────┘     └──────────────┘
                                                                       │
                                              ┌────────────────────────┤
                                              ▼                        ▼
                                         ┌─────────┐           ┌────────────┐
                                         │ Vulkan  │           │  Network   │
                                         │Renderer │           │  Stack     │
                                         │ (GS)    │           │ (obsrv.org)│
                                         └─────────┘           └────────────┘
```

1. **Extract** the ELF binary (`SLUS_207.65`) from your legal game disc/ISO
2. **Analyze** it with ps2xAnalyzer to map functions, relocations, and symbols
3. **Recompile** MIPS R5900 instructions to C++ with ps2xRecomp
4. **Link** against the REO runtime — our replacement for all PS2 hardware
5. **Play** natively on Windows

### The Runtime (Hardware Abstraction Layer)

The recompiled game code thinks it's talking to PS2 hardware. The REO runtime intercepts every hardware access and translates it:

- **Memory** — 32MB unified address space with scratchpad, MMIO regions, and TLB support
- **Graphics** — GS register writes are captured and rendered via Vulkan compute shaders
- **Audio** — SPU2 ADPCM voices mixed in software, output via WASAPI
- **Input** — DualShock 2 reads mapped to modern controllers and keyboard
- **Network** — IOP network module calls translated to native TCP/IP sockets
- **Filesystem** — CD/DVD reads redirected to extracted game data on disk
- **Video** — Sofdec/SFD cutscenes decoded via FFmpeg
- **Timing** — EE/IOP cycle counting replaced with high-resolution Windows timers

## Project Structure

```
reo/
├── CMakeLists.txt           # Top-level build
├── README.md                # You are here
│
├── tools/                   # Build-time tools
│   ├── iso_extract/         # Extract game files from ISO
│   ├── elf_analyze/         # ELF analysis and symbol extraction
│   └── vu_disasm/           # VU microcode disassembler
│
├── recomp/                  # Static recompilation layer
│   ├── config/              # PS2Recomp TOML configs for RE Outbreak
│   ├── overrides/           # Game-specific function overrides (C++)
│   └── patches/             # Binary patches and fixups
│
├── runtime/                 # Hardware Abstraction Layer
│   ├── core/                # CPU context, memory map, syscalls
│   ├── gs/                  # Graphics Synthesizer → Vulkan
│   ├── spu2/                # Sound processing → WASAPI
│   ├── vu/                  # Vector Unit microcode execution
│   ├── iop/                 # I/O Processor HLE
│   ├── input/               # Controller/keyboard mapping
│   ├── cdvd/                # Disc I/O → file system
│   └── timer/               # Timing and vsync
│
├── network/                 # Online play
│   ├── snap_client/         # SN@P protocol implementation
│   ├── dnas/                # DNAS auth bypass
│   ├── lobby/               # Lobby browser and matchmaking
│   └── server/              # Optional local server
│
├── media/                   # Media decoders
│   ├── adx/                 # CRI ADX audio decoder
│   ├── sofdec/              # CRI Sofdec video decoder
│   └── tim2/                # TIM2 texture converter
│
├── game/                    # Game-specific code
│   ├── formats/             # NBD, AMO, RDT, etc. file parsers
│   ├── scripts/             # Game script interpreter
│   └── ui/                  # Menu and HUD reimplementation
│
└── third_party/             # External dependencies
    ├── PS2Recomp/           # Static recompilation toolchain
    ├── parallel-gs/         # Vulkan GS renderer
    ├── SDL3/                # Window/input management
    └── volk/                # Vulkan loader
```

## Building

> **Prerequisites:** Visual Studio 2022, CMake 3.20+, Vulkan SDK, a legally owned RE Outbreak NTSC-U ISO (SLUS-20765)

```bash
# Clone
git clone https://github.com/sp00nznet/reo.git
cd reo

# Clone PS2Recomp (recompilation toolchain)
git clone https://github.com/ran-j/PS2Recomp.git third_party/PS2Recomp

# Build PS2Recomp tools
cd third_party/PS2Recomp
cmake -S . -B out/build -G "Visual Studio 17 2022" -A x64
cmake --build out/build --config Release
cd ../..

# Build REO tools
cmake -B build -G "Visual Studio 17 2022" -A x64
cmake --build build --config Release

# Extract game data from your ISO
./build/tools/iso_extract/Release/reo-extract.exe "YourOutbreak.iso" game_data

# Analyze and recompile the ELF (MIPS → C++)
./third_party/PS2Recomp/out/build/ps2xAnalyzer/Release/ps2_analyzer.exe \
    game_data/SLUS_207.65 recomp/config/outbreak.toml
./third_party/PS2Recomp/out/build/ps2xRecomp/Release/ps2_recomp.exe \
    recomp/config/outbreak.toml

# Run (not yet functional — runtime bridge in progress)
./build/Release/reo.exe
```

### Current Status

The recompilation pipeline is **working**:
- ISO extraction: all game files extracted (ELF, IOP modules, data archives)
- ELF analysis: 3,461 functions identified, 252 auto-skipped (HW I/O)
- MIPS → C++: 3,209 functions translated to native x86-64 (66 MB of C++)
- Next: bridge the recompiled code to our runtime HAL

## Roadmap

### Phase 1 — Foundation (Current)
- [x] Project structure and build system
- [x] ISO extraction and ELF analysis tooling (working! extracts all files)
- [x] PS2Recomp integration — **3,461 functions analyzed, 3,209 recompiled to C++**
- [x] Basic memory map and CPU context runtime (32MB RAM, MMIO, scratchpad)
- [ ] Bridge recompiled code to REO runtime (connect PS2Recomp output to our HAL)
- [ ] Boot to black screen (proof of life)

### Phase 2 — See Something
- [ ] GS renderer (Vulkan) — render the first frame
- [ ] VU microcode translation for geometry
- [ ] Texture loading (TIM2/SLD)
- [ ] SPU2 audio mixer — hear the first sound
- [ ] IOP HLE — filesystem, memory card, timing

### Phase 3 — Play Something
- [ ] Full game boot to main menu
- [ ] Input system (controller + keyboard)
- [ ] Sofdec FMV playback
- [ ] Save/load system (memory card → local files)
- [ ] Single-player gameplay loop

### Phase 4 — Connect
- [ ] SN@P network protocol client
- [ ] DNAS bypass for obsrv.org connectivity
- [ ] Lobby browser and matchmaking
- [ ] Online multiplayer gameplay
- [ ] Optional local server bundling

### Phase 5 — Polish
- [ ] 60fps support (original was 30fps locked)
- [ ] Resolution scaling and widescreen
- [ ] Modern graphics enhancements
- [ ] Keyboard+mouse controls
- [ ] Steam Deck / Linux support (stretch goal)
- [ ] File #2 support (stretch goal)

## Technical References

- [PS2Recomp](https://github.com/ran-j/PS2Recomp) — Static recompilation toolchain for PS2
- [paraLLEl-GS](https://github.com/Arntzen-Software/parallel-gs) — Vulkan compute GS renderer
- [obsrv.org](https://obsrv.org/) — Community Outbreak servers
- [obsrv-pack](https://github.com/adrianopteodoro/obsrv-pack) — Open source server bundle
- [Outbreak Research](https://outbreak-research.github.io/Documentation/) — File format documentation
- [REOF2](https://github.com/caprado/REOF2) — RE Outbreak File #2 decompilation (reference)
- [ghidra-emotionengine-reloaded](https://github.com/chaoticgd/ghidra-emotionengine-reloaded) — PS2 Ghidra plugin
- [PS2Tek](https://psi-rockin.github.io/ps2tek/) — PS2 hardware documentation
- [Copetti PS2 Architecture](https://www.copetti.org/writings/consoles/playstation-2/) — Architecture deep-dive

## Legal

This project contains **no copyrighted game code or assets**. You must provide your own legally obtained copy of Resident Evil Outbreak (SLUS-20765).

Resident Evil is a trademark of Capcom. PlayStation is a trademark of Sony. This is an independent fan project created for preservation and educational purposes.

## Contributing

This is a massive undertaking and help is welcome. If you know PS2 internals, MIPS assembly, Vulkan, or just really love Outbreak — open an issue or PR.

*Don't let the memory of Raccoon City die.*
