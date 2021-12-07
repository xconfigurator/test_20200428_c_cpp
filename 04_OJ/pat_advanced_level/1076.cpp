/**
 * @file 1076.cpp
 * @author liuyang
 * @brief BFS的应用例子
 * 
 * 题目：Forwards on Weibo
 * https://pintia.cn/problem-sets/994805342720868352/problems/994805392092020736
 * 说明: 
 * OJ状态：
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
int N, L;
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
    int curLayer = 1, nextLayer = 0, layer = 0, count = 0;
    while (!q.empty() && layer < L) {
        int v = q.front();
        q.pop();
        -- curLayer;
        for (int i = 1; i <= N; ++i) {
            if (!flags[i] && mGraph[v][i] != 0) {
                q.push(i);
                flags[i] = 1;
                ++ count;
                ++ nextLayer;
            }
        }
        if (curLayer == 0) {
            ++ layer;
            curLayer = nextLayer;
            nextLayer = 0;
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
            mGraph[f][i] = 1;
        }
        int K;
        cin >> K;
        int* arr = new int[K];// 这个不对啊
        for (int i = 0; i < K; ++i) {
            int v;
            cin >> v;
            arr[i] = BFS(v, L);
        }
        for (int i = 0; i < K; ) {
            cout << arr[i];
            if (i < K - 1) cout << endl;
        }
        delete[] arr;
    }
    return 0;
}