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

void unordered_vec_pairs (std::vector<double_vector> &vec, std::vector<idek> &new_vec){

    // make the pairs
    for (int i = 0; i < vec.size()-1; i++) {
        for (int j = i+1; j < vec.size(); j++) {

            idek idk;

            idk.iv = vec[i];
            idk.iv2 = vec[j];
            idk.dist = cos_distance(vec[i], vec[j]);

            new_vec.push_back(idk);
        }
    }
}


void print_vectors(std::vector<idek> &new_vec){

    // std::vector<idek> new_vec;

    // // make the pairs
    // for (int i = 0; i < vec.size()-1; i++) {
    //     for (int j = i+1; j < vec.size(); j++) {

    //         idek idk;

    //         idk.iv = vec[i];
    //         idk.iv2 = vec[j];
    //         idk.dist = cos_distance(vec[i], vec[j]);

    //         new_vec.push_back(idk);
    //     }
    // }

    sort(new_vec.begin(), 
    new_vec.end(), 
    [](const idek &left, const idek &right) {
        return left.dist < right.dist;
    });

    for (auto v : new_vec) {
        cout << "cos_dist: "<< v.dist << ": " << "(" << v.iv.id << ", " << v.iv.from << ", " << v.iv.to << ")" << " " << "(" << v.iv2.id << ", " << v.iv2.from << ", " << v.iv2.to << ")" << endl;
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