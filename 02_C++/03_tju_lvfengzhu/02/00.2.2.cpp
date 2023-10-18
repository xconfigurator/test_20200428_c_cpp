/**
 * @file 00.2.2.cpp
 * @author your name (you@domain.com)
 * @brief 分析输出结果
 * @version 0.1
 * @date 2023-10-17
 *
 * 输入: 5 3
 * 输出：
 * 5>3
 * 5>=3
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter tow integers:";
    cin >> n1 >> n2;
    if (n1 == n2) cout << n1 << "=" << n2 << endl;
    if (n1 > n2) cout << n1 << ">" << n2 << endl;
    if (n1 >= n2) cout << n1 << ">=" << n2 << endl;
    return 0;
}