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
libTuner.so: Tuner.c
	$(CC) -fPIC -c $^
	$(CC) -o $@ -shared Tuner.o

libMenuUI.so: MenuUI.c
	$(CC) -fPIC -c $^
	$(CC) -o $@ -shared MenuUI.o

#######################

clean:
	rm *.o ;rm lib*.so;rm tvmain
