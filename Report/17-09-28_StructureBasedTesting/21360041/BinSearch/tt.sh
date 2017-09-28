#!/bin/bash
# remove gdca files
find . -name '*.gcda' | xargs rm
find . -name '*.gcov' | xargs rm
export LD_LIBRARY_PATH=out/x64_Linux_ubuntu/lib
#gdb --args out/x64_Linux_ubuntu/bin/swut_BinSearch $*
out/x64_Linux_ubuntu/bin/swut_BinSearch $*
gcov -b -r libsrc/libmodule.cpp
