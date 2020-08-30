//
// Created by sanjay on 8/27/20.
//
// This implementation breaks if a node of the graph is deleted, or makes it more complex to delete a node.

#include "graph-adjacency-list.h"



void GraphAdjacecnyList::addVertex() {
    graph.emplace_back(std::vector<std::pair<int, int>>());
}

void GraphAdjacecnyList::updateEdgeWeight(const int &src, const int &dst, const int &weight) {
    if (src >= graph.size()) {
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

int GraphAdjacecnyList::operator()(const int &src, const int &dst) const {
    if (src >= graph.size()) {
        throw std::out_of_range("The edge does not exist");
    }
    for (auto &edgePair: graph[src]) {
        if (edgePair.first == dst) {
            return edgePair.second;
        }
    }
    throw std::out_of_range("This edge does not exist");
}

int GraphAdjacecnyList::getEdgeWeight(const int &src, const int &dst) const {
    return this->operator()(src, dst);
}


bool GraphAdjacecnyList::hasEdge(const int &src, const int &dst) const {
    if (src >= graph.size()) {
        return false;
    }

    for (auto &edgePair: graph[src]) {
        if (edgePair.first == dst) {
            return true;
        }
    }
    return false;
}

void GraphAdjacecnyList::printGraph() {
    for (int srcIdx = 0; srcIdx < graph.size(); ++srcIdx) {
        std::cout << srcIdx << " -> [ ";
        for (auto &pairEdge: graph[srcIdx]) {
            std::cout << "(" << pairEdge.first << ", " << pairEdge.second << "), ";
        }
        std::cout << "]" << std::endl;
    }
}