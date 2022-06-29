/**
 * @file 10.cpp 五位以内的对称素数
 * @author your name (you@domain.com)
 * @brief 判断一个数是否为对称且不大于五位的素数。
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*
输入描述： 输入数据含有不多于50个的正整数n。
输出描述： 对于每个整数n,如果该数是不大于五位数的对称素数，则输出“Yes”，否则输出“No”。每个判断结果单独列一行。
输入样例：
11 101 272
输出样例：
Yes
Yes
No
*/
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

// 本题的实际写法是事实上做了对称判断，并且初步筛选了一部分对称但并不是素数的数字。功能与方法签名略有不符。
bool isSym(int n) {
    // 一位数
    if (n < 12 && n != 10) {// 一位数的素数和11都是对称的
        return true;
    }
    
    // 二位数
    // 知识：
    // 已知2位数的素数：11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
    // 背不下来就反着看：11(已在前面识别)
    //                  22 33 44 55 66 77 88 99 都不是素数
    // 注：本题解法可能略有问题，在这里没有处理这些不是素数的对称数，与方法签名略有不符。但鉴于后面调用处的写法，实际上已经进行了初步筛选，故结论是正确的。

    // 三位数
    if (n > 100 && n < 1000 && n / 100 == n % 10) return true;

    // 四位数
    // 知识：
    // 四位数的对称数不可能是素数
    // 假设四位对称数abba, 即1000 * a + 100 * b + 10 * b + a = 1001 * a + 110 * b = 11 * (91 * a + 10 * b)， 具有因子11，是合数。 

    // 五位数
    // TODO liuyang: 这应该是一个合并同类项的化简结果，目前(202206291054)没看懂。
    if (n > 1000 && n / 1000 == n % 10 * 10 + n / 10 % 10) return true;

    return false;
}

int main(int argc, char const *argv[]) {
    int n;
    while (cin >> n) {
        cout << (n < 100000 && isSym(n) && isPrime(n) ? "Yes\n" : "No\n");
    }
    return 0;
}