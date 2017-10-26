#!/bin/bash

#remove all gcda files
find . -name *.gcda | xargs rm
find . -name *.gcno | xargs rm
./bd.sh -c
./bd.sh
#run cpputest unit test
export LD_LIBRARY_PATH=out/x64_Linux_ubuntu/lib ; ./out/x64_Linux_ubuntu/bin/swut_coverage_metric
#make html report
OUTPUT="html_report"
rm -rf $OUTPUT
lcov --rc lcov_branch_coverage=1 --directory . --capture --output-file app.info
genhtml  --branch-coverage --output-directory $OUTPUT app.info
