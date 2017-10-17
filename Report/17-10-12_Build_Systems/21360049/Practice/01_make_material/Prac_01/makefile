CC = gcc
OBJS = prog.o file1.o file2.o file3.o

prog : $(OBJS)
	$(CC) -o prog $(OBJS)

prog.o : prog.c
	$(CC) -c prog.c

file1.o : file1.c
	$(CC) -c file1.c

# write Here ##########

file2.o : file2.c
	$(CC) -c file2.c


file3.o : file3.c
	$(CC) -c file3.c


#######################

clean :
	rm $(OBJS)
	rm prog
