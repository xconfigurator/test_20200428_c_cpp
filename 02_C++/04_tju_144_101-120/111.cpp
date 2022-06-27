/**
 * @file 111.cpp
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

class Test {
    static int val;
    int a;
public:
    static int func();
    void sfunc(Test &r);
};

int Test::val = 100;
int Test::func() {
    return val++;
}
void Test::sfunc(Test &r) {
    r.a = 50;
    cout << "Result3=" << r.a << endl;
}

int main(int argc, char const *argv[]) {
    cout << "Result1=" << Test::func() << endl;
    Test p;
    cout << "Result2=" << p.func() << endl;
    p.sfunc(p);
    return 0;
}