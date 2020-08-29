//
// Created by sanjay on 8/27/20.
//

#include "graph-adjacency-list.h"

void GraphAdjacecnyList::addVertex() {
    graph.emplace_back(std::vector<std::pair<int, int>>());
}

void GraphAdjacecnyList::updateEdgeWeight(const int &src, const int &dst, const int &weight) {
    if (src >= graph.size()){
        return;
    }

    for (auto &edgePair: graph[src]) {
        if (edgePair.first == dst) {
            edgePair.second = weight;
            return;
        }
    }

    graph[src].emplace_back(std::pair<int, int>(dst, weight));
}


int GraphAdjacecnyList::vertexCount() {
   return graph.size();
}

