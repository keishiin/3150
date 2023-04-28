#ifndef __lab9_
#define __lab9_

// #include "../bigint/bigint.h" idk how to compile with this added so using ints 
#include <iostream>
#include <vector>
#include <memory>
#include <utility>

using namespace std;

using Matrix = std::vector<std::vector<int>>;

Matrix createMatarix(int n, int m);
Matrix prod_matrix(Matrix& a, Matrix& b);
Matrix get_zeroes_edges(Matrix& m); // not sure what this function is meant to do
void normalize_and_divide_by_2(Matrix& m, int cols, int rows);
void add_matrix(Matrix& mat, int row, int col, int n);


#endif