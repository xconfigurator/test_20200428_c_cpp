/**
 * @file 108.cpp
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

class A {
public:
    A(int i, int j) {
        a = i;
        b = j;
        cout << "Constructor.\n";
    }
    ~A() {
        cout << "Destructor." << a << b << endl;
    }
private:
    int a, b;
};

int main(int argc, char const *argv[]) {
    A *pa, *pb;
    pa = new A(4, 6);
    pb = new A(10, 15);
    delete pa;
    delete pb;
    return 0;
}