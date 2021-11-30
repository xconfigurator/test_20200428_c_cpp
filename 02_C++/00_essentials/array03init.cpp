/**
 * @file array03init.cpp
 * @author liuyang
 * @brief 数组初始化
 * 
 * 注：
 * a[i] = a + i * sizeof(a[0])
 * a[i][j] = a + i * M * sizeof(a[0][0]) + j * sizeof(a[0][0]) 
 * (二维数组是N * M)
 * 注2：
 * 二维数组的每一行，实际上都是一个一维数组。a[0], a[1]都可以看作是一个一维数组的名字，可以直接当一维数组使用。
 * 
 * @version 0.1
 * @date 2021-11-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

void printArr(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void info(int arr[]) {
    cout << "sizeof(arr) = " << sizeof(arr) << endl;
    cout << "sizeof(arr) / sizeof(arr[0]) = " << sizeof(arr) / sizeof(arr[0]) << endl; 
}

int main(int argc, char const *argv[]) {
    // demo1 初始化
    int a1[4] = {1, 2, 3, 4};
    printArr(a1, 4);
    printArr(a1, sizeof(a1) / sizeof(int));

    // demo2 初始化时 {}中值的个数可以少于元素个数。相当于只给前面部分元素赋值，后面的元素，其存储空间里的每一个字节都被写入二进制的0(每一个bit都是0)；
    int a2[4] = {1, 2, 3};
    printArr(a2, sizeof(a2) / sizeof(a2[0]));

    // demo3 定义数组的时候，如给全部元素赋值，则可以不给出数组元素的个数
    int a3[] = {1, 2, 3, 4, 5};
    printArr(a3, sizeof(a3) / sizeof(a3[0]));
    info(a3);// 可以看出 printArr传数组的时候 后面那个lenght是必要的。

    // 02:26 有时候会用一个数组存放一些固定不变的值，以取代复杂的程序分支结构。 见array04.cpp

    return 0;
}