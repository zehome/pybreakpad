# pybreakpad Python breakpad wrapper

This a tiny tiny wrapper for google's [breakpad](https://chromium.googlesource.com/breakpad/breakpad/)

## Quick start

```shell
mkdir breakpad
cd breakpad
git clone git@github.com:zehome/pybreakpad.git
git clone -b chrome_49 https://chromium.googlesource.com/breakpad/breakpad/
(cd breakpad/src/third_party && git clone https://chromium.googlesource.com/linux-syscall-support lss)
(cd breakpad && ./configure && make)
(cd pybreakpad && qmake && make)
[ -d /tmp/breakpad ] || mkdir /tmp/breakpad
cd pybreakpad
python breakpad.py
```
