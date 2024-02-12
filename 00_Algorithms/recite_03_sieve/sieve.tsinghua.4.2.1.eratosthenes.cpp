/**
 * @file sieve.tsinghua.4.2.1.eratosthenes.cpp
 * @author your name (you@domain.com)
 * @brief 求素数100以内素数 eratosthenes筛法
 * https://www.bilibili.com/video/BV1k14y1E75N/?p=44&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * 
 * @version 0.1
 * @date 2024-02-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
using namespace std;

const int N = 100;
// 定义筛子
bool sieve[N + 1];// 如果定义到main中，10的5次方可以运行，10的7次方就会溢出。
// 对比4.1.1.cpp, 筛法在问题规模达到10的7次方的时候仍然速度很快，这就体现了筛法的优势。
int main(int argc, char const *argv[]) {

    // 标记初始化
    sieve[0] = false;
    sieve[1] = false;
    for (int i = 2; i <= N; i++) {
        sieve[i] = true;
    }

    //  枚举2到根号100的每个是d
    for (int i = 2; i * i <= N; i++) {
        if (sieve[i] ) {// 如果d没有被筛掉
            // 用d筛100以内的数
            // 即枚举不大于100的d的倍数n, 筛掉n
            for (int j = i * i; j <= N; j += i) {
                // i * i 有讲究！ 视频3：00讲解
                // 2d 已经被2筛掉了。
                // 3d 已经被3筛掉了。
                // ...
                sieve[j] = false;
            }
        }
    }

    // 输出所有没有被筛掉的数
    for (int i = 2; i <= N; ++i) {
        if (sieve[i]) {
            cout << i << endl;
        }
    }

    return 0;
}