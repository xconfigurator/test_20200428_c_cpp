/**
 * @file 1232.cpp
 * @author liuyang copy from tianqin
 * @brief 并查集练习
 * 
 Sample Input:
4 2
1 3
4 3
3 3
1 2
1 3
2 3
5 2
1 2
3 5
999 0
0

 Sample Output:
1
0
2
998
 * 
 * @version 0.1
 * @date 2021-12-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

const int MAX_SIZE = 1001;      // 表示图的尺寸
int v[MAX_SIZE];                // 并查集(这里面保存了多棵树)

int getRoot(int x) {
    while (x != v[x]) {
        x = v[x];
    }
    return x;
}

int main(int argc, char const *argv[]) {
    int n, m;                   // 第一行的两个值   n 节点树 m是已有的边数
    int x, y;                   // 每一行的两个值
    while (cin >> n >> m && n) {// n = 0 退出
        for (int i = 1; i <= n; ++i) {
            v[i] = i;           // 表示每个节点都是孤立的(每一组都要初始化一下并查集)
        }
        while (m--) {
            cin >> x >> y;
            x = getRoot(x);
            y = getRoot(y);
            if (x != y) {
                v[x] = y;
            }
        }
        int count = -1;
        for (int i = 1; i <= n; ++i) {  // 数一下v中有几棵树（或者说v中有几个集合。）
            if (v[i] == i) {
                ++count;
            }
        }
        cout << count << endl;          // 前面给count赋-1，经过查找后，count正好为把各个集合个数-1，即正好是把各个集合连接起来的边数。
    }
    return 0;
}