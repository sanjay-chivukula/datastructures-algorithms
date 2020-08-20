//
// Created by sanjay on 8/12/20.
//

#include <iostream>
#include "trie-basic.h"

int main() {
    std::cout << "Trie Basic Implementation" << std::endl;

    // writing simple tests to see if the implementation works.

    // construction:
    Trie testTrie;

    testTrie.insertItem("testword", 23);
    if (testTrie.hasKey("testword")) {
        std::cout << "Insertion and Entry check works!" << std::endl;
    } else {
        std::cout << "Insertion or Entry check failed!" << std::endl;
    }

    try {
        std::cout << "Value: " << testTrie.getValue("testword") << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "Error in implementation" << std::endl;
    }

    testTrie.deleteItem("testword");
    if (testTrie.hasKey("testword")) {
        std::cout << "Delete Item failed!" << std::endl;
    } else {
        std::cout << "Delete Item works!" << std::endl;
    }

    try {
        std::cout << "Value: " << testTrie.getValue("testword") << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "Get value Implementation works! Error was thrown";
    }


    return 0;
};