/**
 * @file 02.8.cpp
 * @author your name (you@domain.com)
 * @brief 
 * 
 * 使用递归调用方法将一个n位整数转换成字符串。
 * 
 * @version 0.1
 * @date 2023-10-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

void convert(int);

int main() {
    int num;
    cout << "输入一个整数：";
    cin >> num;
    cout << "输出的字符串是：";
    convert(num);
    cout << endl;
    return 0;
}

void convert(int n) {
    int a;
    if ((a = n / 10) != 0) {
        convert(a);
    }
    char c = n % 10 + '0';
    cout << c;
}