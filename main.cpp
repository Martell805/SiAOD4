#include <iostream>

#include "PerfectlyBalancedBinaryTree.h"

using namespace std;

void test() {
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
}

void task1() {
    PerfectlyBalancedBinaryTree pBBTree;

    int command;
    char value;

    while(true){
        cout << "Choose operation:" << endl;
        cout << "0 - exit" << endl;
        cout << "1 - add value" << endl;
        cout << "2 - get size of tree" << endl;
        cout << "3 - get leftmost value" << endl;
        cout << "4 - get depth of value" << endl;
        cout << "5 - get max leaf" << endl;
        cout << "6 - print tree" << endl;
        cin >> command;

        switch (command) {
            case 0:
                return;
            case 1:
                cout << "Enter value to add:" << endl;
                cin >> value;
                pBBTree.add(value);
                break;
            case 2:
                cout << "Size of tree is " << pBBTree.getSize() << endl;
                break;
            case 3:
                cout << "Leftmost value of tree is " << pBBTree.getLeftmost() << endl;
                break;
            case 4:
                cout << "Enter value:" << endl;
                cin >> value;
                cout << "Depth of '" << value << "' is " << pBBTree.getDepth(value) << endl;
                break;
            case 5:
                cout << "Maximum value of leaf is " << pBBTree.getMaxLeaf() << endl;
                break;
            case 6:
                cout << "Tree: " << endl;
                pBBTree.print();
                break;
            default:
                cout << "There is no such a command" << endl;
                break;
        }
    cout << endl;
    }
}

int main() {
    int n;
    cout << "Choose 0 for test or 1 for task1:" << endl;
    cin >> n;

    switch(n){
        case 0:
            test();
            break;
        case 1:
            task1();
            break;
        default:
            cout << "There is no such a task" << endl;
            break;
    }

    return 0;
}
