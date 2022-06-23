/**
 * @file 054.cpp
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

class base1 {
public:
    base1(int i):i1(i)  {cout << "Constructor base1(i1="<< i1 << ").\n";}
    ~base1()            {cout << "Destructor base1(i1=" << i1 << ").\n";}
private:
    int i1;
};

class base2 {
public:
    base2(int i):i2(i)  {cout << "Constructor base2(i2=" << i2 << ").\n";}
    ~base2()            {cout << "Destructor base2(i2=" << i2 << ").\n";}
private:
    int i2;
};

class derived:public base1, public base2 {
private:
    base1 b1;
    base2 b2;
    int i3;
public:
    derived(int j1, int j2, int j3, int j4, int j5)
        :base2(j2), base1(j1), b2(j3), b1(j4), i3(j5) {
            cout << "Constructor derived.\n";
        }
    ~derived() {
        cout << "Destructor derived.\n";
    }
};

int main(int argc, char const *argv[]) {
    derived d(5, 4 ,3 , 2, 1);
    return 0;
}

// 注意构造函数调用顺序。