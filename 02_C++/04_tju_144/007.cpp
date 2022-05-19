/**
 * @file 007.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int a, b, c, sum;
    cin >> a >> b >> c; // 输入 5 6 7

    int &resum = sum;
    resum = a + b + c;
    cout << sum << endl;

    return 0;
}