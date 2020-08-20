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
void Trie::insertItem(const std::string& word, int value) {
    struct TrieNode *currNode = rootNode;
    for (int i = 0; i < word.size(); ++i) {
        int index = (int) (word[i] - 'a');
        currNode->children[index] = new struct TrieNode();
        ++(currNode->childrenCount);
        currNode = currNode->children[index];
    }
    currNode->value = value;
    currNode->isWord = true;
}

/**
 * Function to remove a word entry from the Trie Data structure if it exists.
 * @param word
 */
void Trie::deleteItem(const std::string& word) {
    recursiveDeleteEntry_(rootNode, word, 0);
}


/**
 * Helper function for destructor.
 * @param node
 */
void Trie::recursiveDeleteNode_(struct TrieNode *node) {
    if (node == nullptr) {
        return;
    }

    for (auto child: node->children) {
        recursiveDeleteNode_(child);
    }

    delete node;
    node = nullptr;
}

/**
 * Helper function for clearing an entry from the Trie data structure.
 * @param node
 * @param word
 * @param depth
 */
bool Trie::recursiveDeleteEntry_(struct TrieNode *node, const std::string& word, int depth) {
    if (node == nullptr) {
        return false;
    }

    int index = (int) (word[depth] - 'a');
    bool shouldDeleteChild = recursiveDeleteEntry_(node->children[index], word, depth+1);
    if (shouldDeleteChild) {
        delete node->children[index];
        node->children[index] = nullptr;
        node->childrenCount--;
    }

    if ((depth+1) == word.size()) {
        if(node->isWord) {
            node->isWord = false;
            node->value = 0;
        }
    }

    return node->childrenCount == 0;
}

/**
 * Checks if the word key exists in the Trie. Returns true if it exists else false.
 * @param word
 * @return
 */
[[nodiscard]] bool Trie::hasKey(const std::string& word) const {
    TrieNode *currNode = rootNode;
    for (int i = 0; i < word.size(); ++i) {
        int index = (int) (word[i] - 'a');
        if (currNode->children[index] == nullptr) {
            return false;
        }
        currNode = currNode->children[index];
    }
    return true;
}

/**
 * Gets the value of a word key if it exists else throws out of range exception.
 * @param word
 * @return
 */
[[nodiscard]] int Trie::getValue(const std::string& word) const {
    TrieNode *currNode = rootNode;
    for (int i = 0; i < word.size(); ++i) {

        int index = (int) (word[i] - 'a');
        if (currNode->children[index] == nullptr) {
            throw std::out_of_range("This word key does not exist");
        }
        currNode = currNode->children[index];
    }
    return currNode->value;
}