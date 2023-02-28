CC = g++
CFLAGS = -std=c++11 -g -Wall

all: week6test week6

clean: 
	rm -f week6Test.o week6.o week6test week6 main.o

week6: week6.o main.o
	$(CC) $(CFLAGS) week6.o main.o -o week6

week6test: week6Test.o week6.o
	$(CC) $(CFLAGS) week6Test.o week6.o -o week6test

week6.o: week6.h week6.cpp 
	$(CC) $(CFLAGS) -c week6.cpp 

week6Test.o: week6Test.cpp
	$(CC) $(CFLAGS) -c week6Test.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp