/**
 * @file 04.1-arrays.cpp
 * @author your name (you@domain.com)
 * @brief 
 * https://www.bilibili.com/video/BV1Vf4y1P7pq/?p=16&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 *
 * @version 0.1
 * @date 2023-10-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <algorithm>
#include <cstring> // memset
using namespace std;

int main() {
    // 1. 
    void array();
    array();

    // 2. 
    void variablearray();
    variablearray();

    // 3. C/C++ 不进行数组下标检查
    void index_bound();
    index_bound();

    // 于老师多维数组没怎么讲。只是提实际应用矩阵存储可以使用一维数组自己控制下标。

    return 0;
}

// array.cpp
void array() {
    cout << "# array ###############################" << endl;
    int num_array1[5];// initialized array, random values
    int num_array2[5] = {0, 1, 2, 3, 4};// initialization

    // C++ 11 增强for循环
    for (int i : num_array1) {
        cout << i << "\t";
    }
    cout << endl;

    // C++ 11 for_each
    for_each(num_array2, num_array2 + sizeof(num_array2) / sizeof(num_array2[0]), [](int &e) {
        cout << e << "\t";
    });
    cout << endl;
}

// variable-array.cpp
// 是指声明数组长度的时候使用的是变量（这里并不是指的容器长度可变）
void variablearray() {
    cout << "# variablearray ###############################" << endl;
    int num_array1[5] = {0, 1};// fixed length array, initialized to {0, 1, 0, 0, 0}
    cout << "sizeof(num_array1) = " << sizeof(num_array1) << endl;

    //int len = 1;
    int len = 0;// ok
    while (len < 10) {
        int num_array2[len];// variable-length array
        
        // 赋值
        // int num_array2[len] = {}; // failure
        // int num_array2[len] = {0};// failure
        memset(num_array2, 0, sizeof(num_array2));

        cout << "len = " << len;
        cout << ", sizeof(num_array2) = " << sizeof(num_array2) << endl;
        len++;
    }
}

// index-bound.cpp
// C/C++没有数组下标越界检查
void index_bound() {
    cout << "# index_bound ###############################" << endl;
    int num_array[5];

    for (int idx = -1; idx <= 5; idx++) {// out of bounds
        num_array[idx] = idx * idx;
    }

    for (int idx = -1; idx <= 5; idx++) {// out of bounds
        cout << "num_array[" << idx << "]" << num_array[idx] << endl;
    }
}