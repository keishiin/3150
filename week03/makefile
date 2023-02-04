CC = g++
CFLAGS = -std=c++11 -g -Wall

all: linked_list unit_testing_linked_liked

clean: 
	rm -f linked_list linked_list.o main.o unit_testing_linked_liked.o unit_testing_linked_liked

linked_list: linked_list.o main.o
	$(CC) $(CFLAGS) linked_list.o main.o -o linked_list

unit_testing_linked_liked: linked_list.h unit_testing_linked_liked.o
	$(CC) $(CFLAGS) unit_testing_linked_liked.o linked_list.o -o unit_testing_linked_liked

main.o: linked_list.h main.cpp
	$(CC) $(CFLAGS) -c main.cpp 
	
linked_list.o: linked_list.cpp
	$(CC) $(CFLAGS) -c linked_list.cpp

unit_testing_linked_liked.o: unit_testing_linked_liked.cpp
	$(CC) $(CFLAGS) -c unit_testing_linked_liked.cpp