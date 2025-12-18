!#/bin/bash

git clone https://github.com/SamueleGerminiani/usm-t.git
cd usm-t
cd tool/third_party
./install_all.sh
cd ../..
cd tool
mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=Release .. -DCMAKE_POLICY_VERSION_MINIMUM=3.5
make -j vcd2csv
cp vcd2csv ../../../vcd2csv
cd ../../..

if [ -d vcd2csv ]; then
    echo "vcd2csv is installed successfully"
    rm -rf usm-t
else
    echo "vcd2csv is not installed"
fi  