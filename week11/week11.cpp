#include "week11.h"

Fraction product_frac(Fraction& a, Fraction& b){

    int n = a.first * b.first;
    int d = a.second * b.second;

   return make_pair(n, d);
}

Fraction add_frac(const Fraction& a, const Fraction& b) {

    int n= a.first * b.second + b.first * a.second;
    int d = a.second * b.second;

    return make_pair(n, d);

}

Matrix createMatarix(int n, int m){

    Matrix mat(m, std::vector<Fraction>(n));
    return mat;
}

Matrix prod_matrix(Matrix& a, Matrix& b){

    int n = a.size();
    int m = a[0].size(); 
    int p = b[0].size(); 
   
    Matrix c(n, vector<Fraction>(p, make_pair(0, 1)));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < m; k++) {
                // Fraction p = product_frac(a[i][k], b[k][j]);
                c[i][j] = add_frac(c[i][j], product_frac(a[i][k], b[k][j]));
            }
        }
    }
    return c;

}

void add_matrix(Matrix& mat, int row, int col, int n, int d){
    Fraction frac = make_pair(n, d);
    mat[row][col] = frac;
}

ostream& operator<<(ostream& os, const Fraction& frac) {
    os << frac.first << "/" << frac.second;
    return os;
}

void print_matrix(Matrix& a){
    int n = a.size();
    int m = a[0].size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}