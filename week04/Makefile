CC = g++
CFLAGS = -std=c++11 -g -Wall

all: week4test

clean: 
	rm -f unitTestWeek04.o week4.o week4test

week4test: unitTestWeek04.o week4.o
	$(CC) $(CFLAGS) unitTestWeek04.o week4.o -o week4test

week4.o: week4.h week4.cpp 
	$(CC) $(CFLAGS) -c week4.cpp 

unitTestWeek04.o: unitTestWeek04.cpp
	$(CC) $(CFLAGS) -c unitTestWeek04.cpp