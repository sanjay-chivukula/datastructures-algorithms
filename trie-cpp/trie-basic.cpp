//
// Created by sanjay on 8/12/20.
//

#include "trie-basic.h"

/**
 * Constructor, creates an empty root TrieNode with nullptr for each of its children.
 */
Trie::Trie() {
    rootNode = new struct TrieNode();
}


/**
 * Destructor, deletes each TrieNode in a recursive DFS fashion.
 */
Trie::~Trie() {
    recursiveDelete_(rootNode);
}

/**
 * Helper function for destructor.
 * @param node
 */
void recursiveDelete_(TrieNode* node) {
    if (node == nullptr) {
        return;
    }

    for (auto child: node->children) {
        recursiveDelete_(child);
    }

    delete node;
    node = nullptr;
}