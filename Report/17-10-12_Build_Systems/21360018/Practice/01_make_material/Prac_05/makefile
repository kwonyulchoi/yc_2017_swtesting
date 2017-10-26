SRCS=tvmain.c
OBJS=$(SRCS:.c=.o)
LIBS=libEPG.a libTuner.a libMenuUI.a
CC=gcc
tvmain: $(OBJS) $(LIBS)
	$(CC) -o $@ $(OBJS) -L. -lEPG -lTuner -lMenuUI 

libEPG.a: EPG.c
	$(CC) -c $^
	ar rc $@ EPG.o

# write Here ##########

#######################



clean:
	rm *.o ;rm lib*.a;rm tvmain
