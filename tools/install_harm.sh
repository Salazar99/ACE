#!/usr/bin/env bash
# Build HARM from source on a Linux box (WSL is fine) and print what to export.
#
#   bash tools/install_harm.sh [install-dir]        # default: $HOME/harm
#
# The dependency step downloads spot from lrde.epita.fr, antlr4 from github and boost from
# jfrog, and compiles them into harm/third_party. It needs network access to those hosts:
# it will not work from a sandbox with a restricted egress allowlist.
set -euo pipefail

DEST="${1:-$HOME/harm}"

echo "== prerequisites (sudo) =="
sudo apt-get update
sudo apt-get install -y git cmake g++ make uuid-dev pkg-config wget tar

echo "== clone =="
if [ -d "$DEST/.git" ]; then
  git -C "$DEST" pull --ff-only
else
  git clone https://github.com/SamueleGerminiani/harm.git "$DEST"
fi

echo "== dependencies (spot, antlr4, boost - compiled into third_party, slow) =="
cd "$DEST/third_party"
bash install_all.sh

echo "== build =="
mkdir -p "$DEST/build"
cd "$DEST/build"
cmake ..
make -j"$(nproc)"

BIN="$(find "$DEST" -maxdepth 3 -type f -name harm -perm -u+x | head -1)"
if [ -z "$BIN" ]; then
  echo "build finished but no harm binary found under $DEST" >&2
  exit 1
fi

echo
echo "harm built: $BIN"
echo
echo "Point the flow at it:"
echo "  export HARM_BIN=$BIN"
echo "  export HARM_LIB=$DEST/third_party/spot/lib   # only if the libraries are not installed system-wide"
echo "  python3 tools/check_harm.py"
