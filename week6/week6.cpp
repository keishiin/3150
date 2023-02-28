#include "week6.h"
#include <fstream>
#include <algorithm>

void read_vectors_pairs(std::vector<int_vector> &vec, std::string &fs){

    std::ifstream myfile(fs, std::ios_base::in);

    if (myfile.peek() == std::ifstream::traits_type::eof()) {
        myfile.close();
        throw("file is empty");
    }

    int from, to;
    int id = 0;

    while (myfile >> from >> to) {
        int_vector i_v;

        i_v.from = from; 
        i_v.to = to;
        i_v.id = id;

        vec.push_back(i_v);
        id++;
    }

    myfile.close();

}

void print_vectors(std::vector<int_vector> &vec){

    sort(vec.begin(), 
    vec.end(), 
    [](const int_vector &left, const int_vector &right) {
        return left.id > right.id;
    });

    for (auto v : vec) {
        cout << v.id << ": "<< v.from << " " << v.to << endl;
    }
}