/**
 * @file array08pointer.cpp
 * @author your name (you@domain.com)
 * @brief 指针遍历数组示例
 * @version 0.1
 * @date 2022-12-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = a;
    for (int i = 0; i < 10; ++i) {
        cout << *(p + i) << " ";
    }
    cout << endl;

    return 0;
}