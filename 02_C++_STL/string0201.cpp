/**
 * @file string0201.cpp
 * @author liuyang
 * @brief string
 * 
 * 构造
 * 
 * string();                    // 创建一个空字符串。
 * string(const char* s);       // 使用字符串s初始化。
 * string(const string& str);   // 使用一个string队形初始化另一个string对象(拷贝构造)
 * string(int n, char c);       // 使用n个字符c初始化。
 * 
 * @version 0.1
 * @date 2021-12-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    char* str = "hello";
    string s1;
    string s2(str);
    string s3(s2);
    string s4(4, 'a');

    return 0;
}
