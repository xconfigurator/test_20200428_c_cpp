/**
 * @file sieve.tsinghua.4.2.5.hanxin.cpp
 * @author your name (you@domain.com)
 * @brief 韩信点兵 - 中国剩余定理
 * https://www.bilibili.com/video/BV1k14y1E75N?p=48&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * 
 * @version 0.1
 * @date 2024-02-12
 * 
 * @copyright Copyright (c) 2024
 * 
 示例：
 1 0 3
 10
 */
#include <iostream>
using namespace std;

const int N = 200;
int sieve[N];

int main(int argc, char const *argv[]) {
    int r3 = 0, r5 = 0, r7 = 0;
    cin >> r3 >> r5 >> r7;// 3人一组剩余的人数， 5人一组剩余的人数，7人一组剩余的人数。

    // 初始化筛子
    for (int i = 0; i < N; i++) {
        sieve[i] = 0;
    }

    // 用3筛，选出被3除余数满足条件的数
    for (int i = r3; i < N; i = i + 3) {
        sieve[i]++;
    }

    // 用5筛，选出被5除余数满足条件的数
    for (int i = r5; i < N; i = i + 5) {
        sieve[i]++;
    }

    // 用7筛，选出被7除余数满足条件的数
    for (int i = r7; i < N; i = i + 7) {
        sieve[i]++;
    }

    // 输出每次都被选出的数（最小的）
    for (int i = 0; i < N; ++i) {
        if (3 == sieve[i]) {
            cout << i << endl;
            break;
        }
    }

    // 韩信点兵的非筛法算法
    int res = (r3 * 70 + r5 * 21 + r7 * 15) % 105;
    cout << res << endl;

    return 0;
}