#include "lab9.h"


Matrix createMatarix(int n, int m){

    Matrix mat(m, std::vector<int>(n));
    return mat;
}

Matrix prod_matrix(Matrix& a, Matrix& b){

    int n = a.size();
    int m = a[0].size(); 
    int p = b[0].size(); 
   
    Matrix c(n, vector<int>(p, 1));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < m; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return c;

}

void add_matrix(Matrix& mat, int row, int col, int n){
    
    mat[row][col] = n;
}

Matrix get_zeroes_edges(Matrix m){
  // not sure what to do with this
}

void normalize_and_divide_by_2(Matrix &m, int cols, int rows){

    int sum = 0;
    // not sure what the bug is here
    for (int j = 0; j < cols; j++) {
        
        for (int i = 0; i < rows; i++) {
            sum += max(sum, abs(m[i][j]));
        }

        for (int i = 0; i < rows; i++) {
            m[i][j] /= (2 * sum);
        }
    }

}