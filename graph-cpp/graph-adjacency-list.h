//
// Created by sanjay on 8/27/20.
//

#ifndef GRAPH_CPP_GRAPH_ADJACENCY_LIST_H
#define GRAPH_CPP_GRAPH_ADJACENCY_LIST_H

#include <iostream>
#include <vector>

class GraphAdjacecnyList {
    GraphAdjacecnyList() = default;

    ~GraphAdjacecnyList() = default;

    void addVertex();

    void updateEdgeWeight(const int &row, const int &col, const int &weight);

    int vertexCount();

    int operator()(const int &row, const int &col) const;

    [[nodiscard]] int getEdgeWeight(const int &row, const int &col) const;

    [[nodiscard]] bool hasEdge(const int &row, const int &col) const;

    void printGraph();

private:
    std::vector<std::vector<std::pair<int, int>>> graph;
};


#endif //GRAPH_CPP_GRAPH_ADJACENCY_LIST_H
