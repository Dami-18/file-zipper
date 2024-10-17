#include "../include/node.h"

Node::Node(int freq, char ch){
    this->character = ch;
    this->frequency = freq;
    this->left = nullptr;
    this->right = nullptr;
}