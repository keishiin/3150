CC = g++
CFLAGS = -std=c++11 -g -Wall

all: unit_tests_prefix_sums

clean: 
	rm -f prefix_sum.o unit_tests_prefix_sums.o unit_tests_prefix_sums

unit_tests_prefix_sums: prefix_sum.o unit_tests_prefix_sums.o
	$(CC) $(CFLAGS) prefix_sum.o unit_tests_prefix_sums.o -o unit_tests_prefix_sums

prefix_sum.o: prefix_sum.h prefix_sum.cpp
	$(CC) $(CFLAGS) -c prefix_sum.cpp

unit_tests_prefix_sums.o: prefix_sum.h unit_tests_prefix_sums.cpp
	$(CC) $(CFLAGS) -c unit_tests_prefix_sums.cpp

