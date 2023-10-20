/**
 * @file 02.3.cpp
 * @author your name (you@domain.com)
 * @brief 求输入连个正整数的最大公约数(gcd:greatest common divisor)和最小公倍数(lcm:Lowest Common Multiple)
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int lcm(int, int), gcd(int, int);

int main() {
    int a, b;
    cout << "Enter a, b:";
    cin >> a >> b;
    int m = lcm(a, b);
    cout << "最小公倍数是：" << m << endl;
    int n = gcd(a, b);
    cout << "最大公约数是：" << n << endl;
    return 0;
}

int lcm(int i, int j) {
    int k = i * j;
    /*while (i != j) {
        if (i > j) i -= j;
        if (i < j) j -= i; 
    }*/
    i = gcd(i, j);
    return k / i;
}

int gcd(int i, int j) {
    while (i != j) {
        if (i > j) i -= j;
        if (i < j) j -= i;
    }
    return i;
}
