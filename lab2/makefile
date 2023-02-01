CC = g++
CFLAGS = -std=c++11 -g -Wall
PREFIXSUM = ../week02/prefix_sum.o
INCLUDEWEEK2 = -I../week2

all: lab2 testlab2

clean: 
	rm -f lab2 test generate_list.o fisher_yates.o main.o prefix_sum.o tests.o testlab2 do_all_work.o

lab2: generate_list.o fisher_yates.o do_all_work.o main.o
	$(CC) $(CFLAGS)  main.o ../week02/prefix_sum.o generate_list.o fisher_yates.o do_all_work.o -o lab2

testlab2: generate_list.o fisher_yates.o do_all_work.o tests.o
	$(CC) $(CFLAGS) tests.o ../week02/prefix_sum.o generate_list.o fisher_yates.o do_all_work.o -o testlab2

fisher_yates.o: fisher_yates.h fisher_yates.cpp
	$(CC) $(CFLAGS) -c fisher_yates.cpp

generate_list.o: generate_list.h generate_list.cpp
	$(CC) $(CFLAGS) -c generate_list.cpp

do_all_work.o: do_all_work.h do_all_work.cpp
	$(CC) $(CFLAGS) -c do_all_work.cpp

tests.o: fisher_yates.h generate_list.h do_all_work.h tests.cpp
	$(CC) $(CFLAGS) $(INCLUDEWEEK2) -c tests.cpp

main.o: fisher_yates.h generate_list.h do_all_work.h main.cpp
	$(CC) $(CFLAGS) $(INCLUDEWEEK2) -c main.cpp
