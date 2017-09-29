# object 파일 생성
gcc -c main.c
gcc -c add.c
gcc -c mul.c
gcc -c sub.c
gcc -c div.c


# 바이너리 파일 생성
gcc -o main main.o add.o mul.o sub.o div.o
