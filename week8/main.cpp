#include "week8.h"


int main() {
    
    graph g;
    std::string file = "test.txt";

    make_adj_list(g, 6, file);

    print_adj_list(g);

    return 0;
}