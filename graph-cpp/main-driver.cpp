//
// Created by sanjay on 8/26/20.
//


#include <iostream>
#include "graph-adjacency-matrix.h"

int main() {
    Graph graphObj = Graph();

    graphObj.addVertex();
    graphObj.addVertex();
    graphObj.addVertex();
    graphObj.printGraph();

    graphObj.updateEdgeWeight(0, 1, 4);
    graphObj.updateEdgeWeight(0, 2, 2);
    graphObj.updateEdgeWeight(1, 2, 1);
    graphObj.printGraph();

    std::cout << graphObj.vertexCount() << std::endl;
    std::cout << graphObj(0, 1) << std::endl;
    std::cout << graphObj.getEdgeWeight(0, 1) << std::endl;
    std::cout << graphObj.hasEdge(0, 1) << std::endl;
    std::cout << graphObj.hasEdge(0, 0) << std::endl;

    return 0;
}
