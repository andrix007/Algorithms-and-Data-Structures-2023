CC = g++
CFLAGS = -c
OUTPUTFLAG = -o


TARGETS_H1_P1 = h1_p1/h1_p1.cpp h1_p1/Complex.h h1_p1/Complex.cpp
TARGETS_H1_P2 = h1_p2/testStack.cpp h1_p2/Stack.h


output: h1_p1.o
	$(CC) h1_p1.o $(OUTPUTFLAG) h1_p1_output

output: testStack.o
	$(CC) testStack.o $(OUTPUTFLAG) h1_p2_output


h1_p1.o: $(TARGETS_H1_P1)
	$(CC) $(CFLAGS) $(TARGETS_H1_P1)

testStack.o: $(TARGETS_H1_P2)
	$(CC) $(CFLAGS) $(TARGETS_H1_P2)

	
clean:
	rm $(wildcard *.o) $(wildcard *.exe)