/*
函数模板类 P145
20210918

利用函数模板方法求两个可比对象的大小，用模板函数返回具体的两个对象中较大者。
*/
#include <iostream>
#include <complex.h>
using namespace std;

class MyComplex : public complex<double> {
public:
    MyComplex():complex(0,0) {}
    MyComplex(double r, double i): complex(r, i){}
    friend int operator > (MyComplex& c1, MyComplex& c2);
};

int operator > (MyComplex& c1, MyComplex& c2) {
    return abs(c1) > abs(c2);
}

template <class T>
T& bigger(T& a, T& b) {
    return a > b ? a : b;
}

int main(int argc, char const * argv[]) {
    // TODO 
    int i1 = 10, i2 = 20, iBigger;
    double d1 = 1.1, d2 = 2.2, dBigger;
    MyComplex c1(1, 2), c2(3, 4), cBigger;

    iBigger = bigger(i1, i2);
    dBigger = bigger(d1, d2);
    cBigger = bigger(c1, c2);

    cout << "The result is: " << endl 
         << "i1 = " << i1 << " i2 = " << i2 << " iBigger = " << iBigger << endl
         << "d1 = " << d1 << " d2 = " << d2 << " dBigger = " << dBigger << endl
         << "c1 = " << c1 << " c2 = " << c2 << " cBigger = " << cBigger << endl;

    return 0;
} 