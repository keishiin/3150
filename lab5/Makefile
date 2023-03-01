CC = g++
CFLAGS = -std=c++11 -g -Wall

all: lab5test lab5

clean: 
	rm -f lab5Test.o lab5.o lab5test lab5 main.o

lab5: lab5.o main.o
	$(CC) $(CFLAGS) lab5.o main.o -o lab5

lab5test: lab5Test.o lab5.o
	$(CC) $(CFLAGS) lab5Test.o lab5.o -o lab5test

lab5.o: lab5.h lab5.cpp 
	$(CC) $(CFLAGS) -c lab5.cpp 

lab5Test.o: lab5Test.cpp
	$(CC) $(CFLAGS) -c lab5Test.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp