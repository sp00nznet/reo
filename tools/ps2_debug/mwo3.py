"""MWo3 overlay container: header + LZSS-over-16-bit-words payload.
flag word (LE), bits MSB-first: 0 = literal word, 1 = match token.
match token: dist_words = tok & 0x7FF, len_words = tok >> 11 (0 -> length in next word).
"""
import struct, sys, os

def unpack(C):
    out = bytearray(); ci = 0
    W = lambda o: struct.unpack_from('<H', C, o)[0]
    while ci + 2 <= len(C):
        flag = W(ci); ci += 2
        for b in range(15, -1, -1):
            if ci + 2 > len(C): return bytes(out)
            if not (flag >> b) & 1:
                out += C[ci:ci+2]; ci += 2
                continue
            tok = W(ci); ci += 2
            D = (tok & 0x7FF) * 2
            L = (tok >> 11) * 2
            if L == 0:
                if ci + 2 > len(C): return bytes(out)
                L = W(ci) * 2; ci += 2
            if D == 0 or D > len(out): return bytes(out)
            p = len(out)
            for k in range(L): out.append(out[p - D + k])
    return bytes(out)

def load(path):
    d = open(path, 'rb').read()
    if d[:4] != b'MWo3':
        d = unpack(d)
    name = d[0x20:0x40].split(b'\0')[0].decode('ascii', 'replace')
    ident, addr, text, data, bss, end1, end2 = struct.unpack_from('<7I', d, 4)
    return d, dict(name=name, id=ident, addr=addr, text=text, data=data, bss=bss, end=end1)

if __name__ == '__main__':
    args = sys.argv[1:]
    outdir = None
    as_elf = False
    if args and args[0] == '--elf':
        as_elf = True; args = args[1:]
    if args and args[0] == '--out':
        outdir = args[1]; args = args[2:]
        os.makedirs(outdir, exist_ok=True)
    for p in args:
        img, h = load(p)
        ok = h['addr'] + 0x40 + h['text'] + h['data'] == h['end'] and len(img) >= 0x40 + h['text'] + h['data']
        print('%-22s %-14s id=%2d addr=0x%06x text=0x%06x data=0x%06x bss=0x%06x end=0x%06x img=0x%x %s'
              % (os.path.basename(p), h['name'], h['id'], h['addr'], h['text'], h['data'], h['bss'], h['end'], len(img), 'OK' if ok else 'BAD'))
        if outdir and as_elf:
            # reuse the ELF wrapper that produced overlay_title.elf, which
            # ps2_recomp already ingests successfully
            from dump_overlays import create_overlay_elf
            q = os.path.join(outdir, h['name'].replace('.bin', '.elf'))
            create_overlay_elf(img, h['addr'], q)
            print('    -> %s' % q)
        elif outdir:
            q = os.path.join(outdir, h['name'])
            open(q, 'wb').write(img)
            print('    -> %s' % q)

# List:    python tools/ps2_debug/mwo3.py game_data/BIN/*.DAT
# Extract: python tools/ps2_debug/mwo3.py --out DIR game_data/BIN/4.DAT
# As ELF:  python tools/ps2_debug/mwo3.py --elf --out DIR game_data/BIN/4.DAT
