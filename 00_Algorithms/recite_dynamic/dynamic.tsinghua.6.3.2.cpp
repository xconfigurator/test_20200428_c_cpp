/**
 * @file dynamic.tsinghua.3.2.cpp
 * @author your name (you@domain.com)
 * @brief 橱窗的插花问题 - 采用递推的优化算法
 * 清华 程序设计基础 动态规划实例 - 3 邬晓钧
 * 递推公式：
 * partial_sum[i] = partial_sum[i去掉最高位的1] + beauty[最高位1的位置][最高位所插花的编号]
 * 初始值：
 * partial_sum[0] = 0
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

// 辅助函数1
// 把num表示为二进制
void ToBinary(int num, int binary[], int v) {
    for (int i = 0; i < v; ++i) {
        binary[i] = num & 1;    // 取最低位
        num = num >> 1;         //右移一位
    }
}

// 辅助函数2 (有变动)
// 计算v位二进制中1的个数
// high:表示本方案最后插花的位置。
int Count1(int binary[], int v, int &high) {
    int count = 0;
    high = -1;
    //high = 0;   // 202211201045 liuyang fix 视频课程中给出的high是-1。
    for (int i = 0; i < v; ++i) {
        if (binary[i] == 1) {
            high = i;
            count++;
        }
    }
    return count;
}

int main(int argc, char const *argv[]) {
    //cout << "hello, world" << endl;
    // 定义美感数组
    // 见外层

    // 定义部分美感和数组，设定初值
    int partial_sum[1<<V] = {0};

    // 定义最大美感得分和、相应方案
    int best_beauty = 0, best_put = 0;

    // 枚举0 ~ 2^v - 1
    for (int i = 1; i < (1 << V); ++i) {// 2^V的计算方法: 1 << V 注意这里i从1开始1！！
        // 计算具体插花方案
        // -> 计算部分插花方案
        int binary[V] = {0};
        ToBinary(i, binary, V);
        int high;
        int flowers = Count1(binary, V, high);
        if (flowers > F) {   // 不是合法的方案
            continue;
        }

        // 计算美感得分和
        // -> 递推部分美感和
        /*
        int sum_beauty = 0;
        for (int vase = 0, flower = 0; vase < V; ++vase) {
            if (binary[vase] == 1) {    // 插了花
                sum_beauty += beauty[vase][flower];
                flower++;
            }
        }
        */
        partial_sum[i] = partial_sum[i - (1 << high)] + beauty[high][flowers - 1];// TODO 202211200059 Segment Fault

        // 维护最大美感得分和、相应方案
        /*
        if (sum_beauty > best_beauty) {
            best_beauty = sum_beauty;
            best_put = i;
        }
        */
        if (flowers == F && partial_sum[i] > best_beauty) {
            best_beauty = partial_sum[i];// 最大美感得分
            best_put = i;// 相应方案
        }

    }
    
    // 输出答案
    cout << "最大美感得分和：" << best_beauty << endl;
    cout << "插花方法：";
    int best_binary[V] = {0};
    ToBinary(best_put, best_binary, V);
    for (int vase = 0, flower = 1; vase < V; ++vase) {
        if (best_binary[vase] == 1) {
            cout << flower;
            flower++;
        } else {
            cout << 0;
        }
    }

   return 0;
}