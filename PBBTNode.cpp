#include "PBBTNode.h"

PBBTNode::PBBTNode(char value_) : value(value_) {}

int PBBTNode::getChildren() const {
    return children;
}

PBBTNode *PBBTNode::getLeft() const {
    return left;
}

void PBBTNode::setLeft(PBBTNode *left_) {
    this->left = left_;
    this->children++;
}

PBBTNode *PBBTNode::getRight() const {
    return right;
}

void PBBTNode::setRight(PBBTNode *right_) {
    this->right = right_;
    this->children++;
}

char PBBTNode::getValue() const {
    return value;
}

void PBBTNode::setValue(char value_) {
    this->value = value_;
}

void PBBTNode::add(char value_) {
    if (this->left == nullptr) {
        this->setLeft(new PBBTNode(value_));
        return;
    }

    if (this->right == nullptr) {
        this->setRight(new PBBTNode(value_));
        return;
    }

    if (this->left->getChildren() <= this->right->getChildren()) {
        this->left->add(value_);
    } else {
        this->right->add(value_);
    }
}

void PBBTNode::print(int tabLevel) const {
   for(int q = 0; q < tabLevel; q++) cout << ' ';
   cout << value << endl;
   if(this->left != nullptr) this->left->print(tabLevel + 1);
   if(this->right != nullptr) this->right->print(tabLevel + 1);
}

int PBBTNode::getDepth(char value_) const {
    if(this->value == value_) return 0;

    int depthLeft = INT32_MAX;
    int depthRight = INT32_MAX;

    if(this->left != nullptr) {
        depthLeft = this->left->getDepth(value_);
    }

    if(this->right != nullptr) {
        depthRight = this->right->getDepth(value_);
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
