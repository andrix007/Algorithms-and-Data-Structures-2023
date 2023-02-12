CC = g++
CFLAGS = -c
OUTPUTFLAG = -o

OUTPUT_TARGETS = output1 output2 output3 output4 output5

TARGETS_H1_P1 = h1_p1/h1_p1.cpp h1_p1/Complex.h h1_p1/Complex.cpp
TARGETS_H1_P2 = h1_p2/testStack.cpp h1_p2/Stack.h
TARGETS_H1_P3 = h1_p3/testLinkedList.cpp h1_p3/LinkedList.h
TARGETS_H1_P4 = h1_p4/vector.cpp
TARGETS_H1_P5 = h1_p5/vector2.cpp

all: $(OUTPUT_TARGETS)

#run make outputx for running xth problem
output1: h1_p1.o
	$(CC) h1_p1.o $(OUTPUTFLAG) h1_p1_output

output2: testStack.o
	$(CC) testStack.o $(OUTPUTFLAG) h1_p2_output
	
output3: testLinkedList.o
	$(CC) testLinkedList.o $(OUTPUTFLAG) h1_p3_output

output4: vector.o
	$(CC) vector.o $(OUTPUTFLAG) h1_p4_output

output5: vector2.o
	$(CC) vector2.o $(OUTPUTFLAG) h1_p5_output


h1_p1.o: $(TARGETS_H1_P1)
	$(CC) $(CFLAGS) $(TARGETS_H1_P1)

testStack.o: $(TARGETS_H1_P2)
	$(CC) $(CFLAGS) $(TARGETS_H1_P2)

testLinkedList.o: $(TARGETS_H1_P3)
	$(CC) $(CFLAGS) $(TARGETS_H1_P3)

vector.o: $(TARGETS_H1_P4)
	$(CC) $(CFLAGS) $(TARGETS_H1_P4)

vector2.o: $(TARGETS_H1_P5)
	$(CC) $(CFLAGS) $(TARGETS_H1_P5)

#run clean to clean of all stuff
clean:
	del /Q build $(wildcard *.o) $(wildcard *.exe) $(wildcard *.gch)