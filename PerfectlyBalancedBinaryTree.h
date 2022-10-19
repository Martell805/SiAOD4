#ifndef SIAOD4_PERFECTLYBALANCEDBINARYTREE_H
#define SIAOD4_PERFECTLYBALANCEDBINARYTREE_H

#include "PBBTNode.h"

class PerfectlyBalancedBinaryTree {
protected:
    PBBTNode *root = nullptr;
public:
    int getSize() const;
    void add(char value);
    void print() const;
    char getLeftmost() const;
    int getDepth(char value) const;
    char getMaxLeaf() const;
};


#endif //SIAOD4_PERFECTLYBALANCEDBINARYTREE_H
