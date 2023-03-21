#include "week8.h"


void make_adj_list(graph &g, int n, string &fs){
    std::ifstream myfile(fs, std::ios_base::in);

    if (myfile.peek() == std::ifstream::traits_type::eof()) {
        myfile.close();
        throw("file is empty");
    }

    int w, y;

    // vector<int> v;

    while (myfile >> w >> y) {
        vector<int> v;
        v.push_back(int(w));
        v.push_back(int(y));

        g.adjList.push_back(v);
        g.edges += 1;

    }
    g.vertices = n;

    myfile.close();
}

int return_amt_edges(graph &g){
    return g.edges;
}

int return_vertex_amt(graph &g){
    return g.vertices;
}

void adj_vertices(graph &g, vector<int> &vec, int v){
    for(auto &x : g.adjList[v]){
        vec.push_back(x);
    }
}

void print_adj_list(graph &g){
        for (int i = 0; i < g.vertices; i++)
    {
        // print the current vertex number
        cout << i << " ——> ";
 
        // print all neighboring vertices of a vertex `i`
        for (int v: g.adjList[i]) {
            cout << v << " ";
        }
        cout << endl;
    }
}