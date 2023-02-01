#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../doctest/doctest.h"
#include "./do_all_work.h"

TEST_CASE("Test lab 2 functions") {
  SUBCASE("check for diff n but same r "){
    CHECK(do_all_work(5, 10000) == 2846);
    CHECK(do_all_work(10, 10000) == 1610);
    CHECK(do_all_work(25, 10000) == 818);
    CHECK(do_all_work(45, 10000) == 589);
    CHECK(do_all_work(120, 10000) == 231);
  };
  SUBCASE("varying number of trials for same n") {
    CHECK(do_all_work(25, 1000) == 104);
    CHECK(do_all_work(25, 10000) == 853);
    CHECK(do_all_work(25, 25000) == 2188);
    CHECK(do_all_work(25, 35000) == 3141);
    CHECK(do_all_work(25, 50000) == 4379);
  };
}

