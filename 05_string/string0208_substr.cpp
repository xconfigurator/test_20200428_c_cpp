/**
 * @file string0208_substr.cpp
 * @author liuyang
 * @brief string
 * 
 * 子串
 * string substr(int pos = 0, int count = npos) const;          // Returns a substring [pos, pos+count). If the requested substring extends past the end of the string, i.e. the count is greater than size() - pos (e.g. if count == npos), the returned substring is [pos, size()).
 * 
 * 参考：
 * https://en.cppreference.com/w/cpp/string/basic_string/substr
 * @version 0.1
 * @date 2021-12-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    string str = "foo, bar";
    string subStr = str.substr(5, 3);       // bar

    string str2 = "xconfigurator@hotmail.com";
    string username = str2.substr(0, str2.find("@"));
    return 0;
}