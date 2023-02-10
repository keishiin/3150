#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../doctest/doctest.h"

#include <iostream>
#include "lab3.h"


TEST_CASE("testing") {
    int arr1[] = {0};
    int arr2[] = {-1, 1, 1, -1};
    int arr3[] = {1, 1, -1, -1, 1, 1};
    int arr4[] = {1, -1, 1, -1, -1, 1, -1};

    SUBCASE("testing check first index") {
        CHECK(check_first_index(arr1, 0) == false);
        CHECK(check_first_index(arr2, 4) == true);
        CHECK(check_first_index(arr3, 6) == false);
        CHECK(check_first_index(arr4, 8) == false);
    }

    SUBCASE("testing lowest valley"){
        CHECK(lowest_depth(arr1, 0) == 0);
        CHECK(lowest_depth(arr2, 4) == 0);
        CHECK(lowest_depth(arr3, 6) == 0);
        CHECK(lowest_depth(arr4, 7) == 4);
    }

    SUBCASE("new arr gen test") {
        int new_arr[6];
        new_array_gen(arr4, new_arr, 4, 7);
        CHECK(new_arr[0] == 1);
        CHECK(new_arr[1] == -1);
        CHECK(new_arr[2] == 1);
        CHECK(new_arr[3] == -1);
    }
}