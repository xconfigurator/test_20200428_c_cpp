# 树
```C
typedef struct {
    char data;
    int children[MAX_SIZE];
    int n; // 记录当前树节点有几个孩子。
} TNode ;
TNode nodes[MAX_SIZE];
```