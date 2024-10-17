#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include<vector>
#include "node.h"

class PriorityQueue{
    public:
    std::vector<Node*> heap;
    void heapify(int idx);
    void push(Node* newNode);
    Node* front();
    void pop();
    bool isEmpty();
};

#endif