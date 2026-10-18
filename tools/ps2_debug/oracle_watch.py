"""
Black-box oracle: watch guest memory in a running PCSX2 over PINE.

Polls a set of guest addresses as fast as PINE allows and prints one line per
change, with the wall-clock offset, so the boot order of the real game (which
gate opens when, which overlay is requested first) can be read off directly and
compared with what reo_recomp does. Optionally triggers save states at given
offsets; a .p2s is a zip whose eeMemory.bin is the full 32 MB EE RAM, which is
how to search the live game's RAM for function pointers.

PCSX2 is only run and observed here, never read (REPO_RULES section 3).
Its output is game memory: keep it in scratch/, never commit it.

    py -3 oracle_watch.py --seconds 120 --save-at 60,100
"""
import argparse
import socket
import struct
import sys
import time

# addr, size, label. Sizes: 1, 2, 4. See docs/boot-gates.md for what each is.
WATCH = [
    (0x3445E8, 4, "net_state (boot loop wants 3)"),
    (0x2347F0, 1, "overlay request A"),
    (0x2347F8, 1, "overlay request B"),
    (0x3243F8, 1, "active overlay A"),
    (0x3243F9, 1, "active overlay B"),
    (0x3243D5, 1, "gate2 flag"),
    (0x3243CD, 1, "0x1AF5A0/B0 flag"),
    (0x340A40, 4, "title coroutine head"),
    (0x29F704, 4, "dlist count 0"),
    (0x29F708, 4, "dlist count 1"),
    (0x370000, 4, "ovl@370000 magic"),
    (0x570000, 4, "ovl@570000 magic"),
    (0x6E0000, 4, "ovl@6E0000 magic"),
    (0x810000, 4, "ovl@810000 magic"),
]
# Logged only every Nth change: these move every frame.
NOISY = {0x29F704: 0, 0x29F708: 0}

OP = {1: 0, 2: 1, 4: 2}  # PINE read8/16/32


class Pine:
    def __init__(self, port):
        self.s = socket.create_connection(("127.0.0.1", port), timeout=5)

    def batch(self, cmds):
        body = b"".join(struct.pack("<BI", OP[sz], a) for a, sz in cmds)
        self.s.sendall(struct.pack("<I", len(body) + 4) + body)
        size = struct.unpack("<I", self._recv(4))[0]
        data = self._recv(size - 4)
        if data[0] != 0:
            raise RuntimeError("PINE batch failed")
        out, off = [], 1
        for _, sz in cmds:
            out.append(int.from_bytes(data[off:off + sz], "little"))
            off += sz
        return out

    def save_state(self, slot):
        body = struct.pack("<BB", 9, slot)
        self.s.sendall(struct.pack("<I", len(body) + 4) + body)
        size = struct.unpack("<I", self._recv(4))[0]
        self._recv(size - 4)

    def _recv(self, n):
        b = b""
        while len(b) < n:
            c = self.s.recv(n - len(b))
            if not c:
                raise RuntimeError("PINE closed")
            b += c
        return b


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--port", type=int, default=28011)
    ap.add_argument("--seconds", type=float, default=120)
    ap.add_argument("--save-at", default="", help="comma list of offsets (s); slot 1, 2, ...")
    a = ap.parse_args()
    saves = [float(x) for x in a.save_at.split(",") if x]

    t0 = time.time()
    pine = None
    while pine is None:
        try:
            pine = Pine(a.port)
        except OSError:
            if time.time() - t0 > 60:
                sys.exit("no PINE on port %d after 60s" % a.port)
            time.sleep(0.5)
    t0 = time.time()
    print("connected", flush=True)

    cmds = [(addr, sz) for addr, sz, _ in WATCH]
    last = [None] * len(WATCH)
    slot = 1
    while time.time() - t0 < a.seconds:
        t = time.time() - t0
        if saves and t >= saves[0]:
            pine.save_state(slot)
            print("%8.2f  SAVE slot %d" % (t, slot), flush=True)
            saves.pop(0)
            slot += 1
        try:
            vals = pine.batch(cmds)
        except RuntimeError:
            time.sleep(0.2)  # VM not running yet (BIOS / loading)
            continue
        for i, v in enumerate(vals):
            if v == last[i]:
                continue
            addr, sz, label = WATCH[i]
            last[i] = v
            if addr in NOISY:
                NOISY[addr] += 1
                if NOISY[addr] % 120 != 1:
                    continue
            print("%8.2f  [0x%06X] %-30s = 0x%0*X" % (t, addr, label, sz * 2, v), flush=True)
        time.sleep(0.004)


if __name__ == "__main__":
    main()
