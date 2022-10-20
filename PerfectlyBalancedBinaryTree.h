#ifndef SIAOD4_PERFECTLYBALANCEDBINARYTREE_H
#define SIAOD4_PERFECTLYBALANCEDBINARYTREE_H

#include "PBBTNode.h"

class PerfectlyBalancedBinaryTree {
protected:
    PBBTNode *root = nullptr;
public:
    [[nodiscard]] int getSize() const;
    void add(char value);
    void print() const;
    [[nodiscard]] char getLeftmost() const;
    [[nodiscard]] int getDepth(char value) const;
    [[nodiscard]] char getMaxLeaf() const;
};


#endif //SIAOD4_PERFECTLYBALANCEDBINARYTREE_H
