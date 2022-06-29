/**
 * @file 15.cpp 半素数
 * @author your name (you@domain.com)
 * @brief 
 * 给定一个自然数n， 请说出它的所有严格意义上的除数的和。
 * 定义：一个字眼熟的严格意义上的除数是比它本身小的除数。
 * 比如：
 * 20有5个严格意义上的除数：1,2,4,5,10,所以，除数的和是1 + 2 + 4 + 5 + 10 = 22。
 * 
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*
输入描述：第一个整数是表示测试样例的个数，然后是多行，每行上有一个1到500000的整数。
输出描述：每行输出一个整数，表示每个测试样例的除数和。
输入样例：
3
2
10
20
输出样例：
1
8
22
*/
#include <iostream>
#include <cmath>
using namespace std;

int m[500000];

int main(int argc, char const *argv[]) {
    int i, j, n, d, num;
    d = sqrt(500000.0);

    m[1] = 0; // 1 没有除以1外的约数

    for (i = 2; i <= 500000; ++i) {
        m[i] = 1;
    }

    // 开始统计每个数的约数和
    for (i = 2; i <= d; ++i) {
        m[i * i] += i;
        for (j = i + 1; j <= (500000 / i); ++j) {
            m[i * j] += (i + j);
        }
    }

    cin >> num;
    while (cin >> n) {
        cout << m[n] << endl;
        if (--num == 0) {
            break;
        }
    }
    return 0;
}
