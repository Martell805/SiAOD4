#ifndef SIAOD4_PBBTNODE_H
#define SIAOD4_PBBTNODE_H

#include "iostream"

using namespace std;

class PBBTNode {
protected:
    int children = 0;
    int childrenLeft = 0;
    int childrenRight = 0;
    PBBTNode *parent = nullptr;
    PBBTNode *left = nullptr;
    PBBTNode *right = nullptr;
    char value;
public:
    PBBTNode(char value, PBBTNode *parent=nullptr);
public:
    int getChildren() const;
    PBBTNode *getParent() const;
    void setParent(PBBTNode *parent);
    PBBTNode *getLeft() const;
    void setLeft(PBBTNode *left);
    PBBTNode *getRight() const;
    void setRight(PBBTNode *right);
    char getValue() const;
    void setValue(char value);
public:
    void add(char value);
    void print(int tabLevel = 0) const;
    int getDepth(char value) const;
    char getMaxLeaf() const;
};


#endif //SIAOD4_PBBTNODE_H
