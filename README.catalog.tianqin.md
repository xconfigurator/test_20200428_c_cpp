# 天勤复试上机指导
## 00. 战前准备
- IDE
- OJ的输入输出
>位置：templates/oj_io_* 这些都已经在Visual Studio 2022 Community中验证通过。

## 01. 模拟
>不需要复杂的算法，解题的方法已经在题目描述中告知了。  
101. 
[害死人不偿命的（3n+1）猜想](https://pintia.cn/problem-sets/994805260223102976/problems/994805325918486528)
pat_basic_level/1001.cpp

[挖掘机技术哪家强](https://pintia.cn/problem-sets/994805260223102976/problems/994805289432236032)
pat_basic_level/1032.cpp

[找x]() <--重要！！
codeup/1934.cpp
codeup 1934 找x 08:40


[跟奥巴马一起学编程](https://pintia.cn/problem-sets/994805260223102976/problems/994805285812551680)
pat_basic_level/1036.cpp

[日期插值]() <--重要！！
codeup/1928.cpp
codeup 1928 日期插值 15:22

102. 
[D进制的A+B](https://pintia.cn/problem-sets/994805260223102976/problems/994805299301433344)
pat_basic_level/1022.cpp

[说反话](https://pintia.cn/problem-sets/994805260223102976/problems/994805314941992960)
pat_basic_level/1009.cpp


## 02. 算法初步
201. 排序(排序函数的使用)  
[qsort](https://docs.microsoft.com/zh-cn/cpp/c-runtime-library/reference/qsort?view=msvc-160)
int double char string struct  
[sort](https://en.cppreference.com/w/cpp/algorithm/sort)  
[List Sorting](https://pintia.cn/problem-sets/994805342720868352/problems/994805468327690240)
pat_advanced_level/1028.cpp

202. 散列
[输出PATest](https://pintia.cn/problem-sets/994805260223102976/problems/994805280074743808)
pat_basic_level/1043.cpp
[买还是不买](https://pintia.cn/problem-sets/994805342720868352/problems/994805374509498368)
pat_advanced_level/1092.cpp 07:15

203. 分治
最大子列和问题
TODO [浙大DS 最大子列和的各种算法讲解]()  
视频：https://www.bilibili.com/video/BV1JW411i731?p=8
TODO [航电 OJ 题目 Max Sum](http://acm.hdu.edu.cn/showproblem.php?pid=1003)  
视频：https://www.bilibili.com/video/BV1Ty4y1n7JH?p=9&spm_id_from=pageDriver)

204. 贪心 
TODO 组个最小数
TODO 区间贪心的典型例题

205. 二分
TODO 完美数列

## 03. 数学问题
301. 简单数学问题
TODO pat_advanced_level/1069.cpp

302. 最大公约数与最小公倍数 (高频考点)
math_gcd.cpp
math_lcm.cpp

303. 分数的四则运算  
[有理数四则运算](https://pintia.cn/problem-sets/994805260223102976/problems/994805287624491008)
pat_basic_level/1034.cpp

304. 素数 (出了1和本身之外，不能被其他整数整除的一类数。 规定1不是素数。)  
Eratosthenes筛法
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=15&spm_id_from=pageDriver
[数素数](https://pintia.cn/problem-sets/994805260223102976/problems/994805309963354112)
pat_basic_level/1013.cpp

305. 大整数运算1 (高频考点)  
表示，+，-
306. 大整数运算2   
*，/

## 04. 数据结构专题1
401. 栈  TODO
- 栈的极简实现（值得听，一道经典的C语法习题。）  
- [Pop Sequence](https://pintia.cn/problem-sets/994805342720868352/problems/994805427332562944)  
    04_OJ/pat_advanced_level/1051.cpp

402. 队列
- 队列的测试代码 
    02_C++_STL/queue02.cpp
- [Mice and Rice](https://pintia.cn/problem-sets/994805342720868352/problems/994805419468242944)     
    04_OJ/pat_advanced_level/1056.cpp
- 补：LeetCode 933
    04_OJ/leetcode_70/LC933.cpp
    
403. 链表   TODO
```C
typedef struct LNode {
    int data;
    struct LNode* next;
} LNode;

LNode* p = (LNode*) malloc(sizeof(LNode));
```
TODO pat_advanced_level/1032.cpp

404. 二叉树1(链式存储)
TODO pat_advanced_level/1020.cpp

405. 二叉树2(数组存储)
TODO pat_advanced_level/1102.cpp

406. 树
TODO pat_advanced_level/1053.cpp

407. 排序二叉树
TODO pat_advanced_level/1043.CPP

408. 平衡二叉树
TODO pat_advanced_level/1066.cpp

## 05. 数据结构专题2 - 图的相关算法
501. 图的基本概念  
邻接表 邻接矩阵 DFS BFS 

502. BFS应用实例 微博转发
TODO pat_advanced_level/1076.cpp

503. MST (最小)生成树(本题没有提最小)
TODO HDU1232
[畅通工程](http://acm.hdu.edu.cn/showproblem.php?pid=1232)

504. MST 最小生成树 (重点题目) kruskal
TODO HDU1102
[Constructing Roads](http://acm.hdu.edu.cn/showproblem.php?pid=1102)
