/**
 * @file 069.cpp
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

int main(int argc, char const *argv[]) {
    float a = 4.0, b = 8.0, c = 1.5;
    int d1 = 5, d2 = 7.5, d3 = 20.0;
    float p, q;
    int t1, t2;

    t1 = d1 + d2 / c * a;// 25 错了！
    t2 = b / a * b * d1 + 0.5;// 80 ok
    p = c * d1 + c * d3;// 37.5 ok
    q = d1 % d2 - d3 / d1;// 3.5 错了！
    cout << p << " " << q << " " << t1 << " " << t2 << endl;
    return 0;
}

// 5 * 7.5 