#ifndef SIAOD4_PBBTNODE_H
#define SIAOD4_PBBTNODE_H

#include "iostream"

using namespace std;

class PBBTNode {
protected:
    int children = 0;
    PBBTNode *left = nullptr;
    PBBTNode *right = nullptr;
    char value;
public:
    explicit PBBTNode(char value_);
public:
    [[nodiscard]] int getChildren() const;
    [[nodiscard]] PBBTNode *getLeft() const;
    void setLeft(PBBTNode *left_);
    [[nodiscard]] PBBTNode *getRight() const;
    void setRight(PBBTNode *right_);
    [[nodiscard]] char getValue() const;
    void setValue(char value_);
public:
    void add(char value_);
    void print(int tabLevel = 0) const;
    [[nodiscard]] int getDepth(char value_) const;
    [[nodiscard]] char getMaxLeaf() const;
};


#endif //SIAOD4_PBBTNODE_H
