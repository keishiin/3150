#include "lab5.h"
#include <fstream>
#include <algorithm>

void read_vectors_pairs(std::vector<double_vector> &vec, std::string &fs){

    std::ifstream myfile(fs, std::ios_base::in);

    if (myfile.peek() == std::ifstream::traits_type::eof()) {
        myfile.close();
        throw("file is empty");
    }

    double from, to;
    int id = 0;

    while (myfile >> from >> to) {
        double_vector i_v;

        i_v.from = from; 
        i_v.to = to;
        i_v.id = id;

        vec.push_back(i_v);
        id++;
    }

    myfile.close();

}

void print_vectors(std::vector<double_vector> &vec){

    sort(vec.begin(), 
    vec.end(), 
    [](const double_vector &left, const double_vector &right) {
        return left.id > right.id;
    });

    for (auto v : vec) {
        cout << v.id << ": "<< v.from << " " << v.to << endl;
    }
}

double vec_magnitude(double_vector &vec){

    double x_pow = pow(double(vec.from), 2);
    double y_pow = pow(double(vec.to), 2);

    double vec_mag = sqrt(x_pow + y_pow);

    return vec_mag;
}

double dot_product(double_vector &vec, double_vector &vec2){

    double dot_prod = (vec.from * vec2.from) + (vec.to * vec2.to);

    return dot_prod;
}

double other_prod(double_vector &vec, double_vector &vec2){

    double other_prod = vec_magnitude(vec) + vec_magnitude(vec2);

    return other_prod;
}

double cos_distance(double_vector &vec, double_vector &vec2){

    double c_distance = acos(dot_product(vec, vec2) / other_prod(vec, vec2));

    return c_distance;

}