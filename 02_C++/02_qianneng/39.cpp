/*
友元的使用方法 P82

求两数的平方差（友元函数说明）。

说明：
本例的目的只是介绍友元的使用方法。
如果有一个对象，两个不能由外接访问的运算数据，通过友元便可以直接访问改数据。
*/
#include <iostream>
using namespace std;

class MyClass {
private:
    int a, b, max, min;
public:
    MyClass(int i, int j):a(i), b(j) {
        max = (a > b) ? a : b;
        min = (a < b) ? a : b;
    }
    friend int Result(MyClass& x);
};

int Result(MyClass& x) {
    return x.max * x.max - x.min * x.min;
}

int main(int argc, char const *argv[]) {
    MyClass n(3, 4);
    cout << Result(n) << endl;
    return 0;
}
