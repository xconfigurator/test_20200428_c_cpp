/**
 * @file 082.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main() {
    int a[10] = {1, 2, 2, 2, 3, 4, 4, 5, 1, 5};
    int n = 0, i, j, c, k;

    for (i = 0; i < 10 - n; i++) {
        c = a[i];
        for (j = i + 1; j < 10 - n; j++) {
            if(a[j] == c) {
                for (k = j; k < 10 - n; k ++) {
                    a[k] = a[k + 1];
                }
                n++;
                j--;
            }
        }
    }
    for (i = 0; i < 10 - n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

// 082. 背！
// 作用1：对数组中不重复的数值进行输出。
// 作用2：可以记录每个数字在数组中出现的次数。