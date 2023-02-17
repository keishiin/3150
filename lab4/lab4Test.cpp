#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../doctest/doctest.h"
#include "lab4.h"

TEST_CASE("Testing build linked list") {

  SUBCASE("empty list test") {
    struct node * linked_list_1 = build_linked_list(0);
    CHECK(linked_list_1 == NULL);
   }

  SUBCASE("testing small list and seeing if values are correct") {
      struct node * linked_list_3 = build_linked_list(3);
      // check to see if all values of linked list 3 are correct 
      // inserted backwards
      node *tmp = linked_list_3; 
      for (int i = 2; i > 0; i--) {
        CHECK(tmp->number == i - 1);
        tmp = tmp-> next;
      }

    // check pointer jump functionc
    CHECK(pointer_jump_linked_list(tmp, 3)->number == 2);
    CHECK(tmp->jump->number == 2);

    // check delete for list 3
    CHECK(delete_linked_list(linked_list_3, 3) == 2);
  }

  SUBCASE("testing larger list and seeing if values are correct") {

    struct node * linked_list_2 = build_linked_list(10);
    // check to see if all values of linked list 2 are correct
    node *tmp = linked_list_2; 
    for (int i = 9; i > 0; i--) {
      CHECK(tmp->number == i -1);
      tmp = tmp-> next;
    }

    // check pointer jump functionc
    CHECK(pointer_jump_linked_list(tmp, 10)->number == 9);
    CHECK(tmp->jump->number == 9);

    CHECK(delete_linked_list(linked_list_2, 10) == 9);
  }

  SUBCASE("sum function") {
    struct node * list = build_linked_list(10);
    CHECK(sum_values_in_linked_list(list, 10) == 45);
    CHECK(delete_linked_list(list, 10) == 9);
  }
}

TEST_CASE("Testing ...") {

  CHECK( 0 == 0);

}