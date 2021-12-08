/**
 * @file 1076.cpp
 * @author liuyang
 * @brief 图练习题 Forwards on Weibo BFS的应用例子
 * 
 * 题目：Forwards on Weibo
 * https://pintia.cn/problem-sets/994805342720868352/problems/994805392092020736
 * 说明: 
 * OJ状态：答案正确
 * 
Sample Input:
7 3
3 2 3 4
0
2 5 6
2 3 1
2 3 4
1 4
1 5
2 2 6

Sample Output:
4
5

 * 
 * @version 0.1
 * @date 2021-12-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <queue>
using namespace std;

const int MAX_SIZE = 1010;
int N, L;           // N用户数（图中节点数） L是转发最大层次数
int mGraph[MAX_SIZE][MAX_SIZE] = {0};

/**
 * @brief 
 * 
 * @param v 起点 
 * @param L 最大限定曾次数
 * 
 * @return int 
 */
int BFS(int v,int L) {
    queue<int> q;
    bool flags[MAX_SIZE] = {0};
    q.push(v);
    flags[v] = 1;
    int curLayerVertexNum = 1, nextLayerVertexNum = 0, layer = 0, count = 0;// 当前访问层的顶点个数 
    while (!q.empty() && layer < L) {
        int v = q.front();
        q.pop();
        -- curLayerVertexNum;
        for (int i = 1; i <= N; ++i) {
            if (!flags[i] && mGraph[v][i] != 0) {
                q.push(i);
                flags[i] = 1;
                ++ count;
                ++ nextLayerVertexNum;
            }
        }
        if (curLayerVertexNum == 0) {
            ++ layer;
            curLayerVertexNum = nextLayerVertexNum;
            nextLayerVertexNum = 0;
        }
    }
    return count;
}

int main(int argc, char const * argv[]) {
    cin >> N >> L;
    for (int i = 1; i <= N; ++i) {
        int t, f;
        cin >> t;
        while (t--) {
            cin >> f;
            mGraph[f][i] = 1;       // 由f号顶点指向i号顶点的边。因为是无权图，所以就拿1代表有边。
        }
    }
    int K;                          // 起点编号的个数
    cin >> K;       
    int* arr = new int[K];          
    for (int i = 0; i < K; ++i) {   // 
        int v;
        cin >> v;
        arr[i] = BFS(v, L);
    }
    for (int i = 0; i < K; ++i) {
        cout << arr[i];
        if (i < K - 1) cout << endl;
    }
    delete[] arr;
    return 0;
}