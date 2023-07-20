/**
 * @file sort_sort.cpp
 * @author your name (you@domain.com)
 * @brief 
 * 郭炜 程序设计与算法（一）
 * http://www.icourse163.org/learn/PKU-1001553023?tid=1001995004#/learn/content?type=detail&id=1002616239&cid=1002864481&replay=true
 * 
 * @version 0.1
 * @date 2023-07-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <algorithm>
#include <functional> // 函数对象（仿函数）：greater
using namespace std;

void printArr(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main(int argc, char const *argv[]) {
    // 制定待排序范围
    int a1[] = {15, 4, 3, 9, 7, 2, 6};
    printArr(a1, sizeof(a1) / sizeof(a1[0]));
    sort(a1, a1 + 7);
    printArr(a1, sizeof(a1) / sizeof(a1[0]));

    int a2[] = {15, 4, 3, 9, 7, 2, 6};
    sort(a2, a2 + 3);
    printArr(a2, sizeof(a2) / sizeof(a2[0]));

    int a3[] = {15, 4, 3, 9, 7, 2, 6};
    sort(a3 + 2, a3 + 5);
    printArr(a3, sizeof(a3) / sizeof(a3[0]));

    // 降序排序
    int a4[] = {15, 4, 3, 9, 7, 2, 6};
    sort(a4, a4 + sizeof(a4) / sizeof(a4[0]), greater<int>());
    printArr(a4, sizeof(a4) / sizeof(a4[0]));

    // 自定义排序规则(见结构体排序 sort_stor_02.cpp）

    return 0;
}