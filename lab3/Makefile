CC = g++
CFLAGS = -std=c++11 -g -Wall

all: lab3 testlab3

clean: 
	rm -f lab3 testlab3 lab3.o unit_test_lab3.o main.o

testlab3: lab3.o unit_test_lab3.o
	$(CC) $(CFLAGS) unit_test_lab3.o lab3.o -o testlab3

lab3: lab3.o main.o
	$(CC) $(CFLAGS) main.o lab3.o -o lab3

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

lab3.o: lab3.h lab3.cpp
	$(CC) $(CFLAGS) -c lab3.cpp

unit_test_lab3.o: unit_test_lab3.cpp
	$(CC) $(CFLAGS) -c unit_test_lab3.cpp