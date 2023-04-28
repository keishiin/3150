CC = g++
CFLAGS = -std=c++11 -g -Wall

all: week9test week9

clean: 
	rm -f week9Test.o week9.o week9test week9 main.o

week9: week9.o main.o
	$(CC) $(CFLAGS) week9.o main.o -o week9

week9test: week9Test.o week9.o
	$(CC) $(CFLAGS) week9Test.o week9.o -o week9test

week9.o: week9.h week9.cpp
	$(CC) $(CFLAGS) -c week9.cpp 

week9Test.o: week9Test.cpp
	$(CC) $(CFLAGS) -c week9Test.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp