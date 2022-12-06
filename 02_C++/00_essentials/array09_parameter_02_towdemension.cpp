/**
 * @file array06towdemension.cpp
 * @author liuyang
 * @brief 二维数组初始化（9:36）
 * @version 0.1
 * @date 2021-11-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

void printArr2D(int *arr, int row, int col) { // 不能写称 int arr[][]
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << *(arr + i * row + j) << "\t";
        }
        cout << endl;
    }
}

void printArr2D2(int a[][2], int row, int col) {// 如果这样定义，则col就没有意义了。这里只是展示一下这种用法。
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[]) {
    // demo01 
    int a1[2][2] = {{2, 2}, {2, 2}};        // Java不能这样搞
    //int a12[][] =  {{2, 2}, {2, 2}};      // C++ 不能这样搞
    printArr2D((int *)a1, 2, 2);              // 注意这个强制类型转换(int *)
    
    // demo02 如果对每行都进行了初始化，则也可以不给出行数
    int a2[][2] = {{2, 2}, {2, 2}};
    printArr2D2(a2, 2, 2);
    
    return 0;
}