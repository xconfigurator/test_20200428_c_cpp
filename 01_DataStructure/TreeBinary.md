# 二叉树
>链式结构
```C++
typedef struct BTNode {
    int data;
    struct LNode* lChild;
    struct LNode* rChild;s
} BTNode;
```
>顺序结构(联想静态链表)
```C++
typedef struct BTNode {
    int data;
    int lChild;
    int rChild;
} BTNode;
// 一般根据需要估计出需要的大小
BTNode nodes[5];
```

>遍历: DFS（前序、中序、后序），BFS。
