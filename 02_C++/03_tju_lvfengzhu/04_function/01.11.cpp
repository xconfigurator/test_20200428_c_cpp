/**
 * @file 01.11.cpp
 * @author your name (you@domain.com)
 * @brief 分析程序输出结果
 * 
 * 函数重载
 * 
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

void print(int), print(char), print(char *);

int main() {
    int u(1998);
    print('u');
    print(u);
    print("abcd");
    return 0;
}

void print(int x) {
    cout << x << endl;
}

void print(char * x) {
    cout << x << endl;
}

void print(char x) {
    cout << x << endl;
}