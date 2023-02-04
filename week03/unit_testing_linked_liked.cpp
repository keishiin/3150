#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../doctest/doctest.h"
#include "linked_list.h"

TEST_CASE("Testing build linked list") {

  SUBCASE("empty list test") {
    struct node * linked_list_1 = build_linked_list(0);
    CHECK(linked_list_1 == NULL);
   }

  SUBCASE("testing small list and seeing if values are correct") {
      struct node * linked_list_3 = build_linked_list(3);
      // check to see if all values of linked list 3 are correct
      node *tmp = linked_list_3; 
      for (int i = 0; i < 3; i++) {
        CHECK(tmp->number == i);
        tmp = tmp-> next;
      }
      // check delete for list 3
      CHECK(delete_linked_list(linked_list_3, 3) == 3);
  }

  SUBCASE("testing larger list and seeing if values are correct") {

    struct node * linked_list_2 = build_linked_list(10);
    // check to see if all values of linked list 2 are correct
    node *tmp = linked_list_2; 
    for (int i = 0; i < 10; i++) {
      CHECK(tmp->number == i);
      tmp = tmp-> next;
    }
    CHECK(delete_linked_list(linked_list_2, 10) == 10);
  }

  SUBCASE("sum function") {
    struct node * list = build_linked_list(10);
    CHECK(sum_values_in_linked_list(list, 10) == 45);
    CHECK(delete_linked_list(list, 10) == 10);
  }
}

TEST_CASE("Testing ...") {

  CHECK( 0 == 0);

}