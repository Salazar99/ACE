!#/bin/bash

git clone https://github.com/SamueleGerminiani/usm-t.git
cd usm-t
cd tool/third_party
./install_all.sh
cd ..
mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
make -j vcd2csv
cp vcd2csv ../../
cd ../../..
rm -rf usm-t