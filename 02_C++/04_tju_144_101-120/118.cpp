/**
 * @file 118.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

class tree {
    int height;
public:
    tree(int h);
    ~tree();
    void grow(int years);
    void printsize();
};

tree::tree(int h) {height = h;}

tree::~tree() {
    cout << "Inside tree destructor!" << endl;
    printsize();
}

void tree::grow(int years)  { height += years; }
void tree::printsize()      { cout << "Tree height is " << height << endl; }

int main(int argc, char const *argv[]) {
    cout << "Before opening brace" << endl;
    {
        tree t(12);
        cout << "After tree creation" << endl;
        t.printsize();
        t.grow(4);
        cout << "Before closing brece" << endl;
    }
    cout << "After closing brace" << endl;
    return 0;
}

// 对象生灭时机