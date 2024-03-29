# 基础（核心）题串讲
>1. 天勤复试上机指导笔记(主体)
>2. LeetCode 入门70题(补充)
>刷题的时候可以跟着视频反复来几遍

## 提要  
>pat_advanced_level/1020.cpp 03:50 (背！) 二叉树，给后序遍历和中序遍历，输出层序遍历序列。分治法。  
>pat_advanced_level/1043.CPP 02:46 （背！ 包括题目描述都看一下） BST  
>pat_advanced_level/1066.cpp pat_advanced_level/1066.cp 2:14（背！包括题目描述都看一下） 
>[Constructing Roads](http://acm.hdu.edu.cn/showproblem.php?pid=1102)  
    04_OJ/hdu/1102.cpp （背！）
>补：[浙大陈越老师的单链表分块逆转。(这个还是很重要的！) ](https://pintia.cn/problem-sets/988034414048743424/problems/988038293285015552)  
    01_DataStructure/01_zju/3-2.2.c （仅保存伪码 2021/12/22）

## 00. 战前准备
- IDE
- OJ的输入输出
>位置：templates/oj_*.cpp 这些都已经在Visual Studio 2022 Community中验证通过。


## 01. 模拟
>不需要复杂的算法，解题的方法已经在题目描述中告知了。  
101. 模拟1
- [害死人不偿命的（3n+1）猜想](https://pintia.cn/problem-sets/994805260223102976/problems/994805325918486528)  
    pat_basic_level/1001.cpp

- [挖掘机技术哪家强](https://pintia.cn/problem-sets/994805260223102976/problems/994805289432236032)  
    pat_basic_level/1032.cpp

- [找x](https://blog.csdn.net/geek_jerome/article/details/79114301) <--重要！！  
    codeup/1934.cpp  
    codeup 1934 找x 08:40

- [跟奥巴马一起学编程](https://pintia.cn/problem-sets/994805260223102976/problems/994805285812551680)  
    pat_basic_level/1036.cpp

- [日期插值](https://blog.csdn.net/xsj_blog/article/details/51988328) <--重要！！  
    codeup/1928.cpp  
    codeup 1928 日期插值 15:22

102. 模拟2
- [D进制的A+B](https://pintia.cn/problem-sets/994805260223102976/problems/994805299301433344)  
    pat_basic_level/1022.cpp

- [说反话](https://pintia.cn/problem-sets/994805260223102976/problems/994805314941992960)  
    pat_basic_level/1009.cpp


## 02. 算法初步
201. 排序(排序函数的使用 复习一下C/C++语法)  
>[qsort](https://docs.microsoft.com/zh-cn/cpp/c-runtime-library/reference/qsort?view=msvc-160)
    (int | double | char | string | struct)  
    示例汇总
    02_C++_STL_Algorithms/sort_qsort*
    02_C++_STL_Algorithms/sort_sort*
    小结（liuyang 202205201523）：
        STL提供的sort更简洁，推荐。
        若要串联C语法，如指针、函数指针、结构体、结构体数组、比较函数（符号函数）等概念，则用qsort做练习是个很好的综合。
>[sort](https://en.cppreference.com/w/cpp/algorithm/sort)  
- [List Sorting](https://pintia.cn/problem-sets/994805342720868352/problems/994805468327690240)  
    pat_advanced_level/1028.cpp 22:37
    
202. 散列
- [输出PATest](https://pintia.cn/problem-sets/994805260223102976/problems/994805280074743808)  
    pat_basic_level/1043.cpp
- [买还是不买](https://pintia.cn/problem-sets/994805342720868352/problems/994805374509498368)  
    pat_advanced_level/1092.cpp 07:15

203. 分治  
- 介绍分治算法 - 快速排序（2分钟讲完）  
- [航电 OJ 题目 Max Sum](http://acm.hdu.edu.cn/showproblem.php?pid=1003)貌似就是最大子列和  
    hdu/1003.cpp   
    
- 补: [浙大DS 最大子列和的各种算法讲解](https://www.bilibili.com/video/BV1JW411i731?p=8)  
- 补: [Tree Traversals](https://pintia.cn/problem-sets/994805342720868352/problems/994805485033603072)  记录见“二叉树1”

204. 贪心 
- [组个最小数](https://pintia.cn/problem-sets/994805260223102976/problems/994805298269634560)
    pat_basic_level/1023.cpp
- [今年暑假不AC](http://acm.hdu.edu.cn/showproblem.php?pid=2037)
    区间贪心的典型例题  3:53开始
    hdu/2037.cpp

205. 二分
- 二分查找（2分钟讲清楚）  
- [完美数列](https://pintia.cn/problem-sets/994805260223102976/problems/994805291311284224)  
    pat_basic_level/1030.cpp


## 03. 数学问题
301. 简单数学问题  
- [The Black Hole of Numbers](https://pintia.cn/problem-sets/994805342720868352/problems/994805400954585088)  
    pat_advanced_level/1069.cpp

302. 最大公约数与最小公倍数 (高频考点)
- 00_Algorithms/recite/math_gcd.cpp
- 00_Algorithms/recite/math_lcm.cpp

303. 分数的四则运算  
- [有理数四则运算](https://pintia.cn/problem-sets/994805260223102976/problems/994805287624491008)  
    pat_basic_level/1034.cpp

304. 素数 (除了1和本身之外，不能被其他整数整除的一类数。 规定1不是素数。)  
>[Eratosthenes筛法](https://www.bilibili.com/video/BV1Ty4y1n7JH?p=15&spm_id_from=pageDriver)  
- [数素数](https://pintia.cn/problem-sets/994805260223102976/problems/994805309963354112)  
    pat_basic_level/1013.cpp

305. 大整数运算1 (高频考点)  
- 表示，+，-
306. 大整数运算2  
- *，/  
    00_Algorithms/recite/math_biginteger.cpp


## 04. 数据结构专题1
401. 栈
- 栈的极简实现（值得听，一道经典的C语法习题。）  
- [Pop Sequence](https://pintia.cn/problem-sets/994805342720868352/problems/994805427332562944)  
    04_OJ/pat_advanced_level/1051.cpp  

- 补：浙大何钦铭老师讲解的栈的例子。  
- 补: imooc  
    00_Algorithms/recite_essential_tools/Stack01Conversion.cpp  
    00_Algorithms/recite_essential_tools/Stack02ParenthesisMatching.cpp
- 补：[LeetCode 20.有效的括号](https://leetcode-cn.com/problems/valid-parentheses/)  
    04_OJ/leetcode_70/LC20.cpp 
- 补：[LeetCode 496.下一个更大元素](https://leetcode-cn.com/problems/valid-parentheses/)  
    04_OJ/leetcode_70/LC496StackStack.cpp

402. 队列
- 队列的测试代码 
    02_C++_STL/queue02.cpp
- [Mice and Rice](https://pintia.cn/problem-sets/994805342720868352/problems/994805419468242944)     
    04_OJ/pat_advanced_level/1056.cpp  

- 补：LeetCode 933
    04_OJ/leetcode_70/LC933.cpp
    
403. 链表
- 链表的定义（值得听，各种定义方法总结）00:00 - 05:12  
    01_DataStructure/List.md
- [Sharing](https://pintia.cn/problem-sets/994805342720868352/problems/994805460652113920) 05:12  
    04_OJ/pat_advanced_level/1032.cpp  

- 补：[LeetCode 203 删除链表的元素](https://leetcode-cn.com/problems/remove-linked-list-elements/)
    04_OJ/leetcode_70/LC203.cpp 
- 补：[LeetCode 206 链表逆转](https://leetcode-cn.com/problems/reverse-linked-list/)
    04_OJ/leetcode_70/LC206.cpp
- 补：[浙大陈越老师的单链表分块逆转。(这个还是很重要的！) ](https://pintia.cn/problem-sets/988034414048743424/problems/988038293285015552)  
    01_DataStructure/01_zju/3-2.2.c （仅保存伪码 2021/12/22）

404. 二叉树1(链式存储) 
- 二叉树讲解（串讲，很利索！）  
    01_DataStructure/TreeBinary.md
- [Tree Traversals](https://pintia.cn/problem-sets/994805342720868352/problems/994805485033603072)  
    pat_advanced_level/1020.cpp 03:50 (背！)

405. 二叉树2(数组存储)  
- 二叉树讲解（结构数组）  
    01_DataStructure/TreeBinary.md
- [Invert a Binary Tree](https://pintia.cn/problem-sets/994805342720868352/problems/994805365537882112)  
    pat_advanced_level/1102.cpp

406. 树  
- 树讲解  
    机考中，对采用结构数组存储的树考察得更多。
    01_DataStructure/Tree.md
- [Path of Equal Weight](https://pintia.cn/problem-sets/994805342720868352/problems/994805424153280512)  
    pat_advanced_level/1053.cpp 04:35           DFS

407. 排序二叉树 BST
- 排序二叉树的讲解（非常利索，3分钟全讲清。）  
- [Is It a Binary Search Tree](https://pintia.cn/problem-sets/994805342720868352/problems/994805440976633856)  
    pat_advanced_level/1043.CPP 02:46 （背！ 包括题目描述都看一下）  

408. 平衡二叉树 AVL  
- 平衡二叉树的讲解  
    最小不平衡子树（以离插入节点最近，且平衡因子绝对值大于1的节点做根的子树。）   
    需要翻看一下何钦铭老师讲解的平衡调整
- [Root of AVL Tree](https://pintia.cn/problem-sets/994805342720868352/problems/994805404939173888)  
    pat_advanced_level/1066.cp 2:14（背！包括题目描述都看一下） 

## 05. 数据结构专题2 - 图的相关算法
501. 图的基本概念（7分钟串讲核心概念）  
    邻接矩阵 邻接表 DFS BFS 

502. BFS应用实例 微博转发 10分钟  
- [Forwards on Weibo](https://pintia.cn/problem-sets/994805342720868352/problems/994805392092020736)  
    04_OJ/pat_advanced_level/1076.cpp      BFS（树那一节是一个DFS的例子）
    联想：五夜十篇第二篇

503. 生成树 10分钟  
- [畅通工程](http://acm.hdu.edu.cn/showproblem.php?pid=1232)  
    04_OJ/hdu/1232.cpp 并查集（背！）  

504. 生成树（最小生成树）
- [Constructing Roads](http://acm.hdu.edu.cn/showproblem.php?pid=1102)
    04_OJ/hdu/1102.cpp MST Kruskal（背！）

# 补充1
1. 数组
- 补：[LeetCode 485. 最大连续 1 的个数](https://leetcode-cn.com/problems/max-consecutive-ones/)  
    O4_OJ/leetcode_70/LC485.cpp 数组
- 补：[LeetCode 283. 移动零](https://leetcode-cn.com/problems/move-zeroes/)  
    04_OJ/leetcode_70/LC283.cpp 数组
- 补：[LeetCode 27. 移除元素(双指针技术)](https://leetcode-cn.com/problems/remove-element/)  
    04_OJ/leetcode_70/LC27.cpp  数组
2. 哈希表
- 浙大何钦铭老师对hash表的讲解。
- 补:[LeetCode 217. 存在重复元素 ](https://leetcode-cn.com/problems/contains-duplicate/)  
    04_OJ/leetcode_70/LC217Map.cpp 说明可以使用统计单词词频的套路 不过显然用set更简单
- 补:[LeetCode 389. 找不同](https://leetcode-cn.com/problems/find-the-difference/)  
    04_OJ/leetcode_70/LC389.cpp 元素已经确定的情况下使用数组来表示哈希表
- 补:[LeetCode 496.下一个更大元素](https://leetcode-cn.com/problems/valid-parentheses/)  
    04_OJ/leetcode_70/Lc496StackHashTable.cpp STL vector + map + stack
3. 集合
- 补:[LeetCode 705.设计哈希集合 ](https://leetcode-cn.com/problems/design-hashset/)  
    pause 04_OJ/leetcode_70/LC705.cpp 视频里介绍了一个特别浪费空间的算法。  
    还是听何钦铭老师对哈希表的讲解吧。
- 补:[LeetCode 217. 存在重复元素 ](https://leetcode-cn.com/problems/contains-duplicate/)    
    04_OJ/leetcode_70/LC217Set.cpp 充分利用STL set的特性，及插入重复后会在pair的返回值的second中写入false。
4. 堆
- 补:[LeetCode 215.数组中的第K个最大元素](https://leetcode-cn.com/problems/kth-largest-element-in-an-array/)  
    04_OJ/leetcode_70/LC215HeapAlgorithm.cpp  
    04_OJ/leetcode_70/LC215HeapPriorityQueue.cpp
- 补:[LeetCode 692.前K个高频单词 ](https://leetcode-cn.com/problems/top-k-frequent-words/)  
    04_OJ/leetcode_70/LC692HeapHashTable.cpp 

# 补充2
0. LeetCode 509 斐波那契数列  
    04_OJ/leetcode_70/LC509.cpp （斐波那契数列）  
    听清华 程序设计基础的“兔子数列”问题视频讲解。
1. B树
2. B+树（*）
3. KMP（*）
# 附录
>20211205 codeup已经无法访问了。貌似是这个网站已经彻底不存在了。  
>20211205 杭电OJ也无法访问。
>20220520 杭电OJ已可访问
