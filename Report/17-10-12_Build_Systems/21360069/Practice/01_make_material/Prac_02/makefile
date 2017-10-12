CC = gcc
OBJS = prog.o file1.o file2.o file3.o

prog : $(OBJS)
	$(CC) -o $@ $^

prog.o : prog.c
	$(CC) -c $^

# write Here ##########
file1.o : file1.c
	$(CC) -c $^

file2.o : file2.c
	$(CC) -c $^

file3.o : file3.c
	$(CC) -c $^

#######################



clean :
	rm $(OBJS)
	rm prog
