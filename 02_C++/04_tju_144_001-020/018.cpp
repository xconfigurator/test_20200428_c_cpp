/**
 * @file 018.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int a[10] = {2, 5, 8, -3, -6, 9, 12, 10};
    int i = 1;
    while (i < 9) {
        cout << a[i - 1] << " " << a[i + 1] << endl;
        i += 2;
    }
    return 0;
}

// 注意最后一组数据！！