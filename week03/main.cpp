
#include <iostream>


#include "linked_list.h"


int main() {
  using namespace std;

  struct node * linked_list = build_linked_list(10);


  print_linked_list(linked_list, 10);
}