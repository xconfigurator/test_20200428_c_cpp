/**
 * @file 1053.cpp
 * @author liuyang
 * @brief 树练习题 Path of Equal Weight (结构体数组存储)
 * 
 * 题目：Path of Equal Weight
 * https://pintia.cn/problem-sets/994805342720868352/problems/994805424153280512
 * 说明：04:35, 题目描述比较繁琐，听视频解释把。跟着视频的思路能把代码比较流畅地撸出来就ok。
 *       07:49开始讲代码。
 * OJ状态：
 * 
 * @version 0.1
 * @date 2021-12-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
// 输入数据简述：
// 树中节点的个数 非叶节点的个数 需要计算的那个S
// 每个节点的权重（每个节点的值）
// 节点数据 节点编号 | 子节点数 | 子节点编号列表

#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_SIZE = 110;

struct TNode {
    int weight;
    int children[MAX_SIZE];
    int n;
};
TNode nodes[MAX_SIZE];

bool cmp(int a, int b) {
    return nodes[a].weight > nodes[b].weight;
}

int N, M, S;
int path[MAX_SIZE];

void DFS(int index, int numNode, int sum) {
    // TODO
}