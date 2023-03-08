CC = g++
CFLAGS = -std=c++11 -g -Wall

all: week7test week7

clean: 
	rm -f week7Test.o week7.o week7test week7 main.o

week7: week7.o main.o
	$(CC) $(CFLAGS) week7.o main.o -o week7

week7test: week7Test.o week7.o
	$(CC) $(CFLAGS) week7Test.o week7.o -o week7test

week7.o: week7.h week7.cpp 
	$(CC) $(CFLAGS) -c week7.cpp 

week7Test.o: week7Test.cpp
	$(CC) $(CFLAGS) -c week7Test.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp