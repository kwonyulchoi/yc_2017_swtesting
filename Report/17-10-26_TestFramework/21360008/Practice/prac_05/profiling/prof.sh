#!/bin/bash
./bd.sh
rm gmon.out
rm report.txt
./run.sh
gprof out/x64_Linux_ubuntu/bin/Gprof_Ex gmon.out > report.txt
gprof out/x64_Linux_ubuntu/bin/Gprof_Ex | gprof2dot --colormap=bw | dot -Tpng -o  output.png

