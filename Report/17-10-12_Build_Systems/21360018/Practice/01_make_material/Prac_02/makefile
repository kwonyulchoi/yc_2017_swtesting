CC = gcc
OBJS = prog.o file1.o file2.o file3.o

prog : $(OBJS)
	$(CC) -o $@ $^

prog.o : prog.c
	$(CC) -c $^

# write Here ##########

#######################



clean :
	rm $(OBJS)
	rm prog
