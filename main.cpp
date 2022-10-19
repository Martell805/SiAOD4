#include <iostream>

#include "PerfectlyBalancedBinaryTree.h"

using namespace std;

int main() {
    PerfectlyBalancedBinaryTree perfectlyBalancedBinaryTree;
    perfectlyBalancedBinaryTree.add('0');
    perfectlyBalancedBinaryTree.add('1');
    perfectlyBalancedBinaryTree.add('2');
    perfectlyBalancedBinaryTree.add('3');
    perfectlyBalancedBinaryTree.add('4');
    perfectlyBalancedBinaryTree.add('5');
    perfectlyBalancedBinaryTree.add('6');
    perfectlyBalancedBinaryTree.add('7');
    perfectlyBalancedBinaryTree.add('8');
    perfectlyBalancedBinaryTree.add('9');

    perfectlyBalancedBinaryTree.print();

    cout << perfectlyBalancedBinaryTree.getLeftmost() << endl;

    cout << perfectlyBalancedBinaryTree.getDepth('3') << endl;
    cout << perfectlyBalancedBinaryTree.getDepth('4') << endl;
    cout << perfectlyBalancedBinaryTree.getDepth('7') << endl;
    cout << perfectlyBalancedBinaryTree.getDepth('a') << endl;

    cout << perfectlyBalancedBinaryTree.getMaxLeaf() << endl;

    return 0;
}
