/**
 * @file array06towdemension.cpp
 * @author liuyang
 * @brief 二维数组
 * 
 * 矩阵乘法 Matrix Multiplication (视频 12:33)
 * 1 < m, n, p, q < 8
 * 
输入样例：
2 3
2 4 5
2 1 3
3 3
1 1 1
2 3 2
0 1 4

输出样例：
10 19 30
4 8 16
 * 
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

const int MAX_ROW = 8;
const int MAX_COL = 8; 
int matrixA[MAX_ROW][MAX_COL];
int matrixB[MAX_ROW][MAX_COL];
int matrixC[MAX_ROW][MAX_COL];

int main(int argc, char const *argv[]) {
    int m, n, p, q;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrixA[i][j];
        }
    }
    cin >> p >> q;
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin >> matrixB[i][j];
        }
    }
    // 矩阵乘法 输出矩阵是m行q列
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
           matrixC[i][j] = 0;
           for (int k = 0; k < n; k++) {
               matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
           }
        }
    }
    // 输出
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cout << matrixC[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}