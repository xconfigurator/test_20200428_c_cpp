/**
 * @file 112.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
//#include <string>
#include <cstring>
using namespace std;

class A {
public:
    A(char *str);
    ~A();
private:
 char string[50];
};

A::A(char *str) {
    strcpy(string, str);
    cout << "Constructor called for "<< string << endl;
}

A::~A() {
    cout << "Destructor called for " << string << endl;
}

void fun() {
    A funobject("Funobject");
    static A staticobject("Staticobject");
    cout << "In fun()" << endl;
}

A GlobalObject("Globalobject");

int main(int argc, char const *argv[]) {
    A Mainobject("Mainobject");
    cout << "In main(), before calling fun().\n";
    fun();
    cout << "In main(), after calling fun.\n";
    return 0;
}

// 注意一下顺序！