CC = gcc
OBJS = prog.o file1.o file2.o file3.o

prog : $(OBJS)
	$(CC) -o prog $(OBJS)

prog.o : prog.c
	$(CC) -c prog.c

file1.o : file1.c
	$(CC) -c file1.c

# write Here ##########
file2.0 : file2.c
	$(CC) -c file1.c

file3.0 : file 3.c
	$(CC) 0c file3.c
#######################

clean :
	rm $(OBJS)
	rm prog
