/*
@author liuyang
@since 2021/2/21

数素数
https://pintia.cn/problem-sets/994805260223102976/problems/994805309963354112

说明：
使用Eratosthenes

一些调试经验：
不够用就调大
内存超标就调小
对一些不好证明的问题，那就试错就ok。

问题：
无法打开“cygwin.S”: 无法读取文件'c:\mingw810\src\gcc-8.1.0\libgcc\config\i386\cygwin.S' (Error: 无法解析不存在的文件"c:\mingw810\src\gcc-8.1.0\libgcc\config\i386\cygwin.S")。

处理：
用Visual Studio 2019调试 发现是栈空间溢出。
调整那个大数组的定义位置即可。

参考视频：
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=15&spm_id_from=pageDriver

输入样例：
5 27
输出样例：
11 13 17 19 23 29 31 37 41 43
47 53 59 61 67 71 73 79 83 89
97 101 103
*/
#include <iostream>
using namespace std;

const int MAX_SIZE = 1000001; // 这是个“感觉值”，不够可以再调整。
int p[MAX_SIZE] = { 0 };

void findPrime(int n, int prime[]) {
    // int p[MAX_SIZE] = { 0 };
    int num = 0;// 记录当前已经求得的素数个数
    for (int i = 2; i < MAX_SIZE; ++i) {
        if (p[i] == 0) {
            prime[num++] = i;// 向结果数组写入这个素数
            if (num >= n) {
                break;
            }
            for (int j = i + i; j < MAX_SIZE; j += i) {// 扫描所有i的倍数
                p[j] = 1;
            }
        }
    }

}

int main() {
    int M, N, count = 0;
    int prime[10000] = { 0 };
    cin >> M >> N;
    findPrime(N, prime);
    for (int i = M; i <= N; ++i) {
        cout << prime[i - 1];
        ++count;
        if (count % 10 != 0 && i < N) {
            cout << " ";
        } else {
            cout << endl;
        } 
    }
    return 0;
}