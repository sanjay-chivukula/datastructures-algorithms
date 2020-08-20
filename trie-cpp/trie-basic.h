//
// Created by sanjay on 8/12/20.
//

#ifndef TRIE_CPP_TRIE_BASIC_H
#define TRIE_CPP_TRIE_BASIC_H

#include <iostream>

// Assumption: All characters are lower case english alphabets.
static const int CHARACTER_COUNT = 26;


struct TrieNode {
    // Actual data for the Trie node.
    int value{0};

    // For managing the Trie.
    bool isWord{false};
    int childrenCount{0};
    TrieNode *children[CHARACTER_COUNT]{nullptr};
};


class Trie {

public:
    Trie();

    ~Trie();

    void insertItem(const std::string& word, int value);

    void deleteItem(const std::string& word);

    [[nodiscard]] bool hasKey(const std::string& word) const;

    [[nodiscard]] int getValue(const std::string& word) const;             // throws error if word/key doesn't exist.

private:
    void recursiveDeleteNode_(struct TrieNode *node);

    bool recursiveDeleteEntry_(struct TrieNode *node, const std::string& word, int depth = 0);

private:
    struct TrieNode *rootNode{nullptr};
};

#endif //TRIE_CPP_TRIE_BASIC_H
