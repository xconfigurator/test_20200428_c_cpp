/**
 * @file 020.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;
int f1();
int f2();
int f3();

int main(int argc, char const *argv[]) {
    cout << "This is main()\n";
    cout << f1() << endl;
    return 0;
}

int f1() {
    cout << "This is f1()\n";
    cout << f3() << endl;
    return 1;
}

int f2() {
    cout << "This is f2()\n";
    return 2;
}

int f3() {
    cout << "This is f3()\n";
    cout << f2() << endl;
    return 3;
}