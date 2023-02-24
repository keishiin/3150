CC = g++
CFLAGS = -std=c++11 -g -Wall

all: week5test week5

clean: 
	rm -f week5Test.o week5.o week5test week5

week5: week5.o main.o
	$(CC) $(CFLAGS) week5.o main.o -o week5

week5test: week5Test.o week5.o
	$(CC) $(CFLAGS) week5Test.o week5.o -o week5test

week5.o: week5.h week5.cpp 
	$(CC) $(CFLAGS) -c week5.cpp 

week5Test.o: week5Test.cpp
	$(CC) $(CFLAGS) -c week5Test.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp