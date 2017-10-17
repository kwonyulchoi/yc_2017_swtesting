CC = gcc
SRCS = prog.c file1.c file2.c file3.c  
OBJS = $(SRCS:.c=.o)

prog : $(OBJS)
	@echo objs $(OBJS)
	$(CC) -o $@ $^

# write Here ##########

%.o : %.c
	$(CC) -c $<

#######################

clean :
	rm $(OBJS)
	rm prog
