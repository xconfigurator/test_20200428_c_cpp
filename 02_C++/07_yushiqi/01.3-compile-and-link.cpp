/**
 * @file 01.3-compile-and-link.cpp
 * @author your name (you@domain.com)
 * @brief 
 * 
 * https://www.bilibili.com/video/BV1Vf4y1P7pq/?p=4&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * 
 * main(): called by startup code
 * mul() is called in main()
 * 
 * @version 0.1
 * @date 2023-10-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int mul (int a, int b) {
    return a * b;
}

int main() {
    int a, b;
    int result;

    cout << "Pick two integers:";
    cin >> a;
    cin >> b;

    result = mul(a, b);
    cout << "The result is " << result << endl;
    return 0;
}