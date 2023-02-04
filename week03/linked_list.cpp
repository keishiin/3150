#include <iostream>

#include "linked_list.h"


struct node * build_linked_list(int elements) {

  if (elements == 0) {
    return NULL;
  }

  struct node *root = new node;
  struct node *ptr = root;
  
  for( int i = 0; i < elements; i++) {
    ptr->next = new node;
    ptr->number = i;
    ptr = ptr->next;    
  }

  return root;
}

int sum_values_in_linked_list(struct node * list, int elements) {

  int sum = 0;
  
  struct node * my_node = list;
  for (int i =0; i < elements; i++) {
    sum += my_node->number;
    my_node = my_node->next;
  }

  return sum;
}

void print_linked_list(struct node * list, int elements) {
  using namespace std;
  
  struct node * my_node = list;
  for (int i =0; i < elements; i++) {
    cout << my_node->number << " " << endl;
    my_node = my_node->next;
  }
}

int delete_linked_list(struct node * list, int elements) {
  int count = 0;
  
  struct node * my_node = list;
  for (int i =0; i < elements; i++) {
    struct node * prev_node = my_node;
    my_node = my_node->next;

    delete prev_node;
    count++;
  }

  return count;
}