/**
 * @file string0203_append.cpp
 * @author liuyang
 * @brief string
 * 
 * 拼接
 * string& operator+=(const char* str);     
 * string& operator+=(const char c);         
 * string& operator+=(const string& str);
 * string& append(const char *s);                       // 把字符串连接到当前字符串尾端
 * string& append(const char* s, int count);            // Appends characters in the range [s, s + count). This range can contain null characters.
 * string& append(const string&s);                      // 同operator+=(const string& str)
 * string& append(const string &s, int pos, int count); // Appends a substring [pos, pos+count) of str. If the requested substring lasts past the end of the string, or if count == npos, the appended substring is [pos, size()). If pos > str.size(), std::out_of_range is thrown.
 * // 注：assign也有类似的操作 Replaces the contents with a substring [pos, pos+count) of str. If the requested substring lasts past the end of the string, or if count == npos, the resulting substring is [pos, str.size()). If pos > str.size(), std::out_of_range is thrown.
 * 
 * 参考：
 * https://en.cppreference.com/w/cpp/string/basic_string/operator%2B%3D
 * https://en.cppreference.com/w/cpp/string/basic_string/append
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

int main(int argc, char const* argv[]) {
    // string& operator+=(const char* str);     
    string s1 = "foo";
    s1 += "bar";

    // string& operator+=(const char c);         
    string s2 = "foo";
    s2 += 'a';

    // string& operator+=(const string& str);
    string s3 = "foo";
    string tmp(" bar");
    s3 += tmp;
    
    // string& append(const char *s);                       // 把字符串连接到当前字符串尾端
    string s4 = "foo";
    s4.append(" bar");

    // string& append(const char* s, int count);            // Appends characters in the range [s, s + count). This range can contain null characters.
    string s5 = "foo";
    s5.append("string& append(const char* s, int count);", 6);

    // string& append(const string&s);                      // 同operator+=(const string& str)
    string s6 = "foo";
    s6.append(tmp);

    // string& append(const string &s, int pos, int count); // Appends a substring [pos, pos+count) of str. If the requested substring lasts past the end of the string, or if count == npos, the appended substring is [pos, size()). If pos > str.size(), std::out_of_range is thrown.
    // 注：assign也有类似的操作 Replaces the contents with a substring [pos, pos+count) of str. If the requested substring lasts past the end of the string, or if count == npos, the resulting substring is [pos, str.size()). If pos > str.size(), std::out_of_range is thrown.
    string s7 = "foo";
    s7.append(tmp, 1, 1);

    return 0;
}