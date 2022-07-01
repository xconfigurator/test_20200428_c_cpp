/**
 * @file ShortestPath.Dijkstra.tsinghua.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-07-01
 * 
 * 作    者：wuxj（目测应该是 邬晓钧）
 * 编制时间：2003年4月28日
 * 主要功能：计算有向图最短路径（Dijkstra算法）
 * 《程序设计基础》 第二版 P230
 * 《程序设计基础》 第四版 P223
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*
1. 
贪心 BFS
单元有向图最短路径Dijkstra算法 - 《程序设计基础》 清华大学 第4版 p223

2. 
贪心 BFS
单源有向图最短路径地杰斯特拉算法
@since 2021/11/20
@author liuyang

参考视频：
正月点灯笼

3. 
贪心 BFS
把灯笼博士用python演示的代码改写为C++实现。
*/
#include <iostream>
#include <limits>           // 定义了INT_MAX
using namespace std;

const int SIZE = 5;         // 图中定点总数

/**
 * @brief 计算有向图中起点到终点的最短距离
 * 
 * @param Edge      图信息
 * @param nStart    起点
 * @param nDest     终点
 * @param Path      路径信息（输出参数）
 * @return int      最短路径的长度
 */
int Dijkstra(int Edge[SIZE][SIZE], int nStart, int nDest, int Path[SIZE]) {
    int MinDis[SIZE];       // 起点到各点的最短路径长度
    bool InS2[SIZE];        // 标志各店是否在S2中

    // 初始化
    for (int i = 0; i < SIZE; i++) {
        InS2[i] = true;
    }
    InS2[nStart] = false;   // 初始状态只有nStart在S1中，其余在S2中
    for (int i = 0; i < SIZE; i++) {
        MinDis[i] = Edge[nStart][i];    // 初始各店的最短距离
        if (Edge[nStart][i] < INT_MAX) {
            Path[i] = nStart;           // 最短路径的前一点
        } else {
            Path[i] = -1;               // 表示前一点不存在
        }
    }

    // 进行计算
    while(InS2[nDest]) {                // 当nDest还在S2内则计算
        // 查找S2中最短路径长度最小的值
        int nMinLen = INT_MAX;          // 最短路径长度的最小值
        int nPoint = -1;                // 拥有最小的值
        for (int i = 0; i < SIZE; i++) {// 查找
            if (InS2[i] && (MinDis[i] < nMinLen)) {
                nMinLen = MinDis[i];
                nPoint = i;
            }
        }

        if (nMinLen == INT_MAX) break;  // S2中的店不能从起点走到
    
        // 更新S2和MinDis
        InS2[nPoint] = false;           // 该店从S2移入S1
        for (int i = 0; i < SIZE; i++) {
            if (InS2[i] && (Edge[nPoint][i] < INT_MAX)) {   // 有连向S2中点的边
                int nNewLen = nMinLen + Edge[nPoint][i];
                if (nNewLen < MinDis[i]) {                  // 如果原路经长
                    Path[i] = nPoint;                       // 更新路径
                    MinDis[i] = nNewLen;                    // 更新路径长度
                }
            }
        }
    }
    
    return MinDis[nDest];
}

/**
 * @brief 输出路径信息
 * 
 * @param Paht  路径信息
 * @param nDest 终点
 */
void OutputPath(int Path[SIZE], int nDest) {
    if (Path[nDest] == -1) {
        cout << "没有从起点到v" << nDest << "的路径" << endl;
    } else if (Path[nDest] == nDest) {  // 是起点
        cout << "v" << nDest;
    } else {
        OutputPath(Path, Path[nDest]);  // 输出前面的路径
        cout << " --> v" << nDest;      // 输出这一段边
    }
}

int main(int argc, char const *argv[]) {
    int Edge[SIZE][SIZE];               // 图信息
    // 构造图
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            Edge[i][j] = INT_MAX;
        }
        Edge[i][i] = 0;
    }
    Edge[0][1] = 10;
    Edge[0][2] = 12;
    Edge[1][3] = 10;
    Edge[2][4] = 7;
    Edge[3][0] = 15;
    Edge[3][1] = 12;
    Edge[3][4] = 7;

    int Path[SIZE];

    // 计算v0到v4的最短路径长度
    int nPathLength = Dijkstra(Edge, 0, 4, Path);
    if (nPathLength == INT_MAX) {
        cout << "从v0到v4没有路径可通" << endl;
    } else {
        cout << "从v0到v4的最短路径为：" << endl;
        OutputPath(Path, 4);            // 输出v0到v4的最短路径
        cout << endl;
        cout << "路径长度为：" << nPathLength << endl;
    }
    return 0;
}