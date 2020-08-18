//
// Created by sanjay on 8/12/20.
//

#ifndef TRIE_CPP_TRIE_BASIC_H
#define TRIE_CPP_TRIE_BASIC_H

#include <iostream>


static const int CHARACTER_COUNT = 26;


struct TrieNode {
    int value;
    TrieNode *children[CHARACTER_COUNT]{nullptr};
};


class Trie {

public:
    Trie();

    ~Trie();

    void insertItem(const std::string word, int value);

    bool deleteItem(const std::string word);                // returns true even if item doesn't exist.

    bool hasKey(const std::string word) const;

    int getValue(const std::string word) const;             // throws error if word/key doesn't exist.

private:
    struct TrieNode *rootNode{nullptr};

private:
    void recursiveDelete_(TrieNode *node);
};

#endif //TRIE_CPP_TRIE_BASIC_H
