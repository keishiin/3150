#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../doctest/doctest.h"
#include "lab5.h"

TEST_CASE("lab 5 tests") {

    SUBCASE("empty file") {
        std::vector<double_vector> vec;
        std::string file = "empty.txt";

       CHECK_THROWS(read_vectors_pairs(vec, file));

    }
    SUBCASE("read from non empty file") {
        std::vector<double_vector> vec;
        std::string file = "vec_list.txt";

        read_vectors_pairs(vec, file);

        // double_vec 1
        CHECK(vec[0].id == 0);
        CHECK(vec[0].from == 0.1);
        CHECK(vec[0].to == 0.2);

        // double_vec 2
        CHECK(vec[1].id == 1);
        CHECK(vec[1].from == -0.3);
        CHECK(vec[1].to == 0.4);

        // double_vec 3
        CHECK(vec[2].id == 2);
        CHECK(vec[2].from == 0.500);
        CHECK(vec[2].to == 0.6);

        // double_vec 4
        CHECK(vec[3].id == 3);
        CHECK(vec[3].from == 0.7);
        CHECK(vec[3].to == 0.8);

        // double_vec 5
        CHECK(vec[4].id == 4);
        CHECK(vec[4].from == 0.9);
        CHECK(vec[4].to == 1.0);

        // double_vec 6
        CHECK(vec[5].id == 5);
        CHECK(vec[5].from == 9.9);
        CHECK(vec[5].to == 2.3);
    }

    SUBCASE("testing vec magnitude") {
        std::vector<double_vector> vec;
        std::string file = "vec_list.txt";

        read_vectors_pairs(vec, file);

        CHECK(vec_magnitude(vec[0]) == doctest::Approx(0.223607));
        CHECK(vec_magnitude(vec[1]) == doctest::Approx(0.5));
        CHECK(vec_magnitude(vec[2]) == doctest::Approx(0.781025));
        CHECK(vec_magnitude(vec[3]) == doctest::Approx(1.06301));
        CHECK(vec_magnitude(vec[4]) == doctest::Approx(1.34536));
        CHECK(vec_magnitude(vec[5]) == doctest::Approx(10.1637));
    }

    SUBCASE("dot product") {
        std::vector<double_vector> vec;
        std::string file = "vec_list.txt";

        read_vectors_pairs(vec, file);

        CHECK(dot_product(vec[0], vec[1]) == doctest::Approx(0.05));
        CHECK(dot_product(vec[2], vec[3]) == doctest::Approx(0.83));
        CHECK(dot_product(vec[4], vec[5]) == doctest::Approx(11.21));
    }

    SUBCASE("other product") {
        std::vector<double_vector> vec;
        std::string file = "vec_list.txt";

        read_vectors_pairs(vec, file);

        CHECK(other_prod(vec[0], vec[1]) == doctest::Approx(0.723607));
        CHECK(other_prod(vec[2], vec[3]) == doctest::Approx(1.84404));
        CHECK(other_prod(vec[4], vec[5]) == doctest::Approx(11.509));
    }

    SUBCASE("cos distance") {
        std::vector<double_vector> vec;
        std::string file = "vec_list.txt";

        read_vectors_pairs(vec, file);

        CHECK(cos_distance(vec[0], vec[1]) == doctest::Approx(1.50164));
        CHECK(cos_distance(vec[2], vec[3]) == doctest::Approx(1.10392));
        CHECK(cos_distance(vec[4], vec[5]) == doctest::Approx(0.228451));

    }

    SUBCASE("unordered_vec_pairs") {

        std::vector<double_vector> vec;
        std::string file = "vec_list.txt";
        read_vectors_pairs(vec, file);
        std::vector<idek> n_vec;
        unordered_vec_pairs(vec, n_vec);

        CHECK(n_vec[0].dist == doctest::Approx(1.50164));
        CHECK(n_vec[0].iv.id == 0);
        CHECK(n_vec[0].iv.from == 0.1);
        CHECK(n_vec[0].iv.to == 0.2);
        CHECK(n_vec[0].iv2.id == 1);
        CHECK(n_vec[0].iv2.from == -0.3);
        CHECK(n_vec[0].iv2.to == 0.4);

        CHECK(n_vec[1].dist == doctest::Approx(1.40076));
        CHECK(n_vec[1].iv.id == 0);
        CHECK(n_vec[1].iv.from == 0.1);
        CHECK(n_vec[1].iv.to == 0.2);
        CHECK(n_vec[1].iv2.id == 2);
        CHECK(n_vec[1].iv2.from == 0.5);
        CHECK(n_vec[1].iv2.to == 0.6);


        CHECK(n_vec[2].dist == doctest::Approx(1.39107));
        CHECK(n_vec[2].iv.id == 0);
        CHECK(n_vec[2].iv.from == 0.1);
        CHECK(n_vec[2].iv.to == 0.2);
        CHECK(n_vec[2].iv2.id == 3);
        CHECK(n_vec[2].iv2.from == 0.7);
        CHECK(n_vec[2].iv2.to == 0.8);

    }

}