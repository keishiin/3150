#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../doctest/doctest.h"
#include "lab9.h"

TEST_CASE("TEST") {


        SUBCASE("mult"){
        Matrix mat1 = createMatarix(2, 2);
        Matrix mat2 = createMatarix(2, 2);

        add_matrix(mat1, 0, 0, 1);
        add_matrix(mat1, 0, 1, 3);
        add_matrix(mat1, 1, 0, 5);
        add_matrix(mat1, 1, 1, 7);

        add_matrix(mat2, 0, 0, 1);
        add_matrix(mat2, 0, 1, 3);
        add_matrix(mat2, 1, 0, 5);
        add_matrix(mat2, 1, 1, 7);

        Matrix mat3 = prod_matrix(mat1, mat2);     


        CHECK(mat3[0][0] == 17);
        CHECK(mat3[0][1] == 25);
        CHECK(mat3[1][0] == 41);
        CHECK(mat3[1][1] == 65);

    }

        SUBCASE("norm"){
        Matrix mat1 = createMatarix(2, 2);

        add_matrix(mat1, 0, 0, 1);
        add_matrix(mat1, 0, 1, 3);
        add_matrix(mat1, 1, 0, 5);
        add_matrix(mat1, 1, 1, 7);

        
        normalize_and_divide_by_2(mat1, 2, 2);

        CHECK(mat1[0][0] != 1);
        CHECK(mat1[0][1] != 3);
        CHECK(mat1[1][0] != 5);
        CHECK(mat1[1][1] != 7);

    }


}