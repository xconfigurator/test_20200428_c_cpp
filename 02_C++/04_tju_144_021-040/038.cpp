/**
 * @file 038.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

class Test {
public:
    Test() {m = 10; n = 5;}
    Test & setm(int);
    Test & setn(int);
    void show();
private:
    int m, n;
};

void Test::show() {
    cout << "m=" << this->m << ",n=" << (*this).n << endl;
}

Test & Test::setm(int i) {
    m = i;
    return *this;
}

Test & Test::setn(int j) {
    n = j;
    return *this;
}

int main() {
    Test x;
    x.show();
    x.setm(5).setn(3).setm(9);
    x.show();
    return 0;
}