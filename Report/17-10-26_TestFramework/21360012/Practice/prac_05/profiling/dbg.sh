#!/bin/bash
./bd.sh
export LD_LIBRARY_PATH=out/x64_Linux_ubuntu/lib
gdb --args out/x64_Linux_ubuntu/bin/profiling $*


