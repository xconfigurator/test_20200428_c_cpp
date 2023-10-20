/**
 * @file 02.6.cpp
 * @author your name (you@domain.com)
 * @brief 
 *
 * 求出1~1000之间的完全平方数。
 * 所谓完全平方数是指能够表示成为另一个整数的平方的整数。
 * 要求每行输出8个数。
 * 
 * @version 0.1
 * @date 2023-10-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n = 0;
    for (int i = 1; i < 40; i++) {// 40 * 40 > 1000, 实际上还可以再小。比如32 * 32 = 1024 31 * 31 = 961
        int j = i * i;
        if (j > 1000) { 
            //continue;
            break;
        }
        if (n % 8 == 0) {
            cout << endl;
        }
        n++;
        cout << setw(8) << j;
    }
    return 0;
}