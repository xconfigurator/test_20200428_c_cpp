/**
 * @file test_202310251743_date_types.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-10-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

int main() {
    // 整型
    // C and C++ standards do not fix the widths of them
    // 视频：https://www.bilibili.com/video/BV1Vf4y1P7pq/?p=7&spm_id_from=pageDriver&vd_source=8bd7b24b38e3e12c558d839b352b32f4
    // 文档：https://en.cppreference.com/w/cpp/language/types
    cout << "sizeof(short int)\t" << sizeof(short int) << endl;
    cout << "sizeof(short)\t\t" << sizeof(short) << endl;

    cout << "sizeof(int)\t\t" << sizeof(int) << endl;
    
    cout << "sizeof(long int)\t" << sizeof(long int) << endl;
    cout << "sizeof(long)\t\t" << sizeof(long) << endl;

    cout << "sizeof(long long int)\t" << sizeof(long long int) << endl;
    cout << "sizeof(long long)\t" << sizeof(long long) << endl;

    cout << "sizeof(size_t)\t\t" << sizeof(size_t) << endl;

    // char
    cout << "sizeof(char)\t\t" << sizeof(char) << endl;
    
    return 0;
}