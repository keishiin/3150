#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../doctest/doctest.h"
#include "week6.h"

TEST_CASE("TEST") {

    SUBCASE("testing constructor") {

        int_vector i_v;
        i_v.from = 0;
        i_v.to = 1;
        i_v.id = 0;

        CHECK(i_v.id == 0);
        CHECK(i_v.from == 0);
        CHECK(i_v.to == 1);
    }

    SUBCASE("Read from empty file") {
        std::vector<int_vector> vec;
        std::string file = "empty.txt";

        CHECK_THROWS(read_vectors_pairs(vec, file));
    }

    SUBCASE("Read from non empty file") {
        std::vector<int_vector> vec;
        std::string file = "vector.txt";

        read_vectors_pairs(vec, file);

        // int_vec 1
        CHECK(vec[0].id == 0);
        CHECK(vec[0].from == 1);
        CHECK(vec[0].to == 2);

        // int_vec 2
        CHECK(vec[1].id == 1);
        CHECK(vec[1].from == 1);
        CHECK(vec[1].to == 3);

        // int_vec 3
        CHECK(vec[2].id == 2);
        CHECK(vec[2].from == 1);
        CHECK(vec[2].to == 4);

        // int_vec 4
        CHECK(vec[3].id == 3);
        CHECK(vec[3].from == 2);
        CHECK(vec[3].to == 7);

        // int_vec 5
        CHECK(vec[4].id == 4);
        CHECK(vec[4].from == -5);
        CHECK(vec[4].to == 2001);

        // int_vec 6
        CHECK(vec[5].id == 5);
        CHECK(vec[5].from == 9);
        CHECK(vec[5].to == 11);

    }
}

