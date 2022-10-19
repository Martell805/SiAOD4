#include "PBBTNode.h"

PBBTNode::PBBTNode(char value, PBBTNode *parent) : value(value), parent(parent) {}

int PBBTNode::getChildren() const {
    return children;
}

PBBTNode *PBBTNode::getParent() const {
    return parent;
}

void PBBTNode::setParent(PBBTNode *parent) {
    this->parent = parent;
}

PBBTNode *PBBTNode::getLeft() const {
    return left;
}

void PBBTNode::setLeft(PBBTNode *left) {
    this->left = left;
    left->setParent(this);
    this->children++;
    this->childrenLeft++;
}

PBBTNode *PBBTNode::getRight() const {
    return right;
}

void PBBTNode::setRight(PBBTNode *right) {
    this->right = right;
    right->setParent(this);
    this->children++;
    this->childrenRight++;
}

char PBBTNode::getValue() const {
    return value;
}

void PBBTNode::setValue(char value) {
    this->value = value;
}

void PBBTNode::add(char value) {
    if (this->left == nullptr) {
        this->setLeft(new PBBTNode(value, this));
        return;
    }

    if (this->right == nullptr) {
        this->setRight(new PBBTNode(value, this));
        return;
    }

    if (this->childrenLeft <= this->childrenRight) {
        this->left->add(value);
        this->childrenLeft++;
    } else {
        this->right->add(value);
        this->childrenRight++;
    }
}

void PBBTNode::print(int tabLevel) const {
   for(int q = 0; q < tabLevel; q++) cout << ' ';
   cout << value << endl;
   if(this->left != nullptr) this->left->print(tabLevel + 1);
   if(this->right != nullptr) this->right->print(tabLevel + 1);
}

int PBBTNode::getDepth(char value) const {
    if(this->value == value) return 0;

    int depthLeft = INT32_MAX;
    int depthRight = INT32_MAX;

    if(this->left != nullptr) {
        depthLeft = this->left->getDepth(value);
    }

    if(this->right != nullptr) {
        depthRight = this->right->getDepth(value);
    }

    if(depthLeft != INT32_MAX and depthLeft <= depthRight) {
        return depthLeft + 1;
    }

    if(depthRight != INT32_MAX and depthRight <= depthLeft) {
        return depthRight + 1;
    }

    return INT32_MAX;
}

char PBBTNode::getMaxLeaf() const {
    if(this->left == nullptr and this->right == nullptr){
        return this->value;
    }

    char maxLeft = 0;
    char maxRight = 0;

    if(this->left != nullptr){
        maxLeft = this->left->getMaxLeaf();
    }

    if(this->right != nullptr){
        maxRight = this->right->getMaxLeaf();
    }

    return max(maxLeft, maxRight);
}
