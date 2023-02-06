CC = g++
CFLAGS = -std=c++11 -g -Wall

all: testNumbers ECRemove

clean: 
	rm -f testNumbers ECRemove testNumbers.o ECRemove.o ECCalculator.o ECNumbers.o ECRemoveElement.o

ECRemove: ECRemoveElement.o
	$(CC) $(CFLAGS) ECRemoveElement.o -o ECRemove

testNumbers: testNumbers.o ECNumbers.o ECCalculator.o
	$(CC) $(CFLAGS) testNumbers.o ECNumbers.o ECCalculator.o -o testNumbers

testNumbers.o: testNumbers.cpp ECCalculator.h ECNumbers.h
	$(CC) $(CFLAGS) -c testNumbers.cpp

ECRemoveElement.o: ECRemoveElement.cpp
	$(CC) $(CFLAGS) -c ECRemoveElement.cpp

ECNumbers.o: ECNumbers.h ECNumbers.cpp
	$(CC) $(CFLAGS) -c ECNumbers.cpp

ECCalculator.o: ECCalculator.h ECCalculator.cpp
	$(CC) $(CFLAGS) -c ECCalculator.cpp