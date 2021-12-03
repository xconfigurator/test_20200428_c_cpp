>C/C++的链表定义
```C
typedef struct LNode {
    int data;
    struct LNode* next;
} LNode;

LNode* p = (LNode*) malloc(sizeof(LNode));
p->next = NULL;
```

>C++的链表定义1
```C++
class LNode {
public:
    int data;
    LNode* next;
};
LNode* p = new LNode;
p->next = NULL;
```

>C++的链表定义2
```C++
struct LNode {
    int data;
    LNode* next;
};
// 法一
LNode* p = (LNode*) malloc(sizeof(LNode));
p->next = NULL;
// 法二
LNode* p = new LNode;
p->next = NULL;
```
>静态链表
```C++
// 静态链表
typedef struct {
    int data;
    int next;
} LNode;

nodes[MAX_SIZE];
```