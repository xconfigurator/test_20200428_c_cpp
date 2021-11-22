/*
@author liuyang
@since 2021/2/21

打印素数表

Eratosthenes筛法
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=15&spm_id_from=pageDriver
*/
#include <iostream>
using namespace std;

const int MAX_NUM = 1000;
bool isPrime[MAX_NUM + 10]; // 最终如果isPrime[i]为true，则表示i是素数。

int main() {
    // 1. 初始化标记
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i <= MAX_NUM + 10; ++i) {
        isPrime[i] = true;
    }

    // 2. 从2开始，每次将一个素数的所有倍数标记为非素数
    for (int i = 2; i <= MAX_NUM; ++i) {
        if (isPrime[i]) {
            for (int j = 2 * i; j <= MAX_NUM; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // 3. 输出素数表
    for (int i = 2; i <= MAX_NUM; ++i) {
        if (isPrime[i]) {
            cout << i << endl;
        }
    }
    return 0;
}