"""Write the base-ELF recompile config with overlay call targets added as entry points.

    py -3 tools/gen_base_config.py [<out.toml>]     (default recomp/build/outbreak.generated.toml)

Overlays (game_data/BIN/*.DAT) call into the base ELF at addresses the base code itself never
JALs, so the base recompile folds those functions into their neighbours and gives them no
entry: the call then lands on nothing and the calling thread dies. This copies
recomp/config/outbreak.toml and adds every base-text JAL/J target found in the overlays to
thread_entries. The list is derived from the user's game data at setup time, so it is
generated here rather than committed.
"""
import os
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, 'tools', 'ps2_debug'))
OVERLAYS = (0, 1, 2, 3, 4, 5, 6, 8, 9)  # BIN/7.DAT does not exist on the disc


def call_targets(code):
    """JAL and J targets in a block of MIPS code."""
    out = set()
    for w in struct.unpack_from('<%dI' % (len(code) // 4), code):
        if w >> 26 in (2, 3):
            out.add((w & 0x3FFFFFF) << 2)
    return out


def base_text_range(elf):
    phoff, = struct.unpack_from('<I', elf, 0x1C)
    _, offset, vaddr, _, filesz = struct.unpack_from('<5I', elf, phoff)
    return vaddr, vaddr + filesz, offset


def overlay_targets(game_data):
    import mwo3
    targets = set()
    for i in OVERLAYS:
        img, h = mwo3.load(os.path.join(game_data, 'BIN', '%d.DAT' % i))
        targets |= call_targets(img[0x40:0x40 + h['text']])
    return targets


def with_entries(toml_text, entries):
    marker = 'thread_entries = [\n'
    assert marker in toml_text, 'outbreak.toml has no thread_entries array'
    block = ''.join('  "0x%08X",  # called from an overlay\n' % a for a in sorted(entries))
    return toml_text.replace(marker, marker + block, 1)


def main(out):
    game_data = os.path.join(ROOT, 'game_data')
    elf = open(os.path.join(game_data, 'SLUS_207.65'), 'rb').read()
    lo, hi, _ = base_text_range(elf)
    entries = {t for t in overlay_targets(game_data) if lo <= t < hi}
    src = open(os.path.join(ROOT, 'recomp', 'config', 'outbreak.toml'), encoding='utf-8').read()
    os.makedirs(os.path.dirname(out), exist_ok=True)
    open(out, 'w', encoding='utf-8').write(with_entries(src, entries))
    print('%s: %d overlay call targets added' % (out, len(entries)))


def _selfcheck():
    code = struct.pack('<3I', 0x0C040000, 0x08040010, 0x27BDFFF0)  # jal 0x100000; j 0x100040
    assert call_targets(code) == {0x100000, 0x100040}
    out = with_entries('a\nthread_entries = [\n  "0x1",\n]\n', {0x200, 0x100})
    assert out.index('0x00000100') < out.index('0x00000200') < out.index('"0x1"'), out


if __name__ == '__main__':
    _selfcheck()
    main(sys.argv[1] if len(sys.argv) > 1 else
         os.path.join(ROOT, 'recomp', 'build', 'outbreak.generated.toml'))
