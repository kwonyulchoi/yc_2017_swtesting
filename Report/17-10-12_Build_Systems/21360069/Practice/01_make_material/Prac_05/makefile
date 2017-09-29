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

libTuner.a : Tuner.c
	$(CC) -c $^
	ar rc $@ Tuner.o

libMenuUI.a : MenuUI.c
	$(CC) -c $^
	ar rc $@ MenuUI.o

#######################



clean:
	rm *.o ;rm lib*.a;rm tvmain
