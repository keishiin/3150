#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../doctest/doctest.h"
#include "week9.h"

TEST_CASE("TEST") {

    SUBCASE("push") {
        List *list = new List(); // idk why the check only works if i make it like this

        for (int i = 0; i < 5; i++) {
            list->push(i);
        }

        CHECK(list->head->data == 4);
        CHECK(list->head->next->data == 3);
        CHECK(list->head->next->next->data == 2);
        CHECK(list->head->next->next->next->data == 1);
        CHECK(list->head->next->next->next->next->data == 0);

        list->clean();
        
        delete list;
    }


}