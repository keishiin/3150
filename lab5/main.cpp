#include "lab5.h"

int main() {

    std::vector<double_vector> vec;
    std::string file;

    cout << "Enter file name: " << endl; 
    cin >> file;

    read_vectors_pairs(vec, file);

    std::vector<idek> n_vec;

    unordered_vec_pairs(vec, n_vec);

    print_vectors(n_vec);

    return 0;
}