/**
 * @file 1102.cpp
 * @author liuyang
 * @brief 二叉树练习 Invert a Binary Tree (数组存储)
 * 
 * 题目：Invert a Binary Tree
 * https://pintia.cn/problem-sets/994805342720868352/problems/994805365537882112
 * 说明：
 * 1. 根据输入构建二叉树，然后输出层序和中序遍历的逆序列。
 * 2. 视频开始讲解静态二叉树（顺序存储结构），在04:56开始讲解例题。
 * OJ状态：答案正确
 * 
 * @version 0.1
 * @date 2021-12-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <queue>
using namespace std;

const int MAX_SIZE = 20;                // 题目保证小于等于10。

// C++定义格式，如果需要C/C++通用，则需要typedef那种。
struct BTNode {
    int data;
    int lChild, rChild;
};
BTNode nodes[MAX_SIZE];

// 逆向层序遍历：从上到下，从右到左。
void traverseReverseLevel(int rootIdx) {
    queue<int> q;
    if (rootIdx != -1) q.push(rootIdx);   // 注意判断根节点是否为空的标志
    int flag = 0;                   // 这是标志位辅助输出
    while (!q.empty()) {
        int k = q.front();
        q.pop();
        // 输出，注意格式，末尾没有空行。
        // 这个flag控制只有第一个不输出前面的空格，记住这个骚气的写法！
        if (!flag) {
            cout << nodes[k].data;
            flag = 1;
        } else {
            cout << " " << nodes[k].data;
        }
        // 逆序核心：先右子树再左子树
        if (nodes[k].rChild != -1) q.push(nodes[k].rChild); 
        if (nodes[k].lChild != -1) q.push(nodes[k].lChild); 
    }
}

int trioFlag = 0;   // 这是标志位辅助中序逆序输出
// 逆向中序遍历：右-中-左
void traverseReverseInOrder(int rootIdx) {
    if (rootIdx == -1) return;
    
    traverseReverseInOrder(nodes[rootIdx].rChild);// 逆向：先右
    // 输出
    if (!trioFlag) {
        cout << nodes[rootIdx].data;
        trioFlag = 1;
    } else {
        cout << " " << nodes[rootIdx].data;
    }
    traverseReverseInOrder(nodes[rootIdx].lChild);// 逆向：后左
}

int main(int argc, char const *argv[]) {
    int N;
    char lChar, rChar;              // 因为输入有可能是'-', 表示没有左右孩子节点，所以类型使用char。
    int hash[MAX_SIZE] = {0};       // 这个哈希表用于在存放二叉树的结构体数组中判断哪一个是根节点。
    // 初始化结构数组
    for (int i = 0; i < MAX_SIZE; ++i) {
        nodes[i].data = -1;
        nodes[i].lChild = -1;
        nodes[i].rChild = -1;
    }

    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> lChar >> rChar;
        if (lChar != '-') {
            nodes[i].lChild = lChar - '0';
            hash[lChar - '0'] = 1;  // 标志这个节点不是根节点，因为它被链接到了一个节点下
        }
        if (rChar != '-') {
            nodes[i].rChild = rChar - '0';
            hash[rChar - '0'] = 1;  // 标志这个节点不是根节点，因为它被链接到了一个节点下
        }
        nodes[i].data = i;          // 这个是本题的特殊点，节点数值就是输入的索引号。
    }
    int rootIdx;
    for (int i = 0; i < N; ++i) {   // 值为0的那个节点的索引号就是根节点的索引号。
        if (!hash[i]) { 
            rootIdx = i;
            break;
        }
    }

    // 逆向层序遍历
    traverseReverseLevel(rootIdx); 
    cout << endl;
    // 逆向中序遍历
    traverseReverseInOrder(rootIdx);

    return 0;
}