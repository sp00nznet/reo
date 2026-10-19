# Contributing

Issues and PRs are welcome. Useful things to know first:

- Read [docs/boot-gates.md](docs/boot-gates.md) for where the boot stands and
  [docs/debugging.md](docs/debugging.md) for the tools that find the next wall.
- Fixes to the recompiler or runtime belong in PS2Recomp (`third_party/PS2Recomp`), as a PR
  there, described in general terms ("DMA chains longer than one link are dropped"), not as
  "Outbreak needs this". Game-specific addresses and hacks stay in this repo.
- Test with the compiler actually on PATH, and say in the PR what you ran: which boot stage it
  reached before and after, and PS2Recomp's `ps2x_tests` if you touched the toolkit.

## Where your code comes from

This repo is GPL-3.0, so code under a GPL-3.0-compatible licence can come in, with its notice
kept and a row added to `NOTICE`. What can't:

- **Code under an incompatible or missing licence.** Non-commercial licences, CC-BY-NC, and
  repos with no licence at all (most decompilations) are not usable. If you ported something,
  say from where, and which file and licence.
- **Anything from the game:** code, data, assets, memory captures, or recompiler/decompiler
  output. The recompiler output is generated locally from each person's own disc and never
  committed.
- **Leaked SDK material.** No Sony SDK source, headers or documents, and nothing derived from
  them.

Running an emulator as a black box and comparing its output is fine; say so in the comment
("checked against PCSX2 output").

## AI-assisted contributions

Welcome, provided a human understood and verified the change: you ran it, and you can explain
why it is right. Say in the PR that a tool helped.

## Credit

Everyone whose PR or issue report lands is credited in `CONTRIBUTORS.md` with what they found or
fixed. PRs are merged with their commits intact so your authorship stays on them.
