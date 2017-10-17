# object 파일 생성
gcc -c main.c

gcc -fPIC -c add.c
gcc -fPIC -c mul.c
gcc -fPIC -c sub.c
gcc -fPIC -c div.c

# shared library(*.so) 생성
#gcc -shared -W1,-soname,libPrivCalc.so -o libPrivCalc.so add.o mul.o sub.o div.o 
gcc -shared -o libPrivCalc.so add.o mul.o sub.o div.o 

# 바이너리 파일 생성
#-L. -> 라이브러리가 .(같은 공간에) 존재함을 알려줌
gcc -o main main.o -L. -lPrivCalc

# 라이브러리 참조 확인
export LD_LIBRARY_PATH=.
ldd main
