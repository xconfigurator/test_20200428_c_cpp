/**
 * @file PhysiologicalCycle.pku.cpp
 * @author liuyang
 * @brief 生理周期 《程序设计导引及在线实践（第2版)》 P150
 * 
 * 枚举的一个核心问题：如何跳过那些明显不是答案情况，从而加速计算。
 * 
 * 视频 10分钟
 * https://www.bilibili.com/video/BV1Zb411q7iY?p=2
 * 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 * 
 * 输入样例：
0 0 0 0
0 0 0 100
5 20 34 325
4 5 6 7
283 102 23 320
203 301 203 40
-1 -1 -1 -1
 * 
 * 输出样例：
0 0 0 0
Case 1: the next triple peak occurs in 21252 days.
0 0 0 100
Case 2: the next triple peak occurs in 21152 days.
5 20 34 325
Case 3: the next triple peak occurs in 19575 days.
4 5 6 7
Case 4: the next triple peak occurs in 16994 days.
283 102 23 320
Case 5: the next triple peak occurs in 8910 days.
203 301 203 40
Case 6: the next triple peak occurs in 10789 days.
-1 -1 -1 -1
 */
#include <iostream>
#include <cstdio>
using namespace std;
#define N 21252

int main(int argc, char const *argv[]) {
    int p, e, i, d, caseNo = 0;
    while (cin >> p >> e >> i >> d && p!= -1) {
        ++ caseNo;
        int k;
        for (k = d + 1; (k - p) % 23; ++k);     // d之后的第一个体力高峰
        for (; (k - e) % 28; k += 23);          // d之后体力和情商的双高峰 跳着尝试 步长是p的最小公倍数（必要条件就是这个日子是一个体力高峰）
        for (; (k - i) % 33; k += 23 * 28);     // d之后体力、情商、智力的三高峰 跳着尝试 步长是p和e的最小公倍数（必要条件就是这个日子既是一个体力高峰又是一个情商高峰）
        cout << "Case " << caseNo << ": the next triple peak occurs in " << k - d << " days." << endl;// k-d 这是题目要求，需要输三高峰日期k到开始时间d的时间间隔。
    }
    return 0;
}