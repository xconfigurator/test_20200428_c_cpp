/**
 * @file string0204_find_rfind_replace.cpp
 * @author liuyang
 * @brief 
 * 
 * 查找\替换
 * 
 * 查找：查找指定字符串是否存在。
 * 替换：在指定位置替换字符串。
 * 
 * int find(const string& str, int pos = 0) const;              // Finds the first substring equal to str.
 * int find(const char* s, int pos = 0) const;                  // Finds the first substring equal to the character string pointed to by s. The length of the string is determined by the first null character using Traits::length(s).
 * int find(const char* s, int pos, int count) const;           // Finds the first substring equal to the range [s, s+count). This range may contain null characters.
 * int find(const char c, int pos = 0) const;                   // Finds the first character ch (treated as a single-character substring by the formal rules below).
 * int rfind(const string& str, int pos = npos) const;          // Finds the last substring equal to str.
 * int rfind(const char* s, int pos = npos) const;              // Finds the last substring equal to the character string pointed to by s. The length of the string is determined by the first null character using Traits::length(s).
 * int rfind(const char* s, int pos, int count) const;          // Finds the last substring equal to the range [s, s+count). This range can include null characters.
 * int rfind(const char c, int pos = npos) const;               // Finds the last character equal to ch.
 * 
 * string& replace(int pos, int count, const string& str);      // string str
 * string& replace(int pos, int count, const char* s);          // characters in the range [cstr, cstr + Traits::length(cstr));
 * 
 * 参考：
 * https://en.cppreference.com/w/cpp/string/basic_string/find
 * https://en.cppreference.com/w/cpp/string/basic_string/rfind
 * https://en.cppreference.com/w/cpp/string/basic_string/replace
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

void testFind() {
    // int find(const string& str, int pos = 0) const;              // Finds the first substring equal to str.
    // int find(const char* s, int pos = 0) const;                  // Finds the first substring equal to the character string pointed to by s. The length of the string is determined by the first null character using Traits::length(s).
    string str2 = "abcdefghijklmnpodeqr";
    int str2Idx = 0;
    str2Idx = str2.find("de");      // 3
    str2Idx = str2.find("de", 3);   // 3
    str2Idx = str2.find("de", 17);  // -1

    // int find(const char* s, int pos, int count) const;           // Finds the first substring equal to the range [s, s+count). This range may contain null characters.
    // int find(const char c, int pos = 0) const;                   // Finds the first character ch (treated as a single-character substring by the formal rules below).
    // int rfind(const string& str, int pos = npos) const;          // Finds the last substring equal to str.
    // int rfind(const char* s, int pos = npos) const;              // Finds the last substring equal to the character string pointed to by s. The length of the string is determined by the first null character using Traits::length(s).
    string str6 = str2;
    int str6Idx = 0;
    str6Idx = str6.rfind("de");     // 16 
    str6Idx = str6.rfind("de", 16); // 16
    str6Idx = str6.rfind("de", 15); // 3
    str6Idx = str6.rfind("de", 4);  // 3
    str6Idx = str6.rfind("de", 3);  // 3
    str6Idx = str6.rfind("de", 2);  // -1
    // int rfind(const char* s, int pos, int count) const;          // Finds the last substring equal to the range [s, s+count). This range can include null characters.
    // int rfind(const char c, int pos = npos) const;               // Finds the last character equal to ch.// 
}

void testReplace() {
    // string& replace(int pos, int count, const string& str);      // string str
    // string& replace(int pos, int count, const char* s);          // characters in the range [cstr, cstr + Traits::length(cstr));
    string str2 = "1234567890";
    str2.replace(1, 2, "ABC");      // "1ABC4567890"
}

int main(int argc, char const *argv[]) {
    testFind();
    testReplace();
    return 0;
}
