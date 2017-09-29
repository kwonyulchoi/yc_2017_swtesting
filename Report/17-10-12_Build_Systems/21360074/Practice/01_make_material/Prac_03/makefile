CC = gcc
OBJS = prog.o file1.o file2.o file3.o
VPATH = ./main: ./submodule

# write Here ##########
#######################

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
# write Here ##########
# write Here ##########
# write Here ##########

#######################


clean :
	rm $(OBJS)
	rm prog
