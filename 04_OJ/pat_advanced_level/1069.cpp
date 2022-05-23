/**
 * @file 1069.cpp
 * @author liuyang copy from tianqin 
 * @brief 简单数学问题 
 * 
 * 题目：The Black Hole of Numbers (6174)
 * https://pintia.cn/problem-sets/994805342720868352/problems/994805400954585088
 * 说明：
 * 1. 听视频介绍，跟着撸代码。
 * 2. 数学问题的皮，但实际上是一个模拟问题。
 * OJ状态：答案正确
 * 
 * 
 * @version 0.1 
 * @date 2021-12-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <algorithm>    // sort
using namespace std;

// 按位取出N的各位到a[]中
// {个位， 十位， 百位， 千位}
void divide(int N, int a[]) {
    for (int i = 0; i < 4; ++i) {
        a[i] = N % 10;
        N /= 10;
    }
}

/*
step1. 将N分离（调用divide）然后排序。
step2. 这里只做非递减排序（非递增排序只需要把非递减排序的序列逆序即可）。
step3. 将排序后的数组还原成数字
        int r[0]保存非递增数字
        int r[1]保存非递减数字
*/
int sorted(int N, int r[]) {
    int a[4];
    int power;
    r[0] = r[1] = 0;
    divide(N, a);
    sort(a, a + 4);                 // 默认是非递减排序
    power = 1;
    for (int i = 0; i <= 3; i++) {  // 注意排序后的
        r[0] += a[i] * power;       // decrease 非递增
        power *= 10;
    }
    power = 1;
    for (int i = 3; i >= 0; --i) {
        r[1] += a[i] * power;       // increase 非递减
        power *= 10;
    }
}

int main(int argc, char const *argv[]) {
    int N;                          // 接收待处理的整数
    int arr[4], results[2];         // 分解后的数组 results[0]:重排后非递增数字，results[1]:重排后非递减数字。
    cin >> N;
    divide(N, arr);
    
    // 识别2222这种特殊情况
    int flag = 0;
    for (int j = 1; j <= 3; ++j) {
        if (arr[j] != arr[j - 1]) { // 比较相邻两位
            flag = 1;
            break;
        }
    }
    // 各位都相同的情况
    if (flag == 0) {
        printf("%04d - %04d = 0000\n", N, N);// 注意输出格式，严格输出四位，不足的需要高位补0。
        return 0;
    }

    // 处理一般情况
    do {
        sorted(N, results);
        N = results[0] - results[1];
        printf("%04d - %04d = %04d\n", results[0], results[1], N);
    } while (N != 6174);

    return 0;
}