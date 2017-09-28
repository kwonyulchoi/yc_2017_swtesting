OBJS=CircularBuffer.o test.o
# 헤더파일을 찾을 디렉토리 명시
INCDIR=-I../cpputest/include
# 라이브러리를 찾을 디렉토리 명시
LIBDIR=-L../cpputest/lib
# 링크할 라이브러리 --> cpputest 라이브러리
LIB=-lCppUTest -lCppUTestExt

test : $(OBJS)
	g++ -o  $@  $^ $(LIBDIR) $(LIB)

%.o : %.cpp
	g++ -c $(INCDIR) $^ 

.SILENT : clean
clean :
	rm -f *.o test prog

prog : CircularBuffer.o main.o
	g++ -o  $@  $^ 


