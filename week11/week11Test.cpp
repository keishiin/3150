#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../doctest/doctest.h"
#include "week11.h"

TEST_CASE("TEST") {
    SUBCASE("PRODUCT FRACTION") {
        Fraction a;
        Fraction b; 
        Fraction c;

        a.first = 1; 
        a.second = 2;

        b.first = 3; 
        b.second = 4;

        c = product_frac(a, b);

        CHECK(c.first == 3);
        CHECK(c.second == 8);

    }

    SUBCASE("Matrix Create and Fill") {
        Matrix mat1 = createMatarix(2, 2);

        add_matrix(mat1, 0, 0, 1, 2);
        add_matrix(mat1, 0, 1, 3, 4);
        add_matrix(mat1, 1, 0, 5, 6);
        add_matrix(mat1, 1, 1, 7, 8);

        CHECK(mat1[0][0].first == 1);
        CHECK(mat1[0][0].second == 2);
        CHECK(mat1[0][1].first == 3);
        CHECK(mat1[0][1].second == 4);
        CHECK(mat1[1][0].first == 5);
        CHECK(mat1[1][0].second == 6);
        CHECK(mat1[1][1].first == 7);
        CHECK(mat1[1][1].second == 8);

    }

    SUBCASE("MULT MATRIX") {
        Matrix mat1 = createMatarix(2, 2);
        Matrix mat2 = createMatarix(2, 2);


        add_matrix(mat1, 0, 0, 1, 2);
        add_matrix(mat1, 0, 1, 3, 4);
        add_matrix(mat1, 1, 0, 5, 6);
        add_matrix(mat1, 1, 1, 7, 8);

        add_matrix(mat2, 0, 0, 1, 2);
        add_matrix(mat2, 0, 1, 3, 4);
        add_matrix(mat2, 1, 0, 5, 6);
        add_matrix(mat2, 1, 1, 7, 8);

        Matrix mat3 = prod_matrix(mat1, mat2);     


        CHECK(mat3[0][0].first == 84);
        CHECK(mat3[0][0].second == 96);
        CHECK(mat3[0][1].first == 264);
        CHECK(mat3[0][1].second == 256);
        CHECK(mat3[1][0].first == 660);
        CHECK(mat3[1][0].second == 576);
        CHECK(mat3[1][1].first == 2136);
        CHECK(mat3[1][1].second == 1536);
           
    }

}