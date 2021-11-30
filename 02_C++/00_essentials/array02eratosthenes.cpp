/**
 * @file array02eratosthenes.cpp
 * @author liuyang
 * @brief 筛法求素数
 * 
 * Eratosthenes
 * 简介：把2到n中所有的数都列出来，然后从2开始，先划掉n内所有2的倍数，然后每次从下一个剩下的数（必然是素数）开始，划掉其n内的所有倍数。最后剩下的数就都是素数。
 * 关键点是：每次划掉后，下一个剩下的数必然是素数。
 * 
 * @version 0.1
 * @date 2021-11-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

int const MAX_NUM = 10000000;
//char isPrime[MAX_NUM + 10];                 // 最终如果isPrime[i]是1则表示i是素数 如果使用四个字节的int只存放0/1有点浪费，故使用char类型的数组。其实写MAX_NUM + 1就够了。
bool isPrime[MAX_NUM + 10];                   // 用bool也一样。
//注： +1 +10 +100对空间影响并不大，但char型数组和int型数组之间的差距就在75%！！

int main(int argc, char const *argv[]) {
    for (int i = 2; i <= MAX_NUM; ++i) {    // 开始架设所有的数都是素数 
        isPrime[i] = 1;
    }
    for (int i = 2; i <= MAX_NUM; ++i) {    // 每次将一个素数的所有倍数标记为非素数
        if (isPrime[i]) {                   // 只标记素数的倍数
            for (int j = 2 * i; j <= MAX_NUM; j += i) { // 记住这个变量增长的写法！
                isPrime[j] = 0;
            }
        }
    }
    for (int i = 2; i <= MAX_NUM; ++i) {    // 输出素数
        if (isPrime[i]) {
            cout << i << endl;
        }
    }
    return 0;
}