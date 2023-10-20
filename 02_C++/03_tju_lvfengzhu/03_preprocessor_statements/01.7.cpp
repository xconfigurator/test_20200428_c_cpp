/**
 * @file 02.7.cpp
 * @author your name (you@domain.com)
 * @brief 分析程序运行结果 (杨辉三角)
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main() {
    int i, j, a[8][8];
    **a = 1;
    for (i = 1; i < 8; i++) {
        **(a + i) = 1;
        *(*(a + i) + i) = 1;
        for (j = 1; j < i; j++) {
            *(*(a + i) + j) = *(*(a + i - 1) + j -1) + *(*(a + i - 1) + j);
        }
    }
    for (i = 0; i < 8; i++) {
        for (j = 0; j <= i; j++) {
            cout << "\t" << *(*(a + i) + j);
        }
        cout << endl;
    }
    return 0;
}