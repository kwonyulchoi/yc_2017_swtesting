rm test.o
rm test
g++ -finstrument-functions -g -c test.cpp
g++ -g -c trace.cpp
g++ -finstrument-functions -o test test.o trace.o

