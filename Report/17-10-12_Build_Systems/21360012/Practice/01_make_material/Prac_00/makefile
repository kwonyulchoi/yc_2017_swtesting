prog : prog.o file1.o file2.o file3.o
	gcc -o prog prog.o file1.o file2.o file3.o

prog.o : prog.c
	gcc -c prog.c

file1.o : file1.c
	gcc -c file1.c

# write Here ##########
file2.o	:	file2.c
	gcc -c file2.c
file3.o	: file3.c
	gcc  -c file3.c
#######################
clean :
	rm *.o
	rm prog
