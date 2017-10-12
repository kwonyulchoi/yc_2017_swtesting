SRCS=tvmain.c
OBJS=$(SRCS:.c=.o)
LIBS=libEPG.so libTuner.so libMenuUI.so
CC=gcc
tvmain: $(OBJS) $(LIBS)
	$(CC) -o $@ $(OBJS) -L. -lEPG -lTuner -lMenuUI 

libEPG.so: EPG.c
	$(CC) -fPIC -c $^
	$(CC) -o $@ -shared EPG.o

# write Here ##########

#######################

clean:
	rm *.o ;rm lib*.so;rm tvmain
