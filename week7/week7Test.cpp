#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../doctest/doctest.h"
#include "week7.h"

TEST_CASE("TESTS") {
    
    SUBCASE("main_loop") {
        vector<int> vec{1, 2, 3, 4, 5, 6};
        vector<int> vec1{1, 8128, 28, 496, 5, 6};
        vector<int> vec2{567, 71, 28, 496, 5, 89};

        CHECK(main_loop(vec) == 1);
        CHECK(main_loop(vec1) == 4);
        CHECK(main_loop(vec2) == 2);

    }

    SUBCASE("check int") {

        CHECK(check_int(6) == true);
        CHECK(check_int(28) == true);
        CHECK(check_int(496) == true);
        CHECK(check_int(8128) == true);

        CHECK(check_int(71) == false);
        CHECK(check_int(89) == false);
        CHECK(check_int(567) == false);
        CHECK(check_int(4) == false);

    }
}