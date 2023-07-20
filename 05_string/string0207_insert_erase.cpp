/**
 * @file string0207_insert_erase.cpp
 * @author liuyang
 * @brief string
 * 
 * insert/erase (Java的String没有对应操作，使用StringBuilder或StringBuffer)
 * 
 * string& insert(int pos, const char* s);
 * string& insert(int pos, const string& str);
 * string& insert(int pos, int n, char c);          // 在指定位置插入n个c
 * string& erase(int pos, int n = pos);             // 删除从pos开始的n个字符
 * 
 * 参考：
 * https://en.cppreference.com/w/cpp/string/basic_string/insert
 * https://en.cppreference.com/w/cpp/string/basic_string/erase
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
    string s1 = "foo";
    
    s1.insert(s1.length(), "bar");
    //cout << s1 << endl;
    
    //s1.erase(0);              // 注意：s1.erase(0);字符串就清空了。
    s1.erase(0, 1);              
    //cout << s1 << endl;
    
    s1.erase(0, s1.length());   // 删空。
    //cout << s1 << endl;
    
    s1 = "hei";
    s1.clear();

    s1 = "hei";
    s1.erase(0);

    return 0;
}