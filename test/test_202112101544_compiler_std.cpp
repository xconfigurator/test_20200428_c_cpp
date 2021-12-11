/**
 * @file test_compiler_std.cpp
 * @author liuyang
 * @brief 查看当前g++支持的C++标准
 * 
 * https://blog.csdn.net/zhangjnwei/article/details/107164932
 * 
 * @version 0.1
 * @date 2021-12-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    cout << __cplusplus << endl;

    if (__cplusplus == 201402) {
        cout << "C++14" << endl;
    }

    if (__cplusplus == 201103) {
        cout << "C++11" << endl;
    }

    return 0;
}