/**
 * @file 1043.cpp
 * @author liuyang
 * @brief BST练习 背！
 * 
 * 题目：Is It a Binary Search Tree
 * https://pintia.cn/problem-sets/994805342720868352/problems/994805440976633856
 * 如果输入是一个BST的先序遍历结果，先打印一个YES，然后再打印这棵BST的后序遍历结果。
 * 如果输入是一个镜像BST（交换原BST的所有左右子树）的先序遍历结果，则也做同样的事。
 * 如果两者都不是就直接打印NO
 * 说明：背！ 包括题目说明都好好看看。
 * OJ状态：答案正确
 * 
 * @version 0.1
 * @date 2021-12-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

const int MAX_SIZE = 1010;          // 题目保证小于1000

typedef struct BTNode {
    int data;
    struct BTNode* lChild;
    struct BTNode* rChild;
} BTNode;

int N;
int preorder[MAX_SIZE];

// 建BST节点
void insert1(BTNode* &x, int a) {
    if (x == NULL) {
        x = new BTNode();
        x->data = a;
        x->lChild = x->rChild = NULL;
    } else {
        if (a < x->data) {
            insert1(x->lChild, a);// 去左子树上插入
        } else {
            insert1(x->rChild, a);// 去右子树上插入
        }
    }
}

// 建镜像BST节点
void insert2(BTNode* &x, int a) {
    if (x == NULL) {
        x = new BTNode();
        x->data = a;
        x->lChild = x->rChild = NULL;
    } else {
        if (a < x->data) {
            insert2(x->rChild, a);// 去右子树上插入
        } else {
            insert2(x->lChild, a);// 去左子树上插入
        }
    }
}

// 建BST
BTNode* buildTree1(BTNode* root, int index) {
    while (index < N) {
        insert1(root, preorder[index]);
        index++;
    }
    return root;
}

// 建镜像BST
BTNode* buildTree2(BTNode* root, int index) {
    while (index < N) {
        insert2(root, preorder[index]);
        index++;
    }
    return root;
}

int flag1 = 1, M = 0;// flag1用于标记是否成功匹配，M用来计数
void checkTraversePreOrder(BTNode* root) {
    if (M < N && root->data != preorder[M]) { 
        flag1 = 0;
        return;
    }
    M++;
    if (root->lChild != NULL) checkTraversePreOrder(root->lChild);
    if (root->rChild != NULL) checkTraversePreOrder(root->rChild);
}

int flag2 = 0;// 这个标志纯属是为了控制输出格式
void outputTraversePostOrder(BTNode* root) {
    if (root->lChild != NULL) outputTraversePostOrder(root->lChild);
    if (root->rChild != NULL) outputTraversePostOrder(root->rChild);
    if (0 == flag2) {
        cout << root->data;
        flag2 = 1;
    } else {
        cout << " " << root->data;
    }
}

int main(int argc, char const *argv[]) {
    cin >> N;

    // 构造两棵树，一棵BST,另一棵镜像BST
    BTNode* root1 = new BTNode();
    root1->lChild = root1->rChild = NULL;
    root1->data = -1;
    BTNode* root2 = new BTNode();
    root2->lChild = root2->rChild = NULL;
    root2->data = -1;

    for (int i = 0; i < N; ++i) {
        cin >> preorder[i];
        if (i == 0) {
            root1->data = preorder[0];
            root2->data = preorder[0];
        }
    }

    // 构建BST,并检查是否输入序列是先序遍历
    buildTree1(root1, 1);
    checkTraversePreOrder(root1);
    if (flag1) {
        cout << "YES" << endl;
        outputTraversePostOrder(root1);
    } else {
        // 构建镜像BST，并检查是否输入序列是先序遍历
        flag1 = 1, M = 0;// 检查标志复位
        buildTree2(root2, 1);
        checkTraversePreOrder(root2);
        if (flag1) {
            cout << "YES" << endl;
            outputTraversePostOrder(root2);
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}