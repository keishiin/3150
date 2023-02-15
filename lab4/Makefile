CC = g++
CFLAGS = -std=c++11 -g -Wall

all: lab4Test

clean: 
	rm -f  lab4Test lab4.o lab4Test.o 

lab4Test: lab4Test.o lab4.o
	$(CC) $(CFLAGS) lab4Test.o lab4.o -o lab4Test

lab4.o: lab4.h lab4.cpp
	$(CC) $(CFLAGS) -c lab4.cpp

lab4Test.o: lab4Test.cpp
	$(CC) $(CFLAGS) -c lab4Test.cpp