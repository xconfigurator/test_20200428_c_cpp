/**
 * @file pointer01_202212061413.cpp
 * @author your name (you@domain.com)
 * @brief 演示指针数组
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
    // 指针数组
    int *pArr[10] = {a, a + 1, a + 2, a + 3, a + 4, a + 5, a + 6, a + 7, a + 8, a + 9};
    for (int i = 0; i < 10; ++i) {
        cout << *pArr[i] << " ";
    }
    cout << endl;

    return 0;
}
