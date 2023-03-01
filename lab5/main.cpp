#include "lab5.h"

int main() {

    std::vector<double_vector> vec;
    std::string file = "vec_list.txt";

    // cout << "Enter file name: " << endl; 
    // cin >> file;

    read_vectors_pairs(vec, file);

    print_vectors(vec);

    return 0;
}