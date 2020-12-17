/*
寻路问题（未使用剪枝）

视频
https://www.bilibili.com/video/BV1Zb411q7iY?p=39
问题出处
http://www.bailian.openjudge.cn/practice/1724


说明：
DFS

题目要求：
N个城市，编号1到N。城市间有R条单向道路。
每条道路连接两个城市，有长度和过路费两个属性。
Bob只有K块钱，他想从城市1走到城市N。
问最短共需要走多长的路。
如果到不了N，输出-1.

2 <= N <= 100
0 <= K <= 10000
1 <= R <= 10000
每条路的长度 L, 1 <= L <= 100
每条路的过路费 T， 0 <= T <= 100

输入样例：
K
N
R
s1 e1 L1 T1
s1 e2 L2 T2
...
sR eR LR TR

s e 是路的起点和终点

输入示例：
5
6
7
1 2 2 3
2 4 3 3
3 4 2 4
1 3 4 1
4 6 2 1
3 5 2 0
5 4 3 2

输出示例：
11


解题思路：
从城市1开始，深度优先遍历整个图，招到所有能够到达N的走法，选一个最优的。

本题使用邻接表来存放整个图。

@author: liuyang copy from guowei
@since: 2020/12/17
 */
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int MAX_N = 110; // 城市最多数
const int INF = 1 << 30; // 一个很大的数

int K; // 钱 
int N; // 城市
int R; // 道路

// 图：使用邻接表存放图
struct Road {
    int d; // 终点 (本题使用邻接表来存放图) 按照邻接表的特点来看，不需要存放起点, 对G[i],起点就是i。
    int L; // 路的长度
    int t; // 过路费
};
vector< vector< Road > > G(MAX_N); // 二维数组 110行

// 记录到目前为止找到的最佳路径长度
int minLen;
// 记录正在探索的这条路有多长
int totalLen;
// 记录正在走的这条路已经花了多少钱
int totalCost;
// 记录一个城市是否已经走过
int visited[MAX_N];

/*
从s点出发进行深度优先搜索
*/
void dfs(int s);

int main(int argc, char const *argv[]){

    // 读入钱、城市、道路数
    cin >> K >> N >> R;
    // 读入R条边
    for (int i = 0; i < R; ++i) {
        int s;  // 路：起点
        Road r; // 路
        cin >> s >> r.d >> r.L >> r.t; 
        if (s != r.d) { 
            // 去除数据中的回路（起点等于终点）,只有在不是回路的情况下再加入邻接表。
            G[s].push_back(r);
        }
    }

    // 初始化 
    memset(visited, 0, sizeof(visited)); // 标识所有的路径都没有访问过。
    minLen = INF; // 一个很大的数
    totalLen = 0;
    totalCost = 0; 

    // 开始进行DFS
    visited[1] = 1; // 从1号城市开始
    dfs(1); // 深搜（深搜结束后会把长度存放在minLen中）
    if (minLen < INF) {
        cout << minLen << endl; // 问题解决。
    } else {
        cout << "-1" << endl; // 表示找不到路。
    }
    return 0;
}

void dfs(int s) {
    if (s == N) {// 等于出发点，则找到路径
        minLen = min(minLen, totalLen); // 若找到的路径更小，则更新
        return ;
    }
    for (int i = 0; i < G[s].size(); ++i) {// 尝试s的所有边
        Road r = G[s][i];
        // 尝试是否能走到r.d
        // 看看钱是否足够
        if ( totalCost + r.t > K) {
            continue; // 钱不够了，尝试下一条路。
        }
        // 看看是否已经去过这个城市
        if ( !visited[r.d] ) {
            // 尝试去r.d
            visited[r.d] = 1;
            totalLen += r.L;
            totalCost += r.t;
            dfs(r.d);
            // 撤销去r.d的标志
            visited[r.d] = 0;// 撤销访问标记
            totalLen -= r.L;
            totalCost -= r.t;
        }
    }
}