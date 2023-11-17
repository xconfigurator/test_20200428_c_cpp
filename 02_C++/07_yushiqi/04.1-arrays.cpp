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
#include <numeric> // iota
#include <cstring> // memset
using namespace std;

int main() {
    // 1. 
    void array();
    array();

    // 2. 
    void variablearray();
    variablearray();

    // 3. Arrays of unknown size
    void unknown_size();
    unknown_size();

    // 4. copy
    void array_copy();
    array_copy();


    // 5. C/C++ 不进行数组下标检查
    void index_bound();
    index_bound();

    // 6. 多维数组。于老师多维数组没怎么讲。只是提实际应用矩阵存储可以使用一维数组自己控制下标。17：59
    void multi_dimensional_array();
    multi_dimensional_array();

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

    // 202311170912 liuyang 使用stl初始化
    cout << "使用STL Algorithm初始化" << endl;
    int num_array3[5];
    int num_array4[5];
    // fill
    fill(num_array3, num_array3 + (sizeof(num_array3) / sizeof(num_array3[0])), 6);
    for_each(num_array3, num_array3 + (sizeof(num_array3) / sizeof(num_array3[0])), [](int &e) {cout << e << "\t";});
    cout << endl;
    // iota 这个在numeric头文件中
    iota(num_array4, num_array4 + (sizeof(num_array4) / sizeof(num_array4[0])), 1);
    for_each(num_array4, num_array4 + (sizeof(num_array4) / sizeof(num_array4[0])), [](int &e) {cout << e << "\t";});
    cout << endl;
}

// variable-array.cpp
// 是指声明数组长度的时候使用的是变量（这里并不是指的容器长度可变） 03:29讲解
/**
 * 对比Java代码
 * int i = 0;
 * int[] a = new int[i];
 */
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

void unknown_size() {
    int num_array[] = {1, 2, 3, 4, 5};
}

void array_copy() {
    cout << "# array_copy ###############################" << endl;
    int num_array1[5] = {0, 1, 2, 3, 4};
    int num_array2[5];
    int num_array3[5];

    // 赋值
    // int num_array2[5] = num_array1; // failure
    
    // STL copy
    copy(num_array1, num_array1 + 5, num_array2);
    for_each(num_array2, num_array2 + 5, [](int &e) {cout << e << "\t";});
    cout << endl;

    // memcpy
    memcpy(num_array3, num_array1, sizeof(num_array1));
    for_each(num_array3, num_array3 + 5, [](int &e) {cout << e << "\t";});
    cout << endl;
}

// index-bound.cpp
// C/C++没有数组下标越界检查 编译时不会有错误，运行时是否有错误就要看运气了。
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

// 多维数组
void multi_dimensional_array() {
    cout << "# multi_dimensional_array ###############################" << endl;
    int rows = 2;
    int cols = 3;
    int mat[rows][cols] = {{11, 12, 13}, {14, 15, 16}};
    
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cout << mat[r][c] << "\t";
        }
        cout << endl;
    }
}