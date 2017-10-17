CC = gcc
OBJS = prog.o file1.o file2.o file3.o

prog : $(OBJS)
	$(CC) -o $@ $^

prog.o : prog.c
	$(CC) -c $^

# write Here ##########
file1.0 : file1.c
	$(CC) 0C $^

file2.0 : file2.c
	$(CC) 0C $^

file3.0 : file3.c
	$(CC) 0C $^

#######################



clean :
	rm $(OBJS)
	rm prog
