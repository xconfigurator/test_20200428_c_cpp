/**
 * @file dynamic.tsinghua.4.cpp
 * @author your name (you@domain.com)
 * @brief 最长公共子序列问题
 * 清华 程序设计基础 动态规划实例 - 4 邬晓钧
 * 
 * 运用动态规划方法解题的一些经验：
 *      动态规划用来解决最优化问题
 *      1. 把问题分解为多个阶段（按照时间或者空间）
 *          1. 每个阶段面临的都是与原问题相似的子问题
 *          2. 需要确认一下，子问题的最优解能够积累得到整体最优解，或者说整体最优解的每个阶段都是子问题的最优解（最优性原理 <- 具体问题具体分析）
 *      2. 找出每个阶段下的多个状态
 *          1. 考虑每个张台下有哪些可选择的决策
 *          2. 找出每个状态下的最优决策
 *          3. 写出最优决策下状态转移的递推公式
 *          4. 考虑递推的方向，并由此确定递推初始值
 *          5. 考虑如何记录最优决策， 以便输出整体最优解
 *
 * @version 0.1
 * @date 2022-07-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cstring>
using namespace std;

char A[] = "abcbdacb";
char B[] = "bdcab";

const int M = 1000;
const int N = 1000;
int lcs[M][N];  // M,N足够大
int decision[M][N];

enum {
    I_J,    // 1 + lcs[i + 1][j + 1]
    I_1,    // lcs[i + 1][j]
    J_1     // lcs[i][j + 1]
};

int m = strlen(A);
int n = strlen(B);

int main(int argc, char const *argv[]) {
    //cout << "hello, world" << endl;
    // 设定递推初值
    for (int j = 0; j < n + 1; ++j) {
        lcs[m][j] = 0;  // lcs[m][?] = 0
    }
    for (int i = 0; i < m + 1; ++i) {
        lcs[i][n] = 0;  // lcs[?][n] = 0
    }
    // 递推
    for (int i = m - 1; i >= 0; --i) {
        for (int j = n - 1; j >= 0; --j) {
            if (A[i] == B[j] ) {
                lcs[i][j] = 1 + lcs[i + 1][j + 1];
                decision[i][j] = I_J;
            } else if (lcs[i][j + 1] < lcs[i + 1][j]) {
                lcs[i][j] = lcs[i + 1][j];
                decision[i][j] = I_1;
            } else {
                lcs[i][j] = lcs[i][j + 1];
                decision[i][j] = J_1;
            }
        }
    }

    // 输出
    for (int i = 0, j = 0; i < m && j < n;) {
        switch(decision[i][j]) {
            case I_J:
                cout << A[i];
                i++;
                j++;
                break;
            case I_1:
                i++;
                break;
            case J_1:
                j++;
                break;
        }
    }
    
    return 0;
}