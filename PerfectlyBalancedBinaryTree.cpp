#include "PerfectlyBalancedBinaryTree.h"

int PerfectlyBalancedBinaryTree::getSize() const {
    return this->root->getChildren() ? (this->root != nullptr) : 0;
}

void PerfectlyBalancedBinaryTree::add(char value) {
    if (this->root == nullptr) {
        this->root = new PBBTNode(value);
        return;
    }

    this->root->add(value);
}

void PerfectlyBalancedBinaryTree::print() const {
    if(this->root != nullptr) this->root->print();
}

char PerfectlyBalancedBinaryTree::getLeftmost() const {
    if(this->root == nullptr){
        throw -4;
    }

    PBBTNode *currentNode = this->root;
    while (currentNode->getLeft() != nullptr) currentNode = currentNode->getLeft();

    return currentNode->getValue();
}

int PerfectlyBalancedBinaryTree::getDepth(char value) const {
    if(this->root == nullptr){
        throw -4;
    }

    return this->root->getDepth(value);
}

char PerfectlyBalancedBinaryTree::getMaxLeaf() const {
    if(this->root == nullptr){
        throw -4;
    }

    return this->root->getMaxLeaf();
}

