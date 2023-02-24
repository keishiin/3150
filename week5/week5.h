#ifndef __WEEK5_
#define __WEEK5_

#include <iostream>
#include <string>
#include <vector>

using namespace std; 

struct student {
    int id;
    string name;
    int final;
    int midterm;
    vector<int> hw_grades;
};

double compute_class_score(const student &s);
void output_student_data(const student &s);
student create_student(int id, string name, int midterm, int final, vector<int> hw_grades);
student get_student_struct_data();

#endif