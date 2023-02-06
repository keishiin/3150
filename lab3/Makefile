CC = g++
CFLAGS = -std=c++11 -g -Wall
week2 = -I../week2

all: lab3 

clean: 
	rm -f lab3 main.o lab3.o

lab3: main.o lab3.o
	$(CC) $(CFLAGS) ../week02/prefix_sum.o ../lab2/fisher_yates.o main.o lab3.o -o lab3

lab3.o: lab3.h lab3.cpp
	$(CC) $(CFLAGS) -c lab3.cpp

main.o: lab3.h main.cpp
	$(CC) $(CFLAGS) $(week2) -c main.cpp

