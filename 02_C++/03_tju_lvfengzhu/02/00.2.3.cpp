/**
 * @file 00.2.3.cpp
 * @author your name (you@domain.com)
 * @brief 分析输出结果
 * 
 * 引用
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
    int i(10);
    int &refi = i;
    i += 5;
    cout << "i=" << i << ',' << "refi=" << refi << endl;
    refi += 3;
    cout << "i=" << i << ',' << "refi=" << refi << endl;
    cout << "&i=" << &i << ',' << "&refi=" << &refi << endl;
    return 0;
}