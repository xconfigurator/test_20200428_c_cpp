/**
 * @file 086.cpp
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

int d = 1;

void functionx(int p) {
    int d = 5;
    d += p++;
}

int main(int argc, char const *argv[]) {
    int a = 2;
    functionx(a);
    d += a++;

    cout << "a=" << a << endl;
    cout << "d=" << d << endl;
    return 0;
}

// 哈哈哈！ 要注意作用范围