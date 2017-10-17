# object 파일 생성
gcc -c main.c

gcc -c add.c
gcc -c mul.c
gcc -c sub.c
gcc -c div.c

# static library(*.a) 생성
ar rc libPrivCalc.a add.o mul.o sub.o div.o

# 라이브러리 생성 확인
ar t libPrivCalc.a

# 바이너리 파일 생성
gcc -o main main.o -L. -lPrivCalc
