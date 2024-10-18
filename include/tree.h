#ifndef HUFFMAN_TREE_H
#define HUFFMAN_TREE_H

#include<unordered_map>
#include "node.h"
#include<string>

class Tree{
    public:
    Node* root;
    void generateCode(Node* root, const std::string& code, std::unordered_map<char,std::string>& codeTable);
    std::unordered_map<char,std::string> getCodes();
    Tree(std::unordered_map<char, int>& frequencyTable); // builds tree from given frequency map of characters in a file
};

#endif