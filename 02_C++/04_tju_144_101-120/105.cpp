/**
 * @file 105.cpp
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
    int a, b;
public:
    A(int i, int j):a(i), b(j)  {cout << "Constructor.\n";}
    ~A()                        {cout << a << " Destructor.\n";}
};

int main(int argc, char const *argv[]) {
    A ob2(2, 5);
    A ob1 = ob2;
    cout << "foo" << endl;
    cout << "bar" << endl;
    return 0;
}

// 注意析构的次数。解析中的理由存疑。可以debug或者翻阅其他资料看一下解释。但无论如何是析构两次，这个没错！