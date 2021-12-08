/**
 * @file 1053.cpp
 * @author liuyang
 * @brief 树练习题 Path of Equal Weight (结构体数组存储) DFS的应用例子
 * 
 * 题目：Path of Equal Weight
 * https://pintia.cn/problem-sets/994805342720868352/problems/994805424153280512
 * 说明：04:35, 题目描述比较繁琐，听视频解释把。跟着视频的思路能把代码比较流畅地撸出来就ok。
 *       07:49开始讲代码。
 * OJ状态：答案正确
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
#include <algorithm>                // sort
using namespace std;

const int MAX_SIZE = 110;           // 题目保证节点个数小于等于100。

struct TNode {
    int weight;                     // 节点权重
    int children[MAX_SIZE];         // 子节点信息
    int n;                          // 子节点数量
};
TNode nodes[MAX_SIZE];

bool cmp(int a, int b) {
    return nodes[a].weight > nodes[b].weight; // 递减排序
}

int N, M, S;                        // 树中节点的个数 非叶节点的个数 需要计算的那个S
int path[MAX_SIZE];                 // 保存从根节点到当前叶子节点的信息

/**
 * @brief 
 * 
 * @param index     将要访问的节点的地址
 * @param numNode   当前路径（需要是已包含将要访问的节点）上已经有的节点数
 * @param sum       当前路径（需要是已包含将要访问的节点）上所有节点的权值和
 */
void DFS(int index, int numNode, int sum) {
    if (sum > S) return;                        // 超了，不满足
    if (sum == S) {                             // 接近满足要求了
        if (nodes[index].n != 0) return;        // 不是叶节点，不满足
        for (int i = 0; i < numNode; ++i) {     // 满足
            cout << nodes[path[i]].weight;
            // 输出，注意格式。最后一个值的后面不可以有空格。
            if (i < numNode - 1) {
                cout << " ";
            } else {
                cout << endl;
            }
            //return ; // 这个return写错地方了。
        }
        return; // 应该在这里return。
    }
    // DFS （树中没有环路，所以不需要图DFS中的那个visited数组）
    for (int i = 0; i < nodes[index].n; ++i) {  // 当前访问的节点有几个孩子就有几个递归入口
        int temp = nodes[index].children[i];    // 当前访问节点的孩子节点中的一个的地址
        path[numNode] = temp;                   // 记录路径， temp就是下一个将要访问的节点的地址
        DFS(temp, numNode + 1, sum + nodes[temp].weight);
    }
}

int main(int argc, char const *argv[]) {
    cin >> N >> M >> S;                         // 树中节点的个数 非叶节点的个数 需要计算的那个S(路径长度或者叫权值和)
    for (int i = 0; i < N; ++i) {               // 每个节点的权重（每个节点的值）
        cin >> nodes[i].weight;
        nodes[i].n = 0;
    }

    // 建树（处理非叶节点，非叶节点数是M）
    int ID, K, child;
    for (int i = 0; i < M; ++i) {               // 节点数据 （节点编号 | 子节点数 | 子节点编号列表(孩子节点在数组中的下标或者叫孩子节点在静态多叉链表中的地址)）
        cin >> ID >> K;
        for (int j = 0; j < K; ++j) {
            cin >> child;                       
            nodes[ID].children[nodes[ID].n++] = child;
        }
        sort(nodes[ID].children, nodes[ID].children + nodes[ID].n, cmp); // 这是给当前节点的children数组排序
    }
    DFS(0, 1, nodes[0].weight);
    return 0;
}