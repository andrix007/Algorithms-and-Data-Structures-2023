CC = g++
CFLAGS = -c
OUTPUTFLAG = -o

OUTPUT_TARGETS = output1 

TARGETS = selectionSort.cpp


all: $(OUTPUT_TARGETS)

#Compilation Phase

$(OBJECTS): $(TARGETS)
	$(CC) $(CFLAGS) $(TARGETS)


#run make outputx for running xth problem
output1: $(TARGETS)
	$(CC) $(TARGETS) $(OUTPUTFLAG) selectionSortOutput


#run clean to clean of all stuff
clean:
	del /Q build $(wildcard *.o) $(wildcard *.exe)