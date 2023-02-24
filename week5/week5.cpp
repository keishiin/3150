#include<iostream>
#include "week5.h"

using namespace std;


double compute_class_score(const student &s){
    double final_toal_score{0.0}, sum{0.0}, hw_avg{0.0};

    for (auto h_score: s.hw_grades) {
        sum += h_score;
    }

    hw_avg = sum / s.hw_grades.size();

    final_toal_score = 0.3 * s.midterm + 0.3 * s.final + 0.4 * hw_avg;

    return final_toal_score;  
}

void output_student_data(const student &s){
    
    cout << s.name << " earned an " << s.final << " on their final" << endl;

    for (auto h_score : s.hw_grades) {
        cout << h_score << " ";
    }

    cout << endl; 

    double final_toal_score = compute_class_score(s);

    cout << "Final total class score" << final_toal_score << endl;
}

student create_student(int id, string name, int midterm, int final, vector<int> hw_grades) {
    student s;
    
    s.id = id;
    s.name = name; 
    s.midterm = midterm;
    s.final = final; 
    s.hw_grades = hw_grades;

    return s; 
}

student get_student_struct_data(){

    student s; 
    cout << "Enter student id: ";
    cin >> s.id;

    cout << "Enter students name: ";
    cin >> s.name;

    cout << "Enter students midterm grade : ";
    cin >> s.midterm;

    cout << "Enter students final grade: ";
    cin >> s.final;

    cout << "Enter a homework score: ";
    int score; 
    while (cin >> score) {
        cout << "Enter a homework score(^D to exit): ";
        s.hw_grades.push_back(score);
    }

}