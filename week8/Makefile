CC = g++
CFLAGS = -std=c++11 -g -Wall

all: week8test week8

clean: 
	rm -f week8Test.o week8.o week8test week8 main.o

week8: week8.o main.o
	$(CC) $(CFLAGS) week8.o main.o -o week8

week8test: week8Test.o week8.o
	$(CC) $(CFLAGS) week8Test.o week8.o -o week8test

week8.o: week8.h week8.cpp 
	$(CC) $(CFLAGS) -c week8.cpp 

week8Test.o: week8Test.cpp
	$(CC) $(CFLAGS) -c week8Test.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp