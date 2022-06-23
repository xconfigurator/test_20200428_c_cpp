/**
 * @file 047.cpp
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

class A {
public:
    int fun1() const    {return 10;}
    int fun1()          {return 30;}
    int fun2()          {return 20;}
};

int main(int argc, char const *argv[]) {
    A a;
    const int m = a.fun1();
    int n = a.fun2();
    cout << "m=" << m << " ,n=" << n << endl;
    
    const A b;
    int p = b.fun1();
    cout << "p=" << p << endl;
    return 0;
}

// 识记！