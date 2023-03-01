#ifndef __LAB5_
#define __LAB5_

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std; 

struct double_vector {
    int id;
    double from;
    double to;

    double_vector(const double_vector & i_v) : id(i_v.id), from(i_v.from), to(i_v.to) {}; // copy constructor

    double_vector() : id(-1), from(0.0), to(0.0) {}; // basic constructor

};


struct cos_distance_vector {
    double c_distance;
    double_vector i_v;
    double_vector i_v2;
}

void read_vectors_pairs(std::vector<double_vector> &vec, std::string &fs);
void print_vectors(std::vector<double_vector> &vec);
double vec_magnitude(double_vector &vec);
double dot_product(double_vector &vec, double_vector &vec2);
double other_prod(double_vector &vec, double_vector &vec2);
double cos_distance(double_vector &vec, double_vector&vec2);


#endif