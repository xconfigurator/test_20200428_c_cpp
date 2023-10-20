/**
 * @file 00.4.5.cpp
 * @author your name (you@domain.com)
 * @brief 
 *
 * 递归例子
 * 求n1至n2自然数之和。 
 *
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int fun(int, int);

int main() {
    int n1, n2;
    cout << "输入两个整数(前者小于后者):";
    cin >> n1 >> n2;
    cout << "从" << n1 << "到" << n2 << "累加和为" << fun(n1, n2) << endl;
    return 0;
}

int fun(int i, int j) {
    if (j == i) {
        return i;
    } else {
        return j + fun(i, j - 1);// 注意不能像下面那样写
        //return j + fun(i, --j);// 1 100 4951
        //return j + fun(i, j--);// 1 100 4951
    }
}