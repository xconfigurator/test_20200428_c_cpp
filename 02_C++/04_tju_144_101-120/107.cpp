/**
 * @file 107.cpp
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

class value {
private:
    int a;
public:
    value()         {a = 1;}
    value(int i)    {a = i;}
    void list()     {cout << a << " ";}
};

value data1[4];// 注意这个会如何！
value data2[4] = {value(10), value(20), value(30)};

int main(int argc, char const *argv[]) {
    int i;
    for (i = 0; i < 4; i++) {
        data1[i].list();
    }
    cout << endl;

    for (i = 0; i < 4; i++) {
        data2[i].list();
    }
    cout << endl;
    return 0;
}