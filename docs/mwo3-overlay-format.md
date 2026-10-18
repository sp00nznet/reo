# MWo3 overlay containers

REO's overlays (title/menu, demo, game, network) are not in the ELF. The ELF only reserves their
address ranges; the code ships on the disc as nine loose files, `BIN/*.DAT`, each an `MWo3`
container. `tools/ps2_debug/mwo3.py` decodes all nine.

```
python tools/ps2_debug/mwo3.py game_data/BIN/*.DAT                       # list + validate
python tools/ps2_debug/mwo3.py --out scratch/ovl game_data/BIN/4.DAT     # raw image
python tools/ps2_debug/mwo3.py --elf --out scratch/ovl game_data/BIN/0.DAT  # ELF for ps2_recomp
```

`--elf` wraps **only the text section**. Handing the recompiler the data section too makes it
decode data as code and emit a multi-megabyte runaway function.

## Header (64 bytes, loaded verbatim at the load address)

| Offset | Field |
|---|---|
| 0x00 | `"MWo3"` |
| 0x04 | id |
| 0x08 | load address |
| 0x0C | text size |
| 0x10 | data size |
| 0x14 | bss size |
| 0x18 | end = load + 0x40 + text + data |
| 0x1C | end (repeated) |
| 0x20 | name, NUL-padded to 0x40 |

`end == addr + 0x40 + text + data` holds for all nine; `mwo3.py` prints `OK`/`BAD` on it:

```
0.DAT                  submain.bin    id= 1 addr=0x370000 text=0x00fd40 data=0x00d000 bss=0x1dfd00 end=0x38cd80 img=0x1cd80 OK
1.DAT                  demo.bin       id= 2 addr=0x570000 text=0x018440 data=0x00bf00 bss=0x040580 end=0x594380 img=0x24380 OK
2.DAT                  game.bin       id= 3 addr=0x570000 text=0x198540 data=0x03ab80 bss=0x017480 end=0x743100 img=0x1d3100 OK
3.DAT                  netwk.bin      id= 4 addr=0x570000 text=0x09a140 data=0x028080 bss=0x0ad200 end=0x632200 img=0xc2200 OK
4.DAT                  netdnas.bin    id= 5 addr=0x6e0000 text=0x070f40 data=0x030080 bss=0x081400 end=0x781000 img=0xa1000 OK
5.DAT                  insdnas.bin    id= 7 addr=0x6e0000 text=0x029cc0 data=0x007e00 bss=0x06fb00 end=0x711b00 img=0x31b00 OK
6.DAT                  nethttp.bin    id= 6 addr=0x6e0000 text=0x054ac0 data=0x00af80 bss=0x000d80 end=0x73fa80 img=0x5fa80 OK
8.DAT                  netaq.bin      id=10 addr=0x810000 text=0x004740 data=0x000c80 bss=0x094f80 end=0x815400 img=0x5400 OK
9.DAT                  single.bin     id= 9 addr=0x810000 text=0x0189c0 data=0x003000 bss=0x067e80 end=0x82ba00 img=0x1ba00 OK
```

## Compression

Files whose first four bytes are not `MWo3` are compressed (4, 5 and 6.DAT are stored raw).
LZSS over 16-bit words:

- flag word (LE u16), bits consumed **MSB first**, 16 tokens per flag word
- bit 0: literal, copy one 16-bit word
- bit 1: match token (LE u16): `dist_words = tok & 0x7FF`, `len_words = tok >> 11`
- `len_words == 0` escapes: the next word holds the length in words
- distance is counted back from the current output position, in words
- **`dist_words == 0` is not end of stream.** `dist==0, len==0` terminates; `dist==0, len=n`
  emits n zero words

The last rule was found by reading the game's own decoder, not by testing: none of the nine files
uses a zero run, so a decoder that treats `dist==0` as "end" still passes the byte-exact check
and would silently truncate any stream that did.

**The authoritative reference is the game:** `0x001AF5D0` in the base ELF is REO's decompressor
(`ori t0,zero,0x8000` MSB-first mask, `srl a3,v1,11` length, `andi v1,0x7ff` distance, zero-run
branch at 0x1AF628, `jr ra` at 0x1AF694). Read it before trusting this page.

Validation: 0.DAT decodes to 0x1CD80 bytes, identical (0 mismatches) to the title overlay
captured from guest memory in PCSX2.

## The nine overlays

Three groups share a load address, so each group's members are mutually exclusive at runtime.

| File | Name | Load address |
|---|---|---|
| 0.DAT | submain.bin (title/menu) | 0x370000 |
| 1.DAT | demo.bin | 0x570000 |
| 2.DAT | game.bin | 0x570000 |
| 3.DAT | netwk.bin | 0x570000 |
| 4.DAT | netdnas.bin | 0x6E0000 |
| 5.DAT | insdnas.bin | 0x6E0000 |
| 6.DAT | nethttp.bin | 0x6E0000 |
| 8.DAT | netaq.bin | 0x810000 |
| 9.DAT | single.bin | 0x810000 |

The game's load-address table at 0x2311A0 (10 entries, indexed by the header id) matches every
container's id field. How the game requests overlays is in [boot-gates.md](boot-gates.md).
