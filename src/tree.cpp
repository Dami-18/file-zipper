#include "../include/tree.h"
#include<queue>

Tree::Tree(std::unordered_map<char,int>& frequencyTable){ // build tree from frequency table
    std::priority_queue<Node*> pq;
    for(const auto& item : frequencyTable){
        Node* newNode = new Node(item.first,item.second);
        pq.push(newNode);
    }
    while(pq.size()>1){
        Node* l = pq.top();
        pq.pop();
        Node* r = pq.top();
        pq.pop();
        Node* newRoot = new Node(l->frequency+r->frequency,'\0');
        newRoot->left = l;
        newRoot->right = r;
        pq.push(newRoot);
    }
    root = pq.top();
    pq.pop();
}

void Tree::generateCode(Node* root, const std::string& code, std::unordered_map<char,std::string>& encoding){
    if(root==nullptr){return;}
    if(root->left==nullptr && root->right==nullptr){
        encoding[root->character] = code;
    }
    generateCode(root->left,code+"0",encoding);
    generateCode(root->right,code+"1",encoding);
}

std::unordered_map<char,std::string> Tree::getCodes(){
    std::unordered_map<char,std::string> encoding;
    generateCode(root,"",encoding);
    return encoding;
}