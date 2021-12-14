/**
 * @file string0205_compare.cpp
 * @author liuyang
 * @brief string
 * 
 * 字符串之间比较
 * -1    0    1 
 *  <    =    >
 * 
 * int compare(const string &s) const;          // Compares this string to str.
 * int compare(const char* s) const;            // Compares this string to the null-terminated character sequence beginning at the character pointed to by s with length Traits::length(s).
 * 
 * 参考：
 * https://en.cppreference.com/w/cpp/string/basic_string/compare
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
    string str1 = "foo";
    string str2 = "bar";
    cout << str1.compare(str2) << endl;
    cout << str1.compare("foo") << endl;        // 一般就是用做看两个字符串是否相等。equals
    cout << str1.compare("zzzz") << endl;
    return 0;
}