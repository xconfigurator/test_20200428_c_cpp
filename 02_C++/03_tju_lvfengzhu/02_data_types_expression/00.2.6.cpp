/**
 * @file 00.2.6.cpp
 * @author your name (you@domain.com)
 * @brief 分析程序输出结果
 * 
 * new/delete
 *
 * @version 0.1
 * @date 2023-10-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main() {
    int *p;
    p = new int(9);
    cout << *p * 2 << endl;
    delete p;
    return 0;
}