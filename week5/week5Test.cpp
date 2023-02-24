#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../doctest/doctest.h"
#include "week5.h"


TEST_CASE("tests") {

    SUBCASE("check student creation") {

        // student 1
        int h_grades[] = {90, 24, 56, 70, 80};
        vector<int> hw_grades;

        for (auto grade: h_grades) {
            hw_grades.push_back(grade);
        }

        student s = create_student(123456, "Lebron James", 90, 85, hw_grades);

        CHECK(s.id == 123456);
        CHECK(s.name == "Lebron James");
        CHECK(s.midterm == 90);
        CHECK(s.final == 85);
        CHECK(s.hw_grades == hw_grades);


        // student 2
        int h_grades2[] = {45, 56, 76, 89, 100};
        vector<int> hw_grades2;

        for (auto grade: h_grades2) {
            hw_grades2.push_back(grade);
        }

        student s2 = create_student(987654321, "Tom Brady", 76, 90, hw_grades2);

        CHECK(s2.id == 987654321);
        CHECK(s2.name == "Tom Brady");
        CHECK(s2.midterm == 76);
        CHECK(s2.final == 90);
        CHECK(s2.hw_grades == hw_grades2);
    }

    SUBCASE("final course grade") {

        // student 1
        int h_grades[] = {90, 24, 56, 70, 80};
        vector<int> hw_grades;

        for (auto grade: h_grades) {
            hw_grades.push_back(grade);
        }

        student s = create_student(123456, "Lebron James", 90, 85, hw_grades);

        double final_scores1 = compute_class_score(s);
        CHECK(final_scores1 == 78.1);

        // student 2
        int h_grades2[] = {45, 56, 76, 89, 100};
        vector<int> hw_grades2;

        for (auto grade: h_grades2) {
            hw_grades2.push_back(grade);
        }

        student s2 = create_student(987654321, "Tom Brady", 76, 90, hw_grades2);

        double final_scores2 = compute_class_score(s2);
        CHECK(final_scores2 == 79.08);

        // student 3
        int h_grades3[] = {100, 100, 100, 100, 100};
        vector<int> hw_grades3;

        for (auto grade: h_grades3) {
            hw_grades3.push_back(grade);
        }

        student s3 = create_student(456, "Chrles", 100, 100, hw_grades3);

        double final_scores3 = compute_class_score(s3);
        CHECK(final_scores3 == 100.0);

        // student 4 
        int h_grades4[] = {0};
        vector<int> hw_grades4;

        for (auto grade: h_grades4) {
            hw_grades4.push_back(grade);
        }

        student s4 = create_student(456, "Davod", 0.0, 0.0, hw_grades4);

        double final_scores4 = compute_class_score(s4);
        CHECK(final_scores4 == 0.0);
    }
}