#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../doctest/doctest.h"
#include "week4.h"


TEST_CASE("testing") {
    SUBCASE("push/pop stack") {
        std::string file = "numbers.txt";
        std::stack<int> s;
        pushStack(s, file);

        CHECK(s.size() == 6);

        for (int i = 0; i < 7; i++) {
            CHECK(popStack(s) == 6-i);
        }
        CHECK(s.empty() == true);
    }

    SUBCASE("push/pop stack neg sum") {
        std::string file = "negNumbers.txt";
        std::stack<int> s;
        CHECK_THROWS(pushStack(s, file));
    }

    SUBCASE("queue/dequeue") {
        std::string file = "numbers.txt";
        std::queue<int> q; 

        pushQ(q, file);

        CHECK(q.size() == 6);

        for (int i = 1; i < 7; i++) {
            CHECK(popQ(q) == i);
        }
        CHECK(q.empty() == true);
    }
} 

// int main () {
//     std::string file = "numbers.txt";
//     std::stack<int> s;

//     pushStack(s, file);
// }