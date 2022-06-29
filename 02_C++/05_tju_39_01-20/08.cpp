/**
 * @file 08.cpp 对称三位素数
 * @author your name (you@domain.com)
 * @brief 判断一个数是否为对称三位素数。所谓“对称”是指一个数，倒过来还是该数。例如，357不是对称数，因为倒过来变成了573。
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 * 输入描述： 输入数据含有不多于50个正整数
 * 输出描述：对于每个n，如果该数是对称三位素数，则输出“Yes”，否则输出“No”
输入样例：
3
11 101 272
输出样例：
No
Yes
No 
 */
#include <iostream>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(int argc, char const *argv[]) {
    int n;
    while (cin >> n) {
        cout << (n > 100 && n < 1000 && n / 100 == n % 10 && isPrime(n) ? "Yes\n" : "No\n");
    }
    return 0;
}