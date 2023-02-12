CC = g++
CFLAGS = -c
OUTPUTFLAG = -o

OUTPUT_TARGETS = output1 output2 output3 output4 output5 output6 output7 output8

OBJECTS = h2_p1.o h2_p2.o testWindGauge.o reversingVector.o lotto.o testAccessSet.o maps.o testAccessSet.o

TARGETS_H2_P1 = h2_p1/h2_p1.cpp
TARGETS_H2_P2 = h2_p2/h2_p2.cpp
TARGETS_H2_P3 = h2_p3/testWindGauge.cpp h2_p3/WindGauge.h h2_p3/WindGauge.cpp
TARGETS_H2_P4 = h2_p4/reversingVector.cpp
TARGETS_H2_P5 = h2_p5/lotto.cpp
TARGETS_H2_P6 = h2_p6/testAccessSet.cpp h2_p6/Access.h h2_p6/Access.cpp
TARGETS_H2_P7 = h2_p7/maps.cpp
TARGETS_H2_P8 = h2_p8/testAccessSet.cpp h2_p8/Access.h h2_p8/Access.cpp

TARGETS = $(TARGETS_H2_P1) $(TARGETS_H2_P2) $(TARGETS_H2_P4) $(TARGETS_H2_P5) $(TARGETS_H2_P7)


all: $(OUTPUT_TARGETS)

#Compilation Phase

$(OBJECTS): $(TARGETS)
	$(CC) $(CFLAGS) $(TARGETS)


#run make outputx for running xth problem
output1: h2_p1.o
	$(CC) h2_p1.o $(OUTPUTFLAG) h2_p1_output

output2: h2_p2.o
	$(CC) h2_p2.o $(OUTPUTFLAG) h2_p2_output

output3: $(TARGETS_H2_P3)
	$(CC) $(TARGETS_H2_P3) $(OUTPUTFLAG) h2_p3_output

output4: reversingVector.o
	$(CC) reversingVector.o $(OUTPUTFLAG) h2_p4_output

output5: lotto.o
	$(CC) lotto.o $(OUTPUTFLAG) h2_p5_output

output6: $(TARGETS_H2_P6)
	$(CC) $(TARGETS_H2_P6) $(OUTPUTFLAG) h2_p6_output

output7: maps.o
	$(CC) maps.o $(OUTPUTFLAG) h2_p7_output

output8: $(TARGETS_H2_P8)
	$(CC) $(TARGETS_H2_P8) $(OUTPUTFLAG) h2_p8_output


#run clean to clean of all stuff
clean:
	del /Q build $(wildcard *.o) $(wildcard *.exe)
	cd h2_p3 && del rm -rf *.gch
	cd h2_p6 && del rm -rf *.gch
	cd h2_p8 && del rm -rf *.gch