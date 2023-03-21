#ifndef __WEEK8_
#define __WEEK8_

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

struct graph {
    int vertices;
    int edges = 0;
    vector<vector<int>> adjList; 
};

void make_adj_list(graph &g, int n, string &fs);
void print_adj_list(graph &g);
int return_amt_edges(graph &g);
int return_vertex_amt(graph &g);
void adj_vertices(graph &g, vector<int> &vec, int v);

#endif