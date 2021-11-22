/**
 * @file DisjointSet.Lantern.cpp
 * @author your name (you@domain.com)
 * @brief 
 * Disjoint Set（练编程基本功）
 * 
 * 注意：实际计算中可以使用STL的set
 * 
 * 视频：
 * https://www.bilibili.com/video/BV13t411v7Fs
 * 灯笼博士的讲解是直接使用Set抽象接口完成的版本，不过实现也是使用数组。
 * 视频1. 算法讲解
 * 视频2. C++实现 1 
 * 视频3. C++实现 2 对union的优化
 * 
 * 浙大何钦铭老师演示了一种使用数组实现并查集的方法。可以再看看对应的实现。
 * 
 * @version 0.1
 * @date 2021-11-22
 * 
 * @copyright Copyright (c) 2021
 * 
 * 
 * 图：
 *      0
 *      |
 *      1
 *     / \
 *    2   3
 *    | \ |
 *    5   4
 * 
 */
#include <iostream>
#include <cstring>
using namespace std;

// 英语：vertex 复数 vertices
#define VERTICES 6
#define EDGES 6 // 5 无环 6 有环（需要添加边{2, 4}）

void printArr(int arr[], int length) {
    for (int i = 0; i < length; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void initialize(int arr[], int length) {
    for (int i = 0; i < length; ++i) {
        arr[i] = -1;
    }
}

// 核心：查
int findRoot(int v, int parent[], int length) {
    int vRoot = v;
    while(parent[vRoot] != -1) {// TODO 这个是否不完善？参考一下何钦铭老师的视频
        vRoot = parent[vRoot];
    }
    return vRoot;
}

/**
 * @brief 核心：并
 * 
 * @param x 
 * @param y 
 * @param parent 
 * @param rank  与parent同长度
 * @param length
 * @return int 1 union successfully
 *             0 union failure(当要合并的点正好在同一个集合里的情况) 
 */
int unionVertices(int x, int y, int parent[], int rank[], int length) {
    int xRoot = findRoot(x, parent, length);
    int yRoot = findRoot(y, parent, length);
    if (xRoot == yRoot) {
        // 要合并的两个点在同一个集合中（出现了回路）
        return 0; 
    } else {
        // 合并两个集合
        // 策略1：将x所在的树直接挂到y所在树的根节点下（这样可能会造成在多次合并后树越来越高，从而影响查找效率。）
        //parent[xRoot] = yRoot;// 可先使用第一个策略检查程序编写的正确性。
        // 策略2：针对策略1的优化 在视频3中介绍 记录每棵树的树高 把矮树挂在高树下
        // 不过博士的这个方法比何老师的方法还是略差逊一筹。（增加了一个rank数组，而何版本不需要增加那这个rank数组）
        if (rank[xRoot] > rank[yRoot]) {
            parent[yRoot] = xRoot;
        } else if (rank[xRoot] < rank[yRoot]) {
            parent[xRoot] = yRoot;
        } else {// 注意：这一层并不多余
            parent[xRoot] = yRoot;
            rank[yRoot] ++;
        }   
        return 1;     
    }
}

int main(int argc, char const *argv[]) {
    // 初始化图
    // 1. 顶点
    int parent[VERTICES] = {0};
    int rank[VERTICES] = {0};// 直接就初始化为全0了， 不过其他值不行。
    //int parent[VERTICES];
    //memset(parent, -1, VERTICES);// 都置为-1, TODO 为啥不好使？！只能赋值给第一个元素 20211122
    initialize(parent, VERTICES);// 都置为-1
    //int parent[VERTICES] = {-1};
    //printArr(parent, VERTICES);
    // 2. 边(注意这个6不是VERTICES)
    int edges[EDGES][2] = { {0, 1}, {1, 2}, {1, 3}
                            //, {2, 4} // 注掉之后需要同时修改EDGES为5
                            , {3, 4} // 注掉之后需要同时修改EDGES为5
                            , {2, 5}
                            , {5, 4}
                            };
                            
    // 检测是否有环
    for(int i = 0; i < EDGES; ++i) {// 有环 // 
        int x = edges[i][0];
        int y = edges[i][1];
        if (unionVertices(x, y, parent, rank, VERTICES) == 0) {
            cout << "有环 Cycle detected" << endl;
            cout << "x = " << x << ", y = " << y << endl;
            printArr(rank, VERTICES);// ?? rank 到底有没有起作用，并不清楚。
            return 0;
        }
    }
    cout << "无环 No cycles found." << endl;
    printArr(rank, VERTICES);// ?? rank 到底有没有起作用，并不清楚。
    return 0;
}