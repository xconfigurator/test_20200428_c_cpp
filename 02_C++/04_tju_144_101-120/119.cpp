/**
 * @file 119.cpp
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

template <class T>
class Tclass {
    T x, y;
public:
    Tclass(T a, T b):x(a), y(b) {}
    Tclass(T a)                 {y = (T)0; x = a;}
    void print();
};

template <class T>
void Tclass<T>::print() {
    char ch;
    ch = (y >= (T)0 ? '+' : '-');
    cout << x << ch << (y >= (T)0 ? y : -y) << "i" << endl;
}

int main(int argc, char const *argv[]) {
    Tclass<int> c1(15);
    c1.print();
    Tclass<double> c2(5.8, -10.2);
    c2.print();
    return 0;
}