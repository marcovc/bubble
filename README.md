# Bubble sort in different programming languages

## Results

| Language | Runtime |
| --- | --- |
| c++ | 9 secs |
| rust | 14 secs |
| julia | 25 secs | 
| pypy | 1 minute and 22 secs |
| python | 24 minutes and 30 secs |

## Specs

### C++

```bash
$ clang --version
clang version 7.0.1-8 (tags/RELEASE_701/final)
Target: x86_64-pc-linux-gnu
Thread model: posix
InstalledDir: /usr/bin
```

### Rust

```bash
$ rustc --version
rustc 1.46.0 (04488afe3 2020-08-24)
```

### Julia

```bash
$ julia --version
julia version 1.0.3
```

### PyPy

```bash
$ pypy3 --version
Python 3.5.3 (7.0.0+dfsg-3, Feb 21 2019, 03:51:22)
[PyPy 7.0.0 with GCC 8.2.0]
```

### Python

```bash
$ python3 --version
Python 3.7.3
```

## Notes

* random generation / shuffling the arrays using standard 
libraries might use different algorithms.
