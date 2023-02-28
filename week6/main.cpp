#include "week6.h"


int main() {
    
    std::vector<int_vector> vec;
    std::string file;

    cout << "Enter file name: " << endl; 
    cin >> file;

    read_vectors_pairs(vec, file);
    print_vectors(vec);

    return 0;
}