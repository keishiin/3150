#ifndef __WEEK5_
#define __WEEK5_

#include <iostream>
#include <string>
#include <vector>

using namespace std; 

struct int_vector {
    int id;
    int from;
    int to;

    int_vector(const int_vector & i_v) : id(i_v.id), from(i_v.from), to(i_v.to) {}; // copy constructor

    int_vector() : id(-1), from(0), to(0) {}; // basic constructor

    // int_vector (int id, int f, int t) {
    //     id = id
    // }
};


void read_vectors_pairs(std::vector<int_vector> &vec, std::string &fs);
void print_vectors(std::vector<int_vector> &vec);


#endif