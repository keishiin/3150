#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../doctest/doctest.h"
#include "week8.h"

TEST_CASE("TEST") {
    SUBCASE("test building the list"){
        graph g;
        std::string file = "test.txt";

        make_adj_list(g, 6, file);

        CHECK(g.vertices == 6);
        CHECK(g.edges == 7);

        CHECK(g.adjList[0][0] == 0);
        CHECK(g.adjList[0][1] == 1);

        CHECK(g.adjList[1][0] == 1);
        CHECK(g.adjList[1][1] == 2);

        CHECK(g.adjList[2][0] == 2);
        CHECK(g.adjList[2][1] == 0);

        CHECK(g.adjList[3][0] == 2);
        CHECK(g.adjList[3][1] == 1);

        CHECK(g.adjList[4][0] == 3);
        CHECK(g.adjList[4][1] == 2);

        CHECK(g.adjList[5][0] == 4);
        CHECK(g.adjList[5][1] == 5);

        CHECK(g.adjList[6][0] == 5);
        CHECK(g.adjList[6][1] == 4);        
    }

    SUBCASE("test amt of edges"){
        graph g;
        std::string file = "test.txt";

        make_adj_list(g, 6, file);

        CHECK(return_amt_edges(g) == 7);
    }

    SUBCASE("test amt of vertices"){
        graph g;
        std::string file = "test.txt";

        make_adj_list(g, 6, file);

        CHECK(return_vertex_amt(g) == 6);
    }

    SUBCASE("adj vertices case 0"){
        graph g;
        vector<int> vertices;
        std::string file = "test.txt";

        make_adj_list(g, 6, file);
        adj_vertices(g, vertices, 0);

        CHECK(vertices[0] == 0);
        CHECK(vertices[1] == 1);
    } 

    SUBCASE("adj vertices case 1"){
        graph g;
        vector<int> vertices;
        std::string file = "test.txt";

        make_adj_list(g, 6, file);
        adj_vertices(g, vertices, 2);

        CHECK(vertices[0] == 2);
        CHECK(vertices[1] == 0);
        CHECK(vertices[2] == 0);
        CHECK(vertices[3] == 0);
    } 

    SUBCASE("adj vertices case 3"){
        graph g;
        vector<int> vertices;
        std::string file = "test.txt";

        make_adj_list(g, 6, file);
        adj_vertices(g, vertices, 4);

        CHECK(2 == 2);
        CHECK(vertices[0] == 3);
        CHECK(vertices[1] == 2);
        CHECK(vertices[2] == 0);
        CHECK(vertices[3] == 0);
        CHECK(vertices[4] == 0);
        CHECK(vertices[5] == 0);
        CHECK(vertices[6] == 0);
        CHECK(vertices[7] == 0);
        CHECK(vertices[8] == 5);
        CHECK(vertices[9] == 0);

    } 

}