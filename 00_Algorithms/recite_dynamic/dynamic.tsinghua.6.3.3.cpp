/**
 * @file dynamic.tsinghua.3.3.cpp
 * @author your name (you@domain.com)
 * @brief 橱窗的插花问题 - 动态规划
 * 只关注最优方案，即排除必然不可能是最优方案的可能性。
 * 
 * 小结：
 *      把插花人物按一个花瓶一个花瓶分阶段进行
 *           每个阶段分别考虑若干情况（状态）
 *           每种情况面临不同的选择（决策）
 *           决策导致不同阶段的状态相互转化（状态转移）
 *      每个阶段的最优决策组成了整体的最优方案
 *
 * 动态规划：
 *      在各阶段各状态间依据最优决策进行递推的算法，最终得到整个问题的最优解。
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
 * @date 2022-11-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
 #include <iostream>
 using namespace std;

// 定义美感数组
const int V = 5;
const int F = 3;
int beauty[V][F] = {
    {7, 5, -21}
    ,{23, 21, 5}
    ,{-5, -4, -4}
    ,{-24, 10, -20}
    ,{16, 23, 20}
};

 int main(int argc, char const *argv[]) {
    //cout << "hello, world" << endl;
    // 定义最优部分美感和数组， 设定递推初值
    int best_partial[V + 1][F + 1] = {{0}};

    // 输出方案1：顶一个记录最优部分插花方案的数组，设定初值
    int best_put[V + 1][F + 1]  = {{0}};

    // 输出方案2：
    int put[V + 1][F + 1] = {{false}};  //put[?][0] 显然不插花

    // 按m个花瓶插n朵花递推
    for (int m = 1; m <= V; ++m) {
        for (int n = 1; n <= m && n <= F; ++n) {
            // 新花瓶插花
            best_partial[m][n] = best_partial[m - 1][n - 1] + beauty[m - 1][n - 1];
            best_put[m][n] = best_put[m - 1][n - 1] + (1 << (m - 1));// 输出方案1
            put[m][n] = true;// 输出方案2
            

            // 新花瓶不插花更优
            if (n < m && best_partial[m][n] < best_partial[m - 1][n]) {
                best_partial[m][n] = best_partial[m - 1][n];
                best_put[m][n] = best_put[m - 1][n];// 输出方案1
                put[m][n] = false;// 输出方案2
            }
        }
    }

    // 输出答案
    cout << "最大美感得分和：" << best_partial[V][F] << endl;
    cout << "插花方法：";
    // 方案1： 利用best_put
    // TODO
    // 方案2： 只记新花瓶是否插花，插花方案可以依次回溯。（输出的插花方案是逆向的）
    for (int m = V, n = F; m >= 1; ) {
        if (put[m][n]) {
            cout << n;
            m--;
            n--;
        } else {
            cout << '0';
            m--;// 花数不变 花瓶数减少
        }
    }

    return 0;
 }