/**
 * @file 1102.cpp
 * @author liuyang copy from tianqin
 * @brief MST Kruskal
 * 

注意审题。本题的下标从1开始。

Sample Input:
3
0 990 692
990 0 179
692 179 0
1
1 2

Sample Output:
179

 * @version 0.1
 * @date 2021-12-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_ROADS = 10010;

typedef struct {
    int a, b;
    int w;
} Road;

int n, v[105];              // n来接收要处理的图的规模， v数组用来保存并查集。

bool cmp(Road a, Road b) {
    return a.w < b.w;
}

// 在并查集中寻找根节点
int getRoot(int a) {
    while (a != v[a]) {
        a = v[a];
    }
    return a;
}

int main(int argc, char const *argv[]) {
    Road roads[MAX_ROADS];
    while (cin >> n) {                      // 遇到0退出
        int a[103][103];                    // 邻接矩阵。尺寸是根据题目估计出来的。
        int k = 0;
        for (int i = 1; i <= n; ++i) {      // 注意本题下标从1开始
            for (int j = 1; j <= n; ++j) {
                cin >> a[i][j];
            }
        }
        int t;                              // 下面记录矩阵中已经存在的路
        cin >> t;
        while (t--) {
            int x, y;
            cin >> x >> y;
            a[x][y] = 0;                    // 赋值为0意思是路存在，但开销不计了(对新修路的总长度没有影响)。Kruskal算法中权值小的路会先被选择。另：长度置为0表示这路已修好。
        }
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {// 只扫描上三角部分（无向图的邻接矩阵是一个对称阵）
                roads[k].a = i;             
                roads[k].b = j;
                roads[k].w =  a[i][j];      
                k++;
            }
        }
        // 初始化并查集
        for (int i = 1; i < 105; i++) {
            v[i] = i;
        }
        sort(roads, roads + k, cmp);        // 将roads数组依照权值，从小到大排序。
        int s = 0;                          // 记录总长度
        for (int i = 0; i < k; i++) {
            int x1 = getRoot(roads[i].a);
            int x2 = getRoot(roads[i].b);
            if (x1 != x2) {
                s += roads[i].w;
                v[x1] = x2;
            }
        }
        cout << s << endl;
    }
    return 0;
}