//
// Created by sanjay on 8/26/20.
//

#include "graph-adjacency-matrix.h"


void Graph::addVertex() {
    for (auto &row: graphEdges) {
        row.push_back(0);
    }
    graphEdges.emplace_back(std::vector<int>(graphEdges.size() + 1, 0));
}

void Graph::updateEdgeWeight(const int &row, const int &col, const int &weight) {
    graphEdges[row][col] = weight;
}

int Graph::vertexCount() {
    return graphEdges.size();
}

int Graph::operator()(const int &row, const int &col) const {
    return graphEdges[row][col];
}

int Graph::getEdgeWeight(const int &row, const int &col) const {
    return graphEdges[row][col];
}

bool Graph::hasEdge(const int &row, const int &col) const {
    return graphEdges[row][col] != 0;
}

void Graph::printGraph() {
    for (auto &graphRow: graphEdges) {
        for (auto &edgeVal: graphRow) {
            std::cout << edgeVal << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
