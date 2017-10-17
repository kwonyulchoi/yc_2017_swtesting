CC = gcc
OBJS = prog.o file1.o file2.o file3.o

# write Here ##########
VPATH	=	./main: ./submodule
#######################

prog : $(OBJS)
	$(CC) -o $@ $^

# write Here ##########
prog.o	: prog.c
	$(CC) -c $^
file1.o	: file1.c
	$(CC) -c $^
file2.o	: file2.c
	$(CC) -c $^
file3.o : file3.c
	$(CC) -c $^

#######################


clean :
	rm $(OBJS)
	rm prog
