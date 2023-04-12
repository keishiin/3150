#include "week11.h"


int main() {

    Matrix mat1 = createMatarix(2, 2);
    Matrix mat2 = createMatarix(2, 2);


    add_matrix(mat1, 0, 0, 1, 2);
    add_matrix(mat1, 0, 1, 3, 4);
    add_matrix(mat1, 1, 0, 5, 6);
    add_matrix(mat1, 1, 1, 7, 8);

    add_matrix(mat2, 0, 0, 1, 2);
    add_matrix(mat2, 0, 1, 3, 4);
    add_matrix(mat2, 1, 0, 5, 6);
    add_matrix(mat2, 1, 1, 7, 8);

    Matrix mat3 = prod_matrix(mat1, mat2);

    cout << "------------mat1-----------" << endl; 
    print_matrix(mat1);
    cout << "---------mat2-----------" << endl; 
    print_matrix(mat1);
    cout << "------------mat3-----------" << endl; 
    print_matrix(mat3);
    cout << "-----------------------" << endl; 

    return 0;
}