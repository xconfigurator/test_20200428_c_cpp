/**
 * @file 1066.cpp
 * @author liuyang
 * @brief AVL练习题 背！
 * 
 * 题目：Root of AVL Tree
 * https://pintia.cn/problem-sets/994805342720868352/problems/994805404939173888
 * 说明：背。 2:14。 提示，结合视频演示，撸出对应代码。
 * OJ状态：
 * 有问题！！！
 * 
 * @version 0.1
 * @date 2021-12-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

typedef struct BTNode {
    int data;
    struct BTNode *lChild, *rChild;     // 见一下这种写法。
} BTNode;

BTNode *rotateL(BTNode* root) {
    BTNode* t = root->rChild;
    root->rChild = t->lChild;
    t->lChild = root;
    return t;
}

BTNode* rotateR(BTNode* root) {
    BTNode* t = root->lChild;
    root->lChild = t->rChild;
    t->rChild = root;
    return t;
}

BTNode* rotateLR(BTNode* root) {
    root->lChild = rotateL(root->lChild);
    return rotateR(root);
}

BTNode* rotateRL(BTNode* root) {
    root->rChild = rotateR(root->rChild);
    return rotateL(root);
}

int getHeight(BTNode *root) {// 用于检测平衡因子
    if (root == NULL) return 0;
    return max(getHeight(root->lChild), getHeight(root->rChild)) + 1;
}

// 创建AVL
void insert(BTNode* root, int data) {
    if (root == NULL) {
        root = new BTNode();
        root->data = data;
        root->lChild = root->rChild = NULL;
    } else if (data < root->data) {// 向左子树插
        insert(root->lChild, data);
        if (getHeight(root->lChild) - getHeight(root->rChild) == 2) {// 这一步就是插入到左子树上的，所以一定是左子树的高度比右子树增高，至少不低，故不需要取绝对值。
            // 若插到左子树的左边则执行rotateR
            // 若插到左子树的右边则执行rotateLR
            root = data < root->lChild->data ? rotateR(root) : rotateLR(root);
        }
    } else { // 向右子树插
        insert(root->rChild, data);
        if (getHeight(root->lChild) - getHeight(root->rChild) == -2) {// 同理
            root = data > root->rChild->data ? rotateL(root) : rotateRL(root);
        }
    }
}

int main(int argc, char const *argv[]) {
    int N, data;
    cin >> N;
    BTNode* root = NULL;
    for (int i = 0; i < N; i++) {
        cin >> data;
        insert(root, data);
    }
    cout << root->data;
    return 0;
}