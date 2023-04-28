CC = g++
CFLAGS = -std=c++11 -g -Wall

all: lab9test lab9

clean: 
	rm -f lab9Test.o lab9.o lab9test lab9 main.o

lab9: lab9.o main.o
	$(CC) $(CFLAGS) lab9.o main.o -o lab9

lab9test: lab9Test.o lab9.o
	$(CC) $(CFLAGS) lab9Test.o lab9.o -o lab9test

lab9.o: lab9.h lab9.cpp
	$(CC) $(CFLAGS) -c lab9.cpp 

lab9Test.o: lab9Test.cpp
	$(CC) $(CFLAGS) -c lab9Test.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp