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
    recursiveDeleteNode_(rootNode);
}


/**
 * Function to insert a word into the Trie Data structure.
 * @param word
 * @param value
 */
void Trie::insertItem(const std::string word, int value) {
     struct TrieNode *currNode = rootNode;
     for (auto character: word) {
         int index = (int) (character - 'a');
         currNode->children[index] = new struct TrieNode();
         currNode = currNode->children[index];
     }
     currNode->value = value;
}

/**
 * Function to remove a word entry from the Trie Data structure if it exists.
 * @param word
 */
void Trie::deleteItem(const std::string word) {
    // TODO: write the implementation.
}


/**
 * Helper function for destructor.
 * @param node
 */
void recursiveDeleteNode_(struct TrieNode* node) {
    if (node == nullptr) {
        return;
    }

    for (auto child: node->children) {
        recursiveDeleteNode_(child);
    }

    delete node;
    node = nullptr;
}

void Trie::recursiveDeleteEntry_(struct TrieNode *node) {
    // TODO: Write the implementation.
}