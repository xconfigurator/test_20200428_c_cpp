/**
 * @file string0202.cpp
 * @author liuyang
 * @brief string
 * 
 * 赋值
 * 
 * string& operator=(const char* s);            // 
 * string& operator=(const string& s);          // 
 * string& operator=(char c);                   // 
 * string& assign(const char* s);               // 
 * string& assign(const char* s, int count);    // 把s的[s, s+count)个字符赋给当前的字符串。Replaces the contents with copies of the characters in the range [s, s+count). This range can contain null characters.
 * string& assign(const string &s);             // 
 * string& assign(int n, char c);               // 把n个字符c赋给当前字符串
 * 
 * 参考：
 * https://en.cppreference.com/w/cpp/string/basic_string/operator%3D
 * https://en.cppreference.com/w/cpp/string/basic_string/assign
 * 
 * @version 0.1
 * @date 2021-12-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
    // string& operator=(const char* s);
    string s1;
    s1 = "const char* s";

    // string& operator=(const string& s);
    string s2 = s1;

    // string& operator=(char c);              
    //string s3 = 'c';// 注意不能这样写！
    string s3;
    s3 = 'c';

    // string& assign(const char* s);           
    string s4 = "hello";
    s4.assign("string& assign(const char* s);");
    
    // string& assign(const char* s, int count);
    // Replaces the contents with copies of the characters in the range [s, s+count). This range can contain null characters.
    string s5 = "hello";
    s5.assign("string& assign(const char* s, int n);", 6);// 注意区间[s, s + count)

    // string& assign(const string &s);
    string s6 = "hello";
    s6.assign("bar");         
    
    // string& assign(int n, char c);           
    string s7 = "hello";
    s7.assign(4, 'a');

    return 0;
}
