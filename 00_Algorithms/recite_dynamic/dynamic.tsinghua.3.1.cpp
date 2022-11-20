/**
 * @file dynamic.tsinghua.3.1.cpp
 * @author your name (you@domain.com)
 * @brief 橱窗的插花问题 - 枚举
 * 清华 程序设计基础 动态规划实例 - 3 邬晓钧
 * 
 * @version 0.1
 * @date 2022-07-02
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

// 辅助函数2
// 计算v位二进制中1的个数
int Count1(int binary[], int v) {
    int count = 0;
    for (int i = 0; i < v; ++i) {
        count += binary[i];
    }
    return count;
}

int main(int argc, char const *argv[]) {
    //cout << "hello, world" << endl;
    // 定义美感数组
    // 见外层

    // 定义最大美感得分和、相应方案
    int best_beauty = 0, best_put = 0;

    // 枚举0 ~ 2^v - 1
    for (int i = 0; i < (1 << V); ++i) {// 2^V的计算方法: 1 << V
        // 计算具体插花方案
        int binary[V] = {0};
        ToBinary(i, binary, V);
        if (Count1(binary, V) != F) {   // 不是合法的方案
            continue;
        }

        // 计算美感得分和
        int sum_beauty = 0;
        for (int vase = 0, flower = 0; vase < V; ++vase) {
            if (binary[vase] == 1) {    // 插了花
                sum_beauty += beauty[vase][flower];
                flower++;// liuyang 这个就是题目中要求花的编号只能依次递增的体现。（貌似实际上是简了题目，这同时也可以理解为一种策略。）
            }
        }

        // 维护最大美感得分和、相应方案
        if (sum_beauty > best_beauty) {
            best_beauty = sum_beauty;
            best_put = i;
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