/**
 * @file 02.3-floating-point-numbers.cpp
 * @author your name (you@domain.com)
 * @brief 
 * https://www.bilibili.com/video/BV1Vf4y1P7pq/?p=9&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 * 
 * @version 0.1
 * @date 2023-10-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

#define FLT_EPSILON 1e-12f

int main() {
    // float 
    float f1 = 1.2f;
    float f2 = f1 * 1000000000000000; //1.0e15
    cout << std::fixed << std::setprecision(15) << f1 << endl;
    cout << std::fixed << std::setprecision(15) << f2 << endl;

    // precision
    float fp1 = 2.34E+10f;
    float fp2 = fp1 + 10;
    cout.setf(ios_base::fixed, ios_base::floatfield);// fixed-point
    cout << "fp1 = " << fp1 << endl;
    cout << "fp2 = " << fp2 << endl;
    cout << "fp1 - fp2 = " << fp1 - fp2 << endl;// 会发现差没了竟然？！
    cout << "(fp1 - fp2 == 0) = " << (fp1 - fp2 == 0) << endl;// 1

    // 判断两个浮点数是否相等
    if (fp1 == fp2) {
        cout << "不要这样比较： fp1 == fp2" << endl;
    }
    if (fabs(fp1 - fp2) < FLT_EPSILON) {
        cout << "推荐这样比较：fabs(fp1 - fp2) < FLT_EPSILON" << endl;
    }

    // inf nan
    // infinity     (Exponent=11111111, fraction=0)  e.g. 2.0f / 0.0f
    // not a number (Exponent=11111111, fraction!=0) e.g. 0.0f / 0.0f

    return 0;
}