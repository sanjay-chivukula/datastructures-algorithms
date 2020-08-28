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

    void updateEdgeWeight(const int &src, const int &dst, const int &weight);

    int vertexCount();

    int operator()(const int &src, const int &dst) const;

    [[nodiscard]] int getEdgeWeight(const int &src, const int &dst) const;

    [[nodiscard]] bool hasEdge(const int &src, const int &dst) const;

    void printGraph();

private:
    std::vector<std::vector<std::pair<int, int>>> graph;
};


#endif //GRAPH_CPP_GRAPH_ADJACENCY_LIST_H
