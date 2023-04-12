CC = g++
CFLAGS = -std=c++11 -g -Wall -I../bigint/

all: week11test week11

clean: 
	rm -f week11Test.o week11.o week11test week11 main.o

week11: week11.o main.o
	$(CC) $(CFLAGS) week11.o main.o -o week11

week11test: week11Test.o week11.o
	$(CC) $(CFLAGS) week11Test.o week11.o -o week11test

week11.o: week11.h week11.cpp
	$(CC) $(CFLAGS) -c week11.cpp 

week11Test.o: week11Test.cpp
	$(CC) $(CFLAGS) -c week11Test.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp