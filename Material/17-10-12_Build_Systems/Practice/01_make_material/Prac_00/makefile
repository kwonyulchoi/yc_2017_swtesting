prog : prog.o file1.o file2.o file3.o
	gcc -o prog prog.o file1.o file2.o file3.o

prog.o : prog.c
	gcc -c prog.c

file1.o : file1.c
	gcc -c file1.c

# write Here ##########

#######################
clean :
	rm *.o
	rm prog
