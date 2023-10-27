/**
 * @file 02.4-arithmetic-operations.cpp
 * @author your name (you@domain.com)
 * @brief 
 * https://www.bilibili.com/video/BV1Vf4y1P7pq/?p=10&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * 
 * @version 0.1
 * @date 2023-10-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main() {
    // C++ 11
    auto a = 2;
    a = 3.3;
    cout << "a = " << a << endl;// 3

    // conversion
    int num_int1 = 9;// assigning an int value to num_int1
    int num_int2 = 'C';// implicit conversion
    int num_int3 = (int) 'C';// explicit conversion, C-style
    int num_int4 = int('C');// explicit conversion, function style
    int num_int5 = 2.8;// implicit conversion
    float num_float = 2.3;// implicit conversion from double to float. 推荐写法：float num_float = 2.3f;
    short num_short = 650000; // short取值范围大概正负3万多
    cout << "num_short = " << num_short << endl;// num_short = -5360

    // 实验
    num_int1 = 0x7abcdef0;
    float num_int_float = num_int1;
    num_int2 = (int)(num_int_float);
    cout << "num_int1 = " << num_int1 << endl;
    cout << "num_int2 = " << num_int2 << endl;// 看一下这俩数还相等么？

    // /
    cout << 17 / 5 << endl;
    cout << 17 / 5.0 << endl;
    cout << 17.0 / 5 << endl;
    cout << 17.0 / 5.0 << endl;

    // 
    unsigned char aa = 255;
    unsigned char bb = 1;
    int cc = aa + bb;
    cout << cc << endl;

    // C/C++ Supposes
    // You(the programmer) are smart enough !
    // You know what exactly the source code means!

    return 0;
}