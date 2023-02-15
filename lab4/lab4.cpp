#include <iostream>

#include "lab4.h"


struct node * build_linked_list(int elements) {

  if (elements == 0) {
    return NULL;
  }
  /*
        all that is needed to create a last pointer
        than point each elements jump to the last pointer
        lol
  */

  struct node *root = new node;
//   struct node *ptr = root;
  struct node *last_ptr = root; // empty at the begining not sure what to initilize to 
//   int last_ele = elements - 1;
  
//   for( int i = 0; i < elements - 1; i++) {

//     // initialzie the last pointer to jump of current node
//         ptr->next = new node;
//         ptr->number = i;
//         ptr->jump = last_ptr;
//         ptr = ptr->next; 
//   }


    // set up lasat pointer
    last_ptr->number = elements - 1; 
    last_ptr->next = root; 
    last_ptr->jump = root; 

    for (int i = 0; i < elements - 1; i++) {
        // new node 
        node* temp = new node; 
        temp->number = i; 
        temp->next = root; 
        temp->jump = last_ptr; 
        root = temp; 
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
  // iterating i++ seems to do random inserts lol dont get it 
  for (int i = elements - 1; i > 0; i--) {
    struct node * prev_node = my_node;
    my_node = my_node->next;

    delete prev_node;
    count++;
  }

  return count;
}


struct node * pointer_jump_linked_list(struct node * linked_list, const int elements) {
  
//   for( int i = 0; i < elements; i++) {
//     linked_list = linked_list->next;
//   }

//   return linked_list;
return linked_list->jump;
}