/**
 * @file 1020.cpp
 * @author liuyang copy from tianqin
 * @brief 二叉树练习 Tree Traversals    （链式存储）
 * 
 * 题目：Tree Traversals
 * https://pintia.cn/problem-sets/994805342720868352/problems/994805485033603072
 * 说明：给出后续遍历和中序遍历序列，输出层序遍历序列。 04:13 代码：08:39
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

const int MAX_SIZE = 50;            // 题目保证是<=30

typedef struct BTNode {
    int data;
    struct BTNode* lChild = NULL;       // 纯C中不能这样写，必须是构造了结点之后再给赋值。
    struct BTNode* rChild = NULL;
} BTNode;

int postOrder[MAX_SIZE];
int inOrder[MAX_SIZE];
queue<BTNode*> levelOrder;

// 利用后续遍历和中序遍历序列构建二叉树
BTNode * create(int postL, int postR, int inL, int inR) {
    if (postL <= postR) {   // postL == postR的时候序列长度为1，还需要处理一步。
        BTNode* root = new BTNode;
        root->data = postOrder[postR];
        int inIdx;          // root在中序序列中的位置。
        // 在中序字符串中查找根的位置
        for (inIdx = inL; inIdx <= inR; ++inIdx) {  
            if (inOrder[inIdx] == postOrder[postR]) break;// 找到了
        }
        int num = inIdx - inL;
        root->lChild = create(postL, postL + num - 1, inL, inIdx - 1);
        root->rChild = create(postL + num, postR - 1, inIdx + 1, inR);
        return root;
    } else {
        return NULL;        // 递归出口。只有当序列长度为0的时候才不处理。
    }
}

// 层序遍历二叉树
void traverseLevel(BTNode* root, int N) {
    int n = 0;
    levelOrder.push(root);
    while (!levelOrder.empty()) {
        BTNode* temp = levelOrder.front();
        levelOrder.pop();
        n++;
        // 输出，注意输出格式
        if (n == N) {       
            cout << temp -> data;       // 最后一个值
        } else {
            cout << temp -> data << ' ';// 也可以写" "
        }
        // 层序
        if (temp->lChild != NULL) levelOrder.push(temp->lChild);// 注意不能写成 if (!temp->lChild) 2021/12/3
        if (temp->rChild != NULL) levelOrder.push(temp->rChild);
    }
}

int main(int argc, char const *argv[]) {
    int N;
    cin >> N;       // 后序遍历、中序遍历的节点个数
    // 读入后续遍历序列
    for (int i = 0; i < N; ++i) {
        cin >> postOrder[i];// 这样可以么？ 当然可以！
    }
    // 读入中序遍历序列
    for (int i = 0; i < N; ++i) {
        cin >> inOrder[i];
    }
    BTNode* binaryTree = create(0, N - 1, 0, N -1);
    traverseLevel(binaryTree, N);
    return 0;
}
