//
// Created by sanjay on 8/26/20.
//

#ifndef GRAPH_CPP_GRAPH_ADJACENCY_MATRIX_H
#define GRAPH_CPP_GRAPH_ADJACENCY_MATRIX_H

#include <iostream>
#include <vector>

class Graph {
public:
    Graph() = default;

    ~Graph() = default;

    void addVertex();

    void updateEdgeWeight(const int &row, const int &col, const int &weight);

    int vertexCount();

    int operator()(const int &row, const int &col) const;

    [[nodiscard]] int getEdgeWeight(const int &row, const int &col) const;

    [[nodiscard]] bool hasEdge(const int &row, const int &col) const;

    void printGraph();

private:
    std::vector<std::vector<int>> graphEdges;
};

#endif //GRAPH_CPP_GRAPH_ADJACENCY_MATRIX_H
