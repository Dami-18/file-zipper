#ifndef NODE_H
#define NODE_H

class Node{
    public:
    char character;
    int frequency;
    Node* left;
    Node* right;

    Node(int freq, char ch);
};

#endif