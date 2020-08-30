//
// Created by sanjay on 8/27/20.
//

#include <iostream>
#include "graph-adjacency-list.h"

int main() {
    GraphAdjacecnyList testGraphObj;

    testGraphObj.addVertex();
    testGraphObj.addVertex();
    testGraphObj.printGraph();

    testGraphObj.addVertex();
    testGraphObj.addVertex();
    testGraphObj.updateEdgeWeight(1, 0, 3);
    testGraphObj.updateEdgeWeight(2, 1, 5);
    testGraphObj.updateEdgeWeight(2, 3, 7);
    testGraphObj.updateEdgeWeight(3, 2, 9);
    testGraphObj.printGraph();

    std::cout << "Vertex Count: " << testGraphObj.vertexCount() << std::endl;
    std::cout << "Edge Weight(3->2: 9): " << testGraphObj(3,2) << std::endl;
    std::cout << "Edge Weight(3->2: 9): " << testGraphObj.getEdgeWeight(3,2) << std::endl;
    std::cout << "Has Edge (3->2: True): " << testGraphObj.hasEdge(3,2) << std::endl;
    std::cout << "Has Edge (4->1: False): " <<testGraphObj.hasEdge(4, 1) <<  std::endl;

    return 0;
}