#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../doctest/doctest.h"

#include <iostream>
#include "ECCalculator.h"
#include "ECNumbers.h"

using namespace std;
using namespace ECNamespace;

TEST_CASE("Testing ...") {
  SUBCASE("EC DOUDBLE") {
    CHECK(ECDoubleN(2) == 4);
    CHECK(ECDoubleN(4) == 8);
    CHECK(ECDoubleN(6) == 12);
    CHECK(ECDoubleN(8) == 16);
    CHECK(ECDoubleN(10) == 20);
  }
  SUBCASE("ECFOUR TIMES") {
    CHECK(ECFourTimesN(2) == 8);
    CHECK(ECFourTimesN(4) == 16);
    CHECK(ECFourTimesN(6) == 24);
    CHECK(ECFourTimesN(8) == 32);
    CHECK(ECFourTimesN(10) == 40);
  }

  SUBCASE("EC Square TIMES") {
    CHECK(ECSquareN(2) == 4);
    CHECK(ECSquareN(4) == 16);
    CHECK(ECSquareN(6) == 36);
    CHECK(ECSquareN(8) == 64);
    CHECK(ECSquareN(10) == 100);
  }


}
