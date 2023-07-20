/**
 * @file functional_objects_arithmetic.cpp
 * @author your name (you@domain.com)
 * @brief 内建仿函数-算术仿函数
 * 文档：
 * https://en.cppreference.com/w/cpp/utility/functional
 * 视频：
 * https://www.bilibili.com/video/BV1et411b73Z/?p=240&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
 *
 * @version 0.1
 * @date 2023-07-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <functional>
using namespace std;

int main(int argc, char const *argv[]) {
    // 取反
    negate<int> f_n;
    cout << f_n(50) << endl;

    // 加
    plus<int> f_plus;// 注意并不需要也不能写成plus<int, int>
    cout << f_plus(1, 1) << endl;
    return 0;
}