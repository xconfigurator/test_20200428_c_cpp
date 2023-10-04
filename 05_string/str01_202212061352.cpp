/**
 * @file str01_202212061352.cpp
 * @author 郭炜 翁恺
 * @brief 字符串
 * @version 0.1
 * @date 2022-12-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    // 1. 字符数组 读写
    char str1[] = "hello, world";
    cout << str1 << endl;
    str1[1] = 'o';
    str1[4] = 'e';
    cout << str1 << endl;

    // 2. 字符串指针 只读
    // 对C++有警告，ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]gcc。
    char *str2 = "hello, world";// 字符串常量
    cout << str2 << endl;
    //str2[1] = 'o';// Segmentation fault
    //str2[4] = 'e';// Segmentation fault
    //cout << str2 << endl;
    // 翁恺解释：
    char *strtmp = "hello, world";
    printf("为啥有的能改有的不能改，看看地址：\n");
    printf("str2 = %p\n", str2);
    printf("strtmp = %p\n", strtmp);// strtmp与str2指向相同的字面量。其指向的地址都一样。这个貌似跟Java的感觉很类似。
    printf("str1 = %p\n", str1);
    
    // 3. STL string 读写
    string str3 = "hello, world";
    cout << str3 << endl;
    str3[1] = 'o';
    str3[4] = 'e';
    cout << str3 << endl;

    return 0;
}