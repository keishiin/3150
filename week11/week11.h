#ifndef __WEEK11_
#define __WEEK11_

// #include "../bigint/bigint.h" idk how to compile with this added so using ints 
#include <iostream>
#include <vector>
#include <memory>
#include <utility>

using namespace std;

using Fraction = pair<int, int>;
using Matrix = std::vector<std::vector<Fraction>>;

Fraction product_frac(Fraction& a, Fraction& b);
Fraction add_frac(const Fraction& a, const Fraction& b);
Matrix createMatarix(int n, int m);
Matrix prod_matrix(Matrix& a, Matrix& b);
void add_matrix(Matrix& mat, int row, int col, int n, int d);
void print_matrix(Matrix& a);


#endif